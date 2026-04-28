from __future__ import annotations

import dataclasses
import pathlib
import re
import textwrap
from collections import defaultdict


ROOT = pathlib.Path(__file__).resolve().parent
TOOLCHAIN_ROOT = ROOT.parent / "src" / "mips-loongson-gcc7-linux-gnu-2021-02-08-src"
GCC_EXTEND_TEXI = TOOLCHAIN_ROOT / "gcc-7.3" / "gcc" / "doc" / "extend.texi"
MSA_PROTOTYPES_TSV = ROOT / "data" / "msa_builtin_prototypes.tsv"


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


WIDTH_NAMES = {
    "b": "8-bit byte",
    "h": "16-bit halfword",
    "w": "32-bit word",
    "d": "64-bit doubleword",
    "q": "128-bit quadword",
}

WIDTH_BITS = {
    "b": 8,
    "h": 16,
    "w": 32,
    "d": 64,
    "q": 128,
}

LANE_NAMES = {
    "b": "byte",
    "h": "half",
    "w": "word",
    "d": "dword",
    "q": "qword",
}

WIDER_WIDTH = {
    "b": "h",
    "h": "w",
    "w": "d",
    "d": "q",
}

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
                clean_type(match.group("ret")),
                named_args_from_builtin_prototype(match.group("args")),
            )
    if result:
        return result
    if MSA_PROTOTYPES_TSV.exists():
        for line in MSA_PROTOTYPES_TSV.read_text().splitlines():
            if not line.strip() or line.startswith("#"):
                continue
            name, return_type, args = line.split("\t", 2)
            result[name] = (return_type, args)
    return result


MSA_BUILTIN_PROTOTYPES = parse_msa_builtin_prototypes()


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
    match = re.search(r"^\s*\(\(?\s*([A-Za-z_][A-Za-z0-9_]*)\s*\)", body)
    if match:
        return match.group(1)
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


def classify(name: str, ext: Extension) -> str:
    core = core_name(name, ext)
    lowered = core.lower()

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
    if any(token in lowered for token in ["sll", "sra", "srl", "ror", "rot", "bsll", "bsrl", "srain", "sran", "srarn", "srln"]):
        return "shift"
    if any(token in lowered for token in ["and", "or", "xor", "nor", "bsel", "bmz", "bmnz", "vandn", "pandn"]):
        return "logical"
    if any(token in lowered for token in ["bclr", "bset", "bneg", "bins", "pcnt", "clo", "clz", "nlzc", "nloc", "nxbits", "wxbits", "sign", "pmovmsk"]):
        return "bitwise_operations"
    if any(token in lowered for token in ["ceq", "clt", "cle", "cmpeq", "cmpgt", "max", "min"]):
        return "integer_comparison"
    if any(token in lowered for token in ["perm", "shuf", "shf", "pack", "pck", "punpck", "ilv", "splat", "fill", "copy", "insert", "pins", "insve", "extr", "broadcast", "sel", "sld", "ldi", "move", "w2x", "n2x", "w4x", "w8x", "xw"]):
        return "permutation"
    if any(token in lowered for token in ["add", "sub", "mul", "muh", "div", "mod", "ave", "avg", "hadd", "hsub", "dot", "dp", "sad", "acc", "sat", "madd", "msub", "abs", "neg"]):
        return "integer_computation"
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
    if op.startswith("x") and len(op) > 1:
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


def signedness(entry: Intrinsic) -> str:
    tokens = mnemonic_tokens(entry)
    if "us" in tokens:
        return "unsigned/signed mixed"
    if "u" in tokens:
        return "unsigned"
    if "s" in tokens:
        return "signed"
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
    vector_names, scalar_names = arg_name_map(entry)
    aliases = []
    if vector_names and vector_names[0] == "ret":
        semantic_names = ["acc", "a", "b", "c"]
    else:
        semantic_names = ["a", "b", "c", "d"]
    for semantic, original in zip(semantic_names, vector_names):
        if semantic != original:
            aliases.append(f"{semantic} = {original};")
    if "acc" not in [x.split(" = ")[0] for x in aliases] and "acc" in mnemonic_tokens(entry):
        aliases.insert(0, "acc = ret;")
    scalar_items = [(typ, name) for typ, name in parsed_args(entry) if name in scalar_names]
    for typ, scalar in scalar_items:
        if "*" in typ:
            continue
        semantic = "imm" if scalar.startswith("_") or scalar.startswith("imm") or scalar in {"m", "n"} else scalar
        if semantic != scalar:
            aliases.append(f"{semantic} = {scalar};")
    return aliases


