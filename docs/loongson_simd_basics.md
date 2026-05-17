# Loongson SIMD Basics

Loongson SX and ASX are MIPS-era SIMD extensions. SX exposes 128-bit integer and floating-point vector types such as `__m128i`, `__m128`, and `__m128d`; ASX exposes 256-bit `__m256i`, `__m256`, and `__m256d` types. Standard MSA, MSA2, and MSA Crypto use 128-bit MSA vector values. Loongson MMI uses 64-bit paired i8/u8, i16/u16, and i32/u32 values, and Loongson CSR exposes scalar control/status register helpers.

The public intrinsics in these headers are thin wrappers around compiler builtins or inline assembly helpers. The documentation therefore records the public intrinsic, target builtin, reconstructed instruction mnemonic, and the original header wrapper. Immediate arguments are documented as `int` when the macro does not provide a stronger type in comments.

Operation blocks are hardware-checked pseudocode. The probe suite cross-compiled each public intrinsic with the bundled Loongson GCC 7.3 toolchain and executed the runnable cases on a Loongson-3A4000; control/status helpers that can trap or alter privileged state are compile-checked and explicitly marked. Hardware-specific exception behavior, NaN payload propagation, and privileged side effects should still be checked against vendor manuals when those details matter.

## Naming Notes

- Suffixes `b`, `h`, `w`, `d`, and `q` denote 8-bit, 16-bit, 32-bit, 64-bit, and 128-bit lanes. Operation pseudocode names those views as `iN`/`uN` or `fp32`/`fp64` when signedness or floating-point format is known.
- Suffixes `s`, `u`, and `us` usually denote signed, unsigned, and unsigned/signed mixed interpretation.
- Tokens such as `lo`, `hi`, `even`, `odd`, and `el0` describe lane selection.
- Tokens such as `w2x`, `n2x`, `w4x`, `w8x`, and `wx` describe widening or narrowing operations.
- Tokens such as `rnd`, `sat`, and immediate forms ending in `i` indicate rounding, saturation, or immediate operands.
- [Latency and throughput tables](latency_throughput.md) are generated from `data/latency_throughput_*.csv` when measured data is available.

## Generation Summary

- Loongson SX: Integer Computation: 59, Integer Comparison: 3, Shift: 68, Logical: 1, Bitwise Operations: 20, Permutation: 19, Float Computation: 26, Float Conversion: 32, Memory: 8, Miscellaneous: 19
- Loongson ASX: Integer Computation: 509, Integer Comparison: 83, Shift: 116, Logical: 17, Bitwise Operations: 81, Permutation: 160, Float Computation: 54, Float Comparison: 44, Float Conversion: 56, Memory: 10, Branch: 10, Miscellaneous: 25
- MIPS MSA: Integer Computation: 150, Integer Comparison: 80, Shift: 40, Logical: 14, Bitwise Operations: 52, Permutation: 72, Float Computation: 34, Float Comparison: 44, Float Conversion: 24, Memory: 8, Branch: 10, Control and Status: 1
- MSA2: Integer Computation: 300, Shift: 8, Logical: 1, Bitwise Operations: 5, Permutation: 57
- MSA Crypto: Cryptography: 29
- Loongson MMI: Integer Computation: 34, Integer Comparison: 16, Shift: 12, Logical: 8, Bitwise Operations: 2, Permutation: 27
- Loongson CSR: Control and Status: 16
