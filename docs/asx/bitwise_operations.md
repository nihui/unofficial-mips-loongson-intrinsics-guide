# Bitwise Operations

Generated from `include/loongson-asxintrin.h`. This page contains 73 intrinsics.

## __m256i __lasx_mxbclr_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxbclr_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxbclr.b
Builtin: __builtin_lasx_mxbclr_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:234
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbclr.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] & ~(1 << (b.byte[i] & 7));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbclr_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxbclr_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxbclr_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxbclr.d
Builtin: __builtin_lasx_mxbclr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:255
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbclr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] & ~(1 << (b.dword[i] & 63));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbclr_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxbclr_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxbclr_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxbclr.h
Builtin: __builtin_lasx_mxbclr_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:241
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbclr.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] & ~(1 << (b.half[i] & 15));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbclr_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxbclr_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxbclr_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxbclr.w
Builtin: __builtin_lasx_mxbclr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:248
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbclr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] & ~(1 << (b.word[i] & 31));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbclr_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxbclri_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxbclri_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxbclri.b
Builtin: __builtin_lasx_mxbclri_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:261
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbclri.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] & ~(1 << (imm));
```

### Header Mapping

```c
#define __lasx_mxbclri_b(_1, _2) ((__m256i)__builtin_lasx_mxbclri_b((v32u8)(_1), (_2)))
```

## __m256i __lasx_mxbclri_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxbclri_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxbclri.d
Builtin: __builtin_lasx_mxbclri_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:264
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbclri.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] & ~(1 << (imm));
```

### Header Mapping

```c
#define __lasx_mxbclri_d(_1, _2) ((__m256i)__builtin_lasx_mxbclri_d((v4u64)(_1), (_2)))
```

## __m256i __lasx_mxbclri_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxbclri_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxbclri.h
Builtin: __builtin_lasx_mxbclri_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:262
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbclri.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = a.half[i] & ~(1 << (imm));
```

### Header Mapping

```c
#define __lasx_mxbclri_h(_1, _2) ((__m256i)__builtin_lasx_mxbclri_h((v16u16)(_1), (_2)))
```

## __m256i __lasx_mxbclri_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxbclri_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxbclri.w
Builtin: __builtin_lasx_mxbclri_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:263
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbclri.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = a.word[i] & ~(1 << (imm));
```

### Header Mapping

```c
#define __lasx_mxbclri_w(_1, _2) ((__m256i)__builtin_lasx_mxbclri_w((v8u32)(_1), (_2)))
```

## __m256i __lasx_mxbinsl_b (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxbinsl_b (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsl.b
Builtin: __builtin_lasx_mxbinsl_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:330
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsl.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..31:
  mask = most-significant_bits_mask(8, (b.byte[i] & 7) + 1);
  dst.byte[i] = (a.byte[i] & ~mask) | (b.byte[i] & mask);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsl_b((v32u8)_1, (v32u8)_2, (v32u8)_3);
```

## __m256i __lasx_mxbinsl_d (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxbinsl_d (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsl.d
Builtin: __builtin_lasx_mxbinsl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:351
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  mask = most-significant_bits_mask(64, (b.dword[i] & 63) + 1);
  dst.dword[i] = (a.dword[i] & ~mask) | (b.dword[i] & mask);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsl_d((v4u64)_1, (v4u64)_2, (v4u64)_3);
```

## __m256i __lasx_mxbinsl_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxbinsl_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsl.h
Builtin: __builtin_lasx_mxbinsl_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:337
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsl.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..15:
  mask = most-significant_bits_mask(16, (b.half[i] & 15) + 1);
  dst.half[i] = (a.half[i] & ~mask) | (b.half[i] & mask);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsl_h((v16u16)_1, (v16u16)_2, (v16u16)_3);
```

## __m256i __lasx_mxbinsl_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxbinsl_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsl.w
Builtin: __builtin_lasx_mxbinsl_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:344
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsl.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  mask = most-significant_bits_mask(32, (b.word[i] & 31) + 1);
  dst.word[i] = (a.word[i] & ~mask) | (b.word[i] & mask);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsl_w((v8u32)_1, (v8u32)_2, (v8u32)_3);
```

