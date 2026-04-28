# Loongson SIMD Basics

Loongson SX and ASX are MIPS-era SIMD extensions. SX exposes 128-bit integer and floating-point vector types such as `__m128i`, `__m128`, and `__m128d`; ASX exposes 256-bit `__m256i`, `__m256`, and `__m256d` types. Standard MSA, MSA2, and MSA Crypto use 128-bit MSA vector values. Loongson MMI uses 64-bit paired byte/halfword/word values, and Loongson CSR exposes scalar control/status register helpers.

The public intrinsics in these headers are thin wrappers around compiler builtins or inline assembly helpers. The documentation therefore records the public intrinsic, target builtin, inferred instruction mnemonic, and the original header wrapper. Immediate arguments are documented as `int` when the macro does not provide a stronger type in comments.

Operation blocks are inferred pseudocode, not a vendor-verified ISA transcription. They are derived from the Loongson/MIPS mnemonic family, the GCC MSA builtin naming scheme, LoongArch LSX/LASX evolution, and common SIMD conventions used by SSE/AVX-style instructions. Hardware-specific exception behavior, NaN ordering, and exact predicate side effects should still be checked against silicon or vendor manuals.

## Naming Notes

- Suffixes `b`, `h`, `w`, `d`, and `q` denote byte, halfword, word, doubleword, and quadword lanes.
- Suffixes `s`, `u`, and `us` usually denote signed, unsigned, and unsigned/signed mixed interpretation.
- Tokens such as `lo`, `hi`, `even`, `odd`, and `el0` describe lane selection.
- Tokens such as `w2x`, `n2x`, `w4x`, `w8x`, and `wx` describe widening or narrowing operations.
- Tokens such as `rnd`, `sat`, and immediate forms ending in `i` indicate rounding, saturation, or immediate operands.

## Generation Summary

- Loongson SX: Integer Computation: 59, Integer Comparison: 3, Shift: 72, Logical: 5, Bitwise Operations: 12, Permutation: 19, Float Computation: 26, Float Conversion: 32, Memory: 8, Miscellaneous: 19
- Loongson ASX: Integer Computation: 277, Integer Comparison: 83, Shift: 120, Logical: 23, Bitwise Operations: 73, Permutation: 390, Float Computation: 54, Float Comparison: 44, Float Conversion: 56, Memory: 10, Branch: 10, Miscellaneous: 25
- MIPS MSA: Integer Computation: 150, Integer Comparison: 80, Shift: 40, Logical: 14, Bitwise Operations: 52, Permutation: 72, Float Computation: 34, Float Comparison: 44, Float Conversion: 24, Memory: 8, Branch: 10, Control and Status: 1
- MSA2: Integer Computation: 68, Shift: 8, Logical: 3, Bitwise Operations: 5, Permutation: 287
- MSA Crypto: Cryptography: 29
- Loongson MMI: Integer Computation: 34, Integer Comparison: 16, Shift: 12, Logical: 8, Bitwise Operations: 2, Permutation: 27
- Loongson CSR: Control and Status: 16
