# Permutation

Generated from `include/loongson-sxintrin.h`. This page contains 19 intrinsics.

## __m128i __lsx_shf_d (__m128i _1, __m128i _2, unsigned int _3)

### Synopsis

```c
__m128i __lsx_shf_d (__m128i _1, __m128i _2, unsigned int _3)
#include <loongson-sxintrin.h>
Instruction: shf.d
Builtin: __builtin_lsx_shf_d
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:894
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for shf.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..1:
  control = shuffle_control(imm_or_vector, i);
  dst.dword[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
#define __lsx_shf_d(_1, _2, _3) ((__m128i)__builtin_lsx_shf_d((v2i64)(_1), (v2i64)(_2), (_3)))
```

## __m128i __lsx_vextr_v (__m128i _1, __m128i _2, unsigned char _3)

### Synopsis

```c
__m128i __lsx_vextr_v (__m128i _1, __m128i _2, unsigned char _3)
#include <loongson-sxintrin.h>
Instruction: vextr.v
Builtin: __builtin_lsx_vextr_v
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:908
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vextr.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
b = _2;
imm = _3;
dst = concatenate_extract(a, b, byte_or_lane_offset_from_imm);
```

### Header Mapping

```c
#define __lsx_vextr_v(_1, _2, _3) ((__m128i)__builtin_lsx_vextr_v((v16i8)(_1), (v16i8)(_2), (_3)))
```

## __m128i __lsx_vextrins_b (__m128i _1, __m128i _2, unsigned char _3, unsigned char _4)

### Synopsis

```c
__m128i __lsx_vextrins_b (__m128i _1, __m128i _2, unsigned char _3, unsigned char _4)
#include <loongson-sxintrin.h>
Instruction: vextrins.b
Builtin: __builtin_lsx_vextrins_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:907
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vextrins.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
imm = _4;
dst = a;
dst.byte[destination_index_from_imm] = b.byte[source_index_from_imm];
```

### Header Mapping

```c
#define __lsx_vextrins_b(_1, _2, _3, _4) ((__m128i)__builtin_lsx_vextrins_b((v16i8)(_1), (v16i8)(_2), (_3), (_4)))
```

## __m128i __lsx_vextrins_d (__m128i _1, __m128i _2, unsigned char _3, unsigned char _4)

### Synopsis

```c
__m128i __lsx_vextrins_d (__m128i _1, __m128i _2, unsigned char _3, unsigned char _4)
#include <loongson-sxintrin.h>
Instruction: vextrins.d
Builtin: __builtin_lsx_vextrins_d
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:904
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vextrins.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
imm = _3;
imm = _4;
dst = a;
dst.dword[destination_index_from_imm] = b.dword[source_index_from_imm];
```

### Header Mapping

```c
#define __lsx_vextrins_d(_1, _2, _3, _4) ((__m128i)__builtin_lsx_vextrins_d((v2i64)(_1), (v2i64)(_2), (_3), (_4)))
```

## __m128i __lsx_vextrins_h (__m128i _1, __m128i _2, unsigned char _3, unsigned char _4)

### Synopsis

```c
__m128i __lsx_vextrins_h (__m128i _1, __m128i _2, unsigned char _3, unsigned char _4)
#include <loongson-sxintrin.h>
Instruction: vextrins.h
Builtin: __builtin_lsx_vextrins_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:906
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vextrins.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
imm = _4;
dst = a;
dst.half[destination_index_from_imm] = b.half[source_index_from_imm];
```

### Header Mapping

```c
#define __lsx_vextrins_h(_1, _2, _3, _4) ((__m128i)__builtin_lsx_vextrins_h((v8i16)(_1), (v8i16)(_2), (_3), (_4)))
```

## __m128i __lsx_vextrins_w (__m128i _1, __m128i _2, unsigned char _3, unsigned char _4)

### Synopsis

```c
__m128i __lsx_vextrins_w (__m128i _1, __m128i _2, unsigned char _3, unsigned char _4)
#include <loongson-sxintrin.h>
Instruction: vextrins.w
Builtin: __builtin_lsx_vextrins_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:905
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vextrins.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
imm = _3;
imm = _4;
dst = a;
dst.word[destination_index_from_imm] = b.word[source_index_from_imm];
```

### Header Mapping

```c
#define __lsx_vextrins_w(_1, _2, _3, _4) ((__m128i)__builtin_lsx_vextrins_w((v4i32)(_1), (v4i32)(_2), (_3), (_4)))
```