## __m256i __lasx_mxbinsli_b (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxbinsli_b (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsli.b
Builtin: __builtin_lasx_mxbinsli_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:357
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsli.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..31:
  mask = most-significant_bits_mask(8, imm + 1);
  dst.byte[i] = (a.byte[i] & ~mask) | (b.byte[i] & mask);
```

### Header Mapping

```c
#define __lasx_mxbinsli_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxbinsli_b((v32u8)(_1), (v32u8)(_2), (_3)))
```

## __m256i __lasx_mxbinsli_d (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxbinsli_d (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsli.d
Builtin: __builtin_lasx_mxbinsli_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:360
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsli.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..3:
  mask = most-significant_bits_mask(64, imm + 1);
  dst.dword[i] = (a.dword[i] & ~mask) | (b.dword[i] & mask);
```

### Header Mapping

```c
#define __lasx_mxbinsli_d(_1, _2, _3) ((__m256i)__builtin_lasx_mxbinsli_d((v4u64)(_1), (v4u64)(_2), (_3)))
```

## __m256i __lasx_mxbinsli_h (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxbinsli_h (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsli.h
Builtin: __builtin_lasx_mxbinsli_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:358
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsli.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..15:
  mask = most-significant_bits_mask(16, imm + 1);
  dst.half[i] = (a.half[i] & ~mask) | (b.half[i] & mask);
```

### Header Mapping

```c
#define __lasx_mxbinsli_h(_1, _2, _3) ((__m256i)__builtin_lasx_mxbinsli_h((v16u16)(_1), (v16u16)(_2), (_3)))
```

## __m256i __lasx_mxbinsli_w (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxbinsli_w (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsli.w
Builtin: __builtin_lasx_mxbinsli_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:359
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsli.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..7:
  mask = most-significant_bits_mask(32, imm + 1);
  dst.word[i] = (a.word[i] & ~mask) | (b.word[i] & mask);
```

### Header Mapping

```c
#define __lasx_mxbinsli_w(_1, _2, _3) ((__m256i)__builtin_lasx_mxbinsli_w((v8u32)(_1), (v8u32)(_2), (_3)))
```

## __m256i __lasx_mxbinsr_b (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxbinsr_b (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsr.b
Builtin: __builtin_lasx_mxbinsr_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:362
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsr.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..31:
  mask = least-significant_bits_mask(8, (b.byte[i] & 7) + 1);
  dst.byte[i] = (a.byte[i] & ~mask) | (b.byte[i] & mask);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsr_b((v32u8)_1, (v32u8)_2, (v32u8)_3);
```

## __m256i __lasx_mxbinsr_d (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxbinsr_d (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsr.d
Builtin: __builtin_lasx_mxbinsr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:383
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  mask = least-significant_bits_mask(64, (b.dword[i] & 63) + 1);
  dst.dword[i] = (a.dword[i] & ~mask) | (b.dword[i] & mask);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsr_d((v4u64)_1, (v4u64)_2, (v4u64)_3);
```

## __m256i __lasx_mxbinsr_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxbinsr_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsr.h
Builtin: __builtin_lasx_mxbinsr_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:369
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsr.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..15:
  mask = least-significant_bits_mask(16, (b.half[i] & 15) + 1);
  dst.half[i] = (a.half[i] & ~mask) | (b.half[i] & mask);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsr_h((v16u16)_1, (v16u16)_2, (v16u16)_3);
```

## __m256i __lasx_mxbinsr_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxbinsr_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsr.w
Builtin: __builtin_lasx_mxbinsr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:376
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  mask = least-significant_bits_mask(32, (b.word[i] & 31) + 1);
  dst.word[i] = (a.word[i] & ~mask) | (b.word[i] & mask);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsr_w((v8u32)_1, (v8u32)_2, (v8u32)_3);
```

