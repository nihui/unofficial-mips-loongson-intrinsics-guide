# Bitwise Operations

Generated from `include/msa.h`. This page contains 52 intrinsics.

## v16u8 __msa_bclr_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_bclr_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: bclr.b
Builtin: __builtin_msa_bclr_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:92
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bclr.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = a.byte[i] & ~(1 << (b.byte[i] & 7));
```

### Header Mapping

```c
#define __msa_bclr_b __builtin_msa_bclr_b
```

## v2u64 __msa_bclr_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_bclr_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: bclr.d
Builtin: __builtin_msa_bclr_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:95
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bclr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = a.dword[i] & ~(1 << (b.dword[i] & 63));
```

### Header Mapping

```c
#define __msa_bclr_d __builtin_msa_bclr_d
```

## v8u16 __msa_bclr_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_bclr_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: bclr.h
Builtin: __builtin_msa_bclr_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:93
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bclr.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] & ~(1 << (b.half[i] & 15));
```

### Header Mapping

```c
#define __msa_bclr_h __builtin_msa_bclr_h
```

## v4u32 __msa_bclr_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_bclr_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: bclr.w
Builtin: __builtin_msa_bclr_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:94
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bclr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] & ~(1 << (b.word[i] & 31));
```

### Header Mapping

```c
#define __msa_bclr_w __builtin_msa_bclr_w
```

## v16u8 __msa_bclri_b (v16u8 a, int imm0_7)

### Synopsis

```c
v16u8 __msa_bclri_b (v16u8 a, int imm0_7)
#include <msa.h>
Instruction: bclri.b
Builtin: __builtin_msa_bclri_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:96
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bclri.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_7;
for i in 0..15:
  dst.byte[i] = a.byte[i] & ~(1 << (imm));
```

### Header Mapping

```c
#define __msa_bclri_b __builtin_msa_bclri_b
```

## v2u64 __msa_bclri_d (v2u64 a, int imm0_63)

### Synopsis

```c
v2u64 __msa_bclri_d (v2u64 a, int imm0_63)
#include <msa.h>
Instruction: bclri.d
Builtin: __builtin_msa_bclri_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:99
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bclri.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_63;
for i in 0..1:
  dst.dword[i] = a.dword[i] & ~(1 << (imm));
```

### Header Mapping

```c
#define __msa_bclri_d __builtin_msa_bclri_d
```

## v8u16 __msa_bclri_h (v8u16 a, int imm0_15)

### Synopsis

```c
v8u16 __msa_bclri_h (v8u16 a, int imm0_15)
#include <msa.h>
Instruction: bclri.h
Builtin: __builtin_msa_bclri_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:97
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bclri.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_15;
for i in 0..7:
  dst.half[i] = a.half[i] & ~(1 << (imm));
```

### Header Mapping

```c
#define __msa_bclri_h __builtin_msa_bclri_h
```

## v4u32 __msa_bclri_w (v4u32 a, int imm0_31)

### Synopsis

```c
v4u32 __msa_bclri_w (v4u32 a, int imm0_31)
#include <msa.h>
Instruction: bclri.w
Builtin: __builtin_msa_bclri_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:98
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bclri.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = a.word[i] & ~(1 << (imm));
```

### Header Mapping

```c
#define __msa_bclri_w __builtin_msa_bclri_w
```

## v16u8 __msa_binsl_b (v16u8 a, v16u8 b, v16u8 c)

### Synopsis

```c
v16u8 __msa_binsl_b (v16u8 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: binsl.b
Builtin: __builtin_msa_binsl_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:116
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsl.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  mask = most-significant_bits_mask(8, (b.byte[i] & 7) + 1);
  dst.byte[i] = (a.byte[i] & ~mask) | (b.byte[i] & mask);
```

### Header Mapping

```c
#define __msa_binsl_b __builtin_msa_binsl_b
```

## v2u64 __msa_binsl_d (v2u64 a, v2u64 b, v2u64 c)

### Synopsis

