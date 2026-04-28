# Shift

Generated from `include/loongson-sxintrin.h`. This page contains 72 intrinsics.

## __m128i __lsx_vbsll_v (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vbsll_v (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vbsll.v
Builtin: __builtin_lsx_vbsll_v
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:903
```

### Description

Shift or rotate vector lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vbsll.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
imm = _2;
dst.bytes = byte_shift_left(a.bytes, imm);
```

### Header Mapping

```c
#define __lsx_vbsll_v(_1, _2) ((__m128i)__builtin_lsx_vbsll_v((v16i8)(_1), (_2)))
```

## __m128i __lsx_vbsrl_v (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vbsrl_v (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vbsrl.v
Builtin: __builtin_lsx_vbsrl_v
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:902
```

### Description

Shift or rotate vector lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vbsrl.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
imm = _2;
dst.bytes = byte_shift_right(a.bytes, imm);
```

### Header Mapping

```c
#define __lsx_vbsrl_v(_1, _2) ((__m128i)__builtin_lsx_vbsrl_v((v16i8)(_1), (_2)))
```

## __m128i __lsx_vrorsigni_b (__m128i _1, __m128i _2, unsigned char _3)

### Synopsis

```c
__m128i __lsx_vrorsigni_b (__m128i _1, __m128i _2, unsigned char _3)
#include <loongson-sxintrin.h>
Instruction: vrorsigni.b
Builtin: __builtin_lsx_vrorsigni_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:806
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vrorsigni.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __lsx_vrorsigni_b(_1, _2, _3) ((__m128i)__builtin_lsx_vrorsigni_b((v16i8)(_1), (v16i8)(_2), (_3)))
```

## __m128i __lsx_vrorsigni_h (__m128i _1, __m128i _2, unsigned char _3)

### Synopsis

```c
__m128i __lsx_vrorsigni_h (__m128i _1, __m128i _2, unsigned char _3)
#include <loongson-sxintrin.h>
Instruction: vrorsigni.h
Builtin: __builtin_lsx_vrorsigni_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:805
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vrorsigni.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __lsx_vrorsigni_h(_1, _2, _3) ((__m128i)__builtin_lsx_vrorsigni_h((v8i16)(_1), (v8i16)(_2), (_3)))
```

## __m128i __lsx_vrorsignv_b (__m128i _1, __m128i _2, __m128i _3)

### Synopsis

```c
__m128i __lsx_vrorsignv_b (__m128i _1, __m128i _2, __m128i _3)
#include <loongson-sxintrin.h>
Instruction: vrorsignv.b
Builtin: __builtin_lsx_vrorsignv_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:817
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vrorsignv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
c = _3;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vrorsignv_b((v16i8)_1, (v16i8)_2, (v16i8)_3);
```

## __m128i __lsx_vrorsignv_h (__m128i _1, __m128i _2, __m128i _3)

### Synopsis

```c
__m128i __lsx_vrorsignv_h (__m128i _1, __m128i _2, __m128i _3)
#include <loongson-sxintrin.h>
Instruction: vrorsignv.h
Builtin: __builtin_lsx_vrorsignv_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:810
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vrorsignv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vrorsignv_h((v8i16)_1, (v8i16)_2, (v8i16)_3);
```

## __m128i __lsx_vsllix_s_d (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsllix_s_d (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsllix.s.d
Builtin: __builtin_lsx_vsllix_s_d
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:538
```

### Description

Shift or rotate 2 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsllix.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] << imm;
```

### Header Mapping

```c
#define __lsx_vsllix_s_d(_1, _2) ((__m128i)__builtin_lsx_vsllix_s_d((v4i32)(_1), (_2)))
```

## __m128i __lsx_vsllix_s_h (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsllix_s_h (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsllix.s.h
Builtin: __builtin_lsx_vsllix_s_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:540
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsllix.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.half[i] = a.half[i] << imm;
```

### Header Mapping

```c
#define __lsx_vsllix_s_h(_1, _2) ((__m128i)__builtin_lsx_vsllix_s_h((v16i8)(_1), (_2)))
```

## __m128i __lsx_vsllix_s_w (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsllix_s_w (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsllix.s.w
Builtin: __builtin_lsx_vsllix_s_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:539
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsllix.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.word[i] = a.word[i] << imm;
```

### Header Mapping