## __m128i __lsx_vperml_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vperml_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vperml.d
Builtin: __builtin_lsx_vperml_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1397
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vperml.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vperml_d((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vperml_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vperml_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vperml.w
Builtin: __builtin_lsx_vperml_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1404
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vperml.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vperml_w((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vsel_d (__m128i _1, __m128i _2, unsigned int _3)

### Synopsis

```c
__m128i __lsx_vsel_d (__m128i _1, __m128i _2, unsigned int _3)
#include <loongson-sxintrin.h>
Instruction: vsel.d
Builtin: __builtin_lsx_vsel_d
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:909
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsel.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..1:
  dst.dword[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lsx_vsel_d(_1, _2, _3) ((__m128i)__builtin_lsx_vsel_d((v2i64)(_1), (v2i64)(_2), (_3)))
```

## __m128i __lsx_vsel_h (__m128i _1, __m128i _2, unsigned int _3)

### Synopsis

```c
__m128i __lsx_vsel_h (__m128i _1, __m128i _2, unsigned int _3)
#include <loongson-sxintrin.h>
Instruction: vsel.h
Builtin: __builtin_lsx_vsel_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:911
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsel.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..7:
  dst.half[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lsx_vsel_h(_1, _2, _3) ((__m128i)__builtin_lsx_vsel_h((v8i16)(_1), (v8i16)(_2), (_3)))
```

## __m128i __lsx_vsel_w (__m128i _1, __m128i _2, unsigned int _3)

### Synopsis

```c
__m128i __lsx_vsel_w (__m128i _1, __m128i _2, unsigned int _3)
#include <loongson-sxintrin.h>
Instruction: vsel.w
Builtin: __builtin_lsx_vsel_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:910
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsel.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..3:
  dst.word[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lsx_vsel_w(_1, _2, _3) ((__m128i)__builtin_lsx_vsel_w((v4i32)(_1), (v4i32)(_2), (_3)))
```

## __m128i __lsx_vselr_d (__m128i _1, __m128i _2, __m128i _3)

### Synopsis

```c
__m128i __lsx_vselr_d (__m128i _1, __m128i _2, __m128i _3)
#include <loongson-sxintrin.h>
Instruction: vselr.d
Builtin: __builtin_lsx_vselr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1383
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vselr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..1:
  dst.dword[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vselr_d((v2i64)_1, (v2i64)_2, (v2i64)_3);
```

## __m128i __lsx_vselr_w (__m128i _1, __m128i _2, __m128i _3)

### Synopsis

```c
__m128i __lsx_vselr_w (__m128i _1, __m128i _2, __m128i _3)
#include <loongson-sxintrin.h>
Instruction: vselr.w
Builtin: __builtin_lsx_vselr_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1390
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vselr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.word[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vselr_w((v4i32)_1, (v4i32)_2, (v4i32)_3);
```

## __m128i __lsx_vshufil_h (__m128i _1, __m128i _2, unsigned int _3)

### Synopsis

```c
__m128i __lsx_vshufil_h (__m128i _1, __m128i _2, unsigned int _3)
#include <loongson-sxintrin.h>
Instruction: vshufil.h
Builtin: __builtin_lsx_vshufil_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:900
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vshufil.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..7:
  dst.half[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lsx_vshufil_h(_1, _2, _3) ((__m128i)__builtin_lsx_vshufil_h((v8i16)(_1), (v8i16)(_2), (_3)))
```

## __m128i __lsx_vshufill_b (__m128i _1, __m128i _2, unsigned int _3)

### Synopsis

```c
__m128i __lsx_vshufill_b (__m128i _1, __m128i _2, unsigned int _3)
#include <loongson-sxintrin.h>
Instruction: vshufill.b
Builtin: __builtin_lsx_vshufill_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:898
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vshufill.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
selected = a.byte[imm_or_zero];
for i in 0..15:
  dst.byte[i] = selected;
```

### Header Mapping

```c
#define __lsx_vshufill_b(_1, _2, _3) ((__m128i)__builtin_lsx_vshufill_b((v16i8)(_1), (v16i8)(_2), (_3)))
```

## __m128i __lsx_vshufilr_b (__m128i _1, __m128i _2, unsigned int _3)

### Synopsis

```c
__m128i __lsx_vshufilr_b (__m128i _1, __m128i _2, unsigned int _3)
#include <loongson-sxintrin.h>
Instruction: vshufilr.b
Builtin: __builtin_lsx_vshufilr_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:897
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vshufilr.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..15:
  dst.byte[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lsx_vshufilr_b(_1, _2, _3) ((__m128i)__builtin_lsx_vshufilr_b((v16i8)(_1), (v16i8)(_2), (_3)))
```

## __m128i __lsx_vshufir_h (__m128i _1, __m128i _2, unsigned int _3)

### Synopsis

```c
__m128i __lsx_vshufir_h (__m128i _1, __m128i _2, unsigned int _3)
#include <loongson-sxintrin.h>
Instruction: vshufir.h
Builtin: __builtin_lsx_vshufir_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:899
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vshufir.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..7:
  dst.half[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lsx_vshufir_h(_1, _2, _3) ((__m128i)__builtin_lsx_vshufir_h((v8i16)(_1), (v8i16)(_2), (_3)))
```

## __m128i __lsx_vshufirl_b (__m128i _1, __m128i _2, unsigned int _3)

### Synopsis

```c
__m128i __lsx_vshufirl_b (__m128i _1, __m128i _2, unsigned int _3)
#include <loongson-sxintrin.h>
Instruction: vshufirl.b
Builtin: __builtin_lsx_vshufirl_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:896
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vshufirl.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..15:
  dst.byte[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lsx_vshufirl_b(_1, _2, _3) ((__m128i)__builtin_lsx_vshufirl_b((v16i8)(_1), (v16i8)(_2), (_3)))
```

## __m128i __lsx_vshufirr_b (__m128i _1, __m128i _2, unsigned int _3)

### Synopsis

```c
__m128i __lsx_vshufirr_b (__m128i _1, __m128i _2, unsigned int _3)
#include <loongson-sxintrin.h>
Instruction: vshufirr.b
Builtin: __builtin_lsx_vshufirr_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:895
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vshufirr.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..15:
  dst.byte[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lsx_vshufirr_b(_1, _2, _3) ((__m128i)__builtin_lsx_vshufirr_b((v16i8)(_1), (v16i8)(_2), (_3)))
```

