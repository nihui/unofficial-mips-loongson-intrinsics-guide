# Shift

Generated from `include/msa.h`. This page contains 40 intrinsics.

## v16i8 __msa_sll_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_sll_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: sll.b
Builtin: __builtin_msa_sll_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:52
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sll.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = a.byte[i] << b.byte[i] & 7;
```

### Header Mapping

```c
#define __msa_sll_b __builtin_msa_sll_b
```

## v2i64 __msa_sll_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_sll_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: sll.d
Builtin: __builtin_msa_sll_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:55
```

### Description

Shift or rotate 2 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sll.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = a.dword[i] << b.dword[i] & 63;
```

### Header Mapping

```c
#define __msa_sll_d __builtin_msa_sll_d
```

## v8i16 __msa_sll_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_sll_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: sll.h
Builtin: __builtin_msa_sll_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:53
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sll.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] << b.half[i] & 15;
```

### Header Mapping

```c
#define __msa_sll_h __builtin_msa_sll_h
```

## v4i32 __msa_sll_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_sll_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: sll.w
Builtin: __builtin_msa_sll_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:54
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sll.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] << b.word[i] & 31;
```

### Header Mapping

```c
#define __msa_sll_w __builtin_msa_sll_w
```

## v16i8 __msa_slli_b (v16i8 a, int imm0_7)

### Synopsis

```c
v16i8 __msa_slli_b (v16i8 a, int imm0_7)
#include <msa.h>
Instruction: slli.b
Builtin: __builtin_msa_slli_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:56
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for slli.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_7;
for i in 0..15:
  dst.byte[i] = a.byte[i] << imm;
```

### Header Mapping

```c
#define __msa_slli_b __builtin_msa_slli_b
```

## v2i64 __msa_slli_d (v2i64 a, int imm0_63)

### Synopsis

```c
v2i64 __msa_slli_d (v2i64 a, int imm0_63)
#include <msa.h>
Instruction: slli.d
Builtin: __builtin_msa_slli_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:59
```

### Description

Shift or rotate 2 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for slli.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_63;
for i in 0..1:
  dst.dword[i] = a.dword[i] << imm;
```

### Header Mapping

```c
#define __msa_slli_d __builtin_msa_slli_d
```

## v8i16 __msa_slli_h (v8i16 a, int imm0_15)

### Synopsis

```c
v8i16 __msa_slli_h (v8i16 a, int imm0_15)
#include <msa.h>
Instruction: slli.h
Builtin: __builtin_msa_slli_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:57
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for slli.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_15;
for i in 0..7:
  dst.half[i] = a.half[i] << imm;
```

### Header Mapping

```c
#define __msa_slli_h __builtin_msa_slli_h
```

## v4i32 __msa_slli_w (v4i32 a, int imm0_31)

### Synopsis

```c
v4i32 __msa_slli_w (v4i32 a, int imm0_31)
#include <msa.h>
Instruction: slli.w
Builtin: __builtin_msa_slli_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:58
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for slli.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = a.word[i] << imm;
```

### Header Mapping

```c
#define __msa_slli_w __builtin_msa_slli_w
```

## v16i8 __msa_sra_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_sra_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: sra.b
Builtin: __builtin_msa_sra_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:60
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sra.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7);
```

### Header Mapping

```c
#define __msa_sra_b __builtin_msa_sra_b
```

## v2i64 __msa_sra_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_sra_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: sra.d
Builtin: __builtin_msa_sra_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:63
```

### Description

Shift or rotate 2 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sra.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = arithmetic_shift_right(a.dword[i] + (1 << (b.dword[i] & 63 - 1)), b.dword[i] & 63);
```

### Header Mapping

```c
#define __msa_sra_d __builtin_msa_sra_d
```

## v8i16 __msa_sra_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_sra_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: sra.h
Builtin: __builtin_msa_sra_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:61
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sra.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15);
```

### Header Mapping

```c
#define __msa_sra_h __builtin_msa_sra_h
```

