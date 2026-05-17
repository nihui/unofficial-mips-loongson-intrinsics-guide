# Permutation

Generated from `include/loongson-sxintrin.h`. This page contains 19 intrinsics.

## __m128i __lsx_shf_d (__m128i a, __m128i b, unsigned int imm)

### Synopsis

```c
__m128i __lsx_shf_d (__m128i a, __m128i b, unsigned int imm)
#include <loongson-sxintrin.h>
Instruction: shf.d
Builtin: __builtin_lsx_shf_d
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:894
```

### Description

Use two-bit fields from the immediate to select u64 lanes from the concatenated `a`/`b` inputs inside each 128-bit half.

### Operation

```c
dst.u64[0] = (((imm >> 0) & 3) < 2) ? a.u64[((imm >> 0) & 3)] : b.u64[((imm >> 0) & 3) - 2];
dst.u64[1] = (((imm >> 2) & 3) < 2) ? a.u64[((imm >> 2) & 3)] : b.u64[((imm >> 2) & 3) - 2];
```

### Header Mapping

```c
#define __lsx_shf_d(a, b, imm) ((__m128i)__builtin_lsx_shf_d((v2i64)(a), (v2i64)(b), (imm)))
```

## __m128i __lsx_vextr_v (__m128i a, __m128i b, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vextr_v (__m128i a, __m128i b, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vextr.v
Builtin: __builtin_lsx_vextr_v
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:908
```

### Description

For each 128-bit half, concatenate `b` followed by `a` and extract a byte window starting at `imm`.

### Operation

```c
dst.u8[0] = (imm < 16) ? b.u8[imm] : a.u8[imm - 16];
dst.u8[1] = (imm + 1 < 16) ? b.u8[imm + 1] : a.u8[imm + 1 - 16];
dst.u8[2] = (imm + 2 < 16) ? b.u8[imm + 2] : a.u8[imm + 2 - 16];
dst.u8[3] = (imm + 3 < 16) ? b.u8[imm + 3] : a.u8[imm + 3 - 16];
dst.u8[4] = (imm + 4 < 16) ? b.u8[imm + 4] : a.u8[imm + 4 - 16];
dst.u8[5] = (imm + 5 < 16) ? b.u8[imm + 5] : a.u8[imm + 5 - 16];
dst.u8[6] = (imm + 6 < 16) ? b.u8[imm + 6] : a.u8[imm + 6 - 16];
dst.u8[7] = (imm + 7 < 16) ? b.u8[imm + 7] : a.u8[imm + 7 - 16];
dst.u8[8] = (imm + 8 < 16) ? b.u8[imm + 8] : a.u8[imm + 8 - 16];
dst.u8[9] = (imm + 9 < 16) ? b.u8[imm + 9] : a.u8[imm + 9 - 16];
dst.u8[10] = (imm + 10 < 16) ? b.u8[imm + 10] : a.u8[imm + 10 - 16];
dst.u8[11] = (imm + 11 < 16) ? b.u8[imm + 11] : a.u8[imm + 11 - 16];
dst.u8[12] = (imm + 12 < 16) ? b.u8[imm + 12] : a.u8[imm + 12 - 16];
dst.u8[13] = (imm + 13 < 16) ? b.u8[imm + 13] : a.u8[imm + 13 - 16];
dst.u8[14] = (imm + 14 < 16) ? b.u8[imm + 14] : a.u8[imm + 14 - 16];
dst.u8[15] = (imm + 15 < 16) ? b.u8[imm + 15] : a.u8[imm + 15 - 16];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lsx_vextr_v(a, b, imm) ((__m128i)__builtin_lsx_vextr_v((v16i8)(a), (v16i8)(b), (imm)))
```

## __m128i __lsx_vextrins_b (__m128i a, __m128i b, unsigned char dst_lane, unsigned char src_lane)

### Synopsis

```c
__m128i __lsx_vextrins_b (__m128i a, __m128i b, unsigned char dst_lane, unsigned char src_lane)
#include <loongson-sxintrin.h>
Instruction: vextrins.b
Builtin: __builtin_lsx_vextrins_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:907
```

### Description

Copy one selected source u8 lane into one selected destination lane.

### Operation

```c
dst = a;
dst.u8[dst_lane] = b.u8[src_lane];
```

### Header Mapping

```c
#define __lsx_vextrins_b(a, b, dst_lane, src_lane) ((__m128i)__builtin_lsx_vextrins_b((v16i8)(a), (v16i8)(b), (dst_lane), (src_lane)))
```

## __m128i __lsx_vextrins_d (__m128i a, __m128i b, unsigned char dst_lane, unsigned char src_lane)

### Synopsis

```c
__m128i __lsx_vextrins_d (__m128i a, __m128i b, unsigned char dst_lane, unsigned char src_lane)
#include <loongson-sxintrin.h>
Instruction: vextrins.d
Builtin: __builtin_lsx_vextrins_d
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:904
```

### Description

Copy one selected source u64 lane into one selected destination lane.

### Operation

```c
dst = a;
dst.u64[dst_lane] = b.u64[src_lane];
```

### Header Mapping

```c
#define __lsx_vextrins_d(a, b, dst_lane, src_lane) ((__m128i)__builtin_lsx_vextrins_d((v2i64)(a), (v2i64)(b), (dst_lane), (src_lane)))
```

## __m128i __lsx_vextrins_h (__m128i a, __m128i b, unsigned char dst_lane, unsigned char src_lane)

### Synopsis

```c
__m128i __lsx_vextrins_h (__m128i a, __m128i b, unsigned char dst_lane, unsigned char src_lane)
#include <loongson-sxintrin.h>
Instruction: vextrins.h
Builtin: __builtin_lsx_vextrins_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:906
```

### Description

Copy one selected source u16 lane into one selected destination lane.

### Operation

```c
dst = a;
dst.u16[dst_lane] = b.u16[src_lane];
```

### Header Mapping

```c
#define __lsx_vextrins_h(a, b, dst_lane, src_lane) ((__m128i)__builtin_lsx_vextrins_h((v8i16)(a), (v8i16)(b), (dst_lane), (src_lane)))
```

## __m128i __lsx_vextrins_w (__m128i a, __m128i b, unsigned char dst_lane, unsigned char src_lane)

### Synopsis

```c
__m128i __lsx_vextrins_w (__m128i a, __m128i b, unsigned char dst_lane, unsigned char src_lane)
#include <loongson-sxintrin.h>
Instruction: vextrins.w
Builtin: __builtin_lsx_vextrins_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:905
```

### Description

Copy one selected source u32 lane into one selected destination lane.

### Operation

```c
dst = a;
dst.u32[dst_lane] = b.u32[src_lane];
```

### Header Mapping

```c
#define __lsx_vextrins_w(a, b, dst_lane, src_lane) ((__m128i)__builtin_lsx_vextrins_w((v4i32)(a), (v4i32)(b), (dst_lane), (src_lane)))
```

## __m128i __lsx_vperml_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vperml_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vperml.d
Builtin: __builtin_lsx_vperml_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1397
```

