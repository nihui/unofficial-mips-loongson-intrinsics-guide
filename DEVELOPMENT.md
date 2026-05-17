# Notes for Developer

- `main.py`: parses the GCC-style intrinsic headers and renders Markdown pages.
- `tools/generate_docs.py`: command-line entry point for regenerating `docs/`.
- `check.py`: verifies that every parsed public intrinsic has a generated documentation entry.
- `tools/measure_latency_throughput.py`: generates inline-assembly latency/throughput benchmark sources.
- `tools/collect_latency_throughput.py`: folds raw benchmark CSV output into `data/latency_throughput_<cpu>.csv`.
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

Generated `Operation` blocks are hardware-checked pseudocode. Keep semantic rules in `main.py` broad enough to cover a full instruction family, and preserve the original header implementation in `Header Mapping` for auditability.

Latency/throughput data is optional generated input. The benchmark generator first asks the bundled Loongson GCC 7.3 cross compiler for the accepted assembler spelling of each intrinsic, then emits dependency-chain latency tests and independent-stream throughput tests. Run the generated binaries on target hardware and collect the raw CSV output, for example:

```sh
python3 tools/measure_latency_throughput.py --extension sx --output-dir /tmp/mips-lt
./mips-loongson-gcc7.3-linux-gnu/2019.06-29/bin/mips-linux-gnu-gcc \
  -static -O2 -mabi=64 -mips64r2 -mloongson-sx -Iinclude \
  /tmp/mips-lt/measure_sx.c -o /tmp/mips-lt/measure_sx
/tmp/mips-lt/measure_sx > /tmp/mips-lt/sx.csv
python3 tools/collect_latency_throughput.py --cpu 3A4000 --uarch GS464V \
  --output data/latency_throughput_3A4000.csv /tmp/mips-lt/sx.csv
python3 tools/generate_docs.py
```
