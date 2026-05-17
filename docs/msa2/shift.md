# Shift

Generated from `include/msa2.h`. This page contains 8 intrinsics.

<span id="intrinsic-__msa2_ror_b"></span>

## __m128i __msa2_ror_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_ror_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: ror.b
Builtin: __builtin_msa2_ror_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:326
```

### Description

Rotate each u8 lane right by the per-lane shift count.

### Operation

```c
dst.u8[0] = rotate_right(a.u8[0], (b.u8[0] & 7), 8);
dst.u8[1] = rotate_right(a.u8[1], (b.u8[1] & 7), 8);
dst.u8[2] = rotate_right(a.u8[2], (b.u8[2] & 7), 8);
dst.u8[3] = rotate_right(a.u8[3], (b.u8[3] & 7), 8);
dst.u8[4] = rotate_right(a.u8[4], (b.u8[4] & 7), 8);
dst.u8[5] = rotate_right(a.u8[5], (b.u8[5] & 7), 8);
dst.u8[6] = rotate_right(a.u8[6], (b.u8[6] & 7), 8);
dst.u8[7] = rotate_right(a.u8[7], (b.u8[7] & 7), 8);
dst.u8[8] = rotate_right(a.u8[8], (b.u8[8] & 7), 8);
dst.u8[9] = rotate_right(a.u8[9], (b.u8[9] & 7), 8);
dst.u8[10] = rotate_right(a.u8[10], (b.u8[10] & 7), 8);
dst.u8[11] = rotate_right(a.u8[11], (b.u8[11] & 7), 8);
dst.u8[12] = rotate_right(a.u8[12], (b.u8[12] & 7), 8);
dst.u8[13] = rotate_right(a.u8[13], (b.u8[13] & 7), 8);
dst.u8[14] = rotate_right(a.u8[14], (b.u8[14] & 7), 8);
dst.u8[15] = rotate_right(a.u8[15], (b.u8[15] & 7), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m128i) __builtin_msa2_ror_b ((v16i8) a, (v16i8) b);
```

<span id="intrinsic-__msa2_ror_d"></span>

## __m128i __msa2_ror_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_ror_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: ror.d
Builtin: __builtin_msa2_ror_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:344
```

### Description

Rotate each u64 lane right by the per-lane shift count.

### Operation

```c
dst.u64[0] = rotate_right(a.u64[0], (b.u64[0] & 63), 64);
dst.u64[1] = rotate_right(a.u64[1], (b.u64[1] & 63), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m128i) __builtin_msa2_ror_d ((v2i64) a, (v2i64) b);
```

<span id="intrinsic-__msa2_ror_h"></span>

## __m128i __msa2_ror_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_ror_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: ror.h
Builtin: __builtin_msa2_ror_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:332
```

### Description

Rotate each u16 lane right by the per-lane shift count.

### Operation

```c
dst.u16[0] = rotate_right(a.u16[0], (b.u16[0] & 15), 16);
dst.u16[1] = rotate_right(a.u16[1], (b.u16[1] & 15), 16);
dst.u16[2] = rotate_right(a.u16[2], (b.u16[2] & 15), 16);
dst.u16[3] = rotate_right(a.u16[3], (b.u16[3] & 15), 16);
dst.u16[4] = rotate_right(a.u16[4], (b.u16[4] & 15), 16);
dst.u16[5] = rotate_right(a.u16[5], (b.u16[5] & 15), 16);
dst.u16[6] = rotate_right(a.u16[6], (b.u16[6] & 15), 16);
dst.u16[7] = rotate_right(a.u16[7], (b.u16[7] & 15), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m128i) __builtin_msa2_ror_h ((v8i16) a, (v8i16) b);
```

<span id="intrinsic-__msa2_ror_w"></span>

## __m128i __msa2_ror_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_ror_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: ror.w
Builtin: __builtin_msa2_ror_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:338
```

### Description

Rotate each u32 lane right by the per-lane shift count.

### Operation

```c
dst.u32[0] = rotate_right(a.u32[0], (b.u32[0] & 31), 32);
dst.u32[1] = rotate_right(a.u32[1], (b.u32[1] & 31), 32);
dst.u32[2] = rotate_right(a.u32[2], (b.u32[2] & 31), 32);
dst.u32[3] = rotate_right(a.u32[3], (b.u32[3] & 31), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m128i) __builtin_msa2_ror_w ((v4i32) a, (v4i32) b);
```