## v4i32 __msa_sra_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_sra_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: sra.w
Builtin: __builtin_msa_sra_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:62
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sra.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31);
```

### Header Mapping

```c
#define __msa_sra_w __builtin_msa_sra_w
```

## v16i8 __msa_srai_b (v16i8 a, int imm0_7)

### Synopsis

```c
v16i8 __msa_srai_b (v16i8 a, int imm0_7)
#include <msa.h>
Instruction: srai.b
Builtin: __builtin_msa_srai_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:64
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srai.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_7;
for i in 0..15:
  dst.byte[i] = arithmetic_shift_right(a.byte[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __msa_srai_b __builtin_msa_srai_b
```

## v2i64 __msa_srai_d (v2i64 a, int imm0_63)

### Synopsis

```c
v2i64 __msa_srai_d (v2i64 a, int imm0_63)
#include <msa.h>
Instruction: srai.d
Builtin: __builtin_msa_srai_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:67
```

### Description

Shift or rotate 2 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srai.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_63;
for i in 0..1:
  dst.dword[i] = arithmetic_shift_right(a.dword[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __msa_srai_d __builtin_msa_srai_d
```

## v8i16 __msa_srai_h (v8i16 a, int imm0_15)

### Synopsis

```c
v8i16 __msa_srai_h (v8i16 a, int imm0_15)
#include <msa.h>
Instruction: srai.h
Builtin: __builtin_msa_srai_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:65
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srai.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_15;
for i in 0..7:
  dst.half[i] = arithmetic_shift_right(a.half[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __msa_srai_h __builtin_msa_srai_h
```

## v4i32 __msa_srai_w (v4i32 a, int imm0_31)

### Synopsis

```c
v4i32 __msa_srai_w (v4i32 a, int imm0_31)
#include <msa.h>
Instruction: srai.w
Builtin: __builtin_msa_srai_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:66
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srai.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = arithmetic_shift_right(a.word[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __msa_srai_w __builtin_msa_srai_w
```

## v16i8 __msa_srar_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_srar_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: srar.b
Builtin: __builtin_msa_srar_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:68
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srar.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7);
```

### Header Mapping

```c
#define __msa_srar_b __builtin_msa_srar_b
```

## v2i64 __msa_srar_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_srar_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: srar.d
Builtin: __builtin_msa_srar_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:71
```

### Description

Shift or rotate 2 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srar.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = arithmetic_shift_right(a.dword[i] + (1 << (b.dword[i] & 63 - 1)), b.dword[i] & 63);
```

### Header Mapping

```c
#define __msa_srar_d __builtin_msa_srar_d
```

## v8i16 __msa_srar_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_srar_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: srar.h
Builtin: __builtin_msa_srar_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:69
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srar.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15);
```

### Header Mapping

```c
#define __msa_srar_h __builtin_msa_srar_h
```

## v4i32 __msa_srar_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_srar_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: srar.w
Builtin: __builtin_msa_srar_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:70
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srar.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31);
```

### Header Mapping

```c
#define __msa_srar_w __builtin_msa_srar_w
```

## v16i8 __msa_srari_b (v16i8 a, int imm0_7)

### Synopsis

```c
v16i8 __msa_srari_b (v16i8 a, int imm0_7)
#include <msa.h>
Instruction: srari.b
Builtin: __builtin_msa_srari_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:72
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srari.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_7;
for i in 0..15:
  dst.byte[i] = arithmetic_shift_right(a.byte[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __msa_srari_b __builtin_msa_srari_b
```

## v2i64 __msa_srari_d (v2i64 a, int imm0_63)

### Synopsis

```c
v2i64 __msa_srari_d (v2i64 a, int imm0_63)
#include <msa.h>
Instruction: srari.d
Builtin: __builtin_msa_srari_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:75
```

### Description

Shift or rotate 2 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srari.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_63;
for i in 0..1:
  dst.dword[i] = arithmetic_shift_right(a.dword[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __msa_srari_d __builtin_msa_srari_d
```

## v8i16 __msa_srari_h (v8i16 a, int imm0_15)

### Synopsis

```c
v8i16 __msa_srari_h (v8i16 a, int imm0_15)
#include <msa.h>
Instruction: srari.h
Builtin: __builtin_msa_srari_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:73
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srari.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_15;
for i in 0..7:
  dst.half[i] = arithmetic_shift_right(a.half[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __msa_srari_h __builtin_msa_srari_h
```

## v4i32 __msa_srari_w (v4i32 a, int imm0_31)

### Synopsis

```c
v4i32 __msa_srari_w (v4i32 a, int imm0_31)
#include <msa.h>
Instruction: srari.w
Builtin: __builtin_msa_srari_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:74
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srari.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = arithmetic_shift_right(a.word[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __msa_srari_w __builtin_msa_srari_w
```

## v16i8 __msa_srl_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_srl_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: srl.b
Builtin: __builtin_msa_srl_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:76
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srl.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = logical_shift_right(a.byte[i], b.byte[i] & 7);
```

### Header Mapping

```c
#define __msa_srl_b __builtin_msa_srl_b
```

## v2i64 __msa_srl_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_srl_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: srl.d
Builtin: __builtin_msa_srl_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:79
```

### Description

Shift or rotate 2 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = logical_shift_right(a.dword[i], b.dword[i] & 63);
```

### Header Mapping

```c
#define __msa_srl_d __builtin_msa_srl_d
```

## v8i16 __msa_srl_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_srl_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: srl.h
Builtin: __builtin_msa_srl_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:77
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srl.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = logical_shift_right(a.half[i], b.half[i] & 15);
```

### Header Mapping

```c
#define __msa_srl_h __builtin_msa_srl_h
```

## v4i32 __msa_srl_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_srl_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: srl.w
Builtin: __builtin_msa_srl_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:78
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srl.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = logical_shift_right(a.word[i], b.word[i] & 31);
```

### Header Mapping

```c
#define __msa_srl_w __builtin_msa_srl_w
```

## v16i8 __msa_srli_b (v16i8 a, int imm0_7)

### Synopsis

```c
v16i8 __msa_srli_b (v16i8 a, int imm0_7)
#include <msa.h>
Instruction: srli.b
Builtin: __builtin_msa_srli_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:80
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srli.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_7;
for i in 0..15:
  dst.byte[i] = logical_shift_right(a.byte[i], imm);
```

### Header Mapping

```c
#define __msa_srli_b __builtin_msa_srli_b
```

## v2i64 __msa_srli_d (v2i64 a, int imm0_63)

### Synopsis

```c
v2i64 __msa_srli_d (v2i64 a, int imm0_63)
#include <msa.h>
Instruction: srli.d
Builtin: __builtin_msa_srli_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:83
```

### Description

Shift or rotate 2 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srli.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_63;
for i in 0..1:
  dst.dword[i] = logical_shift_right(a.dword[i], imm);
```

### Header Mapping

```c
#define __msa_srli_d __builtin_msa_srli_d
```

## v8i16 __msa_srli_h (v8i16 a, int imm0_15)

### Synopsis

```c
v8i16 __msa_srli_h (v8i16 a, int imm0_15)
#include <msa.h>
Instruction: srli.h
Builtin: __builtin_msa_srli_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:81
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srli.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_15;
for i in 0..7:
  dst.half[i] = logical_shift_right(a.half[i], imm);
```

### Header Mapping

```c
#define __msa_srli_h __builtin_msa_srli_h
```

## v4i32 __msa_srli_w (v4i32 a, int imm0_31)

### Synopsis

```c
v4i32 __msa_srli_w (v4i32 a, int imm0_31)
#include <msa.h>
Instruction: srli.w
Builtin: __builtin_msa_srli_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:82
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srli.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = logical_shift_right(a.word[i], imm);
```

### Header Mapping

```c
#define __msa_srli_w __builtin_msa_srli_w
```

## v16i8 __msa_srlr_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_srlr_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: srlr.b
Builtin: __builtin_msa_srlr_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:84
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srlr.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = logical_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7);
```

### Header Mapping

```c
#define __msa_srlr_b __builtin_msa_srlr_b
```

## v2i64 __msa_srlr_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_srlr_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: srlr.d
Builtin: __builtin_msa_srlr_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:87
```

### Description

Shift or rotate 2 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srlr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = logical_shift_right(a.dword[i] + (1 << (b.dword[i] & 63 - 1)), b.dword[i] & 63);
```

### Header Mapping

```c
#define __msa_srlr_d __builtin_msa_srlr_d
```

## v8i16 __msa_srlr_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_srlr_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: srlr.h
Builtin: __builtin_msa_srlr_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:85
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srlr.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = logical_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15);
```

### Header Mapping

```c
#define __msa_srlr_h __builtin_msa_srlr_h
```

## v4i32 __msa_srlr_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_srlr_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: srlr.w
Builtin: __builtin_msa_srlr_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:86
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srlr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = logical_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31);
```

### Header Mapping

```c
#define __msa_srlr_w __builtin_msa_srlr_w
```

## v16i8 __msa_srlri_b (v16i8 a, int imm0_7)

### Synopsis

```c
v16i8 __msa_srlri_b (v16i8 a, int imm0_7)
#include <msa.h>
Instruction: srlri.b
Builtin: __builtin_msa_srlri_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:88
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srlri.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_7;
for i in 0..15:
  dst.byte[i] = logical_shift_right(a.byte[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __msa_srlri_b __builtin_msa_srlri_b
```

## v2i64 __msa_srlri_d (v2i64 a, int imm0_63)

### Synopsis

```c
v2i64 __msa_srlri_d (v2i64 a, int imm0_63)
#include <msa.h>
Instruction: srlri.d
Builtin: __builtin_msa_srlri_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:91
```

### Description

Shift or rotate 2 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srlri.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_63;
for i in 0..1:
  dst.dword[i] = logical_shift_right(a.dword[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __msa_srlri_d __builtin_msa_srlri_d
```

## v8i16 __msa_srlri_h (v8i16 a, int imm0_15)

### Synopsis

```c
v8i16 __msa_srlri_h (v8i16 a, int imm0_15)
#include <msa.h>
Instruction: srlri.h
Builtin: __builtin_msa_srlri_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:89
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srlri.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_15;
for i in 0..7:
  dst.half[i] = logical_shift_right(a.half[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __msa_srlri_h __builtin_msa_srlri_h
```

## v4i32 __msa_srlri_w (v4i32 a, int imm0_31)

### Synopsis

```c
v4i32 __msa_srlri_w (v4i32 a, int imm0_31)
#include <msa.h>
Instruction: srlri.w
Builtin: __builtin_msa_srlri_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:90
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for srlri.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = logical_shift_right(a.word[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __msa_srlri_w __builtin_msa_srlri_w
```