### Description

Use the low control bits in `b` to select u64 lanes from `a` within each 128-bit half.

### Operation

```c
dst.u64[0] = a.u64[(b.u64[0] & 1)];
dst.u64[1] = a.u64[(b.u64[1] & 1)];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m128i)__builtin_lsx_vperml_d((v2i64)a, (v2i64)b);
```

## __m128i __lsx_vperml_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vperml_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vperml.w
Builtin: __builtin_lsx_vperml_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1404
```

### Description

Use the low control bits in `b` to select u32 lanes from `a` within each 128-bit half.

### Operation

```c
dst.u32[0] = a.u32[(b.u32[0] & 3)];
dst.u32[1] = a.u32[(b.u32[1] & 3)];
dst.u32[2] = a.u32[(b.u32[2] & 3)];
dst.u32[3] = a.u32[(b.u32[3] & 3)];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m128i)__builtin_lsx_vperml_w((v4i32)a, (v4i32)b);
```

## __m128i __lsx_vsel_d (__m128i a, __m128i b, unsigned int imm)

### Synopsis

```c
__m128i __lsx_vsel_d (__m128i a, __m128i b, unsigned int imm)
#include <loongson-sxintrin.h>
Instruction: vsel.d
Builtin: __builtin_lsx_vsel_d
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:909
```

### Description

Use one immediate bit per u64 lane: a 0 bit chooses `a`, and a 1 bit chooses `b`.

### Operation

```c
dst.u64[0] = ((imm >> 0) & 1) ? b.u64[0] : a.u64[0];
dst.u64[1] = ((imm >> 1) & 1) ? b.u64[1] : a.u64[1];
```

### Header Mapping

```c
#define __lsx_vsel_d(a, b, imm) ((__m128i)__builtin_lsx_vsel_d((v2i64)(a), (v2i64)(b), (imm)))
```

## __m128i __lsx_vsel_h (__m128i a, __m128i b, unsigned int imm)

### Synopsis

```c
__m128i __lsx_vsel_h (__m128i a, __m128i b, unsigned int imm)
#include <loongson-sxintrin.h>
Instruction: vsel.h
Builtin: __builtin_lsx_vsel_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:911
```

### Description

Use one immediate bit per u16 lane: a 0 bit chooses `a`, and a 1 bit chooses `b`.

### Operation

```c
dst.u16[0] = ((imm >> 0) & 1) ? b.u16[0] : a.u16[0];
dst.u16[1] = ((imm >> 1) & 1) ? b.u16[1] : a.u16[1];
dst.u16[2] = ((imm >> 2) & 1) ? b.u16[2] : a.u16[2];
dst.u16[3] = ((imm >> 3) & 1) ? b.u16[3] : a.u16[3];
dst.u16[4] = ((imm >> 4) & 1) ? b.u16[4] : a.u16[4];
dst.u16[5] = ((imm >> 5) & 1) ? b.u16[5] : a.u16[5];
dst.u16[6] = ((imm >> 6) & 1) ? b.u16[6] : a.u16[6];
dst.u16[7] = ((imm >> 7) & 1) ? b.u16[7] : a.u16[7];
```

### Header Mapping

```c
#define __lsx_vsel_h(a, b, imm) ((__m128i)__builtin_lsx_vsel_h((v8i16)(a), (v8i16)(b), (imm)))
```

## __m128i __lsx_vsel_w (__m128i a, __m128i b, unsigned int imm)

### Synopsis

```c
__m128i __lsx_vsel_w (__m128i a, __m128i b, unsigned int imm)
#include <loongson-sxintrin.h>
Instruction: vsel.w
Builtin: __builtin_lsx_vsel_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:910
```

### Description

Use one immediate bit per u32 lane: a 0 bit chooses `a`, and a 1 bit chooses `b`.

### Operation

```c
dst.u32[0] = ((imm >> 0) & 1) ? b.u32[0] : a.u32[0];
dst.u32[1] = ((imm >> 1) & 1) ? b.u32[1] : a.u32[1];
dst.u32[2] = ((imm >> 2) & 1) ? b.u32[2] : a.u32[2];
dst.u32[3] = ((imm >> 3) & 1) ? b.u32[3] : a.u32[3];
```

### Header Mapping

```c
#define __lsx_vsel_w(a, b, imm) ((__m128i)__builtin_lsx_vsel_w((v4i32)(a), (v4i32)(b), (imm)))
```

## __m128i __lsx_vselr_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __lsx_vselr_d (__m128i a, __m128i b, __m128i c)
#include <loongson-sxintrin.h>
Instruction: vselr.d
Builtin: __builtin_lsx_vselr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1383
```