```c
v2u64 __msa_binsl_d (v2u64 a, v2u64 b, v2u64 c)
#include <msa.h>
Instruction: binsl.d
Builtin: __builtin_msa_binsl_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:119
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  mask = most-significant_bits_mask(64, (b.dword[i] & 63) + 1);
  dst.dword[i] = (a.dword[i] & ~mask) | (b.dword[i] & mask);
```

### Header Mapping

```c
#define __msa_binsl_d __builtin_msa_binsl_d
```

## v8u16 __msa_binsl_h (v8u16 a, v8u16 b, v8u16 c)

### Synopsis

```c
v8u16 __msa_binsl_h (v8u16 a, v8u16 b, v8u16 c)
#include <msa.h>
Instruction: binsl.h
Builtin: __builtin_msa_binsl_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:117
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsl.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  mask = most-significant_bits_mask(16, (b.half[i] & 15) + 1);
  dst.half[i] = (a.half[i] & ~mask) | (b.half[i] & mask);
```

### Header Mapping

```c
#define __msa_binsl_h __builtin_msa_binsl_h
```

## v4u32 __msa_binsl_w (v4u32 a, v4u32 b, v4u32 c)

### Synopsis

```c
v4u32 __msa_binsl_w (v4u32 a, v4u32 b, v4u32 c)
#include <msa.h>
Instruction: binsl.w
Builtin: __builtin_msa_binsl_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:118
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsl.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  mask = most-significant_bits_mask(32, (b.word[i] & 31) + 1);
  dst.word[i] = (a.word[i] & ~mask) | (b.word[i] & mask);
```

### Header Mapping

```c
#define __msa_binsl_w __builtin_msa_binsl_w
```

## v16u8 __msa_binsli_b (v16u8 a, v16u8 b, int imm0_7)

### Synopsis

```c
v16u8 __msa_binsli_b (v16u8 a, v16u8 b, int imm0_7)
#include <msa.h>
Instruction: binsli.b
Builtin: __builtin_msa_binsli_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:120
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsli.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_7;
for i in 0..15:
  mask = most-significant_bits_mask(8, imm + 1);
  dst.byte[i] = (a.byte[i] & ~mask) | (b.byte[i] & mask);
```

### Header Mapping

```c
#define __msa_binsli_b __builtin_msa_binsli_b
```

## v2u64 __msa_binsli_d (v2u64 a, v2u64 b, int imm0_63)

### Synopsis

```c
v2u64 __msa_binsli_d (v2u64 a, v2u64 b, int imm0_63)
#include <msa.h>
Instruction: binsli.d
Builtin: __builtin_msa_binsli_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:123
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsli.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_63;
for i in 0..1:
  mask = most-significant_bits_mask(64, imm + 1);
  dst.dword[i] = (a.dword[i] & ~mask) | (b.dword[i] & mask);
```

### Header Mapping

```c
#define __msa_binsli_d __builtin_msa_binsli_d
```

## v8u16 __msa_binsli_h (v8u16 a, v8u16 b, int imm0_15)

### Synopsis

```c
v8u16 __msa_binsli_h (v8u16 a, v8u16 b, int imm0_15)
#include <msa.h>
Instruction: binsli.h
Builtin: __builtin_msa_binsli_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:121
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsli.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_15;
for i in 0..7:
  mask = most-significant_bits_mask(16, imm + 1);
  dst.half[i] = (a.half[i] & ~mask) | (b.half[i] & mask);
```

### Header Mapping

```c
#define __msa_binsli_h __builtin_msa_binsli_h
```

## v4u32 __msa_binsli_w (v4u32 a, v4u32 b, int imm0_31)

### Synopsis

```c
v4u32 __msa_binsli_w (v4u32 a, v4u32 b, int imm0_31)
#include <msa.h>
Instruction: binsli.w
Builtin: __builtin_msa_binsli_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:122
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsli.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  mask = most-significant_bits_mask(32, imm + 1);
  dst.word[i] = (a.word[i] & ~mask) | (b.word[i] & mask);
```

### Header Mapping