def lane_view(entry: Intrinsic) -> str:
    suffix = lane_suffix(entry)
    if suffix is None:
        return "vector lanes"
    width = WIDTH_BITS[suffix]
    count = lane_count(entry, width)
    return f"{count} x {width}-bit {LANE_NAMES[suffix]} lanes"


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
            return f"Read, write, or query a Loongson control/status resource using `{entry.instruction}`."
        return f"Read or write an MSA control register using the immediate register selector encoded by `{entry.instruction}`."
    if entry.category == "memory":
        return f"Load or store selected vector element data using the memory addressing convention encoded by `{entry.instruction}`."
    if entry.category == "branch":
        condition = "non-zero" if "bnz" in op else "zero"
        return f"Test whether the requested vector lanes are {condition} and return the branch predicate."
    if any(x in op for x in ["faddsub", "fsubadd"]):
        return f"Alternately add and subtract floating-point {width_text}."
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
    if any(x in op for x in ["and", "or", "xor", "nor", "bsel", "bmz", "bmnz"]):
        return f"Perform bitwise logical selection or logical operation across the full vector."
    if any(x in op for x in ["bclr", "bset", "bneg", "bins", "pcnt", "clo", "clz", "nlzc", "nloc", "nxbits", "wxbits", "getsign", "sign"]):
        return f"Manipulate or summarize bits in each {width_text} element."
    if "pmovmsk" in op:
        return f"Extract the sign bit from each element of {width_text} and pack those bits into a low-order mask."
    if any(x in op for x in ["sll", "srl", "sra", "ror", "bsll", "bsrl", "srain", "sran", "srarn", "srln"]):
        return f"Shift or rotate {width_text}; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior."
    if any(x in op for x in ["ceq", "clt", "cle", "cmpeq", "cmpgt"]):
        return f"Compare {mode} {width_text} and produce all-ones elements for true lanes, zero for false lanes."
    if op == "sld":
        return f"Slide elements from the concatenation of two source vectors into {width_text} using an immediate offset."
    if any(x in op for x in ["perm", "shuf", "shf", "splat", "broadcast", "fill", "copy", "insert", "pins", "insve", "extr", "pack", "pck", "punpck", "ilv", "w2x", "n2x", "w4x", "w8x", "sel", "sldi", "ldi", "move"]):
        return f"Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands."
    if "dotp" in op or "dpadd" in op or "dpsub" in op:
        return f"Compute adjacent-pair dot products using {mode} inputs and produce widened accumulated results."
    if any(x in op for x in ["sad"]):
        return f"Compute adjacent-pair sum of absolute differences using {mode} inputs and widened results."
    if "acc4b" in op or "acc8b" in op:
        group = 4 if "acc4b" in op else 8
        return f"Accumulate groups of {group} byte elements into wider {mode} destination lanes."
    if any(x in op for x in ["hadd", "hsub"]):
        return f"Compute horizontal adjacent add/subtract operations over {mode} {width_text}."
    if any(x in op for x in ["vextb", "vexth", "vextw"]):
        return f"Sign-extend or zero-extend smaller integer elements into {width_text} destination lanes."
    if any(x in op for x in ["clrstr", "clrtail", "mepatmsk", "frsti", "frstv", "frstm", "vseti"]):
        return f"Apply the Loongson vector string/mask helper encoded by `{entry.instruction}` to the full vector."
    if "ave" in op or "avg" in op:
        return f"Compute lane-wise rounded average values for {width_text}."
    if any(x in op for x in ["add", "sub", "mul", "muh", "div", "mod", "max", "min", "abs", "neg", "sat"]):
        extra = []
        if any(token in tokens for token in ["lo", "hi", "even", "odd", "el0"]):
            extra.append("selected source lanes")
        if any(token in tokens for token in ["w2x", "w4x", "w8x", "wx"]):
            extra.append("widened output lanes")
        if "acc" in tokens or "xacc" in tokens:
            extra.append("accumulation into the first operand")
        suffix = f" over {' and '.join(extra)}" if extra else ""
        return f"Compute lane-wise {mode} integer arithmetic on {width_text}{suffix}."
    return f"Compute the `{entry.instruction}` operation over {width_text}; exact behavior is inferred from the mnemonic."