```c
#define __lsx_vsllix_s_w(_1, _2) ((__m128i)__builtin_lsx_vsllix_s_w((v8i16)(_1), (_2)))
```

## __m128i __lsx_vsllix_u_d (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsllix_u_d (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsllix.u.d
Builtin: __builtin_lsx_vsllix_u_d
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:541
```

### Description

Shift or rotate 2 x 64-bit dword lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsllix.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] << imm;
```

### Header Mapping

```c
#define __lsx_vsllix_u_d(_1, _2) ((__m128i)__builtin_lsx_vsllix_u_d((v4u32)(_1), (_2)))
```

## __m128i __lsx_vsllix_u_h (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsllix_u_h (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsllix.u.h
Builtin: __builtin_lsx_vsllix_u_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:543
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsllix.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.half[i] = a.half[i] << imm;
```

### Header Mapping

```c
#define __lsx_vsllix_u_h(_1, _2) ((__m128i)__builtin_lsx_vsllix_u_h((v16u8)(_1), (_2)))
```

## __m128i __lsx_vsllix_u_w (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsllix_u_w (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsllix.u.w
Builtin: __builtin_lsx_vsllix_u_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:542
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsllix.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.word[i] = a.word[i] << imm;
```

### Header Mapping

```c
#define __lsx_vsllix_u_w(_1, _2) ((__m128i)__builtin_lsx_vsllix_u_w((v8u16)(_1), (_2)))
```

## __m128i __lsx_vsrain_b (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrain_b (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrain.b
Builtin: __builtin_lsx_vsrain_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:609
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrain.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lsx_vsrain_b(_1, _2) ((__m128i)__builtin_lsx_vsrain_b((v8i16)(_1), (_2)))
```

## __m128i __lsx_vsrain_h (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrain_h (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrain.h
Builtin: __builtin_lsx_vsrain_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:608
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrain.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lsx_vsrain_h(_1, _2) ((__m128i)__builtin_lsx_vsrain_h((v4i32)(_1), (_2)))
```

## __m128i __lsx_vsrain_w (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrain_w (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrain.w
Builtin: __builtin_lsx_vsrain_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:607
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrain.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lsx_vsrain_w(_1, _2) ((__m128i)__builtin_lsx_vsrain_w((v2i64)(_1), (_2)))
```

## __m128i __lsx_vsrains_s_b (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrains_s_b (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrains.s.b
Builtin: __builtin_lsx_vsrains_s_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:612
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrains.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lsx_vsrains_s_b(_1, _2) ((__m128i)__builtin_lsx_vsrains_s_b((v8i16)(_1), (_2)))
```

## __m128i __lsx_vsrains_s_h (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrains_s_h (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrains.s.h
Builtin: __builtin_lsx_vsrains_s_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:611
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrains.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lsx_vsrains_s_h(_1, _2) ((__m128i)__builtin_lsx_vsrains_s_h((v4i32)(_1), (_2)))
```

## __m128i __lsx_vsrains_s_w (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrains_s_w (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrains.s.w
Builtin: __builtin_lsx_vsrains_s_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:610
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrains.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lsx_vsrains_s_w(_1, _2) ((__m128i)__builtin_lsx_vsrains_s_w((v2i64)(_1), (_2)))
```

## __m128i __lsx_vsrains_u_b (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrains_u_b (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrains.u.b
Builtin: __builtin_lsx_vsrains_u_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:615
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrains.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lsx_vsrains_u_b(_1, _2) ((__m128i)__builtin_lsx_vsrains_u_b((v8u16)(_1), (_2)))
```

## __m128i __lsx_vsrains_u_h (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrains_u_h (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrains.u.h
Builtin: __builtin_lsx_vsrains_u_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:614
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrains.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lsx_vsrains_u_h(_1, _2) ((__m128i)__builtin_lsx_vsrains_u_h((v4u32)(_1), (_2)))
```