## __m256i __lasx_mxbinsri_b (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxbinsri_b (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsri.b
Builtin: __builtin_lasx_mxbinsri_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:389
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsri.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..31:
  mask = least-significant_bits_mask(8, imm + 1);
  dst.byte[i] = (a.byte[i] & ~mask) | (b.byte[i] & mask);
```

### Header Mapping

```c
#define __lasx_mxbinsri_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxbinsri_b((v32u8)(_1), (v32u8)(_2), (_3)))
```

## __m256i __lasx_mxbinsri_d (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxbinsri_d (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsri.d
Builtin: __builtin_lasx_mxbinsri_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:392
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsri.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..3:
  mask = least-significant_bits_mask(64, imm + 1);
  dst.dword[i] = (a.dword[i] & ~mask) | (b.dword[i] & mask);
```

### Header Mapping

```c
#define __lasx_mxbinsri_d(_1, _2, _3) ((__m256i)__builtin_lasx_mxbinsri_d((v4u64)(_1), (v4u64)(_2), (_3)))
```

## __m256i __lasx_mxbinsri_h (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxbinsri_h (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsri.h
Builtin: __builtin_lasx_mxbinsri_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:390
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsri.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..15:
  mask = least-significant_bits_mask(16, imm + 1);
  dst.half[i] = (a.half[i] & ~mask) | (b.half[i] & mask);
```

### Header Mapping

```c
#define __lasx_mxbinsri_h(_1, _2, _3) ((__m256i)__builtin_lasx_mxbinsri_h((v16u16)(_1), (v16u16)(_2), (_3)))
```

## __m256i __lasx_mxbinsri_w (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxbinsri_w (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxbinsri.w
Builtin: __builtin_lasx_mxbinsri_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:391
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbinsri.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..7:
  mask = least-significant_bits_mask(32, imm + 1);
  dst.word[i] = (a.word[i] & ~mask) | (b.word[i] & mask);
```

### Header Mapping

```c
#define __lasx_mxbinsri_w(_1, _2, _3) ((__m256i)__builtin_lasx_mxbinsri_w((v8u32)(_1), (v8u32)(_2), (_3)))
```

## __m256i __lasx_mxbneg_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxbneg_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxbneg.b
Builtin: __builtin_lasx_mxbneg_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:298
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbneg.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] ^ (1 << (b.byte[i] & 7));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbneg_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxbneg_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxbneg_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxbneg.d
Builtin: __builtin_lasx_mxbneg_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:319
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbneg.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] ^ (1 << (b.dword[i] & 63));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbneg_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxbneg_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxbneg_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxbneg.h
Builtin: __builtin_lasx_mxbneg_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:305
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbneg.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] ^ (1 << (b.half[i] & 15));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbneg_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxbneg_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxbneg_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxbneg.w
Builtin: __builtin_lasx_mxbneg_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:312
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbneg.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] ^ (1 << (b.word[i] & 31));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbneg_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxbnegi_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxbnegi_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxbnegi.b
Builtin: __builtin_lasx_mxbnegi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:325
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbnegi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] ^ (1 << (imm));
```

### Header Mapping

```c
#define __lasx_mxbnegi_b(_1, _2) ((__m256i)__builtin_lasx_mxbnegi_b((v32u8)(_1), (_2)))
```

## __m256i __lasx_mxbnegi_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxbnegi_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxbnegi.d
Builtin: __builtin_lasx_mxbnegi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:328
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbnegi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] ^ (1 << (imm));
```

### Header Mapping

```c
#define __lasx_mxbnegi_d(_1, _2) ((__m256i)__builtin_lasx_mxbnegi_d((v4u64)(_1), (_2)))
```

