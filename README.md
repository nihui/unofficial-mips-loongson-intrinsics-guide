# Unofficial MIPS Loongson Intrinsics Guide

This is an unofficial guide for the MIPS-era Loongson SIMD intrinsic headers:

- `loongson-sxintrin.h`
- `loongson-asxintrin.h`
- `msa.h`
- `msa2.h`
- `msa-cryptointrin.h`
- `loongson-mmiintrin.h`
- `loongson-csr.h`

The project mirrors the layout and writing style of the Unofficial LoongArch Intrinsics Guide: intrinsics are grouped by operation category, each entry records a C/C++ synopsis, include file, CPU feature macro, instruction mnemonic or builtin mapping, an inferred lane-level operation, and the original wrapper body from the source header.

The operation text is generated from the Loongson/MIPS mnemonic, GCC MSA builtin naming, local toolchain source, and related LSX/LASX/SIMD conventions. It is intended as practical guidance for developers, not as a vendor-verified ISA specification.

## Project Information

- Project repository: <https://github.com/nihui/unofficial-mips-loongson-intrinsics-guide>
- Inspired by and modeled after: <https://github.com/jiegec/unofficial-loongarch-intrinsics-guide>
- This guide was generated with assistance from OpenAI GPT-5 Codex.

## Build

Generate the Markdown pages from the headers:

```sh
python3 tools/generate_docs.py
```

Build the static HTML site:

```sh
python3 -m mkdocs build
```

Check that all public intrinsics parsed from the headers are present in `docs/`:

```sh
python3 check.py
```

Serve locally:

```sh
python3 -m mkdocs serve
```

The source headers under `include/` retain their original GCC copyright notices.
