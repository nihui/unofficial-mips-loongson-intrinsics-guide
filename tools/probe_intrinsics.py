#!/usr/bin/env python3

from __future__ import annotations

import argparse
import pathlib
import re
import sys


ROOT = pathlib.Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

import main  # noqa: E402


SKIP_CATEGORIES = {"memory", "branch", "control_status"}
INTEGER_TYPES = {
    "char",
    "signed char",
    "unsigned char",
    "short",
    "short int",
    "signed short",
    "signed short int",
    "unsigned short",
    "unsigned short int",
    "int",
    "signed int",
    "unsigned int",
    "long",
    "long int",
    "signed long",
    "signed long int",
    "unsigned long",
    "unsigned long int",
    "long long",
    "long long int",
    "signed long long",
    "signed long long int",
    "unsigned long long",
    "unsigned long long int",
    "int8_t",
    "uint8_t",
    "int16_t",
    "uint16_t",
    "int32_t",
    "uint32_t",
    "int64_t",
    "uint64_t",
    "i32",
    "u32",
    "i64",
    "u64",
}


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Generate C source probes for parsed Loongson/MIPS intrinsics."
    )
    parser.add_argument(
        "--extension",
        action="append",
        required=True,
        help="Extension key to generate, repeatable, or 'all'.",
    )
    parser.add_argument("--output-dir", required=True, type=pathlib.Path)
    parser.add_argument("--max-per-extension", type=int)
    parser.add_argument("--mode", choices=["source"], default="source")
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


def split_args(args: str) -> list[str]:
    if args.strip() == "void":
        return []
    return [arg.strip() for arg in args.split(",") if arg.strip()]


def parse_arg(arg: str) -> tuple[str, str]:
    arg = " ".join(arg.replace("\t", " ").split())
    if "*" in arg or "[" in arg or "]" in arg:
        raise ValueError("pointer or array argument")
    match = re.match(r"(?P<type>.+?)\s+(?P<name>[A-Za-z_][A-Za-z0-9_]*)$", arg)
    if not match:
        raise ValueError("cannot parse argument")
    return clean_type(match.group("type")), match.group("name")


def clean_type(type_name: str) -> str:
    return " ".join(
        part
        for part in type_name.replace("const ", " ").replace("volatile ", " ").split()
        if part
    )


def identifier_for_type(type_name: str) -> str:
    return re.sub(r"[^A-Za-z0-9_]", "_", clean_type(type_name)).strip("_")


def is_integer_type(type_name: str) -> bool:
    return clean_type(type_name) in INTEGER_TYPES


def is_vector_type(type_name: str) -> bool:
    type_name = clean_type(type_name)
    if type_name.startswith("__m"):
        return True
    if re.fullmatch(r"v\d+[iuf]\d+", type_name):
        return True
    if re.fullmatch(r"u?int(8|16|32)x[248]_t", type_name):
        return True
    return False


def is_supported_type(type_name: str) -> bool:
    return is_vector_type(type_name) or is_integer_type(type_name)


def is_unsigned_type(type_name: str) -> bool:
    type_name = clean_type(type_name)
    return type_name.startswith("u") or "unsigned" in type_name


def is_immediate_arg(type_name: str, name: str) -> bool:
    lowered = name.lower()
    if "imm" in lowered or "selector" in lowered:
        return True
    if lowered in {"m", "n", "field", "order", "amount", "level", "op"}:
        return True
    return is_integer_type(type_name) and clean_type(type_name) in {
        "char",
        "signed char",
        "unsigned char",
        "uint8_t",
    }


def integer_literal(type_name: str, index: int, name: str) -> str:
    value = 1 if is_immediate_arg(type_name, name) else index + 3
    if is_unsigned_type(type_name):
        return f"(({type_name}){value}u)"
    return f"(({type_name}){value})"


def vector_factory_name(type_name: str) -> str:
    return f"make_{identifier_for_type(type_name)}"


def vector_value(type_name: str, index: int) -> str:
    return f"{vector_factory_name(type_name)}({17 + index * 29}u)"


def arg_expression(type_name: str, name: str, index: int) -> str:
    if is_vector_type(type_name):
        return vector_value(type_name, index)
    if is_integer_type(type_name):
        return integer_literal(type_name, index, name)
    raise ValueError(f"unsupported argument type: {type_name}")


def collect_types(entries: list[main.Intrinsic]) -> set[str]:
    types: set[str] = set()
    for entry in entries:
        if is_vector_type(entry.return_type):
            types.add(clean_type(entry.return_type))
        for arg in split_args(entry.args):
            type_name, _ = parse_arg(arg)
            if is_vector_type(type_name):
                types.add(type_name)
    return types