```c
#define __msa_binsli_w __builtin_msa_binsli_w
```

## v16u8 __msa_binsr_b (v16u8 a, v16u8 b, v16u8 c)

### Synopsis

```c
v16u8 __msa_binsr_b (v16u8 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: binsr.b
Builtin: __builtin_msa_binsr_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:124
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsr.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  mask = least-significant_bits_mask(8, (b.byte[i] & 7) + 1);
  dst.byte[i] = (a.byte[i] & ~mask) | (b.byte[i] & mask);
```

### Header Mapping

```c
#define __msa_binsr_b __builtin_msa_binsr_b
```

## v2u64 __msa_binsr_d (v2u64 a, v2u64 b, v2u64 c)

### Synopsis

```c
v2u64 __msa_binsr_d (v2u64 a, v2u64 b, v2u64 c)
#include <msa.h>
Instruction: binsr.d
Builtin: __builtin_msa_binsr_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:127
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  mask = least-significant_bits_mask(64, (b.dword[i] & 63) + 1);
  dst.dword[i] = (a.dword[i] & ~mask) | (b.dword[i] & mask);
```

### Header Mapping

```c
#define __msa_binsr_d __builtin_msa_binsr_d
```

## v8u16 __msa_binsr_h (v8u16 a, v8u16 b, v8u16 c)

### Synopsis

```c
v8u16 __msa_binsr_h (v8u16 a, v8u16 b, v8u16 c)
#include <msa.h>
Instruction: binsr.h
Builtin: __builtin_msa_binsr_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:125
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsr.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  mask = least-significant_bits_mask(16, (b.half[i] & 15) + 1);
  dst.half[i] = (a.half[i] & ~mask) | (b.half[i] & mask);
```

### Header Mapping

```c
#define __msa_binsr_h __builtin_msa_binsr_h
```

## v4u32 __msa_binsr_w (v4u32 a, v4u32 b, v4u32 c)

### Synopsis

```c
v4u32 __msa_binsr_w (v4u32 a, v4u32 b, v4u32 c)
#include <msa.h>
Instruction: binsr.w
Builtin: __builtin_msa_binsr_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:126
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  mask = least-significant_bits_mask(32, (b.word[i] & 31) + 1);
  dst.word[i] = (a.word[i] & ~mask) | (b.word[i] & mask);
```

### Header Mapping

```c
#define __msa_binsr_w __builtin_msa_binsr_w
```

## v16u8 __msa_binsri_b (v16u8 a, v16u8 b, int imm0_7)

### Synopsis

```c
v16u8 __msa_binsri_b (v16u8 a, v16u8 b, int imm0_7)
#include <msa.h>
Instruction: binsri.b
Builtin: __builtin_msa_binsri_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:128
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsri.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_7;
for i in 0..15:
  mask = least-significant_bits_mask(8, imm + 1);
  dst.byte[i] = (a.byte[i] & ~mask) | (b.byte[i] & mask);
```

### Header Mapping

```c
#define __msa_binsri_b __builtin_msa_binsri_b
```

## v2u64 __msa_binsri_d (v2u64 a, v2u64 b, int imm0_63)

### Synopsis

```c
v2u64 __msa_binsri_d (v2u64 a, v2u64 b, int imm0_63)
#include <msa.h>
Instruction: binsri.d
Builtin: __builtin_msa_binsri_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:131
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsri.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_63;
for i in 0..1:
  mask = least-significant_bits_mask(64, imm + 1);
  dst.dword[i] = (a.dword[i] & ~mask) | (b.dword[i] & mask);
```

### Header Mapping

```c
#define __msa_binsri_d __builtin_msa_binsri_d
```

## v8u16 __msa_binsri_h (v8u16 a, v8u16 b, int imm0_15)

### Synopsis

```c
v8u16 __msa_binsri_h (v8u16 a, v8u16 b, int imm0_15)
#include <msa.h>
Instruction: binsri.h
Builtin: __builtin_msa_binsri_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:129
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsri.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_15;
for i in 0..7:
  mask = least-significant_bits_mask(16, imm + 1);
  dst.half[i] = (a.half[i] & ~mask) | (b.half[i] & mask);
```