## __m128i __lsx_vsrains_u_w (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrains_u_w (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrains.u.w
Builtin: __builtin_lsx_vsrains_u_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:613
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrains.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (_2 - 1)), _2));
```

### Header Mapping

```c
#define __lsx_vsrains_u_w(_1, _2) ((__m128i)__builtin_lsx_vsrains_u_w((v2u64)(_1), (_2)))
```

## __m128i __lsx_vsran_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsran_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsran.b
Builtin: __builtin_lsx_vsran_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:559
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsran.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsran_b((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vsran_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsran_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsran.h
Builtin: __builtin_lsx_vsran_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:552
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsran.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsran_h((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vsran_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsran_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsran.w
Builtin: __builtin_lsx_vsran_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:545
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsran.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsran_w((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vsrans_s_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrans_s_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrans.s.b
Builtin: __builtin_lsx_vsrans_s_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:580
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrans.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrans_s_b((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vsrans_s_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrans_s_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrans.s.h
Builtin: __builtin_lsx_vsrans_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:573
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrans.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrans_s_h((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vsrans_s_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrans_s_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrans.s.w
Builtin: __builtin_lsx_vsrans_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:566
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrans.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrans_s_w((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vsrans_u_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrans_u_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrans.u.b
Builtin: __builtin_lsx_vsrans_u_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:601
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrans.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrans_u_b((v8u16)_1, (v8u16)_2);
```

## __m128i __lsx_vsrans_u_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrans_u_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrans.u.h
Builtin: __builtin_lsx_vsrans_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:594
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrans.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrans_u_h((v4u32)_1, (v4u32)_2);
```

## __m128i __lsx_vsrans_u_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrans_u_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrans.u.w
Builtin: __builtin_lsx_vsrans_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:587
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrans.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrans_u_w((v2u64)_1, (v2u64)_2);
```

## __m128i __lsx_vsrarin_b (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrarin_b (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrarin.b
Builtin: __builtin_lsx_vsrarin_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:681
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarin.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrarin_b(_1, _2) ((__m128i)__builtin_lsx_vsrarin_b((v8i16)(_1), (_2)))
```

## __m128i __lsx_vsrarin_h (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrarin_h (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrarin.h
Builtin: __builtin_lsx_vsrarin_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:680
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarin.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrarin_h(_1, _2) ((__m128i)__builtin_lsx_vsrarin_h((v4i32)(_1), (_2)))
```

## __m128i __lsx_vsrarin_w (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrarin_w (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrarin.w
Builtin: __builtin_lsx_vsrarin_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:679
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarin.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrarin_w(_1, _2) ((__m128i)__builtin_lsx_vsrarin_w((v2i64)(_1), (_2)))
```

## __m128i __lsx_vsrarins_s_b (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrarins_s_b (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrarins.s.b
Builtin: __builtin_lsx_vsrarins_s_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:684
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarins.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrarins_s_b(_1, _2) ((__m128i)__builtin_lsx_vsrarins_s_b((v8i16)(_1), (_2)))
```

## __m128i __lsx_vsrarins_s_h (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrarins_s_h (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrarins.s.h
Builtin: __builtin_lsx_vsrarins_s_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:683
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarins.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrarins_s_h(_1, _2) ((__m128i)__builtin_lsx_vsrarins_s_h((v4i32)(_1), (_2)))
```

## __m128i __lsx_vsrarins_s_w (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrarins_s_w (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrarins.s.w
Builtin: __builtin_lsx_vsrarins_s_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:682
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarins.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrarins_s_w(_1, _2) ((__m128i)__builtin_lsx_vsrarins_s_w((v2i64)(_1), (_2)))
```

## __m128i __lsx_vsrarins_u_b (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrarins_u_b (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrarins.u.b
Builtin: __builtin_lsx_vsrarins_u_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:687
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarins.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrarins_u_b(_1, _2) ((__m128i)__builtin_lsx_vsrarins_u_b((v8u16)(_1), (_2)))
```

## __m128i __lsx_vsrarins_u_h (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrarins_u_h (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrarins.u.h
Builtin: __builtin_lsx_vsrarins_u_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:686
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarins.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrarins_u_h(_1, _2) ((__m128i)__builtin_lsx_vsrarins_u_h((v4u32)(_1), (_2)))
```

