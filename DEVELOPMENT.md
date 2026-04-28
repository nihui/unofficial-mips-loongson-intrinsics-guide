# Notes for Developer

- `main.py`: parses the GCC-style intrinsic headers and renders Markdown pages.
- `tools/generate_docs.py`: command-line entry point for regenerating `docs/`.
- `check.py`: verifies that every parsed public intrinsic has a generated documentation entry.
- `include/`: source headers used as documentation inputs.
- `data/msa_builtin_prototypes.tsv`: bundled MSA builtin prototypes used when GCC `extend.texi` is not available.
- `mkdocs.yml`: generated navigation for the static site.
- `docs/`: generated documentation; edit `main.py` or source headers, then regenerate.

The generator documents public wrappers only:

- `__lsx_*` from `loongson-sxintrin.h`
- `__lasx_*` from `loongson-asxintrin.h`
- `__msa_*` from `msa.h`
- `__msa2_*` from `msa2.h`
- `__crypto_*` from `msa-cryptointrin.h`
- Loongson MMI wrappers from `loongson-mmiintrin.h`
- `__lcsr_*` aliases from `loongson-csr.h`

Helper functions named `__builtin_*` are used to recover inline assembly mnemonics when available, but they are not emitted as public intrinsic entries.

Generated `Operation` blocks are inferred pseudocode. Keep semantic rules in `main.py` broad enough to cover a full instruction family, and preserve the original header implementation in `Header Mapping` for auditability.