### Header Mapping

```c
#define __msa_binsri_h __builtin_msa_binsri_h
```

## v4u32 __msa_binsri_w (v4u32 a, v4u32 b, int imm0_31)

### Synopsis

```c
v4u32 __msa_binsri_w (v4u32 a, v4u32 b, int imm0_31)
#include <msa.h>
Instruction: binsri.w
Builtin: __builtin_msa_binsri_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:130
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for binsri.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  mask = least-significant_bits_mask(32, imm + 1);
  dst.word[i] = (a.word[i] & ~mask) | (b.word[i] & mask);
```

### Header Mapping

```c
#define __msa_binsri_w __builtin_msa_binsri_w
```

## v16u8 __msa_bneg_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_bneg_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: bneg.b
Builtin: __builtin_msa_bneg_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:108
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bneg.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = a.byte[i] ^ (1 << (b.byte[i] & 7));
```

### Header Mapping

```c
#define __msa_bneg_b __builtin_msa_bneg_b
```

## v2u64 __msa_bneg_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_bneg_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: bneg.d
Builtin: __builtin_msa_bneg_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:111
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bneg.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = a.dword[i] ^ (1 << (b.dword[i] & 63));
```

### Header Mapping

```c
#define __msa_bneg_d __builtin_msa_bneg_d
```

## v8u16 __msa_bneg_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_bneg_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: bneg.h
Builtin: __builtin_msa_bneg_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:109
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bneg.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] ^ (1 << (b.half[i] & 15));
```

### Header Mapping

```c
#define __msa_bneg_h __builtin_msa_bneg_h
```

## v4u32 __msa_bneg_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_bneg_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: bneg.w
Builtin: __builtin_msa_bneg_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:110
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bneg.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] ^ (1 << (b.word[i] & 31));
```

### Header Mapping

```c
#define __msa_bneg_w __builtin_msa_bneg_w
```

## v16u8 __msa_bnegi_b (v16u8 a, int imm0_7)

### Synopsis

```c
v16u8 __msa_bnegi_b (v16u8 a, int imm0_7)
#include <msa.h>
Instruction: bnegi.b
Builtin: __builtin_msa_bnegi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:112
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bnegi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_7;
for i in 0..15:
  dst.byte[i] = a.byte[i] ^ (1 << (imm));
```

### Header Mapping

```c
#define __msa_bnegi_b __builtin_msa_bnegi_b
```

## v2u64 __msa_bnegi_d (v2u64 a, int imm0_63)

### Synopsis

```c
v2u64 __msa_bnegi_d (v2u64 a, int imm0_63)
#include <msa.h>
Instruction: bnegi.d
Builtin: __builtin_msa_bnegi_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:115
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bnegi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_63;
for i in 0..1:
  dst.dword[i] = a.dword[i] ^ (1 << (imm));
```

### Header Mapping

```c
#define __msa_bnegi_d __builtin_msa_bnegi_d
```

## v8u16 __msa_bnegi_h (v8u16 a, int imm0_15)

### Synopsis

```c
v8u16 __msa_bnegi_h (v8u16 a, int imm0_15)
#include <msa.h>
Instruction: bnegi.h
Builtin: __builtin_msa_bnegi_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:113
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bnegi.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_15;
for i in 0..7:
  dst.half[i] = a.half[i] ^ (1 << (imm));
```

### Header Mapping

```c
#define __msa_bnegi_h __builtin_msa_bnegi_h
```

## v4u32 __msa_bnegi_w (v4u32 a, int imm0_31)

### Synopsis

```c
v4u32 __msa_bnegi_w (v4u32 a, int imm0_31)
#include <msa.h>
Instruction: bnegi.w
Builtin: __builtin_msa_bnegi_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:114
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bnegi.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = a.word[i] ^ (1 << (imm));
```

### Header Mapping

```c
#define __msa_bnegi_w __builtin_msa_bnegi_w
```