## __m128i __lsx_vsrarins_u_w (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrarins_u_w (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrarins.u.w
Builtin: __builtin_lsx_vsrarins_u_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:685
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarins.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrarins_u_w(_1, _2) ((__m128i)__builtin_lsx_vsrarins_u_w((v2u64)(_1), (_2)))
```

## __m128i __lsx_vsrarn_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrarn_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrarn.b
Builtin: __builtin_lsx_vsrarn_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:631
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarn.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarn_b((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vsrarn_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrarn_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrarn.h
Builtin: __builtin_lsx_vsrarn_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:624
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarn.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarn_h((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vsrarn_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrarn_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrarn.w
Builtin: __builtin_lsx_vsrarn_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:617
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarn.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarn_w((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vsrarns_s_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrarns_s_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrarns.s.b
Builtin: __builtin_lsx_vsrarns_s_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:652
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarns.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarns_s_b((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vsrarns_s_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrarns_s_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrarns.s.h
Builtin: __builtin_lsx_vsrarns_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:645
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarns.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarns_s_h((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vsrarns_s_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrarns_s_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrarns.s.w
Builtin: __builtin_lsx_vsrarns_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:638
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarns.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarns_s_w((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vsrarns_u_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrarns_u_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrarns.u.b
Builtin: __builtin_lsx_vsrarns_u_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:673
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarns.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(arithmetic_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarns_u_b((v8u16)_1, (v8u16)_2);
```

## __m128i __lsx_vsrarns_u_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrarns_u_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrarns.u.h
Builtin: __builtin_lsx_vsrarns_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:666
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarns.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(arithmetic_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarns_u_h((v4u32)_1, (v4u32)_2);
```

## __m128i __lsx_vsrarns_u_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrarns_u_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrarns.u.w
Builtin: __builtin_lsx_vsrarns_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:659
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrarns.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(arithmetic_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarns_u_w((v2u64)_1, (v2u64)_2);
```

## __m128i __lsx_vsrlin_b (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrlin_b (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrlin.b
Builtin: __builtin_lsx_vsrlin_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:732
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlin.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i], imm));
```

### Header Mapping

```c
#define __lsx_vsrlin_b(_1, _2) ((__m128i)__builtin_lsx_vsrlin_b((v8i16)(_1), (_2)))
```

## __m128i __lsx_vsrlin_h (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrlin_h (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrlin.h
Builtin: __builtin_lsx_vsrlin_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:731
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlin.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i], imm));
```

### Header Mapping

```c
#define __lsx_vsrlin_h(_1, _2) ((__m128i)__builtin_lsx_vsrlin_h((v4i32)(_1), (_2)))
```

## __m128i __lsx_vsrlin_w (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrlin_w (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrlin.w
Builtin: __builtin_lsx_vsrlin_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:730
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlin.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i], imm));
```

### Header Mapping

```c
#define __lsx_vsrlin_w(_1, _2) ((__m128i)__builtin_lsx_vsrlin_w((v2i64)(_1), (_2)))
```

## __m128i __lsx_vsrlins_u_b (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrlins_u_b (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrlins.u.b
Builtin: __builtin_lsx_vsrlins_u_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:735
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlins.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i], imm));
```

### Header Mapping

```c
#define __lsx_vsrlins_u_b(_1, _2) ((__m128i)__builtin_lsx_vsrlins_u_b((v8u16)(_1), (_2)))
```

## __m128i __lsx_vsrlins_u_h (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrlins_u_h (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrlins.u.h
Builtin: __builtin_lsx_vsrlins_u_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:734
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlins.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i], imm));
```

### Header Mapping

```c
#define __lsx_vsrlins_u_h(_1, _2) ((__m128i)__builtin_lsx_vsrlins_u_h((v4u32)(_1), (_2)))
```

## __m128i __lsx_vsrlins_u_w (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrlins_u_w (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrlins.u.w
Builtin: __builtin_lsx_vsrlins_u_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:733
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlins.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i], imm));
```

### Header Mapping

```c
#define __lsx_vsrlins_u_w(_1, _2) ((__m128i)__builtin_lsx_vsrlins_u_w((v2u64)(_1), (_2)))
```

## __m128i __lsx_vsrln_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrln_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrln.b
Builtin: __builtin_lsx_vsrln_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:703
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrln.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i], b.byte[i] & 7));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrln_b((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vsrln_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrln_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrln.h
Builtin: __builtin_lsx_vsrln_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:696
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrln.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i], b.half[i] & 15));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrln_h((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vsrln_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrln_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrln.w
Builtin: __builtin_lsx_vsrln_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:689
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrln.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i], b.word[i] & 31));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrln_w((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vsrlns_u_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrlns_u_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrlns.u.b
Builtin: __builtin_lsx_vsrlns_u_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:724
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlns.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i], b.byte[i] & 7));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlns_u_b((v8u16)_1, (v8u16)_2);
```

## __m128i __lsx_vsrlns_u_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrlns_u_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrlns.u.h
Builtin: __builtin_lsx_vsrlns_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:717
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlns.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i], b.half[i] & 15));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlns_u_h((v4u32)_1, (v4u32)_2);
```

