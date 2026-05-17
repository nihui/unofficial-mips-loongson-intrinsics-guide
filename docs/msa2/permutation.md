# Permutation

Generated from `include/msa2.h`. This page contains 57 intrinsics.

<span id="intrinsic-__msa2_n2x_rnd_sx_nc_b"></span>

## __m128i __msa2_n2x_rnd_sx_nc_b (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_nc_b (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.sx.nc.b
Builtin: __builtin_msa2_n2x_rnd_sx_nc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:260
```

### Description

Narrow u16 elements into u8 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = truncate(rounding_shift(a.i16[0], imm), 8);
dst.u8[1] = truncate(rounding_shift(a.i16[1], imm), 8);
dst.u8[2] = truncate(rounding_shift(a.i16[2], imm), 8);
dst.u8[3] = truncate(rounding_shift(a.i16[3], imm), 8);
dst.u8[4] = truncate(rounding_shift(a.i16[4], imm), 8);
dst.u8[5] = truncate(rounding_shift(a.i16[5], imm), 8);
dst.u8[6] = truncate(rounding_shift(a.i16[6], imm), 8);
dst.u8[7] = truncate(rounding_shift(a.i16[7], imm), 8);
dst.u8[8] = truncate(rounding_shift(a.i16[8], imm), 8);
dst.u8[9] = truncate(rounding_shift(a.i16[9], imm), 8);
dst.u8[10] = truncate(rounding_shift(a.i16[10], imm), 8);
dst.u8[11] = truncate(rounding_shift(a.i16[11], imm), 8);
dst.u8[12] = truncate(rounding_shift(a.i16[12], imm), 8);
dst.u8[13] = truncate(rounding_shift(a.i16[13], imm), 8);
dst.u8[14] = truncate(rounding_shift(a.i16[14], imm), 8);
dst.u8[15] = truncate(rounding_shift(a.i16[15], imm), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_nc_b(a, imm) (__m128i) __builtin_msa2_n2x_rnd_sx_nc_b ((v16i8) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_sx_nc_d"></span>

## __m128i __msa2_n2x_rnd_sx_nc_d (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_nc_d (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.sx.nc.d
Builtin: __builtin_msa2_n2x_rnd_sx_nc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:269
```

### Description

