# Bitwise Operations

Generated from `include/loongson-asxintrin.h`. This page contains 81 intrinsics.

<span id="intrinsic-__lasx_mxbclr_b"></span>

## __m256i __lasx_mxbclr_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxbclr_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxbclr.b
Builtin: __builtin_lasx_mxbclr_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:234
```

### Description

Clear one selected bit in each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] & ~(1 << (b.u8[0] & 7));
dst.u8[1] = a.u8[1] & ~(1 << (b.u8[1] & 7));
dst.u8[2] = a.u8[2] & ~(1 << (b.u8[2] & 7));
dst.u8[3] = a.u8[3] & ~(1 << (b.u8[3] & 7));
dst.u8[4] = a.u8[4] & ~(1 << (b.u8[4] & 7));
dst.u8[5] = a.u8[5] & ~(1 << (b.u8[5] & 7));
dst.u8[6] = a.u8[6] & ~(1 << (b.u8[6] & 7));
dst.u8[7] = a.u8[7] & ~(1 << (b.u8[7] & 7));
dst.u8[8] = a.u8[8] & ~(1 << (b.u8[8] & 7));
dst.u8[9] = a.u8[9] & ~(1 << (b.u8[9] & 7));
dst.u8[10] = a.u8[10] & ~(1 << (b.u8[10] & 7));
dst.u8[11] = a.u8[11] & ~(1 << (b.u8[11] & 7));
dst.u8[12] = a.u8[12] & ~(1 << (b.u8[12] & 7));
dst.u8[13] = a.u8[13] & ~(1 << (b.u8[13] & 7));
dst.u8[14] = a.u8[14] & ~(1 << (b.u8[14] & 7));
dst.u8[15] = a.u8[15] & ~(1 << (b.u8[15] & 7));
dst.u8[16] = a.u8[16] & ~(1 << (b.u8[16] & 7));
dst.u8[17] = a.u8[17] & ~(1 << (b.u8[17] & 7));
dst.u8[18] = a.u8[18] & ~(1 << (b.u8[18] & 7));
dst.u8[19] = a.u8[19] & ~(1 << (b.u8[19] & 7));
dst.u8[20] = a.u8[20] & ~(1 << (b.u8[20] & 7));
dst.u8[21] = a.u8[21] & ~(1 << (b.u8[21] & 7));
dst.u8[22] = a.u8[22] & ~(1 << (b.u8[22] & 7));
dst.u8[23] = a.u8[23] & ~(1 << (b.u8[23] & 7));
dst.u8[24] = a.u8[24] & ~(1 << (b.u8[24] & 7));
dst.u8[25] = a.u8[25] & ~(1 << (b.u8[25] & 7));
dst.u8[26] = a.u8[26] & ~(1 << (b.u8[26] & 7));
dst.u8[27] = a.u8[27] & ~(1 << (b.u8[27] & 7));
dst.u8[28] = a.u8[28] & ~(1 << (b.u8[28] & 7));
dst.u8[29] = a.u8[29] & ~(1 << (b.u8[29] & 7));
dst.u8[30] = a.u8[30] & ~(1 << (b.u8[30] & 7));
dst.u8[31] = a.u8[31] & ~(1 << (b.u8[31] & 7));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbclr_b((v32u8)a, (v32u8)b);
```

<span id="intrinsic-__lasx_mxbclr_d"></span>

## __m256i __lasx_mxbclr_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxbclr_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxbclr.d
Builtin: __builtin_lasx_mxbclr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:255
```

### Description

Clear one selected bit in each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] & ~(1 << (b.u64[0] & 63));
dst.u64[1] = a.u64[1] & ~(1 << (b.u64[1] & 63));
dst.u64[2] = a.u64[2] & ~(1 << (b.u64[2] & 63));
dst.u64[3] = a.u64[3] & ~(1 << (b.u64[3] & 63));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbclr_d((v4u64)a, (v4u64)b);
```

<span id="intrinsic-__lasx_mxbclr_h"></span>

## __m256i __lasx_mxbclr_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxbclr_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxbclr.h
Builtin: __builtin_lasx_mxbclr_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:241
```

### Description

Clear one selected bit in each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] & ~(1 << (b.u16[0] & 15));
dst.u16[1] = a.u16[1] & ~(1 << (b.u16[1] & 15));
dst.u16[2] = a.u16[2] & ~(1 << (b.u16[2] & 15));
dst.u16[3] = a.u16[3] & ~(1 << (b.u16[3] & 15));
dst.u16[4] = a.u16[4] & ~(1 << (b.u16[4] & 15));
dst.u16[5] = a.u16[5] & ~(1 << (b.u16[5] & 15));
dst.u16[6] = a.u16[6] & ~(1 << (b.u16[6] & 15));
dst.u16[7] = a.u16[7] & ~(1 << (b.u16[7] & 15));
dst.u16[8] = a.u16[8] & ~(1 << (b.u16[8] & 15));
dst.u16[9] = a.u16[9] & ~(1 << (b.u16[9] & 15));
dst.u16[10] = a.u16[10] & ~(1 << (b.u16[10] & 15));
dst.u16[11] = a.u16[11] & ~(1 << (b.u16[11] & 15));
dst.u16[12] = a.u16[12] & ~(1 << (b.u16[12] & 15));
dst.u16[13] = a.u16[13] & ~(1 << (b.u16[13] & 15));
dst.u16[14] = a.u16[14] & ~(1 << (b.u16[14] & 15));
dst.u16[15] = a.u16[15] & ~(1 << (b.u16[15] & 15));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbclr_h((v16u16)a, (v16u16)b);
```

<span id="intrinsic-__lasx_mxbclr_w"></span>

## __m256i __lasx_mxbclr_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxbclr_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxbclr.w
Builtin: __builtin_lasx_mxbclr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:248
```

### Description

Clear one selected bit in each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] & ~(1 << (b.u32[0] & 31));
dst.u32[1] = a.u32[1] & ~(1 << (b.u32[1] & 31));
dst.u32[2] = a.u32[2] & ~(1 << (b.u32[2] & 31));
dst.u32[3] = a.u32[3] & ~(1 << (b.u32[3] & 31));
dst.u32[4] = a.u32[4] & ~(1 << (b.u32[4] & 31));
dst.u32[5] = a.u32[5] & ~(1 << (b.u32[5] & 31));
dst.u32[6] = a.u32[6] & ~(1 << (b.u32[6] & 31));
dst.u32[7] = a.u32[7] & ~(1 << (b.u32[7] & 31));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbclr_w((v8u32)a, (v8u32)b);
```

<span id="intrinsic-__lasx_mxbclri_b"></span>

## __m256i __lasx_mxbclri_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbclri_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbclri.b
Builtin: __builtin_lasx_mxbclri_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:261
```

### Description

Clear one selected bit in each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] & ~(1 << (imm));
dst.u8[1] = a.u8[1] & ~(1 << (imm));
dst.u8[2] = a.u8[2] & ~(1 << (imm));
dst.u8[3] = a.u8[3] & ~(1 << (imm));
dst.u8[4] = a.u8[4] & ~(1 << (imm));
dst.u8[5] = a.u8[5] & ~(1 << (imm));
dst.u8[6] = a.u8[6] & ~(1 << (imm));
dst.u8[7] = a.u8[7] & ~(1 << (imm));
dst.u8[8] = a.u8[8] & ~(1 << (imm));
dst.u8[9] = a.u8[9] & ~(1 << (imm));
dst.u8[10] = a.u8[10] & ~(1 << (imm));
dst.u8[11] = a.u8[11] & ~(1 << (imm));
dst.u8[12] = a.u8[12] & ~(1 << (imm));
dst.u8[13] = a.u8[13] & ~(1 << (imm));
dst.u8[14] = a.u8[14] & ~(1 << (imm));
dst.u8[15] = a.u8[15] & ~(1 << (imm));
dst.u8[16] = a.u8[16] & ~(1 << (imm));
dst.u8[17] = a.u8[17] & ~(1 << (imm));
dst.u8[18] = a.u8[18] & ~(1 << (imm));
dst.u8[19] = a.u8[19] & ~(1 << (imm));
dst.u8[20] = a.u8[20] & ~(1 << (imm));
dst.u8[21] = a.u8[21] & ~(1 << (imm));
dst.u8[22] = a.u8[22] & ~(1 << (imm));
dst.u8[23] = a.u8[23] & ~(1 << (imm));
dst.u8[24] = a.u8[24] & ~(1 << (imm));
dst.u8[25] = a.u8[25] & ~(1 << (imm));
dst.u8[26] = a.u8[26] & ~(1 << (imm));
dst.u8[27] = a.u8[27] & ~(1 << (imm));
dst.u8[28] = a.u8[28] & ~(1 << (imm));
dst.u8[29] = a.u8[29] & ~(1 << (imm));
dst.u8[30] = a.u8[30] & ~(1 << (imm));
dst.u8[31] = a.u8[31] & ~(1 << (imm));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbclri_b(a, imm) ((__m256i)__builtin_lasx_mxbclri_b((v32u8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxbclri_d"></span>

## __m256i __lasx_mxbclri_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbclri_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbclri.d
Builtin: __builtin_lasx_mxbclri_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:264
```

### Description

