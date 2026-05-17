# Bitwise Operations

Generated from `include/loongson-sxintrin.h`. This page contains 20 intrinsics.

<span id="intrinsic-__lsx_vgetsign_b"></span>

## __m128i __lsx_vgetsign_b (__m128i a)

### Synopsis

```c
__m128i __lsx_vgetsign_b (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vgetsign.b
Builtin: __builtin_lsx_vgetsign_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:934
```

### Description

Return the sign bit of each u8 lane as a 0/1 value.

### Operation

```c
dst.u8[0] = sign_bit(a.u8[0]);
dst.u8[1] = sign_bit(a.u8[1]);
dst.u8[2] = sign_bit(a.u8[2]);
dst.u8[3] = sign_bit(a.u8[3]);
dst.u8[4] = sign_bit(a.u8[4]);
dst.u8[5] = sign_bit(a.u8[5]);
dst.u8[6] = sign_bit(a.u8[6]);
dst.u8[7] = sign_bit(a.u8[7]);
dst.u8[8] = sign_bit(a.u8[8]);
dst.u8[9] = sign_bit(a.u8[9]);
dst.u8[10] = sign_bit(a.u8[10]);
dst.u8[11] = sign_bit(a.u8[11]);
dst.u8[12] = sign_bit(a.u8[12]);
dst.u8[13] = sign_bit(a.u8[13]);
dst.u8[14] = sign_bit(a.u8[14]);
dst.u8[15] = sign_bit(a.u8[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vgetsign_b((v16i8)a);
```

<span id="intrinsic-__lsx_vgetsign_d"></span>

## __m128i __lsx_vgetsign_d (__m128i a)

### Synopsis

```c
__m128i __lsx_vgetsign_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vgetsign.d
Builtin: __builtin_lsx_vgetsign_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:913
```

### Description

Return the sign bit of each u64 lane as a 0/1 value.

### Operation

```c
dst.u64[0] = sign_bit(a.u64[0]);
dst.u64[1] = sign_bit(a.u64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vgetsign_d((v2i64)a);
```

<span id="intrinsic-__lsx_vgetsign_h"></span>

## __m128i __lsx_vgetsign_h (__m128i a)

### Synopsis

```c
__m128i __lsx_vgetsign_h (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vgetsign.h
Builtin: __builtin_lsx_vgetsign_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:927
```

### Description

Return the sign bit of each u16 lane as a 0/1 value.

### Operation

```c
dst.u16[0] = sign_bit(a.u16[0]);
dst.u16[1] = sign_bit(a.u16[1]);
dst.u16[2] = sign_bit(a.u16[2]);
dst.u16[3] = sign_bit(a.u16[3]);
dst.u16[4] = sign_bit(a.u16[4]);
dst.u16[5] = sign_bit(a.u16[5]);
dst.u16[6] = sign_bit(a.u16[6]);
dst.u16[7] = sign_bit(a.u16[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vgetsign_h((v8i16)a);
```

<span id="intrinsic-__lsx_vgetsign_w"></span>

## __m128i __lsx_vgetsign_w (__m128i a)

### Synopsis

```c
__m128i __lsx_vgetsign_w (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vgetsign.w
Builtin: __builtin_lsx_vgetsign_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:920
```

### Description

Return the sign bit of each u32 lane as a 0/1 value.

### Operation

```c
dst.u32[0] = sign_bit(a.u32[0]);
dst.u32[1] = sign_bit(a.u32[1]);
dst.u32[2] = sign_bit(a.u32[2]);
dst.u32[3] = sign_bit(a.u32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vgetsign_w((v4i32)a);
```

<span id="intrinsic-__lsx_vrandsigni_b"></span>

