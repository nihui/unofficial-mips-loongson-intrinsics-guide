# Shift

Generated from `include/loongson-asxintrin.h`. This page contains 120 intrinsics.

## __m256i __lasx_mxror_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxror_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxror.b
Builtin: __builtin_lasx_mxror_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4680
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxror.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxror_b ((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxror_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxror_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxror.d
Builtin: __builtin_lasx_mxror_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4698
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxror.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxror_d ((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxror_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxror_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxror.h
Builtin: __builtin_lasx_mxror_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4686
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxror.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxror_h ((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxror_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxror_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxror.w
Builtin: __builtin_lasx_mxror_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4692
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxror.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxror_w ((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxrori_b (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxrori_b (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxrori.b
Builtin: __builtin_lasx_mxrori_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4704
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxrori.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = m;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __lasx_mxrori_b(a, m) (__m256i) __builtin_lasx_mxrori_b ((v32i8) a, m);
```

## __m256i __lasx_mxrori_d (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxrori_d (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxrori.d
Builtin: __builtin_lasx_mxrori_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4713
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxrori.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = m;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __lasx_mxrori_d(a, m) (__m256i) __builtin_lasx_mxrori_d ((v4i64) a, m);
```

## __m256i __lasx_mxrori_h (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxrori_h (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxrori.h
Builtin: __builtin_lasx_mxrori_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4707
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxrori.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = m;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __lasx_mxrori_h(a, m) (__m256i) __builtin_lasx_mxrori_h ((v16i16) a, m);
```

## __m256i __lasx_mxrori_w (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxrori_w (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxrori.w
Builtin: __builtin_lasx_mxrori_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4710
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxrori.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = m;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __lasx_mxrori_w(a, m) (__m256i) __builtin_lasx_mxrori_w ((v8i32) a, m);
```

## __m256i __lasx_mxsll_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsll_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsll.b
Builtin: __builtin_lasx_mxsll_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:74
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsll.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] << b.byte[i] & 7;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsll_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxsll_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsll_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsll.d
Builtin: __builtin_lasx_mxsll_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:95
```

### Description

Shift or rotate 4 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsll.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] << b.dword[i] & 63;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsll_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxsll_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsll_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsll.h
Builtin: __builtin_lasx_mxsll_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:81
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsll.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] << b.half[i] & 15;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsll_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxsll_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsll_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsll.w
Builtin: __builtin_lasx_mxsll_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:88
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsll.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] << b.word[i] & 31;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsll_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxslli_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxslli_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxslli.b
Builtin: __builtin_lasx_mxslli_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:101
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxslli.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] << imm;
```

### Header Mapping

```c
#define __lasx_mxslli_b(_1, _2) ((__m256i)__builtin_lasx_mxslli_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxslli_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxslli_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxslli.d
Builtin: __builtin_lasx_mxslli_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:104
```

### Description

Shift or rotate 4 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxslli.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] << imm;
```

### Header Mapping

```c
#define __lasx_mxslli_d(_1, _2) ((__m256i)__builtin_lasx_mxslli_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxslli_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxslli_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxslli.h
Builtin: __builtin_lasx_mxslli_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:102
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxslli.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = a.half[i] << imm;
```

### Header Mapping

```c
#define __lasx_mxslli_h(_1, _2) ((__m256i)__builtin_lasx_mxslli_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxslli_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxslli_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxslli.w
Builtin: __builtin_lasx_mxslli_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:103
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxslli.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = a.word[i] << imm;
```

### Header Mapping

```c
#define __lasx_mxslli_w(_1, _2) ((__m256i)__builtin_lasx_mxslli_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxsra_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsra_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsra.b
Builtin: __builtin_lasx_mxsra_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:106
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsra.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsra_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxsra_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsra_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsra.d
Builtin: __builtin_lasx_mxsra_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:127
```

### Description

Shift or rotate 4 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsra.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = arithmetic_shift_right(a.dword[i] + (1 << (b.dword[i] & 63 - 1)), b.dword[i] & 63);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsra_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxsra_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsra_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsra.h
Builtin: __builtin_lasx_mxsra_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:113
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsra.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsra_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxsra_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsra_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsra.w
Builtin: __builtin_lasx_mxsra_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:120
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsra.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsra_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxsrai_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrai_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrai.b
Builtin: __builtin_lasx_mxsrai_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:133
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrai.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = arithmetic_shift_right(a.byte[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __lasx_mxsrai_b(_1, _2) ((__m256i)__builtin_lasx_mxsrai_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxsrai_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrai_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrai.d
Builtin: __builtin_lasx_mxsrai_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:136
```

### Description

Shift or rotate 4 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrai.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = arithmetic_shift_right(a.dword[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __lasx_mxsrai_d(_1, _2) ((__m256i)__builtin_lasx_mxsrai_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxsrai_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrai_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrai.h
Builtin: __builtin_lasx_mxsrai_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:134
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrai.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = arithmetic_shift_right(a.half[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __lasx_mxsrai_h(_1, _2) ((__m256i)__builtin_lasx_mxsrai_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxsrai_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrai_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrai.w
Builtin: __builtin_lasx_mxsrai_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:135
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrai.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = arithmetic_shift_right(a.word[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __lasx_mxsrai_w(_1, _2) ((__m256i)__builtin_lasx_mxsrai_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxsrar_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsrar_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsrar.b
Builtin: __builtin_lasx_mxsrar_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:138
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrar.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrar_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxsrar_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsrar_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsrar.d
Builtin: __builtin_lasx_mxsrar_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:159
```

### Description

Shift or rotate 4 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrar.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = arithmetic_shift_right(a.dword[i] + (1 << (b.dword[i] & 63 - 1)), b.dword[i] & 63);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrar_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxsrar_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsrar_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsrar.h
Builtin: __builtin_lasx_mxsrar_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:145
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrar.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrar_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxsrar_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsrar_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsrar.w
Builtin: __builtin_lasx_mxsrar_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:152
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrar.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrar_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxsrari_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrari_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrari.b
Builtin: __builtin_lasx_mxsrari_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:165
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrari.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = arithmetic_shift_right(a.byte[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __lasx_mxsrari_b(_1, _2) ((__m256i)__builtin_lasx_mxsrari_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxsrari_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrari_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrari.d
Builtin: __builtin_lasx_mxsrari_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:168
```

### Description

Shift or rotate 4 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrari.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = arithmetic_shift_right(a.dword[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __lasx_mxsrari_d(_1, _2) ((__m256i)__builtin_lasx_mxsrari_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxsrari_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrari_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrari.h
Builtin: __builtin_lasx_mxsrari_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:166
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrari.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = arithmetic_shift_right(a.half[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __lasx_mxsrari_h(_1, _2) ((__m256i)__builtin_lasx_mxsrari_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxsrari_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrari_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrari.w
Builtin: __builtin_lasx_mxsrari_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:167
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrari.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = arithmetic_shift_right(a.word[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __lasx_mxsrari_w(_1, _2) ((__m256i)__builtin_lasx_mxsrari_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxsrl_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsrl_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsrl.b
Builtin: __builtin_lasx_mxsrl_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:170
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrl.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = logical_shift_right(a.byte[i], b.byte[i] & 7);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrl_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxsrl_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsrl_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsrl.d
Builtin: __builtin_lasx_mxsrl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:191
```

### Description

Shift or rotate 4 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = logical_shift_right(a.dword[i], b.dword[i] & 63);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrl_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxsrl_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsrl_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsrl.h
Builtin: __builtin_lasx_mxsrl_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:177
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrl.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = logical_shift_right(a.half[i], b.half[i] & 15);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrl_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxsrl_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsrl_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsrl.w
Builtin: __builtin_lasx_mxsrl_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:184
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrl.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = logical_shift_right(a.word[i], b.word[i] & 31);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrl_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxsrli_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrli_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrli.b
Builtin: __builtin_lasx_mxsrli_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:197
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrli.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = logical_shift_right(a.byte[i], imm);
```

### Header Mapping

```c
#define __lasx_mxsrli_b(_1, _2) ((__m256i)__builtin_lasx_mxsrli_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxsrli_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrli_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrli.d
Builtin: __builtin_lasx_mxsrli_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:200
```

### Description

Shift or rotate 4 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrli.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = logical_shift_right(a.dword[i], imm);
```

### Header Mapping

```c
#define __lasx_mxsrli_d(_1, _2) ((__m256i)__builtin_lasx_mxsrli_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxsrli_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrli_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrli.h
Builtin: __builtin_lasx_mxsrli_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:198
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrli.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = logical_shift_right(a.half[i], imm);
```

### Header Mapping

```c
#define __lasx_mxsrli_h(_1, _2) ((__m256i)__builtin_lasx_mxsrli_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxsrli_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrli_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrli.w
Builtin: __builtin_lasx_mxsrli_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:199
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrli.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = logical_shift_right(a.word[i], imm);
```

### Header Mapping

```c
#define __lasx_mxsrli_w(_1, _2) ((__m256i)__builtin_lasx_mxsrli_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxsrlr_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsrlr_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsrlr.b
Builtin: __builtin_lasx_mxsrlr_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:202
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrlr.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = logical_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrlr_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxsrlr_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsrlr_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsrlr.d
Builtin: __builtin_lasx_mxsrlr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:223
```

### Description

Shift or rotate 4 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrlr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = logical_shift_right(a.dword[i] + (1 << (b.dword[i] & 63 - 1)), b.dword[i] & 63);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrlr_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxsrlr_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsrlr_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsrlr.h
Builtin: __builtin_lasx_mxsrlr_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:209
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrlr.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = logical_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrlr_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxsrlr_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsrlr_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsrlr.w
Builtin: __builtin_lasx_mxsrlr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:216
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrlr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = logical_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrlr_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxsrlri_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrlri_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrlri.b
Builtin: __builtin_lasx_mxsrlri_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:229
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrlri.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = logical_shift_right(a.byte[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __lasx_mxsrlri_b(_1, _2) ((__m256i)__builtin_lasx_mxsrlri_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxsrlri_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrlri_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrlri.d
Builtin: __builtin_lasx_mxsrlri_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:232
```

### Description

Shift or rotate 4 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrlri.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = logical_shift_right(a.dword[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __lasx_mxsrlri_d(_1, _2) ((__m256i)__builtin_lasx_mxsrlri_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxsrlri_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrlri_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrlri.h
Builtin: __builtin_lasx_mxsrlri_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:230
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrlri.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = logical_shift_right(a.half[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __lasx_mxsrlri_h(_1, _2) ((__m256i)__builtin_lasx_mxsrlri_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxsrlri_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsrlri_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsrlri.w
Builtin: __builtin_lasx_mxsrlri_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:231
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsrlri.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = logical_shift_right(a.word[i] + (1 << (imm - 1)), imm);
```

### Header Mapping

```c
#define __lasx_mxsrlri_w(_1, _2) ((__m256i)__builtin_lasx_mxsrlri_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxvbsll_v (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvbsll_v (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvbsll.v
Builtin: __builtin_lasx_mxvbsll_v
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3642
```

### Description

Shift or rotate vector lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvbsll.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
imm = _2;
dst.bytes = byte_shift_left(a.bytes, imm);
```

### Header Mapping

```c
#define __lasx_mxvbsll_v(_1, _2) ((__m256i)__builtin_lasx_mxvbsll_v((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxvbsrl_v (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvbsrl_v (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvbsrl.v
Builtin: __builtin_lasx_mxvbsrl_v
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3641
```

### Description

Shift or rotate vector lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvbsrl.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
imm = _2;
dst.bytes = byte_shift_right(a.bytes, imm);
```

### Header Mapping

```c
#define __lasx_mxvbsrl_v(_1, _2) ((__m256i)__builtin_lasx_mxvbsrl_v((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxvrorsigni_b (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxvrorsigni_b (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxvrorsigni.b
Builtin: __builtin_lasx_mxvrorsigni_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3545
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvrorsigni.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __lasx_mxvrorsigni_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxvrorsigni_b((v32i8)(_1), (v32i8)(_2), (_3)))
```

## __m256i __lasx_mxvrorsigni_h (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxvrorsigni_h (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxvrorsigni.h
Builtin: __builtin_lasx_mxvrorsigni_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3544
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvrorsigni.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __lasx_mxvrorsigni_h(_1, _2, _3) ((__m256i)__builtin_lasx_mxvrorsigni_h((v16i16)(_1), (v16i16)(_2), (_3)))
```

## __m256i __lasx_mxvrorsignv_b (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxvrorsignv_b (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxvrorsignv.b
Builtin: __builtin_lasx_mxvrorsignv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3556
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvrorsignv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
c = _3;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvrorsignv_b((v32i8)_1, (v32i8)_2, (v32i8)_3);
```

## __m256i __lasx_mxvrorsignv_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxvrorsignv_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxvrorsignv.h
Builtin: __builtin_lasx_mxvrorsignv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3549
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvrorsignv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvrorsignv_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
```

## __m256i __lasx_mxvsllix_s_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsllix_s_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsllix.s.d
Builtin: __builtin_lasx_mxvsllix_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3277
```

### Description

Shift or rotate 4 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsllix.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] << imm;
```

### Header Mapping

```c
#define __lasx_mxvsllix_s_d(_1, _2) ((__m256i)__builtin_lasx_mxvsllix_s_d((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxvsllix_s_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsllix_s_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsllix.s.h
Builtin: __builtin_lasx_mxvsllix_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3279
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsllix.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = a.half[i] << imm;
```

### Header Mapping

```c
#define __lasx_mxvsllix_s_h(_1, _2) ((__m256i)__builtin_lasx_mxvsllix_s_h((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxvsllix_s_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsllix_s_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsllix.s.w
Builtin: __builtin_lasx_mxvsllix_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3278
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsllix.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = a.word[i] << imm;
```

### Header Mapping

```c
#define __lasx_mxvsllix_s_w(_1, _2) ((__m256i)__builtin_lasx_mxvsllix_s_w((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxvsllix_u_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsllix_u_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsllix.u.d
Builtin: __builtin_lasx_mxvsllix_u_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3280
```

### Description

Shift or rotate 4 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsllix.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] << imm;
```

### Header Mapping

```c
#define __lasx_mxvsllix_u_d(_1, _2) ((__m256i)__builtin_lasx_mxvsllix_u_d((v8u32)(_1), (_2)))
```

## __m256i __lasx_mxvsllix_u_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsllix_u_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsllix.u.h
Builtin: __builtin_lasx_mxvsllix_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3282
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsllix.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = a.half[i] << imm;
```

### Header Mapping

```c
#define __lasx_mxvsllix_u_h(_1, _2) ((__m256i)__builtin_lasx_mxvsllix_u_h((v32u8)(_1), (_2)))
```

## __m256i __lasx_mxvsllix_u_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsllix_u_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsllix.u.w
Builtin: __builtin_lasx_mxvsllix_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3281
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsllix.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = a.word[i] << imm;
```

### Header Mapping

```c
#define __lasx_mxvsllix_u_w(_1, _2) ((__m256i)__builtin_lasx_mxvsllix_u_w((v16u16)(_1), (_2)))
```

## __m256i __lasx_mxvsrain_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrain_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrain.b
Builtin: __builtin_lasx_mxvsrain_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3348
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrain.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lasx_mxvsrain_b(_1, _2) ((__m256i)__builtin_lasx_mxvsrain_b((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxvsrain_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrain_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrain.h
Builtin: __builtin_lasx_mxvsrain_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3347
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrain.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lasx_mxvsrain_h(_1, _2) ((__m256i)__builtin_lasx_mxvsrain_h((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxvsrain_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrain_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrain.w
Builtin: __builtin_lasx_mxvsrain_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3346
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrain.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lasx_mxvsrain_w(_1, _2) ((__m256i)__builtin_lasx_mxvsrain_w((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxvsrains_s_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrains_s_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrains.s.b
Builtin: __builtin_lasx_mxvsrains_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3351
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrains.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lasx_mxvsrains_s_b(_1, _2) ((__m256i)__builtin_lasx_mxvsrains_s_b((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxvsrains_s_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrains_s_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrains.s.h
Builtin: __builtin_lasx_mxvsrains_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3350
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrains.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lasx_mxvsrains_s_h(_1, _2) ((__m256i)__builtin_lasx_mxvsrains_s_h((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxvsrains_s_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrains_s_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrains.s.w
Builtin: __builtin_lasx_mxvsrains_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3349
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrains.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lasx_mxvsrains_s_w(_1, _2) ((__m256i)__builtin_lasx_mxvsrains_s_w((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxvsrains_u_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrains_u_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrains.u.b
Builtin: __builtin_lasx_mxvsrains_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3354
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrains.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lasx_mxvsrains_u_b(_1, _2) ((__m256i)__builtin_lasx_mxvsrains_u_b((v16u16)(_1), (_2)))
```

## __m256i __lasx_mxvsrains_u_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrains_u_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrains.u.h
Builtin: __builtin_lasx_mxvsrains_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3353
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrains.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lasx_mxvsrains_u_h(_1, _2) ((__m256i)__builtin_lasx_mxvsrains_u_h((v8u32)(_1), (_2)))
```

## __m256i __lasx_mxvsrains_u_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrains_u_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrains.u.w
Builtin: __builtin_lasx_mxvsrains_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3352
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrains.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lasx_mxvsrains_u_w(_1, _2) ((__m256i)__builtin_lasx_mxvsrains_u_w((v4u64)(_1), (_2)))
```

## __m256i __lasx_mxvsran_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsran_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsran.b
Builtin: __builtin_lasx_mxvsran_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3298
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsran.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsran_b((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvsran_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsran_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsran.h
Builtin: __builtin_lasx_mxvsran_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3291
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsran.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsran_h((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvsran_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsran_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsran.w
Builtin: __builtin_lasx_mxvsran_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3284
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsran.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsran_w((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvsrans_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrans_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrans.s.b
Builtin: __builtin_lasx_mxvsrans_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3319
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrans.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrans_s_b((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvsrans_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrans_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrans.s.h
Builtin: __builtin_lasx_mxvsrans_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3312
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrans.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrans_s_h((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvsrans_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrans_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrans.s.w
Builtin: __builtin_lasx_mxvsrans_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3305
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrans.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrans_s_w((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvsrans_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrans_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrans.u.b
Builtin: __builtin_lasx_mxvsrans_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3340
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrans.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrans_u_b((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxvsrans_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrans_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrans.u.h
Builtin: __builtin_lasx_mxvsrans_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3333
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrans.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrans_u_h((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxvsrans_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrans_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrans.u.w
Builtin: __builtin_lasx_mxvsrans_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3326
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrans.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrans_u_w((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxvsrarin_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrarin_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarin.b
Builtin: __builtin_lasx_mxvsrarin_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3420
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarin.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrarin_b(_1, _2) ((__m256i)__builtin_lasx_mxvsrarin_b((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxvsrarin_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrarin_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarin.h
Builtin: __builtin_lasx_mxvsrarin_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3419
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarin.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrarin_h(_1, _2) ((__m256i)__builtin_lasx_mxvsrarin_h((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxvsrarin_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrarin_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarin.w
Builtin: __builtin_lasx_mxvsrarin_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3418
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarin.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrarin_w(_1, _2) ((__m256i)__builtin_lasx_mxvsrarin_w((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxvsrarins_s_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrarins_s_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarins.s.b
Builtin: __builtin_lasx_mxvsrarins_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3423
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarins.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrarins_s_b(_1, _2) ((__m256i)__builtin_lasx_mxvsrarins_s_b((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxvsrarins_s_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrarins_s_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarins.s.h
Builtin: __builtin_lasx_mxvsrarins_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3422
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarins.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrarins_s_h(_1, _2) ((__m256i)__builtin_lasx_mxvsrarins_s_h((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxvsrarins_s_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrarins_s_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarins.s.w
Builtin: __builtin_lasx_mxvsrarins_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3421
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarins.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrarins_s_w(_1, _2) ((__m256i)__builtin_lasx_mxvsrarins_s_w((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxvsrarins_u_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrarins_u_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarins.u.b
Builtin: __builtin_lasx_mxvsrarins_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3426
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarins.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrarins_u_b(_1, _2) ((__m256i)__builtin_lasx_mxvsrarins_u_b((v16u16)(_1), (_2)))
```

## __m256i __lasx_mxvsrarins_u_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrarins_u_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarins.u.h
Builtin: __builtin_lasx_mxvsrarins_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3425
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarins.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrarins_u_h(_1, _2) ((__m256i)__builtin_lasx_mxvsrarins_u_h((v8u32)(_1), (_2)))
```

## __m256i __lasx_mxvsrarins_u_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrarins_u_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarins.u.w
Builtin: __builtin_lasx_mxvsrarins_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3424
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarins.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrarins_u_w(_1, _2) ((__m256i)__builtin_lasx_mxvsrarins_u_w((v4u64)(_1), (_2)))
```

## __m256i __lasx_mxvsrarn_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrarn_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarn.b
Builtin: __builtin_lasx_mxvsrarn_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3370
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarn.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarn_b((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvsrarn_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrarn_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarn.h
Builtin: __builtin_lasx_mxvsrarn_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3363
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarn.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarn_h((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvsrarn_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrarn_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarn.w
Builtin: __builtin_lasx_mxvsrarn_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3356
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarn.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarn_w((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvsrarns_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrarns_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarns.s.b
Builtin: __builtin_lasx_mxvsrarns_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3391
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarns.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarns_s_b((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvsrarns_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrarns_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarns.s.h
Builtin: __builtin_lasx_mxvsrarns_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3384
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarns.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarns_s_h((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvsrarns_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrarns_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarns.s.w
Builtin: __builtin_lasx_mxvsrarns_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3377
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarns.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarns_s_w((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvsrarns_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrarns_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarns.u.b
Builtin: __builtin_lasx_mxvsrarns_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3412
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarns.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarns_u_b((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxvsrarns_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrarns_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarns.u.h
Builtin: __builtin_lasx_mxvsrarns_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3405
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarns.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarns_u_h((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxvsrarns_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrarns_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrarns.u.w
Builtin: __builtin_lasx_mxvsrarns_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3398
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrarns.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarns_u_w((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxvsrlin_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrlin_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlin.b
Builtin: __builtin_lasx_mxvsrlin_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3471
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlin.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i], imm));
```

### Header Mapping

```c
#define __lasx_mxvsrlin_b(_1, _2) ((__m256i)__builtin_lasx_mxvsrlin_b((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxvsrlin_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrlin_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlin.h
Builtin: __builtin_lasx_mxvsrlin_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3470
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlin.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i], imm));
```

### Header Mapping

```c
#define __lasx_mxvsrlin_h(_1, _2) ((__m256i)__builtin_lasx_mxvsrlin_h((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxvsrlin_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrlin_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlin.w
Builtin: __builtin_lasx_mxvsrlin_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3469
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlin.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i], imm));
```

### Header Mapping

```c
#define __lasx_mxvsrlin_w(_1, _2) ((__m256i)__builtin_lasx_mxvsrlin_w((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxvsrlins_u_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrlins_u_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlins.u.b
Builtin: __builtin_lasx_mxvsrlins_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3474
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlins.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i], imm));
```

### Header Mapping

```c
#define __lasx_mxvsrlins_u_b(_1, _2) ((__m256i)__builtin_lasx_mxvsrlins_u_b((v16u16)(_1), (_2)))
```

## __m256i __lasx_mxvsrlins_u_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrlins_u_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlins.u.h
Builtin: __builtin_lasx_mxvsrlins_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3473
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlins.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i], imm));
```

### Header Mapping

```c
#define __lasx_mxvsrlins_u_h(_1, _2) ((__m256i)__builtin_lasx_mxvsrlins_u_h((v8u32)(_1), (_2)))
```

## __m256i __lasx_mxvsrlins_u_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrlins_u_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlins.u.w
Builtin: __builtin_lasx_mxvsrlins_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3472
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlins.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i], imm));
```

### Header Mapping

```c
#define __lasx_mxvsrlins_u_w(_1, _2) ((__m256i)__builtin_lasx_mxvsrlins_u_w((v4u64)(_1), (_2)))
```

## __m256i __lasx_mxvsrln_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrln_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrln.b
Builtin: __builtin_lasx_mxvsrln_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3442
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrln.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i], b.byte[i] & 7));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrln_b((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvsrln_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrln_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrln.h
Builtin: __builtin_lasx_mxvsrln_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3435
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrln.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i], b.half[i] & 15));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrln_h((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvsrln_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrln_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrln.w
Builtin: __builtin_lasx_mxvsrln_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3428
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrln.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i], b.word[i] & 31));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrln_w((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvsrlns_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrlns_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlns.u.b
Builtin: __builtin_lasx_mxvsrlns_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3463
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlns.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i], b.byte[i] & 7));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlns_u_b((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxvsrlns_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrlns_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlns.u.h
Builtin: __builtin_lasx_mxvsrlns_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3456
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlns.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i], b.half[i] & 15));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlns_u_h((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxvsrlns_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrlns_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlns.u.w
Builtin: __builtin_lasx_mxvsrlns_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3449
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlns.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i], b.word[i] & 31));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlns_u_w((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxvsrlrin_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrlrin_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrin.b
Builtin: __builtin_lasx_mxvsrlrin_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3519
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlrin.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrlrin_b(_1, _2) ((__m256i)__builtin_lasx_mxvsrlrin_b((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxvsrlrin_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrlrin_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrin.h
Builtin: __builtin_lasx_mxvsrlrin_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3518
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlrin.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrlrin_h(_1, _2) ((__m256i)__builtin_lasx_mxvsrlrin_h((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxvsrlrin_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrlrin_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrin.w
Builtin: __builtin_lasx_mxvsrlrin_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3517
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlrin.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrlrin_w(_1, _2) ((__m256i)__builtin_lasx_mxvsrlrin_w((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxvsrlrins_u_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrlrins_u_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrins.u.b
Builtin: __builtin_lasx_mxvsrlrins_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3522
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlrins.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrlrins_u_b(_1, _2) ((__m256i)__builtin_lasx_mxvsrlrins_u_b((v16u16)(_1), (_2)))
```

## __m256i __lasx_mxvsrlrins_u_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrlrins_u_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrins.u.h
Builtin: __builtin_lasx_mxvsrlrins_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3521
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlrins.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrlrins_u_h(_1, _2) ((__m256i)__builtin_lasx_mxvsrlrins_u_h((v8u32)(_1), (_2)))
```

## __m256i __lasx_mxvsrlrins_u_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvsrlrins_u_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrins.u.w
Builtin: __builtin_lasx_mxvsrlrins_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3520
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlrins.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lasx_mxvsrlrins_u_w(_1, _2) ((__m256i)__builtin_lasx_mxvsrlrins_u_w((v4u64)(_1), (_2)))
```

## __m256i __lasx_mxvsrlrn_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrlrn_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrn.b
Builtin: __builtin_lasx_mxvsrlrn_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3490
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlrn.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlrn_b((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvsrlrn_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrlrn_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrn.h
Builtin: __builtin_lasx_mxvsrlrn_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3483
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlrn.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlrn_h((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvsrlrn_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrlrn_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrn.w
Builtin: __builtin_lasx_mxvsrlrn_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3476
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlrn.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlrn_w((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvsrlrns_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrlrns_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrns.u.b
Builtin: __builtin_lasx_mxvsrlrns_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3511
```

### Description

Shift or rotate 32 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlrns.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlrns_u_b((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxvsrlrns_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrlrns_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrns.u.h
Builtin: __builtin_lasx_mxvsrlrns_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3504
```

### Description

Shift or rotate 16 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlrns.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlrns_u_h((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxvsrlrns_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsrlrns_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrns.u.w
Builtin: __builtin_lasx_mxvsrlrns_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3497
```

### Description

Shift or rotate 8 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsrlrns.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlrns_u_w((v4u64)_1, (v4u64)_2);
```