Clear one selected bit in each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] & ~(1 << (imm));
dst.u64[1] = a.u64[1] & ~(1 << (imm));
dst.u64[2] = a.u64[2] & ~(1 << (imm));
dst.u64[3] = a.u64[3] & ~(1 << (imm));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbclri_d(a, imm) ((__m256i)__builtin_lasx_mxbclri_d((v4u64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxbclri_h"></span>

## __m256i __lasx_mxbclri_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbclri_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbclri.h
Builtin: __builtin_lasx_mxbclri_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:262
```

### Description

Clear one selected bit in each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] & ~(1 << (imm));
dst.u16[1] = a.u16[1] & ~(1 << (imm));
dst.u16[2] = a.u16[2] & ~(1 << (imm));
dst.u16[3] = a.u16[3] & ~(1 << (imm));
dst.u16[4] = a.u16[4] & ~(1 << (imm));
dst.u16[5] = a.u16[5] & ~(1 << (imm));
dst.u16[6] = a.u16[6] & ~(1 << (imm));
dst.u16[7] = a.u16[7] & ~(1 << (imm));
dst.u16[8] = a.u16[8] & ~(1 << (imm));
dst.u16[9] = a.u16[9] & ~(1 << (imm));
dst.u16[10] = a.u16[10] & ~(1 << (imm));
dst.u16[11] = a.u16[11] & ~(1 << (imm));
dst.u16[12] = a.u16[12] & ~(1 << (imm));
dst.u16[13] = a.u16[13] & ~(1 << (imm));
dst.u16[14] = a.u16[14] & ~(1 << (imm));
dst.u16[15] = a.u16[15] & ~(1 << (imm));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbclri_h(a, imm) ((__m256i)__builtin_lasx_mxbclri_h((v16u16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxbclri_w"></span>

## __m256i __lasx_mxbclri_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbclri_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbclri.w
Builtin: __builtin_lasx_mxbclri_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:263
```

### Description

Clear one selected bit in each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] & ~(1 << (imm));
dst.u32[1] = a.u32[1] & ~(1 << (imm));
dst.u32[2] = a.u32[2] & ~(1 << (imm));
dst.u32[3] = a.u32[3] & ~(1 << (imm));
dst.u32[4] = a.u32[4] & ~(1 << (imm));
dst.u32[5] = a.u32[5] & ~(1 << (imm));
dst.u32[6] = a.u32[6] & ~(1 << (imm));
dst.u32[7] = a.u32[7] & ~(1 << (imm));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbclri_w(a, imm) ((__m256i)__builtin_lasx_mxbclri_w((v8u32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxbinsl_b"></span>

## __m256i __lasx_mxbinsl_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxbinsl_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxbinsl.b
Builtin: __builtin_lasx_mxbinsl_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:330
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u8[0] = insert_bits(a.u8[0], b.u8[0], most-significant_bits_mask(8, (b.u8[0] & 7) + 1));
dst.u8[1] = insert_bits(a.u8[1], b.u8[1], most-significant_bits_mask(8, (b.u8[1] & 7) + 1));
dst.u8[2] = insert_bits(a.u8[2], b.u8[2], most-significant_bits_mask(8, (b.u8[2] & 7) + 1));
dst.u8[3] = insert_bits(a.u8[3], b.u8[3], most-significant_bits_mask(8, (b.u8[3] & 7) + 1));
dst.u8[4] = insert_bits(a.u8[4], b.u8[4], most-significant_bits_mask(8, (b.u8[4] & 7) + 1));
dst.u8[5] = insert_bits(a.u8[5], b.u8[5], most-significant_bits_mask(8, (b.u8[5] & 7) + 1));
dst.u8[6] = insert_bits(a.u8[6], b.u8[6], most-significant_bits_mask(8, (b.u8[6] & 7) + 1));
dst.u8[7] = insert_bits(a.u8[7], b.u8[7], most-significant_bits_mask(8, (b.u8[7] & 7) + 1));
dst.u8[8] = insert_bits(a.u8[8], b.u8[8], most-significant_bits_mask(8, (b.u8[8] & 7) + 1));
dst.u8[9] = insert_bits(a.u8[9], b.u8[9], most-significant_bits_mask(8, (b.u8[9] & 7) + 1));
dst.u8[10] = insert_bits(a.u8[10], b.u8[10], most-significant_bits_mask(8, (b.u8[10] & 7) + 1));
dst.u8[11] = insert_bits(a.u8[11], b.u8[11], most-significant_bits_mask(8, (b.u8[11] & 7) + 1));
dst.u8[12] = insert_bits(a.u8[12], b.u8[12], most-significant_bits_mask(8, (b.u8[12] & 7) + 1));
dst.u8[13] = insert_bits(a.u8[13], b.u8[13], most-significant_bits_mask(8, (b.u8[13] & 7) + 1));
dst.u8[14] = insert_bits(a.u8[14], b.u8[14], most-significant_bits_mask(8, (b.u8[14] & 7) + 1));
dst.u8[15] = insert_bits(a.u8[15], b.u8[15], most-significant_bits_mask(8, (b.u8[15] & 7) + 1));
dst.u8[16] = insert_bits(a.u8[16], b.u8[16], most-significant_bits_mask(8, (b.u8[16] & 7) + 1));
dst.u8[17] = insert_bits(a.u8[17], b.u8[17], most-significant_bits_mask(8, (b.u8[17] & 7) + 1));
dst.u8[18] = insert_bits(a.u8[18], b.u8[18], most-significant_bits_mask(8, (b.u8[18] & 7) + 1));
dst.u8[19] = insert_bits(a.u8[19], b.u8[19], most-significant_bits_mask(8, (b.u8[19] & 7) + 1));
dst.u8[20] = insert_bits(a.u8[20], b.u8[20], most-significant_bits_mask(8, (b.u8[20] & 7) + 1));
dst.u8[21] = insert_bits(a.u8[21], b.u8[21], most-significant_bits_mask(8, (b.u8[21] & 7) + 1));
dst.u8[22] = insert_bits(a.u8[22], b.u8[22], most-significant_bits_mask(8, (b.u8[22] & 7) + 1));
dst.u8[23] = insert_bits(a.u8[23], b.u8[23], most-significant_bits_mask(8, (b.u8[23] & 7) + 1));
dst.u8[24] = insert_bits(a.u8[24], b.u8[24], most-significant_bits_mask(8, (b.u8[24] & 7) + 1));
dst.u8[25] = insert_bits(a.u8[25], b.u8[25], most-significant_bits_mask(8, (b.u8[25] & 7) + 1));
dst.u8[26] = insert_bits(a.u8[26], b.u8[26], most-significant_bits_mask(8, (b.u8[26] & 7) + 1));
dst.u8[27] = insert_bits(a.u8[27], b.u8[27], most-significant_bits_mask(8, (b.u8[27] & 7) + 1));
dst.u8[28] = insert_bits(a.u8[28], b.u8[28], most-significant_bits_mask(8, (b.u8[28] & 7) + 1));
dst.u8[29] = insert_bits(a.u8[29], b.u8[29], most-significant_bits_mask(8, (b.u8[29] & 7) + 1));
dst.u8[30] = insert_bits(a.u8[30], b.u8[30], most-significant_bits_mask(8, (b.u8[30] & 7) + 1));
dst.u8[31] = insert_bits(a.u8[31], b.u8[31], most-significant_bits_mask(8, (b.u8[31] & 7) + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsl_b((v32u8)a, (v32u8)b, (v32u8)c);
```

<span id="intrinsic-__lasx_mxbinsl_d"></span>

## __m256i __lasx_mxbinsl_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxbinsl_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxbinsl.d
Builtin: __builtin_lasx_mxbinsl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:351
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u64[0] = insert_bits(a.u64[0], b.u64[0], most-significant_bits_mask(64, (b.u64[0] & 63) + 1));
dst.u64[1] = insert_bits(a.u64[1], b.u64[1], most-significant_bits_mask(64, (b.u64[1] & 63) + 1));
dst.u64[2] = insert_bits(a.u64[2], b.u64[2], most-significant_bits_mask(64, (b.u64[2] & 63) + 1));
dst.u64[3] = insert_bits(a.u64[3], b.u64[3], most-significant_bits_mask(64, (b.u64[3] & 63) + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsl_d((v4u64)a, (v4u64)b, (v4u64)c);
```

<span id="intrinsic-__lasx_mxbinsl_h"></span>

## __m256i __lasx_mxbinsl_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxbinsl_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxbinsl.h
Builtin: __builtin_lasx_mxbinsl_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:337
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u16[0] = insert_bits(a.u16[0], b.u16[0], most-significant_bits_mask(16, (b.u16[0] & 15) + 1));
dst.u16[1] = insert_bits(a.u16[1], b.u16[1], most-significant_bits_mask(16, (b.u16[1] & 15) + 1));
dst.u16[2] = insert_bits(a.u16[2], b.u16[2], most-significant_bits_mask(16, (b.u16[2] & 15) + 1));
dst.u16[3] = insert_bits(a.u16[3], b.u16[3], most-significant_bits_mask(16, (b.u16[3] & 15) + 1));
dst.u16[4] = insert_bits(a.u16[4], b.u16[4], most-significant_bits_mask(16, (b.u16[4] & 15) + 1));
dst.u16[5] = insert_bits(a.u16[5], b.u16[5], most-significant_bits_mask(16, (b.u16[5] & 15) + 1));
dst.u16[6] = insert_bits(a.u16[6], b.u16[6], most-significant_bits_mask(16, (b.u16[6] & 15) + 1));
dst.u16[7] = insert_bits(a.u16[7], b.u16[7], most-significant_bits_mask(16, (b.u16[7] & 15) + 1));
dst.u16[8] = insert_bits(a.u16[8], b.u16[8], most-significant_bits_mask(16, (b.u16[8] & 15) + 1));
dst.u16[9] = insert_bits(a.u16[9], b.u16[9], most-significant_bits_mask(16, (b.u16[9] & 15) + 1));
dst.u16[10] = insert_bits(a.u16[10], b.u16[10], most-significant_bits_mask(16, (b.u16[10] & 15) + 1));
dst.u16[11] = insert_bits(a.u16[11], b.u16[11], most-significant_bits_mask(16, (b.u16[11] & 15) + 1));
dst.u16[12] = insert_bits(a.u16[12], b.u16[12], most-significant_bits_mask(16, (b.u16[12] & 15) + 1));
dst.u16[13] = insert_bits(a.u16[13], b.u16[13], most-significant_bits_mask(16, (b.u16[13] & 15) + 1));
dst.u16[14] = insert_bits(a.u16[14], b.u16[14], most-significant_bits_mask(16, (b.u16[14] & 15) + 1));
dst.u16[15] = insert_bits(a.u16[15], b.u16[15], most-significant_bits_mask(16, (b.u16[15] & 15) + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsl_h((v16u16)a, (v16u16)b, (v16u16)c);
```

<span id="intrinsic-__lasx_mxbinsl_w"></span>

## __m256i __lasx_mxbinsl_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxbinsl_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxbinsl.w
Builtin: __builtin_lasx_mxbinsl_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:344
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u32[0] = insert_bits(a.u32[0], b.u32[0], most-significant_bits_mask(32, (b.u32[0] & 31) + 1));
dst.u32[1] = insert_bits(a.u32[1], b.u32[1], most-significant_bits_mask(32, (b.u32[1] & 31) + 1));
dst.u32[2] = insert_bits(a.u32[2], b.u32[2], most-significant_bits_mask(32, (b.u32[2] & 31) + 1));
dst.u32[3] = insert_bits(a.u32[3], b.u32[3], most-significant_bits_mask(32, (b.u32[3] & 31) + 1));
dst.u32[4] = insert_bits(a.u32[4], b.u32[4], most-significant_bits_mask(32, (b.u32[4] & 31) + 1));
dst.u32[5] = insert_bits(a.u32[5], b.u32[5], most-significant_bits_mask(32, (b.u32[5] & 31) + 1));
dst.u32[6] = insert_bits(a.u32[6], b.u32[6], most-significant_bits_mask(32, (b.u32[6] & 31) + 1));
dst.u32[7] = insert_bits(a.u32[7], b.u32[7], most-significant_bits_mask(32, (b.u32[7] & 31) + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsl_w((v8u32)a, (v8u32)b, (v8u32)c);
```

<span id="intrinsic-__lasx_mxbinsli_b"></span>

## __m256i __lasx_mxbinsli_b (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbinsli_b (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbinsli.b
Builtin: __builtin_lasx_mxbinsli_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:357
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u8[0] = insert_bits(a.u8[0], b.u8[0], most-significant_bits_mask(8, imm + 1));
dst.u8[1] = insert_bits(a.u8[1], b.u8[1], most-significant_bits_mask(8, imm + 1));
dst.u8[2] = insert_bits(a.u8[2], b.u8[2], most-significant_bits_mask(8, imm + 1));
dst.u8[3] = insert_bits(a.u8[3], b.u8[3], most-significant_bits_mask(8, imm + 1));
dst.u8[4] = insert_bits(a.u8[4], b.u8[4], most-significant_bits_mask(8, imm + 1));
dst.u8[5] = insert_bits(a.u8[5], b.u8[5], most-significant_bits_mask(8, imm + 1));
dst.u8[6] = insert_bits(a.u8[6], b.u8[6], most-significant_bits_mask(8, imm + 1));
dst.u8[7] = insert_bits(a.u8[7], b.u8[7], most-significant_bits_mask(8, imm + 1));
dst.u8[8] = insert_bits(a.u8[8], b.u8[8], most-significant_bits_mask(8, imm + 1));
dst.u8[9] = insert_bits(a.u8[9], b.u8[9], most-significant_bits_mask(8, imm + 1));
dst.u8[10] = insert_bits(a.u8[10], b.u8[10], most-significant_bits_mask(8, imm + 1));
dst.u8[11] = insert_bits(a.u8[11], b.u8[11], most-significant_bits_mask(8, imm + 1));
dst.u8[12] = insert_bits(a.u8[12], b.u8[12], most-significant_bits_mask(8, imm + 1));
dst.u8[13] = insert_bits(a.u8[13], b.u8[13], most-significant_bits_mask(8, imm + 1));
dst.u8[14] = insert_bits(a.u8[14], b.u8[14], most-significant_bits_mask(8, imm + 1));
dst.u8[15] = insert_bits(a.u8[15], b.u8[15], most-significant_bits_mask(8, imm + 1));
dst.u8[16] = insert_bits(a.u8[16], b.u8[16], most-significant_bits_mask(8, imm + 1));
dst.u8[17] = insert_bits(a.u8[17], b.u8[17], most-significant_bits_mask(8, imm + 1));
dst.u8[18] = insert_bits(a.u8[18], b.u8[18], most-significant_bits_mask(8, imm + 1));
dst.u8[19] = insert_bits(a.u8[19], b.u8[19], most-significant_bits_mask(8, imm + 1));
dst.u8[20] = insert_bits(a.u8[20], b.u8[20], most-significant_bits_mask(8, imm + 1));
dst.u8[21] = insert_bits(a.u8[21], b.u8[21], most-significant_bits_mask(8, imm + 1));
dst.u8[22] = insert_bits(a.u8[22], b.u8[22], most-significant_bits_mask(8, imm + 1));
dst.u8[23] = insert_bits(a.u8[23], b.u8[23], most-significant_bits_mask(8, imm + 1));
dst.u8[24] = insert_bits(a.u8[24], b.u8[24], most-significant_bits_mask(8, imm + 1));
dst.u8[25] = insert_bits(a.u8[25], b.u8[25], most-significant_bits_mask(8, imm + 1));
dst.u8[26] = insert_bits(a.u8[26], b.u8[26], most-significant_bits_mask(8, imm + 1));
dst.u8[27] = insert_bits(a.u8[27], b.u8[27], most-significant_bits_mask(8, imm + 1));
dst.u8[28] = insert_bits(a.u8[28], b.u8[28], most-significant_bits_mask(8, imm + 1));
dst.u8[29] = insert_bits(a.u8[29], b.u8[29], most-significant_bits_mask(8, imm + 1));
dst.u8[30] = insert_bits(a.u8[30], b.u8[30], most-significant_bits_mask(8, imm + 1));
dst.u8[31] = insert_bits(a.u8[31], b.u8[31], most-significant_bits_mask(8, imm + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbinsli_b(a, b, imm) ((__m256i)__builtin_lasx_mxbinsli_b((v32u8)(a), (v32u8)(b), (imm)))
```

<span id="intrinsic-__lasx_mxbinsli_d"></span>

## __m256i __lasx_mxbinsli_d (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbinsli_d (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbinsli.d
Builtin: __builtin_lasx_mxbinsli_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:360
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u64[0] = insert_bits(a.u64[0], b.u64[0], most-significant_bits_mask(64, imm + 1));
dst.u64[1] = insert_bits(a.u64[1], b.u64[1], most-significant_bits_mask(64, imm + 1));
dst.u64[2] = insert_bits(a.u64[2], b.u64[2], most-significant_bits_mask(64, imm + 1));
dst.u64[3] = insert_bits(a.u64[3], b.u64[3], most-significant_bits_mask(64, imm + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbinsli_d(a, b, imm) ((__m256i)__builtin_lasx_mxbinsli_d((v4u64)(a), (v4u64)(b), (imm)))
```

<span id="intrinsic-__lasx_mxbinsli_h"></span>

## __m256i __lasx_mxbinsli_h (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbinsli_h (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbinsli.h
Builtin: __builtin_lasx_mxbinsli_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:358
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u16[0] = insert_bits(a.u16[0], b.u16[0], most-significant_bits_mask(16, imm + 1));
dst.u16[1] = insert_bits(a.u16[1], b.u16[1], most-significant_bits_mask(16, imm + 1));
dst.u16[2] = insert_bits(a.u16[2], b.u16[2], most-significant_bits_mask(16, imm + 1));
dst.u16[3] = insert_bits(a.u16[3], b.u16[3], most-significant_bits_mask(16, imm + 1));
dst.u16[4] = insert_bits(a.u16[4], b.u16[4], most-significant_bits_mask(16, imm + 1));
dst.u16[5] = insert_bits(a.u16[5], b.u16[5], most-significant_bits_mask(16, imm + 1));
dst.u16[6] = insert_bits(a.u16[6], b.u16[6], most-significant_bits_mask(16, imm + 1));
dst.u16[7] = insert_bits(a.u16[7], b.u16[7], most-significant_bits_mask(16, imm + 1));
dst.u16[8] = insert_bits(a.u16[8], b.u16[8], most-significant_bits_mask(16, imm + 1));
dst.u16[9] = insert_bits(a.u16[9], b.u16[9], most-significant_bits_mask(16, imm + 1));
dst.u16[10] = insert_bits(a.u16[10], b.u16[10], most-significant_bits_mask(16, imm + 1));
dst.u16[11] = insert_bits(a.u16[11], b.u16[11], most-significant_bits_mask(16, imm + 1));
dst.u16[12] = insert_bits(a.u16[12], b.u16[12], most-significant_bits_mask(16, imm + 1));
dst.u16[13] = insert_bits(a.u16[13], b.u16[13], most-significant_bits_mask(16, imm + 1));
dst.u16[14] = insert_bits(a.u16[14], b.u16[14], most-significant_bits_mask(16, imm + 1));
dst.u16[15] = insert_bits(a.u16[15], b.u16[15], most-significant_bits_mask(16, imm + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbinsli_h(a, b, imm) ((__m256i)__builtin_lasx_mxbinsli_h((v16u16)(a), (v16u16)(b), (imm)))
```

<span id="intrinsic-__lasx_mxbinsli_w"></span>

## __m256i __lasx_mxbinsli_w (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbinsli_w (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbinsli.w
Builtin: __builtin_lasx_mxbinsli_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:359
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u32[0] = insert_bits(a.u32[0], b.u32[0], most-significant_bits_mask(32, imm + 1));
dst.u32[1] = insert_bits(a.u32[1], b.u32[1], most-significant_bits_mask(32, imm + 1));
dst.u32[2] = insert_bits(a.u32[2], b.u32[2], most-significant_bits_mask(32, imm + 1));
dst.u32[3] = insert_bits(a.u32[3], b.u32[3], most-significant_bits_mask(32, imm + 1));
dst.u32[4] = insert_bits(a.u32[4], b.u32[4], most-significant_bits_mask(32, imm + 1));
dst.u32[5] = insert_bits(a.u32[5], b.u32[5], most-significant_bits_mask(32, imm + 1));
dst.u32[6] = insert_bits(a.u32[6], b.u32[6], most-significant_bits_mask(32, imm + 1));
dst.u32[7] = insert_bits(a.u32[7], b.u32[7], most-significant_bits_mask(32, imm + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbinsli_w(a, b, imm) ((__m256i)__builtin_lasx_mxbinsli_w((v8u32)(a), (v8u32)(b), (imm)))
```

<span id="intrinsic-__lasx_mxbinsr_b"></span>

## __m256i __lasx_mxbinsr_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxbinsr_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxbinsr.b
Builtin: __builtin_lasx_mxbinsr_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:362
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u8[0] = insert_bits(a.u8[0], b.u8[0], least-significant_bits_mask(8, (b.u8[0] & 7) + 1));
dst.u8[1] = insert_bits(a.u8[1], b.u8[1], least-significant_bits_mask(8, (b.u8[1] & 7) + 1));
dst.u8[2] = insert_bits(a.u8[2], b.u8[2], least-significant_bits_mask(8, (b.u8[2] & 7) + 1));
dst.u8[3] = insert_bits(a.u8[3], b.u8[3], least-significant_bits_mask(8, (b.u8[3] & 7) + 1));
dst.u8[4] = insert_bits(a.u8[4], b.u8[4], least-significant_bits_mask(8, (b.u8[4] & 7) + 1));
dst.u8[5] = insert_bits(a.u8[5], b.u8[5], least-significant_bits_mask(8, (b.u8[5] & 7) + 1));
dst.u8[6] = insert_bits(a.u8[6], b.u8[6], least-significant_bits_mask(8, (b.u8[6] & 7) + 1));
dst.u8[7] = insert_bits(a.u8[7], b.u8[7], least-significant_bits_mask(8, (b.u8[7] & 7) + 1));
dst.u8[8] = insert_bits(a.u8[8], b.u8[8], least-significant_bits_mask(8, (b.u8[8] & 7) + 1));
dst.u8[9] = insert_bits(a.u8[9], b.u8[9], least-significant_bits_mask(8, (b.u8[9] & 7) + 1));
dst.u8[10] = insert_bits(a.u8[10], b.u8[10], least-significant_bits_mask(8, (b.u8[10] & 7) + 1));
dst.u8[11] = insert_bits(a.u8[11], b.u8[11], least-significant_bits_mask(8, (b.u8[11] & 7) + 1));
dst.u8[12] = insert_bits(a.u8[12], b.u8[12], least-significant_bits_mask(8, (b.u8[12] & 7) + 1));
dst.u8[13] = insert_bits(a.u8[13], b.u8[13], least-significant_bits_mask(8, (b.u8[13] & 7) + 1));
dst.u8[14] = insert_bits(a.u8[14], b.u8[14], least-significant_bits_mask(8, (b.u8[14] & 7) + 1));
dst.u8[15] = insert_bits(a.u8[15], b.u8[15], least-significant_bits_mask(8, (b.u8[15] & 7) + 1));
dst.u8[16] = insert_bits(a.u8[16], b.u8[16], least-significant_bits_mask(8, (b.u8[16] & 7) + 1));
dst.u8[17] = insert_bits(a.u8[17], b.u8[17], least-significant_bits_mask(8, (b.u8[17] & 7) + 1));
dst.u8[18] = insert_bits(a.u8[18], b.u8[18], least-significant_bits_mask(8, (b.u8[18] & 7) + 1));
dst.u8[19] = insert_bits(a.u8[19], b.u8[19], least-significant_bits_mask(8, (b.u8[19] & 7) + 1));
dst.u8[20] = insert_bits(a.u8[20], b.u8[20], least-significant_bits_mask(8, (b.u8[20] & 7) + 1));
dst.u8[21] = insert_bits(a.u8[21], b.u8[21], least-significant_bits_mask(8, (b.u8[21] & 7) + 1));
dst.u8[22] = insert_bits(a.u8[22], b.u8[22], least-significant_bits_mask(8, (b.u8[22] & 7) + 1));
dst.u8[23] = insert_bits(a.u8[23], b.u8[23], least-significant_bits_mask(8, (b.u8[23] & 7) + 1));
dst.u8[24] = insert_bits(a.u8[24], b.u8[24], least-significant_bits_mask(8, (b.u8[24] & 7) + 1));
dst.u8[25] = insert_bits(a.u8[25], b.u8[25], least-significant_bits_mask(8, (b.u8[25] & 7) + 1));
dst.u8[26] = insert_bits(a.u8[26], b.u8[26], least-significant_bits_mask(8, (b.u8[26] & 7) + 1));
dst.u8[27] = insert_bits(a.u8[27], b.u8[27], least-significant_bits_mask(8, (b.u8[27] & 7) + 1));
dst.u8[28] = insert_bits(a.u8[28], b.u8[28], least-significant_bits_mask(8, (b.u8[28] & 7) + 1));
dst.u8[29] = insert_bits(a.u8[29], b.u8[29], least-significant_bits_mask(8, (b.u8[29] & 7) + 1));
dst.u8[30] = insert_bits(a.u8[30], b.u8[30], least-significant_bits_mask(8, (b.u8[30] & 7) + 1));
dst.u8[31] = insert_bits(a.u8[31], b.u8[31], least-significant_bits_mask(8, (b.u8[31] & 7) + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsr_b((v32u8)a, (v32u8)b, (v32u8)c);
```

<span id="intrinsic-__lasx_mxbinsr_d"></span>

## __m256i __lasx_mxbinsr_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxbinsr_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxbinsr.d
Builtin: __builtin_lasx_mxbinsr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:383
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u64[0] = insert_bits(a.u64[0], b.u64[0], least-significant_bits_mask(64, (b.u64[0] & 63) + 1));
dst.u64[1] = insert_bits(a.u64[1], b.u64[1], least-significant_bits_mask(64, (b.u64[1] & 63) + 1));
dst.u64[2] = insert_bits(a.u64[2], b.u64[2], least-significant_bits_mask(64, (b.u64[2] & 63) + 1));
dst.u64[3] = insert_bits(a.u64[3], b.u64[3], least-significant_bits_mask(64, (b.u64[3] & 63) + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsr_d((v4u64)a, (v4u64)b, (v4u64)c);
```

<span id="intrinsic-__lasx_mxbinsr_h"></span>

## __m256i __lasx_mxbinsr_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxbinsr_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxbinsr.h
Builtin: __builtin_lasx_mxbinsr_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:369
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u16[0] = insert_bits(a.u16[0], b.u16[0], least-significant_bits_mask(16, (b.u16[0] & 15) + 1));
dst.u16[1] = insert_bits(a.u16[1], b.u16[1], least-significant_bits_mask(16, (b.u16[1] & 15) + 1));
dst.u16[2] = insert_bits(a.u16[2], b.u16[2], least-significant_bits_mask(16, (b.u16[2] & 15) + 1));
dst.u16[3] = insert_bits(a.u16[3], b.u16[3], least-significant_bits_mask(16, (b.u16[3] & 15) + 1));
dst.u16[4] = insert_bits(a.u16[4], b.u16[4], least-significant_bits_mask(16, (b.u16[4] & 15) + 1));
dst.u16[5] = insert_bits(a.u16[5], b.u16[5], least-significant_bits_mask(16, (b.u16[5] & 15) + 1));
dst.u16[6] = insert_bits(a.u16[6], b.u16[6], least-significant_bits_mask(16, (b.u16[6] & 15) + 1));
dst.u16[7] = insert_bits(a.u16[7], b.u16[7], least-significant_bits_mask(16, (b.u16[7] & 15) + 1));
dst.u16[8] = insert_bits(a.u16[8], b.u16[8], least-significant_bits_mask(16, (b.u16[8] & 15) + 1));
dst.u16[9] = insert_bits(a.u16[9], b.u16[9], least-significant_bits_mask(16, (b.u16[9] & 15) + 1));
dst.u16[10] = insert_bits(a.u16[10], b.u16[10], least-significant_bits_mask(16, (b.u16[10] & 15) + 1));
dst.u16[11] = insert_bits(a.u16[11], b.u16[11], least-significant_bits_mask(16, (b.u16[11] & 15) + 1));
dst.u16[12] = insert_bits(a.u16[12], b.u16[12], least-significant_bits_mask(16, (b.u16[12] & 15) + 1));
dst.u16[13] = insert_bits(a.u16[13], b.u16[13], least-significant_bits_mask(16, (b.u16[13] & 15) + 1));
dst.u16[14] = insert_bits(a.u16[14], b.u16[14], least-significant_bits_mask(16, (b.u16[14] & 15) + 1));
dst.u16[15] = insert_bits(a.u16[15], b.u16[15], least-significant_bits_mask(16, (b.u16[15] & 15) + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsr_h((v16u16)a, (v16u16)b, (v16u16)c);
```

<span id="intrinsic-__lasx_mxbinsr_w"></span>

## __m256i __lasx_mxbinsr_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxbinsr_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxbinsr.w
Builtin: __builtin_lasx_mxbinsr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:376
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u32[0] = insert_bits(a.u32[0], b.u32[0], least-significant_bits_mask(32, (b.u32[0] & 31) + 1));
dst.u32[1] = insert_bits(a.u32[1], b.u32[1], least-significant_bits_mask(32, (b.u32[1] & 31) + 1));
dst.u32[2] = insert_bits(a.u32[2], b.u32[2], least-significant_bits_mask(32, (b.u32[2] & 31) + 1));
dst.u32[3] = insert_bits(a.u32[3], b.u32[3], least-significant_bits_mask(32, (b.u32[3] & 31) + 1));
dst.u32[4] = insert_bits(a.u32[4], b.u32[4], least-significant_bits_mask(32, (b.u32[4] & 31) + 1));
dst.u32[5] = insert_bits(a.u32[5], b.u32[5], least-significant_bits_mask(32, (b.u32[5] & 31) + 1));
dst.u32[6] = insert_bits(a.u32[6], b.u32[6], least-significant_bits_mask(32, (b.u32[6] & 31) + 1));
dst.u32[7] = insert_bits(a.u32[7], b.u32[7], least-significant_bits_mask(32, (b.u32[7] & 31) + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbinsr_w((v8u32)a, (v8u32)b, (v8u32)c);
```

<span id="intrinsic-__lasx_mxbinsri_b"></span>

## __m256i __lasx_mxbinsri_b (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbinsri_b (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbinsri.b
Builtin: __builtin_lasx_mxbinsri_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:389
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u8[0] = insert_bits(a.u8[0], b.u8[0], least-significant_bits_mask(8, imm + 1));
dst.u8[1] = insert_bits(a.u8[1], b.u8[1], least-significant_bits_mask(8, imm + 1));
dst.u8[2] = insert_bits(a.u8[2], b.u8[2], least-significant_bits_mask(8, imm + 1));
dst.u8[3] = insert_bits(a.u8[3], b.u8[3], least-significant_bits_mask(8, imm + 1));
dst.u8[4] = insert_bits(a.u8[4], b.u8[4], least-significant_bits_mask(8, imm + 1));
dst.u8[5] = insert_bits(a.u8[5], b.u8[5], least-significant_bits_mask(8, imm + 1));
dst.u8[6] = insert_bits(a.u8[6], b.u8[6], least-significant_bits_mask(8, imm + 1));
dst.u8[7] = insert_bits(a.u8[7], b.u8[7], least-significant_bits_mask(8, imm + 1));
dst.u8[8] = insert_bits(a.u8[8], b.u8[8], least-significant_bits_mask(8, imm + 1));
dst.u8[9] = insert_bits(a.u8[9], b.u8[9], least-significant_bits_mask(8, imm + 1));
dst.u8[10] = insert_bits(a.u8[10], b.u8[10], least-significant_bits_mask(8, imm + 1));
dst.u8[11] = insert_bits(a.u8[11], b.u8[11], least-significant_bits_mask(8, imm + 1));
dst.u8[12] = insert_bits(a.u8[12], b.u8[12], least-significant_bits_mask(8, imm + 1));
dst.u8[13] = insert_bits(a.u8[13], b.u8[13], least-significant_bits_mask(8, imm + 1));
dst.u8[14] = insert_bits(a.u8[14], b.u8[14], least-significant_bits_mask(8, imm + 1));
dst.u8[15] = insert_bits(a.u8[15], b.u8[15], least-significant_bits_mask(8, imm + 1));
dst.u8[16] = insert_bits(a.u8[16], b.u8[16], least-significant_bits_mask(8, imm + 1));
dst.u8[17] = insert_bits(a.u8[17], b.u8[17], least-significant_bits_mask(8, imm + 1));
dst.u8[18] = insert_bits(a.u8[18], b.u8[18], least-significant_bits_mask(8, imm + 1));
dst.u8[19] = insert_bits(a.u8[19], b.u8[19], least-significant_bits_mask(8, imm + 1));
dst.u8[20] = insert_bits(a.u8[20], b.u8[20], least-significant_bits_mask(8, imm + 1));
dst.u8[21] = insert_bits(a.u8[21], b.u8[21], least-significant_bits_mask(8, imm + 1));
dst.u8[22] = insert_bits(a.u8[22], b.u8[22], least-significant_bits_mask(8, imm + 1));
dst.u8[23] = insert_bits(a.u8[23], b.u8[23], least-significant_bits_mask(8, imm + 1));
dst.u8[24] = insert_bits(a.u8[24], b.u8[24], least-significant_bits_mask(8, imm + 1));
dst.u8[25] = insert_bits(a.u8[25], b.u8[25], least-significant_bits_mask(8, imm + 1));
dst.u8[26] = insert_bits(a.u8[26], b.u8[26], least-significant_bits_mask(8, imm + 1));
dst.u8[27] = insert_bits(a.u8[27], b.u8[27], least-significant_bits_mask(8, imm + 1));
dst.u8[28] = insert_bits(a.u8[28], b.u8[28], least-significant_bits_mask(8, imm + 1));
dst.u8[29] = insert_bits(a.u8[29], b.u8[29], least-significant_bits_mask(8, imm + 1));
dst.u8[30] = insert_bits(a.u8[30], b.u8[30], least-significant_bits_mask(8, imm + 1));
dst.u8[31] = insert_bits(a.u8[31], b.u8[31], least-significant_bits_mask(8, imm + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbinsri_b(a, b, imm) ((__m256i)__builtin_lasx_mxbinsri_b((v32u8)(a), (v32u8)(b), (imm)))
```

<span id="intrinsic-__lasx_mxbinsri_d"></span>

## __m256i __lasx_mxbinsri_d (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbinsri_d (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbinsri.d
Builtin: __builtin_lasx_mxbinsri_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:392
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u64[0] = insert_bits(a.u64[0], b.u64[0], least-significant_bits_mask(64, imm + 1));
dst.u64[1] = insert_bits(a.u64[1], b.u64[1], least-significant_bits_mask(64, imm + 1));
dst.u64[2] = insert_bits(a.u64[2], b.u64[2], least-significant_bits_mask(64, imm + 1));
dst.u64[3] = insert_bits(a.u64[3], b.u64[3], least-significant_bits_mask(64, imm + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbinsri_d(a, b, imm) ((__m256i)__builtin_lasx_mxbinsri_d((v4u64)(a), (v4u64)(b), (imm)))
```

<span id="intrinsic-__lasx_mxbinsri_h"></span>

## __m256i __lasx_mxbinsri_h (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbinsri_h (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbinsri.h
Builtin: __builtin_lasx_mxbinsri_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:390
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u16[0] = insert_bits(a.u16[0], b.u16[0], least-significant_bits_mask(16, imm + 1));
dst.u16[1] = insert_bits(a.u16[1], b.u16[1], least-significant_bits_mask(16, imm + 1));
dst.u16[2] = insert_bits(a.u16[2], b.u16[2], least-significant_bits_mask(16, imm + 1));
dst.u16[3] = insert_bits(a.u16[3], b.u16[3], least-significant_bits_mask(16, imm + 1));
dst.u16[4] = insert_bits(a.u16[4], b.u16[4], least-significant_bits_mask(16, imm + 1));
dst.u16[5] = insert_bits(a.u16[5], b.u16[5], least-significant_bits_mask(16, imm + 1));
dst.u16[6] = insert_bits(a.u16[6], b.u16[6], least-significant_bits_mask(16, imm + 1));
dst.u16[7] = insert_bits(a.u16[7], b.u16[7], least-significant_bits_mask(16, imm + 1));
dst.u16[8] = insert_bits(a.u16[8], b.u16[8], least-significant_bits_mask(16, imm + 1));
dst.u16[9] = insert_bits(a.u16[9], b.u16[9], least-significant_bits_mask(16, imm + 1));
dst.u16[10] = insert_bits(a.u16[10], b.u16[10], least-significant_bits_mask(16, imm + 1));
dst.u16[11] = insert_bits(a.u16[11], b.u16[11], least-significant_bits_mask(16, imm + 1));
dst.u16[12] = insert_bits(a.u16[12], b.u16[12], least-significant_bits_mask(16, imm + 1));
dst.u16[13] = insert_bits(a.u16[13], b.u16[13], least-significant_bits_mask(16, imm + 1));
dst.u16[14] = insert_bits(a.u16[14], b.u16[14], least-significant_bits_mask(16, imm + 1));
dst.u16[15] = insert_bits(a.u16[15], b.u16[15], least-significant_bits_mask(16, imm + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbinsri_h(a, b, imm) ((__m256i)__builtin_lasx_mxbinsri_h((v16u16)(a), (v16u16)(b), (imm)))
```

<span id="intrinsic-__lasx_mxbinsri_w"></span>

## __m256i __lasx_mxbinsri_w (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbinsri_w (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbinsri.w
Builtin: __builtin_lasx_mxbinsri_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:391
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u32[0] = insert_bits(a.u32[0], b.u32[0], least-significant_bits_mask(32, imm + 1));
dst.u32[1] = insert_bits(a.u32[1], b.u32[1], least-significant_bits_mask(32, imm + 1));
dst.u32[2] = insert_bits(a.u32[2], b.u32[2], least-significant_bits_mask(32, imm + 1));
dst.u32[3] = insert_bits(a.u32[3], b.u32[3], least-significant_bits_mask(32, imm + 1));
dst.u32[4] = insert_bits(a.u32[4], b.u32[4], least-significant_bits_mask(32, imm + 1));
dst.u32[5] = insert_bits(a.u32[5], b.u32[5], least-significant_bits_mask(32, imm + 1));
dst.u32[6] = insert_bits(a.u32[6], b.u32[6], least-significant_bits_mask(32, imm + 1));
dst.u32[7] = insert_bits(a.u32[7], b.u32[7], least-significant_bits_mask(32, imm + 1));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbinsri_w(a, b, imm) ((__m256i)__builtin_lasx_mxbinsri_w((v8u32)(a), (v8u32)(b), (imm)))
```

<span id="intrinsic-__lasx_mxbneg_b"></span>

## __m256i __lasx_mxbneg_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxbneg_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxbneg.b
Builtin: __builtin_lasx_mxbneg_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:298
```

### Description

Toggle one selected bit in each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] ^ (1 << (b.u8[0] & 7));
dst.u8[1] = a.u8[1] ^ (1 << (b.u8[1] & 7));
dst.u8[2] = a.u8[2] ^ (1 << (b.u8[2] & 7));
dst.u8[3] = a.u8[3] ^ (1 << (b.u8[3] & 7));
dst.u8[4] = a.u8[4] ^ (1 << (b.u8[4] & 7));
dst.u8[5] = a.u8[5] ^ (1 << (b.u8[5] & 7));
dst.u8[6] = a.u8[6] ^ (1 << (b.u8[6] & 7));
dst.u8[7] = a.u8[7] ^ (1 << (b.u8[7] & 7));
dst.u8[8] = a.u8[8] ^ (1 << (b.u8[8] & 7));
dst.u8[9] = a.u8[9] ^ (1 << (b.u8[9] & 7));
dst.u8[10] = a.u8[10] ^ (1 << (b.u8[10] & 7));
dst.u8[11] = a.u8[11] ^ (1 << (b.u8[11] & 7));
dst.u8[12] = a.u8[12] ^ (1 << (b.u8[12] & 7));
dst.u8[13] = a.u8[13] ^ (1 << (b.u8[13] & 7));
dst.u8[14] = a.u8[14] ^ (1 << (b.u8[14] & 7));
dst.u8[15] = a.u8[15] ^ (1 << (b.u8[15] & 7));
dst.u8[16] = a.u8[16] ^ (1 << (b.u8[16] & 7));
dst.u8[17] = a.u8[17] ^ (1 << (b.u8[17] & 7));
dst.u8[18] = a.u8[18] ^ (1 << (b.u8[18] & 7));
dst.u8[19] = a.u8[19] ^ (1 << (b.u8[19] & 7));
dst.u8[20] = a.u8[20] ^ (1 << (b.u8[20] & 7));
dst.u8[21] = a.u8[21] ^ (1 << (b.u8[21] & 7));
dst.u8[22] = a.u8[22] ^ (1 << (b.u8[22] & 7));
dst.u8[23] = a.u8[23] ^ (1 << (b.u8[23] & 7));
dst.u8[24] = a.u8[24] ^ (1 << (b.u8[24] & 7));
dst.u8[25] = a.u8[25] ^ (1 << (b.u8[25] & 7));
dst.u8[26] = a.u8[26] ^ (1 << (b.u8[26] & 7));
dst.u8[27] = a.u8[27] ^ (1 << (b.u8[27] & 7));
dst.u8[28] = a.u8[28] ^ (1 << (b.u8[28] & 7));
dst.u8[29] = a.u8[29] ^ (1 << (b.u8[29] & 7));
dst.u8[30] = a.u8[30] ^ (1 << (b.u8[30] & 7));
dst.u8[31] = a.u8[31] ^ (1 << (b.u8[31] & 7));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbneg_b((v32u8)a, (v32u8)b);
```

<span id="intrinsic-__lasx_mxbneg_d"></span>

## __m256i __lasx_mxbneg_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxbneg_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxbneg.d
Builtin: __builtin_lasx_mxbneg_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:319
```

### Description

Toggle one selected bit in each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] ^ (1 << (b.u64[0] & 63));
dst.u64[1] = a.u64[1] ^ (1 << (b.u64[1] & 63));
dst.u64[2] = a.u64[2] ^ (1 << (b.u64[2] & 63));
dst.u64[3] = a.u64[3] ^ (1 << (b.u64[3] & 63));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbneg_d((v4u64)a, (v4u64)b);
```

<span id="intrinsic-__lasx_mxbneg_h"></span>

## __m256i __lasx_mxbneg_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxbneg_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxbneg.h
Builtin: __builtin_lasx_mxbneg_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:305
```

### Description

Toggle one selected bit in each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] ^ (1 << (b.u16[0] & 15));
dst.u16[1] = a.u16[1] ^ (1 << (b.u16[1] & 15));
dst.u16[2] = a.u16[2] ^ (1 << (b.u16[2] & 15));
dst.u16[3] = a.u16[3] ^ (1 << (b.u16[3] & 15));
dst.u16[4] = a.u16[4] ^ (1 << (b.u16[4] & 15));
dst.u16[5] = a.u16[5] ^ (1 << (b.u16[5] & 15));
dst.u16[6] = a.u16[6] ^ (1 << (b.u16[6] & 15));
dst.u16[7] = a.u16[7] ^ (1 << (b.u16[7] & 15));
dst.u16[8] = a.u16[8] ^ (1 << (b.u16[8] & 15));
dst.u16[9] = a.u16[9] ^ (1 << (b.u16[9] & 15));
dst.u16[10] = a.u16[10] ^ (1 << (b.u16[10] & 15));
dst.u16[11] = a.u16[11] ^ (1 << (b.u16[11] & 15));
dst.u16[12] = a.u16[12] ^ (1 << (b.u16[12] & 15));
dst.u16[13] = a.u16[13] ^ (1 << (b.u16[13] & 15));
dst.u16[14] = a.u16[14] ^ (1 << (b.u16[14] & 15));
dst.u16[15] = a.u16[15] ^ (1 << (b.u16[15] & 15));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbneg_h((v16u16)a, (v16u16)b);
```

<span id="intrinsic-__lasx_mxbneg_w"></span>

## __m256i __lasx_mxbneg_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxbneg_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxbneg.w
Builtin: __builtin_lasx_mxbneg_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:312
```

### Description

Toggle one selected bit in each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] ^ (1 << (b.u32[0] & 31));
dst.u32[1] = a.u32[1] ^ (1 << (b.u32[1] & 31));
dst.u32[2] = a.u32[2] ^ (1 << (b.u32[2] & 31));
dst.u32[3] = a.u32[3] ^ (1 << (b.u32[3] & 31));
dst.u32[4] = a.u32[4] ^ (1 << (b.u32[4] & 31));
dst.u32[5] = a.u32[5] ^ (1 << (b.u32[5] & 31));
dst.u32[6] = a.u32[6] ^ (1 << (b.u32[6] & 31));
dst.u32[7] = a.u32[7] ^ (1 << (b.u32[7] & 31));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbneg_w((v8u32)a, (v8u32)b);
```

<span id="intrinsic-__lasx_mxbnegi_b"></span>

## __m256i __lasx_mxbnegi_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbnegi_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbnegi.b
Builtin: __builtin_lasx_mxbnegi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:325
```

### Description

Toggle one selected bit in each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] ^ (1 << (imm));
dst.u8[1] = a.u8[1] ^ (1 << (imm));
dst.u8[2] = a.u8[2] ^ (1 << (imm));
dst.u8[3] = a.u8[3] ^ (1 << (imm));
dst.u8[4] = a.u8[4] ^ (1 << (imm));
dst.u8[5] = a.u8[5] ^ (1 << (imm));
dst.u8[6] = a.u8[6] ^ (1 << (imm));
dst.u8[7] = a.u8[7] ^ (1 << (imm));
dst.u8[8] = a.u8[8] ^ (1 << (imm));
dst.u8[9] = a.u8[9] ^ (1 << (imm));
dst.u8[10] = a.u8[10] ^ (1 << (imm));
dst.u8[11] = a.u8[11] ^ (1 << (imm));
dst.u8[12] = a.u8[12] ^ (1 << (imm));
dst.u8[13] = a.u8[13] ^ (1 << (imm));
dst.u8[14] = a.u8[14] ^ (1 << (imm));
dst.u8[15] = a.u8[15] ^ (1 << (imm));
dst.u8[16] = a.u8[16] ^ (1 << (imm));
dst.u8[17] = a.u8[17] ^ (1 << (imm));
dst.u8[18] = a.u8[18] ^ (1 << (imm));
dst.u8[19] = a.u8[19] ^ (1 << (imm));
dst.u8[20] = a.u8[20] ^ (1 << (imm));
dst.u8[21] = a.u8[21] ^ (1 << (imm));
dst.u8[22] = a.u8[22] ^ (1 << (imm));
dst.u8[23] = a.u8[23] ^ (1 << (imm));
dst.u8[24] = a.u8[24] ^ (1 << (imm));
dst.u8[25] = a.u8[25] ^ (1 << (imm));
dst.u8[26] = a.u8[26] ^ (1 << (imm));
dst.u8[27] = a.u8[27] ^ (1 << (imm));
dst.u8[28] = a.u8[28] ^ (1 << (imm));
dst.u8[29] = a.u8[29] ^ (1 << (imm));
dst.u8[30] = a.u8[30] ^ (1 << (imm));
dst.u8[31] = a.u8[31] ^ (1 << (imm));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbnegi_b(a, imm) ((__m256i)__builtin_lasx_mxbnegi_b((v32u8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxbnegi_d"></span>

## __m256i __lasx_mxbnegi_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbnegi_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbnegi.d
Builtin: __builtin_lasx_mxbnegi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:328
```

### Description

Toggle one selected bit in each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] ^ (1 << (imm));
dst.u64[1] = a.u64[1] ^ (1 << (imm));
dst.u64[2] = a.u64[2] ^ (1 << (imm));
dst.u64[3] = a.u64[3] ^ (1 << (imm));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbnegi_d(a, imm) ((__m256i)__builtin_lasx_mxbnegi_d((v4u64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxbnegi_h"></span>

## __m256i __lasx_mxbnegi_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbnegi_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbnegi.h
Builtin: __builtin_lasx_mxbnegi_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:326
```

### Description

Toggle one selected bit in each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] ^ (1 << (imm));
dst.u16[1] = a.u16[1] ^ (1 << (imm));
dst.u16[2] = a.u16[2] ^ (1 << (imm));
dst.u16[3] = a.u16[3] ^ (1 << (imm));
dst.u16[4] = a.u16[4] ^ (1 << (imm));
dst.u16[5] = a.u16[5] ^ (1 << (imm));
dst.u16[6] = a.u16[6] ^ (1 << (imm));
dst.u16[7] = a.u16[7] ^ (1 << (imm));
dst.u16[8] = a.u16[8] ^ (1 << (imm));
dst.u16[9] = a.u16[9] ^ (1 << (imm));
dst.u16[10] = a.u16[10] ^ (1 << (imm));
dst.u16[11] = a.u16[11] ^ (1 << (imm));
dst.u16[12] = a.u16[12] ^ (1 << (imm));
dst.u16[13] = a.u16[13] ^ (1 << (imm));
dst.u16[14] = a.u16[14] ^ (1 << (imm));
dst.u16[15] = a.u16[15] ^ (1 << (imm));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbnegi_h(a, imm) ((__m256i)__builtin_lasx_mxbnegi_h((v16u16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxbnegi_w"></span>

## __m256i __lasx_mxbnegi_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbnegi_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbnegi.w
Builtin: __builtin_lasx_mxbnegi_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:327
```

### Description

Toggle one selected bit in each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] ^ (1 << (imm));
dst.u32[1] = a.u32[1] ^ (1 << (imm));
dst.u32[2] = a.u32[2] ^ (1 << (imm));
dst.u32[3] = a.u32[3] ^ (1 << (imm));
dst.u32[4] = a.u32[4] ^ (1 << (imm));
dst.u32[5] = a.u32[5] ^ (1 << (imm));
dst.u32[6] = a.u32[6] ^ (1 << (imm));
dst.u32[7] = a.u32[7] ^ (1 << (imm));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbnegi_w(a, imm) ((__m256i)__builtin_lasx_mxbnegi_w((v8u32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxbset_b"></span>

## __m256i __lasx_mxbset_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxbset_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxbset.b
Builtin: __builtin_lasx_mxbset_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:266
```

### Description

Set one selected bit in each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] | (1 << (b.u8[0] & 7));
dst.u8[1] = a.u8[1] | (1 << (b.u8[1] & 7));
dst.u8[2] = a.u8[2] | (1 << (b.u8[2] & 7));
dst.u8[3] = a.u8[3] | (1 << (b.u8[3] & 7));
dst.u8[4] = a.u8[4] | (1 << (b.u8[4] & 7));
dst.u8[5] = a.u8[5] | (1 << (b.u8[5] & 7));
dst.u8[6] = a.u8[6] | (1 << (b.u8[6] & 7));
dst.u8[7] = a.u8[7] | (1 << (b.u8[7] & 7));
dst.u8[8] = a.u8[8] | (1 << (b.u8[8] & 7));
dst.u8[9] = a.u8[9] | (1 << (b.u8[9] & 7));
dst.u8[10] = a.u8[10] | (1 << (b.u8[10] & 7));
dst.u8[11] = a.u8[11] | (1 << (b.u8[11] & 7));
dst.u8[12] = a.u8[12] | (1 << (b.u8[12] & 7));
dst.u8[13] = a.u8[13] | (1 << (b.u8[13] & 7));
dst.u8[14] = a.u8[14] | (1 << (b.u8[14] & 7));
dst.u8[15] = a.u8[15] | (1 << (b.u8[15] & 7));
dst.u8[16] = a.u8[16] | (1 << (b.u8[16] & 7));
dst.u8[17] = a.u8[17] | (1 << (b.u8[17] & 7));
dst.u8[18] = a.u8[18] | (1 << (b.u8[18] & 7));
dst.u8[19] = a.u8[19] | (1 << (b.u8[19] & 7));
dst.u8[20] = a.u8[20] | (1 << (b.u8[20] & 7));
dst.u8[21] = a.u8[21] | (1 << (b.u8[21] & 7));
dst.u8[22] = a.u8[22] | (1 << (b.u8[22] & 7));
dst.u8[23] = a.u8[23] | (1 << (b.u8[23] & 7));
dst.u8[24] = a.u8[24] | (1 << (b.u8[24] & 7));
dst.u8[25] = a.u8[25] | (1 << (b.u8[25] & 7));
dst.u8[26] = a.u8[26] | (1 << (b.u8[26] & 7));
dst.u8[27] = a.u8[27] | (1 << (b.u8[27] & 7));
dst.u8[28] = a.u8[28] | (1 << (b.u8[28] & 7));
dst.u8[29] = a.u8[29] | (1 << (b.u8[29] & 7));
dst.u8[30] = a.u8[30] | (1 << (b.u8[30] & 7));
dst.u8[31] = a.u8[31] | (1 << (b.u8[31] & 7));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbset_b((v32u8)a, (v32u8)b);
```

<span id="intrinsic-__lasx_mxbset_d"></span>

## __m256i __lasx_mxbset_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxbset_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxbset.d
Builtin: __builtin_lasx_mxbset_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:287
```

### Description

Set one selected bit in each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] | (1 << (b.u64[0] & 63));
dst.u64[1] = a.u64[1] | (1 << (b.u64[1] & 63));
dst.u64[2] = a.u64[2] | (1 << (b.u64[2] & 63));
dst.u64[3] = a.u64[3] | (1 << (b.u64[3] & 63));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbset_d((v4u64)a, (v4u64)b);
```

<span id="intrinsic-__lasx_mxbset_h"></span>

## __m256i __lasx_mxbset_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxbset_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxbset.h
Builtin: __builtin_lasx_mxbset_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:273
```

### Description

Set one selected bit in each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] | (1 << (b.u16[0] & 15));
dst.u16[1] = a.u16[1] | (1 << (b.u16[1] & 15));
dst.u16[2] = a.u16[2] | (1 << (b.u16[2] & 15));
dst.u16[3] = a.u16[3] | (1 << (b.u16[3] & 15));
dst.u16[4] = a.u16[4] | (1 << (b.u16[4] & 15));
dst.u16[5] = a.u16[5] | (1 << (b.u16[5] & 15));
dst.u16[6] = a.u16[6] | (1 << (b.u16[6] & 15));
dst.u16[7] = a.u16[7] | (1 << (b.u16[7] & 15));
dst.u16[8] = a.u16[8] | (1 << (b.u16[8] & 15));
dst.u16[9] = a.u16[9] | (1 << (b.u16[9] & 15));
dst.u16[10] = a.u16[10] | (1 << (b.u16[10] & 15));
dst.u16[11] = a.u16[11] | (1 << (b.u16[11] & 15));
dst.u16[12] = a.u16[12] | (1 << (b.u16[12] & 15));
dst.u16[13] = a.u16[13] | (1 << (b.u16[13] & 15));
dst.u16[14] = a.u16[14] | (1 << (b.u16[14] & 15));
dst.u16[15] = a.u16[15] | (1 << (b.u16[15] & 15));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbset_h((v16u16)a, (v16u16)b);
```

<span id="intrinsic-__lasx_mxbset_w"></span>

## __m256i __lasx_mxbset_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxbset_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxbset.w
Builtin: __builtin_lasx_mxbset_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:280
```

### Description

Set one selected bit in each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] | (1 << (b.u32[0] & 31));
dst.u32[1] = a.u32[1] | (1 << (b.u32[1] & 31));
dst.u32[2] = a.u32[2] | (1 << (b.u32[2] & 31));
dst.u32[3] = a.u32[3] | (1 << (b.u32[3] & 31));
dst.u32[4] = a.u32[4] | (1 << (b.u32[4] & 31));
dst.u32[5] = a.u32[5] | (1 << (b.u32[5] & 31));
dst.u32[6] = a.u32[6] | (1 << (b.u32[6] & 31));
dst.u32[7] = a.u32[7] | (1 << (b.u32[7] & 31));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbset_w((v8u32)a, (v8u32)b);
```

<span id="intrinsic-__lasx_mxbseti_b"></span>

## __m256i __lasx_mxbseti_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbseti_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbseti.b
Builtin: __builtin_lasx_mxbseti_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:293
```

### Description

Set one selected bit in each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] | (1 << (imm));
dst.u8[1] = a.u8[1] | (1 << (imm));
dst.u8[2] = a.u8[2] | (1 << (imm));
dst.u8[3] = a.u8[3] | (1 << (imm));
dst.u8[4] = a.u8[4] | (1 << (imm));
dst.u8[5] = a.u8[5] | (1 << (imm));
dst.u8[6] = a.u8[6] | (1 << (imm));
dst.u8[7] = a.u8[7] | (1 << (imm));
dst.u8[8] = a.u8[8] | (1 << (imm));
dst.u8[9] = a.u8[9] | (1 << (imm));
dst.u8[10] = a.u8[10] | (1 << (imm));
dst.u8[11] = a.u8[11] | (1 << (imm));
dst.u8[12] = a.u8[12] | (1 << (imm));
dst.u8[13] = a.u8[13] | (1 << (imm));
dst.u8[14] = a.u8[14] | (1 << (imm));
dst.u8[15] = a.u8[15] | (1 << (imm));
dst.u8[16] = a.u8[16] | (1 << (imm));
dst.u8[17] = a.u8[17] | (1 << (imm));
dst.u8[18] = a.u8[18] | (1 << (imm));
dst.u8[19] = a.u8[19] | (1 << (imm));
dst.u8[20] = a.u8[20] | (1 << (imm));
dst.u8[21] = a.u8[21] | (1 << (imm));
dst.u8[22] = a.u8[22] | (1 << (imm));
dst.u8[23] = a.u8[23] | (1 << (imm));
dst.u8[24] = a.u8[24] | (1 << (imm));
dst.u8[25] = a.u8[25] | (1 << (imm));
dst.u8[26] = a.u8[26] | (1 << (imm));
dst.u8[27] = a.u8[27] | (1 << (imm));
dst.u8[28] = a.u8[28] | (1 << (imm));
dst.u8[29] = a.u8[29] | (1 << (imm));
dst.u8[30] = a.u8[30] | (1 << (imm));
dst.u8[31] = a.u8[31] | (1 << (imm));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbseti_b(a, imm) ((__m256i)__builtin_lasx_mxbseti_b((v32u8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxbseti_d"></span>

## __m256i __lasx_mxbseti_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbseti_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbseti.d
Builtin: __builtin_lasx_mxbseti_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:296
```

### Description

Set one selected bit in each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] | (1 << (imm));
dst.u64[1] = a.u64[1] | (1 << (imm));
dst.u64[2] = a.u64[2] | (1 << (imm));
dst.u64[3] = a.u64[3] | (1 << (imm));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbseti_d(a, imm) ((__m256i)__builtin_lasx_mxbseti_d((v4u64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxbseti_h"></span>

## __m256i __lasx_mxbseti_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbseti_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbseti.h
Builtin: __builtin_lasx_mxbseti_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:294
```

### Description

Set one selected bit in each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] | (1 << (imm));
dst.u16[1] = a.u16[1] | (1 << (imm));
dst.u16[2] = a.u16[2] | (1 << (imm));
dst.u16[3] = a.u16[3] | (1 << (imm));
dst.u16[4] = a.u16[4] | (1 << (imm));
dst.u16[5] = a.u16[5] | (1 << (imm));
dst.u16[6] = a.u16[6] | (1 << (imm));
dst.u16[7] = a.u16[7] | (1 << (imm));
dst.u16[8] = a.u16[8] | (1 << (imm));
dst.u16[9] = a.u16[9] | (1 << (imm));
dst.u16[10] = a.u16[10] | (1 << (imm));
dst.u16[11] = a.u16[11] | (1 << (imm));
dst.u16[12] = a.u16[12] | (1 << (imm));
dst.u16[13] = a.u16[13] | (1 << (imm));
dst.u16[14] = a.u16[14] | (1 << (imm));
dst.u16[15] = a.u16[15] | (1 << (imm));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbseti_h(a, imm) ((__m256i)__builtin_lasx_mxbseti_h((v16u16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxbseti_w"></span>

## __m256i __lasx_mxbseti_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbseti_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbseti.w
Builtin: __builtin_lasx_mxbseti_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:295
```

### Description

Set one selected bit in each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] | (1 << (imm));
dst.u32[1] = a.u32[1] | (1 << (imm));
dst.u32[2] = a.u32[2] | (1 << (imm));
dst.u32[3] = a.u32[3] | (1 << (imm));
dst.u32[4] = a.u32[4] | (1 << (imm));
dst.u32[5] = a.u32[5] | (1 << (imm));
dst.u32[6] = a.u32[6] | (1 << (imm));
dst.u32[7] = a.u32[7] | (1 << (imm));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxbseti_w(a, imm) ((__m256i)__builtin_lasx_mxbseti_w((v8u32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxnloc_b"></span>

## __m256i __lasx_mxnloc_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxnloc_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxnloc.b
Builtin: __builtin_lasx_mxnloc_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1926
```

### Description

Count leading one bits independently in each u8 lane.

### Operation

```c
dst.u8[0] = count_leading_ones(a.u8[0]);
dst.u8[1] = count_leading_ones(a.u8[1]);
dst.u8[2] = count_leading_ones(a.u8[2]);
dst.u8[3] = count_leading_ones(a.u8[3]);
dst.u8[4] = count_leading_ones(a.u8[4]);
dst.u8[5] = count_leading_ones(a.u8[5]);
dst.u8[6] = count_leading_ones(a.u8[6]);
dst.u8[7] = count_leading_ones(a.u8[7]);
dst.u8[8] = count_leading_ones(a.u8[8]);
dst.u8[9] = count_leading_ones(a.u8[9]);
dst.u8[10] = count_leading_ones(a.u8[10]);
dst.u8[11] = count_leading_ones(a.u8[11]);
dst.u8[12] = count_leading_ones(a.u8[12]);
dst.u8[13] = count_leading_ones(a.u8[13]);
dst.u8[14] = count_leading_ones(a.u8[14]);
dst.u8[15] = count_leading_ones(a.u8[15]);
dst.u8[16] = count_leading_ones(a.u8[16]);
dst.u8[17] = count_leading_ones(a.u8[17]);
dst.u8[18] = count_leading_ones(a.u8[18]);
dst.u8[19] = count_leading_ones(a.u8[19]);
dst.u8[20] = count_leading_ones(a.u8[20]);
dst.u8[21] = count_leading_ones(a.u8[21]);
dst.u8[22] = count_leading_ones(a.u8[22]);
dst.u8[23] = count_leading_ones(a.u8[23]);
dst.u8[24] = count_leading_ones(a.u8[24]);
dst.u8[25] = count_leading_ones(a.u8[25]);
dst.u8[26] = count_leading_ones(a.u8[26]);
dst.u8[27] = count_leading_ones(a.u8[27]);
dst.u8[28] = count_leading_ones(a.u8[28]);
dst.u8[29] = count_leading_ones(a.u8[29]);
dst.u8[30] = count_leading_ones(a.u8[30]);
dst.u8[31] = count_leading_ones(a.u8[31]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnloc_b((v32i8)a);
```

<span id="intrinsic-__lasx_mxnloc_d"></span>

## __m256i __lasx_mxnloc_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxnloc_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxnloc.d
Builtin: __builtin_lasx_mxnloc_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1947
```

### Description

Count leading one bits independently in each u64 lane.

### Operation

```c
dst.u64[0] = count_leading_ones(a.u64[0]);
dst.u64[1] = count_leading_ones(a.u64[1]);
dst.u64[2] = count_leading_ones(a.u64[2]);
dst.u64[3] = count_leading_ones(a.u64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnloc_d((v4i64)a);
```

<span id="intrinsic-__lasx_mxnloc_h"></span>

## __m256i __lasx_mxnloc_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxnloc_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxnloc.h
Builtin: __builtin_lasx_mxnloc_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1933
```

### Description

Count leading one bits independently in each u16 lane.

### Operation

```c
dst.u16[0] = count_leading_ones(a.u16[0]);
dst.u16[1] = count_leading_ones(a.u16[1]);
dst.u16[2] = count_leading_ones(a.u16[2]);
dst.u16[3] = count_leading_ones(a.u16[3]);
dst.u16[4] = count_leading_ones(a.u16[4]);
dst.u16[5] = count_leading_ones(a.u16[5]);
dst.u16[6] = count_leading_ones(a.u16[6]);
dst.u16[7] = count_leading_ones(a.u16[7]);
dst.u16[8] = count_leading_ones(a.u16[8]);
dst.u16[9] = count_leading_ones(a.u16[9]);
dst.u16[10] = count_leading_ones(a.u16[10]);
dst.u16[11] = count_leading_ones(a.u16[11]);
dst.u16[12] = count_leading_ones(a.u16[12]);
dst.u16[13] = count_leading_ones(a.u16[13]);
dst.u16[14] = count_leading_ones(a.u16[14]);
dst.u16[15] = count_leading_ones(a.u16[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnloc_h((v16i16)a);
```

<span id="intrinsic-__lasx_mxnloc_w"></span>

## __m256i __lasx_mxnloc_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxnloc_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxnloc.w
Builtin: __builtin_lasx_mxnloc_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1940
```

### Description

Count leading one bits independently in each u32 lane.

### Operation

```c
dst.u32[0] = count_leading_ones(a.u32[0]);
dst.u32[1] = count_leading_ones(a.u32[1]);
dst.u32[2] = count_leading_ones(a.u32[2]);
dst.u32[3] = count_leading_ones(a.u32[3]);
dst.u32[4] = count_leading_ones(a.u32[4]);
dst.u32[5] = count_leading_ones(a.u32[5]);
dst.u32[6] = count_leading_ones(a.u32[6]);
dst.u32[7] = count_leading_ones(a.u32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnloc_w((v8i32)a);
```

<span id="intrinsic-__lasx_mxnlzc_b"></span>

## __m256i __lasx_mxnlzc_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxnlzc_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxnlzc.b
Builtin: __builtin_lasx_mxnlzc_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1954
```

### Description

Count leading zero bits independently in each u8 lane.

### Operation

```c
dst.u8[0] = count_leading_zeros(a.u8[0]);
dst.u8[1] = count_leading_zeros(a.u8[1]);
dst.u8[2] = count_leading_zeros(a.u8[2]);
dst.u8[3] = count_leading_zeros(a.u8[3]);
dst.u8[4] = count_leading_zeros(a.u8[4]);
dst.u8[5] = count_leading_zeros(a.u8[5]);
dst.u8[6] = count_leading_zeros(a.u8[6]);
dst.u8[7] = count_leading_zeros(a.u8[7]);
dst.u8[8] = count_leading_zeros(a.u8[8]);
dst.u8[9] = count_leading_zeros(a.u8[9]);
dst.u8[10] = count_leading_zeros(a.u8[10]);
dst.u8[11] = count_leading_zeros(a.u8[11]);
dst.u8[12] = count_leading_zeros(a.u8[12]);
dst.u8[13] = count_leading_zeros(a.u8[13]);
dst.u8[14] = count_leading_zeros(a.u8[14]);
dst.u8[15] = count_leading_zeros(a.u8[15]);
dst.u8[16] = count_leading_zeros(a.u8[16]);
dst.u8[17] = count_leading_zeros(a.u8[17]);
dst.u8[18] = count_leading_zeros(a.u8[18]);
dst.u8[19] = count_leading_zeros(a.u8[19]);
dst.u8[20] = count_leading_zeros(a.u8[20]);
dst.u8[21] = count_leading_zeros(a.u8[21]);
dst.u8[22] = count_leading_zeros(a.u8[22]);
dst.u8[23] = count_leading_zeros(a.u8[23]);
dst.u8[24] = count_leading_zeros(a.u8[24]);
dst.u8[25] = count_leading_zeros(a.u8[25]);
dst.u8[26] = count_leading_zeros(a.u8[26]);
dst.u8[27] = count_leading_zeros(a.u8[27]);
dst.u8[28] = count_leading_zeros(a.u8[28]);
dst.u8[29] = count_leading_zeros(a.u8[29]);
dst.u8[30] = count_leading_zeros(a.u8[30]);
dst.u8[31] = count_leading_zeros(a.u8[31]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnlzc_b((v32i8)a);
```

<span id="intrinsic-__lasx_mxnlzc_d"></span>

## __m256i __lasx_mxnlzc_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxnlzc_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxnlzc.d
Builtin: __builtin_lasx_mxnlzc_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1975
```

### Description

Count leading zero bits independently in each u64 lane.

### Operation

```c
dst.u64[0] = count_leading_zeros(a.u64[0]);
dst.u64[1] = count_leading_zeros(a.u64[1]);
dst.u64[2] = count_leading_zeros(a.u64[2]);
dst.u64[3] = count_leading_zeros(a.u64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnlzc_d((v4i64)a);
```

<span id="intrinsic-__lasx_mxnlzc_h"></span>

## __m256i __lasx_mxnlzc_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxnlzc_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxnlzc.h
Builtin: __builtin_lasx_mxnlzc_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1961
```

### Description

Count leading zero bits independently in each u16 lane.

### Operation

```c
dst.u16[0] = count_leading_zeros(a.u16[0]);
dst.u16[1] = count_leading_zeros(a.u16[1]);
dst.u16[2] = count_leading_zeros(a.u16[2]);
dst.u16[3] = count_leading_zeros(a.u16[3]);
dst.u16[4] = count_leading_zeros(a.u16[4]);
dst.u16[5] = count_leading_zeros(a.u16[5]);
dst.u16[6] = count_leading_zeros(a.u16[6]);
dst.u16[7] = count_leading_zeros(a.u16[7]);
dst.u16[8] = count_leading_zeros(a.u16[8]);
dst.u16[9] = count_leading_zeros(a.u16[9]);
dst.u16[10] = count_leading_zeros(a.u16[10]);
dst.u16[11] = count_leading_zeros(a.u16[11]);
dst.u16[12] = count_leading_zeros(a.u16[12]);
dst.u16[13] = count_leading_zeros(a.u16[13]);
dst.u16[14] = count_leading_zeros(a.u16[14]);
dst.u16[15] = count_leading_zeros(a.u16[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnlzc_h((v16i16)a);
```

<span id="intrinsic-__lasx_mxnlzc_w"></span>

## __m256i __lasx_mxnlzc_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxnlzc_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxnlzc.w
Builtin: __builtin_lasx_mxnlzc_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1968
```

### Description

Count leading zero bits independently in each u32 lane.

### Operation

```c
dst.u32[0] = count_leading_zeros(a.u32[0]);
dst.u32[1] = count_leading_zeros(a.u32[1]);
dst.u32[2] = count_leading_zeros(a.u32[2]);
dst.u32[3] = count_leading_zeros(a.u32[3]);
dst.u32[4] = count_leading_zeros(a.u32[4]);
dst.u32[5] = count_leading_zeros(a.u32[5]);
dst.u32[6] = count_leading_zeros(a.u32[6]);
dst.u32[7] = count_leading_zeros(a.u32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnlzc_w((v8i32)a);
```

<span id="intrinsic-__lasx_mxnxbits_any_b"></span>

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

Pack the non-zero predicate of each input byte into low-order mask bytes. This compresses byte-lane tests into a compact bit mask for string and scanning code.

### Operation

```c
dst.u8[0] = 0;
dst.u8[0] |= (a.u8[0] != 0 ? 1 : 0) << 0;
dst.u8[0] |= (a.u8[1] != 0 ? 1 : 0) << 1;
dst.u8[0] |= (a.u8[2] != 0 ? 1 : 0) << 2;
dst.u8[0] |= (a.u8[3] != 0 ? 1 : 0) << 3;
dst.u8[0] |= (a.u8[4] != 0 ? 1 : 0) << 4;
dst.u8[0] |= (a.u8[5] != 0 ? 1 : 0) << 5;
dst.u8[0] |= (a.u8[6] != 0 ? 1 : 0) << 6;
dst.u8[0] |= (a.u8[7] != 0 ? 1 : 0) << 7;
dst.u8[1] = 0;
dst.u8[1] |= (a.u8[8] != 0 ? 1 : 0) << 0;
dst.u8[1] |= (a.u8[9] != 0 ? 1 : 0) << 1;
dst.u8[1] |= (a.u8[10] != 0 ? 1 : 0) << 2;
dst.u8[1] |= (a.u8[11] != 0 ? 1 : 0) << 3;
dst.u8[1] |= (a.u8[12] != 0 ? 1 : 0) << 4;
dst.u8[1] |= (a.u8[13] != 0 ? 1 : 0) << 5;
dst.u8[1] |= (a.u8[14] != 0 ? 1 : 0) << 6;
dst.u8[1] |= (a.u8[15] != 0 ? 1 : 0) << 7;
dst.u8[2] = 0;
dst.u8[2] |= (a.u8[16] != 0 ? 1 : 0) << 0;
dst.u8[2] |= (a.u8[17] != 0 ? 1 : 0) << 1;
dst.u8[2] |= (a.u8[18] != 0 ? 1 : 0) << 2;
dst.u8[2] |= (a.u8[19] != 0 ? 1 : 0) << 3;
dst.u8[2] |= (a.u8[20] != 0 ? 1 : 0) << 4;
dst.u8[2] |= (a.u8[21] != 0 ? 1 : 0) << 5;
dst.u8[2] |= (a.u8[22] != 0 ? 1 : 0) << 6;
dst.u8[2] |= (a.u8[23] != 0 ? 1 : 0) << 7;
dst.u8[3] = 0;
dst.u8[3] |= (a.u8[24] != 0 ? 1 : 0) << 0;
dst.u8[3] |= (a.u8[25] != 0 ? 1 : 0) << 1;
dst.u8[3] |= (a.u8[26] != 0 ? 1 : 0) << 2;
dst.u8[3] |= (a.u8[27] != 0 ? 1 : 0) << 3;
dst.u8[3] |= (a.u8[28] != 0 ? 1 : 0) << 4;
dst.u8[3] |= (a.u8[29] != 0 ? 1 : 0) << 5;
dst.u8[3] |= (a.u8[30] != 0 ? 1 : 0) << 6;
dst.u8[3] |= (a.u8[31] != 0 ? 1 : 0) << 7;
dst.u8[4] = 0;
dst.u8[5] = 0;
dst.u8[6] = 0;
dst.u8[7] = 0;
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
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
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxnxbits_any_b ((v32i8) a);
```

<span id="intrinsic-__lasx_mxnxbits_ge0_b"></span>

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

Pack the non-negative predicate of each input byte into low-order mask bytes. This compresses byte-lane tests into a compact bit mask for string and scanning code.

### Operation

```c
dst.u8[0] = 0;
dst.u8[0] |= (a.i8[0] >= 0 ? 1 : 0) << 0;
dst.u8[0] |= (a.i8[1] >= 0 ? 1 : 0) << 1;
dst.u8[0] |= (a.i8[2] >= 0 ? 1 : 0) << 2;
dst.u8[0] |= (a.i8[3] >= 0 ? 1 : 0) << 3;
dst.u8[0] |= (a.i8[4] >= 0 ? 1 : 0) << 4;
dst.u8[0] |= (a.i8[5] >= 0 ? 1 : 0) << 5;
dst.u8[0] |= (a.i8[6] >= 0 ? 1 : 0) << 6;
dst.u8[0] |= (a.i8[7] >= 0 ? 1 : 0) << 7;
dst.u8[1] = 0;
dst.u8[1] |= (a.i8[8] >= 0 ? 1 : 0) << 0;
dst.u8[1] |= (a.i8[9] >= 0 ? 1 : 0) << 1;
dst.u8[1] |= (a.i8[10] >= 0 ? 1 : 0) << 2;
dst.u8[1] |= (a.i8[11] >= 0 ? 1 : 0) << 3;
dst.u8[1] |= (a.i8[12] >= 0 ? 1 : 0) << 4;
dst.u8[1] |= (a.i8[13] >= 0 ? 1 : 0) << 5;
dst.u8[1] |= (a.i8[14] >= 0 ? 1 : 0) << 6;
dst.u8[1] |= (a.i8[15] >= 0 ? 1 : 0) << 7;
dst.u8[2] = 0;
dst.u8[2] |= (a.i8[16] >= 0 ? 1 : 0) << 0;
dst.u8[2] |= (a.i8[17] >= 0 ? 1 : 0) << 1;
dst.u8[2] |= (a.i8[18] >= 0 ? 1 : 0) << 2;
dst.u8[2] |= (a.i8[19] >= 0 ? 1 : 0) << 3;
dst.u8[2] |= (a.i8[20] >= 0 ? 1 : 0) << 4;
dst.u8[2] |= (a.i8[21] >= 0 ? 1 : 0) << 5;
dst.u8[2] |= (a.i8[22] >= 0 ? 1 : 0) << 6;
dst.u8[2] |= (a.i8[23] >= 0 ? 1 : 0) << 7;
dst.u8[3] = 0;
dst.u8[3] |= (a.i8[24] >= 0 ? 1 : 0) << 0;
dst.u8[3] |= (a.i8[25] >= 0 ? 1 : 0) << 1;
dst.u8[3] |= (a.i8[26] >= 0 ? 1 : 0) << 2;
dst.u8[3] |= (a.i8[27] >= 0 ? 1 : 0) << 3;
dst.u8[3] |= (a.i8[28] >= 0 ? 1 : 0) << 4;
dst.u8[3] |= (a.i8[29] >= 0 ? 1 : 0) << 5;
dst.u8[3] |= (a.i8[30] >= 0 ? 1 : 0) << 6;
dst.u8[3] |= (a.i8[31] >= 0 ? 1 : 0) << 7;
dst.u8[4] = 0;
dst.u8[5] = 0;
dst.u8[6] = 0;
dst.u8[7] = 0;
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
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
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxnxbits_ge0_b ((v32i8) a);
```

<span id="intrinsic-__lasx_mxnxbits_lt0_b"></span>

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

Pack the negative predicate of each input byte into low-order mask bytes. This compresses byte-lane tests into a compact bit mask for string and scanning code.

### Operation

```c
dst.u8[0] = 0;
dst.u8[0] |= (a.i8[0] < 0 ? 1 : 0) << 0;
dst.u8[0] |= (a.i8[1] < 0 ? 1 : 0) << 1;
dst.u8[0] |= (a.i8[2] < 0 ? 1 : 0) << 2;
dst.u8[0] |= (a.i8[3] < 0 ? 1 : 0) << 3;
dst.u8[0] |= (a.i8[4] < 0 ? 1 : 0) << 4;
dst.u8[0] |= (a.i8[5] < 0 ? 1 : 0) << 5;
dst.u8[0] |= (a.i8[6] < 0 ? 1 : 0) << 6;
dst.u8[0] |= (a.i8[7] < 0 ? 1 : 0) << 7;
dst.u8[1] = 0;
dst.u8[1] |= (a.i8[8] < 0 ? 1 : 0) << 0;
dst.u8[1] |= (a.i8[9] < 0 ? 1 : 0) << 1;
dst.u8[1] |= (a.i8[10] < 0 ? 1 : 0) << 2;
dst.u8[1] |= (a.i8[11] < 0 ? 1 : 0) << 3;
dst.u8[1] |= (a.i8[12] < 0 ? 1 : 0) << 4;
dst.u8[1] |= (a.i8[13] < 0 ? 1 : 0) << 5;
dst.u8[1] |= (a.i8[14] < 0 ? 1 : 0) << 6;
dst.u8[1] |= (a.i8[15] < 0 ? 1 : 0) << 7;
dst.u8[2] = 0;
dst.u8[2] |= (a.i8[16] < 0 ? 1 : 0) << 0;
dst.u8[2] |= (a.i8[17] < 0 ? 1 : 0) << 1;
dst.u8[2] |= (a.i8[18] < 0 ? 1 : 0) << 2;
dst.u8[2] |= (a.i8[19] < 0 ? 1 : 0) << 3;
dst.u8[2] |= (a.i8[20] < 0 ? 1 : 0) << 4;
dst.u8[2] |= (a.i8[21] < 0 ? 1 : 0) << 5;
dst.u8[2] |= (a.i8[22] < 0 ? 1 : 0) << 6;
dst.u8[2] |= (a.i8[23] < 0 ? 1 : 0) << 7;
dst.u8[3] = 0;
dst.u8[3] |= (a.i8[24] < 0 ? 1 : 0) << 0;
dst.u8[3] |= (a.i8[25] < 0 ? 1 : 0) << 1;
dst.u8[3] |= (a.i8[26] < 0 ? 1 : 0) << 2;
dst.u8[3] |= (a.i8[27] < 0 ? 1 : 0) << 3;
dst.u8[3] |= (a.i8[28] < 0 ? 1 : 0) << 4;
dst.u8[3] |= (a.i8[29] < 0 ? 1 : 0) << 5;
dst.u8[3] |= (a.i8[30] < 0 ? 1 : 0) << 6;
dst.u8[3] |= (a.i8[31] < 0 ? 1 : 0) << 7;
dst.u8[4] = 0;
dst.u8[5] = 0;
dst.u8[6] = 0;
dst.u8[7] = 0;
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
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
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxnxbits_lt0_b ((v32i8) a);
```

<span id="intrinsic-__lasx_mxpcnt_b"></span>

## __m256i __lasx_mxpcnt_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxpcnt_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxpcnt.b
Builtin: __builtin_lasx_mxpcnt_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1898
```

### Description

Count one bits independently in each u8 lane.

### Operation

```c
dst.u8[0] = popcount(a.u8[0]);
dst.u8[1] = popcount(a.u8[1]);
dst.u8[2] = popcount(a.u8[2]);
dst.u8[3] = popcount(a.u8[3]);
dst.u8[4] = popcount(a.u8[4]);
dst.u8[5] = popcount(a.u8[5]);
dst.u8[6] = popcount(a.u8[6]);
dst.u8[7] = popcount(a.u8[7]);
dst.u8[8] = popcount(a.u8[8]);
dst.u8[9] = popcount(a.u8[9]);
dst.u8[10] = popcount(a.u8[10]);
dst.u8[11] = popcount(a.u8[11]);
dst.u8[12] = popcount(a.u8[12]);
dst.u8[13] = popcount(a.u8[13]);
dst.u8[14] = popcount(a.u8[14]);
dst.u8[15] = popcount(a.u8[15]);
dst.u8[16] = popcount(a.u8[16]);
dst.u8[17] = popcount(a.u8[17]);
dst.u8[18] = popcount(a.u8[18]);
dst.u8[19] = popcount(a.u8[19]);
dst.u8[20] = popcount(a.u8[20]);
dst.u8[21] = popcount(a.u8[21]);
dst.u8[22] = popcount(a.u8[22]);
dst.u8[23] = popcount(a.u8[23]);
dst.u8[24] = popcount(a.u8[24]);
dst.u8[25] = popcount(a.u8[25]);
dst.u8[26] = popcount(a.u8[26]);
dst.u8[27] = popcount(a.u8[27]);
dst.u8[28] = popcount(a.u8[28]);
dst.u8[29] = popcount(a.u8[29]);
dst.u8[30] = popcount(a.u8[30]);
dst.u8[31] = popcount(a.u8[31]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpcnt_b((v32i8)a);
```

<span id="intrinsic-__lasx_mxpcnt_d"></span>

## __m256i __lasx_mxpcnt_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxpcnt_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxpcnt.d
Builtin: __builtin_lasx_mxpcnt_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1919
```

### Description

Count one bits independently in each u64 lane.

### Operation

```c
dst.u64[0] = popcount(a.u64[0]);
dst.u64[1] = popcount(a.u64[1]);
dst.u64[2] = popcount(a.u64[2]);
dst.u64[3] = popcount(a.u64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpcnt_d((v4i64)a);
```

<span id="intrinsic-__lasx_mxpcnt_h"></span>

## __m256i __lasx_mxpcnt_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxpcnt_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxpcnt.h
Builtin: __builtin_lasx_mxpcnt_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1905
```

### Description

Count one bits independently in each u16 lane.

### Operation

```c
dst.u16[0] = popcount(a.u16[0]);
dst.u16[1] = popcount(a.u16[1]);
dst.u16[2] = popcount(a.u16[2]);
dst.u16[3] = popcount(a.u16[3]);
dst.u16[4] = popcount(a.u16[4]);
dst.u16[5] = popcount(a.u16[5]);
dst.u16[6] = popcount(a.u16[6]);
dst.u16[7] = popcount(a.u16[7]);
dst.u16[8] = popcount(a.u16[8]);
dst.u16[9] = popcount(a.u16[9]);
dst.u16[10] = popcount(a.u16[10]);
dst.u16[11] = popcount(a.u16[11]);
dst.u16[12] = popcount(a.u16[12]);
dst.u16[13] = popcount(a.u16[13]);
dst.u16[14] = popcount(a.u16[14]);
dst.u16[15] = popcount(a.u16[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpcnt_h((v16i16)a);
```

<span id="intrinsic-__lasx_mxpcnt_w"></span>

## __m256i __lasx_mxpcnt_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxpcnt_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxpcnt.w
Builtin: __builtin_lasx_mxpcnt_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1912
```

### Description

Count one bits independently in each u32 lane.

### Operation

```c
dst.u32[0] = popcount(a.u32[0]);
dst.u32[1] = popcount(a.u32[1]);
dst.u32[2] = popcount(a.u32[2]);
dst.u32[3] = popcount(a.u32[3]);
dst.u32[4] = popcount(a.u32[4]);
dst.u32[5] = popcount(a.u32[5]);
dst.u32[6] = popcount(a.u32[6]);
dst.u32[7] = popcount(a.u32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpcnt_w((v8i32)a);
```

<span id="intrinsic-__lasx_mxvgetsign_b"></span>

## __m256i __lasx_mxvgetsign_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvgetsign_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvgetsign.b
Builtin: __builtin_lasx_mxvgetsign_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3673
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
dst.u8[16] = sign_bit(a.u8[16]);
dst.u8[17] = sign_bit(a.u8[17]);
dst.u8[18] = sign_bit(a.u8[18]);
dst.u8[19] = sign_bit(a.u8[19]);
dst.u8[20] = sign_bit(a.u8[20]);
dst.u8[21] = sign_bit(a.u8[21]);
dst.u8[22] = sign_bit(a.u8[22]);
dst.u8[23] = sign_bit(a.u8[23]);
dst.u8[24] = sign_bit(a.u8[24]);
dst.u8[25] = sign_bit(a.u8[25]);
dst.u8[26] = sign_bit(a.u8[26]);
dst.u8[27] = sign_bit(a.u8[27]);
dst.u8[28] = sign_bit(a.u8[28]);
dst.u8[29] = sign_bit(a.u8[29]);
dst.u8[30] = sign_bit(a.u8[30]);
dst.u8[31] = sign_bit(a.u8[31]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvgetsign_b((v32i8)a);
```

<span id="intrinsic-__lasx_mxvgetsign_d"></span>

## __m256i __lasx_mxvgetsign_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvgetsign_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvgetsign.d
Builtin: __builtin_lasx_mxvgetsign_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3652
```

### Description

Return the sign bit of each u64 lane as a 0/1 value.

### Operation

```c
dst.u64[0] = sign_bit(a.u64[0]);
dst.u64[1] = sign_bit(a.u64[1]);
dst.u64[2] = sign_bit(a.u64[2]);
dst.u64[3] = sign_bit(a.u64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvgetsign_d((v4i64)a);
```

<span id="intrinsic-__lasx_mxvgetsign_h"></span>

## __m256i __lasx_mxvgetsign_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvgetsign_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvgetsign.h
Builtin: __builtin_lasx_mxvgetsign_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3666
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
dst.u16[8] = sign_bit(a.u16[8]);
dst.u16[9] = sign_bit(a.u16[9]);
dst.u16[10] = sign_bit(a.u16[10]);
dst.u16[11] = sign_bit(a.u16[11]);
dst.u16[12] = sign_bit(a.u16[12]);
dst.u16[13] = sign_bit(a.u16[13]);
dst.u16[14] = sign_bit(a.u16[14]);
dst.u16[15] = sign_bit(a.u16[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvgetsign_h((v16i16)a);
```

<span id="intrinsic-__lasx_mxvgetsign_w"></span>

## __m256i __lasx_mxvgetsign_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvgetsign_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvgetsign.w
Builtin: __builtin_lasx_mxvgetsign_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3659
```

### Description

Return the sign bit of each u32 lane as a 0/1 value.

### Operation

```c
dst.u32[0] = sign_bit(a.u32[0]);
dst.u32[1] = sign_bit(a.u32[1]);
dst.u32[2] = sign_bit(a.u32[2]);
dst.u32[3] = sign_bit(a.u32[3]);
dst.u32[4] = sign_bit(a.u32[4]);
dst.u32[5] = sign_bit(a.u32[5]);
dst.u32[6] = sign_bit(a.u32[6]);
dst.u32[7] = sign_bit(a.u32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvgetsign_w((v8i32)a);
```

<span id="intrinsic-__lasx_mxvrandsigni_b"></span>

## __m256i __lasx_mxvrandsigni_b (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvrandsigni_b (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvrandsigni.b
Builtin: __builtin_lasx_mxvrandsigni_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3547
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
#define __lasx_mxvrandsigni_b(a, b, imm) ((__m256i)__builtin_lasx_mxvrandsigni_b((v32i8)(a), (v32i8)(b), (imm)))
```

<span id="intrinsic-__lasx_mxvrandsigni_h"></span>

## __m256i __lasx_mxvrandsigni_h (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvrandsigni_h (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvrandsigni.h
Builtin: __builtin_lasx_mxvrandsigni_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3546
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
#define __lasx_mxvrandsigni_h(a, b, imm) ((__m256i)__builtin_lasx_mxvrandsigni_h((v16i16)(a), (v16i16)(b), (imm)))
```

<span id="intrinsic-__lasx_mxvrandsignv_b"></span>

## __m256i __lasx_mxvrandsignv_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvrandsignv_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvrandsignv.b
Builtin: __builtin_lasx_mxvrandsignv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3570
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
return (__m256i)__builtin_lasx_mxvrandsignv_b((v32i8)a, (v32i8)b, (v32i8)c);
```

<span id="intrinsic-__lasx_mxvrandsignv_h"></span>

## __m256i __lasx_mxvrandsignv_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvrandsignv_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvrandsignv.h
Builtin: __builtin_lasx_mxvrandsignv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3563
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
return (__m256i)__builtin_lasx_mxvrandsignv_h((v16i16)a, (v16i16)b, (v16i16)c);
```

<span id="intrinsic-__lasx_mxvrorsigni_b"></span>

## __m256i __lasx_mxvrorsigni_b (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvrorsigni_b (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvrorsigni.b
Builtin: __builtin_lasx_mxvrorsigni_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3545
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
#define __lasx_mxvrorsigni_b(a, b, imm) ((__m256i)__builtin_lasx_mxvrorsigni_b((v32i8)(a), (v32i8)(b), (imm)))
```

<span id="intrinsic-__lasx_mxvrorsigni_h"></span>

## __m256i __lasx_mxvrorsigni_h (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvrorsigni_h (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvrorsigni.h
Builtin: __builtin_lasx_mxvrorsigni_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3544
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
#define __lasx_mxvrorsigni_h(a, b, imm) ((__m256i)__builtin_lasx_mxvrorsigni_h((v16i16)(a), (v16i16)(b), (imm)))
```

<span id="intrinsic-__lasx_mxvrorsignv_b"></span>

## __m256i __lasx_mxvrorsignv_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvrorsignv_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvrorsignv.b
Builtin: __builtin_lasx_mxvrorsignv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3556
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
return (__m256i)__builtin_lasx_mxvrorsignv_b((v32i8)a, (v32i8)b, (v32i8)c);
```

<span id="intrinsic-__lasx_mxvrorsignv_h"></span>

## __m256i __lasx_mxvrorsignv_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvrorsignv_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvrorsignv.h
Builtin: __builtin_lasx_mxvrorsignv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3549
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
return (__m256i)__builtin_lasx_mxvrorsignv_h((v16i16)a, (v16i16)b, (v16i16)c);
```

<span id="intrinsic-__lasx_mxvsigncov_b"></span>

## __m256i __lasx_mxvsigncov_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsigncov_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsigncov.b
Builtin: __builtin_lasx_mxvsigncov_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3729
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
dst.i8[16] = (a.i8[16] == 0) ? 0 : (a.i8[16] < 0 ? -b.i8[16] : b.i8[16]);
dst.i8[17] = (a.i8[17] == 0) ? 0 : (a.i8[17] < 0 ? -b.i8[17] : b.i8[17]);
dst.i8[18] = (a.i8[18] == 0) ? 0 : (a.i8[18] < 0 ? -b.i8[18] : b.i8[18]);
dst.i8[19] = (a.i8[19] == 0) ? 0 : (a.i8[19] < 0 ? -b.i8[19] : b.i8[19]);
dst.i8[20] = (a.i8[20] == 0) ? 0 : (a.i8[20] < 0 ? -b.i8[20] : b.i8[20]);
dst.i8[21] = (a.i8[21] == 0) ? 0 : (a.i8[21] < 0 ? -b.i8[21] : b.i8[21]);
dst.i8[22] = (a.i8[22] == 0) ? 0 : (a.i8[22] < 0 ? -b.i8[22] : b.i8[22]);
dst.i8[23] = (a.i8[23] == 0) ? 0 : (a.i8[23] < 0 ? -b.i8[23] : b.i8[23]);
dst.i8[24] = (a.i8[24] == 0) ? 0 : (a.i8[24] < 0 ? -b.i8[24] : b.i8[24]);
dst.i8[25] = (a.i8[25] == 0) ? 0 : (a.i8[25] < 0 ? -b.i8[25] : b.i8[25]);
dst.i8[26] = (a.i8[26] == 0) ? 0 : (a.i8[26] < 0 ? -b.i8[26] : b.i8[26]);
dst.i8[27] = (a.i8[27] == 0) ? 0 : (a.i8[27] < 0 ? -b.i8[27] : b.i8[27]);
dst.i8[28] = (a.i8[28] == 0) ? 0 : (a.i8[28] < 0 ? -b.i8[28] : b.i8[28]);
dst.i8[29] = (a.i8[29] == 0) ? 0 : (a.i8[29] < 0 ? -b.i8[29] : b.i8[29]);
dst.i8[30] = (a.i8[30] == 0) ? 0 : (a.i8[30] < 0 ? -b.i8[30] : b.i8[30]);
dst.i8[31] = (a.i8[31] == 0) ? 0 : (a.i8[31] < 0 ? -b.i8[31] : b.i8[31]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsigncov_b((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxvsigncov_d"></span>

## __m256i __lasx_mxvsigncov_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsigncov_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsigncov.d
Builtin: __builtin_lasx_mxvsigncov_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3708
```

### Description

Copy the magnitude/sign from `b` under the sign of `a` for each u64 lane.

### Operation

```c
dst.i64[0] = (a.i64[0] == 0) ? 0 : (a.i64[0] < 0 ? -b.i64[0] : b.i64[0]);
dst.i64[1] = (a.i64[1] == 0) ? 0 : (a.i64[1] < 0 ? -b.i64[1] : b.i64[1]);
dst.i64[2] = (a.i64[2] == 0) ? 0 : (a.i64[2] < 0 ? -b.i64[2] : b.i64[2]);
dst.i64[3] = (a.i64[3] == 0) ? 0 : (a.i64[3] < 0 ? -b.i64[3] : b.i64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsigncov_d((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxvsigncov_h"></span>

## __m256i __lasx_mxvsigncov_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsigncov_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsigncov.h
Builtin: __builtin_lasx_mxvsigncov_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3722
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
dst.i16[8] = (a.i16[8] == 0) ? 0 : (a.i16[8] < 0 ? -b.i16[8] : b.i16[8]);
dst.i16[9] = (a.i16[9] == 0) ? 0 : (a.i16[9] < 0 ? -b.i16[9] : b.i16[9]);
dst.i16[10] = (a.i16[10] == 0) ? 0 : (a.i16[10] < 0 ? -b.i16[10] : b.i16[10]);
dst.i16[11] = (a.i16[11] == 0) ? 0 : (a.i16[11] < 0 ? -b.i16[11] : b.i16[11]);
dst.i16[12] = (a.i16[12] == 0) ? 0 : (a.i16[12] < 0 ? -b.i16[12] : b.i16[12]);
dst.i16[13] = (a.i16[13] == 0) ? 0 : (a.i16[13] < 0 ? -b.i16[13] : b.i16[13]);
dst.i16[14] = (a.i16[14] == 0) ? 0 : (a.i16[14] < 0 ? -b.i16[14] : b.i16[14]);
dst.i16[15] = (a.i16[15] == 0) ? 0 : (a.i16[15] < 0 ? -b.i16[15] : b.i16[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsigncov_h((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxvsigncov_w"></span>

## __m256i __lasx_mxvsigncov_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsigncov_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsigncov.w
Builtin: __builtin_lasx_mxvsigncov_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3715
```

### Description

Copy the magnitude/sign from `b` under the sign of `a` for each u32 lane.

### Operation

```c
dst.i32[0] = (a.i32[0] == 0) ? 0 : (a.i32[0] < 0 ? -b.i32[0] : b.i32[0]);
dst.i32[1] = (a.i32[1] == 0) ? 0 : (a.i32[1] < 0 ? -b.i32[1] : b.i32[1]);
dst.i32[2] = (a.i32[2] == 0) ? 0 : (a.i32[2] < 0 ? -b.i32[2] : b.i32[2]);
dst.i32[3] = (a.i32[3] == 0) ? 0 : (a.i32[3] < 0 ? -b.i32[3] : b.i32[3]);
dst.i32[4] = (a.i32[4] == 0) ? 0 : (a.i32[4] < 0 ? -b.i32[4] : b.i32[4]);
dst.i32[5] = (a.i32[5] == 0) ? 0 : (a.i32[5] < 0 ? -b.i32[5] : b.i32[5]);
dst.i32[6] = (a.i32[6] == 0) ? 0 : (a.i32[6] < 0 ? -b.i32[6] : b.i32[6]);
dst.i32[7] = (a.i32[7] == 0) ? 0 : (a.i32[7] < 0 ? -b.i32[7] : b.i32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsigncov_w((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxvsignfill_b"></span>

## __m256i __lasx_mxvsignfill_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvsignfill_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvsignfill.b
Builtin: __builtin_lasx_mxvsignfill_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3701
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
dst.i8[16] = sign_extend_sign_bit(a.i8[16]);
dst.i8[17] = sign_extend_sign_bit(a.i8[17]);
dst.i8[18] = sign_extend_sign_bit(a.i8[18]);
dst.i8[19] = sign_extend_sign_bit(a.i8[19]);
dst.i8[20] = sign_extend_sign_bit(a.i8[20]);
dst.i8[21] = sign_extend_sign_bit(a.i8[21]);
dst.i8[22] = sign_extend_sign_bit(a.i8[22]);
dst.i8[23] = sign_extend_sign_bit(a.i8[23]);
dst.i8[24] = sign_extend_sign_bit(a.i8[24]);
dst.i8[25] = sign_extend_sign_bit(a.i8[25]);
dst.i8[26] = sign_extend_sign_bit(a.i8[26]);
dst.i8[27] = sign_extend_sign_bit(a.i8[27]);
dst.i8[28] = sign_extend_sign_bit(a.i8[28]);
dst.i8[29] = sign_extend_sign_bit(a.i8[29]);
dst.i8[30] = sign_extend_sign_bit(a.i8[30]);
dst.i8[31] = sign_extend_sign_bit(a.i8[31]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsignfill_b((v32i8)a);
```

<span id="intrinsic-__lasx_mxvsignfill_d"></span>

## __m256i __lasx_mxvsignfill_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvsignfill_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvsignfill.d
Builtin: __builtin_lasx_mxvsignfill_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3680
```

### Description

Expand each u64 lane sign bit into an all-zero or all-one mask.

### Operation

```c
dst.i64[0] = sign_extend_sign_bit(a.i64[0]);
dst.i64[1] = sign_extend_sign_bit(a.i64[1]);
dst.i64[2] = sign_extend_sign_bit(a.i64[2]);
dst.i64[3] = sign_extend_sign_bit(a.i64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsignfill_d((v4i64)a);
```

<span id="intrinsic-__lasx_mxvsignfill_h"></span>

## __m256i __lasx_mxvsignfill_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvsignfill_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvsignfill.h
Builtin: __builtin_lasx_mxvsignfill_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3694
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
dst.i16[8] = sign_extend_sign_bit(a.i16[8]);
dst.i16[9] = sign_extend_sign_bit(a.i16[9]);
dst.i16[10] = sign_extend_sign_bit(a.i16[10]);
dst.i16[11] = sign_extend_sign_bit(a.i16[11]);
dst.i16[12] = sign_extend_sign_bit(a.i16[12]);
dst.i16[13] = sign_extend_sign_bit(a.i16[13]);
dst.i16[14] = sign_extend_sign_bit(a.i16[14]);
dst.i16[15] = sign_extend_sign_bit(a.i16[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsignfill_h((v16i16)a);
```

<span id="intrinsic-__lasx_mxvsignfill_w"></span>

## __m256i __lasx_mxvsignfill_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvsignfill_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvsignfill.w
Builtin: __builtin_lasx_mxvsignfill_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3687
```

### Description

Expand each u32 lane sign bit into an all-zero or all-one mask.

### Operation

```c
dst.i32[0] = sign_extend_sign_bit(a.i32[0]);
dst.i32[1] = sign_extend_sign_bit(a.i32[1]);
dst.i32[2] = sign_extend_sign_bit(a.i32[2]);
dst.i32[3] = sign_extend_sign_bit(a.i32[3]);
dst.i32[4] = sign_extend_sign_bit(a.i32[4]);
dst.i32[5] = sign_extend_sign_bit(a.i32[5]);
dst.i32[6] = sign_extend_sign_bit(a.i32[6]);
dst.i32[7] = sign_extend_sign_bit(a.i32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsignfill_w((v8i32)a);
```

<span id="intrinsic-__lasx_mxwxbits_01_b"></span>

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

Expand packed bits from the low input bytes into `0x01`/`0x00` bytes, one output byte per source bit. This turns a compact predicate mask back into byte-lane masks.

### Operation

```c
dst.u8[0] = ((a.u8[0] >> 0) & 1) ? 0x01 : 0x00;
dst.u8[1] = ((a.u8[0] >> 1) & 1) ? 0x01 : 0x00;
dst.u8[2] = ((a.u8[0] >> 2) & 1) ? 0x01 : 0x00;
dst.u8[3] = ((a.u8[0] >> 3) & 1) ? 0x01 : 0x00;
dst.u8[4] = ((a.u8[0] >> 4) & 1) ? 0x01 : 0x00;
dst.u8[5] = ((a.u8[0] >> 5) & 1) ? 0x01 : 0x00;
dst.u8[6] = ((a.u8[0] >> 6) & 1) ? 0x01 : 0x00;
dst.u8[7] = ((a.u8[0] >> 7) & 1) ? 0x01 : 0x00;
dst.u8[8] = ((a.u8[1] >> 0) & 1) ? 0x01 : 0x00;
dst.u8[9] = ((a.u8[1] >> 1) & 1) ? 0x01 : 0x00;
dst.u8[10] = ((a.u8[1] >> 2) & 1) ? 0x01 : 0x00;
dst.u8[11] = ((a.u8[1] >> 3) & 1) ? 0x01 : 0x00;
dst.u8[12] = ((a.u8[1] >> 4) & 1) ? 0x01 : 0x00;
dst.u8[13] = ((a.u8[1] >> 5) & 1) ? 0x01 : 0x00;
dst.u8[14] = ((a.u8[1] >> 6) & 1) ? 0x01 : 0x00;
dst.u8[15] = ((a.u8[1] >> 7) & 1) ? 0x01 : 0x00;
dst.u8[16] = ((a.u8[2] >> 0) & 1) ? 0x01 : 0x00;
dst.u8[17] = ((a.u8[2] >> 1) & 1) ? 0x01 : 0x00;
dst.u8[18] = ((a.u8[2] >> 2) & 1) ? 0x01 : 0x00;
dst.u8[19] = ((a.u8[2] >> 3) & 1) ? 0x01 : 0x00;
dst.u8[20] = ((a.u8[2] >> 4) & 1) ? 0x01 : 0x00;
dst.u8[21] = ((a.u8[2] >> 5) & 1) ? 0x01 : 0x00;
dst.u8[22] = ((a.u8[2] >> 6) & 1) ? 0x01 : 0x00;
dst.u8[23] = ((a.u8[2] >> 7) & 1) ? 0x01 : 0x00;
dst.u8[24] = ((a.u8[3] >> 0) & 1) ? 0x01 : 0x00;
dst.u8[25] = ((a.u8[3] >> 1) & 1) ? 0x01 : 0x00;
dst.u8[26] = ((a.u8[3] >> 2) & 1) ? 0x01 : 0x00;
dst.u8[27] = ((a.u8[3] >> 3) & 1) ? 0x01 : 0x00;
dst.u8[28] = ((a.u8[3] >> 4) & 1) ? 0x01 : 0x00;
dst.u8[29] = ((a.u8[3] >> 5) & 1) ? 0x01 : 0x00;
dst.u8[30] = ((a.u8[3] >> 6) & 1) ? 0x01 : 0x00;
dst.u8[31] = ((a.u8[3] >> 7) & 1) ? 0x01 : 0x00;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxwxbits_01_b ((v32i8) a);
```

<span id="intrinsic-__lasx_mxwxbits_mask_b"></span>

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

Expand packed bits from the low input bytes into `0xff`/`0x00` mask bytes, one output byte per source bit. This turns a compact predicate mask back into byte-lane masks.

### Operation

```c
dst.u8[0] = ((a.u8[0] >> 0) & 1) ? 0xff : 0x00;
dst.u8[1] = ((a.u8[0] >> 1) & 1) ? 0xff : 0x00;
dst.u8[2] = ((a.u8[0] >> 2) & 1) ? 0xff : 0x00;
dst.u8[3] = ((a.u8[0] >> 3) & 1) ? 0xff : 0x00;
dst.u8[4] = ((a.u8[0] >> 4) & 1) ? 0xff : 0x00;
dst.u8[5] = ((a.u8[0] >> 5) & 1) ? 0xff : 0x00;
dst.u8[6] = ((a.u8[0] >> 6) & 1) ? 0xff : 0x00;
dst.u8[7] = ((a.u8[0] >> 7) & 1) ? 0xff : 0x00;
dst.u8[8] = ((a.u8[1] >> 0) & 1) ? 0xff : 0x00;
dst.u8[9] = ((a.u8[1] >> 1) & 1) ? 0xff : 0x00;
dst.u8[10] = ((a.u8[1] >> 2) & 1) ? 0xff : 0x00;
dst.u8[11] = ((a.u8[1] >> 3) & 1) ? 0xff : 0x00;
dst.u8[12] = ((a.u8[1] >> 4) & 1) ? 0xff : 0x00;
dst.u8[13] = ((a.u8[1] >> 5) & 1) ? 0xff : 0x00;
dst.u8[14] = ((a.u8[1] >> 6) & 1) ? 0xff : 0x00;
dst.u8[15] = ((a.u8[1] >> 7) & 1) ? 0xff : 0x00;
dst.u8[16] = ((a.u8[2] >> 0) & 1) ? 0xff : 0x00;
dst.u8[17] = ((a.u8[2] >> 1) & 1) ? 0xff : 0x00;
dst.u8[18] = ((a.u8[2] >> 2) & 1) ? 0xff : 0x00;
dst.u8[19] = ((a.u8[2] >> 3) & 1) ? 0xff : 0x00;
dst.u8[20] = ((a.u8[2] >> 4) & 1) ? 0xff : 0x00;
dst.u8[21] = ((a.u8[2] >> 5) & 1) ? 0xff : 0x00;
dst.u8[22] = ((a.u8[2] >> 6) & 1) ? 0xff : 0x00;
dst.u8[23] = ((a.u8[2] >> 7) & 1) ? 0xff : 0x00;
dst.u8[24] = ((a.u8[3] >> 0) & 1) ? 0xff : 0x00;
dst.u8[25] = ((a.u8[3] >> 1) & 1) ? 0xff : 0x00;
dst.u8[26] = ((a.u8[3] >> 2) & 1) ? 0xff : 0x00;
dst.u8[27] = ((a.u8[3] >> 3) & 1) ? 0xff : 0x00;
dst.u8[28] = ((a.u8[3] >> 4) & 1) ? 0xff : 0x00;
dst.u8[29] = ((a.u8[3] >> 5) & 1) ? 0xff : 0x00;
dst.u8[30] = ((a.u8[3] >> 6) & 1) ? 0xff : 0x00;
dst.u8[31] = ((a.u8[3] >> 7) & 1) ? 0xff : 0x00;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxwxbits_mask_b ((v32i8) a);
```

<span id="intrinsic-__lasx_xgetsign_b"></span>

## __m256i __lasx_xgetsign_b (__m256i a)

### Synopsis

```c
__m256i __lasx_xgetsign_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xgetsign.b
Builtin: __builtin_lasx_xgetsign_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4281
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
dst.u8[16] = sign_bit(a.u8[16]);
dst.u8[17] = sign_bit(a.u8[17]);
dst.u8[18] = sign_bit(a.u8[18]);
dst.u8[19] = sign_bit(a.u8[19]);
dst.u8[20] = sign_bit(a.u8[20]);
dst.u8[21] = sign_bit(a.u8[21]);
dst.u8[22] = sign_bit(a.u8[22]);
dst.u8[23] = sign_bit(a.u8[23]);
dst.u8[24] = sign_bit(a.u8[24]);
dst.u8[25] = sign_bit(a.u8[25]);
dst.u8[26] = sign_bit(a.u8[26]);
dst.u8[27] = sign_bit(a.u8[27]);
dst.u8[28] = sign_bit(a.u8[28]);
dst.u8[29] = sign_bit(a.u8[29]);
dst.u8[30] = sign_bit(a.u8[30]);
dst.u8[31] = sign_bit(a.u8[31]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xgetsign_b((v32i8)a);
```

<span id="intrinsic-__lasx_xgetsign_d"></span>

## __m256i __lasx_xgetsign_d (__m256i a)

### Synopsis

```c
__m256i __lasx_xgetsign_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xgetsign.d
Builtin: __builtin_lasx_xgetsign_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4302
```

### Description

Return the sign bit of each u64 lane as a 0/1 value.

### Operation

```c
dst.u64[0] = sign_bit(a.u64[0]);
dst.u64[1] = sign_bit(a.u64[1]);
dst.u64[2] = sign_bit(a.u64[2]);
dst.u64[3] = sign_bit(a.u64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xgetsign_d((v4i64)a);
```

<span id="intrinsic-__lasx_xgetsign_h"></span>

## __m256i __lasx_xgetsign_h (__m256i a)

### Synopsis

```c
__m256i __lasx_xgetsign_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xgetsign.h
Builtin: __builtin_lasx_xgetsign_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4288
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
dst.u16[8] = sign_bit(a.u16[8]);
dst.u16[9] = sign_bit(a.u16[9]);
dst.u16[10] = sign_bit(a.u16[10]);
dst.u16[11] = sign_bit(a.u16[11]);
dst.u16[12] = sign_bit(a.u16[12]);
dst.u16[13] = sign_bit(a.u16[13]);
dst.u16[14] = sign_bit(a.u16[14]);
dst.u16[15] = sign_bit(a.u16[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xgetsign_h((v16i16)a);
```

<span id="intrinsic-__lasx_xgetsign_w"></span>

## __m256i __lasx_xgetsign_w (__m256i a)

### Synopsis

```c
__m256i __lasx_xgetsign_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xgetsign.w
Builtin: __builtin_lasx_xgetsign_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4295
```

### Description

Return the sign bit of each u32 lane as a 0/1 value.

### Operation

```c
dst.u32[0] = sign_bit(a.u32[0]);
dst.u32[1] = sign_bit(a.u32[1]);
dst.u32[2] = sign_bit(a.u32[2]);
dst.u32[3] = sign_bit(a.u32[3]);
dst.u32[4] = sign_bit(a.u32[4]);
dst.u32[5] = sign_bit(a.u32[5]);
dst.u32[6] = sign_bit(a.u32[6]);
dst.u32[7] = sign_bit(a.u32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xgetsign_w((v8i32)a);
```