## __m128i __lsx_vrandsigni_b (__m128i a, __m128i b, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vrandsigni_b (__m128i a, __m128i b, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vrandsigni.b
Builtin: __builtin_lsx_vrandsigni_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:808
```

### Description

Preserve the source vector except for one selected lane, which is replaced by an all-zero or all-one sign mask derived from the sign/control operand. This materializes per-lane sign predicates inside a vector register.

### Operation

```c
dst = a;
dst.i8[imm] = (b.i8[imm] < 0) ? all_ones : 0;
```

### Header Mapping

```c
#define __lsx_vrandsigni_b(a, b, imm) ((__m128i)__builtin_lsx_vrandsigni_b((v16i8)(a), (v16i8)(b), (imm)))
```

<span id="intrinsic-__lsx_vrandsigni_h"></span>

## __m128i __lsx_vrandsigni_h (__m128i a, __m128i b, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vrandsigni_h (__m128i a, __m128i b, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vrandsigni.h
Builtin: __builtin_lsx_vrandsigni_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:807
```

### Description

Preserve the source vector except for one selected lane, which is replaced by an all-zero or all-one sign mask derived from the sign/control operand. This materializes per-lane sign predicates inside a vector register.

### Operation

```c
dst = a;
dst.i16[imm] = (b.i16[imm] < 0) ? all_ones : 0;
```

### Header Mapping

```c
#define __lsx_vrandsigni_h(a, b, imm) ((__m128i)__builtin_lsx_vrandsigni_h((v8i16)(a), (v8i16)(b), (imm)))
```

<span id="intrinsic-__lsx_vrandsignv_b"></span>

## __m128i __lsx_vrandsignv_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __lsx_vrandsignv_b (__m128i a, __m128i b, __m128i c)
#include <loongson-sxintrin.h>
Instruction: vrandsignv.b
Builtin: __builtin_lsx_vrandsignv_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:831
```

### Description

Preserve the source vector except for one selected lane, which is replaced by an all-zero or all-one sign mask derived from the sign/control operand. This materializes per-lane sign predicates inside a vector register.

### Operation

```c
dst = a;
dst.i8[lane_index_from_control(c)] = (b.i8[lane_index_from_control(c)] < 0) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vrandsignv_b((v16i8)a, (v16i8)b, (v16i8)c);
```

<span id="intrinsic-__lsx_vrandsignv_h"></span>

## __m128i __lsx_vrandsignv_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __lsx_vrandsignv_h (__m128i a, __m128i b, __m128i c)
#include <loongson-sxintrin.h>
Instruction: vrandsignv.h
Builtin: __builtin_lsx_vrandsignv_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:824
```

### Description

Preserve the source vector except for one selected lane, which is replaced by an all-zero or all-one sign mask derived from the sign/control operand. This materializes per-lane sign predicates inside a vector register.

### Operation

```c
dst = a;
dst.i16[lane_index_from_control(c)] = (b.i16[lane_index_from_control(c)] < 0) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vrandsignv_h((v8i16)a, (v8i16)b, (v8i16)c);
```

<span id="intrinsic-__lsx_vrorsigni_b"></span>

## __m128i __lsx_vrorsigni_b (__m128i a, __m128i b, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vrorsigni_b (__m128i a, __m128i b, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vrorsigni.b
Builtin: __builtin_lsx_vrorsigni_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:806
```

### Description

Preserve the source vector except for one selected lane, which is replaced by an all-zero or all-one sign mask derived from the sign/control operand. This materializes per-lane sign predicates inside a vector register.

### Operation

```c
dst = a;
dst.i8[imm] = (b.i8[imm] < 0) ? all_ones : 0;
```

### Header Mapping

```c
#define __lsx_vrorsigni_b(a, b, imm) ((__m128i)__builtin_lsx_vrorsigni_b((v16i8)(a), (v16i8)(b), (imm)))
```

<span id="intrinsic-__lsx_vrorsigni_h"></span>

## __m128i __lsx_vrorsigni_h (__m128i a, __m128i b, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vrorsigni_h (__m128i a, __m128i b, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vrorsigni.h
Builtin: __builtin_lsx_vrorsigni_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:805
```

### Description