def semantic_description(entry: Intrinsic) -> str:
    return (
        f"{op_sentence(entry)} This description is inferred from the Loongson/MIPS mnemonic, "
        "the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. "
        "For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, "
        "prefer hardware tests or the vendor ISA manual."
    )


def semantic_header(entry: Intrinsic) -> list[str]:
    suffix = lane_suffix(entry)
    width = lane_bits(entry)
    lines = [
        f"// Inferred semantics for {entry.instruction}.",
        "// Operand order follows the intrinsic arguments in the header.",
    ]
    if width is not None:
        lines.append(f"// Treat vector operands as {lane_count(entry, width)} lanes of {width}-bit elements.")
    for line in binding_lines(entry):
        lines.append(line)
    return lines


def loop_template(entry: Intrinsic, expr: str, suffix: str | None = None) -> list[str]:
    width = lane_bits(entry)
    suffix = suffix or lane_suffix(entry) or "lane"
    n = lane_count(entry, width) if width is not None else "LANES"
    lane = LANE_NAMES.get(suffix, "lane")
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


def cast_expr(name: str, entry: Intrinsic, source_index: str = "i") -> str:
    suffix = lane_suffix(entry) or "lane"
    lane = LANE_NAMES.get(suffix, "lane")
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
    args = ", ".join(vector_names) if vector_names else "state"
    return [f"dst = {op}({args});"]


def operation_for_memory(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    args = parsed_args(entry)
    names = [name for _, name in args]
    mem_name = next((name for typ, name in args if "*" in typ or name == "mem"), "base_pointer")
    scalar_args = [(typ, name) for typ, name in args if "__m" not in typ and not re.match(r"v\d+[iuf]\d+", typ)]
    offset_name = next((name for _, name in scalar_args if name.startswith("imm") or name in {"offset", "byte_offset"}), None)
    if offset_name is None and mem_name != "base_pointer":
        before_mem = [name for typ, name in scalar_args if name != mem_name and "*" not in typ]
        offset_name = before_mem[-1] if before_mem else "byte_offset"
    if offset_name is None:
        offset_name = "byte_offset"
    if op in {"ld"} or op.startswith("vbl") or op.startswith("xvbl") or op.startswith("vld") or op.startswith("xvld"):
        return [
            f"addr = {mem_name} + {offset_name};",
            "dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);",
        ]
    if op in {"st"} or op.startswith("vst") or op.startswith("xvst") or op in {"vsb", "vsh", "vsw", "vsd", "xvsb", "xvsh", "xvsw", "xvsd"}:
        value = names[0] if names else "a"
        return [
            f"addr = {mem_name} + {offset_name};",
            f"store_selected_element_or_vector(addr, {value}, element_size_from_mnemonic);",
        ]
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
        return [
            "result.dvalue = read_64bit_time_counter();",
            "result.dtimeid = read_time_counter_id();",
            "return result;",
        ]
    if op in {"rdtimel", "rdtimeh"}:
        half = "low" if op == "rdtimel" else "high"
        return [
            f"result.value = read_{half}_32_bits_of_time_counter();",
            "result.timeid = read_time_counter_id();",
            "return result;",
        ]
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
    lane = LANE_NAMES.get(suffix, "lane")
    n = entry.extension.vector_bits // width
    if op == "move" or op.endswith("move"):
        return ["dst = a;"]
    if "ldi" in op and "sldi" not in op:
        return [
            "value = sign_extend_or_zero_extend(imm, element_size_from_mnemonic);",
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = value;",
        ]
    if op == "sld" or "sldi" in op:
        shift = "imm"
        return [
            "combined = concatenate(b, a);",
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = combined.{lane}[i + {shift}];",
        ]
    if "shf" in op:
        return [
            f"for i in 0..{n - 1}:",
            f"  control = shuffle_control(imm_or_vector, i);",
            f"  dst.{lane}[i] = select_lane_from_sources(a, b, control);",
        ]
    if "vextb" in op or "vexth" in op or "vextw" in op:
        source = "byte" if "vextb" in op else "half" if "vexth" in op else "word"
        extend = "zero_extend" if "u" in tokens else "sign_extend"
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = {extend}(a.{source}[i], {width});",
        ]
    if "clrtail" in op:
        return [
            "dst = a;",
            f"for i in first_tail_lane..{n - 1}:",
            f"  dst.{lane}[i] = 0;",
        ]
    if "clrstr" in op:
        source = "imm" if op.endswith("i") else "scalar_register" if op.endswith("r") else "b"
        return [
            "dst = a;",
            f"limit = string_clear_limit_from({source});",
            "for each byte lane i at or after limit:",
            "  dst.byte[i] = 0;",
        ]
    if "mepatmsk" in op:
        return [
            "pattern = build_repeated_byte_pattern(imm0, imm1);",
            "for each byte lane i:",
            "  dst.byte[i] = (pattern matches lane i) ? 0xff : 0x00;",
        ]
    if "vseti" in op:
        return [
            "dst = zero_vector();",
            "dst.dword[index_from_imm0] = zero_extend(imm1, 64);",
        ]
    if "frsti" in op or "frstv" in op or "frstm" in op:
        control = "imm" if "frstii" in op else "control vector" if "frstiv" in op else "mask"
        return [
            "for each search group g:",
            f"  idx = first_lane_matching_rule(a, b, {control}, g);",
            "  dst.group[g] = encode_first_match_index_or_zero(idx);",
        ]
    return None