## v16u8 __msa_bset_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_bset_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: bset.b
Builtin: __builtin_msa_bset_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:100
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bset.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = a.byte[i] | (1 << (b.byte[i] & 7));
```

### Header Mapping

```c
#define __msa_bset_b __builtin_msa_bset_b
```

## v2u64 __msa_bset_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_bset_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: bset.d
Builtin: __builtin_msa_bset_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:103
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bset.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = a.dword[i] | (1 << (b.dword[i] & 63));
```

### Header Mapping

```c
#define __msa_bset_d __builtin_msa_bset_d
```

## v8u16 __msa_bset_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_bset_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: bset.h
Builtin: __builtin_msa_bset_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:101
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bset.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] | (1 << (b.half[i] & 15));
```

### Header Mapping

```c
#define __msa_bset_h __builtin_msa_bset_h
```

## v4u32 __msa_bset_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_bset_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: bset.w
Builtin: __builtin_msa_bset_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:102
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bset.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] | (1 << (b.word[i] & 31));
```

### Header Mapping

```c
#define __msa_bset_w __builtin_msa_bset_w
```

## v16u8 __msa_bseti_b (v16u8 a, int imm0_7)

### Synopsis

```c
v16u8 __msa_bseti_b (v16u8 a, int imm0_7)
#include <msa.h>
Instruction: bseti.b
Builtin: __builtin_msa_bseti_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:104
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bseti.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_7;
for i in 0..15:
  dst.byte[i] = a.byte[i] | (1 << (imm));
```

### Header Mapping

```c
#define __msa_bseti_b __builtin_msa_bseti_b
```

## v2u64 __msa_bseti_d (v2u64 a, int imm0_63)

### Synopsis

```c
v2u64 __msa_bseti_d (v2u64 a, int imm0_63)
#include <msa.h>
Instruction: bseti.d
Builtin: __builtin_msa_bseti_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:107
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bseti.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_63;
for i in 0..1:
  dst.dword[i] = a.dword[i] | (1 << (imm));
```

### Header Mapping

```c
#define __msa_bseti_d __builtin_msa_bseti_d
```

## v8u16 __msa_bseti_h (v8u16 a, int imm0_15)

### Synopsis

```c
v8u16 __msa_bseti_h (v8u16 a, int imm0_15)
#include <msa.h>
Instruction: bseti.h
Builtin: __builtin_msa_bseti_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:105
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bseti.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_15;
for i in 0..7:
  dst.half[i] = a.half[i] | (1 << (imm));
```

### Header Mapping

```c
#define __msa_bseti_h __builtin_msa_bseti_h
```

## v4u32 __msa_bseti_w (v4u32 a, int imm0_31)

### Synopsis

```c
v4u32 __msa_bseti_w (v4u32 a, int imm0_31)
#include <msa.h>
Instruction: bseti.w
Builtin: __builtin_msa_bseti_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:106
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bseti.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = a.word[i] | (1 << (imm));
```

### Header Mapping

```c
#define __msa_bseti_w __builtin_msa_bseti_w
```

## v16i8 __msa_nloc_b (v16i8 a)

### Synopsis

```c
v16i8 __msa_nloc_b (v16i8 a)
#include <msa.h>
Instruction: nloc.b
Builtin: __builtin_msa_nloc_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:429
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for nloc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = count_leading_ones(a.byte[i]);
```

### Header Mapping

```c
#define __msa_nloc_b __builtin_msa_nloc_b
```

## v2i64 __msa_nloc_d (v2i64 a)

### Synopsis

```c
v2i64 __msa_nloc_d (v2i64 a)
#include <msa.h>
Instruction: nloc.d
Builtin: __builtin_msa_nloc_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:432
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for nloc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = count_leading_ones(a.dword[i]);
```

### Header Mapping

```c
#define __msa_nloc_d __builtin_msa_nloc_d
```

## v8i16 __msa_nloc_h (v8i16 a)

### Synopsis

