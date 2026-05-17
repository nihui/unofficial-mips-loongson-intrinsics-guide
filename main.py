from __future__ import annotations

import dataclasses
import csv
import html
import json
import pathlib
import re
import textwrap
from collections import defaultdict


ROOT = pathlib.Path(__file__).resolve().parent
TOOLCHAIN_ROOT = ROOT.parent / "src" / "mips-loongson-gcc7-linux-gnu-2021-02-08-src"
GCC_EXTEND_TEXI = TOOLCHAIN_ROOT / "gcc-7.3" / "gcc" / "doc" / "extend.texi"
MSA_PROTOTYPES_TSV = ROOT / "data" / "msa_builtin_prototypes.tsv"
HARDWARE_PROBE_RESULTS = ROOT / "data" / "hardware_probe_results.json"
LATENCY_THROUGHPUT_GLOB = "latency_throughput_*.csv"

BUILTIN_TYPE_ALIASES = {
    "i32": "int",
    "u32": "unsigned int",
    "i64": "long long",
    "u64": "unsigned long long",
}

CSR_RUNTIME_TESTED = {
    "__lcsr_cpucfg",
    "__lcsr_drdtime",
    "__lcsr_rdtimeh",
    "__lcsr_rdtimel",
}

CSR_RUNTIME_ISOLATED = {
    "__lcsr_drdcsr",
    "__lcsr_drdgcsr",
    "__lcsr_rdcsr",
    "__lcsr_rdgcsr",
}

CSR_USER_MODE_UNSAFE = {
    "__lcsr_dwrcsr",
    "__lcsr_dwrgcsr",
    "__lcsr_lddir",
    "__lcsr_ldpte",
    "__lcsr_lwdir",
    "__lcsr_lwpte",
    "__lcsr_wrcsr",
    "__lcsr_wrgcsr",
}

CSR_PROBE_UNAVAILABLE = {
    "__lcsr_lddir",
    "__lcsr_ldpte",
    "__lcsr_lwdir",
    "__lcsr_lwpte",
}


@dataclasses.dataclass(frozen=True)
class Extension:
    key: str
    name: str
    vector_bits: int
    include: str
    header: str
    public_re: str
    builtin_prefix: str
    cpu_flag: str
    nav_title: str


@dataclasses.dataclass
class Intrinsic:
    extension: Extension
    name: str
    return_type: str
    args: str
    kind: str
    source_line: int
    body: str
    builtin: str | None
    instruction: str
    category: str

    @property
    def signature(self) -> str:
        return f"{self.return_type} {self.name} ({self.args})"


EXTENSIONS = [
    Extension(
        key="sx",
        name="Loongson SX",
        vector_bits=128,
        include="loongson-sxintrin.h",
        header="include/loongson-sxintrin.h",
        public_re=r"__lsx_[A-Za-z0-9_]+",
        builtin_prefix="__builtin_lsx_",
        cpu_flag="__mips_loongson_sx",
        nav_title="SX",
    ),
    Extension(
        key="asx",
        name="Loongson ASX",
        vector_bits=256,
        include="loongson-asxintrin.h",
        header="include/loongson-asxintrin.h",
        public_re=r"__lasx_[A-Za-z0-9_]+",
        builtin_prefix="__builtin_lasx_",
        cpu_flag="__mips_loongson_asx",
        nav_title="ASX",
    ),
    Extension(
        key="msa",
        name="MIPS MSA",
        vector_bits=128,
        include="msa.h",
        header="include/msa.h",
        public_re=r"__msa_[A-Za-z0-9_]+",
        builtin_prefix="__builtin_msa_",
        cpu_flag="__mips_msa",
        nav_title="MSA",
    ),
    Extension(
        key="msa2",
        name="MSA2",
        vector_bits=128,
        include="msa2.h",
        header="include/msa2.h",
        public_re=r"__msa2_[A-Za-z0-9_]+",
        builtin_prefix="__builtin_msa2_",
        cpu_flag="__mips_msa",
        nav_title="MSA2",
    ),
    Extension(
        key="msa_crypto",
        name="MSA Crypto",
        vector_bits=128,
        include="msa-cryptointrin.h",
        header="include/msa-cryptointrin.h",
        public_re=r"__crypto_[A-Za-z0-9_]+",
        builtin_prefix="__builtin_crypto_",
        cpu_flag="__mips_msa_crypto",
        nav_title="MSA Crypto",
    ),
    Extension(
        key="mmi",
        name="Loongson MMI",
        vector_bits=64,
        include="loongson-mmiintrin.h",
        header="include/loongson-mmiintrin.h",
        public_re=r"[A-Za-z][A-Za-z0-9_]*",
        builtin_prefix="__builtin_loongson_",
        cpu_flag="__mips_loongson_mmi",
        nav_title="MMI",
    ),
    Extension(
        key="csr",
        name="Loongson CSR",
        vector_bits=64,
        include="loongson-csr.h",
        header="include/loongson-csr.h",
        public_re=r"__lcsr_[A-Za-z0-9_]+",
        builtin_prefix="__builtin_loongson_",
        cpu_flag="__mips_loongson_csr",
        nav_title="CSR",
    ),
]


CATEGORIES = {
    "integer_computation": "Integer Computation",
    "integer_comparison": "Integer Comparison",
    "shift": "Shift",
    "logical": "Logical",
    "bitwise_operations": "Bitwise Operations",
    "permutation": "Permutation",
    "float_computation": "Float Computation",
    "float_comparison": "Float Comparison",
    "float_conversion": "Float Conversion",
    "memory": "Memory",
    "branch": "Branch",
    "crypto": "Cryptography",
    "control_status": "Control and Status",
    "misc": "Miscellaneous",
}


SECTION_ORDER = [
    "integer_computation",
    "integer_comparison",
    "shift",
    "logical",
    "bitwise_operations",
    "permutation",
    "float_computation",
    "float_comparison",
    "float_conversion",
    "memory",
    "branch",
    "crypto",
    "control_status",
    "misc",
]


WIDTH_BITS = {
    "b": 8,
    "h": 16,
    "w": 32,
    "d": 64,
    "q": 128,
}

WIDER_WIDTH = {
    "b": "h",
    "h": "w",
    "w": "d",
    "d": "q",
}

NARROWER_WIDTH = {wide: narrow for narrow, wide in WIDER_WIDTH.items()}

FLOAT_WIDTHS = {"w", "d"}


def strip_attributes(signature: str) -> str:
    signature = re.sub(r"/\*.*?\*/", " ", signature)
    signature = re.sub(r"__attribute__\s*\(\([^)]*\)\)", " ", signature)
    signature = (
        signature.replace("__extension__", " ")
        .replace("extern", " ")
        .replace("static", " ")
        .replace("__inline", " ")
    )
    return " ".join(signature.split())


def clean_type(type_name: str) -> str:
    return " ".join(type_name.replace("\t", " ").split())


def expand_builtin_type_aliases(text: str) -> str:
    def replace(match: re.Match[str]) -> str:
        return BUILTIN_TYPE_ALIASES[match.group(0)]

    return re.sub(r"\b(?:i32|u32|i64|u64)\b", replace, text)


def split_args(args: str) -> list[str]:
    args = args.strip()
    if not args or args == "void":
        return []
    return [part.strip() for part in args.split(",")]


def find_builtin(body: str) -> str | None:
    match = re.search(r"\b(__builtin_[A-Za-z0-9_]+)\s*\(", body)
    return match.group(1) if match else None


def iter_inline_functions(text: str):
    pattern = re.compile(
        r"(?P<signature>(?:extern\s+__inline|__extension__\s+static\s+__inline|static\s+__inline|__inline)\b[^{]+?)\{(?P<body>.*?)\n\}",
        re.S,
    )
    yield from pattern.finditer(text)


def named_args_from_builtin_prototype(args: str) -> str:
    args = args.strip()
    if not args or args == "void":
        return "void"
    result = []
    vector_index = 0
    scalar_index = 0
    vector_names = ["a", "b", "c", "d"]
    scalar_names = ["imm", "value", "selector", "offset"]
    for raw in split_args(args):
        typ = clean_type(raw)
        if typ == "void *":
            result.append("void * mem")
            continue
        if typ.startswith("imm"):
            result.append(f"int {typ}")
            continue
        if typ.startswith("v"):
            name = vector_names[min(vector_index, len(vector_names) - 1)]
            vector_index += 1
            result.append(f"{typ} {name}")
            continue
        name = scalar_names[min(scalar_index, len(scalar_names) - 1)]
        scalar_index += 1
        result.append(f"{typ} {name}")
    return ", ".join(result)


def parse_msa_builtin_prototypes() -> dict[str, tuple[str, str]]:
    result: dict[str, tuple[str, str]] = {}
    if GCC_EXTEND_TEXI.exists():
        text = GCC_EXTEND_TEXI.read_text()
        for match in re.finditer(
            r"^\s*(?P<ret>[A-Za-z_][A-Za-z0-9_ \*]*?)\s+(?P<name>__builtin_msa_[A-Za-z0-9_]+)\s*\((?P<args>[^;]*)\);",
            text,
            re.M,
        ):
            result[match.group("name")] = (
                expand_builtin_type_aliases(clean_type(match.group("ret"))),
                expand_builtin_type_aliases(named_args_from_builtin_prototype(match.group("args"))),
            )
    if result:
        return result
    if MSA_PROTOTYPES_TSV.exists():
        for line in MSA_PROTOTYPES_TSV.read_text().splitlines():
            if not line.strip() or line.startswith("#"):
                continue
            name, return_type, args = line.split("\t", 2)
            result[name] = (
                expand_builtin_type_aliases(return_type),
                expand_builtin_type_aliases(args),
            )
    return result


MSA_BUILTIN_PROTOTYPES = parse_msa_builtin_prototypes()


def load_hardware_probe_observations() -> dict[str, list[dict[str, object]]]:
    if not HARDWARE_PROBE_RESULTS.exists():
        return {}
    data = json.loads(HARDWARE_PROBE_RESULTS.read_text())
    result: dict[str, list[dict[str, object]]] = defaultdict(list)
    for item in data.get("intrinsics", []):
        name = item.get("name")
        if isinstance(name, str):
            result[name].append(item)
    return dict(result)


HARDWARE_OBSERVATIONS = load_hardware_probe_observations()


def load_latency_throughput_rows() -> dict[str, list[dict[str, str]]]:
    result: dict[str, list[dict[str, str]]] = defaultdict(list)
    for path in sorted((ROOT / "data").glob(LATENCY_THROUGHPUT_GLOB)):
        with path.open(newline="", encoding="utf-8") as handle:
            reader = csv.DictReader(handle)
            for row in reader:
                intrinsic = row.get("intrinsic", "")
                if intrinsic:
                    result[intrinsic].append({key: value for key, value in row.items() if key is not None})
    for rows in result.values():
        rows.sort(key=lambda row: (row.get("cpu", ""), row.get("uarch", "")))
    return dict(result)


LATENCY_THROUGHPUT_ROWS = load_latency_throughput_rows()


def latency_cpu_columns() -> list[tuple[str, str]]:
    seen: set[tuple[str, str]] = set()
    result: list[tuple[str, str]] = []
    for rows in LATENCY_THROUGHPUT_ROWS.values():
        for row in rows:
            key = (row.get("cpu", ""), row.get("uarch", ""))
            if key[0] and key not in seen:
                seen.add(key)
                result.append(key)
    return sorted(result)


def latency_cpu_label(cpu: str, uarch: str) -> str:
    return f"{cpu}({uarch})" if uarch else cpu


def html_escape(value: object) -> str:
    return html.escape(str(value), quote=True)


CSR_BUILTIN_PROTOTYPES = {
    "__builtin_loongson_cpucfg": ("int", "int selector"),
    "__builtin_loongson_rdcsr": ("int", "int csr"),
    "__builtin_loongson_wrcsr": ("void", "int value, int csr"),
    "__builtin_loongson_drdcsr": ("long", "long csr"),
    "__builtin_loongson_dwrcsr": ("void", "long value, long csr"),
    "__builtin_loongson_rdgcsr": ("int", "int csr"),
    "__builtin_loongson_wrgcsr": ("void", "int value, int csr"),
    "__builtin_loongson_drdgcsr": ("long", "long csr"),
    "__builtin_loongson_dwrgcsr": ("void", "long value, long csr"),
    "__builtin_loongson_drdtime": ("__drdtime_t", "void"),
    "__builtin_loongson_rdtimel": ("__rdtime_t", "void"),
    "__builtin_loongson_rdtimeh": ("__rdtime_t", "void"),
    "__builtin_loongson_lddir": ("long", "long base, unsigned char level"),
    "__builtin_loongson_lwdir": ("int", "int base, unsigned char level"),
    "__builtin_loongson_ldpte": ("long", "unsigned char op"),
    "__builtin_loongson_lwpte": ("int", "unsigned char op"),
}


def collect_logical_define_lines(text: str) -> list[tuple[int, str]]:
    lines = text.splitlines()
    result: list[tuple[int, str]] = []
    i = 0
    while i < len(lines):
        line = lines[i]
        if not line.startswith("#define "):
            i += 1
            continue

        start = i + 1
        parts = [line.rstrip("\\").strip()]
        while line.rstrip().endswith("\\") and i + 1 < len(lines):
            i += 1
            line = lines[i]
            parts.append(line.rstrip("\\").strip())
        result.append((start, " ".join(part for part in parts if part)))
        i += 1
    return result


def infer_macro_return_type(body: str, ext: Extension) -> str:
    match = re.search(r"^\s*\(\(?\s*([A-Za-z_][A-Za-z0-9_]*(?:\s+[A-Za-z_][A-Za-z0-9_]*)*)\s*\)", body)
    if match:
        return clean_type(match.group(1))
    if ext.vector_bits == 256:
        return "__m256i"
    return "__m128i"


def infer_macro_arg_type(name: str, body: str, ext: Extension) -> str:
    cast_pattern = re.compile(r"\(([A-Za-z_][A-Za-z0-9_]*)\)\s*\(?\s*" + re.escape(name) + r"\b")
    cast = cast_pattern.search(body)
    if cast and re.match(r"v\d+[iuf]\d+", cast.group(1)):
        return "__m256i" if ext.vector_bits == 256 else "__m128i"
    if name in {"imm", "m", "n"} or name.startswith("imm"):
        return "int"
    if name.startswith("_") and name[1:].isdigit():
        return "__m256i" if ext.vector_bits == 256 else "__m128i"
    if name in {"a", "b", "c", "ret", "__X", "__Y", "__Z"}:
        return "__m256i" if ext.vector_bits == 256 else "__m128i"
    return "int"


def normalize_macro_args(raw_args: str, body: str, ext: Extension) -> str:
    result = []
    for raw_arg in split_args(raw_args):
        commented = re.match(r"/\*\s*(.*?)\s*\*/\s*([A-Za-z_][A-Za-z0-9_]*)$", raw_arg)
        if commented:
            result.append(f"{clean_type(commented.group(1))} {commented.group(2)}")
            continue

        name = raw_arg.strip()
        if " " in name:
            result.append(clean_type(name))
        else:
            result.append(f"{infer_macro_arg_type(name, body, ext)} {name}")
    return ", ".join(result)


def instruction_from_builtin(builtin: str | None, ext: Extension, asm_map: dict[str, str]) -> str:
    if builtin and builtin in asm_map:
        return asm_map[builtin]
    if not builtin:
        return "N/A"
    for prefix in [
        "__builtin_lsx_",
        "__builtin_lasx_",
        "__builtin_msa_",
        "__builtin_msa2_",
        "__builtin_crypto_",
        "__builtin_loongson_",
    ]:
        if builtin.startswith(prefix):
            return builtin[len(prefix) :].replace("_", ".")
    return builtin.replace("__builtin_", "").replace("_", ".")


def parse_asm_mnemonics(text: str) -> dict[str, str]:
    result: dict[str, str] = {}
    for match in iter_inline_functions(text):
        signature = strip_attributes(match.group("signature"))
        name_match = re.search(r"\b(?P<name>__builtin_[A-Za-z0-9_]+)\s*\(", signature)
        if not name_match:
            continue
        mnemonics = re.findall(r'"([A-Za-z0-9_.]+)\\t', match.group("body"))
        mnemonics = [x for x in mnemonics if x not in {"mxmove.v"}]
        if mnemonics:
            result[name_match.group("name")] = mnemonics[-1]
    return result


