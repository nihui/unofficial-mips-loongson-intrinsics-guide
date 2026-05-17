#!/usr/bin/env python3

from __future__ import annotations

import argparse
import dataclasses
import pathlib
import re
import subprocess
import sys
import tempfile


ROOT = pathlib.Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

import main  # noqa: E402
from tools import probe_intrinsics  # noqa: E402


DEFAULT_CC = (
    ROOT
    / "mips-loongson-gcc7.3-linux-gnu"
    / "2019.06-29"
    / "bin"
    / "mips-linux-gnu-gcc"
)

SKIP_CATEGORIES = {"memory", "branch", "control_status"}
SKIP_MNEMONIC_PARTS = {
    "copy",
    "insert",
    "extract",
    "extrins",
    "ld",
    "st",
    "vld",
    "vst",
    "xvld",
    "xvst",
}
UNROLL = 100
GPR_REGS = list(range(12, 26))


@dataclasses.dataclass(frozen=True)
class AsmTemplate:
    mnemonic: str
    operands: tuple[str, ...]
    source_line: str


@dataclasses.dataclass(frozen=True)
class BenchCase:
    kind: str
    intrinsic: str
    instruction: str
    extension: str
    payload: str
    repeat: int


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Generate inline-assembly latency/throughput microbenchmarks."
    )
    parser.add_argument(
        "--extension",
        action="append",
        required=True,
        help="Extension key to generate, repeatable, or 'all'.",
    )
    parser.add_argument("--output-dir", required=True, type=pathlib.Path)
    parser.add_argument("--cc", type=pathlib.Path, default=DEFAULT_CC)
    parser.add_argument("--tmp-dir", type=pathlib.Path)
    parser.add_argument("--max-per-extension", type=int)
    parser.add_argument(
        "--n",
        type=int,
        default=2000,
        help="Default loop count compiled into the benchmark.",
    )
    return parser.parse_args()


def extension_map() -> dict[str, main.Extension]:
    return {ext.key: ext for ext in main.EXTENSIONS}


def select_extensions(values: list[str]) -> list[main.Extension]:
    known = extension_map()
    requested: list[str] = []
    for value in values:
        requested.extend(part.strip() for part in value.split(",") if part.strip())
    if "all" in requested:
        return list(main.EXTENSIONS)

    result: list[main.Extension] = []
    seen: set[str] = set()
    for key in requested:
        if key not in known:
            valid = ", ".join(sorted(known))
            raise SystemExit(f"unknown extension {key!r}; expected one of: {valid}, all")
        if key not in seen:
            result.append(known[key])
            seen.add(key)
    return result


def c_identifier(name: str) -> str:
    return re.sub(r"[^A-Za-z0-9_]", "_", name)


def normalized_mnemonic(text: str) -> str:
    return re.sub(r"[_.]", "", text.lower())


def compiler_flags(ext: main.Extension) -> list[str]:
    flags = [
        "-O2",
        "-S",
        "-mabi=64",
        "-mips64r2",
        f"-I{ROOT / 'include'}",
    ]
    if ext.key == "sx":
        flags.append("-mloongson-sx")
    elif ext.key == "asx":
        flags.extend(["-mloongson-sx", "-mloongson-asx"])
    elif ext.key == "msa":
        flags.append("-mmsa")
    elif ext.key == "msa2":
        flags.extend(["-mmsa", "-mmsa2"])
    elif ext.key == "msa_crypto":
        flags.extend(["-mmsa", "-mmsa2", "-mmsa-crypto"])
    elif ext.key == "mmi":
        flags.append("-mloongson-mmi")
    return flags


def can_probe(entry: main.Intrinsic) -> tuple[bool, str]:
    if entry.category in SKIP_CATEGORIES:
        return False, f"category {entry.category}"
    if entry.extension.key == "csr":
        return False, "control/status extension"
    if entry.instruction == "N/A":
        return False, "unknown instruction"
    lowered = entry.instruction.lower()
    if any(part in lowered.split(".") or lowered.startswith(part) for part in SKIP_MNEMONIC_PARTS):
        return False, f"instruction form {entry.instruction}"
    return_type = probe_intrinsics.clean_type(entry.return_type)
    if return_type == "void":
        return False, "void return"
    if not probe_intrinsics.is_supported_type(return_type):
        return False, f"return type {return_type}"
    try:
        for arg in probe_intrinsics.split_args(entry.args):
            type_name, _ = probe_intrinsics.parse_arg(arg)
            if not probe_intrinsics.is_supported_type(type_name):
                return False, f"argument type {type_name}"
    except ValueError as exc:
        return False, str(exc)
    return True, ""