```c
v8i16 __msa_nloc_h (v8i16 a)
#include <msa.h>
Instruction: nloc.h
Builtin: __builtin_msa_nloc_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:430
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for nloc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = count_leading_ones(a.half[i]);
```

### Header Mapping

```c
#define __msa_nloc_h __builtin_msa_nloc_h
```

## v4i32 __msa_nloc_w (v4i32 a)

### Synopsis

```c
v4i32 __msa_nloc_w (v4i32 a)
#include <msa.h>
Instruction: nloc.w
Builtin: __builtin_msa_nloc_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:431
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for nloc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = count_leading_ones(a.word[i]);
```

### Header Mapping

```c
#define __msa_nloc_w __builtin_msa_nloc_w
```

## v16i8 __msa_nlzc_b (v16i8 a)

### Synopsis

```c
v16i8 __msa_nlzc_b (v16i8 a)
#include <msa.h>
Instruction: nlzc.b
Builtin: __builtin_msa_nlzc_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:433
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for nlzc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = count_leading_zeros(a.byte[i]);
```

### Header Mapping

```c
#define __msa_nlzc_b __builtin_msa_nlzc_b
```

## v2i64 __msa_nlzc_d (v2i64 a)

### Synopsis

```c
v2i64 __msa_nlzc_d (v2i64 a)
#include <msa.h>
Instruction: nlzc.d
Builtin: __builtin_msa_nlzc_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:436
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for nlzc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = count_leading_zeros(a.dword[i]);
```

### Header Mapping

```c
#define __msa_nlzc_d __builtin_msa_nlzc_d
```

## v8i16 __msa_nlzc_h (v8i16 a)

### Synopsis

```c
v8i16 __msa_nlzc_h (v8i16 a)
#include <msa.h>
Instruction: nlzc.h
Builtin: __builtin_msa_nlzc_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:434
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for nlzc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = count_leading_zeros(a.half[i]);
```

### Header Mapping

```c
#define __msa_nlzc_h __builtin_msa_nlzc_h
```

## v4i32 __msa_nlzc_w (v4i32 a)

### Synopsis

```c
v4i32 __msa_nlzc_w (v4i32 a)
#include <msa.h>
Instruction: nlzc.w
Builtin: __builtin_msa_nlzc_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:435
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for nlzc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = count_leading_zeros(a.word[i]);
```

### Header Mapping

```c
#define __msa_nlzc_w __builtin_msa_nlzc_w
```

## v16i8 __msa_pcnt_b (v16i8 a)

### Synopsis

```c
v16i8 __msa_pcnt_b (v16i8 a)
#include <msa.h>
Instruction: pcnt.b
Builtin: __builtin_msa_pcnt_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:425
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcnt.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = popcount(a.byte[i]);
```

### Header Mapping

```c
#define __msa_pcnt_b __builtin_msa_pcnt_b
```

## v2i64 __msa_pcnt_d (v2i64 a)

### Synopsis

```c
v2i64 __msa_pcnt_d (v2i64 a)
#include <msa.h>
Instruction: pcnt.d
Builtin: __builtin_msa_pcnt_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:428
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcnt.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = popcount(a.dword[i]);
```

### Header Mapping

```c
#define __msa_pcnt_d __builtin_msa_pcnt_d
```

## v8i16 __msa_pcnt_h (v8i16 a)

### Synopsis

```c
v8i16 __msa_pcnt_h (v8i16 a)
#include <msa.h>
Instruction: pcnt.h
Builtin: __builtin_msa_pcnt_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:426
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcnt.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = popcount(a.half[i]);
```

### Header Mapping

```c
#define __msa_pcnt_h __builtin_msa_pcnt_h
```

## v4i32 __msa_pcnt_w (v4i32 a)

### Synopsis

```c
v4i32 __msa_pcnt_w (v4i32 a)
#include <msa.h>
Instruction: pcnt.w
Builtin: __builtin_msa_pcnt_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:427
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcnt.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = popcount(a.word[i]);
```

### Header Mapping

```c
#define __msa_pcnt_w __builtin_msa_pcnt_w
```