Preserve the source vector except for one selected lane, which is replaced by an all-zero or all-one sign mask derived from the sign/control operand. This materializes per-lane sign predicates inside a vector register.

### Operation

```c
dst = a;
dst.i16[imm] = (b.i16[imm] < 0) ? all_ones : 0;
```

### Header Mapping

```c
#define __lsx_vrorsigni_h(a, b, imm) ((__m128i)__builtin_lsx_vrorsigni_h((v8i16)(a), (v8i16)(b), (imm)))
```

<span id="intrinsic-__lsx_vrorsignv_b"></span>

## __m128i __lsx_vrorsignv_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __lsx_vrorsignv_b (__m128i a, __m128i b, __m128i c)
#include <loongson-sxintrin.h>
Instruction: vrorsignv.b
Builtin: __builtin_lsx_vrorsignv_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:817
```

### Description

Preserve the source vector except for one selected lane, which is replaced by an all-zero or all-one sign mask derived from the sign/control operand. This materializes per-lane sign predicates inside a vector register.

### Operation

```c
dst = a;
dst.i8[lane_index_from_control(c)] = (b.i8[lane_index_from_control(c)] < 0) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vrorsignv_b((v16i8)a, (v16i8)b, (v16i8)c);
```

<span id="intrinsic-__lsx_vrorsignv_h"></span>

## __m128i __lsx_vrorsignv_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __lsx_vrorsignv_h (__m128i a, __m128i b, __m128i c)
#include <loongson-sxintrin.h>
Instruction: vrorsignv.h
Builtin: __builtin_lsx_vrorsignv_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:810
```

### Description

Preserve the source vector except for one selected lane, which is replaced by an all-zero or all-one sign mask derived from the sign/control operand. This materializes per-lane sign predicates inside a vector register.

### Operation

```c
dst = a;
dst.i16[lane_index_from_control(c)] = (b.i16[lane_index_from_control(c)] < 0) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vrorsignv_h((v8i16)a, (v8i16)b, (v8i16)c);
```

<span id="intrinsic-__lsx_vsigncov_b"></span>