def alias_prototype(builtin: str) -> tuple[str, str]:
    if builtin in MSA_BUILTIN_PROTOTYPES:
        return MSA_BUILTIN_PROTOTYPES[builtin]
    if builtin in CSR_BUILTIN_PROTOTYPES:
        return CSR_BUILTIN_PROTOTYPES[builtin]
    return "int", "void"


def parse_header(ext: Extension) -> list[Intrinsic]:
    path = ROOT / ext.header
    text = path.read_text()
    public_name = re.compile(rf"\b(?P<name>{ext.public_re})\s*\(")
    asm_map = parse_asm_mnemonics(text)
    entries: list[Intrinsic] = []
    seen: set[str] = set()

    for match in iter_inline_functions(text):
        signature = strip_attributes(match.group("signature"))
        name_match = public_name.search(signature)
        if not name_match:
            continue

        name = name_match.group("name")
        if name in seen:
            continue

        before_name = signature[: name_match.start()].strip()
        args = signature[name_match.end() :].rsplit(")", 1)[0].strip()
        return_type = clean_type(before_name.split()[-1]) if before_name else "__m128i"
        body = textwrap.dedent(match.group("body")).strip()
        builtin = find_builtin(body)
        instruction = instruction_from_builtin(builtin, ext, asm_map)
        line = text[: match.start()].count("\n") + 1
        category = classify(name, ext)
        entries.append(
            Intrinsic(
                extension=ext,
                name=name,
                return_type=return_type,
                args=args,
                kind="function",
                source_line=line,
                body=body,
                builtin=builtin,
                instruction=instruction,
                category=category,
            )
        )
        seen.add(name)

    alias_re = re.compile(
        rf"#define\s+(?P<name>{ext.public_re})\s+(?P<body>__builtin_[A-Za-z0-9_]+)\s*$",
        re.M,
    )
    for match in alias_re.finditer(text):
        name = match.group("name")
        if name in seen:
            continue
        builtin = match.group("body")
        return_type, args = alias_prototype(builtin)
        instruction = instruction_from_builtin(builtin, ext, asm_map)
        line = text[: match.start()].count("\n") + 1
        category = classify(name, ext)
        entries.append(
            Intrinsic(
                extension=ext,
                name=name,
                return_type=return_type,
                args=args,
                kind="alias",
                source_line=line,
                body=builtin,
                builtin=builtin,
                instruction=instruction,
                category=category,
            )
        )
        seen.add(name)

    for line, logical in collect_logical_define_lines(text):
        macro_match = re.match(rf"#define\s+(?P<name>{ext.public_re})\((?P<args>.*?)\)\s*(?P<body>.*)$", logical)
        if not macro_match:
            continue
        name = macro_match.group("name")
        if name in seen:
            continue
        body = macro_match.group("body").strip()
        builtin = find_builtin(body)
        instruction = instruction_from_builtin(builtin, ext, asm_map)
        return_type = infer_macro_return_type(body, ext)
        args = normalize_macro_args(macro_match.group("args"), body, ext)
        category = classify(name, ext)
        entries.append(
            Intrinsic(
                extension=ext,
                name=name,
                return_type=return_type,
                args=args,
                kind="macro",
                source_line=line,
                body=body,
                builtin=builtin,
                instruction=instruction,
                category=category,
            )
        )
        seen.add(name)

    entries.sort(key=lambda item: item.name)
    return entries


def core_name(name: str, ext: Extension) -> str:
    if name.startswith("__lsx_"):
        return name[len("__lsx_") :]
    if name.startswith("__lasx_"):
        return name[len("__lasx_") :]
    if name.startswith("__msa_"):
        return name[len("__msa_") :]
    if name.startswith("__msa2_"):
        return name[len("__msa2_") :]
    if name.startswith("__crypto_"):
        return name[len("__crypto_") :]
    if name.startswith("__lcsr_"):
        return name[len("__lcsr_") :]
    return name.lstrip("_")


def normalized_core_op(core: str, ext: Extension) -> str:
    op = core.split("_", 1)[0].split(".", 1)[0]
    if ext.key == "asx":
        if op.startswith("mxv"):
            return op[2:]
        if op.startswith("mx"):
            return op[2:]
        if op.startswith("xv") or op.startswith("xf"):
            return op[1:]
        if op.startswith("x") and len(op) > 1:
            return op[1:]
    return op


def logical_operation_kind(op: str) -> str | None:
    if op.endswith("andn"):
        return "andn"
    if op in {"and", "andi"}:
        return "and"
    if op in {"nor", "nori"}:
        return "nor"
    if op in {"orn", "orni"}:
        return "orn"
    if op in {"xor", "xori"}:
        return "xor"
    if op in {"or", "ori"}:
        return "or"
    if op.startswith("bsel"):
        return "bsel"
    if op.startswith("bmnz"):
        return "bmnz"
    if op.startswith("bmz"):
        return "bmz"
    return None


def classify(name: str, ext: Extension) -> str:
    core = core_name(name, ext)
    lowered = core.lower()
    op = normalized_core_op(lowered, ext)

    if ext.key == "msa_crypto":
        return "crypto"
    if ext.key == "csr" or lowered in {"cfcmsa", "ctcmsa"}:
        return "control_status"
    if (
        lowered in {"vblb", "vblh", "vblw", "vbld", "vsb", "vsh", "vsw", "vsd", "xvsb", "xvsh", "xvsw", "xvsd"}
        or lowered.startswith(("ld_", "st_", "vld", "vst", "xvbl", "xvld", "xvst"))
    ):
        return "memory"
    if lowered.startswith(("xbz", "xbnz", "xvbz", "xvbnz")) or "test_bz" in lowered or "test_bnz" in lowered:
        return "branch"
    if lowered.startswith(
        (
            "xvf", "xf", "vf",
            "fadd", "fsub", "fmul", "fdiv", "fmax", "fmin", "fabs", "fneg",
            "fsqrt", "frsqrt", "frcp", "flog2", "fexp2", "fmadd", "fmsub",
            "fnmadd", "fnmsub", "fc", "fs", "ffint", "ftint", "ftrunc",
            "fceil", "ffloor", "fround", "frint", "fex", "ffq", "ftq",
            "fclass",
        )
    ):
        if any(token in lowered for token in ["caf", "ceq", "cle", "clt", "cne", "cor", "cueq", "cule", "cult", "cun", "cune", "saf", "seq", "sle", "slt", "sne", "sor", "sueq", "sule", "sult", "sun", "sune"]):
            return "float_comparison"
        if any(token in lowered for token in ["ffint", "ftint", "ftrunc", "fceil", "ffloor", "fround", "frint", "fex", "fclass", "getsign"]):
            return "float_conversion"
        return "float_computation"
    if (
        op.startswith(("sll", "sra", "srl", "psll", "psra", "psrl", "ror", "rot", "vsllix", "vsrai", "vsra", "vsrl", "vbsll", "vbsrl"))
        or any(token in lowered for token in ["bsll", "bsrl", "srain", "sran", "srarn", "srarin", "srln", "srlrin"])
    ):
        return "shift"
    if logical_operation_kind(op):
        return "logical"
    if any(token in lowered for token in ["bclr", "bset", "bneg", "bins", "pcnt", "clo", "clz", "nlzc", "nloc", "nxbits", "wxbits", "sign", "pmovmsk"]):
        return "bitwise_operations"
    if any(token in lowered for token in ["ceq", "clt", "cle", "cmpeq", "cmpgt", "max", "min"]):
        return "integer_comparison"
    if any(token in lowered for token in ["add", "sub", "mul", "muh", "div", "mod", "ave", "avg", "hadd", "hsub", "dot", "dp", "sad", "acc", "sat", "madd", "msub", "abs", "neg"]):
        return "integer_computation"
    if any(token in lowered for token in ["perm", "shuf", "shf", "pack", "pck", "punpck", "ilv", "splat", "fill", "copy", "insert", "pins", "insve", "extr", "broadcast", "sel", "sld", "ldi", "move", "w2x", "n2x", "w4x", "w8x", "xw"]):
        return "permutation"
    return "misc"


def mnemonic_tokens(entry: Intrinsic) -> list[str]:
    if entry.instruction == "N/A":
        return core_name(entry.name, entry.extension).split("_")
    return [part for part in entry.instruction.split(".") if part]


def normalized_op(entry: Intrinsic) -> str:
    op = mnemonic_tokens(entry)[0]
    if op.startswith("mxv"):
        return op[2:]
    if op.startswith("mx"):
        return op[2:]
    if op.startswith("xv"):
        return op[1:]
    if op.startswith("xf"):
        return op[1:]
    if entry.extension.key == "asx" and op.startswith("x") and len(op) > 1:
        return op[1:]
    return op


def op_has(entry: Intrinsic, *names: str) -> bool:
    op = normalized_op(entry)
    tokens = mnemonic_tokens(entry)
    return any(name in op or name in tokens or any(token.endswith(name) for token in tokens) for name in names)


def lane_suffix(entry: Intrinsic) -> str | None:
    tokens = mnemonic_tokens(entry)
    for token in reversed(tokens):
        if token in WIDTH_BITS:
            return token
        if len(token) == 2 and token[0] in {"s", "u"} and token[1] in WIDTH_BITS:
            return token[1]
    core = core_name(entry.name, entry.extension).split("_")
    for token in reversed(core):
        if token in WIDTH_BITS:
            return token
        if len(token) == 2 and token[0] in {"s", "u"} and token[1] in WIDTH_BITS:
            return token[1]
    op = normalized_op(entry)
    if op and op[-1] in WIDTH_BITS:
        return op[-1]
    return None


def lane_bits(entry: Intrinsic) -> int | None:
    suffix = lane_suffix(entry)
    if suffix is None:
        return None
    return WIDTH_BITS[suffix]