def literal_for_arg(type_name: str, index: int, name: str) -> str:
    value = 1 if probe_intrinsics.is_immediate_arg(type_name, name) else index + 3
    if "imm0_31" in name:
        value = 1
    elif "imm0_255" in name:
        value = 7
    elif "imm0_15" in name:
        value = 3
    elif "imm0_7" in name:
        value = 2
    if probe_intrinsics.is_unsigned_type(type_name):
        return f"(({type_name}){value}u)"
    return f"(({type_name}){value})"


def probe_call_arguments(entry: main.Intrinsic) -> tuple[list[str], list[str]]:
    declarations: list[str] = []
    expressions: list[str] = []
    for index, arg in enumerate(probe_intrinsics.split_args(entry.args)):
        type_name, name = probe_intrinsics.parse_arg(arg)
        type_name = probe_intrinsics.clean_type(type_name)
        if probe_intrinsics.is_immediate_arg(type_name, name):
            expressions.append(literal_for_arg(type_name, index, name))
        else:
            arg_name = f"a{index}"
            declarations.append(f"{type_name} {arg_name}")
            expressions.append(arg_name)
    return declarations, expressions


def render_probe_source(ext: main.Extension, entries: list[tuple[int, main.Intrinsic]]) -> str:
    lines = [
        "/* Generated temporarily by tools/measure_latency_throughput.py. */",
        f"#include <{ext.include}>",
        "",
    ]
    for index, entry in entries:
        declarations, expressions = probe_call_arguments(entry)
        args = ", ".join(declarations) if declarations else "void"
        call = f"{entry.name}({', '.join(expressions)})"
        lines.extend(
            [
                f"{entry.return_type} lt_probe_{index}({args})",
                "{",
                f"  return {call};",
                "}",
                "",
            ]
        )
    return "\n".join(lines)


def split_operands(text: str) -> tuple[str, ...]:
    result: list[str] = []
    current: list[str] = []
    depth = 0
    for ch in text:
        if ch in "[(":
            depth += 1
        elif ch in "])" and depth:
            depth -= 1
        if ch == "," and depth == 0:
            result.append("".join(current).strip())
            current = []
            continue
        current.append(ch)
    if current:
        result.append("".join(current).strip())
    return tuple(result)


def parse_instruction_line(line: str) -> tuple[str, tuple[str, ...]] | None:
    stripped = line.strip()
    if not stripped or stripped.startswith(".") or stripped.endswith(":"):
        return None
    if stripped.startswith(("#", "jr", "j ", "b", "move", "nop")):
        return None
    match = re.match(r"([A-Za-z0-9_.]+)\s*(.*)$", stripped)
    if not match:
        return None
    mnemonic = match.group(1)
    operands = split_operands(match.group(2).strip()) if match.group(2).strip() else ()
    return mnemonic, operands


def function_bodies(asm_text: str) -> dict[int, list[str]]:
    bodies: dict[int, list[str]] = {}
    current: int | None = None
    for line in asm_text.splitlines():
        stripped = line.strip()
        label = re.fullmatch(r"lt_probe_(\d+):", stripped)
        if label:
            current = int(label.group(1))
            bodies[current] = []
            continue
        if current is None:
            continue
        if stripped == f".end\tlt_probe_{current}" or stripped == f".end lt_probe_{current}":
            current = None
            continue
        bodies[current].append(line)
    return bodies