## __m128i __lsx_vsigncov_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsigncov_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsigncov.b
Builtin: __builtin_lsx_vsigncov_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:990
```

### Description

Copy the magnitude/sign from `b` under the sign of `a` for each u8 lane.

### Operation

```c
dst.i8[0] = (a.i8[0] == 0) ? 0 : (a.i8[0] < 0 ? -b.i8[0] : b.i8[0]);
dst.i8[1] = (a.i8[1] == 0) ? 0 : (a.i8[1] < 0 ? -b.i8[1] : b.i8[1]);
dst.i8[2] = (a.i8[2] == 0) ? 0 : (a.i8[2] < 0 ? -b.i8[2] : b.i8[2]);
dst.i8[3] = (a.i8[3] == 0) ? 0 : (a.i8[3] < 0 ? -b.i8[3] : b.i8[3]);
dst.i8[4] = (a.i8[4] == 0) ? 0 : (a.i8[4] < 0 ? -b.i8[4] : b.i8[4]);
dst.i8[5] = (a.i8[5] == 0) ? 0 : (a.i8[5] < 0 ? -b.i8[5] : b.i8[5]);
dst.i8[6] = (a.i8[6] == 0) ? 0 : (a.i8[6] < 0 ? -b.i8[6] : b.i8[6]);
dst.i8[7] = (a.i8[7] == 0) ? 0 : (a.i8[7] < 0 ? -b.i8[7] : b.i8[7]);
dst.i8[8] = (a.i8[8] == 0) ? 0 : (a.i8[8] < 0 ? -b.i8[8] : b.i8[8]);
dst.i8[9] = (a.i8[9] == 0) ? 0 : (a.i8[9] < 0 ? -b.i8[9] : b.i8[9]);
dst.i8[10] = (a.i8[10] == 0) ? 0 : (a.i8[10] < 0 ? -b.i8[10] : b.i8[10]);
dst.i8[11] = (a.i8[11] == 0) ? 0 : (a.i8[11] < 0 ? -b.i8[11] : b.i8[11]);
dst.i8[12] = (a.i8[12] == 0) ? 0 : (a.i8[12] < 0 ? -b.i8[12] : b.i8[12]);
dst.i8[13] = (a.i8[13] == 0) ? 0 : (a.i8[13] < 0 ? -b.i8[13] : b.i8[13]);
dst.i8[14] = (a.i8[14] == 0) ? 0 : (a.i8[14] < 0 ? -b.i8[14] : b.i8[14]);
dst.i8[15] = (a.i8[15] == 0) ? 0 : (a.i8[15] < 0 ? -b.i8[15] : b.i8[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsigncov_b((v16i8)a, (v16i8)b);
```

<span id="intrinsic-__lsx_vsigncov_d"></span>

## __m128i __lsx_vsigncov_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsigncov_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsigncov.d
Builtin: __builtin_lsx_vsigncov_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:969
```

### Description

Copy the magnitude/sign from `b` under the sign of `a` for each u64 lane.

### Operation

```c
dst.i64[0] = (a.i64[0] == 0) ? 0 : (a.i64[0] < 0 ? -b.i64[0] : b.i64[0]);
dst.i64[1] = (a.i64[1] == 0) ? 0 : (a.i64[1] < 0 ? -b.i64[1] : b.i64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsigncov_d((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__lsx_vsigncov_h"></span>

## __m128i __lsx_vsigncov_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsigncov_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsigncov.h
Builtin: __builtin_lsx_vsigncov_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:983
```

### Description

Copy the magnitude/sign from `b` under the sign of `a` for each u16 lane.

### Operation

```c
dst.i16[0] = (a.i16[0] == 0) ? 0 : (a.i16[0] < 0 ? -b.i16[0] : b.i16[0]);
dst.i16[1] = (a.i16[1] == 0) ? 0 : (a.i16[1] < 0 ? -b.i16[1] : b.i16[1]);
dst.i16[2] = (a.i16[2] == 0) ? 0 : (a.i16[2] < 0 ? -b.i16[2] : b.i16[2]);
dst.i16[3] = (a.i16[3] == 0) ? 0 : (a.i16[3] < 0 ? -b.i16[3] : b.i16[3]);
dst.i16[4] = (a.i16[4] == 0) ? 0 : (a.i16[4] < 0 ? -b.i16[4] : b.i16[4]);
dst.i16[5] = (a.i16[5] == 0) ? 0 : (a.i16[5] < 0 ? -b.i16[5] : b.i16[5]);
dst.i16[6] = (a.i16[6] == 0) ? 0 : (a.i16[6] < 0 ? -b.i16[6] : b.i16[6]);
dst.i16[7] = (a.i16[7] == 0) ? 0 : (a.i16[7] < 0 ? -b.i16[7] : b.i16[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsigncov_h((v8i16)a, (v8i16)b);
```

<span id="intrinsic-__lsx_vsigncov_w"></span>

## __m128i __lsx_vsigncov_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsigncov_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsigncov.w
Builtin: __builtin_lsx_vsigncov_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:976
```

### Description

Copy the magnitude/sign from `b` under the sign of `a` for each u32 lane.

### Operation

```c
dst.i32[0] = (a.i32[0] == 0) ? 0 : (a.i32[0] < 0 ? -b.i32[0] : b.i32[0]);
dst.i32[1] = (a.i32[1] == 0) ? 0 : (a.i32[1] < 0 ? -b.i32[1] : b.i32[1]);
dst.i32[2] = (a.i32[2] == 0) ? 0 : (a.i32[2] < 0 ? -b.i32[2] : b.i32[2]);
dst.i32[3] = (a.i32[3] == 0) ? 0 : (a.i32[3] < 0 ? -b.i32[3] : b.i32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsigncov_w((v4i32)a, (v4i32)b);
```

<span id="intrinsic-__lsx_vsignfill_b"></span>

## __m128i __lsx_vsignfill_b (__m128i a)

### Synopsis

```c
__m128i __lsx_vsignfill_b (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vsignfill.b
Builtin: __builtin_lsx_vsignfill_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:962
```

### Description

Expand each u8 lane sign bit into an all-zero or all-one mask.

### Operation

```c
dst.i8[0] = sign_extend_sign_bit(a.i8[0]);
dst.i8[1] = sign_extend_sign_bit(a.i8[1]);
dst.i8[2] = sign_extend_sign_bit(a.i8[2]);
dst.i8[3] = sign_extend_sign_bit(a.i8[3]);
dst.i8[4] = sign_extend_sign_bit(a.i8[4]);
dst.i8[5] = sign_extend_sign_bit(a.i8[5]);
dst.i8[6] = sign_extend_sign_bit(a.i8[6]);
dst.i8[7] = sign_extend_sign_bit(a.i8[7]);
dst.i8[8] = sign_extend_sign_bit(a.i8[8]);
dst.i8[9] = sign_extend_sign_bit(a.i8[9]);
dst.i8[10] = sign_extend_sign_bit(a.i8[10]);
dst.i8[11] = sign_extend_sign_bit(a.i8[11]);
dst.i8[12] = sign_extend_sign_bit(a.i8[12]);
dst.i8[13] = sign_extend_sign_bit(a.i8[13]);
dst.i8[14] = sign_extend_sign_bit(a.i8[14]);
dst.i8[15] = sign_extend_sign_bit(a.i8[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsignfill_b((v16i8)a);
```

<span id="intrinsic-__lsx_vsignfill_d"></span>

## __m128i __lsx_vsignfill_d (__m128i a)

### Synopsis

```c
__m128i __lsx_vsignfill_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vsignfill.d
Builtin: __builtin_lsx_vsignfill_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:941
```

### Description

Expand each u64 lane sign bit into an all-zero or all-one mask.

### Operation

```c
dst.i64[0] = sign_extend_sign_bit(a.i64[0]);
dst.i64[1] = sign_extend_sign_bit(a.i64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsignfill_d((v2i64)a);
```

<span id="intrinsic-__lsx_vsignfill_h"></span>

## __m128i __lsx_vsignfill_h (__m128i a)

### Synopsis

```c
__m128i __lsx_vsignfill_h (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vsignfill.h
Builtin: __builtin_lsx_vsignfill_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:955
```

### Description

Expand each u16 lane sign bit into an all-zero or all-one mask.

### Operation

```c
dst.i16[0] = sign_extend_sign_bit(a.i16[0]);
dst.i16[1] = sign_extend_sign_bit(a.i16[1]);
dst.i16[2] = sign_extend_sign_bit(a.i16[2]);
dst.i16[3] = sign_extend_sign_bit(a.i16[3]);
dst.i16[4] = sign_extend_sign_bit(a.i16[4]);
dst.i16[5] = sign_extend_sign_bit(a.i16[5]);
dst.i16[6] = sign_extend_sign_bit(a.i16[6]);
dst.i16[7] = sign_extend_sign_bit(a.i16[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsignfill_h((v8i16)a);
```

<span id="intrinsic-__lsx_vsignfill_w"></span>

## __m128i __lsx_vsignfill_w (__m128i a)

### Synopsis

```c
__m128i __lsx_vsignfill_w (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vsignfill.w
Builtin: __builtin_lsx_vsignfill_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:948
```

### Description

Expand each u32 lane sign bit into an all-zero or all-one mask.

### Operation

```c
dst.i32[0] = sign_extend_sign_bit(a.i32[0]);
dst.i32[1] = sign_extend_sign_bit(a.i32[1]);
dst.i32[2] = sign_extend_sign_bit(a.i32[2]);
dst.i32[3] = sign_extend_sign_bit(a.i32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsignfill_w((v4i32)a);
```