## __m256i __lasx_mxbnegi_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxbnegi_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxbnegi.h
Builtin: __builtin_lasx_mxbnegi_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:326
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbnegi.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = a.half[i] ^ (1 << (imm));
```

### Header Mapping

```c
#define __lasx_mxbnegi_h(_1, _2) ((__m256i)__builtin_lasx_mxbnegi_h((v16u16)(_1), (_2)))
```

## __m256i __lasx_mxbnegi_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxbnegi_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxbnegi.w
Builtin: __builtin_lasx_mxbnegi_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:327
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbnegi.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = a.word[i] ^ (1 << (imm));
```

### Header Mapping

```c
#define __lasx_mxbnegi_w(_1, _2) ((__m256i)__builtin_lasx_mxbnegi_w((v8u32)(_1), (_2)))
```

## __m256i __lasx_mxbset_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxbset_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxbset.b
Builtin: __builtin_lasx_mxbset_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:266
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbset.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] | (1 << (b.byte[i] & 7));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbset_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxbset_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxbset_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxbset.d
Builtin: __builtin_lasx_mxbset_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:287
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbset.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] | (1 << (b.dword[i] & 63));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbset_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxbset_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxbset_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxbset.h
Builtin: __builtin_lasx_mxbset_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:273
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbset.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] | (1 << (b.half[i] & 15));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbset_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxbset_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxbset_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxbset.w
Builtin: __builtin_lasx_mxbset_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:280
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbset.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] | (1 << (b.word[i] & 31));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbset_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxbseti_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxbseti_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxbseti.b
Builtin: __builtin_lasx_mxbseti_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:293
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbseti.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] | (1 << (imm));
```

### Header Mapping

```c
#define __lasx_mxbseti_b(_1, _2) ((__m256i)__builtin_lasx_mxbseti_b((v32u8)(_1), (_2)))
```

## __m256i __lasx_mxbseti_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxbseti_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxbseti.d
Builtin: __builtin_lasx_mxbseti_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:296
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbseti.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] | (1 << (imm));
```

### Header Mapping

```c
#define __lasx_mxbseti_d(_1, _2) ((__m256i)__builtin_lasx_mxbseti_d((v4u64)(_1), (_2)))
```

## __m256i __lasx_mxbseti_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxbseti_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxbseti.h
Builtin: __builtin_lasx_mxbseti_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:294
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbseti.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = a.half[i] | (1 << (imm));
```

### Header Mapping

```c
#define __lasx_mxbseti_h(_1, _2) ((__m256i)__builtin_lasx_mxbseti_h((v16u16)(_1), (_2)))
```

## __m256i __lasx_mxbseti_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxbseti_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxbseti.w
Builtin: __builtin_lasx_mxbseti_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:295
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbseti.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = a.word[i] | (1 << (imm));
```

### Header Mapping

```c
#define __lasx_mxbseti_w(_1, _2) ((__m256i)__builtin_lasx_mxbseti_w((v8u32)(_1), (_2)))
```