## __m128i __lsx_vsrlns_u_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrlns_u_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrlns.u.w
Builtin: __builtin_lsx_vsrlns_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:710
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlns.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i], b.word[i] & 31));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlns_u_w((v2u64)_1, (v2u64)_2);
```

## __m128i __lsx_vsrlrin_b (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrlrin_b (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrlrin.b
Builtin: __builtin_lsx_vsrlrin_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:780
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlrin.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrlrin_b(_1, _2) ((__m128i)__builtin_lsx_vsrlrin_b((v8i16)(_1), (_2)))
```

## __m128i __lsx_vsrlrin_h (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrlrin_h (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrlrin.h
Builtin: __builtin_lsx_vsrlrin_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:779
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlrin.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrlrin_h(_1, _2) ((__m128i)__builtin_lsx_vsrlrin_h((v4i32)(_1), (_2)))
```

## __m128i __lsx_vsrlrin_w (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrlrin_w (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrlrin.w
Builtin: __builtin_lsx_vsrlrin_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:778
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlrin.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrlrin_w(_1, _2) ((__m128i)__builtin_lsx_vsrlrin_w((v2i64)(_1), (_2)))
```

## __m128i __lsx_vsrlrins_u_b (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrlrins_u_b (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrlrins.u.b
Builtin: __builtin_lsx_vsrlrins_u_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:783
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlrins.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrlrins_u_b(_1, _2) ((__m128i)__builtin_lsx_vsrlrins_u_b((v8u16)(_1), (_2)))
```

## __m128i __lsx_vsrlrins_u_h (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrlrins_u_h (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrlrins.u.h
Builtin: __builtin_lsx_vsrlrins_u_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:782
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlrins.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrlrins_u_h(_1, _2) ((__m128i)__builtin_lsx_vsrlrins_u_h((v4u32)(_1), (_2)))
```

## __m128i __lsx_vsrlrins_u_w (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vsrlrins_u_w (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vsrlrins.u.w
Builtin: __builtin_lsx_vsrlrins_u_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:781
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlrins.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i] + (1 << (imm - 1)), imm));
```

### Header Mapping

```c
#define __lsx_vsrlrins_u_w(_1, _2) ((__m128i)__builtin_lsx_vsrlrins_u_w((v2u64)(_1), (_2)))
```

## __m128i __lsx_vsrlrn_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrlrn_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrlrn.b
Builtin: __builtin_lsx_vsrlrn_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:751
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlrn.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlrn_b((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vsrlrn_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrlrn_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrlrn.h
Builtin: __builtin_lsx_vsrlrn_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:744
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlrn.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlrn_h((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vsrlrn_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrlrn_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrlrn.w
Builtin: __builtin_lsx_vsrlrn_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:737
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlrn.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlrn_w((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vsrlrns_u_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrlrns_u_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrlrns.u.b
Builtin: __builtin_lsx_vsrlrns_u_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:772
```

### Description

Shift or rotate 16 x 8-bit byte lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlrns.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = saturate_or_truncate(logical_shift_right(a.byte[i] + (1 << (b.byte[i] & 7 - 1)), b.byte[i] & 7));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlrns_u_b((v8u16)_1, (v8u16)_2);
```

## __m128i __lsx_vsrlrns_u_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrlrns_u_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrlrns.u.h
Builtin: __builtin_lsx_vsrlrns_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:765
```

### Description

Shift or rotate 8 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlrns.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = saturate_or_truncate(logical_shift_right(a.half[i] + (1 << (b.half[i] & 15 - 1)), b.half[i] & 15));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlrns_u_h((v4u32)_1, (v4u32)_2);
```

## __m128i __lsx_vsrlrns_u_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsrlrns_u_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsrlrns.u.w
Builtin: __builtin_lsx_vsrlrns_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:758
```

### Description

Shift or rotate 4 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsrlrns.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = saturate_or_truncate(logical_shift_right(a.word[i] + (1 << (b.word[i] & 31 - 1)), b.word[i] & 31));
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlrns_u_w((v2u64)_1, (v2u64)_2);
```

