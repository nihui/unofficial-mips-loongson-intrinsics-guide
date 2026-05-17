# Shift

Generated from `include/loongson-asxintrin.h`. This page contains 116 intrinsics.

<span id="intrinsic-__lasx_mxror_b"></span>

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
dst.u8[16] = rotate_right(a.u8[16], (b.u8[16] & 7), 8);
dst.u8[17] = rotate_right(a.u8[17], (b.u8[17] & 7), 8);
dst.u8[18] = rotate_right(a.u8[18], (b.u8[18] & 7), 8);
dst.u8[19] = rotate_right(a.u8[19], (b.u8[19] & 7), 8);
dst.u8[20] = rotate_right(a.u8[20], (b.u8[20] & 7), 8);
dst.u8[21] = rotate_right(a.u8[21], (b.u8[21] & 7), 8);
dst.u8[22] = rotate_right(a.u8[22], (b.u8[22] & 7), 8);
dst.u8[23] = rotate_right(a.u8[23], (b.u8[23] & 7), 8);
dst.u8[24] = rotate_right(a.u8[24], (b.u8[24] & 7), 8);
dst.u8[25] = rotate_right(a.u8[25], (b.u8[25] & 7), 8);
dst.u8[26] = rotate_right(a.u8[26], (b.u8[26] & 7), 8);
dst.u8[27] = rotate_right(a.u8[27], (b.u8[27] & 7), 8);
dst.u8[28] = rotate_right(a.u8[28], (b.u8[28] & 7), 8);
dst.u8[29] = rotate_right(a.u8[29], (b.u8[29] & 7), 8);
dst.u8[30] = rotate_right(a.u8[30], (b.u8[30] & 7), 8);
dst.u8[31] = rotate_right(a.u8[31], (b.u8[31] & 7), 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxror_b ((v32i8) a, (v32i8) b);
```

<span id="intrinsic-__lasx_mxror_d"></span>

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

Rotate each u64 lane right by the per-lane shift count.

### Operation

```c
dst.u64[0] = rotate_right(a.u64[0], (b.u64[0] & 63), 64);
dst.u64[1] = rotate_right(a.u64[1], (b.u64[1] & 63), 64);
dst.u64[2] = rotate_right(a.u64[2], (b.u64[2] & 63), 64);
dst.u64[3] = rotate_right(a.u64[3], (b.u64[3] & 63), 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxror_d ((v4i64) a, (v4i64) b);
```

<span id="intrinsic-__lasx_mxror_h"></span>

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
dst.u16[8] = rotate_right(a.u16[8], (b.u16[8] & 15), 16);
dst.u16[9] = rotate_right(a.u16[9], (b.u16[9] & 15), 16);
dst.u16[10] = rotate_right(a.u16[10], (b.u16[10] & 15), 16);
dst.u16[11] = rotate_right(a.u16[11], (b.u16[11] & 15), 16);
dst.u16[12] = rotate_right(a.u16[12], (b.u16[12] & 15), 16);
dst.u16[13] = rotate_right(a.u16[13], (b.u16[13] & 15), 16);
dst.u16[14] = rotate_right(a.u16[14], (b.u16[14] & 15), 16);
dst.u16[15] = rotate_right(a.u16[15], (b.u16[15] & 15), 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxror_h ((v16i16) a, (v16i16) b);
```

<span id="intrinsic-__lasx_mxror_w"></span>

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

Rotate each u32 lane right by the per-lane shift count.

### Operation

```c
dst.u32[0] = rotate_right(a.u32[0], (b.u32[0] & 31), 32);
dst.u32[1] = rotate_right(a.u32[1], (b.u32[1] & 31), 32);
dst.u32[2] = rotate_right(a.u32[2], (b.u32[2] & 31), 32);
dst.u32[3] = rotate_right(a.u32[3], (b.u32[3] & 31), 32);
dst.u32[4] = rotate_right(a.u32[4], (b.u32[4] & 31), 32);
dst.u32[5] = rotate_right(a.u32[5], (b.u32[5] & 31), 32);
dst.u32[6] = rotate_right(a.u32[6], (b.u32[6] & 31), 32);
dst.u32[7] = rotate_right(a.u32[7], (b.u32[7] & 31), 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxror_w ((v8i32) a, (v8i32) b);
```

<span id="intrinsic-__lasx_mxrori_b"></span>

## __m256i __lasx_mxrori_b (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxrori_b (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxrori.b
Builtin: __builtin_lasx_mxrori_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4704
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
dst.u8[16] = rotate_right(a.u8[16], imm, 8);
dst.u8[17] = rotate_right(a.u8[17], imm, 8);
dst.u8[18] = rotate_right(a.u8[18], imm, 8);
dst.u8[19] = rotate_right(a.u8[19], imm, 8);
dst.u8[20] = rotate_right(a.u8[20], imm, 8);
dst.u8[21] = rotate_right(a.u8[21], imm, 8);
dst.u8[22] = rotate_right(a.u8[22], imm, 8);
dst.u8[23] = rotate_right(a.u8[23], imm, 8);
dst.u8[24] = rotate_right(a.u8[24], imm, 8);
dst.u8[25] = rotate_right(a.u8[25], imm, 8);
dst.u8[26] = rotate_right(a.u8[26], imm, 8);
dst.u8[27] = rotate_right(a.u8[27], imm, 8);
dst.u8[28] = rotate_right(a.u8[28], imm, 8);
dst.u8[29] = rotate_right(a.u8[29], imm, 8);
dst.u8[30] = rotate_right(a.u8[30], imm, 8);
dst.u8[31] = rotate_right(a.u8[31], imm, 8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxrori_b(a, imm) (__m256i) __builtin_lasx_mxrori_b ((v32i8) a, imm);
```

<span id="intrinsic-__lasx_mxrori_d"></span>

## __m256i __lasx_mxrori_d (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxrori_d (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxrori.d
Builtin: __builtin_lasx_mxrori_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4713
```

### Description

Rotate each u64 lane right by the immediate shift count.

### Operation

```c
dst.u64[0] = rotate_right(a.u64[0], imm, 64);
dst.u64[1] = rotate_right(a.u64[1], imm, 64);
dst.u64[2] = rotate_right(a.u64[2], imm, 64);
dst.u64[3] = rotate_right(a.u64[3], imm, 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxrori_d(a, imm) (__m256i) __builtin_lasx_mxrori_d ((v4i64) a, imm);
```

<span id="intrinsic-__lasx_mxrori_h"></span>

## __m256i __lasx_mxrori_h (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxrori_h (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxrori.h
Builtin: __builtin_lasx_mxrori_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4707
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
dst.u16[8] = rotate_right(a.u16[8], imm, 16);
dst.u16[9] = rotate_right(a.u16[9], imm, 16);
dst.u16[10] = rotate_right(a.u16[10], imm, 16);
dst.u16[11] = rotate_right(a.u16[11], imm, 16);
dst.u16[12] = rotate_right(a.u16[12], imm, 16);
dst.u16[13] = rotate_right(a.u16[13], imm, 16);
dst.u16[14] = rotate_right(a.u16[14], imm, 16);
dst.u16[15] = rotate_right(a.u16[15], imm, 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxrori_h(a, imm) (__m256i) __builtin_lasx_mxrori_h ((v16i16) a, imm);
```

<span id="intrinsic-__lasx_mxrori_w"></span>

## __m256i __lasx_mxrori_w (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxrori_w (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxrori.w
Builtin: __builtin_lasx_mxrori_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4710
```

### Description

Rotate each u32 lane right by the immediate shift count.

### Operation

```c
dst.u32[0] = rotate_right(a.u32[0], imm, 32);
dst.u32[1] = rotate_right(a.u32[1], imm, 32);
dst.u32[2] = rotate_right(a.u32[2], imm, 32);
dst.u32[3] = rotate_right(a.u32[3], imm, 32);
dst.u32[4] = rotate_right(a.u32[4], imm, 32);
dst.u32[5] = rotate_right(a.u32[5], imm, 32);
dst.u32[6] = rotate_right(a.u32[6], imm, 32);
dst.u32[7] = rotate_right(a.u32[7], imm, 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxrori_w(a, imm) (__m256i) __builtin_lasx_mxrori_w ((v8i32) a, imm);
```

<span id="intrinsic-__lasx_mxsll_b"></span>

## __m256i __lasx_mxsll_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsll_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsll.b
Builtin: __builtin_lasx_mxsll_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:74
```

### Description

Shift-left each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] << (b.u8[0] & 7);
dst.u8[1] = a.u8[1] << (b.u8[1] & 7);
dst.u8[2] = a.u8[2] << (b.u8[2] & 7);
dst.u8[3] = a.u8[3] << (b.u8[3] & 7);
dst.u8[4] = a.u8[4] << (b.u8[4] & 7);
dst.u8[5] = a.u8[5] << (b.u8[5] & 7);
dst.u8[6] = a.u8[6] << (b.u8[6] & 7);
dst.u8[7] = a.u8[7] << (b.u8[7] & 7);
dst.u8[8] = a.u8[8] << (b.u8[8] & 7);
dst.u8[9] = a.u8[9] << (b.u8[9] & 7);
dst.u8[10] = a.u8[10] << (b.u8[10] & 7);
dst.u8[11] = a.u8[11] << (b.u8[11] & 7);
dst.u8[12] = a.u8[12] << (b.u8[12] & 7);
dst.u8[13] = a.u8[13] << (b.u8[13] & 7);
dst.u8[14] = a.u8[14] << (b.u8[14] & 7);
dst.u8[15] = a.u8[15] << (b.u8[15] & 7);
dst.u8[16] = a.u8[16] << (b.u8[16] & 7);
dst.u8[17] = a.u8[17] << (b.u8[17] & 7);
dst.u8[18] = a.u8[18] << (b.u8[18] & 7);
dst.u8[19] = a.u8[19] << (b.u8[19] & 7);
dst.u8[20] = a.u8[20] << (b.u8[20] & 7);
dst.u8[21] = a.u8[21] << (b.u8[21] & 7);
dst.u8[22] = a.u8[22] << (b.u8[22] & 7);
dst.u8[23] = a.u8[23] << (b.u8[23] & 7);
dst.u8[24] = a.u8[24] << (b.u8[24] & 7);
dst.u8[25] = a.u8[25] << (b.u8[25] & 7);
dst.u8[26] = a.u8[26] << (b.u8[26] & 7);
dst.u8[27] = a.u8[27] << (b.u8[27] & 7);
dst.u8[28] = a.u8[28] << (b.u8[28] & 7);
dst.u8[29] = a.u8[29] << (b.u8[29] & 7);
dst.u8[30] = a.u8[30] << (b.u8[30] & 7);
dst.u8[31] = a.u8[31] << (b.u8[31] & 7);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsll_b((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxsll_d"></span>

## __m256i __lasx_mxsll_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsll_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsll.d
Builtin: __builtin_lasx_mxsll_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:95
```

### Description

Shift-left each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] << (b.u64[0] & 63);
dst.u64[1] = a.u64[1] << (b.u64[1] & 63);
dst.u64[2] = a.u64[2] << (b.u64[2] & 63);
dst.u64[3] = a.u64[3] << (b.u64[3] & 63);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsll_d((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxsll_h"></span>

## __m256i __lasx_mxsll_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsll_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsll.h
Builtin: __builtin_lasx_mxsll_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:81
```

### Description

Shift-left each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] << (b.u16[0] & 15);
dst.u16[1] = a.u16[1] << (b.u16[1] & 15);
dst.u16[2] = a.u16[2] << (b.u16[2] & 15);
dst.u16[3] = a.u16[3] << (b.u16[3] & 15);
dst.u16[4] = a.u16[4] << (b.u16[4] & 15);
dst.u16[5] = a.u16[5] << (b.u16[5] & 15);
dst.u16[6] = a.u16[6] << (b.u16[6] & 15);
dst.u16[7] = a.u16[7] << (b.u16[7] & 15);
dst.u16[8] = a.u16[8] << (b.u16[8] & 15);
dst.u16[9] = a.u16[9] << (b.u16[9] & 15);
dst.u16[10] = a.u16[10] << (b.u16[10] & 15);
dst.u16[11] = a.u16[11] << (b.u16[11] & 15);
dst.u16[12] = a.u16[12] << (b.u16[12] & 15);
dst.u16[13] = a.u16[13] << (b.u16[13] & 15);
dst.u16[14] = a.u16[14] << (b.u16[14] & 15);
dst.u16[15] = a.u16[15] << (b.u16[15] & 15);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsll_h((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxsll_w"></span>

## __m256i __lasx_mxsll_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsll_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsll.w
Builtin: __builtin_lasx_mxsll_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:88
```

### Description

Shift-left each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] << (b.u32[0] & 31);
dst.u32[1] = a.u32[1] << (b.u32[1] & 31);
dst.u32[2] = a.u32[2] << (b.u32[2] & 31);
dst.u32[3] = a.u32[3] << (b.u32[3] & 31);
dst.u32[4] = a.u32[4] << (b.u32[4] & 31);
dst.u32[5] = a.u32[5] << (b.u32[5] & 31);
dst.u32[6] = a.u32[6] << (b.u32[6] & 31);
dst.u32[7] = a.u32[7] << (b.u32[7] & 31);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsll_w((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxslli_b"></span>

## __m256i __lasx_mxslli_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxslli_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxslli.b
Builtin: __builtin_lasx_mxslli_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:101
```

### Description

Shift-left each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] << imm;
dst.u8[1] = a.u8[1] << imm;
dst.u8[2] = a.u8[2] << imm;
dst.u8[3] = a.u8[3] << imm;
dst.u8[4] = a.u8[4] << imm;
dst.u8[5] = a.u8[5] << imm;
dst.u8[6] = a.u8[6] << imm;
dst.u8[7] = a.u8[7] << imm;
dst.u8[8] = a.u8[8] << imm;
dst.u8[9] = a.u8[9] << imm;
dst.u8[10] = a.u8[10] << imm;
dst.u8[11] = a.u8[11] << imm;
dst.u8[12] = a.u8[12] << imm;
dst.u8[13] = a.u8[13] << imm;
dst.u8[14] = a.u8[14] << imm;
dst.u8[15] = a.u8[15] << imm;
dst.u8[16] = a.u8[16] << imm;
dst.u8[17] = a.u8[17] << imm;
dst.u8[18] = a.u8[18] << imm;
dst.u8[19] = a.u8[19] << imm;
dst.u8[20] = a.u8[20] << imm;
dst.u8[21] = a.u8[21] << imm;
dst.u8[22] = a.u8[22] << imm;
dst.u8[23] = a.u8[23] << imm;
dst.u8[24] = a.u8[24] << imm;
dst.u8[25] = a.u8[25] << imm;
dst.u8[26] = a.u8[26] << imm;
dst.u8[27] = a.u8[27] << imm;
dst.u8[28] = a.u8[28] << imm;
dst.u8[29] = a.u8[29] << imm;
dst.u8[30] = a.u8[30] << imm;
dst.u8[31] = a.u8[31] << imm;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxslli_b(a, imm) ((__m256i)__builtin_lasx_mxslli_b((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxslli_d"></span>

## __m256i __lasx_mxslli_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxslli_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxslli.d
Builtin: __builtin_lasx_mxslli_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:104
```

### Description

Shift-left each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] << imm;
dst.u64[1] = a.u64[1] << imm;
dst.u64[2] = a.u64[2] << imm;
dst.u64[3] = a.u64[3] << imm;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxslli_d(a, imm) ((__m256i)__builtin_lasx_mxslli_d((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxslli_h"></span>

## __m256i __lasx_mxslli_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxslli_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxslli.h
Builtin: __builtin_lasx_mxslli_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:102
```

### Description

Shift-left each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] << imm;
dst.u16[1] = a.u16[1] << imm;
dst.u16[2] = a.u16[2] << imm;
dst.u16[3] = a.u16[3] << imm;
dst.u16[4] = a.u16[4] << imm;
dst.u16[5] = a.u16[5] << imm;
dst.u16[6] = a.u16[6] << imm;
dst.u16[7] = a.u16[7] << imm;
dst.u16[8] = a.u16[8] << imm;
dst.u16[9] = a.u16[9] << imm;
dst.u16[10] = a.u16[10] << imm;
dst.u16[11] = a.u16[11] << imm;
dst.u16[12] = a.u16[12] << imm;
dst.u16[13] = a.u16[13] << imm;
dst.u16[14] = a.u16[14] << imm;
dst.u16[15] = a.u16[15] << imm;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxslli_h(a, imm) ((__m256i)__builtin_lasx_mxslli_h((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxslli_w"></span>

## __m256i __lasx_mxslli_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxslli_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxslli.w
Builtin: __builtin_lasx_mxslli_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:103
```

### Description

Shift-left each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] << imm;
dst.u32[1] = a.u32[1] << imm;
dst.u32[2] = a.u32[2] << imm;
dst.u32[3] = a.u32[3] << imm;
dst.u32[4] = a.u32[4] << imm;
dst.u32[5] = a.u32[5] << imm;
dst.u32[6] = a.u32[6] << imm;
dst.u32[7] = a.u32[7] << imm;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxslli_w(a, imm) ((__m256i)__builtin_lasx_mxslli_w((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsra_b"></span>

## __m256i __lasx_mxsra_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsra_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsra.b
Builtin: __builtin_lasx_mxsra_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:106
```

### Description

Arithmetic-shift-right each signed u8 lane.

### Operation

```c
dst.i8[0] = arithmetic_shift_right(a.i8[0], (b.i8[0] & 7));
dst.i8[1] = arithmetic_shift_right(a.i8[1], (b.i8[1] & 7));
dst.i8[2] = arithmetic_shift_right(a.i8[2], (b.i8[2] & 7));
dst.i8[3] = arithmetic_shift_right(a.i8[3], (b.i8[3] & 7));
dst.i8[4] = arithmetic_shift_right(a.i8[4], (b.i8[4] & 7));
dst.i8[5] = arithmetic_shift_right(a.i8[5], (b.i8[5] & 7));
dst.i8[6] = arithmetic_shift_right(a.i8[6], (b.i8[6] & 7));
dst.i8[7] = arithmetic_shift_right(a.i8[7], (b.i8[7] & 7));
dst.i8[8] = arithmetic_shift_right(a.i8[8], (b.i8[8] & 7));
dst.i8[9] = arithmetic_shift_right(a.i8[9], (b.i8[9] & 7));
dst.i8[10] = arithmetic_shift_right(a.i8[10], (b.i8[10] & 7));
dst.i8[11] = arithmetic_shift_right(a.i8[11], (b.i8[11] & 7));
dst.i8[12] = arithmetic_shift_right(a.i8[12], (b.i8[12] & 7));
dst.i8[13] = arithmetic_shift_right(a.i8[13], (b.i8[13] & 7));
dst.i8[14] = arithmetic_shift_right(a.i8[14], (b.i8[14] & 7));
dst.i8[15] = arithmetic_shift_right(a.i8[15], (b.i8[15] & 7));
dst.i8[16] = arithmetic_shift_right(a.i8[16], (b.i8[16] & 7));
dst.i8[17] = arithmetic_shift_right(a.i8[17], (b.i8[17] & 7));
dst.i8[18] = arithmetic_shift_right(a.i8[18], (b.i8[18] & 7));
dst.i8[19] = arithmetic_shift_right(a.i8[19], (b.i8[19] & 7));
dst.i8[20] = arithmetic_shift_right(a.i8[20], (b.i8[20] & 7));
dst.i8[21] = arithmetic_shift_right(a.i8[21], (b.i8[21] & 7));
dst.i8[22] = arithmetic_shift_right(a.i8[22], (b.i8[22] & 7));
dst.i8[23] = arithmetic_shift_right(a.i8[23], (b.i8[23] & 7));
dst.i8[24] = arithmetic_shift_right(a.i8[24], (b.i8[24] & 7));
dst.i8[25] = arithmetic_shift_right(a.i8[25], (b.i8[25] & 7));
dst.i8[26] = arithmetic_shift_right(a.i8[26], (b.i8[26] & 7));
dst.i8[27] = arithmetic_shift_right(a.i8[27], (b.i8[27] & 7));
dst.i8[28] = arithmetic_shift_right(a.i8[28], (b.i8[28] & 7));
dst.i8[29] = arithmetic_shift_right(a.i8[29], (b.i8[29] & 7));
dst.i8[30] = arithmetic_shift_right(a.i8[30], (b.i8[30] & 7));
dst.i8[31] = arithmetic_shift_right(a.i8[31], (b.i8[31] & 7));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsra_b((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxsra_d"></span>

## __m256i __lasx_mxsra_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsra_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsra.d
Builtin: __builtin_lasx_mxsra_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:127
```

### Description

Arithmetic-shift-right each signed u64 lane.

### Operation

```c
dst.i64[0] = arithmetic_shift_right(a.i64[0], (b.i64[0] & 63));
dst.i64[1] = arithmetic_shift_right(a.i64[1], (b.i64[1] & 63));
dst.i64[2] = arithmetic_shift_right(a.i64[2], (b.i64[2] & 63));
dst.i64[3] = arithmetic_shift_right(a.i64[3], (b.i64[3] & 63));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsra_d((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxsra_h"></span>

## __m256i __lasx_mxsra_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsra_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsra.h
Builtin: __builtin_lasx_mxsra_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:113
```

### Description

Arithmetic-shift-right each signed u16 lane.

### Operation

```c
dst.i16[0] = arithmetic_shift_right(a.i16[0], (b.i16[0] & 15));
dst.i16[1] = arithmetic_shift_right(a.i16[1], (b.i16[1] & 15));
dst.i16[2] = arithmetic_shift_right(a.i16[2], (b.i16[2] & 15));
dst.i16[3] = arithmetic_shift_right(a.i16[3], (b.i16[3] & 15));
dst.i16[4] = arithmetic_shift_right(a.i16[4], (b.i16[4] & 15));
dst.i16[5] = arithmetic_shift_right(a.i16[5], (b.i16[5] & 15));
dst.i16[6] = arithmetic_shift_right(a.i16[6], (b.i16[6] & 15));
dst.i16[7] = arithmetic_shift_right(a.i16[7], (b.i16[7] & 15));
dst.i16[8] = arithmetic_shift_right(a.i16[8], (b.i16[8] & 15));
dst.i16[9] = arithmetic_shift_right(a.i16[9], (b.i16[9] & 15));
dst.i16[10] = arithmetic_shift_right(a.i16[10], (b.i16[10] & 15));
dst.i16[11] = arithmetic_shift_right(a.i16[11], (b.i16[11] & 15));
dst.i16[12] = arithmetic_shift_right(a.i16[12], (b.i16[12] & 15));
dst.i16[13] = arithmetic_shift_right(a.i16[13], (b.i16[13] & 15));
dst.i16[14] = arithmetic_shift_right(a.i16[14], (b.i16[14] & 15));
dst.i16[15] = arithmetic_shift_right(a.i16[15], (b.i16[15] & 15));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsra_h((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxsra_w"></span>

## __m256i __lasx_mxsra_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsra_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsra.w
Builtin: __builtin_lasx_mxsra_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:120
```

### Description

Arithmetic-shift-right each signed u32 lane.

### Operation

```c
dst.i32[0] = arithmetic_shift_right(a.i32[0], (b.i32[0] & 31));
dst.i32[1] = arithmetic_shift_right(a.i32[1], (b.i32[1] & 31));
dst.i32[2] = arithmetic_shift_right(a.i32[2], (b.i32[2] & 31));
dst.i32[3] = arithmetic_shift_right(a.i32[3], (b.i32[3] & 31));
dst.i32[4] = arithmetic_shift_right(a.i32[4], (b.i32[4] & 31));
dst.i32[5] = arithmetic_shift_right(a.i32[5], (b.i32[5] & 31));
dst.i32[6] = arithmetic_shift_right(a.i32[6], (b.i32[6] & 31));
dst.i32[7] = arithmetic_shift_right(a.i32[7], (b.i32[7] & 31));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsra_w((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxsrai_b"></span>

## __m256i __lasx_mxsrai_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrai_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrai.b
Builtin: __builtin_lasx_mxsrai_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:133
```

### Description

Arithmetic-shift-right each signed u8 lane.

### Operation

```c
dst.i8[0] = arithmetic_shift_right(a.i8[0], imm);
dst.i8[1] = arithmetic_shift_right(a.i8[1], imm);
dst.i8[2] = arithmetic_shift_right(a.i8[2], imm);
dst.i8[3] = arithmetic_shift_right(a.i8[3], imm);
dst.i8[4] = arithmetic_shift_right(a.i8[4], imm);
dst.i8[5] = arithmetic_shift_right(a.i8[5], imm);
dst.i8[6] = arithmetic_shift_right(a.i8[6], imm);
dst.i8[7] = arithmetic_shift_right(a.i8[7], imm);
dst.i8[8] = arithmetic_shift_right(a.i8[8], imm);
dst.i8[9] = arithmetic_shift_right(a.i8[9], imm);
dst.i8[10] = arithmetic_shift_right(a.i8[10], imm);
dst.i8[11] = arithmetic_shift_right(a.i8[11], imm);
dst.i8[12] = arithmetic_shift_right(a.i8[12], imm);
dst.i8[13] = arithmetic_shift_right(a.i8[13], imm);
dst.i8[14] = arithmetic_shift_right(a.i8[14], imm);
dst.i8[15] = arithmetic_shift_right(a.i8[15], imm);
dst.i8[16] = arithmetic_shift_right(a.i8[16], imm);
dst.i8[17] = arithmetic_shift_right(a.i8[17], imm);
dst.i8[18] = arithmetic_shift_right(a.i8[18], imm);
dst.i8[19] = arithmetic_shift_right(a.i8[19], imm);
dst.i8[20] = arithmetic_shift_right(a.i8[20], imm);
dst.i8[21] = arithmetic_shift_right(a.i8[21], imm);
dst.i8[22] = arithmetic_shift_right(a.i8[22], imm);
dst.i8[23] = arithmetic_shift_right(a.i8[23], imm);
dst.i8[24] = arithmetic_shift_right(a.i8[24], imm);
dst.i8[25] = arithmetic_shift_right(a.i8[25], imm);
dst.i8[26] = arithmetic_shift_right(a.i8[26], imm);
dst.i8[27] = arithmetic_shift_right(a.i8[27], imm);
dst.i8[28] = arithmetic_shift_right(a.i8[28], imm);
dst.i8[29] = arithmetic_shift_right(a.i8[29], imm);
dst.i8[30] = arithmetic_shift_right(a.i8[30], imm);
dst.i8[31] = arithmetic_shift_right(a.i8[31], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxsrai_b(a, imm) ((__m256i)__builtin_lasx_mxsrai_b((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrai_d"></span>

## __m256i __lasx_mxsrai_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrai_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrai.d
Builtin: __builtin_lasx_mxsrai_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:136
```

### Description

Arithmetic-shift-right each signed u64 lane.

### Operation

```c
dst.i64[0] = arithmetic_shift_right(a.i64[0], imm);
dst.i64[1] = arithmetic_shift_right(a.i64[1], imm);
dst.i64[2] = arithmetic_shift_right(a.i64[2], imm);
dst.i64[3] = arithmetic_shift_right(a.i64[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxsrai_d(a, imm) ((__m256i)__builtin_lasx_mxsrai_d((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrai_h"></span>

## __m256i __lasx_mxsrai_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrai_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrai.h
Builtin: __builtin_lasx_mxsrai_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:134
```

### Description

Arithmetic-shift-right each signed u16 lane.

### Operation

```c
dst.i16[0] = arithmetic_shift_right(a.i16[0], imm);
dst.i16[1] = arithmetic_shift_right(a.i16[1], imm);
dst.i16[2] = arithmetic_shift_right(a.i16[2], imm);
dst.i16[3] = arithmetic_shift_right(a.i16[3], imm);
dst.i16[4] = arithmetic_shift_right(a.i16[4], imm);
dst.i16[5] = arithmetic_shift_right(a.i16[5], imm);
dst.i16[6] = arithmetic_shift_right(a.i16[6], imm);
dst.i16[7] = arithmetic_shift_right(a.i16[7], imm);
dst.i16[8] = arithmetic_shift_right(a.i16[8], imm);
dst.i16[9] = arithmetic_shift_right(a.i16[9], imm);
dst.i16[10] = arithmetic_shift_right(a.i16[10], imm);
dst.i16[11] = arithmetic_shift_right(a.i16[11], imm);
dst.i16[12] = arithmetic_shift_right(a.i16[12], imm);
dst.i16[13] = arithmetic_shift_right(a.i16[13], imm);
dst.i16[14] = arithmetic_shift_right(a.i16[14], imm);
dst.i16[15] = arithmetic_shift_right(a.i16[15], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxsrai_h(a, imm) ((__m256i)__builtin_lasx_mxsrai_h((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrai_w"></span>

## __m256i __lasx_mxsrai_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrai_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrai.w
Builtin: __builtin_lasx_mxsrai_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:135
```

### Description

Arithmetic-shift-right each signed u32 lane.

### Operation

```c
dst.i32[0] = arithmetic_shift_right(a.i32[0], imm);
dst.i32[1] = arithmetic_shift_right(a.i32[1], imm);
dst.i32[2] = arithmetic_shift_right(a.i32[2], imm);
dst.i32[3] = arithmetic_shift_right(a.i32[3], imm);
dst.i32[4] = arithmetic_shift_right(a.i32[4], imm);
dst.i32[5] = arithmetic_shift_right(a.i32[5], imm);
dst.i32[6] = arithmetic_shift_right(a.i32[6], imm);
dst.i32[7] = arithmetic_shift_right(a.i32[7], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxsrai_w(a, imm) ((__m256i)__builtin_lasx_mxsrai_w((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrar_b"></span>

## __m256i __lasx_mxsrar_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsrar_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsrar.b
Builtin: __builtin_lasx_mxsrar_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:138
```

### Description

Round and arithmetic-shift-right each u8 lane.

### Operation

```c
dst.i8[0] = rounding_arithmetic_shift_right(a.i8[0], (b.i8[0] & 7));
dst.i8[1] = rounding_arithmetic_shift_right(a.i8[1], (b.i8[1] & 7));
dst.i8[2] = rounding_arithmetic_shift_right(a.i8[2], (b.i8[2] & 7));
dst.i8[3] = rounding_arithmetic_shift_right(a.i8[3], (b.i8[3] & 7));
dst.i8[4] = rounding_arithmetic_shift_right(a.i8[4], (b.i8[4] & 7));
dst.i8[5] = rounding_arithmetic_shift_right(a.i8[5], (b.i8[5] & 7));
dst.i8[6] = rounding_arithmetic_shift_right(a.i8[6], (b.i8[6] & 7));
dst.i8[7] = rounding_arithmetic_shift_right(a.i8[7], (b.i8[7] & 7));
dst.i8[8] = rounding_arithmetic_shift_right(a.i8[8], (b.i8[8] & 7));
dst.i8[9] = rounding_arithmetic_shift_right(a.i8[9], (b.i8[9] & 7));
dst.i8[10] = rounding_arithmetic_shift_right(a.i8[10], (b.i8[10] & 7));
dst.i8[11] = rounding_arithmetic_shift_right(a.i8[11], (b.i8[11] & 7));
dst.i8[12] = rounding_arithmetic_shift_right(a.i8[12], (b.i8[12] & 7));
dst.i8[13] = rounding_arithmetic_shift_right(a.i8[13], (b.i8[13] & 7));
dst.i8[14] = rounding_arithmetic_shift_right(a.i8[14], (b.i8[14] & 7));
dst.i8[15] = rounding_arithmetic_shift_right(a.i8[15], (b.i8[15] & 7));
dst.i8[16] = rounding_arithmetic_shift_right(a.i8[16], (b.i8[16] & 7));
dst.i8[17] = rounding_arithmetic_shift_right(a.i8[17], (b.i8[17] & 7));
dst.i8[18] = rounding_arithmetic_shift_right(a.i8[18], (b.i8[18] & 7));
dst.i8[19] = rounding_arithmetic_shift_right(a.i8[19], (b.i8[19] & 7));
dst.i8[20] = rounding_arithmetic_shift_right(a.i8[20], (b.i8[20] & 7));
dst.i8[21] = rounding_arithmetic_shift_right(a.i8[21], (b.i8[21] & 7));
dst.i8[22] = rounding_arithmetic_shift_right(a.i8[22], (b.i8[22] & 7));
dst.i8[23] = rounding_arithmetic_shift_right(a.i8[23], (b.i8[23] & 7));
dst.i8[24] = rounding_arithmetic_shift_right(a.i8[24], (b.i8[24] & 7));
dst.i8[25] = rounding_arithmetic_shift_right(a.i8[25], (b.i8[25] & 7));
dst.i8[26] = rounding_arithmetic_shift_right(a.i8[26], (b.i8[26] & 7));
dst.i8[27] = rounding_arithmetic_shift_right(a.i8[27], (b.i8[27] & 7));
dst.i8[28] = rounding_arithmetic_shift_right(a.i8[28], (b.i8[28] & 7));
dst.i8[29] = rounding_arithmetic_shift_right(a.i8[29], (b.i8[29] & 7));
dst.i8[30] = rounding_arithmetic_shift_right(a.i8[30], (b.i8[30] & 7));
dst.i8[31] = rounding_arithmetic_shift_right(a.i8[31], (b.i8[31] & 7));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrar_b((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxsrar_d"></span>

## __m256i __lasx_mxsrar_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsrar_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsrar.d
Builtin: __builtin_lasx_mxsrar_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:159
```

### Description

Round and arithmetic-shift-right each u64 lane.

### Operation

```c
dst.i64[0] = rounding_arithmetic_shift_right(a.i64[0], (b.i64[0] & 63));
dst.i64[1] = rounding_arithmetic_shift_right(a.i64[1], (b.i64[1] & 63));
dst.i64[2] = rounding_arithmetic_shift_right(a.i64[2], (b.i64[2] & 63));
dst.i64[3] = rounding_arithmetic_shift_right(a.i64[3], (b.i64[3] & 63));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrar_d((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxsrar_h"></span>

## __m256i __lasx_mxsrar_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsrar_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsrar.h
Builtin: __builtin_lasx_mxsrar_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:145
```

### Description

Round and arithmetic-shift-right each u16 lane.

### Operation

```c
dst.i16[0] = rounding_arithmetic_shift_right(a.i16[0], (b.i16[0] & 15));
dst.i16[1] = rounding_arithmetic_shift_right(a.i16[1], (b.i16[1] & 15));
dst.i16[2] = rounding_arithmetic_shift_right(a.i16[2], (b.i16[2] & 15));
dst.i16[3] = rounding_arithmetic_shift_right(a.i16[3], (b.i16[3] & 15));
dst.i16[4] = rounding_arithmetic_shift_right(a.i16[4], (b.i16[4] & 15));
dst.i16[5] = rounding_arithmetic_shift_right(a.i16[5], (b.i16[5] & 15));
dst.i16[6] = rounding_arithmetic_shift_right(a.i16[6], (b.i16[6] & 15));
dst.i16[7] = rounding_arithmetic_shift_right(a.i16[7], (b.i16[7] & 15));
dst.i16[8] = rounding_arithmetic_shift_right(a.i16[8], (b.i16[8] & 15));
dst.i16[9] = rounding_arithmetic_shift_right(a.i16[9], (b.i16[9] & 15));
dst.i16[10] = rounding_arithmetic_shift_right(a.i16[10], (b.i16[10] & 15));
dst.i16[11] = rounding_arithmetic_shift_right(a.i16[11], (b.i16[11] & 15));
dst.i16[12] = rounding_arithmetic_shift_right(a.i16[12], (b.i16[12] & 15));
dst.i16[13] = rounding_arithmetic_shift_right(a.i16[13], (b.i16[13] & 15));
dst.i16[14] = rounding_arithmetic_shift_right(a.i16[14], (b.i16[14] & 15));
dst.i16[15] = rounding_arithmetic_shift_right(a.i16[15], (b.i16[15] & 15));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrar_h((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxsrar_w"></span>

## __m256i __lasx_mxsrar_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsrar_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsrar.w
Builtin: __builtin_lasx_mxsrar_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:152
```

### Description

Round and arithmetic-shift-right each u32 lane.

### Operation

```c
dst.i32[0] = rounding_arithmetic_shift_right(a.i32[0], (b.i32[0] & 31));
dst.i32[1] = rounding_arithmetic_shift_right(a.i32[1], (b.i32[1] & 31));
dst.i32[2] = rounding_arithmetic_shift_right(a.i32[2], (b.i32[2] & 31));
dst.i32[3] = rounding_arithmetic_shift_right(a.i32[3], (b.i32[3] & 31));
dst.i32[4] = rounding_arithmetic_shift_right(a.i32[4], (b.i32[4] & 31));
dst.i32[5] = rounding_arithmetic_shift_right(a.i32[5], (b.i32[5] & 31));
dst.i32[6] = rounding_arithmetic_shift_right(a.i32[6], (b.i32[6] & 31));
dst.i32[7] = rounding_arithmetic_shift_right(a.i32[7], (b.i32[7] & 31));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrar_w((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxsrari_b"></span>

## __m256i __lasx_mxsrari_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrari_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrari.b
Builtin: __builtin_lasx_mxsrari_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:165
```

### Description

Round and arithmetic-shift-right each u8 lane.

### Operation

```c
dst.i8[0] = rounding_arithmetic_shift_right(a.i8[0], imm);
dst.i8[1] = rounding_arithmetic_shift_right(a.i8[1], imm);
dst.i8[2] = rounding_arithmetic_shift_right(a.i8[2], imm);
dst.i8[3] = rounding_arithmetic_shift_right(a.i8[3], imm);
dst.i8[4] = rounding_arithmetic_shift_right(a.i8[4], imm);
dst.i8[5] = rounding_arithmetic_shift_right(a.i8[5], imm);
dst.i8[6] = rounding_arithmetic_shift_right(a.i8[6], imm);
dst.i8[7] = rounding_arithmetic_shift_right(a.i8[7], imm);
dst.i8[8] = rounding_arithmetic_shift_right(a.i8[8], imm);
dst.i8[9] = rounding_arithmetic_shift_right(a.i8[9], imm);
dst.i8[10] = rounding_arithmetic_shift_right(a.i8[10], imm);
dst.i8[11] = rounding_arithmetic_shift_right(a.i8[11], imm);
dst.i8[12] = rounding_arithmetic_shift_right(a.i8[12], imm);
dst.i8[13] = rounding_arithmetic_shift_right(a.i8[13], imm);
dst.i8[14] = rounding_arithmetic_shift_right(a.i8[14], imm);
dst.i8[15] = rounding_arithmetic_shift_right(a.i8[15], imm);
dst.i8[16] = rounding_arithmetic_shift_right(a.i8[16], imm);
dst.i8[17] = rounding_arithmetic_shift_right(a.i8[17], imm);
dst.i8[18] = rounding_arithmetic_shift_right(a.i8[18], imm);
dst.i8[19] = rounding_arithmetic_shift_right(a.i8[19], imm);
dst.i8[20] = rounding_arithmetic_shift_right(a.i8[20], imm);
dst.i8[21] = rounding_arithmetic_shift_right(a.i8[21], imm);
dst.i8[22] = rounding_arithmetic_shift_right(a.i8[22], imm);
dst.i8[23] = rounding_arithmetic_shift_right(a.i8[23], imm);
dst.i8[24] = rounding_arithmetic_shift_right(a.i8[24], imm);
dst.i8[25] = rounding_arithmetic_shift_right(a.i8[25], imm);
dst.i8[26] = rounding_arithmetic_shift_right(a.i8[26], imm);
dst.i8[27] = rounding_arithmetic_shift_right(a.i8[27], imm);
dst.i8[28] = rounding_arithmetic_shift_right(a.i8[28], imm);
dst.i8[29] = rounding_arithmetic_shift_right(a.i8[29], imm);
dst.i8[30] = rounding_arithmetic_shift_right(a.i8[30], imm);
dst.i8[31] = rounding_arithmetic_shift_right(a.i8[31], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __lasx_mxsrari_b(a, imm) ((__m256i)__builtin_lasx_mxsrari_b((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrari_d"></span>

## __m256i __lasx_mxsrari_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrari_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrari.d
Builtin: __builtin_lasx_mxsrari_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:168
```

### Description

Round and arithmetic-shift-right each u64 lane.

### Operation

```c
dst.i64[0] = rounding_arithmetic_shift_right(a.i64[0], imm);
dst.i64[1] = rounding_arithmetic_shift_right(a.i64[1], imm);
dst.i64[2] = rounding_arithmetic_shift_right(a.i64[2], imm);
dst.i64[3] = rounding_arithmetic_shift_right(a.i64[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __lasx_mxsrari_d(a, imm) ((__m256i)__builtin_lasx_mxsrari_d((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrari_h"></span>

## __m256i __lasx_mxsrari_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrari_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrari.h
Builtin: __builtin_lasx_mxsrari_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:166
```

### Description

Round and arithmetic-shift-right each u16 lane.

### Operation

```c
dst.i16[0] = rounding_arithmetic_shift_right(a.i16[0], imm);
dst.i16[1] = rounding_arithmetic_shift_right(a.i16[1], imm);
dst.i16[2] = rounding_arithmetic_shift_right(a.i16[2], imm);
dst.i16[3] = rounding_arithmetic_shift_right(a.i16[3], imm);
dst.i16[4] = rounding_arithmetic_shift_right(a.i16[4], imm);
dst.i16[5] = rounding_arithmetic_shift_right(a.i16[5], imm);
dst.i16[6] = rounding_arithmetic_shift_right(a.i16[6], imm);
dst.i16[7] = rounding_arithmetic_shift_right(a.i16[7], imm);
dst.i16[8] = rounding_arithmetic_shift_right(a.i16[8], imm);
dst.i16[9] = rounding_arithmetic_shift_right(a.i16[9], imm);
dst.i16[10] = rounding_arithmetic_shift_right(a.i16[10], imm);
dst.i16[11] = rounding_arithmetic_shift_right(a.i16[11], imm);
dst.i16[12] = rounding_arithmetic_shift_right(a.i16[12], imm);
dst.i16[13] = rounding_arithmetic_shift_right(a.i16[13], imm);
dst.i16[14] = rounding_arithmetic_shift_right(a.i16[14], imm);
dst.i16[15] = rounding_arithmetic_shift_right(a.i16[15], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __lasx_mxsrari_h(a, imm) ((__m256i)__builtin_lasx_mxsrari_h((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrari_w"></span>

## __m256i __lasx_mxsrari_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrari_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrari.w
Builtin: __builtin_lasx_mxsrari_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:167
```

### Description

Round and arithmetic-shift-right each u32 lane.

### Operation

```c
dst.i32[0] = rounding_arithmetic_shift_right(a.i32[0], imm);
dst.i32[1] = rounding_arithmetic_shift_right(a.i32[1], imm);
dst.i32[2] = rounding_arithmetic_shift_right(a.i32[2], imm);
dst.i32[3] = rounding_arithmetic_shift_right(a.i32[3], imm);
dst.i32[4] = rounding_arithmetic_shift_right(a.i32[4], imm);
dst.i32[5] = rounding_arithmetic_shift_right(a.i32[5], imm);
dst.i32[6] = rounding_arithmetic_shift_right(a.i32[6], imm);
dst.i32[7] = rounding_arithmetic_shift_right(a.i32[7], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __lasx_mxsrari_w(a, imm) ((__m256i)__builtin_lasx_mxsrari_w((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrl_b"></span>

## __m256i __lasx_mxsrl_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsrl_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsrl.b
Builtin: __builtin_lasx_mxsrl_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:170
```

### Description

Logical-shift-right each unsigned u8 lane.

### Operation

```c
dst.u8[0] = logical_shift_right(a.u8[0], (b.u8[0] & 7));
dst.u8[1] = logical_shift_right(a.u8[1], (b.u8[1] & 7));
dst.u8[2] = logical_shift_right(a.u8[2], (b.u8[2] & 7));
dst.u8[3] = logical_shift_right(a.u8[3], (b.u8[3] & 7));
dst.u8[4] = logical_shift_right(a.u8[4], (b.u8[4] & 7));
dst.u8[5] = logical_shift_right(a.u8[5], (b.u8[5] & 7));
dst.u8[6] = logical_shift_right(a.u8[6], (b.u8[6] & 7));
dst.u8[7] = logical_shift_right(a.u8[7], (b.u8[7] & 7));
dst.u8[8] = logical_shift_right(a.u8[8], (b.u8[8] & 7));
dst.u8[9] = logical_shift_right(a.u8[9], (b.u8[9] & 7));
dst.u8[10] = logical_shift_right(a.u8[10], (b.u8[10] & 7));
dst.u8[11] = logical_shift_right(a.u8[11], (b.u8[11] & 7));
dst.u8[12] = logical_shift_right(a.u8[12], (b.u8[12] & 7));
dst.u8[13] = logical_shift_right(a.u8[13], (b.u8[13] & 7));
dst.u8[14] = logical_shift_right(a.u8[14], (b.u8[14] & 7));
dst.u8[15] = logical_shift_right(a.u8[15], (b.u8[15] & 7));
dst.u8[16] = logical_shift_right(a.u8[16], (b.u8[16] & 7));
dst.u8[17] = logical_shift_right(a.u8[17], (b.u8[17] & 7));
dst.u8[18] = logical_shift_right(a.u8[18], (b.u8[18] & 7));
dst.u8[19] = logical_shift_right(a.u8[19], (b.u8[19] & 7));
dst.u8[20] = logical_shift_right(a.u8[20], (b.u8[20] & 7));
dst.u8[21] = logical_shift_right(a.u8[21], (b.u8[21] & 7));
dst.u8[22] = logical_shift_right(a.u8[22], (b.u8[22] & 7));
dst.u8[23] = logical_shift_right(a.u8[23], (b.u8[23] & 7));
dst.u8[24] = logical_shift_right(a.u8[24], (b.u8[24] & 7));
dst.u8[25] = logical_shift_right(a.u8[25], (b.u8[25] & 7));
dst.u8[26] = logical_shift_right(a.u8[26], (b.u8[26] & 7));
dst.u8[27] = logical_shift_right(a.u8[27], (b.u8[27] & 7));
dst.u8[28] = logical_shift_right(a.u8[28], (b.u8[28] & 7));
dst.u8[29] = logical_shift_right(a.u8[29], (b.u8[29] & 7));
dst.u8[30] = logical_shift_right(a.u8[30], (b.u8[30] & 7));
dst.u8[31] = logical_shift_right(a.u8[31], (b.u8[31] & 7));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrl_b((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxsrl_d"></span>

## __m256i __lasx_mxsrl_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsrl_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsrl.d
Builtin: __builtin_lasx_mxsrl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:191
```

### Description

Logical-shift-right each unsigned u64 lane.

### Operation

```c
dst.u64[0] = logical_shift_right(a.u64[0], (b.u64[0] & 63));
dst.u64[1] = logical_shift_right(a.u64[1], (b.u64[1] & 63));
dst.u64[2] = logical_shift_right(a.u64[2], (b.u64[2] & 63));
dst.u64[3] = logical_shift_right(a.u64[3], (b.u64[3] & 63));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrl_d((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxsrl_h"></span>

## __m256i __lasx_mxsrl_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsrl_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsrl.h
Builtin: __builtin_lasx_mxsrl_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:177
```

### Description

Logical-shift-right each unsigned u16 lane.

### Operation

```c
dst.u16[0] = logical_shift_right(a.u16[0], (b.u16[0] & 15));
dst.u16[1] = logical_shift_right(a.u16[1], (b.u16[1] & 15));
dst.u16[2] = logical_shift_right(a.u16[2], (b.u16[2] & 15));
dst.u16[3] = logical_shift_right(a.u16[3], (b.u16[3] & 15));
dst.u16[4] = logical_shift_right(a.u16[4], (b.u16[4] & 15));
dst.u16[5] = logical_shift_right(a.u16[5], (b.u16[5] & 15));
dst.u16[6] = logical_shift_right(a.u16[6], (b.u16[6] & 15));
dst.u16[7] = logical_shift_right(a.u16[7], (b.u16[7] & 15));
dst.u16[8] = logical_shift_right(a.u16[8], (b.u16[8] & 15));
dst.u16[9] = logical_shift_right(a.u16[9], (b.u16[9] & 15));
dst.u16[10] = logical_shift_right(a.u16[10], (b.u16[10] & 15));
dst.u16[11] = logical_shift_right(a.u16[11], (b.u16[11] & 15));
dst.u16[12] = logical_shift_right(a.u16[12], (b.u16[12] & 15));
dst.u16[13] = logical_shift_right(a.u16[13], (b.u16[13] & 15));
dst.u16[14] = logical_shift_right(a.u16[14], (b.u16[14] & 15));
dst.u16[15] = logical_shift_right(a.u16[15], (b.u16[15] & 15));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrl_h((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxsrl_w"></span>

## __m256i __lasx_mxsrl_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsrl_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsrl.w
Builtin: __builtin_lasx_mxsrl_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:184
```

### Description

Logical-shift-right each unsigned u32 lane.

### Operation

```c
dst.u32[0] = logical_shift_right(a.u32[0], (b.u32[0] & 31));
dst.u32[1] = logical_shift_right(a.u32[1], (b.u32[1] & 31));
dst.u32[2] = logical_shift_right(a.u32[2], (b.u32[2] & 31));
dst.u32[3] = logical_shift_right(a.u32[3], (b.u32[3] & 31));
dst.u32[4] = logical_shift_right(a.u32[4], (b.u32[4] & 31));
dst.u32[5] = logical_shift_right(a.u32[5], (b.u32[5] & 31));
dst.u32[6] = logical_shift_right(a.u32[6], (b.u32[6] & 31));
dst.u32[7] = logical_shift_right(a.u32[7], (b.u32[7] & 31));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrl_w((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxsrli_b"></span>

## __m256i __lasx_mxsrli_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrli_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrli.b
Builtin: __builtin_lasx_mxsrli_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:197
```

### Description

Logical-shift-right each unsigned u8 lane.

### Operation

```c
dst.u8[0] = logical_shift_right(a.u8[0], imm);
dst.u8[1] = logical_shift_right(a.u8[1], imm);
dst.u8[2] = logical_shift_right(a.u8[2], imm);
dst.u8[3] = logical_shift_right(a.u8[3], imm);
dst.u8[4] = logical_shift_right(a.u8[4], imm);
dst.u8[5] = logical_shift_right(a.u8[5], imm);
dst.u8[6] = logical_shift_right(a.u8[6], imm);
dst.u8[7] = logical_shift_right(a.u8[7], imm);
dst.u8[8] = logical_shift_right(a.u8[8], imm);
dst.u8[9] = logical_shift_right(a.u8[9], imm);
dst.u8[10] = logical_shift_right(a.u8[10], imm);
dst.u8[11] = logical_shift_right(a.u8[11], imm);
dst.u8[12] = logical_shift_right(a.u8[12], imm);
dst.u8[13] = logical_shift_right(a.u8[13], imm);
dst.u8[14] = logical_shift_right(a.u8[14], imm);
dst.u8[15] = logical_shift_right(a.u8[15], imm);
dst.u8[16] = logical_shift_right(a.u8[16], imm);
dst.u8[17] = logical_shift_right(a.u8[17], imm);
dst.u8[18] = logical_shift_right(a.u8[18], imm);
dst.u8[19] = logical_shift_right(a.u8[19], imm);
dst.u8[20] = logical_shift_right(a.u8[20], imm);
dst.u8[21] = logical_shift_right(a.u8[21], imm);
dst.u8[22] = logical_shift_right(a.u8[22], imm);
dst.u8[23] = logical_shift_right(a.u8[23], imm);
dst.u8[24] = logical_shift_right(a.u8[24], imm);
dst.u8[25] = logical_shift_right(a.u8[25], imm);
dst.u8[26] = logical_shift_right(a.u8[26], imm);
dst.u8[27] = logical_shift_right(a.u8[27], imm);
dst.u8[28] = logical_shift_right(a.u8[28], imm);
dst.u8[29] = logical_shift_right(a.u8[29], imm);
dst.u8[30] = logical_shift_right(a.u8[30], imm);
dst.u8[31] = logical_shift_right(a.u8[31], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxsrli_b(a, imm) ((__m256i)__builtin_lasx_mxsrli_b((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrli_d"></span>

## __m256i __lasx_mxsrli_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrli_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrli.d
Builtin: __builtin_lasx_mxsrli_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:200
```

### Description

Logical-shift-right each unsigned u64 lane.

### Operation

```c
dst.u64[0] = logical_shift_right(a.u64[0], imm);
dst.u64[1] = logical_shift_right(a.u64[1], imm);
dst.u64[2] = logical_shift_right(a.u64[2], imm);
dst.u64[3] = logical_shift_right(a.u64[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxsrli_d(a, imm) ((__m256i)__builtin_lasx_mxsrli_d((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrli_h"></span>

## __m256i __lasx_mxsrli_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrli_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrli.h
Builtin: __builtin_lasx_mxsrli_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:198
```

### Description

Logical-shift-right each unsigned u16 lane.

### Operation

```c
dst.u16[0] = logical_shift_right(a.u16[0], imm);
dst.u16[1] = logical_shift_right(a.u16[1], imm);
dst.u16[2] = logical_shift_right(a.u16[2], imm);
dst.u16[3] = logical_shift_right(a.u16[3], imm);
dst.u16[4] = logical_shift_right(a.u16[4], imm);
dst.u16[5] = logical_shift_right(a.u16[5], imm);
dst.u16[6] = logical_shift_right(a.u16[6], imm);
dst.u16[7] = logical_shift_right(a.u16[7], imm);
dst.u16[8] = logical_shift_right(a.u16[8], imm);
dst.u16[9] = logical_shift_right(a.u16[9], imm);
dst.u16[10] = logical_shift_right(a.u16[10], imm);
dst.u16[11] = logical_shift_right(a.u16[11], imm);
dst.u16[12] = logical_shift_right(a.u16[12], imm);
dst.u16[13] = logical_shift_right(a.u16[13], imm);
dst.u16[14] = logical_shift_right(a.u16[14], imm);
dst.u16[15] = logical_shift_right(a.u16[15], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxsrli_h(a, imm) ((__m256i)__builtin_lasx_mxsrli_h((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrli_w"></span>

## __m256i __lasx_mxsrli_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrli_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrli.w
Builtin: __builtin_lasx_mxsrli_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:199
```

### Description

Logical-shift-right each unsigned u32 lane.

### Operation

```c
dst.u32[0] = logical_shift_right(a.u32[0], imm);
dst.u32[1] = logical_shift_right(a.u32[1], imm);
dst.u32[2] = logical_shift_right(a.u32[2], imm);
dst.u32[3] = logical_shift_right(a.u32[3], imm);
dst.u32[4] = logical_shift_right(a.u32[4], imm);
dst.u32[5] = logical_shift_right(a.u32[5], imm);
dst.u32[6] = logical_shift_right(a.u32[6], imm);
dst.u32[7] = logical_shift_right(a.u32[7], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxsrli_w(a, imm) ((__m256i)__builtin_lasx_mxsrli_w((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrlr_b"></span>

## __m256i __lasx_mxsrlr_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsrlr_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsrlr.b
Builtin: __builtin_lasx_mxsrlr_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:202
```

### Description

Round and logical-shift-right each u8 lane.

### Operation

```c
dst.u8[0] = rounding_logical_shift_right(a.u8[0], (b.u8[0] & 7));
dst.u8[1] = rounding_logical_shift_right(a.u8[1], (b.u8[1] & 7));
dst.u8[2] = rounding_logical_shift_right(a.u8[2], (b.u8[2] & 7));
dst.u8[3] = rounding_logical_shift_right(a.u8[3], (b.u8[3] & 7));
dst.u8[4] = rounding_logical_shift_right(a.u8[4], (b.u8[4] & 7));
dst.u8[5] = rounding_logical_shift_right(a.u8[5], (b.u8[5] & 7));
dst.u8[6] = rounding_logical_shift_right(a.u8[6], (b.u8[6] & 7));
dst.u8[7] = rounding_logical_shift_right(a.u8[7], (b.u8[7] & 7));
dst.u8[8] = rounding_logical_shift_right(a.u8[8], (b.u8[8] & 7));
dst.u8[9] = rounding_logical_shift_right(a.u8[9], (b.u8[9] & 7));
dst.u8[10] = rounding_logical_shift_right(a.u8[10], (b.u8[10] & 7));
dst.u8[11] = rounding_logical_shift_right(a.u8[11], (b.u8[11] & 7));
dst.u8[12] = rounding_logical_shift_right(a.u8[12], (b.u8[12] & 7));
dst.u8[13] = rounding_logical_shift_right(a.u8[13], (b.u8[13] & 7));
dst.u8[14] = rounding_logical_shift_right(a.u8[14], (b.u8[14] & 7));
dst.u8[15] = rounding_logical_shift_right(a.u8[15], (b.u8[15] & 7));
dst.u8[16] = rounding_logical_shift_right(a.u8[16], (b.u8[16] & 7));
dst.u8[17] = rounding_logical_shift_right(a.u8[17], (b.u8[17] & 7));
dst.u8[18] = rounding_logical_shift_right(a.u8[18], (b.u8[18] & 7));
dst.u8[19] = rounding_logical_shift_right(a.u8[19], (b.u8[19] & 7));
dst.u8[20] = rounding_logical_shift_right(a.u8[20], (b.u8[20] & 7));
dst.u8[21] = rounding_logical_shift_right(a.u8[21], (b.u8[21] & 7));
dst.u8[22] = rounding_logical_shift_right(a.u8[22], (b.u8[22] & 7));
dst.u8[23] = rounding_logical_shift_right(a.u8[23], (b.u8[23] & 7));
dst.u8[24] = rounding_logical_shift_right(a.u8[24], (b.u8[24] & 7));
dst.u8[25] = rounding_logical_shift_right(a.u8[25], (b.u8[25] & 7));
dst.u8[26] = rounding_logical_shift_right(a.u8[26], (b.u8[26] & 7));
dst.u8[27] = rounding_logical_shift_right(a.u8[27], (b.u8[27] & 7));
dst.u8[28] = rounding_logical_shift_right(a.u8[28], (b.u8[28] & 7));
dst.u8[29] = rounding_logical_shift_right(a.u8[29], (b.u8[29] & 7));
dst.u8[30] = rounding_logical_shift_right(a.u8[30], (b.u8[30] & 7));
dst.u8[31] = rounding_logical_shift_right(a.u8[31], (b.u8[31] & 7));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrlr_b((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxsrlr_d"></span>

## __m256i __lasx_mxsrlr_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsrlr_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsrlr.d
Builtin: __builtin_lasx_mxsrlr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:223
```

### Description

Round and logical-shift-right each u64 lane.

### Operation

```c
dst.u64[0] = rounding_logical_shift_right(a.u64[0], (b.u64[0] & 63));
dst.u64[1] = rounding_logical_shift_right(a.u64[1], (b.u64[1] & 63));
dst.u64[2] = rounding_logical_shift_right(a.u64[2], (b.u64[2] & 63));
dst.u64[3] = rounding_logical_shift_right(a.u64[3], (b.u64[3] & 63));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrlr_d((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxsrlr_h"></span>

## __m256i __lasx_mxsrlr_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsrlr_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsrlr.h
Builtin: __builtin_lasx_mxsrlr_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:209
```

### Description

Round and logical-shift-right each u16 lane.

### Operation

```c
dst.u16[0] = rounding_logical_shift_right(a.u16[0], (b.u16[0] & 15));
dst.u16[1] = rounding_logical_shift_right(a.u16[1], (b.u16[1] & 15));
dst.u16[2] = rounding_logical_shift_right(a.u16[2], (b.u16[2] & 15));
dst.u16[3] = rounding_logical_shift_right(a.u16[3], (b.u16[3] & 15));
dst.u16[4] = rounding_logical_shift_right(a.u16[4], (b.u16[4] & 15));
dst.u16[5] = rounding_logical_shift_right(a.u16[5], (b.u16[5] & 15));
dst.u16[6] = rounding_logical_shift_right(a.u16[6], (b.u16[6] & 15));
dst.u16[7] = rounding_logical_shift_right(a.u16[7], (b.u16[7] & 15));
dst.u16[8] = rounding_logical_shift_right(a.u16[8], (b.u16[8] & 15));
dst.u16[9] = rounding_logical_shift_right(a.u16[9], (b.u16[9] & 15));
dst.u16[10] = rounding_logical_shift_right(a.u16[10], (b.u16[10] & 15));
dst.u16[11] = rounding_logical_shift_right(a.u16[11], (b.u16[11] & 15));
dst.u16[12] = rounding_logical_shift_right(a.u16[12], (b.u16[12] & 15));
dst.u16[13] = rounding_logical_shift_right(a.u16[13], (b.u16[13] & 15));
dst.u16[14] = rounding_logical_shift_right(a.u16[14], (b.u16[14] & 15));
dst.u16[15] = rounding_logical_shift_right(a.u16[15], (b.u16[15] & 15));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrlr_h((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxsrlr_w"></span>

## __m256i __lasx_mxsrlr_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsrlr_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsrlr.w
Builtin: __builtin_lasx_mxsrlr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:216
```

### Description

Round and logical-shift-right each u32 lane.

### Operation

```c
dst.u32[0] = rounding_logical_shift_right(a.u32[0], (b.u32[0] & 31));
dst.u32[1] = rounding_logical_shift_right(a.u32[1], (b.u32[1] & 31));
dst.u32[2] = rounding_logical_shift_right(a.u32[2], (b.u32[2] & 31));
dst.u32[3] = rounding_logical_shift_right(a.u32[3], (b.u32[3] & 31));
dst.u32[4] = rounding_logical_shift_right(a.u32[4], (b.u32[4] & 31));
dst.u32[5] = rounding_logical_shift_right(a.u32[5], (b.u32[5] & 31));
dst.u32[6] = rounding_logical_shift_right(a.u32[6], (b.u32[6] & 31));
dst.u32[7] = rounding_logical_shift_right(a.u32[7], (b.u32[7] & 31));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsrlr_w((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxsrlri_b"></span>

## __m256i __lasx_mxsrlri_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrlri_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrlri.b
Builtin: __builtin_lasx_mxsrlri_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:229
```

### Description

Round and logical-shift-right each u8 lane.

### Operation

```c
dst.u8[0] = rounding_logical_shift_right(a.u8[0], imm);
dst.u8[1] = rounding_logical_shift_right(a.u8[1], imm);
dst.u8[2] = rounding_logical_shift_right(a.u8[2], imm);
dst.u8[3] = rounding_logical_shift_right(a.u8[3], imm);
dst.u8[4] = rounding_logical_shift_right(a.u8[4], imm);
dst.u8[5] = rounding_logical_shift_right(a.u8[5], imm);
dst.u8[6] = rounding_logical_shift_right(a.u8[6], imm);
dst.u8[7] = rounding_logical_shift_right(a.u8[7], imm);
dst.u8[8] = rounding_logical_shift_right(a.u8[8], imm);
dst.u8[9] = rounding_logical_shift_right(a.u8[9], imm);
dst.u8[10] = rounding_logical_shift_right(a.u8[10], imm);
dst.u8[11] = rounding_logical_shift_right(a.u8[11], imm);
dst.u8[12] = rounding_logical_shift_right(a.u8[12], imm);
dst.u8[13] = rounding_logical_shift_right(a.u8[13], imm);
dst.u8[14] = rounding_logical_shift_right(a.u8[14], imm);
dst.u8[15] = rounding_logical_shift_right(a.u8[15], imm);
dst.u8[16] = rounding_logical_shift_right(a.u8[16], imm);
dst.u8[17] = rounding_logical_shift_right(a.u8[17], imm);
dst.u8[18] = rounding_logical_shift_right(a.u8[18], imm);
dst.u8[19] = rounding_logical_shift_right(a.u8[19], imm);
dst.u8[20] = rounding_logical_shift_right(a.u8[20], imm);
dst.u8[21] = rounding_logical_shift_right(a.u8[21], imm);
dst.u8[22] = rounding_logical_shift_right(a.u8[22], imm);
dst.u8[23] = rounding_logical_shift_right(a.u8[23], imm);
dst.u8[24] = rounding_logical_shift_right(a.u8[24], imm);
dst.u8[25] = rounding_logical_shift_right(a.u8[25], imm);
dst.u8[26] = rounding_logical_shift_right(a.u8[26], imm);
dst.u8[27] = rounding_logical_shift_right(a.u8[27], imm);
dst.u8[28] = rounding_logical_shift_right(a.u8[28], imm);
dst.u8[29] = rounding_logical_shift_right(a.u8[29], imm);
dst.u8[30] = rounding_logical_shift_right(a.u8[30], imm);
dst.u8[31] = rounding_logical_shift_right(a.u8[31], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __lasx_mxsrlri_b(a, imm) ((__m256i)__builtin_lasx_mxsrlri_b((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrlri_d"></span>

## __m256i __lasx_mxsrlri_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrlri_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrlri.d
Builtin: __builtin_lasx_mxsrlri_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:232
```

### Description

Round and logical-shift-right each u64 lane.

### Operation

```c
dst.u64[0] = rounding_logical_shift_right(a.u64[0], imm);
dst.u64[1] = rounding_logical_shift_right(a.u64[1], imm);
dst.u64[2] = rounding_logical_shift_right(a.u64[2], imm);
dst.u64[3] = rounding_logical_shift_right(a.u64[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __lasx_mxsrlri_d(a, imm) ((__m256i)__builtin_lasx_mxsrlri_d((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrlri_h"></span>

## __m256i __lasx_mxsrlri_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrlri_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrlri.h
Builtin: __builtin_lasx_mxsrlri_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:230
```

### Description

Round and logical-shift-right each u16 lane.

### Operation

```c
dst.u16[0] = rounding_logical_shift_right(a.u16[0], imm);
dst.u16[1] = rounding_logical_shift_right(a.u16[1], imm);
dst.u16[2] = rounding_logical_shift_right(a.u16[2], imm);
dst.u16[3] = rounding_logical_shift_right(a.u16[3], imm);
dst.u16[4] = rounding_logical_shift_right(a.u16[4], imm);
dst.u16[5] = rounding_logical_shift_right(a.u16[5], imm);
dst.u16[6] = rounding_logical_shift_right(a.u16[6], imm);
dst.u16[7] = rounding_logical_shift_right(a.u16[7], imm);
dst.u16[8] = rounding_logical_shift_right(a.u16[8], imm);
dst.u16[9] = rounding_logical_shift_right(a.u16[9], imm);
dst.u16[10] = rounding_logical_shift_right(a.u16[10], imm);
dst.u16[11] = rounding_logical_shift_right(a.u16[11], imm);
dst.u16[12] = rounding_logical_shift_right(a.u16[12], imm);
dst.u16[13] = rounding_logical_shift_right(a.u16[13], imm);
dst.u16[14] = rounding_logical_shift_right(a.u16[14], imm);
dst.u16[15] = rounding_logical_shift_right(a.u16[15], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __lasx_mxsrlri_h(a, imm) ((__m256i)__builtin_lasx_mxsrlri_h((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxsrlri_w"></span>

## __m256i __lasx_mxsrlri_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsrlri_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsrlri.w
Builtin: __builtin_lasx_mxsrlri_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:231
```

### Description

Round and logical-shift-right each u32 lane.

### Operation

```c
dst.u32[0] = rounding_logical_shift_right(a.u32[0], imm);
dst.u32[1] = rounding_logical_shift_right(a.u32[1], imm);
dst.u32[2] = rounding_logical_shift_right(a.u32[2], imm);
dst.u32[3] = rounding_logical_shift_right(a.u32[3], imm);
dst.u32[4] = rounding_logical_shift_right(a.u32[4], imm);
dst.u32[5] = rounding_logical_shift_right(a.u32[5], imm);
dst.u32[6] = rounding_logical_shift_right(a.u32[6], imm);
dst.u32[7] = rounding_logical_shift_right(a.u32[7], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __lasx_mxsrlri_w(a, imm) ((__m256i)__builtin_lasx_mxsrlri_w((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvbsll_v"></span>

## __m256i __lasx_mxvbsll_v (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvbsll_v (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvbsll.v
Builtin: __builtin_lasx_mxvbsll_v
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3642
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
#define __lasx_mxvbsll_v(a, imm) ((__m256i)__builtin_lasx_mxvbsll_v((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvbsrl_v"></span>

## __m256i __lasx_mxvbsrl_v (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvbsrl_v (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvbsrl.v
Builtin: __builtin_lasx_mxvbsrl_v
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3641
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
#define __lasx_mxvbsrl_v(a, imm) ((__m256i)__builtin_lasx_mxvbsrl_v((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsllix_s_d"></span>

## __m256i __lasx_mxvsllix_s_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsllix_s_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsllix.s.d
Builtin: __builtin_lasx_mxvsllix_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3277
```

### Description

Shift narrower i32 lanes left by the immediate amount and write the widened results into 4 x i64 lanes.

### Operation

```c
dst.i64[0] = extend(a.i32[0] << imm, 32, 64);
dst.i64[1] = extend(a.i32[1] << imm, 32, 64);
dst.i64[2] = extend(a.i32[2] << imm, 32, 64);
dst.i64[3] = extend(a.i32[3] << imm, 32, 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lasx_mxvsllix_s_d(a, imm) ((__m256i)__builtin_lasx_mxvsllix_s_d((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsllix_s_h"></span>

## __m256i __lasx_mxvsllix_s_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsllix_s_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsllix.s.h
Builtin: __builtin_lasx_mxvsllix_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3279
```

### Description

Shift narrower i8 lanes left by the immediate amount and write the widened results into 16 x i16 lanes.

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
dst.i16[8] = extend(a.i8[8] << imm, 8, 16);
dst.i16[9] = extend(a.i8[9] << imm, 8, 16);
dst.i16[10] = extend(a.i8[10] << imm, 8, 16);
dst.i16[11] = extend(a.i8[11] << imm, 8, 16);
dst.i16[12] = extend(a.i8[12] << imm, 8, 16);
dst.i16[13] = extend(a.i8[13] << imm, 8, 16);
dst.i16[14] = extend(a.i8[14] << imm, 8, 16);
dst.i16[15] = extend(a.i8[15] << imm, 8, 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lasx_mxvsllix_s_h(a, imm) ((__m256i)__builtin_lasx_mxvsllix_s_h((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsllix_s_w"></span>

## __m256i __lasx_mxvsllix_s_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsllix_s_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsllix.s.w
Builtin: __builtin_lasx_mxvsllix_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3278
```

### Description

Shift narrower i16 lanes left by the immediate amount and write the widened results into 8 x i32 lanes.

### Operation

```c
dst.i32[0] = extend(a.i16[0] << imm, 16, 32);
dst.i32[1] = extend(a.i16[1] << imm, 16, 32);
dst.i32[2] = extend(a.i16[2] << imm, 16, 32);
dst.i32[3] = extend(a.i16[3] << imm, 16, 32);
dst.i32[4] = extend(a.i16[4] << imm, 16, 32);
dst.i32[5] = extend(a.i16[5] << imm, 16, 32);
dst.i32[6] = extend(a.i16[6] << imm, 16, 32);
dst.i32[7] = extend(a.i16[7] << imm, 16, 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lasx_mxvsllix_s_w(a, imm) ((__m256i)__builtin_lasx_mxvsllix_s_w((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsllix_u_d"></span>

## __m256i __lasx_mxvsllix_u_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsllix_u_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsllix.u.d
Builtin: __builtin_lasx_mxvsllix_u_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3280
```

### Description

Shift narrower u32 lanes left by the immediate amount and write the widened results into 4 x u64 lanes.

### Operation

```c
dst.u64[0] = extend(a.u32[0] << imm, 32, 64);
dst.u64[1] = extend(a.u32[1] << imm, 32, 64);
dst.u64[2] = extend(a.u32[2] << imm, 32, 64);
dst.u64[3] = extend(a.u32[3] << imm, 32, 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lasx_mxvsllix_u_d(a, imm) ((__m256i)__builtin_lasx_mxvsllix_u_d((v8u32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsllix_u_h"></span>

## __m256i __lasx_mxvsllix_u_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsllix_u_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsllix.u.h
Builtin: __builtin_lasx_mxvsllix_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3282
```

### Description

Shift narrower u8 lanes left by the immediate amount and write the widened results into 16 x u16 lanes.

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
dst.u16[8] = extend(a.u8[8] << imm, 8, 16);
dst.u16[9] = extend(a.u8[9] << imm, 8, 16);
dst.u16[10] = extend(a.u8[10] << imm, 8, 16);
dst.u16[11] = extend(a.u8[11] << imm, 8, 16);
dst.u16[12] = extend(a.u8[12] << imm, 8, 16);
dst.u16[13] = extend(a.u8[13] << imm, 8, 16);
dst.u16[14] = extend(a.u8[14] << imm, 8, 16);
dst.u16[15] = extend(a.u8[15] << imm, 8, 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lasx_mxvsllix_u_h(a, imm) ((__m256i)__builtin_lasx_mxvsllix_u_h((v32u8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsllix_u_w"></span>

## __m256i __lasx_mxvsllix_u_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsllix_u_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsllix.u.w
Builtin: __builtin_lasx_mxvsllix_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3281
```

### Description

Shift narrower u16 lanes left by the immediate amount and write the widened results into 8 x u32 lanes.

### Operation

```c
dst.u32[0] = extend(a.u16[0] << imm, 16, 32);
dst.u32[1] = extend(a.u16[1] << imm, 16, 32);
dst.u32[2] = extend(a.u16[2] << imm, 16, 32);
dst.u32[3] = extend(a.u16[3] << imm, 16, 32);
dst.u32[4] = extend(a.u16[4] << imm, 16, 32);
dst.u32[5] = extend(a.u16[5] << imm, 16, 32);
dst.u32[6] = extend(a.u16[6] << imm, 16, 32);
dst.u32[7] = extend(a.u16[7] << imm, 16, 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lasx_mxvsllix_u_w(a, imm) ((__m256i)__builtin_lasx_mxvsllix_u_w((v16u16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrain_b"></span>

## __m256i __lasx_mxvsrain_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrain_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrain.b
Builtin: __builtin_lasx_mxvsrain_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3348
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes, and clear the unused high lanes.

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
dst.i8[8] = truncate(arithmetic_shift_right(a.i16[8], imm & 15), 8);
dst.i8[9] = truncate(arithmetic_shift_right(a.i16[9], imm & 15), 8);
dst.i8[10] = truncate(arithmetic_shift_right(a.i16[10], imm & 15), 8);
dst.i8[11] = truncate(arithmetic_shift_right(a.i16[11], imm & 15), 8);
dst.i8[12] = truncate(arithmetic_shift_right(a.i16[12], imm & 15), 8);
dst.i8[13] = truncate(arithmetic_shift_right(a.i16[13], imm & 15), 8);
dst.i8[14] = truncate(arithmetic_shift_right(a.i16[14], imm & 15), 8);
dst.i8[15] = truncate(arithmetic_shift_right(a.i16[15], imm & 15), 8);
dst.i8[16] = 0;
dst.i8[17] = 0;
dst.i8[18] = 0;
dst.i8[19] = 0;
dst.i8[20] = 0;
dst.i8[21] = 0;
dst.i8[22] = 0;
dst.i8[23] = 0;
dst.i8[24] = 0;
dst.i8[25] = 0;
dst.i8[26] = 0;
dst.i8[27] = 0;
dst.i8[28] = 0;
dst.i8[29] = 0;
dst.i8[30] = 0;
dst.i8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrain_b(a, imm) ((__m256i)__builtin_lasx_mxvsrain_b((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrain_h"></span>

## __m256i __lasx_mxvsrain_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrain_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrain.h
Builtin: __builtin_lasx_mxvsrain_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3347
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = truncate(arithmetic_shift_right(a.i32[0], imm & 31), 16);
dst.i16[1] = truncate(arithmetic_shift_right(a.i32[1], imm & 31), 16);
dst.i16[2] = truncate(arithmetic_shift_right(a.i32[2], imm & 31), 16);
dst.i16[3] = truncate(arithmetic_shift_right(a.i32[3], imm & 31), 16);
dst.i16[4] = truncate(arithmetic_shift_right(a.i32[4], imm & 31), 16);
dst.i16[5] = truncate(arithmetic_shift_right(a.i32[5], imm & 31), 16);
dst.i16[6] = truncate(arithmetic_shift_right(a.i32[6], imm & 31), 16);
dst.i16[7] = truncate(arithmetic_shift_right(a.i32[7], imm & 31), 16);
dst.i16[8] = 0;
dst.i16[9] = 0;
dst.i16[10] = 0;
dst.i16[11] = 0;
dst.i16[12] = 0;
dst.i16[13] = 0;
dst.i16[14] = 0;
dst.i16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrain_h(a, imm) ((__m256i)__builtin_lasx_mxvsrain_h((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrain_w"></span>

## __m256i __lasx_mxvsrain_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrain_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrain.w
Builtin: __builtin_lasx_mxvsrain_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3346
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = truncate(arithmetic_shift_right(a.i64[0], imm & 63), 32);
dst.i32[1] = truncate(arithmetic_shift_right(a.i64[1], imm & 63), 32);
dst.i32[2] = truncate(arithmetic_shift_right(a.i64[2], imm & 63), 32);
dst.i32[3] = truncate(arithmetic_shift_right(a.i64[3], imm & 63), 32);
dst.i32[4] = 0;
dst.i32[5] = 0;
dst.i32[6] = 0;
dst.i32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrain_w(a, imm) ((__m256i)__builtin_lasx_mxvsrain_w((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrains_s_b"></span>

## __m256i __lasx_mxvsrains_s_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrains_s_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrains.s.b
Builtin: __builtin_lasx_mxvsrains_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3351
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 32 x i8 lanes with saturation, and clear the unused high lanes.

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
dst.i8[8] = signed_saturate(arithmetic_shift_right(a.i16[8], imm & 15), 8);
dst.i8[9] = signed_saturate(arithmetic_shift_right(a.i16[9], imm & 15), 8);
dst.i8[10] = signed_saturate(arithmetic_shift_right(a.i16[10], imm & 15), 8);
dst.i8[11] = signed_saturate(arithmetic_shift_right(a.i16[11], imm & 15), 8);
dst.i8[12] = signed_saturate(arithmetic_shift_right(a.i16[12], imm & 15), 8);
dst.i8[13] = signed_saturate(arithmetic_shift_right(a.i16[13], imm & 15), 8);
dst.i8[14] = signed_saturate(arithmetic_shift_right(a.i16[14], imm & 15), 8);
dst.i8[15] = signed_saturate(arithmetic_shift_right(a.i16[15], imm & 15), 8);
dst.i8[16] = 0;
dst.i8[17] = 0;
dst.i8[18] = 0;
dst.i8[19] = 0;
dst.i8[20] = 0;
dst.i8[21] = 0;
dst.i8[22] = 0;
dst.i8[23] = 0;
dst.i8[24] = 0;
dst.i8[25] = 0;
dst.i8[26] = 0;
dst.i8[27] = 0;
dst.i8[28] = 0;
dst.i8[29] = 0;
dst.i8[30] = 0;
dst.i8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrains_s_b(a, imm) ((__m256i)__builtin_lasx_mxvsrains_s_b((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrains_s_h"></span>

## __m256i __lasx_mxvsrains_s_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrains_s_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrains.s.h
Builtin: __builtin_lasx_mxvsrains_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3350
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x i16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = signed_saturate(arithmetic_shift_right(a.i32[0], imm & 31), 16);
dst.i16[1] = signed_saturate(arithmetic_shift_right(a.i32[1], imm & 31), 16);
dst.i16[2] = signed_saturate(arithmetic_shift_right(a.i32[2], imm & 31), 16);
dst.i16[3] = signed_saturate(arithmetic_shift_right(a.i32[3], imm & 31), 16);
dst.i16[4] = signed_saturate(arithmetic_shift_right(a.i32[4], imm & 31), 16);
dst.i16[5] = signed_saturate(arithmetic_shift_right(a.i32[5], imm & 31), 16);
dst.i16[6] = signed_saturate(arithmetic_shift_right(a.i32[6], imm & 31), 16);
dst.i16[7] = signed_saturate(arithmetic_shift_right(a.i32[7], imm & 31), 16);
dst.i16[8] = 0;
dst.i16[9] = 0;
dst.i16[10] = 0;
dst.i16[11] = 0;
dst.i16[12] = 0;
dst.i16[13] = 0;
dst.i16[14] = 0;
dst.i16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrains_s_h(a, imm) ((__m256i)__builtin_lasx_mxvsrains_s_h((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrains_s_w"></span>

## __m256i __lasx_mxvsrains_s_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrains_s_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrains.s.w
Builtin: __builtin_lasx_mxvsrains_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3349
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x i32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = signed_saturate(arithmetic_shift_right(a.i64[0], imm & 63), 32);
dst.i32[1] = signed_saturate(arithmetic_shift_right(a.i64[1], imm & 63), 32);
dst.i32[2] = signed_saturate(arithmetic_shift_right(a.i64[2], imm & 63), 32);
dst.i32[3] = signed_saturate(arithmetic_shift_right(a.i64[3], imm & 63), 32);
dst.i32[4] = 0;
dst.i32[5] = 0;
dst.i32[6] = 0;
dst.i32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrains_s_w(a, imm) ((__m256i)__builtin_lasx_mxvsrains_s_w((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrains_u_b"></span>

## __m256i __lasx_mxvsrains_u_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrains_u_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrains.u.b
Builtin: __builtin_lasx_mxvsrains_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3354
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes with saturation, and clear the unused high lanes.

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
dst.u8[8] = unsigned_saturate(arithmetic_shift_right(a.i16[8], imm & 15), 8);
dst.u8[9] = unsigned_saturate(arithmetic_shift_right(a.i16[9], imm & 15), 8);
dst.u8[10] = unsigned_saturate(arithmetic_shift_right(a.i16[10], imm & 15), 8);
dst.u8[11] = unsigned_saturate(arithmetic_shift_right(a.i16[11], imm & 15), 8);
dst.u8[12] = unsigned_saturate(arithmetic_shift_right(a.i16[12], imm & 15), 8);
dst.u8[13] = unsigned_saturate(arithmetic_shift_right(a.i16[13], imm & 15), 8);
dst.u8[14] = unsigned_saturate(arithmetic_shift_right(a.i16[14], imm & 15), 8);
dst.u8[15] = unsigned_saturate(arithmetic_shift_right(a.i16[15], imm & 15), 8);
dst.u8[16] = 0;
dst.u8[17] = 0;
dst.u8[18] = 0;
dst.u8[19] = 0;
dst.u8[20] = 0;
dst.u8[21] = 0;
dst.u8[22] = 0;
dst.u8[23] = 0;
dst.u8[24] = 0;
dst.u8[25] = 0;
dst.u8[26] = 0;
dst.u8[27] = 0;
dst.u8[28] = 0;
dst.u8[29] = 0;
dst.u8[30] = 0;
dst.u8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrains_u_b(a, imm) ((__m256i)__builtin_lasx_mxvsrains_u_b((v16u16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrains_u_h"></span>

## __m256i __lasx_mxvsrains_u_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrains_u_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrains.u.h
Builtin: __builtin_lasx_mxvsrains_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3353
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(arithmetic_shift_right(a.i32[0], imm & 31), 16);
dst.u16[1] = unsigned_saturate(arithmetic_shift_right(a.i32[1], imm & 31), 16);
dst.u16[2] = unsigned_saturate(arithmetic_shift_right(a.i32[2], imm & 31), 16);
dst.u16[3] = unsigned_saturate(arithmetic_shift_right(a.i32[3], imm & 31), 16);
dst.u16[4] = unsigned_saturate(arithmetic_shift_right(a.i32[4], imm & 31), 16);
dst.u16[5] = unsigned_saturate(arithmetic_shift_right(a.i32[5], imm & 31), 16);
dst.u16[6] = unsigned_saturate(arithmetic_shift_right(a.i32[6], imm & 31), 16);
dst.u16[7] = unsigned_saturate(arithmetic_shift_right(a.i32[7], imm & 31), 16);
dst.u16[8] = 0;
dst.u16[9] = 0;
dst.u16[10] = 0;
dst.u16[11] = 0;
dst.u16[12] = 0;
dst.u16[13] = 0;
dst.u16[14] = 0;
dst.u16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrains_u_h(a, imm) ((__m256i)__builtin_lasx_mxvsrains_u_h((v8u32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrains_u_w"></span>

## __m256i __lasx_mxvsrains_u_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrains_u_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrains.u.w
Builtin: __builtin_lasx_mxvsrains_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3352
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(arithmetic_shift_right(a.i64[0], imm & 63), 32);
dst.u32[1] = unsigned_saturate(arithmetic_shift_right(a.i64[1], imm & 63), 32);
dst.u32[2] = unsigned_saturate(arithmetic_shift_right(a.i64[2], imm & 63), 32);
dst.u32[3] = unsigned_saturate(arithmetic_shift_right(a.i64[3], imm & 63), 32);
dst.u32[4] = 0;
dst.u32[5] = 0;
dst.u32[6] = 0;
dst.u32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrains_u_w(a, imm) ((__m256i)__builtin_lasx_mxvsrains_u_w((v4u64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsran_b"></span>

## __m256i __lasx_mxvsran_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsran_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsran.b
Builtin: __builtin_lasx_mxvsran_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3298
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes, and clear the unused high lanes.

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
dst.i8[8] = truncate(arithmetic_shift_right(a.i16[8], b.u16[8] & 15), 8);
dst.i8[9] = truncate(arithmetic_shift_right(a.i16[9], b.u16[9] & 15), 8);
dst.i8[10] = truncate(arithmetic_shift_right(a.i16[10], b.u16[10] & 15), 8);
dst.i8[11] = truncate(arithmetic_shift_right(a.i16[11], b.u16[11] & 15), 8);
dst.i8[12] = truncate(arithmetic_shift_right(a.i16[12], b.u16[12] & 15), 8);
dst.i8[13] = truncate(arithmetic_shift_right(a.i16[13], b.u16[13] & 15), 8);
dst.i8[14] = truncate(arithmetic_shift_right(a.i16[14], b.u16[14] & 15), 8);
dst.i8[15] = truncate(arithmetic_shift_right(a.i16[15], b.u16[15] & 15), 8);
dst.i8[16] = 0;
dst.i8[17] = 0;
dst.i8[18] = 0;
dst.i8[19] = 0;
dst.i8[20] = 0;
dst.i8[21] = 0;
dst.i8[22] = 0;
dst.i8[23] = 0;
dst.i8[24] = 0;
dst.i8[25] = 0;
dst.i8[26] = 0;
dst.i8[27] = 0;
dst.i8[28] = 0;
dst.i8[29] = 0;
dst.i8[30] = 0;
dst.i8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsran_b((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxvsran_h"></span>

## __m256i __lasx_mxvsran_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsran_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsran.h
Builtin: __builtin_lasx_mxvsran_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3291
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = truncate(arithmetic_shift_right(a.i32[0], b.u32[0] & 31), 16);
dst.i16[1] = truncate(arithmetic_shift_right(a.i32[1], b.u32[1] & 31), 16);
dst.i16[2] = truncate(arithmetic_shift_right(a.i32[2], b.u32[2] & 31), 16);
dst.i16[3] = truncate(arithmetic_shift_right(a.i32[3], b.u32[3] & 31), 16);
dst.i16[4] = truncate(arithmetic_shift_right(a.i32[4], b.u32[4] & 31), 16);
dst.i16[5] = truncate(arithmetic_shift_right(a.i32[5], b.u32[5] & 31), 16);
dst.i16[6] = truncate(arithmetic_shift_right(a.i32[6], b.u32[6] & 31), 16);
dst.i16[7] = truncate(arithmetic_shift_right(a.i32[7], b.u32[7] & 31), 16);
dst.i16[8] = 0;
dst.i16[9] = 0;
dst.i16[10] = 0;
dst.i16[11] = 0;
dst.i16[12] = 0;
dst.i16[13] = 0;
dst.i16[14] = 0;
dst.i16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsran_h((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxvsran_w"></span>

## __m256i __lasx_mxvsran_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsran_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsran.w
Builtin: __builtin_lasx_mxvsran_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3284
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = truncate(arithmetic_shift_right(a.i64[0], b.u64[0] & 63), 32);
dst.i32[1] = truncate(arithmetic_shift_right(a.i64[1], b.u64[1] & 63), 32);
dst.i32[2] = truncate(arithmetic_shift_right(a.i64[2], b.u64[2] & 63), 32);
dst.i32[3] = truncate(arithmetic_shift_right(a.i64[3], b.u64[3] & 63), 32);
dst.i32[4] = 0;
dst.i32[5] = 0;
dst.i32[6] = 0;
dst.i32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsran_w((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxvsrans_s_b"></span>

## __m256i __lasx_mxvsrans_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrans_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrans.s.b
Builtin: __builtin_lasx_mxvsrans_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3319
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 32 x i8 lanes with saturation, and clear the unused high lanes.

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
dst.i8[8] = signed_saturate(arithmetic_shift_right(a.i16[8], b.u16[8] & 15), 8);
dst.i8[9] = signed_saturate(arithmetic_shift_right(a.i16[9], b.u16[9] & 15), 8);
dst.i8[10] = signed_saturate(arithmetic_shift_right(a.i16[10], b.u16[10] & 15), 8);
dst.i8[11] = signed_saturate(arithmetic_shift_right(a.i16[11], b.u16[11] & 15), 8);
dst.i8[12] = signed_saturate(arithmetic_shift_right(a.i16[12], b.u16[12] & 15), 8);
dst.i8[13] = signed_saturate(arithmetic_shift_right(a.i16[13], b.u16[13] & 15), 8);
dst.i8[14] = signed_saturate(arithmetic_shift_right(a.i16[14], b.u16[14] & 15), 8);
dst.i8[15] = signed_saturate(arithmetic_shift_right(a.i16[15], b.u16[15] & 15), 8);
dst.i8[16] = 0;
dst.i8[17] = 0;
dst.i8[18] = 0;
dst.i8[19] = 0;
dst.i8[20] = 0;
dst.i8[21] = 0;
dst.i8[22] = 0;
dst.i8[23] = 0;
dst.i8[24] = 0;
dst.i8[25] = 0;
dst.i8[26] = 0;
dst.i8[27] = 0;
dst.i8[28] = 0;
dst.i8[29] = 0;
dst.i8[30] = 0;
dst.i8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrans_s_b((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxvsrans_s_h"></span>

## __m256i __lasx_mxvsrans_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrans_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrans.s.h
Builtin: __builtin_lasx_mxvsrans_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3312
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x i16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = signed_saturate(arithmetic_shift_right(a.i32[0], b.u32[0] & 31), 16);
dst.i16[1] = signed_saturate(arithmetic_shift_right(a.i32[1], b.u32[1] & 31), 16);
dst.i16[2] = signed_saturate(arithmetic_shift_right(a.i32[2], b.u32[2] & 31), 16);
dst.i16[3] = signed_saturate(arithmetic_shift_right(a.i32[3], b.u32[3] & 31), 16);
dst.i16[4] = signed_saturate(arithmetic_shift_right(a.i32[4], b.u32[4] & 31), 16);
dst.i16[5] = signed_saturate(arithmetic_shift_right(a.i32[5], b.u32[5] & 31), 16);
dst.i16[6] = signed_saturate(arithmetic_shift_right(a.i32[6], b.u32[6] & 31), 16);
dst.i16[7] = signed_saturate(arithmetic_shift_right(a.i32[7], b.u32[7] & 31), 16);
dst.i16[8] = 0;
dst.i16[9] = 0;
dst.i16[10] = 0;
dst.i16[11] = 0;
dst.i16[12] = 0;
dst.i16[13] = 0;
dst.i16[14] = 0;
dst.i16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrans_s_h((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxvsrans_s_w"></span>

## __m256i __lasx_mxvsrans_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrans_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrans.s.w
Builtin: __builtin_lasx_mxvsrans_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3305
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x i32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = signed_saturate(arithmetic_shift_right(a.i64[0], b.u64[0] & 63), 32);
dst.i32[1] = signed_saturate(arithmetic_shift_right(a.i64[1], b.u64[1] & 63), 32);
dst.i32[2] = signed_saturate(arithmetic_shift_right(a.i64[2], b.u64[2] & 63), 32);
dst.i32[3] = signed_saturate(arithmetic_shift_right(a.i64[3], b.u64[3] & 63), 32);
dst.i32[4] = 0;
dst.i32[5] = 0;
dst.i32[6] = 0;
dst.i32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrans_s_w((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxvsrans_u_b"></span>

## __m256i __lasx_mxvsrans_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrans_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrans.u.b
Builtin: __builtin_lasx_mxvsrans_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3340
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes with saturation, and clear the unused high lanes.

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
dst.u8[8] = unsigned_saturate(arithmetic_shift_right(a.i16[8], b.u16[8] & 15), 8);
dst.u8[9] = unsigned_saturate(arithmetic_shift_right(a.i16[9], b.u16[9] & 15), 8);
dst.u8[10] = unsigned_saturate(arithmetic_shift_right(a.i16[10], b.u16[10] & 15), 8);
dst.u8[11] = unsigned_saturate(arithmetic_shift_right(a.i16[11], b.u16[11] & 15), 8);
dst.u8[12] = unsigned_saturate(arithmetic_shift_right(a.i16[12], b.u16[12] & 15), 8);
dst.u8[13] = unsigned_saturate(arithmetic_shift_right(a.i16[13], b.u16[13] & 15), 8);
dst.u8[14] = unsigned_saturate(arithmetic_shift_right(a.i16[14], b.u16[14] & 15), 8);
dst.u8[15] = unsigned_saturate(arithmetic_shift_right(a.i16[15], b.u16[15] & 15), 8);
dst.u8[16] = 0;
dst.u8[17] = 0;
dst.u8[18] = 0;
dst.u8[19] = 0;
dst.u8[20] = 0;
dst.u8[21] = 0;
dst.u8[22] = 0;
dst.u8[23] = 0;
dst.u8[24] = 0;
dst.u8[25] = 0;
dst.u8[26] = 0;
dst.u8[27] = 0;
dst.u8[28] = 0;
dst.u8[29] = 0;
dst.u8[30] = 0;
dst.u8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrans_u_b((v16u16)a, (v16u16)b);
```

<span id="intrinsic-__lasx_mxvsrans_u_h"></span>

## __m256i __lasx_mxvsrans_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrans_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrans.u.h
Builtin: __builtin_lasx_mxvsrans_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3333
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(arithmetic_shift_right(a.i32[0], b.u32[0] & 31), 16);
dst.u16[1] = unsigned_saturate(arithmetic_shift_right(a.i32[1], b.u32[1] & 31), 16);
dst.u16[2] = unsigned_saturate(arithmetic_shift_right(a.i32[2], b.u32[2] & 31), 16);
dst.u16[3] = unsigned_saturate(arithmetic_shift_right(a.i32[3], b.u32[3] & 31), 16);
dst.u16[4] = unsigned_saturate(arithmetic_shift_right(a.i32[4], b.u32[4] & 31), 16);
dst.u16[5] = unsigned_saturate(arithmetic_shift_right(a.i32[5], b.u32[5] & 31), 16);
dst.u16[6] = unsigned_saturate(arithmetic_shift_right(a.i32[6], b.u32[6] & 31), 16);
dst.u16[7] = unsigned_saturate(arithmetic_shift_right(a.i32[7], b.u32[7] & 31), 16);
dst.u16[8] = 0;
dst.u16[9] = 0;
dst.u16[10] = 0;
dst.u16[11] = 0;
dst.u16[12] = 0;
dst.u16[13] = 0;
dst.u16[14] = 0;
dst.u16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrans_u_h((v8u32)a, (v8u32)b);
```

<span id="intrinsic-__lasx_mxvsrans_u_w"></span>

## __m256i __lasx_mxvsrans_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrans_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrans.u.w
Builtin: __builtin_lasx_mxvsrans_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3326
```

### Description

Arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(arithmetic_shift_right(a.i64[0], b.u64[0] & 63), 32);
dst.u32[1] = unsigned_saturate(arithmetic_shift_right(a.i64[1], b.u64[1] & 63), 32);
dst.u32[2] = unsigned_saturate(arithmetic_shift_right(a.i64[2], b.u64[2] & 63), 32);
dst.u32[3] = unsigned_saturate(arithmetic_shift_right(a.i64[3], b.u64[3] & 63), 32);
dst.u32[4] = 0;
dst.u32[5] = 0;
dst.u32[6] = 0;
dst.u32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrans_u_w((v4u64)a, (v4u64)b);
```

<span id="intrinsic-__lasx_mxvsrarin_b"></span>

## __m256i __lasx_mxvsrarin_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrarin_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrarin.b
Builtin: __builtin_lasx_mxvsrarin_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3420
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes, and clear the unused high lanes.

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
dst.i8[8] = truncate(rounding_arithmetic_shift_right(a.i16[8], imm & 15), 8);
dst.i8[9] = truncate(rounding_arithmetic_shift_right(a.i16[9], imm & 15), 8);
dst.i8[10] = truncate(rounding_arithmetic_shift_right(a.i16[10], imm & 15), 8);
dst.i8[11] = truncate(rounding_arithmetic_shift_right(a.i16[11], imm & 15), 8);
dst.i8[12] = truncate(rounding_arithmetic_shift_right(a.i16[12], imm & 15), 8);
dst.i8[13] = truncate(rounding_arithmetic_shift_right(a.i16[13], imm & 15), 8);
dst.i8[14] = truncate(rounding_arithmetic_shift_right(a.i16[14], imm & 15), 8);
dst.i8[15] = truncate(rounding_arithmetic_shift_right(a.i16[15], imm & 15), 8);
dst.i8[16] = 0;
dst.i8[17] = 0;
dst.i8[18] = 0;
dst.i8[19] = 0;
dst.i8[20] = 0;
dst.i8[21] = 0;
dst.i8[22] = 0;
dst.i8[23] = 0;
dst.i8[24] = 0;
dst.i8[25] = 0;
dst.i8[26] = 0;
dst.i8[27] = 0;
dst.i8[28] = 0;
dst.i8[29] = 0;
dst.i8[30] = 0;
dst.i8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrarin_b(a, imm) ((__m256i)__builtin_lasx_mxvsrarin_b((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrarin_h"></span>

## __m256i __lasx_mxvsrarin_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrarin_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrarin.h
Builtin: __builtin_lasx_mxvsrarin_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3419
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = truncate(rounding_arithmetic_shift_right(a.i32[0], imm & 31), 16);
dst.i16[1] = truncate(rounding_arithmetic_shift_right(a.i32[1], imm & 31), 16);
dst.i16[2] = truncate(rounding_arithmetic_shift_right(a.i32[2], imm & 31), 16);
dst.i16[3] = truncate(rounding_arithmetic_shift_right(a.i32[3], imm & 31), 16);
dst.i16[4] = truncate(rounding_arithmetic_shift_right(a.i32[4], imm & 31), 16);
dst.i16[5] = truncate(rounding_arithmetic_shift_right(a.i32[5], imm & 31), 16);
dst.i16[6] = truncate(rounding_arithmetic_shift_right(a.i32[6], imm & 31), 16);
dst.i16[7] = truncate(rounding_arithmetic_shift_right(a.i32[7], imm & 31), 16);
dst.i16[8] = 0;
dst.i16[9] = 0;
dst.i16[10] = 0;
dst.i16[11] = 0;
dst.i16[12] = 0;
dst.i16[13] = 0;
dst.i16[14] = 0;
dst.i16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrarin_h(a, imm) ((__m256i)__builtin_lasx_mxvsrarin_h((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrarin_w"></span>

## __m256i __lasx_mxvsrarin_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrarin_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrarin.w
Builtin: __builtin_lasx_mxvsrarin_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3418
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = truncate(rounding_arithmetic_shift_right(a.i64[0], imm & 63), 32);
dst.i32[1] = truncate(rounding_arithmetic_shift_right(a.i64[1], imm & 63), 32);
dst.i32[2] = truncate(rounding_arithmetic_shift_right(a.i64[2], imm & 63), 32);
dst.i32[3] = truncate(rounding_arithmetic_shift_right(a.i64[3], imm & 63), 32);
dst.i32[4] = 0;
dst.i32[5] = 0;
dst.i32[6] = 0;
dst.i32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrarin_w(a, imm) ((__m256i)__builtin_lasx_mxvsrarin_w((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrarins_s_b"></span>

## __m256i __lasx_mxvsrarins_s_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrarins_s_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrarins.s.b
Builtin: __builtin_lasx_mxvsrarins_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3423
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 32 x i8 lanes with saturation, and clear the unused high lanes.

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
dst.i8[8] = signed_saturate(rounding_arithmetic_shift_right(a.i16[8], imm & 15), 8);
dst.i8[9] = signed_saturate(rounding_arithmetic_shift_right(a.i16[9], imm & 15), 8);
dst.i8[10] = signed_saturate(rounding_arithmetic_shift_right(a.i16[10], imm & 15), 8);
dst.i8[11] = signed_saturate(rounding_arithmetic_shift_right(a.i16[11], imm & 15), 8);
dst.i8[12] = signed_saturate(rounding_arithmetic_shift_right(a.i16[12], imm & 15), 8);
dst.i8[13] = signed_saturate(rounding_arithmetic_shift_right(a.i16[13], imm & 15), 8);
dst.i8[14] = signed_saturate(rounding_arithmetic_shift_right(a.i16[14], imm & 15), 8);
dst.i8[15] = signed_saturate(rounding_arithmetic_shift_right(a.i16[15], imm & 15), 8);
dst.i8[16] = 0;
dst.i8[17] = 0;
dst.i8[18] = 0;
dst.i8[19] = 0;
dst.i8[20] = 0;
dst.i8[21] = 0;
dst.i8[22] = 0;
dst.i8[23] = 0;
dst.i8[24] = 0;
dst.i8[25] = 0;
dst.i8[26] = 0;
dst.i8[27] = 0;
dst.i8[28] = 0;
dst.i8[29] = 0;
dst.i8[30] = 0;
dst.i8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrarins_s_b(a, imm) ((__m256i)__builtin_lasx_mxvsrarins_s_b((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrarins_s_h"></span>

## __m256i __lasx_mxvsrarins_s_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrarins_s_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrarins.s.h
Builtin: __builtin_lasx_mxvsrarins_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3422
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x i16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = signed_saturate(rounding_arithmetic_shift_right(a.i32[0], imm & 31), 16);
dst.i16[1] = signed_saturate(rounding_arithmetic_shift_right(a.i32[1], imm & 31), 16);
dst.i16[2] = signed_saturate(rounding_arithmetic_shift_right(a.i32[2], imm & 31), 16);
dst.i16[3] = signed_saturate(rounding_arithmetic_shift_right(a.i32[3], imm & 31), 16);
dst.i16[4] = signed_saturate(rounding_arithmetic_shift_right(a.i32[4], imm & 31), 16);
dst.i16[5] = signed_saturate(rounding_arithmetic_shift_right(a.i32[5], imm & 31), 16);
dst.i16[6] = signed_saturate(rounding_arithmetic_shift_right(a.i32[6], imm & 31), 16);
dst.i16[7] = signed_saturate(rounding_arithmetic_shift_right(a.i32[7], imm & 31), 16);
dst.i16[8] = 0;
dst.i16[9] = 0;
dst.i16[10] = 0;
dst.i16[11] = 0;
dst.i16[12] = 0;
dst.i16[13] = 0;
dst.i16[14] = 0;
dst.i16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrarins_s_h(a, imm) ((__m256i)__builtin_lasx_mxvsrarins_s_h((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrarins_s_w"></span>

## __m256i __lasx_mxvsrarins_s_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrarins_s_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrarins.s.w
Builtin: __builtin_lasx_mxvsrarins_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3421
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x i32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = signed_saturate(rounding_arithmetic_shift_right(a.i64[0], imm & 63), 32);
dst.i32[1] = signed_saturate(rounding_arithmetic_shift_right(a.i64[1], imm & 63), 32);
dst.i32[2] = signed_saturate(rounding_arithmetic_shift_right(a.i64[2], imm & 63), 32);
dst.i32[3] = signed_saturate(rounding_arithmetic_shift_right(a.i64[3], imm & 63), 32);
dst.i32[4] = 0;
dst.i32[5] = 0;
dst.i32[6] = 0;
dst.i32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrarins_s_w(a, imm) ((__m256i)__builtin_lasx_mxvsrarins_s_w((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrarins_u_b"></span>

## __m256i __lasx_mxvsrarins_u_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrarins_u_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrarins.u.b
Builtin: __builtin_lasx_mxvsrarins_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3426
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes with saturation, and clear the unused high lanes.

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
dst.u8[8] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[8], imm & 15), 8);
dst.u8[9] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[9], imm & 15), 8);
dst.u8[10] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[10], imm & 15), 8);
dst.u8[11] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[11], imm & 15), 8);
dst.u8[12] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[12], imm & 15), 8);
dst.u8[13] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[13], imm & 15), 8);
dst.u8[14] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[14], imm & 15), 8);
dst.u8[15] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[15], imm & 15), 8);
dst.u8[16] = 0;
dst.u8[17] = 0;
dst.u8[18] = 0;
dst.u8[19] = 0;
dst.u8[20] = 0;
dst.u8[21] = 0;
dst.u8[22] = 0;
dst.u8[23] = 0;
dst.u8[24] = 0;
dst.u8[25] = 0;
dst.u8[26] = 0;
dst.u8[27] = 0;
dst.u8[28] = 0;
dst.u8[29] = 0;
dst.u8[30] = 0;
dst.u8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrarins_u_b(a, imm) ((__m256i)__builtin_lasx_mxvsrarins_u_b((v16u16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrarins_u_h"></span>

## __m256i __lasx_mxvsrarins_u_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrarins_u_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrarins.u.h
Builtin: __builtin_lasx_mxvsrarins_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3425
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[0], imm & 31), 16);
dst.u16[1] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[1], imm & 31), 16);
dst.u16[2] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[2], imm & 31), 16);
dst.u16[3] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[3], imm & 31), 16);
dst.u16[4] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[4], imm & 31), 16);
dst.u16[5] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[5], imm & 31), 16);
dst.u16[6] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[6], imm & 31), 16);
dst.u16[7] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[7], imm & 31), 16);
dst.u16[8] = 0;
dst.u16[9] = 0;
dst.u16[10] = 0;
dst.u16[11] = 0;
dst.u16[12] = 0;
dst.u16[13] = 0;
dst.u16[14] = 0;
dst.u16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrarins_u_h(a, imm) ((__m256i)__builtin_lasx_mxvsrarins_u_h((v8u32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrarins_u_w"></span>

## __m256i __lasx_mxvsrarins_u_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrarins_u_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrarins.u.w
Builtin: __builtin_lasx_mxvsrarins_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3424
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(rounding_arithmetic_shift_right(a.i64[0], imm & 63), 32);
dst.u32[1] = unsigned_saturate(rounding_arithmetic_shift_right(a.i64[1], imm & 63), 32);
dst.u32[2] = unsigned_saturate(rounding_arithmetic_shift_right(a.i64[2], imm & 63), 32);
dst.u32[3] = unsigned_saturate(rounding_arithmetic_shift_right(a.i64[3], imm & 63), 32);
dst.u32[4] = 0;
dst.u32[5] = 0;
dst.u32[6] = 0;
dst.u32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrarins_u_w(a, imm) ((__m256i)__builtin_lasx_mxvsrarins_u_w((v4u64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrarn_b"></span>

## __m256i __lasx_mxvsrarn_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrarn_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrarn.b
Builtin: __builtin_lasx_mxvsrarn_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3370
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes, and clear the unused high lanes.

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
dst.i8[8] = truncate(rounding_arithmetic_shift_right(a.i16[8], b.u16[8] & 15), 8);
dst.i8[9] = truncate(rounding_arithmetic_shift_right(a.i16[9], b.u16[9] & 15), 8);
dst.i8[10] = truncate(rounding_arithmetic_shift_right(a.i16[10], b.u16[10] & 15), 8);
dst.i8[11] = truncate(rounding_arithmetic_shift_right(a.i16[11], b.u16[11] & 15), 8);
dst.i8[12] = truncate(rounding_arithmetic_shift_right(a.i16[12], b.u16[12] & 15), 8);
dst.i8[13] = truncate(rounding_arithmetic_shift_right(a.i16[13], b.u16[13] & 15), 8);
dst.i8[14] = truncate(rounding_arithmetic_shift_right(a.i16[14], b.u16[14] & 15), 8);
dst.i8[15] = truncate(rounding_arithmetic_shift_right(a.i16[15], b.u16[15] & 15), 8);
dst.i8[16] = 0;
dst.i8[17] = 0;
dst.i8[18] = 0;
dst.i8[19] = 0;
dst.i8[20] = 0;
dst.i8[21] = 0;
dst.i8[22] = 0;
dst.i8[23] = 0;
dst.i8[24] = 0;
dst.i8[25] = 0;
dst.i8[26] = 0;
dst.i8[27] = 0;
dst.i8[28] = 0;
dst.i8[29] = 0;
dst.i8[30] = 0;
dst.i8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarn_b((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxvsrarn_h"></span>

## __m256i __lasx_mxvsrarn_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrarn_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrarn.h
Builtin: __builtin_lasx_mxvsrarn_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3363
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = truncate(rounding_arithmetic_shift_right(a.i32[0], b.u32[0] & 31), 16);
dst.i16[1] = truncate(rounding_arithmetic_shift_right(a.i32[1], b.u32[1] & 31), 16);
dst.i16[2] = truncate(rounding_arithmetic_shift_right(a.i32[2], b.u32[2] & 31), 16);
dst.i16[3] = truncate(rounding_arithmetic_shift_right(a.i32[3], b.u32[3] & 31), 16);
dst.i16[4] = truncate(rounding_arithmetic_shift_right(a.i32[4], b.u32[4] & 31), 16);
dst.i16[5] = truncate(rounding_arithmetic_shift_right(a.i32[5], b.u32[5] & 31), 16);
dst.i16[6] = truncate(rounding_arithmetic_shift_right(a.i32[6], b.u32[6] & 31), 16);
dst.i16[7] = truncate(rounding_arithmetic_shift_right(a.i32[7], b.u32[7] & 31), 16);
dst.i16[8] = 0;
dst.i16[9] = 0;
dst.i16[10] = 0;
dst.i16[11] = 0;
dst.i16[12] = 0;
dst.i16[13] = 0;
dst.i16[14] = 0;
dst.i16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarn_h((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxvsrarn_w"></span>

## __m256i __lasx_mxvsrarn_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrarn_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrarn.w
Builtin: __builtin_lasx_mxvsrarn_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3356
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = truncate(rounding_arithmetic_shift_right(a.i64[0], b.u64[0] & 63), 32);
dst.i32[1] = truncate(rounding_arithmetic_shift_right(a.i64[1], b.u64[1] & 63), 32);
dst.i32[2] = truncate(rounding_arithmetic_shift_right(a.i64[2], b.u64[2] & 63), 32);
dst.i32[3] = truncate(rounding_arithmetic_shift_right(a.i64[3], b.u64[3] & 63), 32);
dst.i32[4] = 0;
dst.i32[5] = 0;
dst.i32[6] = 0;
dst.i32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarn_w((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxvsrarns_s_b"></span>

## __m256i __lasx_mxvsrarns_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrarns_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrarns.s.b
Builtin: __builtin_lasx_mxvsrarns_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3391
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 32 x i8 lanes with saturation, and clear the unused high lanes.

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
dst.i8[8] = signed_saturate(rounding_arithmetic_shift_right(a.i16[8], b.u16[8] & 15), 8);
dst.i8[9] = signed_saturate(rounding_arithmetic_shift_right(a.i16[9], b.u16[9] & 15), 8);
dst.i8[10] = signed_saturate(rounding_arithmetic_shift_right(a.i16[10], b.u16[10] & 15), 8);
dst.i8[11] = signed_saturate(rounding_arithmetic_shift_right(a.i16[11], b.u16[11] & 15), 8);
dst.i8[12] = signed_saturate(rounding_arithmetic_shift_right(a.i16[12], b.u16[12] & 15), 8);
dst.i8[13] = signed_saturate(rounding_arithmetic_shift_right(a.i16[13], b.u16[13] & 15), 8);
dst.i8[14] = signed_saturate(rounding_arithmetic_shift_right(a.i16[14], b.u16[14] & 15), 8);
dst.i8[15] = signed_saturate(rounding_arithmetic_shift_right(a.i16[15], b.u16[15] & 15), 8);
dst.i8[16] = 0;
dst.i8[17] = 0;
dst.i8[18] = 0;
dst.i8[19] = 0;
dst.i8[20] = 0;
dst.i8[21] = 0;
dst.i8[22] = 0;
dst.i8[23] = 0;
dst.i8[24] = 0;
dst.i8[25] = 0;
dst.i8[26] = 0;
dst.i8[27] = 0;
dst.i8[28] = 0;
dst.i8[29] = 0;
dst.i8[30] = 0;
dst.i8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarns_s_b((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxvsrarns_s_h"></span>

## __m256i __lasx_mxvsrarns_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrarns_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrarns.s.h
Builtin: __builtin_lasx_mxvsrarns_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3384
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x i16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i16[0] = signed_saturate(rounding_arithmetic_shift_right(a.i32[0], b.u32[0] & 31), 16);
dst.i16[1] = signed_saturate(rounding_arithmetic_shift_right(a.i32[1], b.u32[1] & 31), 16);
dst.i16[2] = signed_saturate(rounding_arithmetic_shift_right(a.i32[2], b.u32[2] & 31), 16);
dst.i16[3] = signed_saturate(rounding_arithmetic_shift_right(a.i32[3], b.u32[3] & 31), 16);
dst.i16[4] = signed_saturate(rounding_arithmetic_shift_right(a.i32[4], b.u32[4] & 31), 16);
dst.i16[5] = signed_saturate(rounding_arithmetic_shift_right(a.i32[5], b.u32[5] & 31), 16);
dst.i16[6] = signed_saturate(rounding_arithmetic_shift_right(a.i32[6], b.u32[6] & 31), 16);
dst.i16[7] = signed_saturate(rounding_arithmetic_shift_right(a.i32[7], b.u32[7] & 31), 16);
dst.i16[8] = 0;
dst.i16[9] = 0;
dst.i16[10] = 0;
dst.i16[11] = 0;
dst.i16[12] = 0;
dst.i16[13] = 0;
dst.i16[14] = 0;
dst.i16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarns_s_h((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxvsrarns_s_w"></span>

## __m256i __lasx_mxvsrarns_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrarns_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrarns.s.w
Builtin: __builtin_lasx_mxvsrarns_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3377
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x i32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.i32[0] = signed_saturate(rounding_arithmetic_shift_right(a.i64[0], b.u64[0] & 63), 32);
dst.i32[1] = signed_saturate(rounding_arithmetic_shift_right(a.i64[1], b.u64[1] & 63), 32);
dst.i32[2] = signed_saturate(rounding_arithmetic_shift_right(a.i64[2], b.u64[2] & 63), 32);
dst.i32[3] = signed_saturate(rounding_arithmetic_shift_right(a.i64[3], b.u64[3] & 63), 32);
dst.i32[4] = 0;
dst.i32[5] = 0;
dst.i32[6] = 0;
dst.i32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarns_s_w((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxvsrarns_u_b"></span>

## __m256i __lasx_mxvsrarns_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrarns_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrarns.u.b
Builtin: __builtin_lasx_mxvsrarns_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3412
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes with saturation, and clear the unused high lanes.

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
dst.u8[8] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[8], b.u16[8] & 15), 8);
dst.u8[9] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[9], b.u16[9] & 15), 8);
dst.u8[10] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[10], b.u16[10] & 15), 8);
dst.u8[11] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[11], b.u16[11] & 15), 8);
dst.u8[12] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[12], b.u16[12] & 15), 8);
dst.u8[13] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[13], b.u16[13] & 15), 8);
dst.u8[14] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[14], b.u16[14] & 15), 8);
dst.u8[15] = unsigned_saturate(rounding_arithmetic_shift_right(a.i16[15], b.u16[15] & 15), 8);
dst.u8[16] = 0;
dst.u8[17] = 0;
dst.u8[18] = 0;
dst.u8[19] = 0;
dst.u8[20] = 0;
dst.u8[21] = 0;
dst.u8[22] = 0;
dst.u8[23] = 0;
dst.u8[24] = 0;
dst.u8[25] = 0;
dst.u8[26] = 0;
dst.u8[27] = 0;
dst.u8[28] = 0;
dst.u8[29] = 0;
dst.u8[30] = 0;
dst.u8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarns_u_b((v16u16)a, (v16u16)b);
```

<span id="intrinsic-__lasx_mxvsrarns_u_h"></span>

## __m256i __lasx_mxvsrarns_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrarns_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrarns.u.h
Builtin: __builtin_lasx_mxvsrarns_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3405
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[0], b.u32[0] & 31), 16);
dst.u16[1] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[1], b.u32[1] & 31), 16);
dst.u16[2] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[2], b.u32[2] & 31), 16);
dst.u16[3] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[3], b.u32[3] & 31), 16);
dst.u16[4] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[4], b.u32[4] & 31), 16);
dst.u16[5] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[5], b.u32[5] & 31), 16);
dst.u16[6] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[6], b.u32[6] & 31), 16);
dst.u16[7] = unsigned_saturate(rounding_arithmetic_shift_right(a.i32[7], b.u32[7] & 31), 16);
dst.u16[8] = 0;
dst.u16[9] = 0;
dst.u16[10] = 0;
dst.u16[11] = 0;
dst.u16[12] = 0;
dst.u16[13] = 0;
dst.u16[14] = 0;
dst.u16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarns_u_h((v8u32)a, (v8u32)b);
```

<span id="intrinsic-__lasx_mxvsrarns_u_w"></span>

## __m256i __lasx_mxvsrarns_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrarns_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrarns.u.w
Builtin: __builtin_lasx_mxvsrarns_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3398
```

### Description

Round, arithmetic-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(rounding_arithmetic_shift_right(a.i64[0], b.u64[0] & 63), 32);
dst.u32[1] = unsigned_saturate(rounding_arithmetic_shift_right(a.i64[1], b.u64[1] & 63), 32);
dst.u32[2] = unsigned_saturate(rounding_arithmetic_shift_right(a.i64[2], b.u64[2] & 63), 32);
dst.u32[3] = unsigned_saturate(rounding_arithmetic_shift_right(a.i64[3], b.u64[3] & 63), 32);
dst.u32[4] = 0;
dst.u32[5] = 0;
dst.u32[6] = 0;
dst.u32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrarns_u_w((v4u64)a, (v4u64)b);
```

<span id="intrinsic-__lasx_mxvsrlin_b"></span>

## __m256i __lasx_mxvsrlin_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrlin_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrlin.b
Builtin: __builtin_lasx_mxvsrlin_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3471
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes, and clear the unused high lanes.

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
dst.u8[8] = truncate(logical_shift_right(a.u16[8], imm & 15), 8);
dst.u8[9] = truncate(logical_shift_right(a.u16[9], imm & 15), 8);
dst.u8[10] = truncate(logical_shift_right(a.u16[10], imm & 15), 8);
dst.u8[11] = truncate(logical_shift_right(a.u16[11], imm & 15), 8);
dst.u8[12] = truncate(logical_shift_right(a.u16[12], imm & 15), 8);
dst.u8[13] = truncate(logical_shift_right(a.u16[13], imm & 15), 8);
dst.u8[14] = truncate(logical_shift_right(a.u16[14], imm & 15), 8);
dst.u8[15] = truncate(logical_shift_right(a.u16[15], imm & 15), 8);
dst.u8[16] = 0;
dst.u8[17] = 0;
dst.u8[18] = 0;
dst.u8[19] = 0;
dst.u8[20] = 0;
dst.u8[21] = 0;
dst.u8[22] = 0;
dst.u8[23] = 0;
dst.u8[24] = 0;
dst.u8[25] = 0;
dst.u8[26] = 0;
dst.u8[27] = 0;
dst.u8[28] = 0;
dst.u8[29] = 0;
dst.u8[30] = 0;
dst.u8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrlin_b(a, imm) ((__m256i)__builtin_lasx_mxvsrlin_b((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrlin_h"></span>

## __m256i __lasx_mxvsrlin_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrlin_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrlin.h
Builtin: __builtin_lasx_mxvsrlin_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3470
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = truncate(logical_shift_right(a.u32[0], imm & 31), 16);
dst.u16[1] = truncate(logical_shift_right(a.u32[1], imm & 31), 16);
dst.u16[2] = truncate(logical_shift_right(a.u32[2], imm & 31), 16);
dst.u16[3] = truncate(logical_shift_right(a.u32[3], imm & 31), 16);
dst.u16[4] = truncate(logical_shift_right(a.u32[4], imm & 31), 16);
dst.u16[5] = truncate(logical_shift_right(a.u32[5], imm & 31), 16);
dst.u16[6] = truncate(logical_shift_right(a.u32[6], imm & 31), 16);
dst.u16[7] = truncate(logical_shift_right(a.u32[7], imm & 31), 16);
dst.u16[8] = 0;
dst.u16[9] = 0;
dst.u16[10] = 0;
dst.u16[11] = 0;
dst.u16[12] = 0;
dst.u16[13] = 0;
dst.u16[14] = 0;
dst.u16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrlin_h(a, imm) ((__m256i)__builtin_lasx_mxvsrlin_h((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrlin_w"></span>

## __m256i __lasx_mxvsrlin_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrlin_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrlin.w
Builtin: __builtin_lasx_mxvsrlin_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3469
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = truncate(logical_shift_right(a.u64[0], imm & 63), 32);
dst.u32[1] = truncate(logical_shift_right(a.u64[1], imm & 63), 32);
dst.u32[2] = truncate(logical_shift_right(a.u64[2], imm & 63), 32);
dst.u32[3] = truncate(logical_shift_right(a.u64[3], imm & 63), 32);
dst.u32[4] = 0;
dst.u32[5] = 0;
dst.u32[6] = 0;
dst.u32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrlin_w(a, imm) ((__m256i)__builtin_lasx_mxvsrlin_w((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrlins_u_b"></span>

## __m256i __lasx_mxvsrlins_u_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrlins_u_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrlins.u.b
Builtin: __builtin_lasx_mxvsrlins_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3474
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes with saturation, and clear the unused high lanes.

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
dst.u8[8] = unsigned_saturate(logical_shift_right(a.u16[8], imm & 15), 8);
dst.u8[9] = unsigned_saturate(logical_shift_right(a.u16[9], imm & 15), 8);
dst.u8[10] = unsigned_saturate(logical_shift_right(a.u16[10], imm & 15), 8);
dst.u8[11] = unsigned_saturate(logical_shift_right(a.u16[11], imm & 15), 8);
dst.u8[12] = unsigned_saturate(logical_shift_right(a.u16[12], imm & 15), 8);
dst.u8[13] = unsigned_saturate(logical_shift_right(a.u16[13], imm & 15), 8);
dst.u8[14] = unsigned_saturate(logical_shift_right(a.u16[14], imm & 15), 8);
dst.u8[15] = unsigned_saturate(logical_shift_right(a.u16[15], imm & 15), 8);
dst.u8[16] = 0;
dst.u8[17] = 0;
dst.u8[18] = 0;
dst.u8[19] = 0;
dst.u8[20] = 0;
dst.u8[21] = 0;
dst.u8[22] = 0;
dst.u8[23] = 0;
dst.u8[24] = 0;
dst.u8[25] = 0;
dst.u8[26] = 0;
dst.u8[27] = 0;
dst.u8[28] = 0;
dst.u8[29] = 0;
dst.u8[30] = 0;
dst.u8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrlins_u_b(a, imm) ((__m256i)__builtin_lasx_mxvsrlins_u_b((v16u16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrlins_u_h"></span>

## __m256i __lasx_mxvsrlins_u_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrlins_u_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrlins.u.h
Builtin: __builtin_lasx_mxvsrlins_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3473
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(logical_shift_right(a.u32[0], imm & 31), 16);
dst.u16[1] = unsigned_saturate(logical_shift_right(a.u32[1], imm & 31), 16);
dst.u16[2] = unsigned_saturate(logical_shift_right(a.u32[2], imm & 31), 16);
dst.u16[3] = unsigned_saturate(logical_shift_right(a.u32[3], imm & 31), 16);
dst.u16[4] = unsigned_saturate(logical_shift_right(a.u32[4], imm & 31), 16);
dst.u16[5] = unsigned_saturate(logical_shift_right(a.u32[5], imm & 31), 16);
dst.u16[6] = unsigned_saturate(logical_shift_right(a.u32[6], imm & 31), 16);
dst.u16[7] = unsigned_saturate(logical_shift_right(a.u32[7], imm & 31), 16);
dst.u16[8] = 0;
dst.u16[9] = 0;
dst.u16[10] = 0;
dst.u16[11] = 0;
dst.u16[12] = 0;
dst.u16[13] = 0;
dst.u16[14] = 0;
dst.u16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrlins_u_h(a, imm) ((__m256i)__builtin_lasx_mxvsrlins_u_h((v8u32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrlins_u_w"></span>

## __m256i __lasx_mxvsrlins_u_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrlins_u_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrlins.u.w
Builtin: __builtin_lasx_mxvsrlins_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3472
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(logical_shift_right(a.u64[0], imm & 63), 32);
dst.u32[1] = unsigned_saturate(logical_shift_right(a.u64[1], imm & 63), 32);
dst.u32[2] = unsigned_saturate(logical_shift_right(a.u64[2], imm & 63), 32);
dst.u32[3] = unsigned_saturate(logical_shift_right(a.u64[3], imm & 63), 32);
dst.u32[4] = 0;
dst.u32[5] = 0;
dst.u32[6] = 0;
dst.u32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrlins_u_w(a, imm) ((__m256i)__builtin_lasx_mxvsrlins_u_w((v4u64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrln_b"></span>

## __m256i __lasx_mxvsrln_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrln_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrln.b
Builtin: __builtin_lasx_mxvsrln_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3442
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes, and clear the unused high lanes.

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
dst.u8[8] = truncate(logical_shift_right(a.u16[8], b.u16[8] & 15), 8);
dst.u8[9] = truncate(logical_shift_right(a.u16[9], b.u16[9] & 15), 8);
dst.u8[10] = truncate(logical_shift_right(a.u16[10], b.u16[10] & 15), 8);
dst.u8[11] = truncate(logical_shift_right(a.u16[11], b.u16[11] & 15), 8);
dst.u8[12] = truncate(logical_shift_right(a.u16[12], b.u16[12] & 15), 8);
dst.u8[13] = truncate(logical_shift_right(a.u16[13], b.u16[13] & 15), 8);
dst.u8[14] = truncate(logical_shift_right(a.u16[14], b.u16[14] & 15), 8);
dst.u8[15] = truncate(logical_shift_right(a.u16[15], b.u16[15] & 15), 8);
dst.u8[16] = 0;
dst.u8[17] = 0;
dst.u8[18] = 0;
dst.u8[19] = 0;
dst.u8[20] = 0;
dst.u8[21] = 0;
dst.u8[22] = 0;
dst.u8[23] = 0;
dst.u8[24] = 0;
dst.u8[25] = 0;
dst.u8[26] = 0;
dst.u8[27] = 0;
dst.u8[28] = 0;
dst.u8[29] = 0;
dst.u8[30] = 0;
dst.u8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrln_b((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxvsrln_h"></span>

## __m256i __lasx_mxvsrln_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrln_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrln.h
Builtin: __builtin_lasx_mxvsrln_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3435
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = truncate(logical_shift_right(a.u32[0], b.u32[0] & 31), 16);
dst.u16[1] = truncate(logical_shift_right(a.u32[1], b.u32[1] & 31), 16);
dst.u16[2] = truncate(logical_shift_right(a.u32[2], b.u32[2] & 31), 16);
dst.u16[3] = truncate(logical_shift_right(a.u32[3], b.u32[3] & 31), 16);
dst.u16[4] = truncate(logical_shift_right(a.u32[4], b.u32[4] & 31), 16);
dst.u16[5] = truncate(logical_shift_right(a.u32[5], b.u32[5] & 31), 16);
dst.u16[6] = truncate(logical_shift_right(a.u32[6], b.u32[6] & 31), 16);
dst.u16[7] = truncate(logical_shift_right(a.u32[7], b.u32[7] & 31), 16);
dst.u16[8] = 0;
dst.u16[9] = 0;
dst.u16[10] = 0;
dst.u16[11] = 0;
dst.u16[12] = 0;
dst.u16[13] = 0;
dst.u16[14] = 0;
dst.u16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrln_h((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxvsrln_w"></span>

## __m256i __lasx_mxvsrln_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrln_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrln.w
Builtin: __builtin_lasx_mxvsrln_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3428
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = truncate(logical_shift_right(a.u64[0], b.u64[0] & 63), 32);
dst.u32[1] = truncate(logical_shift_right(a.u64[1], b.u64[1] & 63), 32);
dst.u32[2] = truncate(logical_shift_right(a.u64[2], b.u64[2] & 63), 32);
dst.u32[3] = truncate(logical_shift_right(a.u64[3], b.u64[3] & 63), 32);
dst.u32[4] = 0;
dst.u32[5] = 0;
dst.u32[6] = 0;
dst.u32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrln_w((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxvsrlns_u_b"></span>

## __m256i __lasx_mxvsrlns_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrlns_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrlns.u.b
Builtin: __builtin_lasx_mxvsrlns_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3463
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes with saturation, and clear the unused high lanes.

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
dst.u8[8] = unsigned_saturate(logical_shift_right(a.u16[8], b.u16[8] & 15), 8);
dst.u8[9] = unsigned_saturate(logical_shift_right(a.u16[9], b.u16[9] & 15), 8);
dst.u8[10] = unsigned_saturate(logical_shift_right(a.u16[10], b.u16[10] & 15), 8);
dst.u8[11] = unsigned_saturate(logical_shift_right(a.u16[11], b.u16[11] & 15), 8);
dst.u8[12] = unsigned_saturate(logical_shift_right(a.u16[12], b.u16[12] & 15), 8);
dst.u8[13] = unsigned_saturate(logical_shift_right(a.u16[13], b.u16[13] & 15), 8);
dst.u8[14] = unsigned_saturate(logical_shift_right(a.u16[14], b.u16[14] & 15), 8);
dst.u8[15] = unsigned_saturate(logical_shift_right(a.u16[15], b.u16[15] & 15), 8);
dst.u8[16] = 0;
dst.u8[17] = 0;
dst.u8[18] = 0;
dst.u8[19] = 0;
dst.u8[20] = 0;
dst.u8[21] = 0;
dst.u8[22] = 0;
dst.u8[23] = 0;
dst.u8[24] = 0;
dst.u8[25] = 0;
dst.u8[26] = 0;
dst.u8[27] = 0;
dst.u8[28] = 0;
dst.u8[29] = 0;
dst.u8[30] = 0;
dst.u8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlns_u_b((v16u16)a, (v16u16)b);
```

<span id="intrinsic-__lasx_mxvsrlns_u_h"></span>

## __m256i __lasx_mxvsrlns_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrlns_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrlns.u.h
Builtin: __builtin_lasx_mxvsrlns_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3456
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(logical_shift_right(a.u32[0], b.u32[0] & 31), 16);
dst.u16[1] = unsigned_saturate(logical_shift_right(a.u32[1], b.u32[1] & 31), 16);
dst.u16[2] = unsigned_saturate(logical_shift_right(a.u32[2], b.u32[2] & 31), 16);
dst.u16[3] = unsigned_saturate(logical_shift_right(a.u32[3], b.u32[3] & 31), 16);
dst.u16[4] = unsigned_saturate(logical_shift_right(a.u32[4], b.u32[4] & 31), 16);
dst.u16[5] = unsigned_saturate(logical_shift_right(a.u32[5], b.u32[5] & 31), 16);
dst.u16[6] = unsigned_saturate(logical_shift_right(a.u32[6], b.u32[6] & 31), 16);
dst.u16[7] = unsigned_saturate(logical_shift_right(a.u32[7], b.u32[7] & 31), 16);
dst.u16[8] = 0;
dst.u16[9] = 0;
dst.u16[10] = 0;
dst.u16[11] = 0;
dst.u16[12] = 0;
dst.u16[13] = 0;
dst.u16[14] = 0;
dst.u16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlns_u_h((v8u32)a, (v8u32)b);
```

<span id="intrinsic-__lasx_mxvsrlns_u_w"></span>

## __m256i __lasx_mxvsrlns_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrlns_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrlns.u.w
Builtin: __builtin_lasx_mxvsrlns_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3449
```

### Description

Logical-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(logical_shift_right(a.u64[0], b.u64[0] & 63), 32);
dst.u32[1] = unsigned_saturate(logical_shift_right(a.u64[1], b.u64[1] & 63), 32);
dst.u32[2] = unsigned_saturate(logical_shift_right(a.u64[2], b.u64[2] & 63), 32);
dst.u32[3] = unsigned_saturate(logical_shift_right(a.u64[3], b.u64[3] & 63), 32);
dst.u32[4] = 0;
dst.u32[5] = 0;
dst.u32[6] = 0;
dst.u32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlns_u_w((v4u64)a, (v4u64)b);
```

<span id="intrinsic-__lasx_mxvsrlrin_b"></span>

## __m256i __lasx_mxvsrlrin_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrlrin_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrin.b
Builtin: __builtin_lasx_mxvsrlrin_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3519
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes, and clear the unused high lanes.

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
dst.u8[8] = truncate(rounding_logical_shift_right(a.u16[8], imm & 15), 8);
dst.u8[9] = truncate(rounding_logical_shift_right(a.u16[9], imm & 15), 8);
dst.u8[10] = truncate(rounding_logical_shift_right(a.u16[10], imm & 15), 8);
dst.u8[11] = truncate(rounding_logical_shift_right(a.u16[11], imm & 15), 8);
dst.u8[12] = truncate(rounding_logical_shift_right(a.u16[12], imm & 15), 8);
dst.u8[13] = truncate(rounding_logical_shift_right(a.u16[13], imm & 15), 8);
dst.u8[14] = truncate(rounding_logical_shift_right(a.u16[14], imm & 15), 8);
dst.u8[15] = truncate(rounding_logical_shift_right(a.u16[15], imm & 15), 8);
dst.u8[16] = 0;
dst.u8[17] = 0;
dst.u8[18] = 0;
dst.u8[19] = 0;
dst.u8[20] = 0;
dst.u8[21] = 0;
dst.u8[22] = 0;
dst.u8[23] = 0;
dst.u8[24] = 0;
dst.u8[25] = 0;
dst.u8[26] = 0;
dst.u8[27] = 0;
dst.u8[28] = 0;
dst.u8[29] = 0;
dst.u8[30] = 0;
dst.u8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrlrin_b(a, imm) ((__m256i)__builtin_lasx_mxvsrlrin_b((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrlrin_h"></span>

## __m256i __lasx_mxvsrlrin_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrlrin_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrin.h
Builtin: __builtin_lasx_mxvsrlrin_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3518
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = truncate(rounding_logical_shift_right(a.u32[0], imm & 31), 16);
dst.u16[1] = truncate(rounding_logical_shift_right(a.u32[1], imm & 31), 16);
dst.u16[2] = truncate(rounding_logical_shift_right(a.u32[2], imm & 31), 16);
dst.u16[3] = truncate(rounding_logical_shift_right(a.u32[3], imm & 31), 16);
dst.u16[4] = truncate(rounding_logical_shift_right(a.u32[4], imm & 31), 16);
dst.u16[5] = truncate(rounding_logical_shift_right(a.u32[5], imm & 31), 16);
dst.u16[6] = truncate(rounding_logical_shift_right(a.u32[6], imm & 31), 16);
dst.u16[7] = truncate(rounding_logical_shift_right(a.u32[7], imm & 31), 16);
dst.u16[8] = 0;
dst.u16[9] = 0;
dst.u16[10] = 0;
dst.u16[11] = 0;
dst.u16[12] = 0;
dst.u16[13] = 0;
dst.u16[14] = 0;
dst.u16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrlrin_h(a, imm) ((__m256i)__builtin_lasx_mxvsrlrin_h((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrlrin_w"></span>

## __m256i __lasx_mxvsrlrin_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrlrin_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrin.w
Builtin: __builtin_lasx_mxvsrlrin_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3517
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = truncate(rounding_logical_shift_right(a.u64[0], imm & 63), 32);
dst.u32[1] = truncate(rounding_logical_shift_right(a.u64[1], imm & 63), 32);
dst.u32[2] = truncate(rounding_logical_shift_right(a.u64[2], imm & 63), 32);
dst.u32[3] = truncate(rounding_logical_shift_right(a.u64[3], imm & 63), 32);
dst.u32[4] = 0;
dst.u32[5] = 0;
dst.u32[6] = 0;
dst.u32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrlrin_w(a, imm) ((__m256i)__builtin_lasx_mxvsrlrin_w((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrlrins_u_b"></span>

## __m256i __lasx_mxvsrlrins_u_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrlrins_u_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrins.u.b
Builtin: __builtin_lasx_mxvsrlrins_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3522
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes with saturation, and clear the unused high lanes.

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
dst.u8[8] = unsigned_saturate(rounding_logical_shift_right(a.u16[8], imm & 15), 8);
dst.u8[9] = unsigned_saturate(rounding_logical_shift_right(a.u16[9], imm & 15), 8);
dst.u8[10] = unsigned_saturate(rounding_logical_shift_right(a.u16[10], imm & 15), 8);
dst.u8[11] = unsigned_saturate(rounding_logical_shift_right(a.u16[11], imm & 15), 8);
dst.u8[12] = unsigned_saturate(rounding_logical_shift_right(a.u16[12], imm & 15), 8);
dst.u8[13] = unsigned_saturate(rounding_logical_shift_right(a.u16[13], imm & 15), 8);
dst.u8[14] = unsigned_saturate(rounding_logical_shift_right(a.u16[14], imm & 15), 8);
dst.u8[15] = unsigned_saturate(rounding_logical_shift_right(a.u16[15], imm & 15), 8);
dst.u8[16] = 0;
dst.u8[17] = 0;
dst.u8[18] = 0;
dst.u8[19] = 0;
dst.u8[20] = 0;
dst.u8[21] = 0;
dst.u8[22] = 0;
dst.u8[23] = 0;
dst.u8[24] = 0;
dst.u8[25] = 0;
dst.u8[26] = 0;
dst.u8[27] = 0;
dst.u8[28] = 0;
dst.u8[29] = 0;
dst.u8[30] = 0;
dst.u8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrlrins_u_b(a, imm) ((__m256i)__builtin_lasx_mxvsrlrins_u_b((v16u16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrlrins_u_h"></span>

## __m256i __lasx_mxvsrlrins_u_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrlrins_u_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrins.u.h
Builtin: __builtin_lasx_mxvsrlrins_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3521
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(rounding_logical_shift_right(a.u32[0], imm & 31), 16);
dst.u16[1] = unsigned_saturate(rounding_logical_shift_right(a.u32[1], imm & 31), 16);
dst.u16[2] = unsigned_saturate(rounding_logical_shift_right(a.u32[2], imm & 31), 16);
dst.u16[3] = unsigned_saturate(rounding_logical_shift_right(a.u32[3], imm & 31), 16);
dst.u16[4] = unsigned_saturate(rounding_logical_shift_right(a.u32[4], imm & 31), 16);
dst.u16[5] = unsigned_saturate(rounding_logical_shift_right(a.u32[5], imm & 31), 16);
dst.u16[6] = unsigned_saturate(rounding_logical_shift_right(a.u32[6], imm & 31), 16);
dst.u16[7] = unsigned_saturate(rounding_logical_shift_right(a.u32[7], imm & 31), 16);
dst.u16[8] = 0;
dst.u16[9] = 0;
dst.u16[10] = 0;
dst.u16[11] = 0;
dst.u16[12] = 0;
dst.u16[13] = 0;
dst.u16[14] = 0;
dst.u16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrlrins_u_h(a, imm) ((__m256i)__builtin_lasx_mxvsrlrins_u_h((v8u32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrlrins_u_w"></span>

## __m256i __lasx_mxvsrlrins_u_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvsrlrins_u_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrins.u.w
Builtin: __builtin_lasx_mxvsrlrins_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3520
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(rounding_logical_shift_right(a.u64[0], imm & 63), 32);
dst.u32[1] = unsigned_saturate(rounding_logical_shift_right(a.u64[1], imm & 63), 32);
dst.u32[2] = unsigned_saturate(rounding_logical_shift_right(a.u64[2], imm & 63), 32);
dst.u32[3] = unsigned_saturate(rounding_logical_shift_right(a.u64[3], imm & 63), 32);
dst.u32[4] = 0;
dst.u32[5] = 0;
dst.u32[6] = 0;
dst.u32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
#define __lasx_mxvsrlrins_u_w(a, imm) ((__m256i)__builtin_lasx_mxvsrlrins_u_w((v4u64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvsrlrn_b"></span>

## __m256i __lasx_mxvsrlrn_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrlrn_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrn.b
Builtin: __builtin_lasx_mxvsrlrn_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3490
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes, and clear the unused high lanes.

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
dst.u8[8] = truncate(rounding_logical_shift_right(a.u16[8], b.u16[8] & 15), 8);
dst.u8[9] = truncate(rounding_logical_shift_right(a.u16[9], b.u16[9] & 15), 8);
dst.u8[10] = truncate(rounding_logical_shift_right(a.u16[10], b.u16[10] & 15), 8);
dst.u8[11] = truncate(rounding_logical_shift_right(a.u16[11], b.u16[11] & 15), 8);
dst.u8[12] = truncate(rounding_logical_shift_right(a.u16[12], b.u16[12] & 15), 8);
dst.u8[13] = truncate(rounding_logical_shift_right(a.u16[13], b.u16[13] & 15), 8);
dst.u8[14] = truncate(rounding_logical_shift_right(a.u16[14], b.u16[14] & 15), 8);
dst.u8[15] = truncate(rounding_logical_shift_right(a.u16[15], b.u16[15] & 15), 8);
dst.u8[16] = 0;
dst.u8[17] = 0;
dst.u8[18] = 0;
dst.u8[19] = 0;
dst.u8[20] = 0;
dst.u8[21] = 0;
dst.u8[22] = 0;
dst.u8[23] = 0;
dst.u8[24] = 0;
dst.u8[25] = 0;
dst.u8[26] = 0;
dst.u8[27] = 0;
dst.u8[28] = 0;
dst.u8[29] = 0;
dst.u8[30] = 0;
dst.u8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlrn_b((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxvsrlrn_h"></span>

## __m256i __lasx_mxvsrlrn_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrlrn_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrn.h
Builtin: __builtin_lasx_mxvsrlrn_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3483
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = truncate(rounding_logical_shift_right(a.u32[0], b.u32[0] & 31), 16);
dst.u16[1] = truncate(rounding_logical_shift_right(a.u32[1], b.u32[1] & 31), 16);
dst.u16[2] = truncate(rounding_logical_shift_right(a.u32[2], b.u32[2] & 31), 16);
dst.u16[3] = truncate(rounding_logical_shift_right(a.u32[3], b.u32[3] & 31), 16);
dst.u16[4] = truncate(rounding_logical_shift_right(a.u32[4], b.u32[4] & 31), 16);
dst.u16[5] = truncate(rounding_logical_shift_right(a.u32[5], b.u32[5] & 31), 16);
dst.u16[6] = truncate(rounding_logical_shift_right(a.u32[6], b.u32[6] & 31), 16);
dst.u16[7] = truncate(rounding_logical_shift_right(a.u32[7], b.u32[7] & 31), 16);
dst.u16[8] = 0;
dst.u16[9] = 0;
dst.u16[10] = 0;
dst.u16[11] = 0;
dst.u16[12] = 0;
dst.u16[13] = 0;
dst.u16[14] = 0;
dst.u16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlrn_h((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxvsrlrn_w"></span>

## __m256i __lasx_mxvsrlrn_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrlrn_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrn.w
Builtin: __builtin_lasx_mxvsrlrn_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3476
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = truncate(rounding_logical_shift_right(a.u64[0], b.u64[0] & 63), 32);
dst.u32[1] = truncate(rounding_logical_shift_right(a.u64[1], b.u64[1] & 63), 32);
dst.u32[2] = truncate(rounding_logical_shift_right(a.u64[2], b.u64[2] & 63), 32);
dst.u32[3] = truncate(rounding_logical_shift_right(a.u64[3], b.u64[3] & 63), 32);
dst.u32[4] = 0;
dst.u32[5] = 0;
dst.u32[6] = 0;
dst.u32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlrn_w((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxvsrlrns_u_b"></span>

## __m256i __lasx_mxvsrlrns_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrlrns_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrns.u.b
Builtin: __builtin_lasx_mxvsrlrns_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3511
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 32 x u8 lanes with saturation, and clear the unused high lanes.

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
dst.u8[8] = unsigned_saturate(rounding_logical_shift_right(a.u16[8], b.u16[8] & 15), 8);
dst.u8[9] = unsigned_saturate(rounding_logical_shift_right(a.u16[9], b.u16[9] & 15), 8);
dst.u8[10] = unsigned_saturate(rounding_logical_shift_right(a.u16[10], b.u16[10] & 15), 8);
dst.u8[11] = unsigned_saturate(rounding_logical_shift_right(a.u16[11], b.u16[11] & 15), 8);
dst.u8[12] = unsigned_saturate(rounding_logical_shift_right(a.u16[12], b.u16[12] & 15), 8);
dst.u8[13] = unsigned_saturate(rounding_logical_shift_right(a.u16[13], b.u16[13] & 15), 8);
dst.u8[14] = unsigned_saturate(rounding_logical_shift_right(a.u16[14], b.u16[14] & 15), 8);
dst.u8[15] = unsigned_saturate(rounding_logical_shift_right(a.u16[15], b.u16[15] & 15), 8);
dst.u8[16] = 0;
dst.u8[17] = 0;
dst.u8[18] = 0;
dst.u8[19] = 0;
dst.u8[20] = 0;
dst.u8[21] = 0;
dst.u8[22] = 0;
dst.u8[23] = 0;
dst.u8[24] = 0;
dst.u8[25] = 0;
dst.u8[26] = 0;
dst.u8[27] = 0;
dst.u8[28] = 0;
dst.u8[29] = 0;
dst.u8[30] = 0;
dst.u8[31] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlrns_u_b((v16u16)a, (v16u16)b);
```

<span id="intrinsic-__lasx_mxvsrlrns_u_h"></span>

## __m256i __lasx_mxvsrlrns_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrlrns_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrns.u.h
Builtin: __builtin_lasx_mxvsrlrns_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3504
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 16 x u16 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u16[0] = unsigned_saturate(rounding_logical_shift_right(a.u32[0], b.u32[0] & 31), 16);
dst.u16[1] = unsigned_saturate(rounding_logical_shift_right(a.u32[1], b.u32[1] & 31), 16);
dst.u16[2] = unsigned_saturate(rounding_logical_shift_right(a.u32[2], b.u32[2] & 31), 16);
dst.u16[3] = unsigned_saturate(rounding_logical_shift_right(a.u32[3], b.u32[3] & 31), 16);
dst.u16[4] = unsigned_saturate(rounding_logical_shift_right(a.u32[4], b.u32[4] & 31), 16);
dst.u16[5] = unsigned_saturate(rounding_logical_shift_right(a.u32[5], b.u32[5] & 31), 16);
dst.u16[6] = unsigned_saturate(rounding_logical_shift_right(a.u32[6], b.u32[6] & 31), 16);
dst.u16[7] = unsigned_saturate(rounding_logical_shift_right(a.u32[7], b.u32[7] & 31), 16);
dst.u16[8] = 0;
dst.u16[9] = 0;
dst.u16[10] = 0;
dst.u16[11] = 0;
dst.u16[12] = 0;
dst.u16[13] = 0;
dst.u16[14] = 0;
dst.u16[15] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlrns_u_h((v8u32)a, (v8u32)b);
```

<span id="intrinsic-__lasx_mxvsrlrns_u_w"></span>

## __m256i __lasx_mxvsrlrns_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsrlrns_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsrlrns.u.w
Builtin: __builtin_lasx_mxvsrlrns_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3497
```

### Description

Round, logical-shift-right the low wider source lanes from `a`, narrow into 8 x u32 lanes with saturation, and clear the unused high lanes.

### Operation

```c
dst.u32[0] = unsigned_saturate(rounding_logical_shift_right(a.u64[0], b.u64[0] & 63), 32);
dst.u32[1] = unsigned_saturate(rounding_logical_shift_right(a.u64[1], b.u64[1] & 63), 32);
dst.u32[2] = unsigned_saturate(rounding_logical_shift_right(a.u64[2], b.u64[2] & 63), 32);
dst.u32[3] = unsigned_saturate(rounding_logical_shift_right(a.u64[3], b.u64[3] & 63), 32);
dst.u32[4] = 0;
dst.u32[5] = 0;
dst.u32[6] = 0;
dst.u32[7] = 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsrlrns_u_w((v4u64)a, (v4u64)b);
```