def template_from_body(entry: main.Intrinsic, body: list[str]) -> tuple[AsmTemplate | None, str]:
    target = normalized_mnemonic(entry.instruction)
    candidates: list[AsmTemplate] = []
    fallback_candidates: list[AsmTemplate] = []
    for line in body:
        parsed = parse_instruction_line(line)
        if not parsed:
            continue
        mnemonic, operands = parsed
        if mnemonic not in {"dmtc1", "dmfc1", "mtc1", "mfc1"} and not any(
            part in mnemonic for part in ["insert", "copy"]
        ):
            fallback_candidates.append(AsmTemplate(mnemonic, operands, line.strip()))
        if normalized_mnemonic(mnemonic) == target:
            candidates.append(AsmTemplate(mnemonic, operands, line.strip()))
    if not candidates and len(fallback_candidates) == 1:
        candidates = fallback_candidates
    if not candidates:
        return None, "target instruction not found in compiler assembly"
    template = candidates[-1]
    if any("[" in operand or "(" in operand for operand in template.operands):
        return None, f"unsupported operand form: {template.source_line}"
    return template, ""


def compile_probe_batch(
    cc: pathlib.Path,
    ext: main.Extension,
    entries: list[tuple[int, main.Intrinsic]],
    tmp_dir: pathlib.Path,
) -> tuple[dict[int, AsmTemplate], dict[int, str], str]:
    source = tmp_dir / f"lt_probe_{ext.key}_{entries[0][0]}_{entries[-1][0]}.c"
    asm_path = source.with_suffix(".s")
    source.write_text(render_probe_source(ext, entries), encoding="utf-8")
    cmd = [str(cc), *compiler_flags(ext), str(source), "-o", str(asm_path)]
    result = subprocess.run(cmd, text=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if result.returncode != 0:
        return {}, {}, result.stderr.strip() or result.stdout.strip()

    bodies = function_bodies(asm_path.read_text(encoding="utf-8"))
    templates: dict[int, AsmTemplate] = {}
    skipped: dict[int, str] = {}
    for index, entry in entries:
        template, reason = template_from_body(entry, bodies.get(index, []))
        if template:
            templates[index] = template
        else:
            skipped[index] = reason
    return templates, skipped, ""


def extract_templates(
    cc: pathlib.Path,
    ext: main.Extension,
    entries: list[tuple[int, main.Intrinsic]],
    tmp_dir: pathlib.Path,
) -> tuple[dict[int, AsmTemplate], dict[int, str]]:
    if not entries:
        return {}, {}
    templates, skipped, error = compile_probe_batch(cc, ext, entries, tmp_dir)
    if not error:
        return templates, skipped
    if len(entries) == 1:
        return {}, {entries[0][0]: "compiler rejected probe: " + error.splitlines()[0]}
    middle = len(entries) // 2
    left_templates, left_skipped = extract_templates(cc, ext, entries[:middle], tmp_dir)
    right_templates, right_skipped = extract_templates(cc, ext, entries[middle:], tmp_dir)
    left_templates.update(right_templates)
    left_skipped.update(right_skipped)
    return left_templates, left_skipped


REGISTER_RE = re.compile(r"\$(?:(w|x|r|f)?([0-9]+))")


def operand_register(operand: str) -> tuple[str, int] | None:
    matches = REGISTER_RE.findall(operand)
    if len(matches) != 1:
        return None
    prefix, number = matches[0]
    if prefix == "r":
        prefix = ""
    return prefix, int(number)


def register_operand_indices(operands: tuple[str, ...]) -> tuple[str, list[int]]:
    classes: list[str] = []
    indices: list[int] = []
    for index, operand in enumerate(operands):
        found = operand_register(operand)
        if not found:
            continue
        prefix, _ = found
        classes.append(prefix)
        indices.append(index)
    if not classes or len(set(classes)) != 1:
        return "", []
    return classes[0], indices


def format_register(prefix: str, ordinal: int) -> str:
    if prefix in {"w", "x", "f"}:
        return f"${prefix}{ordinal}"
    return f"${GPR_REGS[ordinal]}"


def replace_operand_register(operand: str, prefix: str, ordinal: int) -> str:
    return REGISTER_RE.sub(format_register(prefix, ordinal), operand, count=1)


def reads_destination(entry: main.Intrinsic, template: AsmTemplate) -> bool:
    op = entry.instruction.lower().replace("_", ".")
    if any(token in op for token in ["madd", "msub", "bsel", "bitsel", "shuf", "extrins", "insve"]):
        return True
    return False


def instruction_text(template: AsmTemplate, operands: list[str]) -> str:
    if operands:
        return f"{template.mnemonic} {', '.join(operands)}\n"
    return f"{template.mnemonic}\n"


def render_latency_cases(entry: main.Intrinsic, template: AsmTemplate) -> list[BenchCase]:
    prefix, reg_indices = register_operand_indices(template.operands)
    if not prefix and not reg_indices:
        return []
    dest_index = reg_indices[0]
    source_indices = list(reg_indices[1:])
    if reads_destination(entry, template):
        source_indices.insert(0, dest_index)
    if not source_indices:
        return []

    cases: list[BenchCase] = []
    for dep_number, dep_index in enumerate(source_indices):
        next_reg = 1
        operands = list(template.operands)
        for operand_index in reg_indices:
            if operand_index == dest_index or operand_index == dep_index:
                reg_ordinal = 0
            else:
                reg_ordinal = next_reg
                next_reg += 1
            if prefix == "" and reg_ordinal >= len(GPR_REGS):
                break
            operands[operand_index] = replace_operand_register(operands[operand_index], prefix, reg_ordinal)
        else:
            cases.append(
                BenchCase(
                    kind="latency",
                    intrinsic=entry.name,
                    instruction=entry.instruction,
                    extension=entry.extension.key,
                    payload=instruction_text(template, operands),
                    repeat=1,
                )
            )
    return cases


def render_throughput_case(entry: main.Intrinsic, template: AsmTemplate) -> BenchCase | None:
    prefix, reg_indices = register_operand_indices(template.operands)
    if not prefix and not reg_indices:
        return None
    block_size = max(1, len(reg_indices))
    if prefix in {"w", "x", "f"}:
        streams = max(1, min(8, 32 // block_size))
    else:
        streams = max(1, min(4, len(GPR_REGS) // block_size))
    payload_parts: list[str] = []
    for stream in range(streams):
        operands = list(template.operands)
        base = stream * block_size
        for local, operand_index in enumerate(reg_indices):
            operands[operand_index] = replace_operand_register(operands[operand_index], prefix, base + local)
        payload_parts.append(instruction_text(template, operands))
    return BenchCase(
        kind="throughput",
        intrinsic=entry.name,
        instruction=entry.instruction,
        extension=entry.extension.key,
        payload="".join(payload_parts),
        repeat=streams,
    )


def escape_c_string(text: str) -> str:
    return text.replace("\\", "\\\\").replace('"', '\\"').replace("\n", "\\n")


def render_benchmark_function(name: str, payload: str) -> str:
    return "\n".join(
        [
            f"static NOINLINE void {name}(int n)",
            "{",
            "  for (int i = 0; i < n; i++)",
            f'    asm volatile(".align 4\\n" HUNDRED("{escape_c_string(payload)}")',
            '                 : : : "$12", "$13", "$14", "$15", "$16", "$17", "$18",',
            '                         "$19", "$20", "$21", "$22", "$23", "$24", "$25",',
            '                         "$f0", "$f1", "$f2", "$f3", "$f4", "$f5",',
            '                         "$f6", "$f7", "$f8", "$f9", "$f10", "$f11",',
            '                         "$f12", "$f13", "$f14", "$f15", "$f16", "$f17",',
            '                         "$f18", "$f19", "$f20", "$f21", "$f22", "$f23",',
            '                         "$f24", "$f25", "$f26", "$f27", "$f28", "$f29",',
            '                         "$f30", "$f31",',
            '                         "memory");',
            "}",
            "",
        ]
    )


def render_measure_source(
    ext: main.Extension,
    cases: list[BenchCase],
    skipped: list[tuple[main.Intrinsic, str]],
    n: int,
) -> str:
    lines = [
        "/* Generated by tools/measure_latency_throughput.py. */",
        "#define _GNU_SOURCE 1",
        "#include <assert.h>",
        "#include <errno.h>",
        "#include <linux/perf_event.h>",
        "#include <sched.h>",
        "#include <setjmp.h>",
        "#include <signal.h>",
        "#include <stdint.h>",
        "#include <stdio.h>",
        "#include <stdlib.h>",
        "#include <string.h>",
        "#include <sys/syscall.h>",
        "#include <sys/time.h>",
        "#include <unistd.h>",
        "",
        "#define NOINLINE __attribute__((noinline))",
        "#define FIVE(X) X X X X X",
        "#define TEN(X) FIVE(X) FIVE(X)",
        "#define FIFTY(X) TEN(X) TEN(X) TEN(X) TEN(X) TEN(X)",
        "#define HUNDRED(X) FIFTY(X) FIFTY(X)",
        f"static int default_n = {n};",
        "static sigjmp_buf resume_point;",
        "",
        render_benchmark_function("bench_unit", "daddu $12, $13, $12\n"),
    ]

    function_rows: list[str] = []
    for index, case in enumerate(cases):
        fn = f"bench_{index}"
        lines.append(render_benchmark_function(fn, case.payload))
        function_rows.append(
            f'  {{"{case.kind}", "{case.intrinsic}", "{case.instruction}", '
            f'"{case.extension}", {fn}, {case.repeat}}},'
        )

    lines.extend(
        [
            "static int setup_perf_cycles(void)",
            "{",
            "  struct perf_event_attr attr;",
            "  memset(&attr, 0, sizeof(attr));",
            "  attr.type = PERF_TYPE_HARDWARE;",
            "  attr.size = sizeof(attr);",
            "  attr.config = PERF_COUNT_HW_CPU_CYCLES;",
            "  attr.disabled = 0;",
            "  attr.pinned = 1;",
            "  attr.exclude_kernel = 1;",
            "  return (int)syscall(SYS_perf_event_open, &attr, 0, -1, -1, 0);",
            "}",
            "",
            "static int perf_fd_cycles = -1;",
            "",
            "static uint64_t read_counter(void)",
            "{",
            "  if (perf_fd_cycles >= 0) {",
            "    uint64_t counter = 0;",
            "    int res = read(perf_fd_cycles, &counter, sizeof(counter));",
            "    assert(res == (int)sizeof(counter));",
            "    return counter;",
            "  }",
            "  struct timeval tv;",
            "  gettimeofday(&tv, NULL);",
            "  return (uint64_t)tv.tv_sec * 1000000000ull + (uint64_t)tv.tv_usec * 1000ull;",
            "}",
            "",
            "static void bind_to_core0(void)",
            "{",
            "  cpu_set_t set;",
            "  CPU_ZERO(&set);",
            "  CPU_SET(0, &set);",
            "  sched_setaffinity(0, sizeof(set), &set);",
            "}",
            "",
            "static void sigill_handler(int sig, siginfo_t *info, void *ucontext)",
            "{",
            "  (void)sig;",
            "  (void)info;",
            "  (void)ucontext;",
            "  siglongjmp(resume_point, 1);",
            "}",
            "",
            "struct test_case {",
            "  const char *kind;",
            "  const char *intrinsic;",
            "  const char *instruction;",
            "  const char *extension;",
            "  void (*fn)(int);",
            "  int repeat;",
            "};",
            "",
            "static struct test_case tests[] = {",
        ]
    )
    lines.extend(function_rows)
    lines.extend(
        [
            "};",
            "",
            "static double measure_test(void (*fn)(int), int n, int repeat, double unit_elapsed, const char **note)",
            "{",
            "  uint64_t begin = read_counter();",
            "  if (sigsetjmp(resume_point, 1)) {",
            '    *note = "SIGILL";',
            "    return -1.0;",
            "  }",
            "  fn(n);",
            "  uint64_t elapsed = read_counter() - begin;",
            "  if (unit_elapsed <= 0.0)",
            "    return -1.0;",
            "  *note = \"\";",
            "  return ((double)elapsed / unit_elapsed) / (double)repeat;",
            "}",
            "",
            "int main(int argc, char **argv)",
            "{",
            "  int n = default_n;",
            "  if (argc > 1)",
            "    n = atoi(argv[1]);",
            "  if (n <= 0)",
            "    n = default_n;",
            "",
            "  bind_to_core0();",
            "  perf_fd_cycles = setup_perf_cycles();",
            "  if (perf_fd_cycles < 0)",
            '    fprintf(stderr, "perf_event_open failed: %s; falling back to wall-clock time\\n", strerror(errno));',
            "",
            "  struct sigaction action;",
            "  memset(&action, 0, sizeof(action));",
            "  action.sa_flags = SA_SIGINFO;",
            "  action.sa_sigaction = sigill_handler;",
            "  sigaction(SIGILL, &action, NULL);",
            "",
            "  uint64_t begin = read_counter();",
            "  bench_unit(n);",
            "  double unit_elapsed = (double)(read_counter() - begin);",
            "",
            '  puts("kind,intrinsic,instruction,extension,cycles,notes");',
            "  unsigned long count = sizeof(tests) / sizeof(tests[0]);",
            "  for (unsigned long i = 0; i < count; i++) {",
            '    const char *note = "";',
            "    double cycles = measure_test(tests[i].fn, n, tests[i].repeat, unit_elapsed, &note);",
            '    printf("%s,%s,%s,%s,%.4f,%s\\n", tests[i].kind, tests[i].intrinsic,',
            "           tests[i].instruction, tests[i].extension, cycles, note);",
            "  }",
            "  return 0;",
            "}",
        ]
    )

    if skipped:
        lines.extend(["", "/* Skipped intrinsics:"])
        for entry, reason in skipped:
            lines.append(f" * {entry.name}: {reason}")
        lines.append(" */")
    lines.append("")
    return "\n".join(lines)


def generate_for_extension(
    ext: main.Extension,
    output_dir: pathlib.Path,
    cc: pathlib.Path,
    tmp_dir: pathlib.Path,
    max_per_extension: int | None,
    n: int,
) -> tuple[pathlib.Path, int, int, int]:
    selected: list[tuple[int, main.Intrinsic]] = []
    skipped: list[tuple[main.Intrinsic, str]] = []
    for index, entry in enumerate(main.parse_header(ext)):
        ok, reason = can_probe(entry)
        if not ok:
            skipped.append((entry, reason))
            continue
        if max_per_extension is not None and len(selected) >= max_per_extension:
            skipped.append((entry, "over --max-per-extension"))
            continue
        selected.append((index, entry))

    templates, template_skips = extract_templates(cc, ext, selected, tmp_dir)
    entries_by_index = dict(selected)
    for index, reason in template_skips.items():
        skipped.append((entries_by_index[index], reason))

    cases: list[BenchCase] = []
    for index, entry in selected:
        template = templates.get(index)
        if template is None:
            continue
        latency_cases = render_latency_cases(entry, template)
        throughput_case = render_throughput_case(entry, template)
        if not latency_cases and throughput_case is None:
            skipped.append((entry, "no register dependency form"))
            continue
        cases.extend(latency_cases)
        if throughput_case is not None:
            cases.append(throughput_case)

    output_dir.mkdir(parents=True, exist_ok=True)
    path = output_dir / f"measure_{ext.key}.c"
    path.write_text(render_measure_source(ext, cases, skipped, n), encoding="utf-8")
    return path, len(templates), len(cases), len(skipped)


def main_cli() -> int:
    args = parse_args()
    if not args.cc.exists():
        raise SystemExit(f"compiler not found: {args.cc}")

    output_dir = args.output_dir
    if args.tmp_dir:
        args.tmp_dir.mkdir(parents=True, exist_ok=True)
        tmp_context = None
        tmp_dir = args.tmp_dir
    else:
        tmp_context = tempfile.TemporaryDirectory(prefix="mips-lt-")
        tmp_dir = pathlib.Path(tmp_context.name)

    try:
        for ext in select_extensions(args.extension):
            path, templated, case_count, skipped = generate_for_extension(
                ext,
                output_dir,
                args.cc,
                tmp_dir,
                args.max_per_extension,
                args.n,
            )
            print(
                f"{ext.key}: wrote {path} "
                f"({templated} asm templates, {case_count} cases, {skipped} skipped)"
            )
    finally:
        if tmp_context is not None:
            tmp_context.cleanup()
    return 0


if __name__ == "__main__":
    raise SystemExit(main_cli())