def operation_for_branch(entry: Intrinsic) -> list[str]:
    op = normalized_op(entry)
    want_nonzero = "bnz" in op
    predicate = "!=" if want_nonzero else "=="
    return [
        "predicate = false;",
        "for each tested lane i:",
        f"  predicate |= (a.lane[i] {predicate} 0);",
        "return predicate;",
    ]


def operation_for_float(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    width = lane_suffix(entry)
    if width not in FLOAT_WIDTHS:
        width = "w"
    lane = "fp32" if width == "w" else "fp64"
    lanes = entry.extension.vector_bits // (32 if width == "w" else 64)
    if any(x in op for x in ["ceq", "clt", "cle", "cne", "caf", "saf", "cun", "cor", "sor", "cueq", "cult", "cule", "cune", "seq", "slt", "sle", "sne", "sueq", "sult", "sule", "sun", "sune"]):
        condition = op.split("c")[-1] if "c" in op else op
        return [
            f"for i in 0..{lanes - 1}:",
            f"  dst.mask[i] = fp_compare_{condition}(a.{lane}[i], b.{lane}[i]) ? all_ones : 0;",
        ]
    if "fexdo" in op:
        return [
            "combined = interleave_or_pair_fp_sources(a, b);",
            "for each destination lane i:",
            "  dst.lane[i] = extract_odd_or_double_format_element(combined, i);",
        ]
    if "fexupl" in op or "fexupr" in op:
        half = "lower" if "fexupl" in op else "upper"
        return [
            f"for each {half} source lane i:",
            "  dst.fp_lane[i] = widen_integer_or_float_to_next_fp_width(a, i);",
        ]
    if "ffql" in op or "ffqr" in op:
        half = "left/lower" if "ffql" in op else "right/upper"
        return [
            f"for each {half} fixed-point source lane i:",
            "  dst.fp_lane[i] = fixed_point_q_to_float(a, i);",
        ]
    if "ftq" in op:
        return [
            "for each paired floating-point source lane i:",
            "  dst.fixed_lane[i] = float_to_fixed_point_q(a, b, i);",
        ]
    if "fmaddsub" in op:
        return [
            f"for i in 0..{lanes - 1}:",
            f"  tmp = fused_multiply_add(a.{lane}[i], b.{lane}[i], c.{lane}[i]);",
            "  dst.lane[i] = (i % 2 == 0) ? tmp : fused_multiply_sub(a.lane[i], b.lane[i], c.lane[i]);",
        ]
    if "fmsubadd" in op or "fsubadd" in op:
        return [
            f"for i in 0..{lanes - 1}:",
            "  dst.lane[i] = (i % 2 == 0) ? (a.lane[i] - b.lane[i]) : (a.lane[i] + b.lane[i]);",
        ]
    expr_by_key = [
        ("fnmadd", f"-fma(a.{lane}[i], b.{lane}[i], c.{lane}[i])"),
        ("fnmsub", f"-fms(a.{lane}[i], b.{lane}[i], c.{lane}[i])"),
        ("fmadd", f"fma(a.{lane}[i], b.{lane}[i], c.{lane}[i])"),
        ("fmsub", f"fms(a.{lane}[i], b.{lane}[i], c.{lane}[i])"),
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
        ("fexp2", f"exp2(a.{lane}[i])"),
        ("ffint", f"float_convert(a.integer_lane[i])"),
        ("ftint", f"integer_convert_with_current_rounding(a.{lane}[i])"),
        ("ftrunc", f"integer_truncate_toward_zero(a.{lane}[i])"),
        ("fceil", f"integer_ceil(a.{lane}[i])"),
        ("ffloor", f"integer_floor(a.{lane}[i])"),
        ("fround", f"integer_round_nearest(a.{lane}[i])"),
        ("frint", f"round_to_integral_float(a.{lane}[i], rounding_mode_from_suffix)"),
        ("fclass", f"classify_fp(a.{lane}[i])"),
    ]
    for key, expr in expr_by_key:
        if key in op:
            return [
                f"for i in 0..{lanes - 1}:",
                f"  dst.{lane}[i] = {expr};",
            ]
    return None


def operation_for_logical(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    if "andn" in op:
        expr = "b.bits & ~a.bits"
    elif "and" in op:
        expr = "a.bits & (imm_or_b)"
    elif "nor" in op:
        expr = "~(a.bits | imm_or_b)"
    elif "orn" in op:
        expr = "a.bits | ~b.bits"
    elif "xor" in op:
        expr = "a.bits ^ (imm_or_b)"
    elif "or" in op:
        expr = "a.bits | (imm_or_b)"
    elif "bsel" in op:
        expr = "(a.bits & b.bits) | (~a.bits & c.bits)"
    elif "bmnz" in op:
        expr = "select_bits(mask=a, true_value=b, false_value=0)"
    elif "bmz" in op:
        expr = "select_bits(mask=a, true_value=0, false_value=b)"
    else:
        return None
    return ["dst.bits = " + expr + ";"]


def operation_for_bitwise(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    width = lane_bits(entry) or 8
    suffix = lane_suffix(entry) or "b"
    lane = LANE_NAMES.get(suffix, "lane")
    n = entry.extension.vector_bits // width
    idx = "imm" if op.endswith("i") or "i" in op[-2:] else f"b.{lane}[i] & {width - 1}"
    if "pmovmsk" in op:
        return [
            "mask = 0;",
            f"for i in 0..{n - 1}:",
            f"  mask |= sign_bit(a.{lane}[i]) << i;",
            "return mask;",
        ]
    if "binsl" in op or "binsr" in op:
        side = "most-significant" if "binsl" in op else "least-significant"
        count = "imm + 1" if op.endswith("i") else f"(b.{lane}[i] & {width - 1}) + 1"
        return [
            f"for i in 0..{n - 1}:",
            f"  mask = {side}_bits_mask({width}, {count});",
            f"  dst.{lane}[i] = (a.{lane}[i] & ~mask) | (b.{lane}[i] & mask);",
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
        expr = "predicate_mask_from_neighbor_bits(a.byte[i])"
    elif "wxbits" in op:
        expr = "expanded_mask_bits_from_bytes(a.byte[i])"
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
    lane = LANE_NAMES.get(suffix, "lane")
    n = entry.extension.vector_bits // width
    vector_names, scalar_names = arg_name_map(entry)
    scalar_amount = next((name for name in scalar_names if name not in {"mem"}), None)
    if op.endswith("i") or "ri" in op or "li" in op:
        amount = "imm"
    elif scalar_amount and len(vector_names) < 2:
        amount = scalar_amount
    else:
        amount = f"b.{lane}[i] & {width - 1}"
    base = f"a.{lane}[i]"
    if "bsll" in op:
        return ["dst.bytes = byte_shift_left(a.bytes, imm);"]
    if "bsrl" in op:
        return ["dst.bytes = byte_shift_right(a.bytes, imm);"]
    if "ror" in op:
        expr = f"rotate_right({base}, {amount}, {width})"
    elif "sll" in op:
        expr = f"{base} << {amount}"
    elif "sra" in op or "sran" in op or "srarn" in op:
        add = f" + (1 << ({amount} - 1))" if "r" in op and "sra" in op else ""
        expr = f"arithmetic_shift_right({base}{add}, {amount})"
    elif "srl" in op or "srln" in op:
        add = f" + (1 << ({amount} - 1))" if "srlr" in op else ""
        expr = f"logical_shift_right({base}{add}, {amount})"
    else:
        return None
    narrow = "n" in op or "in" in op
    sat = "s" in op and ("ss" in op or "sat" in op or "srains" in op or "srlins" in op)
    out = f"saturate_or_truncate({expr})" if narrow or sat else expr
    return [
        f"for i in 0..{n - 1}:",
        f"  dst.{lane}[i] = {out};",
    ]


def operation_for_permutation(entry: Intrinsic) -> list[str] | None:
    op = normalized_op(entry)
    tokens = mnemonic_tokens(entry)
    vector_names, scalar_names = arg_name_map(entry)
    width = lane_bits(entry) or 8
    suffix = lane_suffix(entry) or "b"
    lane = LANE_NAMES.get(suffix, "lane")
    n = entry.extension.vector_bits // width
    if op.startswith("pack"):
        source = "word" if op.endswith("wh") else "half" if op.endswith("hb") or op.endswith("shb") else "lane"
        dest = "half" if op.endswith("wh") else "byte"
        clamp = "unsigned_saturate" if "us" in op else "signed_saturate" if "ss" in op else "truncate"
        return [
            "sources = concatenate_lanes(a, b);",
            f"for each destination {dest} lane i:",
            f"  dst.{dest}[i] = {clamp}(sources.{source}[i], bit_width({dest}));",
        ]
    if op.startswith("punpck"):
        half = "upper" if "punpckh" in op else "lower"
        return [
            f"for each selected {half} source lane pair i:",
            f"  dst.{lane}[2*i] = b.{lane}[i];",
            f"  dst.{lane}[2*i + 1] = a.{lane}[i];",
        ]
    if op.startswith("pextr"):
        selector = scalar_names[0] if scalar_names else "field"
        return [f"return extract_halfword_lane(a, {selector});"]
    if op.startswith("pinsr"):
        index_match = re.search(r"pinsrh[_\.]([0-3])", core_name(entry.name, entry.extension).replace("_", "."))
        index = index_match.group(1) if index_match else "field"
        return [
            "dst = a;",
            f"dst.half[{index}] = b.half[0];",
        ]
    if "pshuf" in op:
        selector = scalar_names[0] if scalar_names else "order"
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = a.{lane}[shuffle_selector({selector}, i)];",
        ]
    if op_has(entry, "w2x", "w4x", "w8x"):
        factor = 2 if "w2x" in op else 4 if "w4x" in op else 8
        select = selected_index_expression(tokens)
        return [
            f"for i in 0..{max(0, n // factor - 1)}:",
            f"  src_index = {select};",
            f"  dst.wide_lane[i] = sign_or_zero_extend(a.{lane}[src_index], {factor} * {width});",
        ]
    if op_has(entry, "n2x"):
        rounding = "rounding_shift" if "rnd" in tokens else "shift"
        clamp = "signed_saturate" if "sc" in tokens else "unsigned_saturate" if "uc" in tokens else "truncate"
        source = "signed" if "sx" in tokens else "unsigned" if "ux" in tokens else "element"
        return [
            f"for i in 0..{n - 1}:",
            f"  shifted = {rounding}({source}(a.wide_lane[i]), imm);",
            f"  dst.{lane}[i] = {clamp}(shifted, {width});",
        ]
    if "fill" in op and not vector_names:
        value = scalar_names[0] if scalar_names else "value"
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = truncate_or_extend({value}, {width});",
        ]
    if any(x in op for x in ["splat", "broadcast", "fill"]):
        return [
            f"selected = a.{lane}[imm_or_zero];",
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = selected;",
        ]
    if any(x in op for x in ["copy"]):
        return [f"return sign_or_zero_extend(a.{lane}[imm]);"]
    if any(x in op for x in ["insert", "insve", "extrins"]):
        source = f"b.{lane}[source_index_from_imm]" if len(vector_names) > 1 else "value"
        return [
            "dst = a;",
            f"dst.{lane}[destination_index_from_imm] = {source};",
        ]
    if any(x in op for x in ["extr"]):
        return [f"dst = concatenate_extract(a, b, byte_or_lane_offset_from_imm);"]
    if any(x in op for x in ["pckev", "ilvev"]):
        return [f"dst = interleave_or_pack(even {lane} lanes from a and b);"]
    if any(x in op for x in ["pckod", "ilvod"]):
        return [f"dst = interleave_or_pack(odd {lane} lanes from a and b);"]
    if "ilvl" in op:
        return [f"dst = interleave_lower_{lane}_lanes(a, b);"]
    if "ilvr" in op:
        return [f"dst = interleave_upper_{lane}_lanes(a, b);"]
    if any(x in op for x in ["shuf", "perm", "sel", "ldi"]):
        return [
            f"for i in 0..{n - 1}:",
            f"  dst.{lane}[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);",
        ]
    return None


def arithmetic_expr(entry: Intrinsic) -> str | None:
    op = normalized_op(entry)
    tokens = mnemonic_tokens(entry)
    width = lane_bits(entry) or 8
    suffix = lane_suffix(entry) or "b"
    lane = LANE_NAMES.get(suffix, "lane")
    amount = "imm" if op.endswith("i") else f"b.{lane}[i]"
    a = f"a.{lane}[i]"
    b = f"b.{lane}[i]"
    if "subssu" in op:
        return f"unsigned_saturate(signed({a}) - unsigned({b}), {width})"
    if "subsus" in op:
        return f"signed_saturate(unsigned({a}) - signed({b}), {width})"
    if "subsuu" in op:
        return f"unsigned_saturate(unsigned({a}) - unsigned({b}), {width})"
    if "add_a" in entry.instruction or op.endswith("adda") or "add.a" in entry.instruction:
        return f"abs({a}) + abs({b})"
    if "asub" in op:
        return f"abs({a} - {b})"
    if "pasub" in op:
        return f"abs(unsigned({a}) - unsigned({b}))"
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
        return f"high_half({a} * {b})"
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
    lane = LANE_NAMES.get(suffix, "lane")
    n = entry.extension.vector_bits // width
    if op == "biadd":
        groups = max(1, entry.extension.vector_bits // 16)
        return [
            f"for i in 0..{groups - 1}:",
            "  dst.half[i] = unsigned(a.byte[2*i]) + unsigned(a.byte[2*i + 1]);",
        ]
    if op == "psadbh":
        groups = max(1, entry.extension.vector_bits // 16)
        return [
            f"for i in 0..{groups - 1}:",
            "  d0 = abs(unsigned(a.byte[2*i]) - unsigned(b.byte[2*i]));",
            "  d1 = abs(unsigned(a.byte[2*i + 1]) - unsigned(b.byte[2*i + 1]));",
            "  dst.half[i] = d0 + d1;",
        ]
    if op == "pmaddhw":
        groups = max(1, entry.extension.vector_bits // 32)
        return [
            f"for i in 0..{groups - 1}:",
            "  p0 = signed(a.half[2*i]) * signed(b.half[2*i]);",
            "  p1 = signed(a.half[2*i + 1]) * signed(b.half[2*i + 1]);",
            "  dst.word[i] = p0 + p1;",
        ]
    if any(x in op for x in ["maddv", "maddr", "madd_q", "msubv", "msubr", "msub_q"]):
        operator = "-" if "msub" in op else "+"
        rounding = "round_fixed_point" if "maddr" in op or "msubr" in op else "fixed_point_adjust" if "_q" in entry.instruction else "identity"
        return [
            f"for i in 0..{n - 1}:",
            f"  product = {rounding}(b.{lane}[i] * c.{lane}[i]);",
            f"  dst.{lane}[i] = a.{lane}[i] {operator} product;",
        ]
    if "acc4b" in op or "acc8b" in op:
        group = 4 if "acc4b" in op else 8
        groups = max(1, entry.extension.vector_bits // (8 * group))
        return [
            f"for i in 0..{groups - 1}:",
            "  sum = 0;",
            f"  for j in 0..{group - 1}:",
            "    sum += unsigned(a.byte[i * group + j]);",
            "  dst.wide_lane[i] = sum;",
        ]
    if "dotp" in op or "dpadd" in op or "dpsub" in op:
        acc_prefix = "acc + " if "dpadd" in op else "acc - " if "dpsub" in op else ""
        return [
            f"for i in 0..{max(0, n // 2 - 1)}:",
            f"  product0 = widen(a.{lane}[2*i]) * widen(b.{lane}[2*i]);",
            f"  product1 = widen(a.{lane}[2*i + 1]) * widen(b.{lane}[2*i + 1]);",
            f"  dst.wide_lane[i] = {acc_prefix}(product0 + product1);",
        ]
    if "sad" in op:
        acc_prefix = "acc.wide_lane[i] + " if "acc" in tokens else ""
        return [
            f"for i in 0..{max(0, n // 2 - 1)}:",
            f"  d0 = abs(widen(a.{lane}[2*i]) - widen(b.{lane}[2*i]));",
            f"  d1 = abs(widen(a.{lane}[2*i + 1]) - widen(b.{lane}[2*i + 1]));",
            f"  dst.wide_lane[i] = {acc_prefix}d0 + d1;",
        ]
    if any(token in tokens for token in ["w2x", "w4x", "w8x", "wx"]):
        op_char = "*" if "mult" in op or "mul" in op else "+" if "add" in op else "-"
        select = selected_index_expression(tokens)
        acc_prefix = "acc.wide_lane[i] + " if "acc" in tokens or "xacc" in tokens else ""
        return [
            "source_lanes = number_of_input_lanes;",
            "for each produced wide lane i:",
            f"  j = {select};",
            f"  wide_result = widen(a.{lane}[j]) {op_char} widen(b.{lane}[j]);",
            f"  dst.wide_lane[i] = {acc_prefix}wide_result;",
        ]
    if "hadd" in op or "hsub" in op:
        operator = "+" if "hadd" in op else "-"
        return [
            f"for i in 0..{max(0, n // 2 - 1)}:",
            f"  dst.wide_lane[i] = widen(a.{lane}[2*i]) {operator} widen(a.{lane}[2*i + 1]);",
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
    lane = LANE_NAMES.get(suffix, "lane")
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
        body = [
            "for each destination lane i:",
            "  dst.lane[i] = operation_named_by_mnemonic(a, b, c, imm, i);",
        ]
    return "\n".join(lines + body)


def render_header_mapping(entry: Intrinsic) -> str:
    body = entry.body.strip()
    if entry.kind == "alias":
        return f"#define {entry.name} {body}"
    if entry.kind == "macro":
        return f"#define {entry.name}({', '.join(arg.split()[-1] for arg in split_args(entry.args))}) {body}"
    return body


def render_intrinsic(entry: Intrinsic) -> str:
    builtin = entry.builtin or "N/A"
    source = f"{entry.extension.header}:{entry.source_line}"
    return f"""## {entry.signature}

### Synopsis

```c
{entry.signature}
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

### Header Mapping

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
        "The generated operation blocks contain inferred lane-level pseudocode. A separate header-mapping block ",
        "keeps the original wrapper body from the header. When the header implements a builtin with inline assembly, ",
        "the generator records the real instruction mnemonic used there. For compiler builtins without inline ",
        "assembly in the header, the mnemonic is inferred from the builtin name.\n\n",
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
            "union loongson_128_register {\n",
            "  uint8_t byte[16];\n",
            "  uint16_t half[8];\n",
            "  uint32_t word[4];\n",
            "  uint64_t dword[2];\n",
            "  float fp32[4];\n",
            "  double fp64[2];\n",
            "};\n\n",
            "union loongson_256_register {\n",
            "  uint8_t byte[32];\n",
            "  uint16_t half[16];\n",
            "  uint32_t word[8];\n",
            "  uint64_t dword[4];\n",
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
        "paired byte/halfword/word values, and Loongson CSR exposes scalar control/status register helpers.\n\n",
        "The public intrinsics in these headers are thin wrappers around compiler builtins or inline assembly helpers. ",
        "The documentation therefore records the public intrinsic, target builtin, inferred instruction mnemonic, ",
        "and the original header wrapper. Immediate arguments are documented as `int` when the macro does not provide ",
        "a stronger type in comments.\n\n",
        "Operation blocks are inferred pseudocode, not a vendor-verified ISA transcription. They are derived from ",
        "the Loongson/MIPS mnemonic family, the GCC MSA builtin naming scheme, LoongArch LSX/LASX evolution, and ",
        "common SIMD conventions used by SSE/AVX-style instructions. Hardware-specific exception behavior, NaN ",
        "ordering, and exact predicate side effects should still be checked against silicon or vendor manuals.\n\n",
        "## Naming Notes\n\n",
        "- Suffixes `b`, `h`, `w`, `d`, and `q` denote byte, halfword, word, doubleword, and quadword lanes.\n",
        "- Suffixes `s`, `u`, and `us` usually denote signed, unsigned, and unsigned/signed mixed interpretation.\n",
        "- Tokens such as `lo`, `hi`, `even`, `odd`, and `el0` describe lane selection.\n",
        "- Tokens such as `w2x`, `n2x`, `w4x`, `w8x`, and `wx` describe widening or narrowing operations.\n",
        "- Tokens such as `rnd`, `sat`, and immediate forms ending in `i` indicate rounding, saturation, or immediate operands.\n\n",
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
    write_mkdocs(all_entries)
    return all_entries


if __name__ == "__main__":
    generated = generate()
    total = sum(len(items) for items in generated.values())
    for ext in EXTENSIONS:
        print(f"{ext.name}: {len(generated[ext.key])}")
    print(f"Total: {total}")