def lane_count(entry: Intrinsic, width: int | None = None) -> int | None:
    if width is None:
        width = lane_bits(entry)
    if width is None:
        return None
    return max(1, entry.extension.vector_bits // width)


def lane_name_from_bits(bits: int, interpretation: str = "signed") -> str:
    if interpretation == "float":
        return f"fp{bits}"
    prefix = "u" if interpretation == "unsigned" else "i"
    return f"{prefix}{bits}"


def lane_name_from_suffix(suffix: str | None, interpretation: str = "signed") -> str:
    if suffix is None or suffix not in WIDTH_BITS:
        return "lane"
    return lane_name_from_bits(WIDTH_BITS[suffix], interpretation)


def lane_interpretation(entry: Intrinsic, *, neutral_is_unsigned: bool = True) -> str:
    mode = signedness(entry)
    if mode == "unsigned":
        return "unsigned"
    if mode == "signed":
        return "signed"
    if entry.category in {"bitwise_operations", "logical", "permutation", "memory", "crypto"}:
        return "unsigned"
    return "unsigned" if neutral_is_unsigned else "signed"


def lane_name_for_entry(entry: Intrinsic, suffix: str | None = None, *, neutral_is_unsigned: bool = True) -> str:
    return lane_name_from_suffix(suffix or lane_suffix(entry), lane_interpretation(entry, neutral_is_unsigned=neutral_is_unsigned))


def lane_label_for_entry(entry: Intrinsic, suffix: str | None = None) -> str:
    suffix = suffix or lane_suffix(entry)
    if suffix is None:
        return "lanes"
    if entry.category.startswith("float") or normalized_op(entry).startswith(("f", "vf")):
        if suffix in {"h", "w", "d"}:
            return lane_name_from_suffix(suffix, "float")
    mode = signedness(entry)
    if mode == "unsigned":
        return lane_name_from_suffix(suffix, "unsigned")
    if mode == "signed":
        return lane_name_from_suffix(suffix, "signed")
    if mode == "unsigned/signed mixed":
        bits = WIDTH_BITS[suffix]
        return f"u{bits}/i{bits}"
    return lane_name_from_suffix(suffix, "unsigned")


def lane_name_from_type(
    type_name: str,
    fallback_suffix: str | None = None,
    interpretation: str | None = None,
) -> str:
    type_name = clean_type(type_name)
    if type_name in {"__m128", "__m256"}:
        return "fp32"
    if type_name in {"__m128d", "__m256d"}:
        return "fp64"
    if type_name in {"__m128i", "__m256i"}:
        return lane_name_from_suffix(fallback_suffix, interpretation or "signed")
    match = re.match(r"v\d+([iuf])(\d+)$", type_name)
    if match:
        bits = int(match.group(2))
        if match.group(1) == "f":
            return "fp32" if bits == 32 else "fp64"
        prefix = "u" if match.group(1) == "u" else "i"
        return f"{prefix}{bits}"
    match = re.match(r"(u?)int(8|16|32|64)(?:x\d+)?_t$", type_name)
    if match:
        bits = int(match.group(2))
        prefix = "u" if match.group(1) else "i"
        return f"{prefix}{bits}"
    return lane_name_from_suffix(fallback_suffix, interpretation or "signed")


def cast_lane_name_for_arg(entry: Intrinsic, arg_name: str, fallback_suffix: str | None) -> str | None:
    cast_pattern = re.compile(r"\(\s*(v\d+[iuf]\d+)\s*\)\s*\(?\s*" + re.escape(arg_name) + r"\b")
    cast = cast_pattern.search(entry.body)
    if cast:
        return lane_name_from_type(cast.group(1), fallback_suffix)
    return None


def vector_arg_lanes(entry: Intrinsic, fallback_suffix: str | None = None) -> dict[str, str]:
    vector_names, _ = arg_name_map(entry)
    if not vector_names:
        return {}

    arg_types = {name: typ for typ, name in parsed_args(entry)}
    semantic_names = ["a", "b", "c", "d"]
    result: dict[str, str] = {}
    default_interpretation = lane_interpretation(entry)
    for semantic, original in zip(semantic_names, vector_names):
        cast_lane = cast_lane_name_for_arg(entry, original, fallback_suffix)
        result[semantic] = cast_lane or lane_name_from_type(
            arg_types.get(original, ""),
            fallback_suffix,
            default_interpretation,
        )
    return result


def signedness(entry: Intrinsic) -> str:
    tokens = mnemonic_tokens(entry)
    if "us" in tokens:
        return "unsigned/signed mixed"
    if "u" in tokens:
        return "unsigned"
    if "s" in tokens:
        return "signed"
    return "modular"


def signedness_prefix(entry: Intrinsic) -> str:
    mode = signedness(entry)
    if mode == "unsigned":
        return "unsigned"
    if mode == "signed":
        return "signed"
    if mode == "unsigned/signed mixed":
        return "mixed_sign"
    return "modular"


def type_prefix(entry: Intrinsic) -> str:
    mode = signedness(entry)
    if mode == "unsigned":
        return "u"
    if mode == "signed":
        return "i"
    if mode == "unsigned/signed mixed":
        return "mixed"
    if entry.category.startswith("float") or normalized_op(entry).startswith("f"):
        return "f"
    return "i/u"


def parsed_args(entry: Intrinsic) -> list[tuple[str, str]]:
    result = []
    for arg in split_args(entry.args):
        parts = arg.rsplit(" ", 1)
        if len(parts) == 1:
            result.append(("", parts[0]))
        else:
            result.append((parts[0].strip(), parts[1].strip()))
    return result


def arg_name_map(entry: Intrinsic) -> tuple[list[str], list[str]]:
    vector_names = []
    scalar_names = []
    for typ, name in parsed_args(entry):
        is_mmi_vector = (
            entry.extension.key == "mmi"
            and (
                re.search(r"\b(?:u?int|uint)(?:8|16|32)x(?:8|4|2)_t\b", typ) is not None
                or typ in {"uint64_t", "int64_t"}
            )
        )
        if "__m" in typ or re.match(r"v\d+[iuf]\d+", typ) or is_mmi_vector:
            vector_names.append(name)
        else:
            scalar_names.append(name)
    return vector_names, scalar_names


def binding_lines(entry: Intrinsic) -> list[str]:
    return []


def canonical_arg_names(entry: Intrinsic) -> dict[str, str]:
    vector_names, scalar_names = arg_name_map(entry)
    vector_set = set(vector_names)
    result: dict[str, str] = {}
    used: set[str] = set()
    vector_semantics = ["a", "b", "c", "d"]
    vector_index = 0
    imm_index = 0
    memory_scalar_index = 0
    scalar_index = 0

    def unique(name: str) -> str:
        if name not in used:
            used.add(name)
            return name
        counter = 1
        while f"{name}{counter}" in used:
            counter += 1
        name = f"{name}{counter}"
        used.add(name)
        return name

    for typ, original in parsed_args(entry):
        if original in vector_set:
            if vector_index < len(vector_semantics):
                name = vector_semantics[vector_index]
            else:
                name = f"v{vector_index}"
            vector_index += 1
        elif original in scalar_names:
            if "*" in typ or original == "mem":
                name = "mem"
            elif entry.category == "memory":
                op = normalized_op(entry)
                lane_store = op in {"vsb", "vsh", "vsw", "vsd", "xvsb", "xvsh", "xvsw", "xvsd"}
                if lane_store and memory_scalar_index == 0:
                    name = "lane"
                else:
                    name = "offset"
                memory_scalar_index += 1
            elif "extrins" in normalized_op(entry):
                name = "dst_lane" if imm_index == 0 else "src_lane"
                imm_index += 1
            elif original.startswith("_") or original.startswith("imm") or original in {"m", "n"}:
                name = "imm" if imm_index == 0 else f"imm{imm_index}"
                imm_index += 1
            else:
                name = original
                scalar_index += 1
        else:
            name = original or f"arg{scalar_index}"
            scalar_index += 1
        result[original] = unique(name)
    return result


def display_args(entry: Intrinsic) -> str:
    args = parsed_args(entry)
    if not args:
        return "void"
    names = canonical_arg_names(entry)
    return ", ".join(f"{typ} {names.get(name, name)}".strip() for typ, name in args)


def display_signature(entry: Intrinsic) -> str:
    return f"{entry.return_type} {entry.name} ({display_args(entry)})"


def replace_arg_names(text: str, entry: Intrinsic) -> str:
    names = canonical_arg_names(entry)
    replacements = {
        original: canonical
        for original, canonical in names.items()
        if original and original != canonical
    }
    if not replacements:
        return text
    pattern = re.compile(
        r"(?<![A-Za-z0-9_])("
        + "|".join(re.escape(name) for name in sorted(replacements, key=len, reverse=True))
        + r")(?![A-Za-z0-9_])"
    )
    return pattern.sub(lambda match: replacements[match.group(1)], text)


def display_scalar_names(entry: Intrinsic) -> list[str]:
    _, scalar_names = arg_name_map(entry)
    names = canonical_arg_names(entry)
    return [names.get(name, name) for name in scalar_names]


def lane_view(entry: Intrinsic) -> str:
    suffix = lane_suffix(entry)
    if suffix is None:
        return "vector lanes"
    count = lane_count(entry, WIDTH_BITS[suffix])
    return f"{count} x {lane_label_for_entry(entry, suffix)} lanes"


def lane_unit(entry: Intrinsic) -> str:
    suffix = lane_suffix(entry)
    if suffix is None:
        return "vector"
    return lane_label_for_entry(entry, suffix)


def selected_lane_phrase(tokens: list[str]) -> str:
    if "even" in tokens:
        return "even-numbered"
    if "odd" in tokens:
        return "odd-numbered"
    if "lo" in tokens:
        return "lower-half"
    if "hi" in tokens:
        return "upper-half"
    if "el0" in tokens:
        return "lane 0"
    return "corresponding"


def special_helper_sentence(entry: Intrinsic) -> str | None:
    op = normalized_op(entry)
    suffix = lane_suffix(entry) or "b"
    lane = lane_label_for_entry(entry, suffix)
    if "clrtail" in op:
        return (
            f"Preserve leading {lane} lanes and clear lanes at or after the tail position found in `a`. "
            "This is useful after vector string scanning to mask bytes beyond the valid tail."
        )
    if "clrstr" in op:
        control = "immediate" if op.endswith("i") else "scalar register" if op.endswith("r") else "vector"
        return (
            f"Preserve bytes before the string-limit position selected by the {control} operand and clear the rest. "
            "This is intended for vectorized string routines that need to zero bytes after a terminator or match boundary."
        )
    if "mepatmsk" in op:
        return (
            "Build a byte mask from the two immediate pattern bytes: matching byte positions become `0xff`, "
            "and non-matching positions become `0x00`. This provides a delimiter/pattern mask for string and parser code."
        )
    if "vseti" in op:
        return (
            "Create a mostly zero vector and place the immediate value in one selected 64-bit lane. "
            "This is a compact way to materialize sparse vector constants or masks."
        )
    if "frsti" in op or "frstv" in op or "frstm" in op:
        control = "immediate" if "frstii" in op else "control vector" if "frstiv" in op else "mask vector"
        return (
            f"Find the first matching {lane} element positions from `a` and `b` under the {control} and return "
            "match indices, or zero when no selected match is found. This supports vectorized substring/search primitives."
        )
    return None


def permutation_sentence(entry: Intrinsic) -> str | None:
    op = normalized_op(entry)
    tokens = mnemonic_tokens(entry)
    suffix = lane_suffix(entry) or "b"
    lane = lane_label_for_entry(entry, suffix)
    width = lane_bits(entry) or 8
    interp = lane_interpretation(entry)
    vector_names, scalar_names = arg_name_map(entry)
    if op.startswith("pack"):
        source_suffix = "w" if op.endswith("wh") else "h" if op.endswith("hb") or op.endswith("shb") else suffix
        source_lane = lane_label_for_entry(entry, source_suffix)
        mode = "with unsigned saturation" if "us" in op else "with signed saturation" if "ss" in op else "by truncation"
        return (
            f"Pack wider {source_lane} elements from the concatenated sources into narrower {lane} elements {mode}. "
            "This is used before storing or continuing with narrower packed data."
        )
    if op.startswith("punpck"):
        return (
            f"Unpack by interleaving lower {lane} lanes from `b` and `a` into alternating destination lanes. "
            "This separates packed streams into a wider interleaved layout."
        )
    if op.startswith("pextr"):
        return f"Extract the selected 16-bit lane from the vector and return it as a scalar, useful at vector/scalar boundaries."
    if op.startswith("pinsr"):
        return f"Insert the low 16-bit lane from `b` into a fixed lane of `a`, preserving the other lanes."
    if "vshf" in op:
        return (
            f"Use each control {lane} lane from `a` to choose a {lane} lane from `b` or `c`; "
            "control values with the zero bit set produce zero. This is a byte-style table lookup within each 128-bit half."
        )
    if "pshuf" in op or "shf" in op:
        if len(vector_names) >= 2:
            return (
                f"Use two-bit fields from the immediate to select {lane} lanes from the concatenated `a`/`b` inputs "
                "inside each 128-bit half."
            )
        return f"Use two-bit fields from the immediate to reorder each four-lane {lane} group of `a`."
    if op_has(entry, "w2x", "w4x", "w8x"):
        factor = 2 if "w2x" in op else 4 if "w4x" in op else 8
        dst_lane = lane_name_from_bits(factor * width, interp)
        select = selected_lane_phrase(tokens)
        return (
            f"Take {select} {lane} lanes, sign- or zero-extend each one into {dst_lane} lanes, and write the widened vector. "
            "This prepares narrow data for wider arithmetic without losing sign information."
        )
    if op_has(entry, "n2x"):
        source_lane = lane_label_for_entry(entry, WIDER_WIDTH.get(suffix, suffix))
        rounding = "rounding, " if "rnd" in tokens else ""
        saturation = "saturating " if "sc" in tokens or "uc" in tokens else ""
        return (
            f"Narrow {source_lane} elements into {lane} elements using {rounding}{saturation}conversion. "
            "This is the usual final step after wider intermediate arithmetic."
        )
    if "fill" in op and not vector_names:
        value = display_scalar_names(entry)[0] if scalar_names else "value"
        return f"Replicate scalar `{value}` into every {lane} lane, creating a vector constant."
    if any(x in op for x in ["splat", "broadcast", "fill"]):
        if not scalar_names:
            return f"Broadcast {lane} lane 0 from `a` into every destination lane."
        return f"Broadcast one selected {lane} lane from `a` into every destination lane."
    if "copy" in op:
        mode = "zero-extend" if "u" in tokens else "sign-extend"
        return f"Extract one {lane} lane from `a`, {mode} it if needed, and return the scalar value."
    if "extrins" in op:
        if entry.extension.key == "asx":
            return f"Copy the selected source {lane} lane into the selected destination lane in each 128-bit half."
        return f"Copy one selected source {lane} lane into one selected destination lane."
    if "vinsert" in op and suffix == "q":
        return "Start from `a` and replace the 128-bit lane selected by `imm` with the low 128-bit lane from `b`."
    if "vextract" in op and suffix == "q":
        return "Extract the 128-bit lane selected by `imm` from `a` into the low half of the result and clear the high half."
    if "insve" in op:
        if entry.extension.key == "asx":
            return f"Start from `a` and replace the selected {lane} lane in each 128-bit half with lane 0 from the matching half of `b`."
        return f"Start from `a` and replace the selected {lane} lane with lane 0 from `b`."
    if "insert" in op:
        return f"Start from `a` and replace the selected {lane} lane with the scalar value argument."
    if op == "vextr":
        return "For each 128-bit half, concatenate `b` followed by `a` and extract a byte window starting at `imm`."
    if "extr" in op:
        return "Concatenate the source vectors and extract the selected byte/lane window into the destination vector."
    if any(x in op for x in ["pckev", "ilvev"]):
        return f"Take even-numbered {lane} lanes from the two sources and interleave or pack them into the destination."
    if any(x in op for x in ["pckod", "ilvod"]):
        return f"Take odd-numbered {lane} lanes from the two sources and interleave or pack them into the destination."
    if "ilvl" in op:
        return f"Interleave lower-half {lane} lanes from `a` and `b`, useful when expanding two packed streams."
    if "ilvr" in op:
        return f"Interleave upper-half {lane} lanes from `a` and `b`, useful when expanding two packed streams."
    if "vshufi" in op:
        return (
            f"Start from `a` and replace one fixed {lane} lane group with an immediate shuffle of the matching group from `b`. "
            "This is useful for small in-place table rearrangements inside a 128-bit half."
        )
    if "vperml" in op:
        return f"Use the low control bits in `b` to select {lane} lanes from `a` within each 128-bit half."
    if op == "shuf":
        return f"Use the low bits of each `b` lane to select a {lane} lane from `a`."
    if op == "shufi":
        return f"Use immediate bit fields to select each destination {lane} lane from `a`."
    if op == "vpermi":
        return "Use one immediate bit per destination u64 lane to choose between the two u64 lanes in the same 128-bit half of `a`."
    if op == "vsel128i":
        return f"Use immediate fields to build each 128-bit half from selected {lane} lanes of `b` and `a`."
    if op == "vperm" and suffix == "b":
        return "Use byte selectors from `c` to choose bytes from `a` or `b`, with selector values in the zero range producing 0."
    if op in {"vsel", "vseli"}:
        return f"Use one immediate bit per {lane} lane: a 0 bit chooses `a`, and a 1 bit chooses `b`."
    if "vselr" in op:
        return f"Use the sign bit of each lane in `a` as the selector: non-negative chooses `b`, negative chooses `c`."
    if any(x in op for x in ["shuf", "perm", "sel"]):
        return f"Rearrange {lane} lanes according to the immediate or vector selector shown in Operation."
    if "sldi" in op or op == "sld":
        return "Slide a lane window across the concatenation of `b` and `a`, controlled by the immediate offset."
    if "ldi" in op:
        return f"Fill every {lane} lane from a sign- or zero-extended immediate constant."
    if "move" in op:
        return "Return the source vector unchanged; this wrapper exposes the move/copy builtin form."
    return None


def integer_sentence(entry: Intrinsic) -> str:
    op = normalized_op(entry)
    tokens = mnemonic_tokens(entry)
    width_text = lane_view(entry)
    mode = signedness(entry)
    if op in {"vaddx", "vaddxs", "vsubx", "vsubxs"}:
        action = "add" if "add" in op else "subtract"
        saturation = f" with {mode} saturation" if op.endswith("xs") else ""
        source_lane = lane_name_from_suffix(NARROWER_WIDTH.get(lane_suffix(entry) or "b", "b"), lane_interpretation(entry))
        return (
            f"Treat `a` as {width_text}, extend the corresponding narrower {source_lane} lanes from `b`, "
            f"and {action} them into the wider lanes{saturation}. This is for accumulating narrow samples into a wider running value."
        )
    if op == "vsubh":
        return (
            f"Subtract `b` from `a` in {width_text} and divide the extended difference by two. "
            "This halving subtract keeps one extra bit of headroom for average/difference filters."
        )
    if op in {"pmulhh", "pmullh"}:
        half = "upper" if op == "pmulhh" else "lower"
        return f"Multiply signed 16-bit lanes and keep the {half} 16 bits of each 32-bit product."
    if op in {"vmulp", "vmuhp"} and ("xacc" in tokens or op == "vmulp"):
        acc = " and combine the result with accumulator `a`" if "xacc" in tokens else ""
        primitive = "high-part packed multiply" if "muhp" in op else "packed multiply"
        return f"Compute the Loongson MSA2 {primitive}{acc}. This supports multiply-accumulate style integer kernels."
    if "dotp" in op:
        return (
            f"Multiply adjacent pairs of narrower {mode} lanes, add each pair, and write widened dot-product lanes. "
            "This is useful for packed filters, matrix kernels, and sum-of-products code."
        )
    if "dpadd" in op or "dpsub" in op:
        verb = "add to" if "dpadd" in op else "subtract from"
        return (
            f"Compute adjacent-pair dot products and {verb} the accumulator operand in widened lanes. "
            "This is a packed multiply-accumulate primitive."
        )
    if "sad" in op:
        return (
            f"Compute sums of absolute differences for adjacent {mode} lanes and write widened results. "
            "This is commonly used in image/video matching and distance calculations."
        )
    if "acc4b" in op or "acc8b" in op:
        group = 4 if "acc4b" in op else 8
        return f"Sum groups of {group} unsigned bytes into wider lanes, reducing packed byte data into partial sums."
    if "hadd" in op or "hsub" in op:
        action = "add" if "hadd" in op else "subtract"
        return f"Widen corresponding narrower source lanes and {action} them pairwise into {width_text}."
    if any(token in tokens for token in ["w2x", "w4x", "w8x", "wx"]):
        select = selected_lane_phrase(tokens)
        action = "multiply" if "mul" in op or "mult" in op else "add" if "add" in op else "subtract"
        acc = " and accumulate into `a`" if "acc" in tokens or "xacc" in tokens else ""
        return f"Widen {select} source lanes, {action} them in wider lanes{acc}. This avoids overflow from narrow intermediates."
    if "ave" in op or "avg" in op:
        rounding = "rounded-up" if "aver" in op else "floor"
        return f"Compute the lane-wise {rounding} average of `a` and `b`, useful for blending packed integer samples."
    if "adds" in op or "subs" in op or "sat" in op:
        return f"Perform lane-wise {mode} saturating integer arithmetic on {width_text}, clamping overflow instead of wrapping."
    if "add" in op:
        return f"Add {mode} integer lanes of `a` and `b` on {width_text}; immediate forms add the scalar immediate to each lane."
    if "sub" in op:
        return f"Subtract {mode} integer lanes of `b` from `a` on {width_text}; immediate forms subtract the scalar immediate."
    if "mulhi" in op or "muh" in op:
        return f"Multiply {mode} integer lanes and keep the upper half of each product."
    if "mul" in op or "mult" in op:
        return f"Multiply {mode} integer lanes of `a` and `b` on {width_text}."
    if "div" in op:
        return f"Divide {mode} integer lanes of `a` by `b` on {width_text}."
    if "mod" in op:
        return f"Compute the lane-wise {mode} remainder of `a` divided by `b` on {width_text}."
    if "max" in op:
        return f"Select the lane-wise maximum of {mode} integer operands on {width_text}."
    if "min" in op:
        return f"Select the lane-wise minimum of {mode} integer operands on {width_text}."
    if "abs" in op:
        return f"Take the absolute value of each signed integer lane on {width_text}."
    if "neg" in op:
        return f"Negate each signed integer lane on {width_text}."
    return f"Perform the lane-wise {mode} integer operation shown in Operation on {width_text}."


def logical_sentence(entry: Intrinsic) -> str | None:
    op = normalized_op(entry)
    kind = logical_operation_kind(op)
    if kind == "andn":
        return "Clear bits from `b` wherever `a` has one bits, i.e. compute `b & ~a` across the whole vector."
    if kind == "and":
        return "Compute bitwise AND across the whole vector; immediate forms AND each byte with the immediate mask."
    if kind == "nor":
        return "Compute bitwise NOR across the whole vector, producing the inverse of OR."
    if kind == "orn":
        return "Compute bitwise OR of `a` with the inverted bits of `b` across the whole vector."
    if kind == "xor":
        return "Compute bitwise XOR across the whole vector; immediate forms XOR each byte with the immediate mask."
    if kind == "or":
        return "Compute bitwise OR across the whole vector; immediate forms OR each byte with the immediate mask."
    if kind == "bsel":
        return "Use `a` as a bit mask: choose bits from `c` where the mask bit is one, otherwise from `b`."
    if kind == "bmnz":
        return "Use `a` as a bit mask and keep bits from `b` only where the mask bit is one; other bits become zero."
    if kind == "bmz":
        return "Use `a` as a bit mask and keep bits from `b` only where the mask bit is zero; masked bits become zero."
    return None


def bitwise_sentence(entry: Intrinsic) -> str | None:
    op = normalized_op(entry)
    tokens = mnemonic_tokens(entry)
    width_text = lane_view(entry)
    unit = lane_unit(entry)
    if "randsign" in op or "rorsign" in op:
        return (
            "Preserve the source vector except for one selected lane, which is replaced by an all-zero or all-one sign mask "
            "derived from the sign/control operand. This materializes per-lane sign predicates inside a vector register."
        )
    if "nxbits" in op:
        condition = "non-zero" if "any" in tokens else "non-negative" if "ge0" in tokens else "negative"
        return (
            f"Pack the {condition} predicate of each input byte into low-order mask bytes. "
            "This compresses byte-lane tests into a compact bit mask for string and scanning code."
        )
    if "wxbits" in op:
        value = "`0x01`/`0x00` bytes" if "01" in tokens else "`0xff`/`0x00` mask bytes"
        return (
            f"Expand packed bits from the low input bytes into {value}, one output byte per source bit. "
            "This turns a compact predicate mask back into byte-lane masks."
        )
    if "pmovmsk" in op:
        return f"Extract the sign bit from each element of {width_text} and pack those bits into a low-order scalar mask."
    if "binsl" in op or "binsr" in op:
        side = "most-significant" if "binsl" in op else "least-significant"
        return f"Insert a run of {side} bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate."
    if "bclr" in op:
        return f"Clear one selected bit in each {unit} lane."
    if "bset" in op:
        return f"Set one selected bit in each {unit} lane."
    if "bneg" in op or "bitrev" in op:
        return f"Toggle one selected bit in each {unit} lane."
    if "pcnt" in op:
        return f"Count one bits independently in each {unit} lane."
    if "clo" in op or "nloc" in op:
        return f"Count leading one bits independently in each {unit} lane."
    if "clz" in op or "nlzc" in op:
        return f"Count leading zero bits independently in each {unit} lane."
    if "getsign" in op:
        return f"Return the sign bit of each {unit} lane as a 0/1 value."
    if "signcov" in op:
        return f"Copy the magnitude/sign from `b` under the sign of `a` for each {unit} lane."
    if "signfill" in op:
        return f"Expand each {unit} lane sign bit into an all-zero or all-one mask."
    return None


def shift_sentence(entry: Intrinsic) -> str | None:
    op = normalized_op(entry)
    width_text = lane_view(entry)
    unit = lane_unit(entry)
    if "sllix" in op:
        source_lane = lane_name_from_suffix(NARROWER_WIDTH.get(lane_suffix(entry) or "b", "b"), lane_interpretation(entry))
        return f"Shift narrower {source_lane} lanes left by the immediate amount and write the widened results into {width_text}."
    if "bsll" in op:
        return "Shift the whole vector left by an immediate byte count, inserting zero bytes at the low end."
    if "bsrl" in op:
        return "Shift the whole vector right by an immediate byte count, inserting zero bytes at the high end."
    if "ror" in op:
        amount = "immediate" if op.endswith("i") else "per-lane"
        return f"Rotate each {unit} lane right by the {amount} shift count."
    if any(x in op for x in ["srarin", "srlrin", "srarins", "srlrins", "srarn", "srlrn", "srarns", "srlrns"]):
        kind = "arithmetic" if "sra" in op else "logical"
        sat = " with saturation" if "ns" in op else ""
        return f"Round, {kind}-shift-right the low wider source lanes from `a`, narrow into {width_text}{sat}, and clear the unused high lanes."
    if any(x in op for x in ["srain", "srlin", "sran", "srln", "srains", "srlins", "srans", "srlns"]):
        kind = "arithmetic" if "sra" in op else "logical"
        sat = " with saturation" if "ns" in op or "ins" in op else ""
        return f"{kind.capitalize()}-shift-right the low wider source lanes from `a`, narrow into {width_text}{sat}, and clear the unused high lanes."
    if "srar" in op or "srlr" in op:
        kind = "arithmetic" if "sra" in op else "logical"
        return f"Round and {kind}-shift-right each {unit} lane."
    if "sra" in op:
        return f"Arithmetic-shift-right each signed {unit} lane."
    if "srl" in op:
        return f"Logical-shift-right each unsigned {unit} lane."
    if "sll" in op:
        return f"Shift-left each {unit} lane."
    return None


def op_sentence(entry: Intrinsic) -> str:
    op = normalized_op(entry)
    tokens = mnemonic_tokens(entry)
    width_text = lane_view(entry)
    mode = signedness(entry)

    if entry.category == "crypto":
        core = core_name(entry.name, entry.extension).replace("_", ".")
        return f"Perform the `{core}` cryptographic round, message-schedule, or helper primitive on 128-bit vector state."
    if entry.category == "control_status":
        if entry.extension.key == "csr":
            if entry.name in CSR_RUNTIME_TESTED:
                return f"Read a Loongson control/status resource using `{entry.instruction}`."
            if entry.name in CSR_USER_MODE_UNSAFE:
                return f"Access a privileged Loongson control/status or TLB resource using `{entry.instruction}`."
            return f"Access a Loongson control/status resource using `{entry.instruction}`."
        return f"Read or write an MSA control register using the immediate register selector encoded by `{entry.instruction}`."
    if entry.category == "memory":
        op = normalized_op(entry)
        if op in {"ld", "vld", "xvld"} or op.startswith("vld") or op.startswith("xvld"):
            return "Load one full vector from memory at `mem + offset`."
        if op in {"st", "vst", "xvst"} or op.startswith("vst") or op.startswith("xvst"):
            return "Store one full vector to memory at `mem + offset`."
        if op.startswith("vbl") or op.startswith("xvbl"):
            return f"Load one {lane_label_for_entry(entry)} element from memory and broadcast it to every destination lane."
        if entry.extension.key == "asx" and op in {"vsb", "vsh", "vsw", "vsd", "xvsb", "xvsh", "xvsw", "xvsd"}:
            return f"Store the selected ASX upper-half {lane_label_for_entry(entry)} lane to memory at `mem + offset`."
        if op in {"vsb", "vsh", "vsw", "vsd"}:
            return f"Store the selected SX {lane_label_for_entry(entry)} lane to memory at `mem + offset`."
        return f"Load or store vector data using `{entry.instruction}`."
    if entry.category == "branch":
        suffix = lane_suffix(entry)
        if suffix is None or suffix == "v":
            condition = "not all zero" if "bnz" in op else "all zero"
            return f"Return the vector branch predicate for the whole vector being {condition}."
        condition = "all non-zero" if "bnz" in op else "any zero"
        return f"Return the vector branch predicate for {lane_label_for_entry(entry)} lanes being {condition}."
    special = special_helper_sentence(entry)
    if special:
        return special
    if any(x in op for x in ["faddsub", "fsubadd"]):
        return f"Alternately add and subtract floating-point {width_text}."
    if any(x in op for x in ["fmaddsub", "fmsubadd"]):
        return f"Alternately fused multiply-add and fused multiply-subtract floating-point {width_text}."
    if op.startswith("f") or op.startswith("vf"):
        names = {
            "fadd": "add",
            "fsub": "subtract",
            "fmul": "multiply",
            "fdiv": "divide",
            "fmax": "compute maximum",
            "fmin": "compute minimum",
            "fabs": "compute absolute value",
            "fneg": "negate",
            "fsqrt": "compute square root",
            "frsqrt": "compute reciprocal square-root estimate",
            "frcp": "compute reciprocal estimate",
            "flog2": "compute base-2 logarithm",
            "fexp2": "compute base-2 exponential",
            "fmadd": "fused multiply-add",
            "fmsub": "fused multiply-subtract",
            "fnmadd": "negated fused multiply-add",
            "fnmsub": "negated fused multiply-subtract",
            "ffint": "convert integer to floating point",
            "ftint": "convert floating point to integer",
            "ftrunc": "truncate floating point to integer",
            "fceil": "round toward positive infinity and convert",
            "ffloor": "round toward negative infinity and convert",
            "fround": "round to nearest and convert",
            "frint": "round to an integral floating-point value",
            "fclass": "classify floating-point values",
            "fexdo": "extract and convert paired floating-point data",
            "fexupl": "extend lower floating-point or fixed-point lanes",
            "fexupr": "extend upper floating-point or fixed-point lanes",
            "ffql": "convert lower fixed-point Q-format lanes to floating point",
            "ffqr": "convert upper fixed-point Q-format lanes to floating point",
            "ftq": "convert floating-point lanes to fixed-point Q-format",
        }
        for key, text in names.items():
            if key in op:
                return f"{text.capitalize()} lane-wise for {width_text}."
        if any(token in op for token in ["ceq", "clt", "cle", "cne", "caf", "saf", "cun", "cor", "sor", "cueq", "cult", "cule", "cune", "seq", "slt", "sle", "sne", "sueq", "sult", "sule", "sun", "sune"]):
            return f"Compare floating-point {width_text} and produce all-ones/all-zero mask elements."
    logical = logical_sentence(entry)
    if logical:
        return logical
    bitwise = bitwise_sentence(entry)
    if bitwise:
        return bitwise
    shift = shift_sentence(entry)
    if shift:
        return shift
    if any(x in op for x in ["ceq", "clt", "cle", "cmpeq", "cmpgt"]):
        return f"Compare {mode} {width_text} and produce all-ones elements for true lanes, zero for false lanes."
    if op == "sld":
        return f"Slide elements from the concatenation of two source vectors into {width_text} using an immediate offset."
    if "extrins" in op:
        if entry.extension.key == "asx":
            return f"Copy the selected source {lane_label_for_entry(entry)} lane into the selected destination lane in each 128-bit half."
        return f"Copy one selected source {lane_label_for_entry(entry)} lane into one selected destination lane."
    if any(x in op for x in ["perm", "shuf", "shf", "splat", "broadcast", "fill", "copy", "insert", "pins", "insve", "extr", "pack", "pck", "punpck", "ilv", "w2x", "n2x", "w4x", "w8x", "sel", "sldi", "ldi", "move"]):
        return permutation_sentence(entry) or f"Reorder {width_text} lanes as shown in Operation."
    if "dotp" in op or "dpadd" in op or "dpsub" in op:
        return integer_sentence(entry)
    if any(x in op for x in ["sad"]):
        return integer_sentence(entry)
    if "acc4b" in op or "acc8b" in op:
        return integer_sentence(entry)
    if any(x in op for x in ["hadd", "hsub"]):
        return integer_sentence(entry)
    if any(x in op for x in ["vextb", "vexth", "vextw"]):
        return f"Sign-extend or zero-extend smaller integer elements into {width_text} destination lanes."
    if "ave" in op or "avg" in op:
        return integer_sentence(entry)
    if any(x in op for x in ["add", "sub", "mul", "muh", "div", "mod", "max", "min", "abs", "neg", "sat"]):
        return integer_sentence(entry)
    return f"Perform the lane-level behavior shown in Operation for `{entry.instruction}` on {width_text}."


def semantic_description(entry: Intrinsic) -> str:
    sentence = op_sentence(entry)
    if entry.name in CSR_PROBE_UNAVAILABLE:
        return (
            f"{sentence} This helper was not executed in the runtime probe because it can touch privileged TLB "
            "state; the bundled GCC 7.3 toolchain also did not produce a runnable user-mode probe for this form."
        )
    if entry.name in CSR_RUNTIME_ISOLATED:
        observed = HARDWARE_OBSERVATIONS.get(entry.name, [])
        trap_note = ""
        if observed:
            out = observed[0].get("out")
            if isinstance(out, dict) and out.get("kind") == "scalar":
                value = out.get("value")
                signal_names = {-4: "SIGILL", -11: "SIGSEGV", -7: "SIGBUS"}
                if value in signal_names:
                    trap_note = f" On the tested machine, the child terminated with {signal_names[value]}."
        return (
            f"{sentence} A user-mode attempt on Loongson-3A4000 was isolated in a child process because this "
            f"read can trap on systems that do not allow CSR access.{trap_note}"
        )
    if entry.name in CSR_USER_MODE_UNSAFE:
        return (
            f"{sentence} This helper was compile-checked only; the runtime probe does not execute it in user mode "
            "because it can trap or modify privileged machine state."
        )
    if entry.name in CSR_RUNTIME_TESTED:
        return sentence
    return sentence


def semantic_header(entry: Intrinsic) -> list[str]:
    return binding_lines(entry)


def loop_template(entry: Intrinsic, expr: str, suffix: str | None = None) -> list[str]:
    width = lane_bits(entry)
    suffix = suffix or lane_suffix(entry) or "lane"
    n = lane_count(entry, width) if width is not None else "LANES"
    lane = lane_name_for_entry(entry, suffix)
    end = n - 1 if isinstance(n, int) else "LANES - 1"
    return [
        f"for i in 0..{end}:",
        f"  dst.{lane}[i] = {expr}",
    ]


def selected_index_expression(tokens: list[str]) -> str:
    if "even" in tokens:
        return "2*i"
    if "odd" in tokens:
        return "2*i + 1"
    if "lo" in tokens:
        return "i"
    if "hi" in tokens:
        return "i + source_lanes/2"
    if "el0" in tokens:
        return "0"
    return "i"


def group_base(index: int, group_lanes: int) -> int:
    return (index // group_lanes) * group_lanes


def indexed_lane(base: int, index_expr: str) -> str:
    if base == 0:
        return index_expr
    return f"{base} + {index_expr}"


def immediate_shuffle_selector(local_index: int) -> str:
    return f"((imm >> {2 * local_index}) & 3)"


def shf_immediate_lines(entry: Intrinsic, lane: str, width: int, n: int, two_sources: bool) -> list[str]:
    if two_sources:
        group_lanes = max(1, min(128, entry.extension.vector_bits) // width)
        lines: list[str] = []
        for i in range(n):
            local = i % group_lanes
            base = group_base(i, group_lanes)
            selector = immediate_shuffle_selector(local)
            source_a = f"a.{lane}[{indexed_lane(base, selector)}]"
            source_b = f"b.{lane}[{indexed_lane(base, f'{selector} - {group_lanes}')}]"
            lines.append(
                f"dst.{lane}[{i}] = ({selector} < {group_lanes}) ? {source_a} : {source_b};"
            )
        return lines

    group_lanes = min(4, n)
    lines = []
    for i in range(n):
        local = i % group_lanes
        base = group_base(i, group_lanes)
        selector = immediate_shuffle_selector(local)
        lines.append(f"dst.{lane}[{i}] = a.{lane}[{indexed_lane(base, selector)}];")
    return lines


def vector_shuffle_lines(entry: Intrinsic, lane: str, width: int, n: int) -> list[str]:
    group_lanes = max(1, min(128, entry.extension.vector_bits) // width)
    selector_mask = group_lanes - 1
    source_bit = group_lanes
    zero_bit = group_lanes * 4
    lines: list[str] = []
    for i in range(n):
        base = group_base(i, group_lanes)
        selector = f"a.{lane}[{i}]"
        lane_index = indexed_lane(base, f"({selector} & {selector_mask})")
        lines.append(
            f"dst.{lane}[{i}] = ({selector} & 0x{zero_bit:x}) ? 0 : "
            f"(({selector} & 0x{source_bit:x}) ? b.{lane}[{lane_index}] : c.{lane}[{lane_index}]);"
        )
    return lines


def vperm_b_lines(entry: Intrinsic, lane: str, n: int) -> list[str]:
    group_lanes = max(1, min(128, entry.extension.vector_bits) // 8)
    lines: list[str] = []
    for i in range(n):
        base = group_base(i, group_lanes)
        selector = f"c.{lane}[{i}]"
        lane_index = indexed_lane(base, f"({selector} & 15)")
        lines.append(
            f"dst.{lane}[{i}] = ({selector} & 0x40) ? 0 : "
            f"(({selector} & 0x10) ? a.{lane}[{lane_index}] : b.{lane}[{lane_index}]);"
        )
    return lines


def vshufi_lines(entry: Intrinsic, lane: str, width: int, n: int, op: str) -> list[str] | None:
    if lane == "u8":
        quarter_map = {
            "vshufirr": 0,
            "vshufirl": 1,
            "vshufilr": 2,
            "vshufill": 3,
        }
        quarter = next((value for key, value in quarter_map.items() if key in op), None)
        if quarter is None:
            return None
        lines = ["dst = a;"]
        group_lanes = max(1, min(128, entry.extension.vector_bits) // width)
        for base in range(0, n, group_lanes):
            start = base + quarter * 4
            for j in range(4):
                selector = immediate_shuffle_selector(j)
                lines.append(f"dst.{lane}[{start + j}] = b.{lane}[{start} + {selector}];")
        return lines

    if lane == "u16":
        half = 0 if "vshufir" in op else 1 if "vshufil" in op else None
        if half is None:
            return None
        lines = ["dst = a;"]
        group_lanes = max(1, min(128, entry.extension.vector_bits) // width)
        for base in range(0, n, group_lanes):
            start = base + half * 4
            for j in range(4):
                selector = immediate_shuffle_selector(j)
                lines.append(f"dst.{lane}[{start + j}] = b.{lane}[{start} + {selector}];")
        return lines

    return None


def vsel_immediate_lines(lane: str, n: int) -> list[str]:
    return [
        f"dst.{lane}[{i}] = ((imm >> {i}) & 1) ? b.{lane}[{i}] : a.{lane}[{i}];"
        for i in range(n)
    ]


def vselr_lines(lane: str, n: int) -> list[str]:
    return [
        f"dst.{lane}[{i}] = (a.{lane}[{i}] < 0) ? c.{lane}[{i}] : b.{lane}[{i}];"
        for i in range(n)
    ]


def vperml_lines(entry: Intrinsic, lane: str, width: int, n: int) -> list[str]:
    group_lanes = max(1, min(128, entry.extension.vector_bits) // width)
    mask = group_lanes - 1
    return [
        f"dst.{lane}[{i}] = a.{lane}[{indexed_lane(group_base(i, group_lanes), f'(b.{lane}[{i}] & {mask})')}];"
        for i in range(n)
    ]


def xvpermi_d_lines(n: int) -> list[str]:
    return [
        f"dst.u64[{i}] = a.u64[{group_base(i, 2)} + ((imm >> {i}) & 1)];"
        for i in range(n)
    ]


def xvsel128i_lines(suffix: str, n: int) -> list[str] | None:
    if suffix == "d":
        lines: list[str] = []
        for base in range(0, n, 2):
            lines.append(f"dst.u64[{base}] = b.u64[{base} + ((imm >> {base}) & 1)];")
            lines.append(f"dst.u64[{base + 1}] = a.u64[{base} + ((imm >> {base + 1}) & 1)];")
        return lines

    if suffix == "w":
        lines = []
        for base in range(0, n, 4):
            lines.append(f"dst.u32[{base}] = b.u32[{base} + ((imm >> 0) & 3)];")
            lines.append(f"dst.u32[{base + 1}] = b.u32[{base} + ((imm >> 2) & 3)];")
            lines.append(f"dst.u32[{base + 2}] = a.u32[{base} + ((imm >> 4) & 3)];")
            lines.append(f"dst.u32[{base + 3}] = a.u32[{base} + ((imm >> 6) & 3)];")
        return lines

    return None


def cast_expr(name: str, entry: Intrinsic, source_index: str = "i") -> str:
    suffix = lane_suffix(entry) or "lane"
    lane = lane_name_for_entry(entry, suffix)
    mode = signedness(entry)
    if mode == "unsigned":
        cast = "unsigned"
    elif mode == "signed":
        cast = "signed"
    elif mode == "unsigned/signed mixed":
        cast = "mixed-sign"
    else:
        cast = "element"
    return f"{cast}({name}.{lane}[{source_index}])"


def operation_for_crypto(entry: Intrinsic) -> list[str]:
    op = core_name(entry.name, entry.extension).replace("_", ".")
    vector_names, _ = arg_name_map(entry)
    arg_names = canonical_arg_names(entry)
    args = ", ".join(arg_names.get(name, name) for name in vector_names) if vector_names else "state"
    return [f"dst = {op}({args});"]


def operation_for_memory(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    suffix = lane_suffix(entry) or "b"
    width = lane_bits(entry) or 8
    lane = lane_name_from_suffix(suffix, "unsigned")
    vector_bytes = entry.extension.vector_bits // 8
    lane_count_value = entry.extension.vector_bits // width
    is_lane_store = op in {"vsb", "vsh", "vsw", "vsd", "xvsb", "xvsh", "xvsw", "xvsd"}
    is_full_load = op in {"ld", "vld", "xvld"} or op.startswith("vld") or op.startswith("xvld")
    is_full_store = op in {"st", "vst", "xvst"} or op.startswith("vst") or op.startswith("xvst")
    is_broadcast_load = op.startswith("vbl") or op.startswith("xvbl")

    if is_full_load:
        return [
            f"for j in 0..{vector_bytes - 1}:",
            "  dst.u8[j] = mem.u8[offset + j];",
        ]
    if is_full_store:
        return [
            f"for j in 0..{vector_bytes - 1}:",
            "  mem.u8[offset + j] = a.u8[j];",
        ]
    if is_broadcast_load:
        return [
            f"for i in 0..{lane_count_value - 1}:",
            f"  dst.{lane}[i] = load_{lane}(mem + offset);",
        ]
    if is_lane_store:
        if entry.extension.key == "asx":
            source = f"a.{lane}[lane + {lane_count_value // 2}]"
        else:
            source = f"a.{lane}[lane]"
        return [f"store_{lane}(mem + offset, {source});"]
    return None


def operation_for_control_status(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    if op == "cpucfg":
        return ["return read_cpu_configuration(selector);"]
    if op in {"rdcsr", "drdcsr"}:
        return ["return read_loongson_csr(csr);"]
    if op in {"wrcsr", "dwrcsr"}:
        return ["write_loongson_csr(csr, value);"]
    if op in {"rdgcsr", "drdgcsr"}:
        return ["return read_loongson_guest_csr(csr);"]
    if op in {"wrgcsr", "dwrgcsr"}:
        return ["write_loongson_guest_csr(csr, value);"]
    if op == "drdtime":
        return ["return { .dvalue = read_64bit_time_counter(), .dtimeid = read_time_counter_id() };"]
    if op in {"rdtimel", "rdtimeh"}:
        half = "low" if op == "rdtimel" else "high"
        return [f"return {{ .value = read_{half}_32_bits_of_time_counter(), .timeid = read_time_counter_id() }};"]
    if op in {"lddir", "lwdir"}:
        return ["return load_tlb_directory_entry(base, level);"]
    if op in {"ldpte", "lwpte"}:
        return ["return load_tlb_page_table_entry(op);"]
    if op == "cfcmsa":
        return ["return read_msa_control_register(imm);"]
    if op == "ctcmsa":
        return ["write_msa_control_register(imm, value);"]
    return None


def operation_for_special(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    tokens = mnemonic_tokens(entry)
    width = lane_bits(entry) or 8
    suffix = lane_suffix(entry) or "b"
    lane = lane_name_for_entry(entry, suffix)
    n = entry.extension.vector_bits // width
    vector_names, _ = arg_name_map(entry)
    if op == "move" or op.endswith("move"):
        return ["dst = a;"]
    if "ldi" in op and "sldi" not in op:
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = sign_extend_or_zero_extend(imm, {width});",
        ]
    if op == "sld" or "sldi" in op:
        return ["dst = slide_lanes(concatenate(b, a), imm);"]
    if "shf" in op:
        if "vshf" in op and len(vector_names) >= 3:
            return vector_shuffle_lines(entry, lane, width, n)
        return shf_immediate_lines(entry, lane, width, n, len(vector_names) >= 2)
    if "vextb" in op or "vexth" in op or "vextw" in op:
        source_suffix = "b" if "vextb" in op else "h" if "vexth" in op else "w"
        interpretation = "unsigned" if "u" in tokens else "signed"
        source = lane_name_from_suffix(source_suffix, interpretation)
        lane = lane_name_from_suffix(suffix, interpretation)
        extend = "zero_extend" if interpretation == "unsigned" else "sign_extend"
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = {extend}(a.{source}[i], {width});",
        ]
    if "clrtail" in op:
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = (i >= first_tail_lane) ? 0 : a.{lane}[i];",
        ]
    if "clrstr" in op:
        scalar_names = display_scalar_names(entry)
        source = "imm" if op.endswith("i") else scalar_names[0] if op.endswith("r") and scalar_names else "b"
        u8_lanes = entry.extension.vector_bits // 8
        return [
            f"for i in 0..{u8_lanes - 1}:",
            f"  dst.u8[i] = (i >= string_clear_limit_from({source})) ? 0 : a.u8[i];",
        ]
    if "mepatmsk" in op:
        u8_lanes = entry.extension.vector_bits // 8
        return [
            f"for i in 0..{u8_lanes - 1}:",
            "  dst.u8[i] = (build_repeated_u8_pattern(imm0, imm1) matches lane i) ? 0xff : 0x00;",
        ]
    if "vseti" in op:
        return [
            "dst = zero_vector();",
            "dst.u64[index_from_imm0] = zero_extend(imm1, 64);",
        ]
    if "frsti" in op or "frstv" in op or "frstm" in op:
        control = "imm" if "frstii" in op else "control vector" if "frstiv" in op else "mask"
        return [f"dst = first_match_indices_or_zero(a, b, {control});"]
    return None


def operation_for_branch(entry: Intrinsic) -> list[str]:
    op = normalized_op(entry)
    want_nonzero = "bnz" in op
    suffix = lane_suffix(entry)
    if suffix is None:
        return ["return any_u8_lane(a, != 0);" if want_nonzero else "return all_u8_lanes(a, == 0);"]
    lane = lane_name_for_entry(entry, suffix)
    if want_nonzero:
        return [f"return all_{lane}_lanes(a, != 0);"]
    return [f"return any_{lane}_lane(a, == 0);"]


def operation_for_float(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    width = lane_suffix(entry)
    if width not in FLOAT_WIDTHS:
        width = "w"
    lane = "fp32" if width == "w" else "fp64"
    int_interpretation = lane_interpretation(entry, neutral_is_unsigned=False)
    int_lane = lane_name_from_suffix(width, int_interpretation)
    dst_lane = lane_name_from_type(entry.return_type, width, int_interpretation)
    lanes = entry.extension.vector_bits // (32 if width == "w" else 64)
    if any(x in op for x in ["ceq", "clt", "cle", "cne", "caf", "saf", "cun", "cor", "sor", "cueq", "cult", "cule", "cune", "seq", "slt", "sle", "sne", "sueq", "sult", "sule", "sun", "sune"]):
        condition = op.split("c")[-1] if "c" in op else op
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.mask[i] = fp_compare_{condition}(a.{lane}[i], b.{lane}[i]) ? all_ones : 0;",
        ]
    if "fexdo" in op:
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.{lane}[i] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), i);",
        ]
    if "fexupl" in op or "fexupr" in op:
        half = "lower" if "fexupl" in op else "upper"
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.{lane}[i] = widen_{half}_half_to_next_fp_width(a, i);",
        ]
    if "ffql" in op or "ffqr" in op:
        half = "lower" if "ffql" in op else "upper"
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.{lane}[i] = fixed_point_q_to_float_{half}_half(a, i);",
        ]
    if "ftq" in op:
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.{int_lane}[i] = float_to_fixed_point_q(a, b, i);",
        ]
    if "fmaddsub" in op:
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.{lane}[i] = (i % 2 == 0) ? fused_round((a.{lane}[i] * b.{lane}[i]) + c.{lane}[i]) : fused_round((a.{lane}[i] * b.{lane}[i]) - c.{lane}[i]);",
        ]
    if "fmsubadd" in op:
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.{lane}[i] = (i % 2 == 0) ? fused_round((a.{lane}[i] * b.{lane}[i]) - c.{lane}[i]) : fused_round((a.{lane}[i] * b.{lane}[i]) + c.{lane}[i]);",
        ]
    if "faddsub" in op:
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.{lane}[i] = (i % 2 == 0) ? (a.{lane}[i] + b.{lane}[i]) : (a.{lane}[i] - b.{lane}[i]);",
        ]
    if "fsubadd" in op:
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.{lane}[i] = (i % 2 == 0) ? (a.{lane}[i] - b.{lane}[i]) : (a.{lane}[i] + b.{lane}[i]);",
        ]
    if "fexp2" in op:
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.{lane}[i] = a.{lane}[i] * pow2(b.{int_lane}[i]);",
        ]
    if "fclass" in op:
        class_lane = lane_name_from_suffix(width, "unsigned")
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.{class_lane}[i] = classify_fp(a.{lane}[i]);",
        ]
    if any(key in op for key in ["ftint", "ftrunc", "fceil", "ffloor", "fround"]):
        rounding_modes = {
            "ftint": "current_rounding_mode",
            "ftrunc": "toward_zero",
            "fceil": "toward_positive_infinity",
            "ffloor": "toward_negative_infinity",
            "fround": "nearest",
        }
        rounding = next(text for key, text in rounding_modes.items() if key in op)
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.{dst_lane}[i] = integer_convert(a.{lane}[i], rounding={rounding});",
        ]
    if "frint" in op:
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.{lane}[i] = round_to_integral_float(a.{lane}[i], rounding_mode_from_suffix);",
        ]
    expr_by_key = [
        ("fnmadd", f"-fused_round((a.{lane}[i] * b.{lane}[i]) + c.{lane}[i])"),
        ("fnmsub", f"-fused_round((a.{lane}[i] * b.{lane}[i]) - c.{lane}[i])"),
        ("fmadd", f"fused_round((a.{lane}[i] * b.{lane}[i]) + c.{lane}[i])"),
        ("fmsub", f"fused_round((a.{lane}[i] * b.{lane}[i]) - c.{lane}[i])"),
        ("fadd", f"a.{lane}[i] + b.{lane}[i]"),
        ("fsub", f"a.{lane}[i] - b.{lane}[i]"),
        ("fmul", f"a.{lane}[i] * b.{lane}[i]"),
        ("fdiv", f"a.{lane}[i] / b.{lane}[i]"),
        ("fmax", f"fp_max(a.{lane}[i], b.{lane}[i])"),
        ("fmin", f"fp_min(a.{lane}[i], b.{lane}[i])"),
        ("fabs", f"abs(a.{lane}[i])"),
        ("fneg", f"-a.{lane}[i]"),
        ("fsqrt", f"sqrt(a.{lane}[i])"),
        ("frsqrt", f"1.0 / sqrt(a.{lane}[i])"),
        ("frcp", f"1.0 / a.{lane}[i]"),
        ("flog2", f"log2(a.{lane}[i])"),
        ("ffint", f"float_convert(a.{int_lane}[i])"),
    ]
    for key, expr in expr_by_key:
        if key in op:
            return [
                f"for i in 0..{lanes - 1}:",
                f"  dst.{dst_lane}[i] = {expr};",
            ]
    return None


