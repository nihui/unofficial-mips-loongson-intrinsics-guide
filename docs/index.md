# Unofficial MIPS Loongson Intrinsics Guide

This is an unofficial guide for the MIPS-era Loongson SIMD intrinsic headers in this repository. It follows the organization of the Unofficial LoongArch Intrinsics Guide, but the content is generated from the Loongson SX, Loongson ASX, MIPS MSA, MSA2, MSA Crypto, Loongson MMI, and Loongson CSR GCC-style headers.

The SX and ASX headers are early Loongson SIMD interfaces with 128-bit and 256-bit vector registers. Their intrinsic prefixes are still `__lsx_` and `__lasx_`, even though these files target MIPS feature macros rather than LoongArch feature macros. MIPS MSA, MSA2, and MSA Crypto document the 128-bit MSA families supplied in `msa.h`, `msa2.h`, and `msa-cryptointrin.h`. MMI documents the older 64-bit paired-integer multimedia operations, while CSR documents scalar control/status helpers.

The generated operation blocks contain inferred lane-level pseudocode. A separate header-mapping block keeps the original wrapper body from the header. When the header implements a builtin with inline assembly, the generator records the real instruction mnemonic used there. For compiler builtins without inline assembly in the header, the mnemonic is inferred from the builtin name.

## Covered Headers

| Extension | Header | Vector width | Feature macro | Intrinsics |
|-----------|--------|--------------|---------------|------------|
| Loongson SX | `include/loongson-sxintrin.h` | 128 bit | `__mips_loongson_sx` | 255 |
| Loongson ASX | `include/loongson-asxintrin.h` | 256 bit | `__mips_loongson_asx` | 1165 |
| MIPS MSA | `include/msa.h` | 128 bit | `__mips_msa` | 529 |
| MSA2 | `include/msa2.h` | 128 bit | `__mips_msa` | 371 |
| MSA Crypto | `include/msa-cryptointrin.h` | 128 bit | `__mips_msa_crypto` | 29 |
| Loongson MMI | `include/loongson-mmiintrin.h` | 64 bit | `__mips_loongson_mmi` | 99 |
| Loongson CSR | `include/loongson-csr.h` | 64 bit | `__mips_loongson_csr` | 16 |

Total documented intrinsics: 2464.

## Register Model

The pseudo descriptions assume vectors can be viewed through element arrays similar to the following C unions:

```c
union loongson_128_register {
  uint8_t byte[16];
  uint16_t half[8];
  uint32_t word[4];
  uint64_t dword[2];
  float fp32[4];
  double fp64[2];
};

union loongson_256_register {
  uint8_t byte[32];
  uint16_t half[16];
  uint32_t word[8];
  uint64_t dword[4];
  float fp32[8];
  double fp64[4];
};
```

The source headers are GCC runtime headers and retain their original copyright notices.