Narrow u128 elements into u64 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = truncate(rounding_shift(a.i128[0], imm), 64);
dst.u64[1] = truncate(rounding_shift(a.i128[1], imm), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_nc_d(a, imm) (__m128i) __builtin_msa2_n2x_rnd_sx_nc_d ((v2i64) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_sx_nc_h"></span>

## __m128i __msa2_n2x_rnd_sx_nc_h (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_nc_h (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.sx.nc.h
Builtin: __builtin_msa2_n2x_rnd_sx_nc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:263
```

### Description

Narrow u32 elements into u16 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = truncate(rounding_shift(a.i32[0], imm), 16);
dst.u16[1] = truncate(rounding_shift(a.i32[1], imm), 16);
dst.u16[2] = truncate(rounding_shift(a.i32[2], imm), 16);
dst.u16[3] = truncate(rounding_shift(a.i32[3], imm), 16);
dst.u16[4] = truncate(rounding_shift(a.i32[4], imm), 16);
dst.u16[5] = truncate(rounding_shift(a.i32[5], imm), 16);
dst.u16[6] = truncate(rounding_shift(a.i32[6], imm), 16);
dst.u16[7] = truncate(rounding_shift(a.i32[7], imm), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_nc_h(a, imm) (__m128i) __builtin_msa2_n2x_rnd_sx_nc_h ((v8i16) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_sx_nc_w"></span>

## __m128i __msa2_n2x_rnd_sx_nc_w (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_nc_w (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.sx.nc.w
Builtin: __builtin_msa2_n2x_rnd_sx_nc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:266
```

### Description

Narrow u64 elements into u32 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = truncate(rounding_shift(a.i64[0], imm), 32);
dst.u32[1] = truncate(rounding_shift(a.i64[1], imm), 32);
dst.u32[2] = truncate(rounding_shift(a.i64[2], imm), 32);
dst.u32[3] = truncate(rounding_shift(a.i64[3], imm), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_nc_w(a, imm) (__m128i) __builtin_msa2_n2x_rnd_sx_nc_w ((v4i32) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_sx_sc_b"></span>

## __m128i __msa2_n2x_rnd_sx_sc_b (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_sc_b (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.sx.sc.b
Builtin: __builtin_msa2_n2x_rnd_sx_sc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:236
```

### Description

Narrow u16 elements into u8 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = signed_saturate(rounding_shift(a.i16[0], imm), 8);
dst.u8[1] = signed_saturate(rounding_shift(a.i16[1], imm), 8);
dst.u8[2] = signed_saturate(rounding_shift(a.i16[2], imm), 8);
dst.u8[3] = signed_saturate(rounding_shift(a.i16[3], imm), 8);
dst.u8[4] = signed_saturate(rounding_shift(a.i16[4], imm), 8);
dst.u8[5] = signed_saturate(rounding_shift(a.i16[5], imm), 8);
dst.u8[6] = signed_saturate(rounding_shift(a.i16[6], imm), 8);
dst.u8[7] = signed_saturate(rounding_shift(a.i16[7], imm), 8);
dst.u8[8] = signed_saturate(rounding_shift(a.i16[8], imm), 8);
dst.u8[9] = signed_saturate(rounding_shift(a.i16[9], imm), 8);
dst.u8[10] = signed_saturate(rounding_shift(a.i16[10], imm), 8);
dst.u8[11] = signed_saturate(rounding_shift(a.i16[11], imm), 8);
dst.u8[12] = signed_saturate(rounding_shift(a.i16[12], imm), 8);
dst.u8[13] = signed_saturate(rounding_shift(a.i16[13], imm), 8);
dst.u8[14] = signed_saturate(rounding_shift(a.i16[14], imm), 8);
dst.u8[15] = signed_saturate(rounding_shift(a.i16[15], imm), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_sc_b(a, imm) (__m128i) __builtin_msa2_n2x_rnd_sx_sc_b ((v16i8) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_sx_sc_d"></span>

## __m128i __msa2_n2x_rnd_sx_sc_d (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_sc_d (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.sx.sc.d
Builtin: __builtin_msa2_n2x_rnd_sx_sc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:245
```

### Description

Narrow u128 elements into u64 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = signed_saturate(rounding_shift(a.i128[0], imm), 64);
dst.u64[1] = signed_saturate(rounding_shift(a.i128[1], imm), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_sc_d(a, imm) (__m128i) __builtin_msa2_n2x_rnd_sx_sc_d ((v2i64) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_sx_sc_h"></span>

## __m128i __msa2_n2x_rnd_sx_sc_h (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_sc_h (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.sx.sc.h
Builtin: __builtin_msa2_n2x_rnd_sx_sc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:239
```

### Description

Narrow u32 elements into u16 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = signed_saturate(rounding_shift(a.i32[0], imm), 16);
dst.u16[1] = signed_saturate(rounding_shift(a.i32[1], imm), 16);
dst.u16[2] = signed_saturate(rounding_shift(a.i32[2], imm), 16);
dst.u16[3] = signed_saturate(rounding_shift(a.i32[3], imm), 16);
dst.u16[4] = signed_saturate(rounding_shift(a.i32[4], imm), 16);
dst.u16[5] = signed_saturate(rounding_shift(a.i32[5], imm), 16);
dst.u16[6] = signed_saturate(rounding_shift(a.i32[6], imm), 16);
dst.u16[7] = signed_saturate(rounding_shift(a.i32[7], imm), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_sc_h(a, imm) (__m128i) __builtin_msa2_n2x_rnd_sx_sc_h ((v8i16) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_sx_sc_w"></span>

## __m128i __msa2_n2x_rnd_sx_sc_w (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_sc_w (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.sx.sc.w
Builtin: __builtin_msa2_n2x_rnd_sx_sc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:242
```

### Description

Narrow u64 elements into u32 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = signed_saturate(rounding_shift(a.i64[0], imm), 32);
dst.u32[1] = signed_saturate(rounding_shift(a.i64[1], imm), 32);
dst.u32[2] = signed_saturate(rounding_shift(a.i64[2], imm), 32);
dst.u32[3] = signed_saturate(rounding_shift(a.i64[3], imm), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_sc_w(a, imm) (__m128i) __builtin_msa2_n2x_rnd_sx_sc_w ((v4i32) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_sx_uc_b"></span>

## __m128i __msa2_n2x_rnd_sx_uc_b (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_uc_b (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.sx.uc.b
Builtin: __builtin_msa2_n2x_rnd_sx_uc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:248
```

### Description

Narrow u16 elements into u8 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = unsigned_saturate(rounding_shift(a.i16[0], imm), 8);
dst.u8[1] = unsigned_saturate(rounding_shift(a.i16[1], imm), 8);
dst.u8[2] = unsigned_saturate(rounding_shift(a.i16[2], imm), 8);
dst.u8[3] = unsigned_saturate(rounding_shift(a.i16[3], imm), 8);
dst.u8[4] = unsigned_saturate(rounding_shift(a.i16[4], imm), 8);
dst.u8[5] = unsigned_saturate(rounding_shift(a.i16[5], imm), 8);
dst.u8[6] = unsigned_saturate(rounding_shift(a.i16[6], imm), 8);
dst.u8[7] = unsigned_saturate(rounding_shift(a.i16[7], imm), 8);
dst.u8[8] = unsigned_saturate(rounding_shift(a.i16[8], imm), 8);
dst.u8[9] = unsigned_saturate(rounding_shift(a.i16[9], imm), 8);
dst.u8[10] = unsigned_saturate(rounding_shift(a.i16[10], imm), 8);
dst.u8[11] = unsigned_saturate(rounding_shift(a.i16[11], imm), 8);
dst.u8[12] = unsigned_saturate(rounding_shift(a.i16[12], imm), 8);
dst.u8[13] = unsigned_saturate(rounding_shift(a.i16[13], imm), 8);
dst.u8[14] = unsigned_saturate(rounding_shift(a.i16[14], imm), 8);
dst.u8[15] = unsigned_saturate(rounding_shift(a.i16[15], imm), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_uc_b(a, imm) (__m128i) __builtin_msa2_n2x_rnd_sx_uc_b ((v16i8) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_sx_uc_d"></span>

## __m128i __msa2_n2x_rnd_sx_uc_d (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_uc_d (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.sx.uc.d
Builtin: __builtin_msa2_n2x_rnd_sx_uc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:257
```

### Description

Narrow u128 elements into u64 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = unsigned_saturate(rounding_shift(a.i128[0], imm), 64);
dst.u64[1] = unsigned_saturate(rounding_shift(a.i128[1], imm), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_uc_d(a, imm) (__m128i) __builtin_msa2_n2x_rnd_sx_uc_d ((v2i64) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_sx_uc_h"></span>

## __m128i __msa2_n2x_rnd_sx_uc_h (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_uc_h (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.sx.uc.h
Builtin: __builtin_msa2_n2x_rnd_sx_uc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:251
```

### Description

Narrow u32 elements into u16 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = unsigned_saturate(rounding_shift(a.i32[0], imm), 16);
dst.u16[1] = unsigned_saturate(rounding_shift(a.i32[1], imm), 16);
dst.u16[2] = unsigned_saturate(rounding_shift(a.i32[2], imm), 16);
dst.u16[3] = unsigned_saturate(rounding_shift(a.i32[3], imm), 16);
dst.u16[4] = unsigned_saturate(rounding_shift(a.i32[4], imm), 16);
dst.u16[5] = unsigned_saturate(rounding_shift(a.i32[5], imm), 16);
dst.u16[6] = unsigned_saturate(rounding_shift(a.i32[6], imm), 16);
dst.u16[7] = unsigned_saturate(rounding_shift(a.i32[7], imm), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_uc_h(a, imm) (__m128i) __builtin_msa2_n2x_rnd_sx_uc_h ((v8i16) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_sx_uc_w"></span>

## __m128i __msa2_n2x_rnd_sx_uc_w (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_uc_w (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.sx.uc.w
Builtin: __builtin_msa2_n2x_rnd_sx_uc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:254
```

### Description

Narrow u64 elements into u32 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = unsigned_saturate(rounding_shift(a.i64[0], imm), 32);
dst.u32[1] = unsigned_saturate(rounding_shift(a.i64[1], imm), 32);
dst.u32[2] = unsigned_saturate(rounding_shift(a.i64[2], imm), 32);
dst.u32[3] = unsigned_saturate(rounding_shift(a.i64[3], imm), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_uc_w(a, imm) (__m128i) __builtin_msa2_n2x_rnd_sx_uc_w ((v4i32) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_ux_nc_b"></span>

## __m128i __msa2_n2x_rnd_ux_nc_b (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_nc_b (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.ux.nc.b
Builtin: __builtin_msa2_n2x_rnd_ux_nc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:296
```

### Description

Narrow u16 elements into u8 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = truncate(rounding_shift(a.u16[0], imm), 8);
dst.u8[1] = truncate(rounding_shift(a.u16[1], imm), 8);
dst.u8[2] = truncate(rounding_shift(a.u16[2], imm), 8);
dst.u8[3] = truncate(rounding_shift(a.u16[3], imm), 8);
dst.u8[4] = truncate(rounding_shift(a.u16[4], imm), 8);
dst.u8[5] = truncate(rounding_shift(a.u16[5], imm), 8);
dst.u8[6] = truncate(rounding_shift(a.u16[6], imm), 8);
dst.u8[7] = truncate(rounding_shift(a.u16[7], imm), 8);
dst.u8[8] = truncate(rounding_shift(a.u16[8], imm), 8);
dst.u8[9] = truncate(rounding_shift(a.u16[9], imm), 8);
dst.u8[10] = truncate(rounding_shift(a.u16[10], imm), 8);
dst.u8[11] = truncate(rounding_shift(a.u16[11], imm), 8);
dst.u8[12] = truncate(rounding_shift(a.u16[12], imm), 8);
dst.u8[13] = truncate(rounding_shift(a.u16[13], imm), 8);
dst.u8[14] = truncate(rounding_shift(a.u16[14], imm), 8);
dst.u8[15] = truncate(rounding_shift(a.u16[15], imm), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_nc_b(a, imm) (__m128i) __builtin_msa2_n2x_rnd_ux_nc_b ((v16i8) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_ux_nc_d"></span>

## __m128i __msa2_n2x_rnd_ux_nc_d (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_nc_d (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.ux.nc.d
Builtin: __builtin_msa2_n2x_rnd_ux_nc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:305
```

### Description

Narrow u128 elements into u64 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = truncate(rounding_shift(a.u128[0], imm), 64);
dst.u64[1] = truncate(rounding_shift(a.u128[1], imm), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_nc_d(a, imm) (__m128i) __builtin_msa2_n2x_rnd_ux_nc_d ((v2i64) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_ux_nc_h"></span>

## __m128i __msa2_n2x_rnd_ux_nc_h (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_nc_h (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.ux.nc.h
Builtin: __builtin_msa2_n2x_rnd_ux_nc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:299
```

### Description

Narrow u32 elements into u16 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = truncate(rounding_shift(a.u32[0], imm), 16);
dst.u16[1] = truncate(rounding_shift(a.u32[1], imm), 16);
dst.u16[2] = truncate(rounding_shift(a.u32[2], imm), 16);
dst.u16[3] = truncate(rounding_shift(a.u32[3], imm), 16);
dst.u16[4] = truncate(rounding_shift(a.u32[4], imm), 16);
dst.u16[5] = truncate(rounding_shift(a.u32[5], imm), 16);
dst.u16[6] = truncate(rounding_shift(a.u32[6], imm), 16);
dst.u16[7] = truncate(rounding_shift(a.u32[7], imm), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_nc_h(a, imm) (__m128i) __builtin_msa2_n2x_rnd_ux_nc_h ((v8i16) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_ux_nc_w"></span>

## __m128i __msa2_n2x_rnd_ux_nc_w (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_nc_w (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.ux.nc.w
Builtin: __builtin_msa2_n2x_rnd_ux_nc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:302
```

### Description

Narrow u64 elements into u32 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = truncate(rounding_shift(a.u64[0], imm), 32);
dst.u32[1] = truncate(rounding_shift(a.u64[1], imm), 32);
dst.u32[2] = truncate(rounding_shift(a.u64[2], imm), 32);
dst.u32[3] = truncate(rounding_shift(a.u64[3], imm), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_nc_w(a, imm) (__m128i) __builtin_msa2_n2x_rnd_ux_nc_w ((v4i32) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_ux_sc_b"></span>

## __m128i __msa2_n2x_rnd_ux_sc_b (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_sc_b (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.ux.sc.b
Builtin: __builtin_msa2_n2x_rnd_ux_sc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:272
```

### Description

Narrow u16 elements into u8 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = signed_saturate(rounding_shift(a.u16[0], imm), 8);
dst.u8[1] = signed_saturate(rounding_shift(a.u16[1], imm), 8);
dst.u8[2] = signed_saturate(rounding_shift(a.u16[2], imm), 8);
dst.u8[3] = signed_saturate(rounding_shift(a.u16[3], imm), 8);
dst.u8[4] = signed_saturate(rounding_shift(a.u16[4], imm), 8);
dst.u8[5] = signed_saturate(rounding_shift(a.u16[5], imm), 8);
dst.u8[6] = signed_saturate(rounding_shift(a.u16[6], imm), 8);
dst.u8[7] = signed_saturate(rounding_shift(a.u16[7], imm), 8);
dst.u8[8] = signed_saturate(rounding_shift(a.u16[8], imm), 8);
dst.u8[9] = signed_saturate(rounding_shift(a.u16[9], imm), 8);
dst.u8[10] = signed_saturate(rounding_shift(a.u16[10], imm), 8);
dst.u8[11] = signed_saturate(rounding_shift(a.u16[11], imm), 8);
dst.u8[12] = signed_saturate(rounding_shift(a.u16[12], imm), 8);
dst.u8[13] = signed_saturate(rounding_shift(a.u16[13], imm), 8);
dst.u8[14] = signed_saturate(rounding_shift(a.u16[14], imm), 8);
dst.u8[15] = signed_saturate(rounding_shift(a.u16[15], imm), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_sc_b(a, imm) (__m128i) __builtin_msa2_n2x_rnd_ux_sc_b ((v16i8) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_ux_sc_d"></span>

## __m128i __msa2_n2x_rnd_ux_sc_d (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_sc_d (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.ux.sc.d
Builtin: __builtin_msa2_n2x_rnd_ux_sc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:281
```

### Description

Narrow u128 elements into u64 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = signed_saturate(rounding_shift(a.u128[0], imm), 64);
dst.u64[1] = signed_saturate(rounding_shift(a.u128[1], imm), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_sc_d(a, imm) (__m128i) __builtin_msa2_n2x_rnd_ux_sc_d ((v2i64) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_ux_sc_h"></span>

## __m128i __msa2_n2x_rnd_ux_sc_h (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_sc_h (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.ux.sc.h
Builtin: __builtin_msa2_n2x_rnd_ux_sc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:275
```

### Description

Narrow u32 elements into u16 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = signed_saturate(rounding_shift(a.u32[0], imm), 16);
dst.u16[1] = signed_saturate(rounding_shift(a.u32[1], imm), 16);
dst.u16[2] = signed_saturate(rounding_shift(a.u32[2], imm), 16);
dst.u16[3] = signed_saturate(rounding_shift(a.u32[3], imm), 16);
dst.u16[4] = signed_saturate(rounding_shift(a.u32[4], imm), 16);
dst.u16[5] = signed_saturate(rounding_shift(a.u32[5], imm), 16);
dst.u16[6] = signed_saturate(rounding_shift(a.u32[6], imm), 16);
dst.u16[7] = signed_saturate(rounding_shift(a.u32[7], imm), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_sc_h(a, imm) (__m128i) __builtin_msa2_n2x_rnd_ux_sc_h ((v8i16) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_ux_sc_w"></span>

## __m128i __msa2_n2x_rnd_ux_sc_w (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_sc_w (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.ux.sc.w
Builtin: __builtin_msa2_n2x_rnd_ux_sc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:278
```

### Description

Narrow u64 elements into u32 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = signed_saturate(rounding_shift(a.u64[0], imm), 32);
dst.u32[1] = signed_saturate(rounding_shift(a.u64[1], imm), 32);
dst.u32[2] = signed_saturate(rounding_shift(a.u64[2], imm), 32);
dst.u32[3] = signed_saturate(rounding_shift(a.u64[3], imm), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_sc_w(a, imm) (__m128i) __builtin_msa2_n2x_rnd_ux_sc_w ((v4i32) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_ux_uc_b"></span>

## __m128i __msa2_n2x_rnd_ux_uc_b (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_uc_b (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.ux.uc.b
Builtin: __builtin_msa2_n2x_rnd_ux_uc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:284
```

### Description

Narrow u16 elements into u8 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = unsigned_saturate(rounding_shift(a.u16[0], imm), 8);
dst.u8[1] = unsigned_saturate(rounding_shift(a.u16[1], imm), 8);
dst.u8[2] = unsigned_saturate(rounding_shift(a.u16[2], imm), 8);
dst.u8[3] = unsigned_saturate(rounding_shift(a.u16[3], imm), 8);
dst.u8[4] = unsigned_saturate(rounding_shift(a.u16[4], imm), 8);
dst.u8[5] = unsigned_saturate(rounding_shift(a.u16[5], imm), 8);
dst.u8[6] = unsigned_saturate(rounding_shift(a.u16[6], imm), 8);
dst.u8[7] = unsigned_saturate(rounding_shift(a.u16[7], imm), 8);
dst.u8[8] = unsigned_saturate(rounding_shift(a.u16[8], imm), 8);
dst.u8[9] = unsigned_saturate(rounding_shift(a.u16[9], imm), 8);
dst.u8[10] = unsigned_saturate(rounding_shift(a.u16[10], imm), 8);
dst.u8[11] = unsigned_saturate(rounding_shift(a.u16[11], imm), 8);
dst.u8[12] = unsigned_saturate(rounding_shift(a.u16[12], imm), 8);
dst.u8[13] = unsigned_saturate(rounding_shift(a.u16[13], imm), 8);
dst.u8[14] = unsigned_saturate(rounding_shift(a.u16[14], imm), 8);
dst.u8[15] = unsigned_saturate(rounding_shift(a.u16[15], imm), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_uc_b(a, imm) (__m128i) __builtin_msa2_n2x_rnd_ux_uc_b ((v16i8) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_ux_uc_d"></span>

## __m128i __msa2_n2x_rnd_ux_uc_d (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_uc_d (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.ux.uc.d
Builtin: __builtin_msa2_n2x_rnd_ux_uc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:293
```

### Description

Narrow u128 elements into u64 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = unsigned_saturate(rounding_shift(a.u128[0], imm), 64);
dst.u64[1] = unsigned_saturate(rounding_shift(a.u128[1], imm), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_uc_d(a, imm) (__m128i) __builtin_msa2_n2x_rnd_ux_uc_d ((v2i64) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_ux_uc_h"></span>

## __m128i __msa2_n2x_rnd_ux_uc_h (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_uc_h (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.ux.uc.h
Builtin: __builtin_msa2_n2x_rnd_ux_uc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:287
```

### Description

Narrow u32 elements into u16 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = unsigned_saturate(rounding_shift(a.u32[0], imm), 16);
dst.u16[1] = unsigned_saturate(rounding_shift(a.u32[1], imm), 16);
dst.u16[2] = unsigned_saturate(rounding_shift(a.u32[2], imm), 16);
dst.u16[3] = unsigned_saturate(rounding_shift(a.u32[3], imm), 16);
dst.u16[4] = unsigned_saturate(rounding_shift(a.u32[4], imm), 16);
dst.u16[5] = unsigned_saturate(rounding_shift(a.u32[5], imm), 16);
dst.u16[6] = unsigned_saturate(rounding_shift(a.u32[6], imm), 16);
dst.u16[7] = unsigned_saturate(rounding_shift(a.u32[7], imm), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_uc_h(a, imm) (__m128i) __builtin_msa2_n2x_rnd_ux_uc_h ((v8i16) a, imm);
```

<span id="intrinsic-__msa2_n2x_rnd_ux_uc_w"></span>

## __m128i __msa2_n2x_rnd_ux_uc_w (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_uc_w (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.rnd.ux.uc.w
Builtin: __builtin_msa2_n2x_rnd_ux_uc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:290
```

### Description

Narrow u64 elements into u32 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = unsigned_saturate(rounding_shift(a.u64[0], imm), 32);
dst.u32[1] = unsigned_saturate(rounding_shift(a.u64[1], imm), 32);
dst.u32[2] = unsigned_saturate(rounding_shift(a.u64[2], imm), 32);
dst.u32[3] = unsigned_saturate(rounding_shift(a.u64[3], imm), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_uc_w(a, imm) (__m128i) __builtin_msa2_n2x_rnd_ux_uc_w ((v4i32) a, imm);
```

<span id="intrinsic-__msa2_n2x_sx_nc_b"></span>

## __m128i __msa2_n2x_sx_nc_b (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_sx_nc_b (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.sx.nc.b
Builtin: __builtin_msa2_n2x_sx_nc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:188
```

### Description

Narrow u16 elements into u8 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = truncate(shift(a.i16[0], imm), 8);
dst.u8[1] = truncate(shift(a.i16[1], imm), 8);
dst.u8[2] = truncate(shift(a.i16[2], imm), 8);
dst.u8[3] = truncate(shift(a.i16[3], imm), 8);
dst.u8[4] = truncate(shift(a.i16[4], imm), 8);
dst.u8[5] = truncate(shift(a.i16[5], imm), 8);
dst.u8[6] = truncate(shift(a.i16[6], imm), 8);
dst.u8[7] = truncate(shift(a.i16[7], imm), 8);
dst.u8[8] = truncate(shift(a.i16[8], imm), 8);
dst.u8[9] = truncate(shift(a.i16[9], imm), 8);
dst.u8[10] = truncate(shift(a.i16[10], imm), 8);
dst.u8[11] = truncate(shift(a.i16[11], imm), 8);
dst.u8[12] = truncate(shift(a.i16[12], imm), 8);
dst.u8[13] = truncate(shift(a.i16[13], imm), 8);
dst.u8[14] = truncate(shift(a.i16[14], imm), 8);
dst.u8[15] = truncate(shift(a.i16[15], imm), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_sx_nc_b(a, imm) (__m128i) __builtin_msa2_n2x_sx_nc_b ((v16i8) a, imm);
```

<span id="intrinsic-__msa2_n2x_sx_nc_d"></span>

## __m128i __msa2_n2x_sx_nc_d (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_sx_nc_d (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.sx.nc.d
Builtin: __builtin_msa2_n2x_sx_nc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:197
```

### Description

Narrow u128 elements into u64 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = truncate(shift(a.i128[0], imm), 64);
dst.u64[1] = truncate(shift(a.i128[1], imm), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa2_n2x_sx_nc_d(a, imm) (__m128i) __builtin_msa2_n2x_sx_nc_d ((v2i64) a, imm);
```

<span id="intrinsic-__msa2_n2x_sx_nc_h"></span>

## __m128i __msa2_n2x_sx_nc_h (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_sx_nc_h (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.sx.nc.h
Builtin: __builtin_msa2_n2x_sx_nc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:191
```

### Description

Narrow u32 elements into u16 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = truncate(shift(a.i32[0], imm), 16);
dst.u16[1] = truncate(shift(a.i32[1], imm), 16);
dst.u16[2] = truncate(shift(a.i32[2], imm), 16);
dst.u16[3] = truncate(shift(a.i32[3], imm), 16);
dst.u16[4] = truncate(shift(a.i32[4], imm), 16);
dst.u16[5] = truncate(shift(a.i32[5], imm), 16);
dst.u16[6] = truncate(shift(a.i32[6], imm), 16);
dst.u16[7] = truncate(shift(a.i32[7], imm), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_sx_nc_h(a, imm) (__m128i) __builtin_msa2_n2x_sx_nc_h ((v8i16) a, imm);
```

<span id="intrinsic-__msa2_n2x_sx_nc_w"></span>

## __m128i __msa2_n2x_sx_nc_w (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_sx_nc_w (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.sx.nc.w
Builtin: __builtin_msa2_n2x_sx_nc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:194
```

### Description

Narrow u64 elements into u32 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = truncate(shift(a.i64[0], imm), 32);
dst.u32[1] = truncate(shift(a.i64[1], imm), 32);
dst.u32[2] = truncate(shift(a.i64[2], imm), 32);
dst.u32[3] = truncate(shift(a.i64[3], imm), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_sx_nc_w(a, imm) (__m128i) __builtin_msa2_n2x_sx_nc_w ((v4i32) a, imm);
```

<span id="intrinsic-__msa2_n2x_sx_sc_b"></span>

## __m128i __msa2_n2x_sx_sc_b (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_sx_sc_b (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.sx.sc.b
Builtin: __builtin_msa2_n2x_sx_sc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:164
```

### Description

Narrow u16 elements into u8 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = signed_saturate(shift(a.i16[0], imm), 8);
dst.u8[1] = signed_saturate(shift(a.i16[1], imm), 8);
dst.u8[2] = signed_saturate(shift(a.i16[2], imm), 8);
dst.u8[3] = signed_saturate(shift(a.i16[3], imm), 8);
dst.u8[4] = signed_saturate(shift(a.i16[4], imm), 8);
dst.u8[5] = signed_saturate(shift(a.i16[5], imm), 8);
dst.u8[6] = signed_saturate(shift(a.i16[6], imm), 8);
dst.u8[7] = signed_saturate(shift(a.i16[7], imm), 8);
dst.u8[8] = signed_saturate(shift(a.i16[8], imm), 8);
dst.u8[9] = signed_saturate(shift(a.i16[9], imm), 8);
dst.u8[10] = signed_saturate(shift(a.i16[10], imm), 8);
dst.u8[11] = signed_saturate(shift(a.i16[11], imm), 8);
dst.u8[12] = signed_saturate(shift(a.i16[12], imm), 8);
dst.u8[13] = signed_saturate(shift(a.i16[13], imm), 8);
dst.u8[14] = signed_saturate(shift(a.i16[14], imm), 8);
dst.u8[15] = signed_saturate(shift(a.i16[15], imm), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_sx_sc_b(a, imm) (__m128i) __builtin_msa2_n2x_sx_sc_b ((v16i8) a, imm);
```

<span id="intrinsic-__msa2_n2x_sx_sc_d"></span>

## __m128i __msa2_n2x_sx_sc_d (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_sx_sc_d (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.sx.sc.d
Builtin: __builtin_msa2_n2x_sx_sc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:173
```

### Description

Narrow u128 elements into u64 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = signed_saturate(shift(a.i128[0], imm), 64);
dst.u64[1] = signed_saturate(shift(a.i128[1], imm), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa2_n2x_sx_sc_d(a, imm) (__m128i) __builtin_msa2_n2x_sx_sc_d ((v2i64) a, imm);
```

<span id="intrinsic-__msa2_n2x_sx_sc_h"></span>

## __m128i __msa2_n2x_sx_sc_h (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_sx_sc_h (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.sx.sc.h
Builtin: __builtin_msa2_n2x_sx_sc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:167
```

### Description

Narrow u32 elements into u16 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = signed_saturate(shift(a.i32[0], imm), 16);
dst.u16[1] = signed_saturate(shift(a.i32[1], imm), 16);
dst.u16[2] = signed_saturate(shift(a.i32[2], imm), 16);
dst.u16[3] = signed_saturate(shift(a.i32[3], imm), 16);
dst.u16[4] = signed_saturate(shift(a.i32[4], imm), 16);
dst.u16[5] = signed_saturate(shift(a.i32[5], imm), 16);
dst.u16[6] = signed_saturate(shift(a.i32[6], imm), 16);
dst.u16[7] = signed_saturate(shift(a.i32[7], imm), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_sx_sc_h(a, imm) (__m128i) __builtin_msa2_n2x_sx_sc_h ((v8i16) a, imm);
```

<span id="intrinsic-__msa2_n2x_sx_sc_w"></span>

## __m128i __msa2_n2x_sx_sc_w (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_sx_sc_w (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.sx.sc.w
Builtin: __builtin_msa2_n2x_sx_sc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:170
```

### Description

Narrow u64 elements into u32 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = signed_saturate(shift(a.i64[0], imm), 32);
dst.u32[1] = signed_saturate(shift(a.i64[1], imm), 32);
dst.u32[2] = signed_saturate(shift(a.i64[2], imm), 32);
dst.u32[3] = signed_saturate(shift(a.i64[3], imm), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_sx_sc_w(a, imm) (__m128i) __builtin_msa2_n2x_sx_sc_w ((v4i32) a, imm);
```

<span id="intrinsic-__msa2_n2x_sx_uc_b"></span>

## __m128i __msa2_n2x_sx_uc_b (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_sx_uc_b (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.sx.uc.b
Builtin: __builtin_msa2_n2x_sx_uc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:176
```

### Description

Narrow u16 elements into u8 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = unsigned_saturate(shift(a.i16[0], imm), 8);
dst.u8[1] = unsigned_saturate(shift(a.i16[1], imm), 8);
dst.u8[2] = unsigned_saturate(shift(a.i16[2], imm), 8);
dst.u8[3] = unsigned_saturate(shift(a.i16[3], imm), 8);
dst.u8[4] = unsigned_saturate(shift(a.i16[4], imm), 8);
dst.u8[5] = unsigned_saturate(shift(a.i16[5], imm), 8);
dst.u8[6] = unsigned_saturate(shift(a.i16[6], imm), 8);
dst.u8[7] = unsigned_saturate(shift(a.i16[7], imm), 8);
dst.u8[8] = unsigned_saturate(shift(a.i16[8], imm), 8);
dst.u8[9] = unsigned_saturate(shift(a.i16[9], imm), 8);
dst.u8[10] = unsigned_saturate(shift(a.i16[10], imm), 8);
dst.u8[11] = unsigned_saturate(shift(a.i16[11], imm), 8);
dst.u8[12] = unsigned_saturate(shift(a.i16[12], imm), 8);
dst.u8[13] = unsigned_saturate(shift(a.i16[13], imm), 8);
dst.u8[14] = unsigned_saturate(shift(a.i16[14], imm), 8);
dst.u8[15] = unsigned_saturate(shift(a.i16[15], imm), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_sx_uc_b(a, imm) (__m128i) __builtin_msa2_n2x_sx_uc_b ((v16i8) a, imm);
```

<span id="intrinsic-__msa2_n2x_sx_uc_d"></span>

## __m128i __msa2_n2x_sx_uc_d (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_sx_uc_d (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.sx.uc.d
Builtin: __builtin_msa2_n2x_sx_uc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:185
```

### Description

Narrow u128 elements into u64 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = unsigned_saturate(shift(a.i128[0], imm), 64);
dst.u64[1] = unsigned_saturate(shift(a.i128[1], imm), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa2_n2x_sx_uc_d(a, imm) (__m128i) __builtin_msa2_n2x_sx_uc_d ((v2i64) a, imm);
```

<span id="intrinsic-__msa2_n2x_sx_uc_h"></span>

## __m128i __msa2_n2x_sx_uc_h (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_sx_uc_h (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.sx.uc.h
Builtin: __builtin_msa2_n2x_sx_uc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:179
```

### Description

Narrow u32 elements into u16 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = unsigned_saturate(shift(a.i32[0], imm), 16);
dst.u16[1] = unsigned_saturate(shift(a.i32[1], imm), 16);
dst.u16[2] = unsigned_saturate(shift(a.i32[2], imm), 16);
dst.u16[3] = unsigned_saturate(shift(a.i32[3], imm), 16);
dst.u16[4] = unsigned_saturate(shift(a.i32[4], imm), 16);
dst.u16[5] = unsigned_saturate(shift(a.i32[5], imm), 16);
dst.u16[6] = unsigned_saturate(shift(a.i32[6], imm), 16);
dst.u16[7] = unsigned_saturate(shift(a.i32[7], imm), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_sx_uc_h(a, imm) (__m128i) __builtin_msa2_n2x_sx_uc_h ((v8i16) a, imm);
```

<span id="intrinsic-__msa2_n2x_sx_uc_w"></span>

## __m128i __msa2_n2x_sx_uc_w (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_sx_uc_w (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.sx.uc.w
Builtin: __builtin_msa2_n2x_sx_uc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:182
```

### Description

Narrow u64 elements into u32 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = unsigned_saturate(shift(a.i64[0], imm), 32);
dst.u32[1] = unsigned_saturate(shift(a.i64[1], imm), 32);
dst.u32[2] = unsigned_saturate(shift(a.i64[2], imm), 32);
dst.u32[3] = unsigned_saturate(shift(a.i64[3], imm), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_sx_uc_w(a, imm) (__m128i) __builtin_msa2_n2x_sx_uc_w ((v4i32) a, imm);
```

<span id="intrinsic-__msa2_n2x_ux_nc_b"></span>

## __m128i __msa2_n2x_ux_nc_b (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_ux_nc_b (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.ux.nc.b
Builtin: __builtin_msa2_n2x_ux_nc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:224
```

### Description

Narrow u16 elements into u8 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = truncate(shift(a.u16[0], imm), 8);
dst.u8[1] = truncate(shift(a.u16[1], imm), 8);
dst.u8[2] = truncate(shift(a.u16[2], imm), 8);
dst.u8[3] = truncate(shift(a.u16[3], imm), 8);
dst.u8[4] = truncate(shift(a.u16[4], imm), 8);
dst.u8[5] = truncate(shift(a.u16[5], imm), 8);
dst.u8[6] = truncate(shift(a.u16[6], imm), 8);
dst.u8[7] = truncate(shift(a.u16[7], imm), 8);
dst.u8[8] = truncate(shift(a.u16[8], imm), 8);
dst.u8[9] = truncate(shift(a.u16[9], imm), 8);
dst.u8[10] = truncate(shift(a.u16[10], imm), 8);
dst.u8[11] = truncate(shift(a.u16[11], imm), 8);
dst.u8[12] = truncate(shift(a.u16[12], imm), 8);
dst.u8[13] = truncate(shift(a.u16[13], imm), 8);
dst.u8[14] = truncate(shift(a.u16[14], imm), 8);
dst.u8[15] = truncate(shift(a.u16[15], imm), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_ux_nc_b(a, imm) (__m128i) __builtin_msa2_n2x_ux_nc_b ((v16i8) a, imm);
```

<span id="intrinsic-__msa2_n2x_ux_nc_d"></span>

## __m128i __msa2_n2x_ux_nc_d (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_ux_nc_d (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.ux.nc.d
Builtin: __builtin_msa2_n2x_ux_nc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:233
```

### Description

Narrow u128 elements into u64 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = truncate(shift(a.u128[0], imm), 64);
dst.u64[1] = truncate(shift(a.u128[1], imm), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa2_n2x_ux_nc_d(a, imm) (__m128i) __builtin_msa2_n2x_ux_nc_d ((v2i64) a, imm);
```

<span id="intrinsic-__msa2_n2x_ux_nc_h"></span>

## __m128i __msa2_n2x_ux_nc_h (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_ux_nc_h (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.ux.nc.h
Builtin: __builtin_msa2_n2x_ux_nc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:227
```

### Description

Narrow u32 elements into u16 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = truncate(shift(a.u32[0], imm), 16);
dst.u16[1] = truncate(shift(a.u32[1], imm), 16);
dst.u16[2] = truncate(shift(a.u32[2], imm), 16);
dst.u16[3] = truncate(shift(a.u32[3], imm), 16);
dst.u16[4] = truncate(shift(a.u32[4], imm), 16);
dst.u16[5] = truncate(shift(a.u32[5], imm), 16);
dst.u16[6] = truncate(shift(a.u32[6], imm), 16);
dst.u16[7] = truncate(shift(a.u32[7], imm), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_ux_nc_h(a, imm) (__m128i) __builtin_msa2_n2x_ux_nc_h ((v8i16) a, imm);
```

<span id="intrinsic-__msa2_n2x_ux_nc_w"></span>

## __m128i __msa2_n2x_ux_nc_w (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_ux_nc_w (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.ux.nc.w
Builtin: __builtin_msa2_n2x_ux_nc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:230
```

### Description

Narrow u64 elements into u32 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = truncate(shift(a.u64[0], imm), 32);
dst.u32[1] = truncate(shift(a.u64[1], imm), 32);
dst.u32[2] = truncate(shift(a.u64[2], imm), 32);
dst.u32[3] = truncate(shift(a.u64[3], imm), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_ux_nc_w(a, imm) (__m128i) __builtin_msa2_n2x_ux_nc_w ((v4i32) a, imm);
```

<span id="intrinsic-__msa2_n2x_ux_sc_b"></span>

## __m128i __msa2_n2x_ux_sc_b (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_ux_sc_b (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.ux.sc.b
Builtin: __builtin_msa2_n2x_ux_sc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:200
```

### Description

Narrow u16 elements into u8 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = signed_saturate(shift(a.u16[0], imm), 8);
dst.u8[1] = signed_saturate(shift(a.u16[1], imm), 8);
dst.u8[2] = signed_saturate(shift(a.u16[2], imm), 8);
dst.u8[3] = signed_saturate(shift(a.u16[3], imm), 8);
dst.u8[4] = signed_saturate(shift(a.u16[4], imm), 8);
dst.u8[5] = signed_saturate(shift(a.u16[5], imm), 8);
dst.u8[6] = signed_saturate(shift(a.u16[6], imm), 8);
dst.u8[7] = signed_saturate(shift(a.u16[7], imm), 8);
dst.u8[8] = signed_saturate(shift(a.u16[8], imm), 8);
dst.u8[9] = signed_saturate(shift(a.u16[9], imm), 8);
dst.u8[10] = signed_saturate(shift(a.u16[10], imm), 8);
dst.u8[11] = signed_saturate(shift(a.u16[11], imm), 8);
dst.u8[12] = signed_saturate(shift(a.u16[12], imm), 8);
dst.u8[13] = signed_saturate(shift(a.u16[13], imm), 8);
dst.u8[14] = signed_saturate(shift(a.u16[14], imm), 8);
dst.u8[15] = signed_saturate(shift(a.u16[15], imm), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_ux_sc_b(a, imm) (__m128i) __builtin_msa2_n2x_ux_sc_b ((v16i8) a, imm);
```

<span id="intrinsic-__msa2_n2x_ux_sc_d"></span>

## __m128i __msa2_n2x_ux_sc_d (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_ux_sc_d (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.ux.sc.d
Builtin: __builtin_msa2_n2x_ux_sc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:209
```

### Description

Narrow u128 elements into u64 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = signed_saturate(shift(a.u128[0], imm), 64);
dst.u64[1] = signed_saturate(shift(a.u128[1], imm), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa2_n2x_ux_sc_d(a, imm) (__m128i) __builtin_msa2_n2x_ux_sc_d ((v2i64) a, imm);
```

<span id="intrinsic-__msa2_n2x_ux_sc_h"></span>

## __m128i __msa2_n2x_ux_sc_h (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_ux_sc_h (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.ux.sc.h
Builtin: __builtin_msa2_n2x_ux_sc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:203
```

### Description

Narrow u32 elements into u16 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = signed_saturate(shift(a.u32[0], imm), 16);
dst.u16[1] = signed_saturate(shift(a.u32[1], imm), 16);
dst.u16[2] = signed_saturate(shift(a.u32[2], imm), 16);
dst.u16[3] = signed_saturate(shift(a.u32[3], imm), 16);
dst.u16[4] = signed_saturate(shift(a.u32[4], imm), 16);
dst.u16[5] = signed_saturate(shift(a.u32[5], imm), 16);
dst.u16[6] = signed_saturate(shift(a.u32[6], imm), 16);
dst.u16[7] = signed_saturate(shift(a.u32[7], imm), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_ux_sc_h(a, imm) (__m128i) __builtin_msa2_n2x_ux_sc_h ((v8i16) a, imm);
```

<span id="intrinsic-__msa2_n2x_ux_sc_w"></span>

## __m128i __msa2_n2x_ux_sc_w (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_ux_sc_w (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.ux.sc.w
Builtin: __builtin_msa2_n2x_ux_sc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:206
```

### Description

Narrow u64 elements into u32 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = signed_saturate(shift(a.u64[0], imm), 32);
dst.u32[1] = signed_saturate(shift(a.u64[1], imm), 32);
dst.u32[2] = signed_saturate(shift(a.u64[2], imm), 32);
dst.u32[3] = signed_saturate(shift(a.u64[3], imm), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_ux_sc_w(a, imm) (__m128i) __builtin_msa2_n2x_ux_sc_w ((v4i32) a, imm);
```

<span id="intrinsic-__msa2_n2x_ux_uc_b"></span>

## __m128i __msa2_n2x_ux_uc_b (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_ux_uc_b (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.ux.uc.b
Builtin: __builtin_msa2_n2x_ux_uc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:212
```

### Description

Narrow u16 elements into u8 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = unsigned_saturate(shift(a.u16[0], imm), 8);
dst.u8[1] = unsigned_saturate(shift(a.u16[1], imm), 8);
dst.u8[2] = unsigned_saturate(shift(a.u16[2], imm), 8);
dst.u8[3] = unsigned_saturate(shift(a.u16[3], imm), 8);
dst.u8[4] = unsigned_saturate(shift(a.u16[4], imm), 8);
dst.u8[5] = unsigned_saturate(shift(a.u16[5], imm), 8);
dst.u8[6] = unsigned_saturate(shift(a.u16[6], imm), 8);
dst.u8[7] = unsigned_saturate(shift(a.u16[7], imm), 8);
dst.u8[8] = unsigned_saturate(shift(a.u16[8], imm), 8);
dst.u8[9] = unsigned_saturate(shift(a.u16[9], imm), 8);
dst.u8[10] = unsigned_saturate(shift(a.u16[10], imm), 8);
dst.u8[11] = unsigned_saturate(shift(a.u16[11], imm), 8);
dst.u8[12] = unsigned_saturate(shift(a.u16[12], imm), 8);
dst.u8[13] = unsigned_saturate(shift(a.u16[13], imm), 8);
dst.u8[14] = unsigned_saturate(shift(a.u16[14], imm), 8);
dst.u8[15] = unsigned_saturate(shift(a.u16[15], imm), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_ux_uc_b(a, imm) (__m128i) __builtin_msa2_n2x_ux_uc_b ((v16i8) a, imm);
```

<span id="intrinsic-__msa2_n2x_ux_uc_d"></span>

## __m128i __msa2_n2x_ux_uc_d (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_ux_uc_d (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.ux.uc.d
Builtin: __builtin_msa2_n2x_ux_uc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:221
```

### Description

Narrow u128 elements into u64 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = unsigned_saturate(shift(a.u128[0], imm), 64);
dst.u64[1] = unsigned_saturate(shift(a.u128[1], imm), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa2_n2x_ux_uc_d(a, imm) (__m128i) __builtin_msa2_n2x_ux_uc_d ((v2i64) a, imm);
```

<span id="intrinsic-__msa2_n2x_ux_uc_h"></span>

## __m128i __msa2_n2x_ux_uc_h (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_ux_uc_h (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.ux.uc.h
Builtin: __builtin_msa2_n2x_ux_uc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:215
```

### Description

Narrow u32 elements into u16 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = unsigned_saturate(shift(a.u32[0], imm), 16);
dst.u16[1] = unsigned_saturate(shift(a.u32[1], imm), 16);
dst.u16[2] = unsigned_saturate(shift(a.u32[2], imm), 16);
dst.u16[3] = unsigned_saturate(shift(a.u32[3], imm), 16);
dst.u16[4] = unsigned_saturate(shift(a.u32[4], imm), 16);
dst.u16[5] = unsigned_saturate(shift(a.u32[5], imm), 16);
dst.u16[6] = unsigned_saturate(shift(a.u32[6], imm), 16);
dst.u16[7] = unsigned_saturate(shift(a.u32[7], imm), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_ux_uc_h(a, imm) (__m128i) __builtin_msa2_n2x_ux_uc_h ((v8i16) a, imm);
```

<span id="intrinsic-__msa2_n2x_ux_uc_w"></span>

## __m128i __msa2_n2x_ux_uc_w (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_n2x_ux_uc_w (__m128i a, int imm)
#include <msa2.h>
Instruction: n2x.ux.uc.w
Builtin: __builtin_msa2_n2x_ux_uc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:218
```

### Description

Narrow u64 elements into u32 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = unsigned_saturate(shift(a.u64[0], imm), 32);
dst.u32[1] = unsigned_saturate(shift(a.u64[1], imm), 32);
dst.u32[2] = unsigned_saturate(shift(a.u64[2], imm), 32);
dst.u32[3] = unsigned_saturate(shift(a.u64[3], imm), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __msa2_n2x_ux_uc_w(a, imm) (__m128i) __builtin_msa2_n2x_ux_uc_w ((v4i32) a, imm);
```

<span id="intrinsic-__msa2_vperm_b"></span>

## __m128i __msa2_vperm_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vperm_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vperm.b
Builtin: __builtin_msa2_vperm_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:392
```

### Description

Use byte selectors from `c` to choose bytes from `a` or `b`, with selector values in the zero range producing 0.

### Operation

```c
dst.u8[0] = (c.u8[0] & 0x40) ? 0 : ((c.u8[0] & 0x10) ? a.u8[(c.u8[0] & 15)] : b.u8[(c.u8[0] & 15)]);
dst.u8[1] = (c.u8[1] & 0x40) ? 0 : ((c.u8[1] & 0x10) ? a.u8[(c.u8[1] & 15)] : b.u8[(c.u8[1] & 15)]);
dst.u8[2] = (c.u8[2] & 0x40) ? 0 : ((c.u8[2] & 0x10) ? a.u8[(c.u8[2] & 15)] : b.u8[(c.u8[2] & 15)]);
dst.u8[3] = (c.u8[3] & 0x40) ? 0 : ((c.u8[3] & 0x10) ? a.u8[(c.u8[3] & 15)] : b.u8[(c.u8[3] & 15)]);
dst.u8[4] = (c.u8[4] & 0x40) ? 0 : ((c.u8[4] & 0x10) ? a.u8[(c.u8[4] & 15)] : b.u8[(c.u8[4] & 15)]);
dst.u8[5] = (c.u8[5] & 0x40) ? 0 : ((c.u8[5] & 0x10) ? a.u8[(c.u8[5] & 15)] : b.u8[(c.u8[5] & 15)]);
dst.u8[6] = (c.u8[6] & 0x40) ? 0 : ((c.u8[6] & 0x10) ? a.u8[(c.u8[6] & 15)] : b.u8[(c.u8[6] & 15)]);
dst.u8[7] = (c.u8[7] & 0x40) ? 0 : ((c.u8[7] & 0x10) ? a.u8[(c.u8[7] & 15)] : b.u8[(c.u8[7] & 15)]);
dst.u8[8] = (c.u8[8] & 0x40) ? 0 : ((c.u8[8] & 0x10) ? a.u8[(c.u8[8] & 15)] : b.u8[(c.u8[8] & 15)]);
dst.u8[9] = (c.u8[9] & 0x40) ? 0 : ((c.u8[9] & 0x10) ? a.u8[(c.u8[9] & 15)] : b.u8[(c.u8[9] & 15)]);
dst.u8[10] = (c.u8[10] & 0x40) ? 0 : ((c.u8[10] & 0x10) ? a.u8[(c.u8[10] & 15)] : b.u8[(c.u8[10] & 15)]);
dst.u8[11] = (c.u8[11] & 0x40) ? 0 : ((c.u8[11] & 0x10) ? a.u8[(c.u8[11] & 15)] : b.u8[(c.u8[11] & 15)]);
dst.u8[12] = (c.u8[12] & 0x40) ? 0 : ((c.u8[12] & 0x10) ? a.u8[(c.u8[12] & 15)] : b.u8[(c.u8[12] & 15)]);
dst.u8[13] = (c.u8[13] & 0x40) ? 0 : ((c.u8[13] & 0x10) ? a.u8[(c.u8[13] & 15)] : b.u8[(c.u8[13] & 15)]);
dst.u8[14] = (c.u8[14] & 0x40) ? 0 : ((c.u8[14] & 0x10) ? a.u8[(c.u8[14] & 15)] : b.u8[(c.u8[14] & 15)]);
dst.u8[15] = (c.u8[15] & 0x40) ? 0 : ((c.u8[15] & 0x10) ? a.u8[(c.u8[15] & 15)] : b.u8[(c.u8[15] & 15)]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i) __builtin_msa2_vperm_b ((v16i8) a, (v16i8) b, (v16i8) c);
```

<span id="intrinsic-__msa2_w2x_hi_s_b"></span>

## __m128i __msa2_w2x_hi_s_b (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_hi_s_b (__m128i a)
#include <msa2.h>
Instruction: w2x.hi.s.b
Builtin: __builtin_msa2_w2x_hi_s_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:428
```

### Description

Take upper-half i8 lanes, sign- or zero-extend each one into i16 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i16[0] = widen(a.i8[8]) - widen(b.i8[8]);
dst.i16[1] = widen(a.i8[9]) - widen(b.i8[9]);
dst.i16[2] = widen(a.i8[10]) - widen(b.i8[10]);
dst.i16[3] = widen(a.i8[11]) - widen(b.i8[11]);
dst.i16[4] = widen(a.i8[12]) - widen(b.i8[12]);
dst.i16[5] = widen(a.i8[13]) - widen(b.i8[13]);
dst.i16[6] = widen(a.i8[14]) - widen(b.i8[14]);
dst.i16[7] = widen(a.i8[15]) - widen(b.i8[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_hi_s_b ((v16i8) a);
```

<span id="intrinsic-__msa2_w2x_hi_s_d"></span>

## __m128i __msa2_w2x_hi_s_d (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_hi_s_d (__m128i a)
#include <msa2.h>
Instruction: w2x.hi.s.d
Builtin: __builtin_msa2_w2x_hi_s_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:446
```

### Description

Take upper-half i64 lanes, sign- or zero-extend each one into i128 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i128[0] = widen(a.i64[1]) - widen(b.i64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_hi_s_d ((v2i64) a);
```

<span id="intrinsic-__msa2_w2x_hi_s_h"></span>

## __m128i __msa2_w2x_hi_s_h (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_hi_s_h (__m128i a)
#include <msa2.h>
Instruction: w2x.hi.s.h
Builtin: __builtin_msa2_w2x_hi_s_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:434
```

### Description

Take upper-half i16 lanes, sign- or zero-extend each one into i32 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i32[0] = widen(a.i16[4]) - widen(b.i16[4]);
dst.i32[1] = widen(a.i16[5]) - widen(b.i16[5]);
dst.i32[2] = widen(a.i16[6]) - widen(b.i16[6]);
dst.i32[3] = widen(a.i16[7]) - widen(b.i16[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_hi_s_h ((v8i16) a);
```

<span id="intrinsic-__msa2_w2x_hi_s_w"></span>

## __m128i __msa2_w2x_hi_s_w (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_hi_s_w (__m128i a)
#include <msa2.h>
Instruction: w2x.hi.s.w
Builtin: __builtin_msa2_w2x_hi_s_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:440
```

### Description

Take upper-half i32 lanes, sign- or zero-extend each one into i64 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i64[0] = widen(a.i32[2]) - widen(b.i32[2]);
dst.i64[1] = widen(a.i32[3]) - widen(b.i32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_hi_s_w ((v4i32) a);
```

<span id="intrinsic-__msa2_w2x_lo_s_b"></span>

## __m128i __msa2_w2x_lo_s_b (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_lo_s_b (__m128i a)
#include <msa2.h>
Instruction: w2x.lo.s.b
Builtin: __builtin_msa2_w2x_lo_s_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:404
```

### Description

Take lower-half i8 lanes, sign- or zero-extend each one into i16 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i16[0] = widen(a.i8[0]) - widen(b.i8[0]);
dst.i16[1] = widen(a.i8[1]) - widen(b.i8[1]);
dst.i16[2] = widen(a.i8[2]) - widen(b.i8[2]);
dst.i16[3] = widen(a.i8[3]) - widen(b.i8[3]);
dst.i16[4] = widen(a.i8[4]) - widen(b.i8[4]);
dst.i16[5] = widen(a.i8[5]) - widen(b.i8[5]);
dst.i16[6] = widen(a.i8[6]) - widen(b.i8[6]);
dst.i16[7] = widen(a.i8[7]) - widen(b.i8[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_lo_s_b ((v16i8) a);
```

<span id="intrinsic-__msa2_w2x_lo_s_d"></span>

## __m128i __msa2_w2x_lo_s_d (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_lo_s_d (__m128i a)
#include <msa2.h>
Instruction: w2x.lo.s.d
Builtin: __builtin_msa2_w2x_lo_s_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:422
```

### Description

Take lower-half i64 lanes, sign- or zero-extend each one into i128 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) - widen(b.i64[0]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_lo_s_d ((v2i64) a);
```

<span id="intrinsic-__msa2_w2x_lo_s_h"></span>

## __m128i __msa2_w2x_lo_s_h (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_lo_s_h (__m128i a)
#include <msa2.h>
Instruction: w2x.lo.s.h
Builtin: __builtin_msa2_w2x_lo_s_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:410
```

### Description

Take lower-half i16 lanes, sign- or zero-extend each one into i32 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[1] = widen(a.i16[1]) - widen(b.i16[1]);
dst.i32[2] = widen(a.i16[2]) - widen(b.i16[2]);
dst.i32[3] = widen(a.i16[3]) - widen(b.i16[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_lo_s_h ((v8i16) a);
```

<span id="intrinsic-__msa2_w2x_lo_s_w"></span>

## __m128i __msa2_w2x_lo_s_w (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_lo_s_w (__m128i a)
#include <msa2.h>
Instruction: w2x.lo.s.w
Builtin: __builtin_msa2_w2x_lo_s_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:416
```

### Description

Take lower-half i32 lanes, sign- or zero-extend each one into i64 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) - widen(b.i32[0]);
dst.i64[1] = widen(a.i32[1]) - widen(b.i32[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_lo_s_w ((v4i32) a);
```