### Description

Use the sign bit of each lane in `a` as the selector: non-negative chooses `b`, negative chooses `c`.

### Operation

```c
dst.i64[0] = (a.i64[0] < 0) ? c.i64[0] : b.i64[0];
dst.i64[1] = (a.i64[1] < 0) ? c.i64[1] : b.i64[1];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m128i)__builtin_lsx_vselr_d((v2i64)a, (v2i64)b, (v2i64)c);
```

## __m128i __lsx_vselr_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __lsx_vselr_w (__m128i a, __m128i b, __m128i c)
#include <loongson-sxintrin.h>
Instruction: vselr.w
Builtin: __builtin_lsx_vselr_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1390
```

### Description

Use the sign bit of each lane in `a` as the selector: non-negative chooses `b`, negative chooses `c`.

### Operation

```c
dst.i32[0] = (a.i32[0] < 0) ? c.i32[0] : b.i32[0];
dst.i32[1] = (a.i32[1] < 0) ? c.i32[1] : b.i32[1];
dst.i32[2] = (a.i32[2] < 0) ? c.i32[2] : b.i32[2];
dst.i32[3] = (a.i32[3] < 0) ? c.i32[3] : b.i32[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m128i)__builtin_lsx_vselr_w((v4i32)a, (v4i32)b, (v4i32)c);
```

## __m128i __lsx_vshufil_h (__m128i a, __m128i b, unsigned int imm)

### Synopsis

```c
__m128i __lsx_vshufil_h (__m128i a, __m128i b, unsigned int imm)
#include <loongson-sxintrin.h>
Instruction: vshufil.h
Builtin: __builtin_lsx_vshufil_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:900
```

### Description

Start from `a` and replace one fixed u16 lane group with an immediate shuffle of the matching group from `b`. This is useful for small in-place table rearrangements inside a 128-bit half.

### Operation

```c
dst = a;
dst.u16[4] = b.u16[4 + ((imm >> 0) & 3)];
dst.u16[5] = b.u16[4 + ((imm >> 2) & 3)];
dst.u16[6] = b.u16[4 + ((imm >> 4) & 3)];
dst.u16[7] = b.u16[4 + ((imm >> 6) & 3)];
```

### Header Mapping

```c
#define __lsx_vshufil_h(a, b, imm) ((__m128i)__builtin_lsx_vshufil_h((v8i16)(a), (v8i16)(b), (imm)))
```

## __m128i __lsx_vshufill_b (__m128i a, __m128i b, unsigned int imm)

### Synopsis

```c
__m128i __lsx_vshufill_b (__m128i a, __m128i b, unsigned int imm)
#include <loongson-sxintrin.h>
Instruction: vshufill.b
Builtin: __builtin_lsx_vshufill_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:898
```

### Description

Broadcast one selected u8 lane from `a` into every destination lane.

### Operation

```c
dst = a;
dst.u8[12] = b.u8[12 + ((imm >> 0) & 3)];
dst.u8[13] = b.u8[12 + ((imm >> 2) & 3)];
dst.u8[14] = b.u8[12 + ((imm >> 4) & 3)];
dst.u8[15] = b.u8[12 + ((imm >> 6) & 3)];
```

### Header Mapping

```c
#define __lsx_vshufill_b(a, b, imm) ((__m128i)__builtin_lsx_vshufill_b((v16i8)(a), (v16i8)(b), (imm)))
```

## __m128i __lsx_vshufilr_b (__m128i a, __m128i b, unsigned int imm)

### Synopsis

```c
__m128i __lsx_vshufilr_b (__m128i a, __m128i b, unsigned int imm)
#include <loongson-sxintrin.h>
Instruction: vshufilr.b
Builtin: __builtin_lsx_vshufilr_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:897
```

### Description

Start from `a` and replace one fixed u8 lane group with an immediate shuffle of the matching group from `b`. This is useful for small in-place table rearrangements inside a 128-bit half.

### Operation

```c
dst = a;
dst.u8[8] = b.u8[8 + ((imm >> 0) & 3)];
dst.u8[9] = b.u8[8 + ((imm >> 2) & 3)];
dst.u8[10] = b.u8[8 + ((imm >> 4) & 3)];
dst.u8[11] = b.u8[8 + ((imm >> 6) & 3)];
```

### Header Mapping

```c
#define __lsx_vshufilr_b(a, b, imm) ((__m128i)__builtin_lsx_vshufilr_b((v16i8)(a), (v16i8)(b), (imm)))
```

## __m128i __lsx_vshufir_h (__m128i a, __m128i b, unsigned int imm)

### Synopsis

```c
__m128i __lsx_vshufir_h (__m128i a, __m128i b, unsigned int imm)
#include <loongson-sxintrin.h>
Instruction: vshufir.h
Builtin: __builtin_lsx_vshufir_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:899
```

### Description

Start from `a` and replace one fixed u16 lane group with an immediate shuffle of the matching group from `b`. This is useful for small in-place table rearrangements inside a 128-bit half.

### Operation

```c
dst = a;
dst.u16[0] = b.u16[0 + ((imm >> 0) & 3)];
dst.u16[1] = b.u16[0 + ((imm >> 2) & 3)];
dst.u16[2] = b.u16[0 + ((imm >> 4) & 3)];
dst.u16[3] = b.u16[0 + ((imm >> 6) & 3)];
```

### Header Mapping

```c
#define __lsx_vshufir_h(a, b, imm) ((__m128i)__builtin_lsx_vshufir_h((v8i16)(a), (v8i16)(b), (imm)))
```

## __m128i __lsx_vshufirl_b (__m128i a, __m128i b, unsigned int imm)

### Synopsis

```c
__m128i __lsx_vshufirl_b (__m128i a, __m128i b, unsigned int imm)
#include <loongson-sxintrin.h>
Instruction: vshufirl.b
Builtin: __builtin_lsx_vshufirl_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:896
```

### Description

Start from `a` and replace one fixed u8 lane group with an immediate shuffle of the matching group from `b`. This is useful for small in-place table rearrangements inside a 128-bit half.

### Operation

```c
dst = a;
dst.u8[4] = b.u8[4 + ((imm >> 0) & 3)];
dst.u8[5] = b.u8[4 + ((imm >> 2) & 3)];
dst.u8[6] = b.u8[4 + ((imm >> 4) & 3)];
dst.u8[7] = b.u8[4 + ((imm >> 6) & 3)];
```

### Header Mapping

```c
#define __lsx_vshufirl_b(a, b, imm) ((__m128i)__builtin_lsx_vshufirl_b((v16i8)(a), (v16i8)(b), (imm)))
```

## __m128i __lsx_vshufirr_b (__m128i a, __m128i b, unsigned int imm)

### Synopsis

```c
__m128i __lsx_vshufirr_b (__m128i a, __m128i b, unsigned int imm)
#include <loongson-sxintrin.h>
Instruction: vshufirr.b
Builtin: __builtin_lsx_vshufirr_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:895
```

### Description

Start from `a` and replace one fixed u8 lane group with an immediate shuffle of the matching group from `b`. This is useful for small in-place table rearrangements inside a 128-bit half.

### Operation

```c
dst = a;
dst.u8[0] = b.u8[0 + ((imm >> 0) & 3)];
dst.u8[1] = b.u8[0 + ((imm >> 2) & 3)];
dst.u8[2] = b.u8[0 + ((imm >> 4) & 3)];
dst.u8[3] = b.u8[0 + ((imm >> 6) & 3)];
```

### Header Mapping

```c
#define __lsx_vshufirr_b(a, b, imm) ((__m128i)__builtin_lsx_vshufirr_b((v16i8)(a), (v16i8)(b), (imm)))
```

