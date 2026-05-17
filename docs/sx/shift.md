# Shift

Generated from `include/loongson-sxintrin.h`. This page contains 68 intrinsics.

<span id="intrinsic-__lsx_vbsll_v"></span>

## __m128i __lsx_vbsll_v (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vbsll_v (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vbsll.v
Builtin: __builtin_lsx_vbsll_v
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:903
```

### Description

Shift the whole vector left by an immediate byte count, inserting zero bytes at the low end.

### Operation

```c
dst.u8 = u8_shift_left(a.u8, imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lsx_vbsll_v(a, imm) ((__m128i)__builtin_lsx_vbsll_v((v16i8)(a), (imm)))
```

<span id="intrinsic-__lsx_vbsrl_v"></span>

## __m128i __lsx_vbsrl_v (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vbsrl_v (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vbsrl.v
Builtin: __builtin_lsx_vbsrl_v
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:902
```

### Description

Shift the whole vector right by an immediate byte count, inserting zero bytes at the high end.

### Operation

```c
dst.u8 = u8_shift_right(a.u8, imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lsx_vbsrl_v(a, imm) ((__m128i)__builtin_lsx_vbsrl_v((v16i8)(a), (imm)))
```

<span id="intrinsic-__lsx_vsllix_s_d"></span>

## __m128i __lsx_vsllix_s_d (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsllix_s_d (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsllix.s.d
Builtin: __builtin_lsx_vsllix_s_d
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:538
```

### Description

Shift narrower i32 lanes left by the immediate amount and write the widened results into 2 x i64 lanes.

### Operation

```c
dst.i64[0] = extend(a.i32[0] << imm, 32, 64);
dst.i64[1] = extend(a.i32[1] << imm, 32, 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lsx_vsllix_s_d(a, imm) ((__m128i)__builtin_lsx_vsllix_s_d((v4i32)(a), (imm)))
```

<span id="intrinsic-__lsx_vsllix_s_h"></span>

## __m128i __lsx_vsllix_s_h (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsllix_s_h (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsllix.s.h
Builtin: __builtin_lsx_vsllix_s_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:540
```

### Description

Shift narrower i8 lanes left by the immediate amount and write the widened results into 8 x i16 lanes.

### Operation

```c
dst.i16[0] = extend(a.i8[0] << imm, 8, 16);
dst.i16[1] = extend(a.i8[1] << imm, 8, 16);
dst.i16[2] = extend(a.i8[2] << imm, 8, 16);
dst.i16[3] = extend(a.i8[3] << imm, 8, 16);
dst.i16[4] = extend(a.i8[4] << imm, 8, 16);
dst.i16[5] = extend(a.i8[5] << imm, 8, 16);
dst.i16[6] = extend(a.i8[6] << imm, 8, 16);
dst.i16[7] = extend(a.i8[7] << imm, 8, 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lsx_vsllix_s_h(a, imm) ((__m128i)__builtin_lsx_vsllix_s_h((v16i8)(a), (imm)))
```

<span id="intrinsic-__lsx_vsllix_s_w"></span>

## __m128i __lsx_vsllix_s_w (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsllix_s_w (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsllix.s.w
Builtin: __builtin_lsx_vsllix_s_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:539
```

### Description

Shift narrower i16 lanes left by the immediate amount and write the widened results into 4 x i32 lanes.

### Operation

```c
dst.i32[0] = extend(a.i16[0] << imm, 16, 32);
dst.i32[1] = extend(a.i16[1] << imm, 16, 32);
dst.i32[2] = extend(a.i16[2] << imm, 16, 32);
dst.i32[3] = extend(a.i16[3] << imm, 16, 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lsx_vsllix_s_w(a, imm) ((__m128i)__builtin_lsx_vsllix_s_w((v8i16)(a), (imm)))
```

<span id="intrinsic-__lsx_vsllix_u_d"></span>

## __m128i __lsx_vsllix_u_d (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsllix_u_d (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsllix.u.d
Builtin: __builtin_lsx_vsllix_u_d
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:541
```

### Description

Shift narrower u32 lanes left by the immediate amount and write the widened results into 2 x u64 lanes.

### Operation

```c
dst.u64[0] = extend(a.u32[0] << imm, 32, 64);
dst.u64[1] = extend(a.u32[1] << imm, 32, 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lsx_vsllix_u_d(a, imm) ((__m128i)__builtin_lsx_vsllix_u_d((v4u32)(a), (imm)))
```

<span id="intrinsic-__lsx_vsllix_u_h"></span>

## __m128i __lsx_vsllix_u_h (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsllix_u_h (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsllix.u.h
Builtin: __builtin_lsx_vsllix_u_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:543
```

### Description

Shift narrower u8 lanes left by the immediate amount and write the widened results into 8 x u16 lanes.

### Operation

```c
dst.u16[0] = extend(a.u8[0] << imm, 8, 16);
dst.u16[1] = extend(a.u8[1] << imm, 8, 16);
dst.u16[2] = extend(a.u8[2] << imm, 8, 16);
dst.u16[3] = extend(a.u8[3] << imm, 8, 16);
dst.u16[4] = extend(a.u8[4] << imm, 8, 16);
dst.u16[5] = extend(a.u8[5] << imm, 8, 16);
dst.u16[6] = extend(a.u8[6] << imm, 8, 16);
dst.u16[7] = extend(a.u8[7] << imm, 8, 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lsx_vsllix_u_h(a, imm) ((__m128i)__builtin_lsx_vsllix_u_h((v16u8)(a), (imm)))
```

<span id="intrinsic-__lsx_vsllix_u_w"></span>

## __m128i __lsx_vsllix_u_w (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsllix_u_w (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsllix.u.w
Builtin: __builtin_lsx_vsllix_u_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:542
```

### Description

Shift narrower u16 lanes left by the immediate amount and write the widened results into 4 x u32 lanes.

### Operation

```c
dst.u32[0] = extend(a.u16[0] << imm, 16, 32);
dst.u32[1] = extend(a.u16[1] << imm, 16, 32);
dst.u32[2] = extend(a.u16[2] << imm, 16, 32);
dst.u32[3] = extend(a.u16[3] << imm, 16, 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lsx_vsllix_u_w(a, imm) ((__m128i)__builtin_lsx_vsllix_u_w((v8u16)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrain_b"></span>

## __m128i __lsx_vsrain_b (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrain_b (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrain.b
Builtin: __builtin_lsx_vsrain_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:609
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes, and clear the unused high lanes.

### Operation

```c
dst.i8[0] = truncate(arithmetic_shift_right(a.i16[0], imm & 15), 8);
dst.i8[1] = truncate(arithmetic_shift_right(a.i16[1], imm & 15), 8);
dst.i8[2] = truncate(arithmetic_shift_right(a.i16[2], imm & 15), 8);
dst.i8[3] = truncate(arithmetic_shift_right(a.i16[3], imm & 15), 8);
dst.i8[4] = truncate(arithmetic_shift_right(a.i16[4], imm & 15), 8);
dst.i8[5] = truncate(arithmetic_shift_right(a.i16[5], imm & 15), 8);
dst.i8[6] = truncate(arithmetic_shift_right(a.i16[6], imm & 15), 8);
dst.i8[7] = truncate(arithmetic_shift_right(a.i16[7], imm & 15), 8);
dst.i8[8] = 0;
dst.i8[9] = 0;
dst.i8[10] = 0;
dst.i8[11] = 0;
dst.i8[12] = 0;
dst.i8[13] = 0;
dst.i8[14] = 0;
dst.i8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lsx_vsrain_b(a, imm) ((__m128i)__builtin_lsx_vsrain_b((v8i16)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrain_h"></span>

## __m128i __lsx_vsrain_h (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrain_h (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrain.h
Builtin: __builtin_lsx_vsrain_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:608
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = truncate(arithmetic_shift_right(a.i32[0], imm & 31), 16);
dst.i16[1] = truncate(arithmetic_shift_right(a.i32[1], imm & 31), 16);
dst.i16[2] = truncate(arithmetic_shift_right(a.i32[2], imm & 31), 16);
dst.i16[3] = truncate(arithmetic_shift_right(a.i32[3], imm & 31), 16);
dst.i16[4] = 0;
dst.i16[5] = 0;
dst.i16[6] = 0;
dst.i16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lsx_vsrain_h(a, imm) ((__m128i)__builtin_lsx_vsrain_h((v4i32)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrain_w"></span>

## __m128i __lsx_vsrain_w (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrain_w (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrain.w
Builtin: __builtin_lsx_vsrain_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:607
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = truncate(arithmetic_shift_right(a.i64[0], imm & 63), 32);
dst.i32[1] = truncate(arithmetic_shift_right(a.i64[1], imm & 63), 32);
dst.i32[2] = 0;
dst.i32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lsx_vsrain_w(a, imm) ((__m128i)__builtin_lsx_vsrain_w((v2i64)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrains_s_b"></span>

## __m128i __lsx_vsrains_s_b (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrains_s_b (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrains.s.b
Builtin: __builtin_lsx_vsrains_s_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:612
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x i8 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i8[0] = signed_saturate(arithmetic_shift_right(a.i16[0], imm & 15), 8);
dst.i8[1] = signed_saturate(arithmetic_shift_right(a.i16[1], imm & 15), 8);
dst.i8[2] = signed_saturate(arithmetic_shift_right(a.i16[2], imm & 15), 8);
dst.i8[3] = signed_saturate(arithmetic_shift_right(a.i16[3], imm & 15), 8);
dst.i8[4] = signed_saturate(arithmetic_shift_right(a.i16[4], imm & 15), 8);
dst.i8[5] = signed_saturate(arithmetic_shift_right(a.i16[5], imm & 15), 8);
dst.i8[6] = signed_saturate(arithmetic_shift_right(a.i16[6], imm & 15), 8);
dst.i8[7] = signed_saturate(arithmetic_shift_right(a.i16[7], imm & 15), 8);
dst.i8[8] = 0;
dst.i8[9] = 0;
dst.i8[10] = 0;
dst.i8[11] = 0;
dst.i8[12] = 0;
dst.i8[13] = 0;
dst.i8[14] = 0;
dst.i8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrains_s_b(a, imm) ((__m128i)__builtin_lsx_vsrains_s_b((v8i16)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrains_s_h"></span>

## __m128i __lsx_vsrains_s_h (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrains_s_h (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrains.s.h
Builtin: __builtin_lsx_vsrains_s_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:611
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x i16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = signed_saturate(arithmetic_shift_right(a.i32[0], imm & 31), 16);
dst.i16[1] = signed_saturate(arithmetic_shift_right(a.i32[1], imm & 31), 16);
dst.i16[2] = signed_saturate(arithmetic_shift_right(a.i32[2], imm & 31), 16);
dst.i16[3] = signed_saturate(arithmetic_shift_right(a.i32[3], imm & 31), 16);
dst.i16[4] = 0;
dst.i16[5] = 0;
dst.i16[6] = 0;
dst.i16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrains_s_h(a, imm) ((__m128i)__builtin_lsx_vsrains_s_h((v4i32)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrains_s_w"></span>

## __m128i __lsx_vsrains_s_w (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrains_s_w (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrains.s.w
Builtin: __builtin_lsx_vsrains_s_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:610
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 4 x i32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = signed_saturate(arithmetic_shift_right(a.i64[0], imm & 63), 32);
dst.i32[1] = signed_saturate(arithmetic_shift_right(a.i64[1], imm & 63), 32);
dst.i32[2] = 0;
dst.i32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrains_s_w(a, imm) ((__m128i)__builtin_lsx_vsrains_s_w((v2i64)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrains_u_b"></span>

## __m128i __lsx_vsrains_u_b (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrains_u_b (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrains.u.b
Builtin: __builtin_lsx_vsrains_u_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:615
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u8[0] = unsigned_saturate(arithmetic_shift_right(a.i16[0], imm & 15), 8);
dst.u8[1] = unsigned_saturate(arithmetic_shift_right(a.i16[1], imm & 15), 8);
dst.u8[2] = unsigned_saturate(arithmetic_shift_right(a.i16[2], imm & 15), 8);
dst.u8[3] = unsigned_saturate(arithmetic_shift_right(a.i16[3], imm & 15), 8);
dst.u8[4] = unsigned_saturate(arithmetic_shift_right(a.i16[4], imm & 15), 8);
dst.u8[5] = unsigned_saturate(arithmetic_shift_right(a.i16[5], imm & 15), 8);
dst.u8[6] = unsigned_saturate(arithmetic_shift_right(a.i16[6], imm & 15), 8);
dst.u8[7] = unsigned_saturate(arithmetic_shift_right(a.i16[7], imm & 15), 8);
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrains_u_b(a, imm) ((__m128i)__builtin_lsx_vsrains_u_b((v8u16)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrains_u_h"></span>

## __m128i __lsx_vsrains_u_h (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrains_u_h (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrains.u.h
Builtin: __builtin_lsx_vsrains_u_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:614
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(arithmetic_shift_right(a.i32[0], imm & 31), 16);
dst.u16[1] = unsigned_saturate(arithmetic_shift_right(a.i32[1], imm & 31), 16);
dst.u16[2] = unsigned_saturate(arithmetic_shift_right(a.i32[2], imm & 31), 16);
dst.u16[3] = unsigned_saturate(arithmetic_shift_right(a.i32[3], imm & 31), 16);
dst.u16[4] = 0;
dst.u16[5] = 0;
dst.u16[6] = 0;
dst.u16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrains_u_h(a, imm) ((__m128i)__builtin_lsx_vsrains_u_h((v4u32)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrains_u_w"></span>

## __m128i __lsx_vsrains_u_w (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrains_u_w (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrains.u.w
Builtin: __builtin_lsx_vsrains_u_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:613
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(arithmetic_shift_right(a.i64[0], imm & 63), 32);
dst.u32[1] = unsigned_saturate(arithmetic_shift_right(a.i64[1], imm & 63), 32);
dst.u32[2] = 0;
dst.u32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrains_u_w(a, imm) ((__m128i)__builtin_lsx_vsrains_u_w((v2u64)(a), (imm)))
```

<span id="intrinsic-__lsx_vsran_b"></span>

## __m128i __lsx_vsran_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsran_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsran.b
Builtin: __builtin_lsx_vsran_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:559
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes, and clear the unused high lanes.

### Operation

```c
dst.i8[0] = truncate(arithmetic_shift_right(a.i16[0], b.u16[0] & 15), 8);
dst.i8[1] = truncate(arithmetic_shift_right(a.i16[1], b.u16[1] & 15), 8);
dst.i8[2] = truncate(arithmetic_shift_right(a.i16[2], b.u16[2] & 15), 8);
dst.i8[3] = truncate(arithmetic_shift_right(a.i16[3], b.u16[3] & 15), 8);
dst.i8[4] = truncate(arithmetic_shift_right(a.i16[4], b.u16[4] & 15), 8);
dst.i8[5] = truncate(arithmetic_shift_right(a.i16[5], b.u16[5] & 15), 8);
dst.i8[6] = truncate(arithmetic_shift_right(a.i16[6], b.u16[6] & 15), 8);
dst.i8[7] = truncate(arithmetic_shift_right(a.i16[7], b.u16[7] & 15), 8);
dst.i8[8] = 0;
dst.i8[9] = 0;
dst.i8[10] = 0;
dst.i8[11] = 0;
dst.i8[12] = 0;
dst.i8[13] = 0;
dst.i8[14] = 0;
dst.i8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsran_b((v8i16)a, (v8i16)b);
```

<span id="intrinsic-__lsx_vsran_h"></span>

## __m128i __lsx_vsran_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsran_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsran.h
Builtin: __builtin_lsx_vsran_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:552
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = truncate(arithmetic_shift_right(a.i32[0], b.u32[0] & 31), 16);
dst.i16[1] = truncate(arithmetic_shift_right(a.i32[1], b.u32[1] & 31), 16);
dst.i16[2] = truncate(arithmetic_shift_right(a.i32[2], b.u32[2] & 31), 16);
dst.i16[3] = truncate(arithmetic_shift_right(a.i32[3], b.u32[3] & 31), 16);
dst.i16[4] = 0;
dst.i16[5] = 0;
dst.i16[6] = 0;
dst.i16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsran_h((v4i32)a, (v4i32)b);
```

<span id="intrinsic-__lsx_vsran_w"></span>

## __m128i __lsx_vsran_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsran_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsran.w
Builtin: __builtin_lsx_vsran_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:545
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = truncate(arithmetic_shift_right(a.i64[0], b.u64[0] & 63), 32);
dst.i32[1] = truncate(arithmetic_shift_right(a.i64[1], b.u64[1] & 63), 32);
dst.i32[2] = 0;
dst.i32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsran_w((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__lsx_vsrans_s_b"></span>

## __m128i __lsx_vsrans_s_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrans_s_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrans.s.b
Builtin: __builtin_lsx_vsrans_s_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:580
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x i8 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i8[0] = signed_saturate(arithmetic_shift_right(a.i16[0], b.u16[0] & 15), 8);
dst.i8[1] = signed_saturate(arithmetic_shift_right(a.i16[1], b.u16[1] & 15), 8);
dst.i8[2] = signed_saturate(arithmetic_shift_right(a.i16[2], b.u16[2] & 15), 8);
dst.i8[3] = signed_saturate(arithmetic_shift_right(a.i16[3], b.u16[3] & 15), 8);
dst.i8[4] = signed_saturate(arithmetic_shift_right(a.i16[4], b.u16[4] & 15), 8);
dst.i8[5] = signed_saturate(arithmetic_shift_right(a.i16[5], b.u16[5] & 15), 8);
dst.i8[6] = signed_saturate(arithmetic_shift_right(a.i16[6], b.u16[6] & 15), 8);
dst.i8[7] = signed_saturate(arithmetic_shift_right(a.i16[7], b.u16[7] & 15), 8);
dst.i8[8] = 0;
dst.i8[9] = 0;
dst.i8[10] = 0;
dst.i8[11] = 0;
dst.i8[12] = 0;
dst.i8[13] = 0;
dst.i8[14] = 0;
dst.i8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrans_s_b((v8i16)a, (v8i16)b);
```

<span id="intrinsic-__lsx_vsrans_s_h"></span>

## __m128i __lsx_vsrans_s_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrans_s_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrans.s.h
Builtin: __builtin_lsx_vsrans_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:573
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x i16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = signed_saturate(arithmetic_shift_right(a.i32[0], b.u32[0] & 31), 16);
dst.i16[1] = signed_saturate(arithmetic_shift_right(a.i32[1], b.u32[1] & 31), 16);
dst.i16[2] = signed_saturate(arithmetic_shift_right(a.i32[2], b.u32[2] & 31), 16);
dst.i16[3] = signed_saturate(arithmetic_shift_right(a.i32[3], b.u32[3] & 31), 16);
dst.i16[4] = 0;
dst.i16[5] = 0;
dst.i16[6] = 0;
dst.i16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrans_s_h((v4i32)a, (v4i32)b);
```

<span id="intrinsic-__lsx_vsrans_s_w"></span>

## __m128i __lsx_vsrans_s_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrans_s_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrans.s.w
Builtin: __builtin_lsx_vsrans_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:566
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 4 x i32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = signed_saturate(arithmetic_shift_right(a.i64[0], b.u64[0] & 63), 32);
dst.i32[1] = signed_saturate(arithmetic_shift_right(a.i64[1], b.u64[1] & 63), 32);
dst.i32[2] = 0;
dst.i32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrans_s_w((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__lsx_vsrans_u_b"></span>

## __m128i __lsx_vsrans_u_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrans_u_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrans.u.b
Builtin: __builtin_lsx_vsrans_u_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:601
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u8[0] = unsigned_saturate(arithmetic_shift_right(a.i16[0], b.u16[0] & 15), 8);
dst.u8[1] = unsigned_saturate(arithmetic_shift_right(a.i16[1], b.u16[1] & 15), 8);
dst.u8[2] = unsigned_saturate(arithmetic_shift_right(a.i16[2], b.u16[2] & 15), 8);
dst.u8[3] = unsigned_saturate(arithmetic_shift_right(a.i16[3], b.u16[3] & 15), 8);
dst.u8[4] = unsigned_saturate(arithmetic_shift_right(a.i16[4], b.u16[4] & 15), 8);
dst.u8[5] = unsigned_saturate(arithmetic_shift_right(a.i16[5], b.u16[5] & 15), 8);
dst.u8[6] = unsigned_saturate(arithmetic_shift_right(a.i16[6], b.u16[6] & 15), 8);
dst.u8[7] = unsigned_saturate(arithmetic_shift_right(a.i16[7], b.u16[7] & 15), 8);
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrans_u_b((v8u16)a, (v8u16)b);
```

<span id="intrinsic-__lsx_vsrans_u_h"></span>

## __m128i __lsx_vsrans_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrans_u_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrans.u.h
Builtin: __builtin_lsx_vsrans_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:594
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(arithmetic_shift_right(a.i32[0], b.u32[0] & 31), 16);
dst.u16[1] = unsigned_saturate(arithmetic_shift_right(a.i32[1], b.u32[1] & 31), 16);
dst.u16[2] = unsigned_saturate(arithmetic_shift_right(a.i32[2], b.u32[2] & 31), 16);
dst.u16[3] = unsigned_saturate(arithmetic_shift_right(a.i32[3], b.u32[3] & 31), 16);
dst.u16[4] = 0;
dst.u16[5] = 0;
dst.u16[6] = 0;
dst.u16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrans_u_h((v4u32)a, (v4u32)b);
```

<span id="intrinsic-__lsx_vsrans_u_w"></span>

## __m128i __lsx_vsrans_u_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrans_u_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrans.u.w
Builtin: __builtin_lsx_vsrans_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:587
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(arithmetic_shift_right(a.i64[0], b.u64[0] & 63), 32);
dst.u32[1] = unsigned_saturate(arithmetic_shift_right(a.i64[1], b.u64[1] & 63), 32);
dst.u32[2] = 0;
dst.u32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrans_u_w((v2u64)a, (v2u64)b);
```

<span id="intrinsic-__lsx_vsrarin_b"></span>

## __m128i __lsx_vsrarin_b (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrarin_b (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrarin.b
Builtin: __builtin_lsx_vsrarin_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:681
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes, and clear the unused high lanes.

### Operation

```c
dst.i8[0] = truncate(rounding_arithmetic_shift_right(a.i16[0], imm & 15), 8);
dst.i8[1] = truncate(rounding_arithmetic_shift_right(a.i16[1], imm & 15), 8);
dst.i8[2] = truncate(rounding_arithmetic_shift_right(a.i16[2], imm & 15), 8);
dst.i8[3] = truncate(rounding_arithmetic_shift_right(a.i16[3], imm & 15), 8);
dst.i8[4] = truncate(rounding_arithmetic_shift_right(a.i16[4], imm & 15), 8);
dst.i8[5] = truncate(rounding_arithmetic_shift_right(a.i16[5], imm & 15), 8);
dst.i8[6] = truncate(rounding_arithmetic_shift_right(a.i16[6], imm & 15), 8);
dst.i8[7] = truncate(rounding_arithmetic_shift_right(a.i16[7], imm & 15), 8);
dst.i8[8] = 0;
dst.i8[9] = 0;
dst.i8[10] = 0;
dst.i8[11] = 0;
dst.i8[12] = 0;
dst.i8[13] = 0;
dst.i8[14] = 0;
dst.i8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrarin_b(a, imm) ((__m128i)__builtin_lsx_vsrarin_b((v8i16)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrarin_h"></span>

## __m128i __lsx_vsrarin_h (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrarin_h (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrarin.h
Builtin: __builtin_lsx_vsrarin_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:680
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = truncate(rounding_arithmetic_shift_right(a.i32[0], imm & 31), 16);
dst.i16[1] = truncate(rounding_arithmetic_shift_right(a.i32[1], imm & 31), 16);
dst.i16[2] = truncate(rounding_arithmetic_shift_right(a.i32[2], imm & 31), 16);
dst.i16[3] = truncate(rounding_arithmetic_shift_right(a.i32[3], imm & 31), 16);
dst.i16[4] = 0;
dst.i16[5] = 0;
dst.i16[6] = 0;
dst.i16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrarin_h(a, imm) ((__m128i)__builtin_lsx_vsrarin_h((v4i32)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrarin_w"></span>

## __m128i __lsx_vsrarin_w (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrarin_w (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrarin.w
Builtin: __builtin_lsx_vsrarin_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:679
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = truncate(rounding_arithmetic_shift_right(a.i64[0], imm & 63), 32);
dst.i32[1] = truncate(rounding_arithmetic_shift_right(a.i64[1], imm & 63), 32);
dst.i32[2] = 0;
dst.i32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrarin_w(a, imm) ((__m128i)__builtin_lsx_vsrarin_w((v2i64)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrarins_s_b"></span>

## __m128i __lsx_vsrarins_s_b (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrarins_s_b (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrarins.s.b
Builtin: __builtin_lsx_vsrarins_s_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:684
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x i8 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i8[0] = signed_saturate(rounding_arithmetic_shift_right(a.i16[0], imm & 15), 8);
dst.i8[1] = signed_saturate(rounding_arithmetic_shift_right(a.i16[1], imm & 15), 8);
dst.i8[2] = signed_saturate(rounding_arithmetic_shift_right(a.i16[2], imm & 15), 8);
dst.i8[3] = signed_saturate(rounding_arithmetic_shift_right(a.i16[3], imm & 15), 8);
dst.i8[4] = signed_saturate(rounding_arithmetic_shift_right(a.i16[4], imm & 15), 8);
dst.i8[5] = signed_saturate(rounding_arithmetic_shift_right(a.i16[5], imm & 15), 8);
dst.i8[6] = signed_saturate(rounding_arithmetic_shift_right(a.i16[6], imm & 15), 8);
dst.i8[7] = signed_saturate(rounding_arithmetic_shift_right(a.i16[7], imm & 15), 8);
dst.i8[8] = 0;
dst.i8[9] = 0;
dst.i8[10] = 0;
dst.i8[11] = 0;
dst.i8[12] = 0;
dst.i8[13] = 0;
dst.i8[14] = 0;
dst.i8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrarins_s_b(a, imm) ((__m128i)__builtin_lsx_vsrarins_s_b((v8i16)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrarins_s_h"></span>

## __m128i __lsx_vsrarins_s_h (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrarins_s_h (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrarins.s.h
Builtin: __builtin_lsx_vsrarins_s_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:683
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x i16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = signed_saturate(rounding_arithmetic_shift_right(a.i32[0], imm & 31), 16);
dst.i16[1] = signed_saturate(rounding_arithmetic_shift_right(a.i32[1], imm & 31), 16);
dst.i16[2] = signed_saturate(rounding_arithmetic_shift_right(a.i32[2], imm & 31), 16);
dst.i16[3] = signed_saturate(rounding_arithmetic_shift_right(a.i32[3], imm & 31), 16);
dst.i16[4] = 0;
dst.i16[5] = 0;
dst.i16[6] = 0;
dst.i16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrarins_s_h(a, imm) ((__m128i)__builtin_lsx_vsrarins_s_h((v4i32)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrarins_s_w"></span>

## __m128i __lsx_vsrarins_s_w (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrarins_s_w (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrarins.s.w
Builtin: __builtin_lsx_vsrarins_s_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:682
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 4 x i32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = signed_saturate(rounding_arithmetic_shift_right(a.i64[0], imm & 63), 32);
dst.i32[1] = signed_saturate(rounding_arithmetic_shift_right(a.i64[1], imm & 63), 32);
dst.i32[2] = 0;
dst.i32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrarins_s_w(a, imm) ((__m128i)__builtin_lsx_vsrarins_s_w((v2i64)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrarins_u_b"></span>

## __m128i __lsx_vsrarins_u_b (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrarins_u_b (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrarins.u.b
Builtin: __builtin_lsx_vsrarins_u_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:687
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u8[0] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[0], imm & 15), 8);
dst.u8[1] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[1], imm & 15), 8);
dst.u8[2] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[2], imm & 15), 8);
dst.u8[3] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[3], imm & 15), 8);
dst.u8[4] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[4], imm & 15), 8);
dst.u8[5] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[5], imm & 15), 8);
dst.u8[6] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[6], imm & 15), 8);
dst.u8[7] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[7], imm & 15), 8);
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrarins_u_b(a, imm) ((__m128i)__builtin_lsx_vsrarins_u_b((v8u16)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrarins_u_h"></span>

## __m128i __lsx_vsrarins_u_h (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrarins_u_h (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrarins.u.h
Builtin: __builtin_lsx_vsrarins_u_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:686
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[0], imm & 31), 16);
dst.u16[1] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[1], imm & 31), 16);
dst.u16[2] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[2], imm & 31), 16);
dst.u16[3] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[3], imm & 31), 16);
dst.u16[4] = 0;
dst.u16[5] = 0;
dst.u16[6] = 0;
dst.u16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrarins_u_h(a, imm) ((__m128i)__builtin_lsx_vsrarins_u_h((v4u32)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrarins_u_w"></span>

## __m128i __lsx_vsrarins_u_w (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrarins_u_w (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrarins.u.w
Builtin: __builtin_lsx_vsrarins_u_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:685
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(rounding_arithmetic_shift_right(a.i64[0], imm & 63), 32);
dst.u32[1] = unsigned_saturate(rounding_arithmetic_shift_right(a.i64[1], imm & 63), 32);
dst.u32[2] = 0;
dst.u32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrarins_u_w(a, imm) ((__m128i)__builtin_lsx_vsrarins_u_w((v2u64)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrarn_b"></span>

## __m128i __lsx_vsrarn_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrarn_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrarn.b
Builtin: __builtin_lsx_vsrarn_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:631
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes, and clear the unused high lanes.

### Operation

```c
dst.i8[0] = truncate(rounding_arithmetic_shift_right(a.i16[0], b.u16[0] & 15), 8);
dst.i8[1] = truncate(rounding_arithmetic_shift_right(a.i16[1], b.u16[1] & 15), 8);
dst.i8[2] = truncate(rounding_arithmetic_shift_right(a.i16[2], b.u16[2] & 15), 8);
dst.i8[3] = truncate(rounding_arithmetic_shift_right(a.i16[3], b.u16[3] & 15), 8);
dst.i8[4] = truncate(rounding_arithmetic_shift_right(a.i16[4], b.u16[4] & 15), 8);
dst.i8[5] = truncate(rounding_arithmetic_shift_right(a.i16[5], b.u16[5] & 15), 8);
dst.i8[6] = truncate(rounding_arithmetic_shift_right(a.i16[6], b.u16[6] & 15), 8);
dst.i8[7] = truncate(rounding_arithmetic_shift_right(a.i16[7], b.u16[7] & 15), 8);
dst.i8[8] = 0;
dst.i8[9] = 0;
dst.i8[10] = 0;
dst.i8[11] = 0;
dst.i8[12] = 0;
dst.i8[13] = 0;
dst.i8[14] = 0;
dst.i8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarn_b((v8i16)a, (v8i16)b);
```

<span id="intrinsic-__lsx_vsrarn_h"></span>

## __m128i __lsx_vsrarn_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrarn_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrarn.h
Builtin: __builtin_lsx_vsrarn_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:624
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = truncate(rounding_arithmetic_shift_right(a.i32[0], b.u32[0] & 31), 16);
dst.i16[1] = truncate(rounding_arithmetic_shift_right(a.i32[1], b.u32[1] & 31), 16);
dst.i16[2] = truncate(rounding_arithmetic_shift_right(a.i32[2], b.u32[2] & 31), 16);
dst.i16[3] = truncate(rounding_arithmetic_shift_right(a.i32[3], b.u32[3] & 31), 16);
dst.i16[4] = 0;
dst.i16[5] = 0;
dst.i16[6] = 0;
dst.i16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarn_h((v4i32)a, (v4i32)b);
```

<span id="intrinsic-__lsx_vsrarn_w"></span>

## __m128i __lsx_vsrarn_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrarn_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrarn.w
Builtin: __builtin_lsx_vsrarn_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:617
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = truncate(rounding_arithmetic_shift_right(a.i64[0], b.u64[0] & 63), 32);
dst.i32[1] = truncate(rounding_arithmetic_shift_right(a.i64[1], b.u64[1] & 63), 32);
dst.i32[2] = 0;
dst.i32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarn_w((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__lsx_vsrarns_s_b"></span>

## __m128i __lsx_vsrarns_s_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrarns_s_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrarns.s.b
Builtin: __builtin_lsx_vsrarns_s_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:652
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x i8 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i8[0] = signed_saturate(rounding_arithmetic_shift_right(a.i16[0], b.u16[0] & 15), 8);
dst.i8[1] = signed_saturate(rounding_arithmetic_shift_right(a.i16[1], b.u16[1] & 15), 8);
dst.i8[2] = signed_saturate(rounding_arithmetic_shift_right(a.i16[2], b.u16[2] & 15), 8);
dst.i8[3] = signed_saturate(rounding_arithmetic_shift_right(a.i16[3], b.u16[3] & 15), 8);
dst.i8[4] = signed_saturate(rounding_arithmetic_shift_right(a.i16[4], b.u16[4] & 15), 8);
dst.i8[5] = signed_saturate(rounding_arithmetic_shift_right(a.i16[5], b.u16[5] & 15), 8);
dst.i8[6] = signed_saturate(rounding_arithmetic_shift_right(a.i16[6], b.u16[6] & 15), 8);
dst.i8[7] = signed_saturate(rounding_arithmetic_shift_right(a.i16[7], b.u16[7] & 15), 8);
dst.i8[8] = 0;
dst.i8[9] = 0;
dst.i8[10] = 0;
dst.i8[11] = 0;
dst.i8[12] = 0;
dst.i8[13] = 0;
dst.i8[14] = 0;
dst.i8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarns_s_b((v8i16)a, (v8i16)b);
```

<span id="intrinsic-__lsx_vsrarns_s_h"></span>

## __m128i __lsx_vsrarns_s_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrarns_s_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrarns.s.h
Builtin: __builtin_lsx_vsrarns_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:645
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x i16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = signed_saturate(rounding_arithmetic_shift_right(a.i32[0], b.u32[0] & 31), 16);
dst.i16[1] = signed_saturate(rounding_arithmetic_shift_right(a.i32[1], b.u32[1] & 31), 16);
dst.i16[2] = signed_saturate(rounding_arithmetic_shift_right(a.i32[2], b.u32[2] & 31), 16);
dst.i16[3] = signed_saturate(rounding_arithmetic_shift_right(a.i32[3], b.u32[3] & 31), 16);
dst.i16[4] = 0;
dst.i16[5] = 0;
dst.i16[6] = 0;
dst.i16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarns_s_h((v4i32)a, (v4i32)b);
```

<span id="intrinsic-__lsx_vsrarns_s_w"></span>

## __m128i __lsx_vsrarns_s_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrarns_s_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrarns.s.w
Builtin: __builtin_lsx_vsrarns_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:638
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 4 x i32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = signed_saturate(rounding_arithmetic_shift_right(a.i64[0], b.u64[0] & 63), 32);
dst.i32[1] = signed_saturate(rounding_arithmetic_shift_right(a.i64[1], b.u64[1] & 63), 32);
dst.i32[2] = 0;
dst.i32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarns_s_w((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__lsx_vsrarns_u_b"></span>

## __m128i __lsx_vsrarns_u_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrarns_u_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrarns.u.b
Builtin: __builtin_lsx_vsrarns_u_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:673
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u8[0] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[0], b.u16[0] & 15), 8);
dst.u8[1] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[1], b.u16[1] & 15), 8);
dst.u8[2] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[2], b.u16[2] & 15), 8);
dst.u8[3] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[3], b.u16[3] & 15), 8);
dst.u8[4] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[4], b.u16[4] & 15), 8);
dst.u8[5] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[5], b.u16[5] & 15), 8);
dst.u8[6] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[6], b.u16[6] & 15), 8);
dst.u8[7] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[7], b.u16[7] & 15), 8);
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarns_u_b((v8u16)a, (v8u16)b);
```

<span id="intrinsic-__lsx_vsrarns_u_h"></span>

## __m128i __lsx_vsrarns_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrarns_u_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrarns.u.h
Builtin: __builtin_lsx_vsrarns_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:666
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[0], b.u32[0] & 31), 16);
dst.u16[1] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[1], b.u32[1] & 31), 16);
dst.u16[2] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[2], b.u32[2] & 31), 16);
dst.u16[3] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[3], b.u32[3] & 31), 16);
dst.u16[4] = 0;
dst.u16[5] = 0;
dst.u16[6] = 0;
dst.u16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarns_u_h((v4u32)a, (v4u32)b);
```

<span id="intrinsic-__lsx_vsrarns_u_w"></span>

## __m128i __lsx_vsrarns_u_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrarns_u_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrarns.u.w
Builtin: __builtin_lsx_vsrarns_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:659
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(rounding_arithmetic_shift_right(a.i64[0], b.u64[0] & 63), 32);
dst.u32[1] = unsigned_saturate(rounding_arithmetic_shift_right(a.i64[1], b.u64[1] & 63), 32);
dst.u32[2] = 0;
dst.u32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrarns_u_w((v2u64)a, (v2u64)b);
```

<span id="intrinsic-__lsx_vsrlin_b"></span>

## __m128i __lsx_vsrlin_b (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrlin_b (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrlin.b
Builtin: __builtin_lsx_vsrlin_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:732
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes, and clear the unused high lanes.

### Operation

```c
dst.u8[0] = truncate(logical_shift_right(a.u16[0], imm & 15), 8);
dst.u8[1] = truncate(logical_shift_right(a.u16[1], imm & 15), 8);
dst.u8[2] = truncate(logical_shift_right(a.u16[2], imm & 15), 8);
dst.u8[3] = truncate(logical_shift_right(a.u16[3], imm & 15), 8);
dst.u8[4] = truncate(logical_shift_right(a.u16[4], imm & 15), 8);
dst.u8[5] = truncate(logical_shift_right(a.u16[5], imm & 15), 8);
dst.u8[6] = truncate(logical_shift_right(a.u16[6], imm & 15), 8);
dst.u8[7] = truncate(logical_shift_right(a.u16[7], imm & 15), 8);
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lsx_vsrlin_b(a, imm) ((__m128i)__builtin_lsx_vsrlin_b((v8i16)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrlin_h"></span>

## __m128i __lsx_vsrlin_h (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrlin_h (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrlin.h
Builtin: __builtin_lsx_vsrlin_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:731
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = truncate(logical_shift_right(a.u32[0], imm & 31), 16);
dst.u16[1] = truncate(logical_shift_right(a.u32[1], imm & 31), 16);
dst.u16[2] = truncate(logical_shift_right(a.u32[2], imm & 31), 16);
dst.u16[3] = truncate(logical_shift_right(a.u32[3], imm & 31), 16);
dst.u16[4] = 0;
dst.u16[5] = 0;
dst.u16[6] = 0;
dst.u16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lsx_vsrlin_h(a, imm) ((__m128i)__builtin_lsx_vsrlin_h((v4i32)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrlin_w"></span>

## __m128i __lsx_vsrlin_w (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrlin_w (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrlin.w
Builtin: __builtin_lsx_vsrlin_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:730
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = truncate(logical_shift_right(a.u64[0], imm & 63), 32);
dst.u32[1] = truncate(logical_shift_right(a.u64[1], imm & 63), 32);
dst.u32[2] = 0;
dst.u32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lsx_vsrlin_w(a, imm) ((__m128i)__builtin_lsx_vsrlin_w((v2i64)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrlins_u_b"></span>

## __m128i __lsx_vsrlins_u_b (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrlins_u_b (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrlins.u.b
Builtin: __builtin_lsx_vsrlins_u_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:735
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u8[0] = unsigned_saturate(logical_shift_right(a.u16[0], imm & 15), 8);
dst.u8[1] = unsigned_saturate(logical_shift_right(a.u16[1], imm & 15), 8);
dst.u8[2] = unsigned_saturate(logical_shift_right(a.u16[2], imm & 15), 8);
dst.u8[3] = unsigned_saturate(logical_shift_right(a.u16[3], imm & 15), 8);
dst.u8[4] = unsigned_saturate(logical_shift_right(a.u16[4], imm & 15), 8);
dst.u8[5] = unsigned_saturate(logical_shift_right(a.u16[5], imm & 15), 8);
dst.u8[6] = unsigned_saturate(logical_shift_right(a.u16[6], imm & 15), 8);
dst.u8[7] = unsigned_saturate(logical_shift_right(a.u16[7], imm & 15), 8);
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrlins_u_b(a, imm) ((__m128i)__builtin_lsx_vsrlins_u_b((v8u16)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrlins_u_h"></span>

## __m128i __lsx_vsrlins_u_h (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrlins_u_h (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrlins.u.h
Builtin: __builtin_lsx_vsrlins_u_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:734
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(logical_shift_right(a.u32[0], imm & 31), 16);
dst.u16[1] = unsigned_saturate(logical_shift_right(a.u32[1], imm & 31), 16);
dst.u16[2] = unsigned_saturate(logical_shift_right(a.u32[2], imm & 31), 16);
dst.u16[3] = unsigned_saturate(logical_shift_right(a.u32[3], imm & 31), 16);
dst.u16[4] = 0;
dst.u16[5] = 0;
dst.u16[6] = 0;
dst.u16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrlins_u_h(a, imm) ((__m128i)__builtin_lsx_vsrlins_u_h((v4u32)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrlins_u_w"></span>

## __m128i __lsx_vsrlins_u_w (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrlins_u_w (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrlins.u.w
Builtin: __builtin_lsx_vsrlins_u_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:733
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(logical_shift_right(a.u64[0], imm & 63), 32);
dst.u32[1] = unsigned_saturate(logical_shift_right(a.u64[1], imm & 63), 32);
dst.u32[2] = 0;
dst.u32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrlins_u_w(a, imm) ((__m128i)__builtin_lsx_vsrlins_u_w((v2u64)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrln_b"></span>

## __m128i __lsx_vsrln_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrln_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrln.b
Builtin: __builtin_lsx_vsrln_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:703
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes, and clear the unused high lanes.

### Operation

```c
dst.u8[0] = truncate(logical_shift_right(a.u16[0], b.u16[0] & 15), 8);
dst.u8[1] = truncate(logical_shift_right(a.u16[1], b.u16[1] & 15), 8);
dst.u8[2] = truncate(logical_shift_right(a.u16[2], b.u16[2] & 15), 8);
dst.u8[3] = truncate(logical_shift_right(a.u16[3], b.u16[3] & 15), 8);
dst.u8[4] = truncate(logical_shift_right(a.u16[4], b.u16[4] & 15), 8);
dst.u8[5] = truncate(logical_shift_right(a.u16[5], b.u16[5] & 15), 8);
dst.u8[6] = truncate(logical_shift_right(a.u16[6], b.u16[6] & 15), 8);
dst.u8[7] = truncate(logical_shift_right(a.u16[7], b.u16[7] & 15), 8);
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrln_b((v8i16)a, (v8i16)b);
```

<span id="intrinsic-__lsx_vsrln_h"></span>

## __m128i __lsx_vsrln_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrln_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrln.h
Builtin: __builtin_lsx_vsrln_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:696
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = truncate(logical_shift_right(a.u32[0], b.u32[0] & 31), 16);
dst.u16[1] = truncate(logical_shift_right(a.u32[1], b.u32[1] & 31), 16);
dst.u16[2] = truncate(logical_shift_right(a.u32[2], b.u32[2] & 31), 16);
dst.u16[3] = truncate(logical_shift_right(a.u32[3], b.u32[3] & 31), 16);
dst.u16[4] = 0;
dst.u16[5] = 0;
dst.u16[6] = 0;
dst.u16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrln_h((v4i32)a, (v4i32)b);
```

<span id="intrinsic-__lsx_vsrln_w"></span>

## __m128i __lsx_vsrln_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrln_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrln.w
Builtin: __builtin_lsx_vsrln_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:689
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = truncate(logical_shift_right(a.u64[0], b.u64[0] & 63), 32);
dst.u32[1] = truncate(logical_shift_right(a.u64[1], b.u64[1] & 63), 32);
dst.u32[2] = 0;
dst.u32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrln_w((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__lsx_vsrlns_u_b"></span>

## __m128i __lsx_vsrlns_u_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrlns_u_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrlns.u.b
Builtin: __builtin_lsx_vsrlns_u_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:724
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u8[0] = unsigned_saturate(logical_shift_right(a.u16[0], b.u16[0] & 15), 8);
dst.u8[1] = unsigned_saturate(logical_shift_right(a.u16[1], b.u16[1] & 15), 8);
dst.u8[2] = unsigned_saturate(logical_shift_right(a.u16[2], b.u16[2] & 15), 8);
dst.u8[3] = unsigned_saturate(logical_shift_right(a.u16[3], b.u16[3] & 15), 8);
dst.u8[4] = unsigned_saturate(logical_shift_right(a.u16[4], b.u16[4] & 15), 8);
dst.u8[5] = unsigned_saturate(logical_shift_right(a.u16[5], b.u16[5] & 15), 8);
dst.u8[6] = unsigned_saturate(logical_shift_right(a.u16[6], b.u16[6] & 15), 8);
dst.u8[7] = unsigned_saturate(logical_shift_right(a.u16[7], b.u16[7] & 15), 8);
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlns_u_b((v8u16)a, (v8u16)b);
```

<span id="intrinsic-__lsx_vsrlns_u_h"></span>

## __m128i __lsx_vsrlns_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrlns_u_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrlns.u.h
Builtin: __builtin_lsx_vsrlns_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:717
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(logical_shift_right(a.u32[0], b.u32[0] & 31), 16);
dst.u16[1] = unsigned_saturate(logical_shift_right(a.u32[1], b.u32[1] & 31), 16);
dst.u16[2] = unsigned_saturate(logical_shift_right(a.u32[2], b.u32[2] & 31), 16);
dst.u16[3] = unsigned_saturate(logical_shift_right(a.u32[3], b.u32[3] & 31), 16);
dst.u16[4] = 0;
dst.u16[5] = 0;
dst.u16[6] = 0;
dst.u16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlns_u_h((v4u32)a, (v4u32)b);
```

<span id="intrinsic-__lsx_vsrlns_u_w"></span>

## __m128i __lsx_vsrlns_u_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrlns_u_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrlns.u.w
Builtin: __builtin_lsx_vsrlns_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:710
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(logical_shift_right(a.u64[0], b.u64[0] & 63), 32);
dst.u32[1] = unsigned_saturate(logical_shift_right(a.u64[1], b.u64[1] & 63), 32);
dst.u32[2] = 0;
dst.u32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlns_u_w((v2u64)a, (v2u64)b);
```

<span id="intrinsic-__lsx_vsrlrin_b"></span>

## __m128i __lsx_vsrlrin_b (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrlrin_b (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrlrin.b
Builtin: __builtin_lsx_vsrlrin_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:780
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes, and clear the unused high lanes.

### Operation

```c
dst.u8[0] = truncate(rounding_logical_shift_right(a.u16[0], imm & 15), 8);
dst.u8[1] = truncate(rounding_logical_shift_right(a.u16[1], imm & 15), 8);
dst.u8[2] = truncate(rounding_logical_shift_right(a.u16[2], imm & 15), 8);
dst.u8[3] = truncate(rounding_logical_shift_right(a.u16[3], imm & 15), 8);
dst.u8[4] = truncate(rounding_logical_shift_right(a.u16[4], imm & 15), 8);
dst.u8[5] = truncate(rounding_logical_shift_right(a.u16[5], imm & 15), 8);
dst.u8[6] = truncate(rounding_logical_shift_right(a.u16[6], imm & 15), 8);
dst.u8[7] = truncate(rounding_logical_shift_right(a.u16[7], imm & 15), 8);
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrlrin_b(a, imm) ((__m128i)__builtin_lsx_vsrlrin_b((v8i16)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrlrin_h"></span>

## __m128i __lsx_vsrlrin_h (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrlrin_h (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrlrin.h
Builtin: __builtin_lsx_vsrlrin_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:779
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = truncate(rounding_logical_shift_right(a.u32[0], imm & 31), 16);
dst.u16[1] = truncate(rounding_logical_shift_right(a.u32[1], imm & 31), 16);
dst.u16[2] = truncate(rounding_logical_shift_right(a.u32[2], imm & 31), 16);
dst.u16[3] = truncate(rounding_logical_shift_right(a.u32[3], imm & 31), 16);
dst.u16[4] = 0;
dst.u16[5] = 0;
dst.u16[6] = 0;
dst.u16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrlrin_h(a, imm) ((__m128i)__builtin_lsx_vsrlrin_h((v4i32)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrlrin_w"></span>

## __m128i __lsx_vsrlrin_w (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrlrin_w (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrlrin.w
Builtin: __builtin_lsx_vsrlrin_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:778
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = truncate(rounding_logical_shift_right(a.u64[0], imm & 63), 32);
dst.u32[1] = truncate(rounding_logical_shift_right(a.u64[1], imm & 63), 32);
dst.u32[2] = 0;
dst.u32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrlrin_w(a, imm) ((__m128i)__builtin_lsx_vsrlrin_w((v2i64)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrlrins_u_b"></span>

## __m128i __lsx_vsrlrins_u_b (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrlrins_u_b (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrlrins.u.b
Builtin: __builtin_lsx_vsrlrins_u_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:783
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u8[0] = unsigned_saturate(rounding_logical_shift_right(a.u16[0], imm & 15), 8);
dst.u8[1] = unsigned_saturate(rounding_logical_shift_right(a.u16[1], imm & 15), 8);
dst.u8[2] = unsigned_saturate(rounding_logical_shift_right(a.u16[2], imm & 15), 8);
dst.u8[3] = unsigned_saturate(rounding_logical_shift_right(a.u16[3], imm & 15), 8);
dst.u8[4] = unsigned_saturate(rounding_logical_shift_right(a.u16[4], imm & 15), 8);
dst.u8[5] = unsigned_saturate(rounding_logical_shift_right(a.u16[5], imm & 15), 8);
dst.u8[6] = unsigned_saturate(rounding_logical_shift_right(a.u16[6], imm & 15), 8);
dst.u8[7] = unsigned_saturate(rounding_logical_shift_right(a.u16[7], imm & 15), 8);
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrlrins_u_b(a, imm) ((__m128i)__builtin_lsx_vsrlrins_u_b((v8u16)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrlrins_u_h"></span>

## __m128i __lsx_vsrlrins_u_h (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrlrins_u_h (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrlrins.u.h
Builtin: __builtin_lsx_vsrlrins_u_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:782
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(rounding_logical_shift_right(a.u32[0], imm & 31), 16);
dst.u16[1] = unsigned_saturate(rounding_logical_shift_right(a.u32[1], imm & 31), 16);
dst.u16[2] = unsigned_saturate(rounding_logical_shift_right(a.u32[2], imm & 31), 16);
dst.u16[3] = unsigned_saturate(rounding_logical_shift_right(a.u32[3], imm & 31), 16);
dst.u16[4] = 0;
dst.u16[5] = 0;
dst.u16[6] = 0;
dst.u16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrlrins_u_h(a, imm) ((__m128i)__builtin_lsx_vsrlrins_u_h((v4u32)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrlrins_u_w"></span>

## __m128i __lsx_vsrlrins_u_w (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vsrlrins_u_w (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vsrlrins.u.w
Builtin: __builtin_lsx_vsrlrins_u_w
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:781
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(rounding_logical_shift_right(a.u64[0], imm & 63), 32);
dst.u32[1] = unsigned_saturate(rounding_logical_shift_right(a.u64[1], imm & 63), 32);
dst.u32[2] = 0;
dst.u32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lsx_vsrlrins_u_w(a, imm) ((__m128i)__builtin_lsx_vsrlrins_u_w((v2u64)(a), (imm)))
```

<span id="intrinsic-__lsx_vsrlrn_b"></span>

## __m128i __lsx_vsrlrn_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrlrn_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrlrn.b
Builtin: __builtin_lsx_vsrlrn_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:751
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes, and clear the unused high lanes.

### Operation

```c
dst.u8[0] = truncate(rounding_logical_shift_right(a.u16[0], b.u16[0] & 15), 8);
dst.u8[1] = truncate(rounding_logical_shift_right(a.u16[1], b.u16[1] & 15), 8);
dst.u8[2] = truncate(rounding_logical_shift_right(a.u16[2], b.u16[2] & 15), 8);
dst.u8[3] = truncate(rounding_logical_shift_right(a.u16[3], b.u16[3] & 15), 8);
dst.u8[4] = truncate(rounding_logical_shift_right(a.u16[4], b.u16[4] & 15), 8);
dst.u8[5] = truncate(rounding_logical_shift_right(a.u16[5], b.u16[5] & 15), 8);
dst.u8[6] = truncate(rounding_logical_shift_right(a.u16[6], b.u16[6] & 15), 8);
dst.u8[7] = truncate(rounding_logical_shift_right(a.u16[7], b.u16[7] & 15), 8);
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlrn_b((v8i16)a, (v8i16)b);
```

<span id="intrinsic-__lsx_vsrlrn_h"></span>

## __m128i __lsx_vsrlrn_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrlrn_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrlrn.h
Builtin: __builtin_lsx_vsrlrn_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:744
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = truncate(rounding_logical_shift_right(a.u32[0], b.u32[0] & 31), 16);
dst.u16[1] = truncate(rounding_logical_shift_right(a.u32[1], b.u32[1] & 31), 16);
dst.u16[2] = truncate(rounding_logical_shift_right(a.u32[2], b.u32[2] & 31), 16);
dst.u16[3] = truncate(rounding_logical_shift_right(a.u32[3], b.u32[3] & 31), 16);
dst.u16[4] = 0;
dst.u16[5] = 0;
dst.u16[6] = 0;
dst.u16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlrn_h((v4i32)a, (v4i32)b);
```

<span id="intrinsic-__lsx_vsrlrn_w"></span>

## __m128i __lsx_vsrlrn_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrlrn_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrlrn.w
Builtin: __builtin_lsx_vsrlrn_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:737
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = truncate(rounding_logical_shift_right(a.u64[0], b.u64[0] & 63), 32);
dst.u32[1] = truncate(rounding_logical_shift_right(a.u64[1], b.u64[1] & 63), 32);
dst.u32[2] = 0;
dst.u32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlrn_w((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__lsx_vsrlrns_u_b"></span>

## __m128i __lsx_vsrlrns_u_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrlrns_u_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrlrns.u.b
Builtin: __builtin_lsx_vsrlrns_u_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:772
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 16 x u8 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u8[0] = unsigned_saturate(rounding_logical_shift_right(a.u16[0], b.u16[0] & 15), 8);
dst.u8[1] = unsigned_saturate(rounding_logical_shift_right(a.u16[1], b.u16[1] & 15), 8);
dst.u8[2] = unsigned_saturate(rounding_logical_shift_right(a.u16[2], b.u16[2] & 15), 8);
dst.u8[3] = unsigned_saturate(rounding_logical_shift_right(a.u16[3], b.u16[3] & 15), 8);
dst.u8[4] = unsigned_saturate(rounding_logical_shift_right(a.u16[4], b.u16[4] & 15), 8);
dst.u8[5] = unsigned_saturate(rounding_logical_shift_right(a.u16[5], b.u16[5] & 15), 8);
dst.u8[6] = unsigned_saturate(rounding_logical_shift_right(a.u16[6], b.u16[6] & 15), 8);
dst.u8[7] = unsigned_saturate(rounding_logical_shift_right(a.u16[7], b.u16[7] & 15), 8);
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlrns_u_b((v8u16)a, (v8u16)b);
```

<span id="intrinsic-__lsx_vsrlrns_u_h"></span>

## __m128i __lsx_vsrlrns_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrlrns_u_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrlrns.u.h
Builtin: __builtin_lsx_vsrlrns_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:765
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 8 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(rounding_logical_shift_right(a.u32[0], b.u32[0] & 31), 16);
dst.u16[1] = unsigned_saturate(rounding_logical_shift_right(a.u32[1], b.u32[1] & 31), 16);
dst.u16[2] = unsigned_saturate(rounding_logical_shift_right(a.u32[2], b.u32[2] & 31), 16);
dst.u16[3] = unsigned_saturate(rounding_logical_shift_right(a.u32[3], b.u32[3] & 31), 16);
dst.u16[4] = 0;
dst.u16[5] = 0;
dst.u16[6] = 0;
dst.u16[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlrns_u_h((v4u32)a, (v4u32)b);
```

<span id="intrinsic-__lsx_vsrlrns_u_w"></span>

## __m128i __lsx_vsrlrns_u_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsrlrns_u_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsrlrns.u.w
Builtin: __builtin_lsx_vsrlrns_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:758
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 4 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(rounding_logical_shift_right(a.u64[0], b.u64[0] & 63), 32);
dst.u32[1] = unsigned_saturate(rounding_logical_shift_right(a.u64[1], b.u64[1] & 63), 32);
dst.u32[2] = 0;
dst.u32[3] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsrlrns_u_w((v2u64)a, (v2u64)b);
```