<span id="intrinsic-__msa2_rori_b"></span>

## __m128i __msa2_rori_b (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_rori_b (__m128i a, int imm)
#include <msa2.h>
Instruction: rori.b
Builtin: __builtin_msa2_rori_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:350
```

### Description

Rotate each u8 lane right by the immediate shift count.

### Operation

```c
dst.u8[0] = rotate_right(a.u8[0], imm, 8);
dst.u8[1] = rotate_right(a.u8[1], imm, 8);
dst.u8[2] = rotate_right(a.u8[2], imm, 8);
dst.u8[3] = rotate_right(a.u8[3], imm, 8);
dst.u8[4] = rotate_right(a.u8[4], imm, 8);
dst.u8[5] = rotate_right(a.u8[5], imm, 8);
dst.u8[6] = rotate_right(a.u8[6], imm, 8);
dst.u8[7] = rotate_right(a.u8[7], imm, 8);
dst.u8[8] = rotate_right(a.u8[8], imm, 8);
dst.u8[9] = rotate_right(a.u8[9], imm, 8);
dst.u8[10] = rotate_right(a.u8[10], imm, 8);
dst.u8[11] = rotate_right(a.u8[11], imm, 8);
dst.u8[12] = rotate_right(a.u8[12], imm, 8);
dst.u8[13] = rotate_right(a.u8[13], imm, 8);
dst.u8[14] = rotate_right(a.u8[14], imm, 8);
dst.u8[15] = rotate_right(a.u8[15], imm, 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa2_rori_b(a, imm) (__m128i) __builtin_msa2_rori_b ((v16i8) a, imm);
```

<span id="intrinsic-__msa2_rori_d"></span>

## __m128i __msa2_rori_d (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_rori_d (__m128i a, int imm)
#include <msa2.h>
Instruction: rori.d
Builtin: __builtin_msa2_rori_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:359
```

### Description

Rotate each u64 lane right by the immediate shift count.

### Operation

```c
dst.u64[0] = rotate_right(a.u64[0], imm, 64);
dst.u64[1] = rotate_right(a.u64[1], imm, 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa2_rori_d(a, imm) (__m128i) __builtin_msa2_rori_d ((v2i64) a, imm);
```

<span id="intrinsic-__msa2_rori_h"></span>

## __m128i __msa2_rori_h (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_rori_h (__m128i a, int imm)
#include <msa2.h>
Instruction: rori.h
Builtin: __builtin_msa2_rori_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:353
```

### Description

Rotate each u16 lane right by the immediate shift count.

### Operation

```c
dst.u16[0] = rotate_right(a.u16[0], imm, 16);
dst.u16[1] = rotate_right(a.u16[1], imm, 16);
dst.u16[2] = rotate_right(a.u16[2], imm, 16);
dst.u16[3] = rotate_right(a.u16[3], imm, 16);
dst.u16[4] = rotate_right(a.u16[4], imm, 16);
dst.u16[5] = rotate_right(a.u16[5], imm, 16);
dst.u16[6] = rotate_right(a.u16[6], imm, 16);
dst.u16[7] = rotate_right(a.u16[7], imm, 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa2_rori_h(a, imm) (__m128i) __builtin_msa2_rori_h ((v8i16) a, imm);
```

<span id="intrinsic-__msa2_rori_w"></span>

## __m128i __msa2_rori_w (__m128i a, int imm)

### Synopsis

```c
__m128i __msa2_rori_w (__m128i a, int imm)
#include <msa2.h>
Instruction: rori.w
Builtin: __builtin_msa2_rori_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:356
```

### Description

Rotate each u32 lane right by the immediate shift count.

### Operation

```c
dst.u32[0] = rotate_right(a.u32[0], imm, 32);
dst.u32[1] = rotate_right(a.u32[1], imm, 32);
dst.u32[2] = rotate_right(a.u32[2], imm, 32);
dst.u32[3] = rotate_right(a.u32[3], imm, 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa2_rori_w(a, imm) (__m128i) __builtin_msa2_rori_w ((v4i32) a, imm);
```