## __m256i __lasx_mxnloc_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxnloc_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxnloc.b
Builtin: __builtin_lasx_mxnloc_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1926
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxnloc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..31:
  dst.byte[i] = count_leading_ones(a.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnloc_b((v32i8)_1);
```

## __m256i __lasx_mxnloc_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxnloc_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxnloc.d
Builtin: __builtin_lasx_mxnloc_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1947
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxnloc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = count_leading_ones(a.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnloc_d((v4i64)_1);
```

## __m256i __lasx_mxnloc_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxnloc_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxnloc.h
Builtin: __builtin_lasx_mxnloc_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1933
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxnloc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..15:
  dst.half[i] = count_leading_ones(a.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnloc_h((v16i16)_1);
```

## __m256i __lasx_mxnloc_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxnloc_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxnloc.w
Builtin: __builtin_lasx_mxnloc_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1940
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxnloc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.word[i] = count_leading_ones(a.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnloc_w((v8i32)_1);
```

## __m256i __lasx_mxnlzc_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxnlzc_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxnlzc.b
Builtin: __builtin_lasx_mxnlzc_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1954
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxnlzc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..31:
  dst.byte[i] = count_leading_zeros(a.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnlzc_b((v32i8)_1);
```

## __m256i __lasx_mxnlzc_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxnlzc_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxnlzc.d
Builtin: __builtin_lasx_mxnlzc_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1975
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxnlzc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = count_leading_zeros(a.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnlzc_d((v4i64)_1);
```

## __m256i __lasx_mxnlzc_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxnlzc_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxnlzc.h
Builtin: __builtin_lasx_mxnlzc_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1961
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxnlzc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..15:
  dst.half[i] = count_leading_zeros(a.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnlzc_h((v16i16)_1);
```

## __m256i __lasx_mxnlzc_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxnlzc_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxnlzc.w
Builtin: __builtin_lasx_mxnlzc_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1968
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxnlzc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.word[i] = count_leading_zeros(a.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnlzc_w((v8i32)_1);
```

## __m256i __lasx_mxnxbits_any_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxnxbits_any_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxnxbits.any.b
Builtin: __builtin_lasx_mxnxbits_any_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4662
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxnxbits.any.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
for i in 0..31:
  dst.byte[i] = predicate_mask_from_neighbor_bits(a.byte[i]);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxnxbits_any_b ((v32i8) a);
```

## __m256i __lasx_mxnxbits_ge0_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxnxbits_ge0_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxnxbits.ge0.b
Builtin: __builtin_lasx_mxnxbits_ge0_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4668
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxnxbits.ge0.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
for i in 0..31:
  dst.byte[i] = predicate_mask_from_neighbor_bits(a.byte[i]);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxnxbits_ge0_b ((v32i8) a);
```

## __m256i __lasx_mxnxbits_lt0_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxnxbits_lt0_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxnxbits.lt0.b
Builtin: __builtin_lasx_mxnxbits_lt0_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4674
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxnxbits.lt0.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
for i in 0..31:
  dst.byte[i] = predicate_mask_from_neighbor_bits(a.byte[i]);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxnxbits_lt0_b ((v32i8) a);
```

## __m256i __lasx_mxpcnt_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxpcnt_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxpcnt.b
Builtin: __builtin_lasx_mxpcnt_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1898
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxpcnt.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..31:
  dst.byte[i] = popcount(a.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpcnt_b((v32i8)_1);
```

## __m256i __lasx_mxpcnt_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxpcnt_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxpcnt.d
Builtin: __builtin_lasx_mxpcnt_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1919
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxpcnt.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = popcount(a.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpcnt_d((v4i64)_1);
```

## __m256i __lasx_mxpcnt_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxpcnt_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxpcnt.h
Builtin: __builtin_lasx_mxpcnt_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1905
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxpcnt.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..15:
  dst.half[i] = popcount(a.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpcnt_h((v16i16)_1);
```

## __m256i __lasx_mxpcnt_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxpcnt_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxpcnt.w
Builtin: __builtin_lasx_mxpcnt_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1912
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxpcnt.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.word[i] = popcount(a.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpcnt_w((v8i32)_1);
```

## __m256i __lasx_mxvgetsign_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvgetsign_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvgetsign.b
Builtin: __builtin_lasx_mxvgetsign_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3673
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvgetsign.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..31:
  dst.byte[i] = sign_bit(a.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvgetsign_b((v32i8)_1);
```

## __m256i __lasx_mxvgetsign_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvgetsign_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvgetsign.d
Builtin: __builtin_lasx_mxvgetsign_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3652
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvgetsign.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = sign_bit(a.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvgetsign_d((v4i64)_1);
```

## __m256i __lasx_mxvgetsign_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvgetsign_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvgetsign.h
Builtin: __builtin_lasx_mxvgetsign_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3666
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvgetsign.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..15:
  dst.half[i] = sign_bit(a.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvgetsign_h((v16i16)_1);
```

## __m256i __lasx_mxvgetsign_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvgetsign_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvgetsign.w
Builtin: __builtin_lasx_mxvgetsign_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3659
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvgetsign.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.word[i] = sign_bit(a.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvgetsign_w((v8i32)_1);
```

## __m256i __lasx_mxvsigncov_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsigncov_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsigncov.b
Builtin: __builtin_lasx_mxvsigncov_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3729
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsigncov.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = (a.byte[i] == 0) ? 0 : (a.byte[i] < 0 ? -b.byte[i] : b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsigncov_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxvsigncov_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsigncov_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsigncov.d
Builtin: __builtin_lasx_mxvsigncov_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3708
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsigncov.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = (a.dword[i] == 0) ? 0 : (a.dword[i] < 0 ? -b.dword[i] : b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsigncov_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvsigncov_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsigncov_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsigncov.h
Builtin: __builtin_lasx_mxvsigncov_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3722
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsigncov.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = (a.half[i] == 0) ? 0 : (a.half[i] < 0 ? -b.half[i] : b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsigncov_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvsigncov_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsigncov_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsigncov.w
Builtin: __builtin_lasx_mxvsigncov_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3715
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsigncov.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = (a.word[i] == 0) ? 0 : (a.word[i] < 0 ? -b.word[i] : b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsigncov_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvsignfill_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvsignfill_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvsignfill.b
Builtin: __builtin_lasx_mxvsignfill_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3701
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsignfill.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..31:
  dst.byte[i] = sign_extend_sign_bit(a.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsignfill_b((v32i8)_1);
```

## __m256i __lasx_mxvsignfill_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvsignfill_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvsignfill.d
Builtin: __builtin_lasx_mxvsignfill_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3680
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsignfill.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = sign_extend_sign_bit(a.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsignfill_d((v4i64)_1);
```

## __m256i __lasx_mxvsignfill_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvsignfill_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvsignfill.h
Builtin: __builtin_lasx_mxvsignfill_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3694
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsignfill.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..15:
  dst.half[i] = sign_extend_sign_bit(a.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsignfill_h((v16i16)_1);
```

## __m256i __lasx_mxvsignfill_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvsignfill_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvsignfill.w
Builtin: __builtin_lasx_mxvsignfill_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3687
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsignfill.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.word[i] = sign_extend_sign_bit(a.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsignfill_w((v8i32)_1);
```

## __m256i __lasx_mxwxbits_01_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxwxbits_01_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxwxbits.01.b
Builtin: __builtin_lasx_mxwxbits_01_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4806
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxwxbits.01.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
for i in 0..31:
  dst.byte[i] = expanded_mask_bits_from_bytes(a.byte[i]);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxwxbits_01_b ((v32i8) a);
```

## __m256i __lasx_mxwxbits_mask_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxwxbits_mask_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxwxbits.mask.b
Builtin: __builtin_lasx_mxwxbits_mask_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4812
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxwxbits.mask.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
for i in 0..31:
  dst.byte[i] = expanded_mask_bits_from_bytes(a.byte[i]);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxwxbits_mask_b ((v32i8) a);
```

## __m256i __lasx_xgetsign_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_xgetsign_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xgetsign.b
Builtin: __builtin_lasx_xgetsign_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4281
```

### Description

Manipulate or summarize bits in each 32 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xgetsign.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..31:
  dst.byte[i] = sign_bit(a.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xgetsign_b((v32i8)_1);
```

## __m256i __lasx_xgetsign_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_xgetsign_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xgetsign.d
Builtin: __builtin_lasx_xgetsign_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4302
```

### Description

Manipulate or summarize bits in each 4 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xgetsign.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = sign_bit(a.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xgetsign_d((v4i64)_1);
```

## __m256i __lasx_xgetsign_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_xgetsign_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xgetsign.h
Builtin: __builtin_lasx_xgetsign_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4288
```

### Description

Manipulate or summarize bits in each 16 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xgetsign.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..15:
  dst.half[i] = sign_bit(a.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xgetsign_h((v16i16)_1);
```

## __m256i __lasx_xgetsign_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_xgetsign_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xgetsign.w
Builtin: __builtin_lasx_xgetsign_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4295
```

### Description

Manipulate or summarize bits in each 8 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xgetsign.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.word[i] = sign_bit(a.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xgetsign_w((v8i32)_1);
```