def operation_for_logical(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    kind = logical_operation_kind(op)
    if kind == "andn":
        expr = "b.bits & ~a.bits"
    elif kind == "and":
        expr = "a.bits & (imm_or_b)"
    elif kind == "nor":
        expr = "~(a.bits | imm_or_b)"
    elif kind == "orn":
        expr = "a.bits | ~b.bits"
    elif kind == "xor":
        expr = "a.bits ^ (imm_or_b)"
    elif kind == "or":
        expr = "a.bits | (imm_or_b)"
    elif kind == "bsel":
        expr = "(a.bits & c.bits) | (~a.bits & b.bits)"
    elif kind == "bmnz":
        expr = "select_bits(mask=a, true_value=b, false_value=0)"
    elif kind == "bmz":
        expr = "select_bits(mask=a, true_value=0, false_value=b)"
    else:
        return None
    return ["dst.bits = " + expr + ";"]


def operation_for_bitwise(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    tokens = mnemonic_tokens(entry)
    width = lane_bits(entry) or 8
    suffix = lane_suffix(entry) or "b"
    lane = lane_name_from_suffix(suffix, "signed" if any(x in op for x in ["signcov", "signfill", "randsign", "rorsign"]) else "unsigned")
    n = entry.extension.vector_bits // width
    idx = "imm" if op.endswith("i") or "i" in op[-2:] else f"b.{lane}[i] & {width - 1}"
    if "randsign" in op or "rorsign" in op:
        selector = "imm" if op.endswith("i") else "lane_index_from_control(c)"
        sign_source = "b" if op.endswith("i") else "b"
        return [
            "dst = a;",
            f"dst.{lane}[{selector}] = ({sign_source}.{lane}[{selector}] < 0) ? all_ones : 0;",
        ]
    if "nxbits" in op:
        if "any" in tokens:
            condition = "a.u8[8*j + bit] != 0"
        elif "ge0" in tokens:
            condition = "a.i8[8*j + bit] >= 0"
        else:
            condition = "a.i8[8*j + bit] < 0"
        groups = max(1, n // 8)
        return [
            f"for j in 0..{groups - 1}:",
            "  dst.u8[j] = 0;",
            "  for bit in 0..7:",
            f"    dst.u8[j] |= ({condition} ? 1 : 0) << bit;",
            f"for j in {groups}..{n - 1}:",
            "  dst.u8[j] = 0;",
        ]
    if "wxbits" in op:
        true_value = "0x01" if "01" in tokens else "0xff"
        groups = max(1, n // 8)
        return [
            f"for j in 0..{groups - 1}:",
            "  for bit in 0..7:",
            f"    dst.u8[8*j + bit] = ((a.u8[j] >> bit) & 1) ? {true_value} : 0x00;",
        ]
    if "pmovmsk" in op:
        return [f"return pack_sign_bits(a.{lane});"]
    if "binsl" in op or "binsr" in op:
        side = "most-significant" if "binsl" in op else "least-significant"
        count = "imm + 1" if op.endswith("i") else f"(b.{lane}[i] & {width - 1}) + 1"
        mask = f"{side}_bits_mask({width}, {count})"
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = insert_bits(a.{lane}[i], b.{lane}[i], {mask});",
        ]
    if any(x in op for x in ["bclr"]):
        expr = f"a.{lane}[i] & ~(1 << ({idx}))"
    elif any(x in op for x in ["bset"]):
        expr = f"a.{lane}[i] | (1 << ({idx}))"
    elif any(x in op for x in ["bneg", "bitrev"]):
        expr = f"a.{lane}[i] ^ (1 << ({idx}))"
    elif "pcnt" in op:
        expr = f"popcount(a.{lane}[i])"
    elif "clo" in op or "nloc" in op:
        expr = f"count_leading_ones(a.{lane}[i])"
    elif "clz" in op or "nlzc" in op:
        expr = f"count_leading_zeros(a.{lane}[i])"
    elif "getsign" in op:
        expr = f"sign_bit(a.{lane}[i])"
    elif "signcov" in op:
        expr = f"(a.{lane}[i] == 0) ? 0 : (a.{lane}[i] < 0 ? -b.{lane}[i] : b.{lane}[i])"
    elif "signfill" in op:
        expr = f"sign_extend_sign_bit(a.{lane}[i])"
    elif "nxbits" in op:
        expr = "predicate_mask_from_neighbor_bits(a.u8[i])"
    elif "wxbits" in op:
        expr = "expanded_mask_bits_from_u8(a.u8[i])"
    else:
        return None
    return [
        f"for i in 0..{n - 1}:",
        f"  dst.{lane}[i] = {expr};",
    ]


def operation_for_shift(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    width = lane_bits(entry) or 8
    suffix = lane_suffix(entry) or "b"
    shift_interpretation = lane_interpretation(entry) if "sllix" in op else "signed" if "sra" in op or "sran" in op or "srarn" in op or "srarin" in op else "unsigned"
    lane = lane_name_from_suffix(suffix, shift_interpretation)
    n = entry.extension.vector_bits // width
    vector_names, scalar_names = arg_name_map(entry)
    scalar_display_names = display_scalar_names(entry)
    scalar_amount = next((name for name in scalar_display_names if name not in {"mem"}), None)
    if op.endswith("i") or "ri" in op or "li" in op:
        amount = "imm"
    elif scalar_amount and len(vector_names) < 2:
        amount = scalar_amount
    else:
        amount = f"(b.{lane}[i] & {width - 1})"
    base = f"a.{lane}[i]"
    if "sllix" in op:
        source_suffix = NARROWER_WIDTH.get(suffix, suffix)
        source_lane = lane_name_from_suffix(source_suffix, shift_interpretation)
        source_width = WIDTH_BITS.get(source_suffix, width)
        groups = entry.extension.vector_bits // width
        return [
            f"for i in 0..{groups - 1}:",
            f"  dst.{lane}[i] = extend(a.{source_lane}[i] << imm, {source_width}, {width});",
        ]
    if "bsll" in op:
        return ["dst.u8 = u8_shift_left(a.u8, imm);"]
    if "bsrl" in op:
        return ["dst.u8 = u8_shift_right(a.u8, imm);"]
    if "ror" in op:
        expr = f"rotate_right({base}, {amount}, {width})"
    elif "sll" in op:
        expr = f"{base} << {amount}"
    elif "sra" in op or "sran" in op or "srarn" in op:
        expr = f"arithmetic_shift_right({base}, {amount})"
    elif "srl" in op or "srln" in op:
        expr = f"logical_shift_right({base}, {amount})"
    else:
        return None

    rounding = op.startswith(("srar", "srlr")) or any(x in op for x in ["srarn", "srlrn", "srarin", "srlrin"])
    narrow = any(x in op for x in ["srain", "sran", "srarn", "srarin", "srlin", "srln", "srlrn", "srlrin"])
    sat = any(x in op for x in ["srains", "srans", "srarns", "srarins", "srlins", "srlns", "srlrns", "srlrins"])
    if narrow:
        source_suffix = WIDER_WIDTH.get(suffix, suffix)
        source_lane = lane_name_from_suffix(source_suffix, shift_interpretation)
        amount_lane = lane_name_from_suffix(source_suffix, "unsigned")
        result_interpretation = lane_interpretation(entry) if sat else shift_interpretation
        result_lane = lane_name_from_suffix(suffix, result_interpretation)
        source_width = WIDTH_BITS.get(source_suffix, width)
        groups = entry.extension.vector_bits // source_width
        shift_kind = "arithmetic" if "sra" in op or "sran" in op else "logical"
        clamp = f"{signedness_prefix(entry)}_saturate" if sat else "truncate"
        src = f"a.{source_lane}[i]"
        if op.endswith("i") or "ri" in op or "li" in op:
            sh = f"imm & {source_width - 1}"
        elif scalar_amount and len(vector_names) < 2:
            sh = f"{scalar_amount} & {source_width - 1}"
        else:
            sh = f"b.{amount_lane}[i] & {source_width - 1}"
        shift_fn = f"{'rounding_' if rounding else ''}{shift_kind}_shift_right"
        lines = [
            f"for i in 0..{groups - 1}:",
            f"  dst.{result_lane}[i] = {clamp}({shift_fn}({src}, {sh}), {width});",
        ]
        if groups < n:
            lines.extend([
                f"for i in {groups}..{n - 1}:",
                f"  dst.{result_lane}[i] = 0;",
            ])
        return lines

    if rounding:
        shift_kind = "arithmetic" if "sra" in op else "logical"
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = rounding_{shift_kind}_shift_right({base}, {amount});",
        ]
    out = f"saturate_or_truncate({expr})" if narrow or sat else expr
    return [
        f"for i in 0..{n - 1}:",
        f"  dst.{lane}[i] = {out};",
    ]


def operation_for_permutation(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    tokens = mnemonic_tokens(entry)
    vector_names, scalar_names = arg_name_map(entry)
    scalar_names = display_scalar_names(entry)
    width = lane_bits(entry) or 8
    suffix = lane_suffix(entry) or "b"
    lane = lane_name_from_suffix(suffix, "unsigned")
    n = entry.extension.vector_bits // width
    if op.startswith("pack"):
        interp = "unsigned" if "us" in op else "signed" if "ss" in op else "unsigned"
        source_suffix = "w" if op.endswith("wh") else "h" if op.endswith("hb") or op.endswith("shb") else suffix
        dest_suffix = "h" if op.endswith("wh") else "b"
        source = lane_name_from_suffix(source_suffix, interp)
        dest = lane_name_from_suffix(dest_suffix, interp)
        dest_lanes = entry.extension.vector_bits // WIDTH_BITS[dest_suffix]
        clamp = "unsigned_saturate" if "us" in op else "signed_saturate" if "ss" in op else "truncate"
        return [
            f"for i in 0..{dest_lanes - 1}:",
            f"  dst.{dest}[i] = {clamp}(concatenate_lanes(a, b).{source}[i], bit_width({dest}));",
        ]
    if op.startswith("punpck"):
        return [
            f"for i in 0..{max(0, n // 2 - 1)}:",
            f"  dst.{lane}[2*i] = b.{lane}[i];",
            f"  dst.{lane}[2*i + 1] = a.{lane}[i];",
        ]
    if op.startswith("pextr"):
        selector = scalar_names[0] if scalar_names else "field"
        return [f"return extract_u16_lane(a, {selector});"]
    if op.startswith("pinsr"):
        index_match = re.search(r"pinsrh[_\.]([0-3])", core_name(entry.name, entry.extension).replace("_", "."))
        index = index_match.group(1) if index_match else "field"
        return [
            "dst = a;",
            f"dst.u16[{index}] = b.u16[0];",
        ]
    if "pshuf" in op:
        selector = scalar_names[0] if scalar_names else "order"
        source = "b" if entry.extension.key == "mmi" and len(vector_names) > 1 else "a"
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = {source}.{lane}[shuffle_selector({selector}, i)];",
        ]
    if "vshufi" in op:
        lines = vshufi_lines(entry, lane, width, n, op)
        if lines:
            return lines
        if suffix == "q":
            return [
                "dst.u128[0] = ((imm >> 0) & 1) ? b.u128[1] : b.u128[0];",
                "dst.u128[1] = ((imm >> 2) & 1) ? b.u128[1] : b.u128[0];",
            ]
    if op == "shuf" and len(vector_names) >= 2:
        mask = n - 1
        return [
            f"dst.{lane}[{i}] = a.{lane}[b.{lane}[{i}] & {mask}];"
            for i in range(n)
        ]
    if op == "shufi":
        mask = n - 1
        return [
            f"dst.{lane}[{i}] = a.{lane}[((imm >> {2 * i}) & {mask})];"
            for i in range(n)
        ]
    if op == "vpermi" and suffix == "d":
        return xvpermi_d_lines(n)
    if op == "vsel128i":
        lines = xvsel128i_lines(suffix, n)
        if lines:
            return lines
    if op_has(entry, "w2x", "w4x", "w8x"):
        factor = 2 if "w2x" in op else 4 if "w4x" in op else 8
        select = selected_index_expression(tokens)
        select = select.replace("source_lanes", str(n))
        widened_lane = lane_name_from_bits(factor * width, lane_interpretation(entry))
        return [
            f"for i in 0..{max(0, n // factor - 1)}:",
            f"  dst.{widened_lane}[i] = sign_or_zero_extend(a.{lane}[{select}], {factor} * {width});",
        ]
    if op_has(entry, "n2x"):
        rounding = "rounding_shift" if "rnd" in tokens else "shift"
        clamp = "signed_saturate" if "sc" in tokens else "unsigned_saturate" if "uc" in tokens else "truncate"
        source_interpretation = "signed" if "sx" in tokens else "unsigned"
        source_lane = lane_name_from_suffix(WIDER_WIDTH.get(suffix, suffix), source_interpretation)
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = {clamp}({rounding}(a.{source_lane}[i], imm), {width});",
        ]
    if "fill" in op and not vector_names:
        value = scalar_names[0] if scalar_names else "value"
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = truncate_or_extend({value}, {width});",
        ]
    if any(x in op for x in ["splat", "broadcast", "fill"]):
        source_index = "0" if not scalar_names else "imm"
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = a.{lane}[{source_index}];",
        ]
    if any(x in op for x in ["copy"]):
        return [f"return sign_or_zero_extend(a.{lane}[imm]);"]
    if "extrins" in op:
        if entry.extension.key == "asx":
            half = n // 2
            return [
                "dst = a;",
                "dst.{lane}[dst_lane] = b.{lane}[src_lane];".format(lane=lane),
                "dst.{lane}[dst_lane + {half}] = b.{lane}[src_lane + {half}];".format(
                    lane=lane,
                    half=half,
                ),
            ]
        return [
            "dst = a;",
            f"dst.{lane}[dst_lane] = b.{lane}[src_lane];",
        ]
    if "vinsert" in op and suffix == "q":
        return [
            "dst = a;",
            "dst.u128[imm & 1] = b.u128[0];",
        ]
    if "vextract" in op and suffix == "q":
        return [
            "dst.u128[0] = a.u128[imm & 1];",
            "dst.u128[1] = 0;",
        ]
    if op == "vextr":
        group_lanes = max(1, min(128, entry.extension.vector_bits) // 8)
        lines = []
        for i in range(n):
            base = group_base(i, group_lanes)
            local = i % group_lanes
            offset = "imm" if local == 0 else f"imm + {local}"
            lines.append(
                f"dst.u8[{i}] = ({offset} < {group_lanes}) ? "
                f"b.u8[{indexed_lane(base, offset)}] : "
                f"a.u8[{indexed_lane(base, f'{offset} - {group_lanes}') }];"
            )
        return lines
    if any(x in op for x in ["insert", "insve"]):
        value = scalar_names[1] if len(scalar_names) > 1 else "value"
        if "insve" in op and len(vector_names) > 1:
            if entry.extension.key == "asx":
                half = n // 2
                return [
                    "dst = a;",
                    f"dst.{lane}[imm] = b.{lane}[0];",
                    f"dst.{lane}[imm + {half}] = b.{lane}[{half}];",
                ]
            source = f"b.{lane}[0]"
        else:
            source = value
        return [
            "dst = a;",
            f"dst.{lane}[imm] = {source};",
        ]
    if any(x in op for x in ["extr"]):
        return [f"dst = concatenate_extract(a, b, u8_or_lane_offset_from_imm);"]
    if any(x in op for x in ["pckev", "ilvev"]):
        return [f"dst = interleave_or_pack(even {lane} lanes from a and b);"]
    if any(x in op for x in ["pckod", "ilvod"]):
        return [f"dst = interleave_or_pack(odd {lane} lanes from a and b);"]
    if "ilvl" in op:
        return [f"dst = interleave_lower_{lane}_lanes(a, b);"]
    if "ilvr" in op:
        return [f"dst = interleave_upper_{lane}_lanes(a, b);"]
    if "vperml" in op:
        return vperml_lines(entry, lane, width, n)
    if op == "vperm" and suffix == "b" and len(vector_names) >= 3:
        return vperm_b_lines(entry, lane, n)
    if op in {"vsel", "vseli"} and scalar_names:
        return vsel_immediate_lines(lane, n)
    if "vselr" in op:
        signed_lane = lane_name_from_suffix(suffix, "signed")
        return vselr_lines(signed_lane, n)
    if any(x in op for x in ["perm", "sel", "ldi"]):
        control = scalar_names[0] if scalar_names else canonical_arg_names(entry).get(vector_names[-1], vector_names[-1]) if vector_names else "control"
        return [
            f"dst = apply_{op}_lane_control(a, b, {control});",
        ]
    return None


def arithmetic_expr(entry: Intrinsic) -> str | None:
    op = normalized_op(entry)
    tokens = mnemonic_tokens(entry)
    width = lane_bits(entry) or 8
    suffix = lane_suffix(entry) or "b"
    lanes = vector_arg_lanes(entry, suffix)
    lane = lane_name_from_type(entry.return_type, suffix, lane_interpretation(entry))
    a_lane = lanes.get("a", lane)
    b_lane = lanes.get("b", lane)
    amount = "imm" if op.endswith("i") else f"b.{lane}[i]"
    a = f"a.{a_lane}[i]"
    b = f"b.{b_lane}[i]"
    if any(key in op for key in ["subssu", "subsus", "subsuu"]):
        sat_fn = "unsigned_saturate" if signedness(entry) == "unsigned" else "signed_saturate"
        return f"{sat_fn}({a} - {b}, {width})"
    if "add_a" in entry.instruction or op.endswith("adda") or "add.a" in entry.instruction:
        return f"abs({a}) + abs({b})"
    if "asub" in op:
        return f"abs({a} - {b})"
    if "pasub" in op:
        return f"abs({a} - {b})"
    if "adds" in op:
        return f"saturate({a} + {b}, {width}, signedness)"
    if "subs" in op:
        return f"saturate({a} - {b}, {width}, signedness)"
    if "addvi" in op:
        return f"{a} + imm"
    if "subvi" in op:
        return f"{a} - imm"
    if "add" in op and "dotp" not in op and "dpadd" not in op:
        return f"{a} + {amount if op.endswith('i') else b}"
    if "sub" in op and "dpsub" not in op:
        return f"{a} - {amount if op.endswith('i') else b}"
    if "mulhi" in op or "muh" in op:
        return f"upper_{width}_bits({a} * {b})"
    if "mul" in op or "mult" in op:
        return f"{a} * {b}"
    if "div" in op:
        return f"{a} / {b}"
    if "mod" in op:
        return f"{a} % {b}"
    if ("ave" in op or "avg" in op) and "aver" not in op:
        return f"floor_average({a}, {b})"
    if "aver" in op:
        return f"ceil_average({a}, {b})"
    if "max" in op:
        return f"max({a}, {amount if op.endswith('i') else b})"
    if "min" in op:
        return f"min({a}, {amount if op.endswith('i') else b})"
    if "abs" in op:
        return f"abs({a})"
    if "neg" in op:
        return f"-{a}"
    if "sat" in op:
        return f"saturate({a}, range_selected_by_imm, signedness)"
    return None


def operation_for_integer(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    tokens = mnemonic_tokens(entry)
    width = lane_bits(entry) or 8
    suffix = lane_suffix(entry) or "b"
    lane = lane_name_for_entry(entry, suffix)
    n = entry.extension.vector_bits // width
    if op == "biadd":
        groups = max(1, entry.extension.vector_bits // 16)
        return [
            f"for i in 0..{groups - 1}:",
            "  dst.u16[i] = a.u8[2*i] + a.u8[2*i + 1];",
        ]
    if op == "psadbh":
        groups = max(1, entry.extension.vector_bits // 16)
        return [
            f"for i in 0..{groups - 1}:",
            "  dst.u16[i] = abs(a.u8[2*i] - b.u8[2*i]) + abs(a.u8[2*i + 1] - b.u8[2*i + 1]);",
        ]
    if op == "pmaddhw":
        groups = max(1, entry.extension.vector_bits // 32)
        return [
            f"for i in 0..{groups - 1}:",
            "  dst.i32[i] = a.i16[2*i] * b.i16[2*i] + a.i16[2*i + 1] * b.i16[2*i + 1];",
        ]
    if "q" in tokens and op in {"mul", "mulr", "madd", "maddr", "msub", "msubr"}:
        lane = lane_name_from_suffix(suffix, "signed")
        rounding = "rounding_" if op in {"mulr", "maddr", "msubr"} else ""
        if op in {"mul", "mulr"}:
            return [
                f"for i in 0..{n - 1}:",
                f"  dst.{lane}[i] = signed_saturate({rounding}q_format_shift(a.{lane}[i] * b.{lane}[i], {width} - 1), {width});",
            ]
        operator = "-" if op.startswith("msub") else "+"
        term = f"signed_saturate({rounding}q_format_shift(b.{lane}[i] * c.{lane}[i], {width} - 1), {width})"
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = signed_saturate(a.{lane}[i] {operator} {term}, {width});",
        ]
    if op in {"pmulhh", "pmullh"}:
        selector = "high_16_bits" if op == "pmulhh" else "low_16_bits"
        return [
            "for i in 0..3:",
            f"  dst.i16[i] = {selector}(a.i16[i] * b.i16[i]);",
        ]
    if op in {"vaddx", "vaddxs", "vsubx", "vsubxs"}:
        interp = lane_interpretation(entry)
        src_suffix = NARROWER_WIDTH.get(suffix, suffix)
        src_lane = lane_name_from_suffix(src_suffix, interp)
        dst_lane = lane_name_from_suffix(suffix, interp)
        extend = "zero_extend" if interp == "unsigned" else "sign_extend"
        operator = "+" if "add" in op else "-"
        rhs = f"a.{dst_lane}[i] {operator} {extend}(b.{src_lane}[i], {width})"
        if op.endswith("xs"):
            sat = "unsigned_saturate" if interp == "unsigned" else "signed_saturate"
            rhs = f"{sat}({rhs}, {width})"
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{dst_lane}[i] = {rhs};",
        ]
    if op == "vsubh":
        interp = lane_interpretation(entry)
        dst_lane = lane_name_from_suffix(suffix, interp)
        rhs = f"floor_divide(widen(a.{dst_lane}[i]) - widen(b.{dst_lane}[i]), 2)"
        if interp == "unsigned":
            rhs = f"as_{dst_lane}({rhs})"
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{dst_lane}[i] = {rhs};",
        ]
    if op in {"vmulp", "vmuhp"}:
        is_xacc = "xacc" in tokens
        operator = "+" if is_xacc else "="
        src0 = "b" if is_xacc else "a"
        src1 = "c" if is_xacc else "b"
        product = f"{op}_lane({src0}.{lane}[i], {src1}.{lane}[i])"
        if "muhp" in op:
            product = f"high_part({product})"
        rhs = f"a.{lane}[i] {operator} {product}" if is_xacc else product
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = {rhs};",
        ]
    if any(x in op for x in ["maddv", "maddr", "msubv", "msubr"]):
        operator = "-" if "msub" in op else "+"
        product = f"b.{lane}[i] * c.{lane}[i]"
        if "maddr" in op or "msubr" in op:
            product = f"round_fixed_point({product})"
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = a.{lane}[i] {operator} {product};",
        ]
    if "acc4b" in op or "acc8b" in op:
        group = 4 if "acc4b" in op else 8
        groups = max(1, entry.extension.vector_bits // (8 * group))
        dst_lane = lane_name_from_bits(8 * group, "unsigned")
        terms = " + ".join(f"a.u8[i * {group} + {j}]" for j in range(group))
        return [
            f"for i in 0..{groups - 1}:",
            f"  dst.{dst_lane}[i] = {terms};",
        ]
    if "dotp" in op or "dpadd" in op or "dpsub" in op:
        source_suffix = NARROWER_WIDTH.get(suffix, suffix)
        groups = entry.extension.vector_bits // width
        src0 = "b" if "dpadd" in op or "dpsub" in op else "a"
        src1 = "c" if "dpadd" in op or "dpsub" in op else "b"
        mode = signedness_prefix(entry)
        if mode == "mixed_sign":
            src0_lane = lane_name_from_suffix(source_suffix, "unsigned")
            src1_lane = lane_name_from_suffix(source_suffix, "signed")
        elif mode == "unsigned":
            src0_lane = src1_lane = lane_name_from_suffix(source_suffix, "unsigned")
        else:
            src0_lane = src1_lane = lane_name_from_suffix(source_suffix, "signed")
        lane = lane_name_from_suffix(suffix, "unsigned" if mode == "unsigned" else "signed")
        term0 = f"{src0}.{src0_lane}[2*i] * {src1}.{src1_lane}[2*i]"
        term1 = f"{src0}.{src0_lane}[2*i + 1] * {src1}.{src1_lane}[2*i + 1]"
        if "dpadd" in op:
            assign = f"dst.{lane}[i] = a.{lane}[i] + {term0} + {term1};"
        elif "dpsub" in op:
            assign = f"dst.{lane}[i] = a.{lane}[i] - {term0} - {term1};"
        else:
            assign = f"dst.{lane}[i] = {term0} + {term1};"
        return [
            f"for i in 0..{groups - 1}:",
            f"  {assign}",
        ]
    if "sad" in op:
        dst_suffix = WIDER_WIDTH.get(suffix, suffix)
        dst_lane = lane_name_from_suffix(dst_suffix, lane_interpretation(entry))
        acc_prefix = f"a.{dst_lane}[i] + " if "acc" in tokens else ""
        src0 = "b" if "acc" in tokens else "a"
        src1 = "c" if "acc" in tokens else "b"
        d0 = f"abs(widen({src0}.{lane}[2*i]) - widen({src1}.{lane}[2*i]))"
        d1 = f"abs(widen({src0}.{lane}[2*i + 1]) - widen({src1}.{lane}[2*i + 1]))"
        return [
            f"for i in 0..{max(0, n // 2 - 1)}:",
            f"  dst.{dst_lane}[i] = {acc_prefix}{d0} + {d1};",
        ]
    if any(token in tokens for token in ["w2x", "w4x", "w8x", "wx"]):
        op_char = "*" if "mult" in op or "mul" in op else "+" if "add" in op else "-"
        select = selected_index_expression(tokens).replace("source_lanes", str(n))
        factor = 8 if "w8x" in tokens else 4 if "w4x" in tokens else 2
        dst_lane = lane_name_from_bits(width * factor, lane_interpretation(entry))
        groups = max(1, entry.extension.vector_bits // (width * factor))
        is_acc = "acc" in tokens or "xacc" in tokens
        src0 = "b" if is_acc else "a"
        src1 = "c" if is_acc else "b"
        lanes = vector_arg_lanes(entry, suffix)
        src0_lane = lanes.get(src0, lane)
        src1_lane = lanes.get(src1, lane)
        term = f"widen({src0}.{src0_lane}[{select}]) {op_char} widen({src1}.{src1_lane}[{select}])"
        rhs = f"a.{dst_lane}[i] + {term}" if is_acc else term
        return [
            f"for i in 0..{groups - 1}:",
            f"  dst.{dst_lane}[i] = {rhs};",
        ]
    if "hadd" in op or "hsub" in op:
        operator = "+" if "hadd" in op else "-"
        source_suffix = NARROWER_WIDTH.get(suffix, suffix)
        source_lane = lane_name_from_suffix(source_suffix, lane_interpretation(entry))
        groups = entry.extension.vector_bits // width
        return [
            f"for i in 0..{groups - 1}:",
            f"  dst.{lane}[i] = widen(a.{source_lane}[i]) {operator} widen(b.{source_lane}[i]);",
        ]
    expr = arithmetic_expr(entry)
    if expr is None:
        return None
    return [
        f"for i in 0..{n - 1}:",
        f"  dst.{lane}[i] = {expr};",
    ]


def operation_for_comparison(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    width = lane_bits(entry) or 8
    suffix = lane_suffix(entry) or "b"
    lane = lane_name_for_entry(entry, suffix)
    n = entry.extension.vector_bits // width
    if "ceq" in op or "cmpeq" in op:
        cond = "=="
    elif "cle" in op:
        cond = "<="
    elif "clt" in op:
        cond = "<"
    elif "cmpgt" in op:
        cond = ">"
    else:
        return None
    rhs = "imm" if op.endswith("i") else f"b.{lane}[i]"
    return [
        f"for i in 0..{n - 1}:",
        f"  dst.{lane}[i] = (a.{lane}[i] {cond} {rhs}) ? all_ones : 0;",
    ]


def simplify_index_expression(expr: str) -> str:
    if not re.fullmatch(r"[0-9+\-*/% ()]+", expr):
        return expr
    try:
        return str(int(eval(expr, {"__builtins__": {}}, {})))
    except Exception:
        return expr


def strip_redundant_rhs_parens(line: str) -> str:
    match = re.fullmatch(r"(\s*[^=]+=\s*)\(([^()?:;]+)\);", line)
    if match:
        return f"{match.group(1)}{match.group(2)};"
    return line


def substitute_loop_var(line: str, var: str, value: int) -> str:
    line = re.sub(rf"\b{re.escape(var)}\b", str(value), line)

    def replace_index(match: re.Match[str]) -> str:
        return "[" + simplify_index_expression(match.group(1)) + "]"

    line = re.sub(r"\[([^\[\]]+)\]", replace_index, line)
    ternary = re.fullmatch(r"(\s*[^=]+=\s*)\((-?\d+) % 2 == 0\) \? (.*) : (.*);", line)
    if ternary:
        chosen = ternary.group(3) if int(ternary.group(2)) % 2 == 0 else ternary.group(4)
        line = f"{ternary.group(1)}{chosen};"
    return strip_redundant_rhs_parens(line)


def expand_static_loop_once(lines: list[str]) -> tuple[list[str], bool]:
    result: list[str] = []
    changed = False
    index = 0
    while index < len(lines):
        line = lines[index]
        match = re.fullmatch(r"for ([A-Za-z_][A-Za-z0-9_]*) in (-?\d+)\.\.(-?\d+):", line)
        if not match:
            result.append(line)
            index += 1
            continue

        body: list[str] = []
        index += 1
        while index < len(lines) and lines[index].startswith("  "):
            body.append(lines[index][2:])
            index += 1

        if not body:
            result.append(line)
            continue

        changed = True
        var = match.group(1)
        start = int(match.group(2))
        end = int(match.group(3))
        step = 1 if start <= end else -1
        for value in range(start, end + step, step):
            for body_line in body:
                result.append(substitute_loop_var(body_line, var, value))
    return result, changed


def expand_static_loops(lines: list[str]) -> list[str]:
    for _ in range(4):
        lines, changed = expand_static_loop_once(lines)
        if not changed:
            break
    return lines


def semantic_operation(entry: Intrinsic) -> str:
    lines = semantic_header(entry)
    handlers = [
        operation_for_crypto if entry.category == "crypto" else None,
        operation_for_control_status if entry.category == "control_status" else None,
        operation_for_memory if entry.category == "memory" else None,
        operation_for_branch if entry.category == "branch" else None,
        operation_for_special,
        operation_for_float if entry.category.startswith("float") or normalized_op(entry).startswith("f") else None,
        operation_for_logical,
        operation_for_bitwise,
        operation_for_shift,
        operation_for_comparison,
        operation_for_integer,
        operation_for_permutation,
    ]
    body = None
    for handler in handlers:
        if handler is None:
            continue
        body = handler(entry)
        if body:
            break
    if not body:
        body = ["dst = operation_named_by_mnemonic(a, b, c, imm);"]
    body = expand_static_loops(body)
    return "\n".join(lines + body)


def render_header_mapping(entry: Intrinsic) -> str:
    body = replace_arg_names(entry.body.strip(), entry)
    if entry.kind == "alias":
        return f"#define {entry.name} {body}"
    if entry.kind == "macro":
        arg_names = canonical_arg_names(entry)
        return f"#define {entry.name}({', '.join(arg_names.get(arg.split()[-1], arg.split()[-1]) for arg in split_args(entry.args))}) {body}"
    return body


def render_latency_throughput(entry: Intrinsic) -> str:
    rows = LATENCY_THROUGHPUT_ROWS.get(entry.name, [])
    if not rows:
        return ""
    columns = latency_cpu_columns()
    row_by_cpu = {(row.get("cpu", ""), row.get("uarch", "")): row for row in rows}
    lines = [
        "### Latency and Throughput\n\n",
        "<table>\n",
        "<thead>\n",
        "<tr>",
    ]
    for cpu, uarch in columns:
        lines.append(f'<th colspan="2">{html_escape(latency_cpu_label(cpu, uarch))}</th>')
    lines.extend(["</tr>\n", "<tr>"])
    for _cpu, _uarch in columns:
        lines.append("<th>Latency</th><th>Throughput (IPC)</th>")
    lines.extend(["</tr>\n", "</thead>\n", "<tbody>\n", "<tr>"])
    for cpu, uarch in columns:
        row = row_by_cpu.get((cpu, uarch), {})
        title = row.get("notes", "")
        title_attr = f' title="{html_escape(title)}"' if title else ""
        lines.append(
            f"<td{title_attr}>{html_escape(row.get('latency', ''))}</td>"
            f"<td{title_attr}>{html_escape(row.get('throughput(ipc)', ''))}</td>"
        )
    lines.extend(["</tr>\n", "</tbody>\n", "</table>\n\n"])
    notes = [
        f"{latency_cpu_label(row.get('cpu', ''), row.get('uarch', ''))}: {row.get('notes', '')}"
        for row in rows
        if row.get("notes")
    ]
    if notes:
        lines.append(f"Notes: {'; '.join(html_escape(note) for note in notes)}.\n\n")
    return "".join(lines)


def render_intrinsic(entry: Intrinsic) -> str:
    builtin = entry.builtin or "N/A"
    source = f"{entry.extension.header}:{entry.source_line}"
    signature = display_signature(entry)
    latency_throughput = render_latency_throughput(entry)
    return f"""## {signature}

### Synopsis

```c
{signature}
#include <{entry.extension.include}>
Instruction: {entry.instruction}
Builtin: {builtin}
CPU Flags: {entry.extension.cpu_flag}
Kind: {entry.kind}
Source: {source}
```

### Description

{semantic_description(entry)}

### Operation

```c
{semantic_operation(entry)}
```

{latency_throughput}### Header Mapping

```c
{render_header_mapping(entry)}
```

"""


def write_page(path: pathlib.Path, title: str, entries: list[Intrinsic]) -> None:
    text = [f"# {title}\n\n"]
    if entries:
        ext = entries[0].extension
        text.append(
            f"Generated from `{ext.header}`. This page contains {len(entries)} intrinsic"
            f"{'' if len(entries) == 1 else 's'}.\n\n"
        )
    for entry in entries:
        text.append(render_intrinsic(entry))
    path.write_text("".join(text))


def write_latency_throughput(all_entries: dict[str, list[Intrinsic]]) -> None:
    rows = [row for intrinsic_rows in LATENCY_THROUGHPUT_ROWS.values() for row in intrinsic_rows]
    lines = [
        "# Latency and Throughput\n\n",
        "This page lists instruction latency and reciprocal throughput data collected by inline-assembly ",
        "microbenchmarks on real hardware. The generator derives the accepted assembler form from the bundled ",
        "Loongson GCC 7.3 output, then measures dependency chains for latency and independent streams for ",
        "throughput. Numbers are useful for scheduling intuition, but they are microbenchmark results rather ",
        "than architectural guarantees.\n\n",
        "To refresh the data, generate benchmarks with `tools/measure_latency_throughput.py`, run the resulting ",
        "binaries on the target machine, and fold the raw CSV output with `tools/collect_latency_throughput.py` ",
        "into `data/latency_throughput_<cpu>.csv`.\n\n",
        "`SIGILL` means the measured binary trapped for that intrinsic on the listed CPU. `partial SIGILL` means at ",
        "least one generated dependency form trapped, while other forms still produced usable measurements.\n\n",
    ]
    if not rows:
        lines.append(
            "No latency/throughput CSV is currently checked in. The per-intrinsic sections are emitted automatically "
            "when `data/latency_throughput_*.csv` files are present.\n"
        )
        (ROOT / "docs" / "latency_throughput.md").write_text("".join(lines))
        return

    entry_by_name = {entry.name: entry for entries in all_entries.values() for entry in entries}
    columns = latency_cpu_columns()
    grouped: dict[str, list[dict[str, str]]] = defaultdict(list)
    for row in rows:
        grouped[row.get("intrinsic", "")].append(row)
    names = sorted(
        grouped,
        key=lambda item: (
            grouped[item][0].get("extension", ""),
            grouped[item][0].get("instruction", ""),
            item,
        )
    )
    lines.extend(
        [
            "<table>\n",
            "<thead>\n",
            '<tr><th rowspan="2">Intrinsic</th><th rowspan="2">Instruction</th><th rowspan="2">Extension</th>',
        ]
    )
    for cpu, uarch in columns:
        lines.append(f'<th colspan="2">{html_escape(latency_cpu_label(cpu, uarch))}</th>')
    lines.extend(["</tr>\n", "<tr>"])
    for _cpu, _uarch in columns:
        lines.append("<th>Latency</th><th>Throughput (IPC)</th>")
    lines.extend(["</tr>\n", "</thead>\n", "<tbody>\n"])
    for name in names:
        row_by_cpu = {(row.get("cpu", ""), row.get("uarch", "")): row for row in grouped[name]}
        first = grouped[name][0]
        entry = entry_by_name.get(name)
        label = name
        if entry:
            label = f'<a href="{entry.extension.key}/{entry.category}.md">{html_escape(name)}</a>'
        else:
            label = html_escape(label)
        lines.append(
            f"<tr><td>{label}</td><td><code>{html_escape(first.get('instruction', ''))}</code></td>"
            f"<td>{html_escape(first.get('extension', ''))}</td>"
        )
        for cpu, uarch in columns:
            row = row_by_cpu.get((cpu, uarch), {})
            title = row.get("notes", "")
            title_attr = f' title="{html_escape(title)}"' if title else ""
            lines.append(
                f"<td{title_attr}>{html_escape(row.get('latency', ''))}</td>"
                f"<td{title_attr}>{html_escape(row.get('throughput(ipc)', ''))}</td>"
            )
        lines.append("</tr>\n")
    lines.extend(["</tbody>\n", "</table>\n"])
    (ROOT / "docs" / "latency_throughput.md").write_text("".join(lines))


def write_index(all_entries: dict[str, list[Intrinsic]]) -> None:
    total = sum(len(items) for items in all_entries.values())
    lines = [
        "# Unofficial MIPS Loongson Intrinsics Guide\n\n",
        "This is an unofficial guide for the MIPS-era Loongson SIMD intrinsic headers in this repository. ",
        "It follows the organization of the Unofficial LoongArch Intrinsics Guide, but the content is generated ",
        "from the Loongson SX, Loongson ASX, MIPS MSA, MSA2, MSA Crypto, Loongson MMI, and Loongson CSR GCC-style headers.\n\n",
        "The SX and ASX headers are early Loongson SIMD interfaces with 128-bit and 256-bit vector registers. ",
        "Their intrinsic prefixes are still `__lsx_` and `__lasx_`, even though these files target MIPS feature ",
        "macros rather than LoongArch feature macros. MIPS MSA, MSA2, and MSA Crypto document the 128-bit MSA ",
        "families supplied in `msa.h`, `msa2.h`, and `msa-cryptointrin.h`. MMI documents the older 64-bit ",
        "paired-integer multimedia operations, while CSR documents scalar control/status helpers.\n\n",
        "The operation blocks are generated from hardware probe results on a Loongson-3A4000 plus category-specific ",
        "semantics validated by those probes. A separate header-mapping block shows the wrapper body from the header ",
        "with argument names normalized for readability. When the header implements a builtin with inline assembly, ",
        "the generator records the real instruction mnemonic used there. For compiler builtins without inline ",
        "assembly in the header, the mnemonic is reconstructed from the builtin name.\n\n",
        "## Project Information\n\n",
        "- Project repository: <https://github.com/nihui/unofficial-mips-loongson-intrinsics-guide>\n",
        "- Inspired by and modeled after: <https://github.com/jiegec/unofficial-loongarch-intrinsics-guide>\n",
        "- This guide was generated with assistance from OpenAI GPT-5 Codex.\n\n",
        "## Covered Headers\n\n",
        "| Extension | Header | Vector width | Feature macro | Intrinsics |\n",
        "|-----------|--------|--------------|---------------|------------|\n",
    ]
    for ext in EXTENSIONS:
        entries = all_entries[ext.key]
        lines.append(
            f"| {ext.name} | `{ext.header}` | {ext.vector_bits} bit | `{ext.cpu_flag}` | {len(entries)} |\n"
        )
    lines.extend(
        [
            f"\nTotal documented intrinsics: {total}.\n\n",
            "## Register Model\n\n",
            "The pseudo descriptions assume vectors can be viewed through element arrays similar to the following C unions:\n\n",
            "```c\n",
            "union loongson_64_register {\n",
            "  uint8_t u8[8];\n",
            "  int8_t i8[8];\n",
            "  uint16_t u16[4];\n",
            "  int16_t i16[4];\n",
            "  uint32_t u32[2];\n",
            "  int32_t i32[2];\n",
            "  uint64_t u64[1];\n",
            "  int64_t i64[1];\n",
            "};\n\n",
            "union loongson_128_register {\n",
            "  uint8_t u8[16];\n",
            "  int8_t i8[16];\n",
            "  uint16_t u16[8];\n",
            "  int16_t i16[8];\n",
            "  uint32_t u32[4];\n",
            "  int32_t i32[4];\n",
            "  uint64_t u64[2];\n",
            "  int64_t i64[2];\n",
            "  unsigned __int128 u128[1];\n",
            "  __int128 i128[1];\n",
            "  float fp32[4];\n",
            "  double fp64[2];\n",
            "};\n\n",
            "union loongson_256_register {\n",
            "  uint8_t u8[32];\n",
            "  int8_t i8[32];\n",
            "  uint16_t u16[16];\n",
            "  int16_t i16[16];\n",
            "  uint32_t u32[8];\n",
            "  int32_t i32[8];\n",
            "  uint64_t u64[4];\n",
            "  int64_t i64[4];\n",
            "  unsigned __int128 u128[2];\n",
            "  __int128 i128[2];\n",
            "  float fp32[8];\n",
            "  double fp64[4];\n",
            "};\n",
            "```\n\n",
            "The source headers are GCC runtime headers and retain their original copyright notices.\n",
        ]
    )
    (ROOT / "docs" / "index.md").write_text("".join(lines))


def write_basics(all_entries: dict[str, list[Intrinsic]]) -> None:
    lines = [
        "# Loongson SIMD Basics\n\n",
        "Loongson SX and ASX are MIPS-era SIMD extensions. SX exposes 128-bit integer and floating-point vector ",
        "types such as `__m128i`, `__m128`, and `__m128d`; ASX exposes 256-bit `__m256i`, `__m256`, and `__m256d` ",
        "types. Standard MSA, MSA2, and MSA Crypto use 128-bit MSA vector values. Loongson MMI uses 64-bit ",
        "paired i8/u8, i16/u16, and i32/u32 values, and Loongson CSR exposes scalar control/status register helpers.\n\n",
        "The public intrinsics in these headers are thin wrappers around compiler builtins or inline assembly helpers. ",
        "The documentation therefore records the public intrinsic, target builtin, reconstructed instruction mnemonic, ",
        "and the original header wrapper. Immediate arguments are documented as `int` when the macro does not provide ",
        "a stronger type in comments.\n\n",
        "Operation blocks are hardware-checked pseudocode. The probe suite cross-compiled each public intrinsic with ",
        "the bundled Loongson GCC 7.3 toolchain and executed the runnable cases on a Loongson-3A4000; control/status ",
        "helpers that can trap or alter privileged state are compile-checked and explicitly marked. Hardware-specific ",
        "exception behavior, NaN payload propagation, and privileged side effects should still be checked against ",
        "vendor manuals when those details matter.\n\n",
        "## Naming Notes\n\n",
        "- Suffixes `b`, `h`, `w`, `d`, and `q` denote 8-bit, 16-bit, 32-bit, 64-bit, and 128-bit lanes. ",
        "Operation pseudocode names those views as `iN`/`uN` or `fp32`/`fp64` when signedness or floating-point format is known.\n",
        "- Suffixes `s`, `u`, and `us` usually denote signed, unsigned, and unsigned/signed mixed interpretation.\n",
        "- Tokens such as `lo`, `hi`, `even`, `odd`, and `el0` describe lane selection.\n",
        "- Tokens such as `w2x`, `n2x`, `w4x`, `w8x`, and `wx` describe widening or narrowing operations.\n",
        "- Tokens such as `rnd`, `sat`, and immediate forms ending in `i` indicate rounding, saturation, or immediate operands.\n",
        "- [Latency and throughput tables](latency_throughput.md) are generated from `data/latency_throughput_*.csv` when measured data is available.\n\n",
        "## Generation Summary\n\n",
    ]
    for ext in EXTENSIONS:
        category_counts = defaultdict(int)
        for entry in all_entries[ext.key]:
            category_counts[entry.category] += 1
        summary = ", ".join(
            f"{CATEGORIES[name]}: {category_counts[name]}" for name in SECTION_ORDER if category_counts[name]
        )
        lines.append(f"- {ext.name}: {summary}\n")
    (ROOT / "docs" / "loongson_simd_basics.md").write_text("".join(lines))


def write_mkdocs(all_entries: dict[str, list[Intrinsic]]) -> None:
    lines = [
        "site_name: Unofficial MIPS Loongson Intrinsics Guide\n",
        "site_description: Unofficial MIPS Loongson Intrinsics Guide\n",
        "theme:\n",
        "  name: readthedocs\n",
        "copyright: Copyright &copy; 2026\n",
        "extra_css:\n",
        "  - main.css\n",
        "nav:\n",
        "  - Home: index.md\n",
        "  - Loongson SIMD Basics: loongson_simd_basics.md\n",
        "  - Latency and Throughput: latency_throughput.md\n",
    ]
    for ext in EXTENSIONS:
        lines.append(f"  - {ext.nav_title}:\n")
        category_counts = defaultdict(int)
        for entry in all_entries[ext.key]:
            category_counts[entry.category] += 1
        for category in SECTION_ORDER:
            if category_counts[category]:
                lines.append(f"      - {CATEGORIES[category]}: {ext.key}/{category}.md\n")
    (ROOT / "mkdocs.yml").write_text("".join(lines))


def generate() -> dict[str, list[Intrinsic]]:
    docs = ROOT / "docs"
    docs.mkdir(exist_ok=True)
    all_entries = {ext.key: parse_header(ext) for ext in EXTENSIONS}

    for ext in EXTENSIONS:
        ext_dir = docs / ext.key
        ext_dir.mkdir(exist_ok=True)
        for old_page in ext_dir.glob("*.md"):
            old_page.unlink()
        grouped: dict[str, list[Intrinsic]] = defaultdict(list)
        for entry in all_entries[ext.key]:
            grouped[entry.category].append(entry)
        for category, entries in grouped.items():
            write_page(ext_dir / f"{category}.md", CATEGORIES[category], entries)

    write_index(all_entries)
    write_basics(all_entries)
    write_latency_throughput(all_entries)
    write_mkdocs(all_entries)
    return all_entries


if __name__ == "__main__":
    generated = generate()
    total = sum(len(items) for items in generated.values())
    for ext in EXTENSIONS:
        print(f"{ext.name}: {len(generated[ext.key])}")
    print(f"Total: {total}")