def call_statement(entry: main.Intrinsic, index: int) -> tuple[list[str], str]:
    args = split_args(entry.args)
    expressions: list[str] = []
    arg_lines: list[str] = []
    for arg_index, arg in enumerate(args):
        type_name, name = parse_arg(arg)
        expression = arg_expression(type_name, name, arg_index)
        if is_vector_type(type_name):
            var_name = f"a{index}_{arg_index}"
            arg_lines.append(f"    {type_name} {var_name} = {expression};")
            arg_lines.append(
                f'    print_bytes("  arg{arg_index}", &{var_name}, sizeof({var_name}));'
            )
            expressions.append(var_name)
        else:
            if is_unsigned_type(type_name):
                arg_lines.append(
                    f'    printf("  arg{arg_index}=%llu\\n", '
                    f"(unsigned long long){expression});"
                )
            else:
                arg_lines.append(
                    f'    printf("  arg{arg_index}=%lld\\n", '
                    f"(long long){expression});"
                )
            expressions.append(expression)

    call = f"{entry.name}({', '.join(expressions)})"
    return_type = clean_type(entry.return_type)
    lines = [f'    puts("{entry.name}");']
    lines.extend(arg_lines)
    if return_type == "void":
        lines.append(f"    {call};")
    elif is_vector_type(return_type):
        lines.append(f"    {return_type} r{index} = {call};")
        lines.append(f'    print_bytes("  out", &r{index}, sizeof(r{index}));')
    elif is_integer_type(return_type):
        lines.append(f"    {return_type} r{index} = {call};")
        if is_unsigned_type(return_type):
            lines.append(f'    printf("  out=%llu\\n", (unsigned long long)r{index});')
        else:
            lines.append(f'    printf("  out=%lld\\n", (long long)r{index});')
    else:
        raise ValueError(f"unsupported return type: {return_type}")
    return lines, return_type


def can_emit(entry: main.Intrinsic) -> tuple[bool, str]:
    if entry.category in SKIP_CATEGORIES:
        return False, f"category {entry.category}"
    if "extrins" in entry.name:
        return False, "requires constrained paired immediate fields"
    return_type = clean_type(entry.return_type)
    if return_type != "void" and not is_supported_type(return_type):
        return False, f"return type {return_type}"
    try:
        for arg in split_args(entry.args):
            type_name, _ = parse_arg(arg)
            if not is_supported_type(type_name):
                return False, f"argument type {type_name}"
    except ValueError as exc:
        return False, str(exc)
    return True, ""


def render_source(
    ext: main.Extension,
    entries: list[main.Intrinsic],
    skipped: list[tuple[main.Intrinsic, str]],
) -> str:
    vector_types = sorted(collect_types(entries))
    lines: list[str] = [
        "/* Generated by tools/probe_intrinsics.py. */",
        "#include <stdint.h>",
        "#include <stdio.h>",
        "#include <string.h>",
        f"#include <{ext.include}>",
        "",
        "static void print_bytes(const char *label, const void *value, unsigned long size)",
        "{",
        "    const unsigned char *bytes = (const unsigned char *)value;",
        '    printf("%s:", label);',
        "    for (unsigned long i = 0; i < size; i++)",
        '        printf(" %02x", bytes[i]);',
        '    putchar(\'\\n\');',
        "}",
        "",
    ]
    for type_name in vector_types:
        factory = vector_factory_name(type_name)
        lines.extend(
            [
                f"static {type_name} {factory}(unsigned int seed)",
                "{",
                f"    {type_name} value;",
                "    unsigned char *bytes = (unsigned char *)&value;",
                "    for (unsigned long i = 0; i < sizeof(value); i++)",
                "        bytes[i] = (unsigned char)(seed + i * 13u);",
                "    return value;",
                "}",
                "",
            ]
        )

    lines.extend(["int main(void)", "{"])
    if not entries:
        lines.append('    puts("no supported probes");')
    for index, entry in enumerate(entries):
        lines.append(f"    /* {entry.signature} */")
        call_lines, _ = call_statement(entry, index)
        lines.extend(call_lines)
        lines.append("")
    lines.extend(["    return 0;", "}"])

    if skipped:
        lines.extend(["", "/* Skipped intrinsics:"])
        for entry, reason in skipped:
            lines.append(f" * {entry.name}: {reason}")
        lines.append(" */")
    lines.append("")
    return "\n".join(lines)


def generate_for_extension(
    ext: main.Extension, output_dir: pathlib.Path, max_per_extension: int | None
) -> tuple[pathlib.Path, int, int]:
    selected: list[main.Intrinsic] = []
    skipped: list[tuple[main.Intrinsic, str]] = []
    for entry in main.parse_header(ext):
        ok, reason = can_emit(entry)
        if not ok:
            skipped.append((entry, reason))
            continue
        if max_per_extension is not None and len(selected) >= max_per_extension:
            skipped.append((entry, "over --max-per-extension"))
            continue
        selected.append(entry)

    output_dir.mkdir(parents=True, exist_ok=True)
    path = output_dir / f"probe_{ext.key}.c"
    path.write_text(render_source(ext, selected, skipped))
    return path, len(selected), len(skipped)


def main_cli() -> int:
    args = parse_args()
    for ext in select_extensions(args.extension):
        path, emitted, skipped = generate_for_extension(
            ext, args.output_dir, args.max_per_extension
        )
        print(f"{ext.key}: wrote {path} ({emitted} probes, {skipped} skipped)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main_cli())
