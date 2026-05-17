# Integer Comparison

Generated from `include/loongson-asxintrin.h`. This page contains 83 intrinsics.

<span id="intrinsic-__lasx_mxceq_b"></span>

## __m256i __lasx_mxceq_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxceq_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxceq.b
Builtin: __builtin_lasx_mxceq_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:642
```

### Description

Compare modular 32 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u8[0] = (a.u8[0] == b.u8[0]) ? all_ones : 0;
dst.u8[1] = (a.u8[1] == b.u8[1]) ? all_ones : 0;
dst.u8[2] = (a.u8[2] == b.u8[2]) ? all_ones : 0;
dst.u8[3] = (a.u8[3] == b.u8[3]) ? all_ones : 0;
dst.u8[4] = (a.u8[4] == b.u8[4]) ? all_ones : 0;
dst.u8[5] = (a.u8[5] == b.u8[5]) ? all_ones : 0;
dst.u8[6] = (a.u8[6] == b.u8[6]) ? all_ones : 0;
dst.u8[7] = (a.u8[7] == b.u8[7]) ? all_ones : 0;
dst.u8[8] = (a.u8[8] == b.u8[8]) ? all_ones : 0;
dst.u8[9] = (a.u8[9] == b.u8[9]) ? all_ones : 0;
dst.u8[10] = (a.u8[10] == b.u8[10]) ? all_ones : 0;
dst.u8[11] = (a.u8[11] == b.u8[11]) ? all_ones : 0;
dst.u8[12] = (a.u8[12] == b.u8[12]) ? all_ones : 0;
dst.u8[13] = (a.u8[13] == b.u8[13]) ? all_ones : 0;
dst.u8[14] = (a.u8[14] == b.u8[14]) ? all_ones : 0;
dst.u8[15] = (a.u8[15] == b.u8[15]) ? all_ones : 0;
dst.u8[16] = (a.u8[16] == b.u8[16]) ? all_ones : 0;
dst.u8[17] = (a.u8[17] == b.u8[17]) ? all_ones : 0;
dst.u8[18] = (a.u8[18] == b.u8[18]) ? all_ones : 0;
dst.u8[19] = (a.u8[19] == b.u8[19]) ? all_ones : 0;
dst.u8[20] = (a.u8[20] == b.u8[20]) ? all_ones : 0;
dst.u8[21] = (a.u8[21] == b.u8[21]) ? all_ones : 0;
dst.u8[22] = (a.u8[22] == b.u8[22]) ? all_ones : 0;
dst.u8[23] = (a.u8[23] == b.u8[23]) ? all_ones : 0;
dst.u8[24] = (a.u8[24] == b.u8[24]) ? all_ones : 0;
dst.u8[25] = (a.u8[25] == b.u8[25]) ? all_ones : 0;
dst.u8[26] = (a.u8[26] == b.u8[26]) ? all_ones : 0;
dst.u8[27] = (a.u8[27] == b.u8[27]) ? all_ones : 0;
dst.u8[28] = (a.u8[28] == b.u8[28]) ? all_ones : 0;
dst.u8[29] = (a.u8[29] == b.u8[29]) ? all_ones : 0;
dst.u8[30] = (a.u8[30] == b.u8[30]) ? all_ones : 0;
dst.u8[31] = (a.u8[31] == b.u8[31]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxceq_b((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxceq_d"></span>

## __m256i __lasx_mxceq_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxceq_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxceq.d
Builtin: __builtin_lasx_mxceq_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:663
```

### Description

Compare modular 4 x u64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u64[0] = (a.u64[0] == b.u64[0]) ? all_ones : 0;
dst.u64[1] = (a.u64[1] == b.u64[1]) ? all_ones : 0;
dst.u64[2] = (a.u64[2] == b.u64[2]) ? all_ones : 0;
dst.u64[3] = (a.u64[3] == b.u64[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxceq_d((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxceq_h"></span>

## __m256i __lasx_mxceq_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxceq_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxceq.h
Builtin: __builtin_lasx_mxceq_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:649
```

### Description

Compare modular 16 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u16[0] = (a.u16[0] == b.u16[0]) ? all_ones : 0;
dst.u16[1] = (a.u16[1] == b.u16[1]) ? all_ones : 0;
dst.u16[2] = (a.u16[2] == b.u16[2]) ? all_ones : 0;
dst.u16[3] = (a.u16[3] == b.u16[3]) ? all_ones : 0;
dst.u16[4] = (a.u16[4] == b.u16[4]) ? all_ones : 0;
dst.u16[5] = (a.u16[5] == b.u16[5]) ? all_ones : 0;
dst.u16[6] = (a.u16[6] == b.u16[6]) ? all_ones : 0;
dst.u16[7] = (a.u16[7] == b.u16[7]) ? all_ones : 0;
dst.u16[8] = (a.u16[8] == b.u16[8]) ? all_ones : 0;
dst.u16[9] = (a.u16[9] == b.u16[9]) ? all_ones : 0;
dst.u16[10] = (a.u16[10] == b.u16[10]) ? all_ones : 0;
dst.u16[11] = (a.u16[11] == b.u16[11]) ? all_ones : 0;
dst.u16[12] = (a.u16[12] == b.u16[12]) ? all_ones : 0;
dst.u16[13] = (a.u16[13] == b.u16[13]) ? all_ones : 0;
dst.u16[14] = (a.u16[14] == b.u16[14]) ? all_ones : 0;
dst.u16[15] = (a.u16[15] == b.u16[15]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxceq_h((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxceq_w"></span>

## __m256i __lasx_mxceq_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxceq_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxceq.w
Builtin: __builtin_lasx_mxceq_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:656
```

### Description

Compare modular 8 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] == b.u32[0]) ? all_ones : 0;
dst.u32[1] = (a.u32[1] == b.u32[1]) ? all_ones : 0;
dst.u32[2] = (a.u32[2] == b.u32[2]) ? all_ones : 0;
dst.u32[3] = (a.u32[3] == b.u32[3]) ? all_ones : 0;
dst.u32[4] = (a.u32[4] == b.u32[4]) ? all_ones : 0;
dst.u32[5] = (a.u32[5] == b.u32[5]) ? all_ones : 0;
dst.u32[6] = (a.u32[6] == b.u32[6]) ? all_ones : 0;
dst.u32[7] = (a.u32[7] == b.u32[7]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxceq_w((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxceqi_b"></span>

## __m256i __lasx_mxceqi_b (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxceqi_b (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxceqi.b
Builtin: __builtin_lasx_mxceqi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:669
```

### Description

Compare modular 32 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u8[0] = (a.u8[0] == imm) ? all_ones : 0;
dst.u8[1] = (a.u8[1] == imm) ? all_ones : 0;
dst.u8[2] = (a.u8[2] == imm) ? all_ones : 0;
dst.u8[3] = (a.u8[3] == imm) ? all_ones : 0;
dst.u8[4] = (a.u8[4] == imm) ? all_ones : 0;
dst.u8[5] = (a.u8[5] == imm) ? all_ones : 0;
dst.u8[6] = (a.u8[6] == imm) ? all_ones : 0;
dst.u8[7] = (a.u8[7] == imm) ? all_ones : 0;
dst.u8[8] = (a.u8[8] == imm) ? all_ones : 0;
dst.u8[9] = (a.u8[9] == imm) ? all_ones : 0;
dst.u8[10] = (a.u8[10] == imm) ? all_ones : 0;
dst.u8[11] = (a.u8[11] == imm) ? all_ones : 0;
dst.u8[12] = (a.u8[12] == imm) ? all_ones : 0;
dst.u8[13] = (a.u8[13] == imm) ? all_ones : 0;
dst.u8[14] = (a.u8[14] == imm) ? all_ones : 0;
dst.u8[15] = (a.u8[15] == imm) ? all_ones : 0;
dst.u8[16] = (a.u8[16] == imm) ? all_ones : 0;
dst.u8[17] = (a.u8[17] == imm) ? all_ones : 0;
dst.u8[18] = (a.u8[18] == imm) ? all_ones : 0;
dst.u8[19] = (a.u8[19] == imm) ? all_ones : 0;
dst.u8[20] = (a.u8[20] == imm) ? all_ones : 0;
dst.u8[21] = (a.u8[21] == imm) ? all_ones : 0;
dst.u8[22] = (a.u8[22] == imm) ? all_ones : 0;
dst.u8[23] = (a.u8[23] == imm) ? all_ones : 0;
dst.u8[24] = (a.u8[24] == imm) ? all_ones : 0;
dst.u8[25] = (a.u8[25] == imm) ? all_ones : 0;
dst.u8[26] = (a.u8[26] == imm) ? all_ones : 0;
dst.u8[27] = (a.u8[27] == imm) ? all_ones : 0;
dst.u8[28] = (a.u8[28] == imm) ? all_ones : 0;
dst.u8[29] = (a.u8[29] == imm) ? all_ones : 0;
dst.u8[30] = (a.u8[30] == imm) ? all_ones : 0;
dst.u8[31] = (a.u8[31] == imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxceqi_b(a, imm) ((__m256i)__builtin_lasx_mxceqi_b((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxceqi_d"></span>

## __m256i __lasx_mxceqi_d (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxceqi_d (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxceqi.d
Builtin: __builtin_lasx_mxceqi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:672
```

### Description

Compare modular 4 x u64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u64[0] = (a.u64[0] == imm) ? all_ones : 0;
dst.u64[1] = (a.u64[1] == imm) ? all_ones : 0;
dst.u64[2] = (a.u64[2] == imm) ? all_ones : 0;
dst.u64[3] = (a.u64[3] == imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxceqi_d(a, imm) ((__m256i)__builtin_lasx_mxceqi_d((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxceqi_h"></span>

## __m256i __lasx_mxceqi_h (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxceqi_h (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxceqi.h
Builtin: __builtin_lasx_mxceqi_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:670
```

### Description

Compare modular 16 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u16[0] = (a.u16[0] == imm) ? all_ones : 0;
dst.u16[1] = (a.u16[1] == imm) ? all_ones : 0;
dst.u16[2] = (a.u16[2] == imm) ? all_ones : 0;
dst.u16[3] = (a.u16[3] == imm) ? all_ones : 0;
dst.u16[4] = (a.u16[4] == imm) ? all_ones : 0;
dst.u16[5] = (a.u16[5] == imm) ? all_ones : 0;
dst.u16[6] = (a.u16[6] == imm) ? all_ones : 0;
dst.u16[7] = (a.u16[7] == imm) ? all_ones : 0;
dst.u16[8] = (a.u16[8] == imm) ? all_ones : 0;
dst.u16[9] = (a.u16[9] == imm) ? all_ones : 0;
dst.u16[10] = (a.u16[10] == imm) ? all_ones : 0;
dst.u16[11] = (a.u16[11] == imm) ? all_ones : 0;
dst.u16[12] = (a.u16[12] == imm) ? all_ones : 0;
dst.u16[13] = (a.u16[13] == imm) ? all_ones : 0;
dst.u16[14] = (a.u16[14] == imm) ? all_ones : 0;
dst.u16[15] = (a.u16[15] == imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxceqi_h(a, imm) ((__m256i)__builtin_lasx_mxceqi_h((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxceqi_w"></span>

## __m256i __lasx_mxceqi_w (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxceqi_w (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxceqi.w
Builtin: __builtin_lasx_mxceqi_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:671
```

### Description

Compare modular 8 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] == imm) ? all_ones : 0;
dst.u32[1] = (a.u32[1] == imm) ? all_ones : 0;
dst.u32[2] = (a.u32[2] == imm) ? all_ones : 0;
dst.u32[3] = (a.u32[3] == imm) ? all_ones : 0;
dst.u32[4] = (a.u32[4] == imm) ? all_ones : 0;
dst.u32[5] = (a.u32[5] == imm) ? all_ones : 0;
dst.u32[6] = (a.u32[6] == imm) ? all_ones : 0;
dst.u32[7] = (a.u32[7] == imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxceqi_w(a, imm) ((__m256i)__builtin_lasx_mxceqi_w((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxcle_s_b"></span>

## __m256i __lasx_mxcle_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxcle_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxcle.s.b
Builtin: __builtin_lasx_mxcle_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:738
```

### Description

Compare signed 32 x i8 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i8[0] = (a.i8[0] <= b.i8[0]) ? all_ones : 0;
dst.i8[1] = (a.i8[1] <= b.i8[1]) ? all_ones : 0;
dst.i8[2] = (a.i8[2] <= b.i8[2]) ? all_ones : 0;
dst.i8[3] = (a.i8[3] <= b.i8[3]) ? all_ones : 0;
dst.i8[4] = (a.i8[4] <= b.i8[4]) ? all_ones : 0;
dst.i8[5] = (a.i8[5] <= b.i8[5]) ? all_ones : 0;
dst.i8[6] = (a.i8[6] <= b.i8[6]) ? all_ones : 0;
dst.i8[7] = (a.i8[7] <= b.i8[7]) ? all_ones : 0;
dst.i8[8] = (a.i8[8] <= b.i8[8]) ? all_ones : 0;
dst.i8[9] = (a.i8[9] <= b.i8[9]) ? all_ones : 0;
dst.i8[10] = (a.i8[10] <= b.i8[10]) ? all_ones : 0;
dst.i8[11] = (a.i8[11] <= b.i8[11]) ? all_ones : 0;
dst.i8[12] = (a.i8[12] <= b.i8[12]) ? all_ones : 0;
dst.i8[13] = (a.i8[13] <= b.i8[13]) ? all_ones : 0;
dst.i8[14] = (a.i8[14] <= b.i8[14]) ? all_ones : 0;
dst.i8[15] = (a.i8[15] <= b.i8[15]) ? all_ones : 0;
dst.i8[16] = (a.i8[16] <= b.i8[16]) ? all_ones : 0;
dst.i8[17] = (a.i8[17] <= b.i8[17]) ? all_ones : 0;
dst.i8[18] = (a.i8[18] <= b.i8[18]) ? all_ones : 0;
dst.i8[19] = (a.i8[19] <= b.i8[19]) ? all_ones : 0;
dst.i8[20] = (a.i8[20] <= b.i8[20]) ? all_ones : 0;
dst.i8[21] = (a.i8[21] <= b.i8[21]) ? all_ones : 0;
dst.i8[22] = (a.i8[22] <= b.i8[22]) ? all_ones : 0;
dst.i8[23] = (a.i8[23] <= b.i8[23]) ? all_ones : 0;
dst.i8[24] = (a.i8[24] <= b.i8[24]) ? all_ones : 0;
dst.i8[25] = (a.i8[25] <= b.i8[25]) ? all_ones : 0;
dst.i8[26] = (a.i8[26] <= b.i8[26]) ? all_ones : 0;
dst.i8[27] = (a.i8[27] <= b.i8[27]) ? all_ones : 0;
dst.i8[28] = (a.i8[28] <= b.i8[28]) ? all_ones : 0;
dst.i8[29] = (a.i8[29] <= b.i8[29]) ? all_ones : 0;
dst.i8[30] = (a.i8[30] <= b.i8[30]) ? all_ones : 0;
dst.i8[31] = (a.i8[31] <= b.i8[31]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_s_b((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxcle_s_d"></span>

## __m256i __lasx_mxcle_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxcle_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxcle.s.d
Builtin: __builtin_lasx_mxcle_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:759
```

### Description

Compare signed 4 x i64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i64[0] = (a.i64[0] <= b.i64[0]) ? all_ones : 0;
dst.i64[1] = (a.i64[1] <= b.i64[1]) ? all_ones : 0;
dst.i64[2] = (a.i64[2] <= b.i64[2]) ? all_ones : 0;
dst.i64[3] = (a.i64[3] <= b.i64[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_s_d((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxcle_s_h"></span>

## __m256i __lasx_mxcle_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxcle_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxcle.s.h
Builtin: __builtin_lasx_mxcle_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:745
```

### Description

Compare signed 16 x i16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i16[0] = (a.i16[0] <= b.i16[0]) ? all_ones : 0;
dst.i16[1] = (a.i16[1] <= b.i16[1]) ? all_ones : 0;
dst.i16[2] = (a.i16[2] <= b.i16[2]) ? all_ones : 0;
dst.i16[3] = (a.i16[3] <= b.i16[3]) ? all_ones : 0;
dst.i16[4] = (a.i16[4] <= b.i16[4]) ? all_ones : 0;
dst.i16[5] = (a.i16[5] <= b.i16[5]) ? all_ones : 0;
dst.i16[6] = (a.i16[6] <= b.i16[6]) ? all_ones : 0;
dst.i16[7] = (a.i16[7] <= b.i16[7]) ? all_ones : 0;
dst.i16[8] = (a.i16[8] <= b.i16[8]) ? all_ones : 0;
dst.i16[9] = (a.i16[9] <= b.i16[9]) ? all_ones : 0;
dst.i16[10] = (a.i16[10] <= b.i16[10]) ? all_ones : 0;
dst.i16[11] = (a.i16[11] <= b.i16[11]) ? all_ones : 0;
dst.i16[12] = (a.i16[12] <= b.i16[12]) ? all_ones : 0;
dst.i16[13] = (a.i16[13] <= b.i16[13]) ? all_ones : 0;
dst.i16[14] = (a.i16[14] <= b.i16[14]) ? all_ones : 0;
dst.i16[15] = (a.i16[15] <= b.i16[15]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_s_h((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxcle_s_w"></span>

## __m256i __lasx_mxcle_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxcle_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxcle.s.w
Builtin: __builtin_lasx_mxcle_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:752
```

### Description

Compare signed 8 x i32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i32[0] = (a.i32[0] <= b.i32[0]) ? all_ones : 0;
dst.i32[1] = (a.i32[1] <= b.i32[1]) ? all_ones : 0;
dst.i32[2] = (a.i32[2] <= b.i32[2]) ? all_ones : 0;
dst.i32[3] = (a.i32[3] <= b.i32[3]) ? all_ones : 0;
dst.i32[4] = (a.i32[4] <= b.i32[4]) ? all_ones : 0;
dst.i32[5] = (a.i32[5] <= b.i32[5]) ? all_ones : 0;
dst.i32[6] = (a.i32[6] <= b.i32[6]) ? all_ones : 0;
dst.i32[7] = (a.i32[7] <= b.i32[7]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_s_w((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxcle_u_b"></span>

## __m256i __lasx_mxcle_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxcle_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxcle.u.b
Builtin: __builtin_lasx_mxcle_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:770
```

### Description

Compare unsigned 32 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u8[0] = (a.u8[0] <= b.u8[0]) ? all_ones : 0;
dst.u8[1] = (a.u8[1] <= b.u8[1]) ? all_ones : 0;
dst.u8[2] = (a.u8[2] <= b.u8[2]) ? all_ones : 0;
dst.u8[3] = (a.u8[3] <= b.u8[3]) ? all_ones : 0;
dst.u8[4] = (a.u8[4] <= b.u8[4]) ? all_ones : 0;
dst.u8[5] = (a.u8[5] <= b.u8[5]) ? all_ones : 0;
dst.u8[6] = (a.u8[6] <= b.u8[6]) ? all_ones : 0;
dst.u8[7] = (a.u8[7] <= b.u8[7]) ? all_ones : 0;
dst.u8[8] = (a.u8[8] <= b.u8[8]) ? all_ones : 0;
dst.u8[9] = (a.u8[9] <= b.u8[9]) ? all_ones : 0;
dst.u8[10] = (a.u8[10] <= b.u8[10]) ? all_ones : 0;
dst.u8[11] = (a.u8[11] <= b.u8[11]) ? all_ones : 0;
dst.u8[12] = (a.u8[12] <= b.u8[12]) ? all_ones : 0;
dst.u8[13] = (a.u8[13] <= b.u8[13]) ? all_ones : 0;
dst.u8[14] = (a.u8[14] <= b.u8[14]) ? all_ones : 0;
dst.u8[15] = (a.u8[15] <= b.u8[15]) ? all_ones : 0;
dst.u8[16] = (a.u8[16] <= b.u8[16]) ? all_ones : 0;
dst.u8[17] = (a.u8[17] <= b.u8[17]) ? all_ones : 0;
dst.u8[18] = (a.u8[18] <= b.u8[18]) ? all_ones : 0;
dst.u8[19] = (a.u8[19] <= b.u8[19]) ? all_ones : 0;
dst.u8[20] = (a.u8[20] <= b.u8[20]) ? all_ones : 0;
dst.u8[21] = (a.u8[21] <= b.u8[21]) ? all_ones : 0;
dst.u8[22] = (a.u8[22] <= b.u8[22]) ? all_ones : 0;
dst.u8[23] = (a.u8[23] <= b.u8[23]) ? all_ones : 0;
dst.u8[24] = (a.u8[24] <= b.u8[24]) ? all_ones : 0;
dst.u8[25] = (a.u8[25] <= b.u8[25]) ? all_ones : 0;
dst.u8[26] = (a.u8[26] <= b.u8[26]) ? all_ones : 0;
dst.u8[27] = (a.u8[27] <= b.u8[27]) ? all_ones : 0;
dst.u8[28] = (a.u8[28] <= b.u8[28]) ? all_ones : 0;
dst.u8[29] = (a.u8[29] <= b.u8[29]) ? all_ones : 0;
dst.u8[30] = (a.u8[30] <= b.u8[30]) ? all_ones : 0;
dst.u8[31] = (a.u8[31] <= b.u8[31]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_u_b((v32u8)a, (v32u8)b);
```

<span id="intrinsic-__lasx_mxcle_u_d"></span>

## __m256i __lasx_mxcle_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxcle_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxcle.u.d
Builtin: __builtin_lasx_mxcle_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:791
```

### Description

Compare unsigned 4 x u64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u64[0] = (a.u64[0] <= b.u64[0]) ? all_ones : 0;
dst.u64[1] = (a.u64[1] <= b.u64[1]) ? all_ones : 0;
dst.u64[2] = (a.u64[2] <= b.u64[2]) ? all_ones : 0;
dst.u64[3] = (a.u64[3] <= b.u64[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_u_d((v4u64)a, (v4u64)b);
```

<span id="intrinsic-__lasx_mxcle_u_h"></span>

## __m256i __lasx_mxcle_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxcle_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxcle.u.h
Builtin: __builtin_lasx_mxcle_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:777
```

### Description

Compare unsigned 16 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u16[0] = (a.u16[0] <= b.u16[0]) ? all_ones : 0;
dst.u16[1] = (a.u16[1] <= b.u16[1]) ? all_ones : 0;
dst.u16[2] = (a.u16[2] <= b.u16[2]) ? all_ones : 0;
dst.u16[3] = (a.u16[3] <= b.u16[3]) ? all_ones : 0;
dst.u16[4] = (a.u16[4] <= b.u16[4]) ? all_ones : 0;
dst.u16[5] = (a.u16[5] <= b.u16[5]) ? all_ones : 0;
dst.u16[6] = (a.u16[6] <= b.u16[6]) ? all_ones : 0;
dst.u16[7] = (a.u16[7] <= b.u16[7]) ? all_ones : 0;
dst.u16[8] = (a.u16[8] <= b.u16[8]) ? all_ones : 0;
dst.u16[9] = (a.u16[9] <= b.u16[9]) ? all_ones : 0;
dst.u16[10] = (a.u16[10] <= b.u16[10]) ? all_ones : 0;
dst.u16[11] = (a.u16[11] <= b.u16[11]) ? all_ones : 0;
dst.u16[12] = (a.u16[12] <= b.u16[12]) ? all_ones : 0;
dst.u16[13] = (a.u16[13] <= b.u16[13]) ? all_ones : 0;
dst.u16[14] = (a.u16[14] <= b.u16[14]) ? all_ones : 0;
dst.u16[15] = (a.u16[15] <= b.u16[15]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_u_h((v16u16)a, (v16u16)b);
```

<span id="intrinsic-__lasx_mxcle_u_w"></span>

## __m256i __lasx_mxcle_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxcle_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxcle.u.w
Builtin: __builtin_lasx_mxcle_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:784
```

### Description

Compare unsigned 8 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] <= b.u32[0]) ? all_ones : 0;
dst.u32[1] = (a.u32[1] <= b.u32[1]) ? all_ones : 0;
dst.u32[2] = (a.u32[2] <= b.u32[2]) ? all_ones : 0;
dst.u32[3] = (a.u32[3] <= b.u32[3]) ? all_ones : 0;
dst.u32[4] = (a.u32[4] <= b.u32[4]) ? all_ones : 0;
dst.u32[5] = (a.u32[5] <= b.u32[5]) ? all_ones : 0;
dst.u32[6] = (a.u32[6] <= b.u32[6]) ? all_ones : 0;
dst.u32[7] = (a.u32[7] <= b.u32[7]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_u_w((v8u32)a, (v8u32)b);
```

<span id="intrinsic-__lasx_mxclei_s_b"></span>

## __m256i __lasx_mxclei_s_b (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxclei_s_b (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxclei.s.b
Builtin: __builtin_lasx_mxclei_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:765
```

### Description

Compare signed 32 x i8 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i8[0] = (a.i8[0] <= imm) ? all_ones : 0;
dst.i8[1] = (a.i8[1] <= imm) ? all_ones : 0;
dst.i8[2] = (a.i8[2] <= imm) ? all_ones : 0;
dst.i8[3] = (a.i8[3] <= imm) ? all_ones : 0;
dst.i8[4] = (a.i8[4] <= imm) ? all_ones : 0;
dst.i8[5] = (a.i8[5] <= imm) ? all_ones : 0;
dst.i8[6] = (a.i8[6] <= imm) ? all_ones : 0;
dst.i8[7] = (a.i8[7] <= imm) ? all_ones : 0;
dst.i8[8] = (a.i8[8] <= imm) ? all_ones : 0;
dst.i8[9] = (a.i8[9] <= imm) ? all_ones : 0;
dst.i8[10] = (a.i8[10] <= imm) ? all_ones : 0;
dst.i8[11] = (a.i8[11] <= imm) ? all_ones : 0;
dst.i8[12] = (a.i8[12] <= imm) ? all_ones : 0;
dst.i8[13] = (a.i8[13] <= imm) ? all_ones : 0;
dst.i8[14] = (a.i8[14] <= imm) ? all_ones : 0;
dst.i8[15] = (a.i8[15] <= imm) ? all_ones : 0;
dst.i8[16] = (a.i8[16] <= imm) ? all_ones : 0;
dst.i8[17] = (a.i8[17] <= imm) ? all_ones : 0;
dst.i8[18] = (a.i8[18] <= imm) ? all_ones : 0;
dst.i8[19] = (a.i8[19] <= imm) ? all_ones : 0;
dst.i8[20] = (a.i8[20] <= imm) ? all_ones : 0;
dst.i8[21] = (a.i8[21] <= imm) ? all_ones : 0;
dst.i8[22] = (a.i8[22] <= imm) ? all_ones : 0;
dst.i8[23] = (a.i8[23] <= imm) ? all_ones : 0;
dst.i8[24] = (a.i8[24] <= imm) ? all_ones : 0;
dst.i8[25] = (a.i8[25] <= imm) ? all_ones : 0;
dst.i8[26] = (a.i8[26] <= imm) ? all_ones : 0;
dst.i8[27] = (a.i8[27] <= imm) ? all_ones : 0;
dst.i8[28] = (a.i8[28] <= imm) ? all_ones : 0;
dst.i8[29] = (a.i8[29] <= imm) ? all_ones : 0;
dst.i8[30] = (a.i8[30] <= imm) ? all_ones : 0;
dst.i8[31] = (a.i8[31] <= imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxclei_s_b(a, imm) ((__m256i)__builtin_lasx_mxclei_s_b((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclei_s_d"></span>

## __m256i __lasx_mxclei_s_d (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxclei_s_d (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxclei.s.d
Builtin: __builtin_lasx_mxclei_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:768
```

### Description

Compare signed 4 x i64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i64[0] = (a.i64[0] <= imm) ? all_ones : 0;
dst.i64[1] = (a.i64[1] <= imm) ? all_ones : 0;
dst.i64[2] = (a.i64[2] <= imm) ? all_ones : 0;
dst.i64[3] = (a.i64[3] <= imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxclei_s_d(a, imm) ((__m256i)__builtin_lasx_mxclei_s_d((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclei_s_h"></span>

## __m256i __lasx_mxclei_s_h (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxclei_s_h (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxclei.s.h
Builtin: __builtin_lasx_mxclei_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:766
```

### Description

Compare signed 16 x i16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i16[0] = (a.i16[0] <= imm) ? all_ones : 0;
dst.i16[1] = (a.i16[1] <= imm) ? all_ones : 0;
dst.i16[2] = (a.i16[2] <= imm) ? all_ones : 0;
dst.i16[3] = (a.i16[3] <= imm) ? all_ones : 0;
dst.i16[4] = (a.i16[4] <= imm) ? all_ones : 0;
dst.i16[5] = (a.i16[5] <= imm) ? all_ones : 0;
dst.i16[6] = (a.i16[6] <= imm) ? all_ones : 0;
dst.i16[7] = (a.i16[7] <= imm) ? all_ones : 0;
dst.i16[8] = (a.i16[8] <= imm) ? all_ones : 0;
dst.i16[9] = (a.i16[9] <= imm) ? all_ones : 0;
dst.i16[10] = (a.i16[10] <= imm) ? all_ones : 0;
dst.i16[11] = (a.i16[11] <= imm) ? all_ones : 0;
dst.i16[12] = (a.i16[12] <= imm) ? all_ones : 0;
dst.i16[13] = (a.i16[13] <= imm) ? all_ones : 0;
dst.i16[14] = (a.i16[14] <= imm) ? all_ones : 0;
dst.i16[15] = (a.i16[15] <= imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxclei_s_h(a, imm) ((__m256i)__builtin_lasx_mxclei_s_h((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclei_s_w"></span>

## __m256i __lasx_mxclei_s_w (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxclei_s_w (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxclei.s.w
Builtin: __builtin_lasx_mxclei_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:767
```

### Description

Compare signed 8 x i32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i32[0] = (a.i32[0] <= imm) ? all_ones : 0;
dst.i32[1] = (a.i32[1] <= imm) ? all_ones : 0;
dst.i32[2] = (a.i32[2] <= imm) ? all_ones : 0;
dst.i32[3] = (a.i32[3] <= imm) ? all_ones : 0;
dst.i32[4] = (a.i32[4] <= imm) ? all_ones : 0;
dst.i32[5] = (a.i32[5] <= imm) ? all_ones : 0;
dst.i32[6] = (a.i32[6] <= imm) ? all_ones : 0;
dst.i32[7] = (a.i32[7] <= imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxclei_s_w(a, imm) ((__m256i)__builtin_lasx_mxclei_s_w((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclei_u_b"></span>

## __m256i __lasx_mxclei_u_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxclei_u_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxclei.u.b
Builtin: __builtin_lasx_mxclei_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:797
```

### Description

Compare unsigned 32 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u8[0] = (a.u8[0] <= imm) ? all_ones : 0;
dst.u8[1] = (a.u8[1] <= imm) ? all_ones : 0;
dst.u8[2] = (a.u8[2] <= imm) ? all_ones : 0;
dst.u8[3] = (a.u8[3] <= imm) ? all_ones : 0;
dst.u8[4] = (a.u8[4] <= imm) ? all_ones : 0;
dst.u8[5] = (a.u8[5] <= imm) ? all_ones : 0;
dst.u8[6] = (a.u8[6] <= imm) ? all_ones : 0;
dst.u8[7] = (a.u8[7] <= imm) ? all_ones : 0;
dst.u8[8] = (a.u8[8] <= imm) ? all_ones : 0;
dst.u8[9] = (a.u8[9] <= imm) ? all_ones : 0;
dst.u8[10] = (a.u8[10] <= imm) ? all_ones : 0;
dst.u8[11] = (a.u8[11] <= imm) ? all_ones : 0;
dst.u8[12] = (a.u8[12] <= imm) ? all_ones : 0;
dst.u8[13] = (a.u8[13] <= imm) ? all_ones : 0;
dst.u8[14] = (a.u8[14] <= imm) ? all_ones : 0;
dst.u8[15] = (a.u8[15] <= imm) ? all_ones : 0;
dst.u8[16] = (a.u8[16] <= imm) ? all_ones : 0;
dst.u8[17] = (a.u8[17] <= imm) ? all_ones : 0;
dst.u8[18] = (a.u8[18] <= imm) ? all_ones : 0;
dst.u8[19] = (a.u8[19] <= imm) ? all_ones : 0;
dst.u8[20] = (a.u8[20] <= imm) ? all_ones : 0;
dst.u8[21] = (a.u8[21] <= imm) ? all_ones : 0;
dst.u8[22] = (a.u8[22] <= imm) ? all_ones : 0;
dst.u8[23] = (a.u8[23] <= imm) ? all_ones : 0;
dst.u8[24] = (a.u8[24] <= imm) ? all_ones : 0;
dst.u8[25] = (a.u8[25] <= imm) ? all_ones : 0;
dst.u8[26] = (a.u8[26] <= imm) ? all_ones : 0;
dst.u8[27] = (a.u8[27] <= imm) ? all_ones : 0;
dst.u8[28] = (a.u8[28] <= imm) ? all_ones : 0;
dst.u8[29] = (a.u8[29] <= imm) ? all_ones : 0;
dst.u8[30] = (a.u8[30] <= imm) ? all_ones : 0;
dst.u8[31] = (a.u8[31] <= imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxclei_u_b(a, imm) ((__m256i)__builtin_lasx_mxclei_u_b((v32u8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclei_u_d"></span>

## __m256i __lasx_mxclei_u_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxclei_u_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxclei.u.d
Builtin: __builtin_lasx_mxclei_u_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:800
```

### Description

Compare unsigned 4 x u64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u64[0] = (a.u64[0] <= imm) ? all_ones : 0;
dst.u64[1] = (a.u64[1] <= imm) ? all_ones : 0;
dst.u64[2] = (a.u64[2] <= imm) ? all_ones : 0;
dst.u64[3] = (a.u64[3] <= imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxclei_u_d(a, imm) ((__m256i)__builtin_lasx_mxclei_u_d((v4u64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclei_u_h"></span>

## __m256i __lasx_mxclei_u_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxclei_u_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxclei.u.h
Builtin: __builtin_lasx_mxclei_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:798
```

### Description

Compare unsigned 16 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u16[0] = (a.u16[0] <= imm) ? all_ones : 0;
dst.u16[1] = (a.u16[1] <= imm) ? all_ones : 0;
dst.u16[2] = (a.u16[2] <= imm) ? all_ones : 0;
dst.u16[3] = (a.u16[3] <= imm) ? all_ones : 0;
dst.u16[4] = (a.u16[4] <= imm) ? all_ones : 0;
dst.u16[5] = (a.u16[5] <= imm) ? all_ones : 0;
dst.u16[6] = (a.u16[6] <= imm) ? all_ones : 0;
dst.u16[7] = (a.u16[7] <= imm) ? all_ones : 0;
dst.u16[8] = (a.u16[8] <= imm) ? all_ones : 0;
dst.u16[9] = (a.u16[9] <= imm) ? all_ones : 0;
dst.u16[10] = (a.u16[10] <= imm) ? all_ones : 0;
dst.u16[11] = (a.u16[11] <= imm) ? all_ones : 0;
dst.u16[12] = (a.u16[12] <= imm) ? all_ones : 0;
dst.u16[13] = (a.u16[13] <= imm) ? all_ones : 0;
dst.u16[14] = (a.u16[14] <= imm) ? all_ones : 0;
dst.u16[15] = (a.u16[15] <= imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxclei_u_h(a, imm) ((__m256i)__builtin_lasx_mxclei_u_h((v16u16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclei_u_w"></span>

## __m256i __lasx_mxclei_u_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxclei_u_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxclei.u.w
Builtin: __builtin_lasx_mxclei_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:799
```

### Description

Compare unsigned 8 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] <= imm) ? all_ones : 0;
dst.u32[1] = (a.u32[1] <= imm) ? all_ones : 0;
dst.u32[2] = (a.u32[2] <= imm) ? all_ones : 0;
dst.u32[3] = (a.u32[3] <= imm) ? all_ones : 0;
dst.u32[4] = (a.u32[4] <= imm) ? all_ones : 0;
dst.u32[5] = (a.u32[5] <= imm) ? all_ones : 0;
dst.u32[6] = (a.u32[6] <= imm) ? all_ones : 0;
dst.u32[7] = (a.u32[7] <= imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxclei_u_w(a, imm) ((__m256i)__builtin_lasx_mxclei_u_w((v8u32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclt_s_b"></span>

## __m256i __lasx_mxclt_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxclt_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxclt.s.b
Builtin: __builtin_lasx_mxclt_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:674
```

### Description

Compare signed 32 x i8 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i8[0] = (a.i8[0] < b.i8[0]) ? all_ones : 0;
dst.i8[1] = (a.i8[1] < b.i8[1]) ? all_ones : 0;
dst.i8[2] = (a.i8[2] < b.i8[2]) ? all_ones : 0;
dst.i8[3] = (a.i8[3] < b.i8[3]) ? all_ones : 0;
dst.i8[4] = (a.i8[4] < b.i8[4]) ? all_ones : 0;
dst.i8[5] = (a.i8[5] < b.i8[5]) ? all_ones : 0;
dst.i8[6] = (a.i8[6] < b.i8[6]) ? all_ones : 0;
dst.i8[7] = (a.i8[7] < b.i8[7]) ? all_ones : 0;
dst.i8[8] = (a.i8[8] < b.i8[8]) ? all_ones : 0;
dst.i8[9] = (a.i8[9] < b.i8[9]) ? all_ones : 0;
dst.i8[10] = (a.i8[10] < b.i8[10]) ? all_ones : 0;
dst.i8[11] = (a.i8[11] < b.i8[11]) ? all_ones : 0;
dst.i8[12] = (a.i8[12] < b.i8[12]) ? all_ones : 0;
dst.i8[13] = (a.i8[13] < b.i8[13]) ? all_ones : 0;
dst.i8[14] = (a.i8[14] < b.i8[14]) ? all_ones : 0;
dst.i8[15] = (a.i8[15] < b.i8[15]) ? all_ones : 0;
dst.i8[16] = (a.i8[16] < b.i8[16]) ? all_ones : 0;
dst.i8[17] = (a.i8[17] < b.i8[17]) ? all_ones : 0;
dst.i8[18] = (a.i8[18] < b.i8[18]) ? all_ones : 0;
dst.i8[19] = (a.i8[19] < b.i8[19]) ? all_ones : 0;
dst.i8[20] = (a.i8[20] < b.i8[20]) ? all_ones : 0;
dst.i8[21] = (a.i8[21] < b.i8[21]) ? all_ones : 0;
dst.i8[22] = (a.i8[22] < b.i8[22]) ? all_ones : 0;
dst.i8[23] = (a.i8[23] < b.i8[23]) ? all_ones : 0;
dst.i8[24] = (a.i8[24] < b.i8[24]) ? all_ones : 0;
dst.i8[25] = (a.i8[25] < b.i8[25]) ? all_ones : 0;
dst.i8[26] = (a.i8[26] < b.i8[26]) ? all_ones : 0;
dst.i8[27] = (a.i8[27] < b.i8[27]) ? all_ones : 0;
dst.i8[28] = (a.i8[28] < b.i8[28]) ? all_ones : 0;
dst.i8[29] = (a.i8[29] < b.i8[29]) ? all_ones : 0;
dst.i8[30] = (a.i8[30] < b.i8[30]) ? all_ones : 0;
dst.i8[31] = (a.i8[31] < b.i8[31]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_s_b((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxclt_s_d"></span>

## __m256i __lasx_mxclt_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxclt_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxclt.s.d
Builtin: __builtin_lasx_mxclt_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:695
```

### Description

Compare signed 4 x i64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i64[0] = (a.i64[0] < b.i64[0]) ? all_ones : 0;
dst.i64[1] = (a.i64[1] < b.i64[1]) ? all_ones : 0;
dst.i64[2] = (a.i64[2] < b.i64[2]) ? all_ones : 0;
dst.i64[3] = (a.i64[3] < b.i64[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_s_d((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxclt_s_h"></span>

## __m256i __lasx_mxclt_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxclt_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxclt.s.h
Builtin: __builtin_lasx_mxclt_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:681
```

### Description

Compare signed 16 x i16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i16[0] = (a.i16[0] < b.i16[0]) ? all_ones : 0;
dst.i16[1] = (a.i16[1] < b.i16[1]) ? all_ones : 0;
dst.i16[2] = (a.i16[2] < b.i16[2]) ? all_ones : 0;
dst.i16[3] = (a.i16[3] < b.i16[3]) ? all_ones : 0;
dst.i16[4] = (a.i16[4] < b.i16[4]) ? all_ones : 0;
dst.i16[5] = (a.i16[5] < b.i16[5]) ? all_ones : 0;
dst.i16[6] = (a.i16[6] < b.i16[6]) ? all_ones : 0;
dst.i16[7] = (a.i16[7] < b.i16[7]) ? all_ones : 0;
dst.i16[8] = (a.i16[8] < b.i16[8]) ? all_ones : 0;
dst.i16[9] = (a.i16[9] < b.i16[9]) ? all_ones : 0;
dst.i16[10] = (a.i16[10] < b.i16[10]) ? all_ones : 0;
dst.i16[11] = (a.i16[11] < b.i16[11]) ? all_ones : 0;
dst.i16[12] = (a.i16[12] < b.i16[12]) ? all_ones : 0;
dst.i16[13] = (a.i16[13] < b.i16[13]) ? all_ones : 0;
dst.i16[14] = (a.i16[14] < b.i16[14]) ? all_ones : 0;
dst.i16[15] = (a.i16[15] < b.i16[15]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_s_h((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxclt_s_w"></span>

## __m256i __lasx_mxclt_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxclt_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxclt.s.w
Builtin: __builtin_lasx_mxclt_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:688
```

### Description

Compare signed 8 x i32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i32[0] = (a.i32[0] < b.i32[0]) ? all_ones : 0;
dst.i32[1] = (a.i32[1] < b.i32[1]) ? all_ones : 0;
dst.i32[2] = (a.i32[2] < b.i32[2]) ? all_ones : 0;
dst.i32[3] = (a.i32[3] < b.i32[3]) ? all_ones : 0;
dst.i32[4] = (a.i32[4] < b.i32[4]) ? all_ones : 0;
dst.i32[5] = (a.i32[5] < b.i32[5]) ? all_ones : 0;
dst.i32[6] = (a.i32[6] < b.i32[6]) ? all_ones : 0;
dst.i32[7] = (a.i32[7] < b.i32[7]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_s_w((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxclt_u_b"></span>

## __m256i __lasx_mxclt_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxclt_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxclt.u.b
Builtin: __builtin_lasx_mxclt_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:706
```

### Description

Compare unsigned 32 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u8[0] = (a.u8[0] < b.u8[0]) ? all_ones : 0;
dst.u8[1] = (a.u8[1] < b.u8[1]) ? all_ones : 0;
dst.u8[2] = (a.u8[2] < b.u8[2]) ? all_ones : 0;
dst.u8[3] = (a.u8[3] < b.u8[3]) ? all_ones : 0;
dst.u8[4] = (a.u8[4] < b.u8[4]) ? all_ones : 0;
dst.u8[5] = (a.u8[5] < b.u8[5]) ? all_ones : 0;
dst.u8[6] = (a.u8[6] < b.u8[6]) ? all_ones : 0;
dst.u8[7] = (a.u8[7] < b.u8[7]) ? all_ones : 0;
dst.u8[8] = (a.u8[8] < b.u8[8]) ? all_ones : 0;
dst.u8[9] = (a.u8[9] < b.u8[9]) ? all_ones : 0;
dst.u8[10] = (a.u8[10] < b.u8[10]) ? all_ones : 0;
dst.u8[11] = (a.u8[11] < b.u8[11]) ? all_ones : 0;
dst.u8[12] = (a.u8[12] < b.u8[12]) ? all_ones : 0;
dst.u8[13] = (a.u8[13] < b.u8[13]) ? all_ones : 0;
dst.u8[14] = (a.u8[14] < b.u8[14]) ? all_ones : 0;
dst.u8[15] = (a.u8[15] < b.u8[15]) ? all_ones : 0;
dst.u8[16] = (a.u8[16] < b.u8[16]) ? all_ones : 0;
dst.u8[17] = (a.u8[17] < b.u8[17]) ? all_ones : 0;
dst.u8[18] = (a.u8[18] < b.u8[18]) ? all_ones : 0;
dst.u8[19] = (a.u8[19] < b.u8[19]) ? all_ones : 0;
dst.u8[20] = (a.u8[20] < b.u8[20]) ? all_ones : 0;
dst.u8[21] = (a.u8[21] < b.u8[21]) ? all_ones : 0;
dst.u8[22] = (a.u8[22] < b.u8[22]) ? all_ones : 0;
dst.u8[23] = (a.u8[23] < b.u8[23]) ? all_ones : 0;
dst.u8[24] = (a.u8[24] < b.u8[24]) ? all_ones : 0;
dst.u8[25] = (a.u8[25] < b.u8[25]) ? all_ones : 0;
dst.u8[26] = (a.u8[26] < b.u8[26]) ? all_ones : 0;
dst.u8[27] = (a.u8[27] < b.u8[27]) ? all_ones : 0;
dst.u8[28] = (a.u8[28] < b.u8[28]) ? all_ones : 0;
dst.u8[29] = (a.u8[29] < b.u8[29]) ? all_ones : 0;
dst.u8[30] = (a.u8[30] < b.u8[30]) ? all_ones : 0;
dst.u8[31] = (a.u8[31] < b.u8[31]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_u_b((v32u8)a, (v32u8)b);
```

<span id="intrinsic-__lasx_mxclt_u_d"></span>

## __m256i __lasx_mxclt_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxclt_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxclt.u.d
Builtin: __builtin_lasx_mxclt_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:727
```

### Description

Compare unsigned 4 x u64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u64[0] = (a.u64[0] < b.u64[0]) ? all_ones : 0;
dst.u64[1] = (a.u64[1] < b.u64[1]) ? all_ones : 0;
dst.u64[2] = (a.u64[2] < b.u64[2]) ? all_ones : 0;
dst.u64[3] = (a.u64[3] < b.u64[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_u_d((v4u64)a, (v4u64)b);
```

<span id="intrinsic-__lasx_mxclt_u_h"></span>

## __m256i __lasx_mxclt_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxclt_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxclt.u.h
Builtin: __builtin_lasx_mxclt_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:713
```

### Description

Compare unsigned 16 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u16[0] = (a.u16[0] < b.u16[0]) ? all_ones : 0;
dst.u16[1] = (a.u16[1] < b.u16[1]) ? all_ones : 0;
dst.u16[2] = (a.u16[2] < b.u16[2]) ? all_ones : 0;
dst.u16[3] = (a.u16[3] < b.u16[3]) ? all_ones : 0;
dst.u16[4] = (a.u16[4] < b.u16[4]) ? all_ones : 0;
dst.u16[5] = (a.u16[5] < b.u16[5]) ? all_ones : 0;
dst.u16[6] = (a.u16[6] < b.u16[6]) ? all_ones : 0;
dst.u16[7] = (a.u16[7] < b.u16[7]) ? all_ones : 0;
dst.u16[8] = (a.u16[8] < b.u16[8]) ? all_ones : 0;
dst.u16[9] = (a.u16[9] < b.u16[9]) ? all_ones : 0;
dst.u16[10] = (a.u16[10] < b.u16[10]) ? all_ones : 0;
dst.u16[11] = (a.u16[11] < b.u16[11]) ? all_ones : 0;
dst.u16[12] = (a.u16[12] < b.u16[12]) ? all_ones : 0;
dst.u16[13] = (a.u16[13] < b.u16[13]) ? all_ones : 0;
dst.u16[14] = (a.u16[14] < b.u16[14]) ? all_ones : 0;
dst.u16[15] = (a.u16[15] < b.u16[15]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_u_h((v16u16)a, (v16u16)b);
```

<span id="intrinsic-__lasx_mxclt_u_w"></span>

## __m256i __lasx_mxclt_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxclt_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxclt.u.w
Builtin: __builtin_lasx_mxclt_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:720
```

### Description

Compare unsigned 8 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] < b.u32[0]) ? all_ones : 0;
dst.u32[1] = (a.u32[1] < b.u32[1]) ? all_ones : 0;
dst.u32[2] = (a.u32[2] < b.u32[2]) ? all_ones : 0;
dst.u32[3] = (a.u32[3] < b.u32[3]) ? all_ones : 0;
dst.u32[4] = (a.u32[4] < b.u32[4]) ? all_ones : 0;
dst.u32[5] = (a.u32[5] < b.u32[5]) ? all_ones : 0;
dst.u32[6] = (a.u32[6] < b.u32[6]) ? all_ones : 0;
dst.u32[7] = (a.u32[7] < b.u32[7]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_u_w((v8u32)a, (v8u32)b);
```

<span id="intrinsic-__lasx_mxclti_s_b"></span>

## __m256i __lasx_mxclti_s_b (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxclti_s_b (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxclti.s.b
Builtin: __builtin_lasx_mxclti_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:701
```

### Description

Compare signed 32 x i8 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i8[0] = (a.i8[0] < imm) ? all_ones : 0;
dst.i8[1] = (a.i8[1] < imm) ? all_ones : 0;
dst.i8[2] = (a.i8[2] < imm) ? all_ones : 0;
dst.i8[3] = (a.i8[3] < imm) ? all_ones : 0;
dst.i8[4] = (a.i8[4] < imm) ? all_ones : 0;
dst.i8[5] = (a.i8[5] < imm) ? all_ones : 0;
dst.i8[6] = (a.i8[6] < imm) ? all_ones : 0;
dst.i8[7] = (a.i8[7] < imm) ? all_ones : 0;
dst.i8[8] = (a.i8[8] < imm) ? all_ones : 0;
dst.i8[9] = (a.i8[9] < imm) ? all_ones : 0;
dst.i8[10] = (a.i8[10] < imm) ? all_ones : 0;
dst.i8[11] = (a.i8[11] < imm) ? all_ones : 0;
dst.i8[12] = (a.i8[12] < imm) ? all_ones : 0;
dst.i8[13] = (a.i8[13] < imm) ? all_ones : 0;
dst.i8[14] = (a.i8[14] < imm) ? all_ones : 0;
dst.i8[15] = (a.i8[15] < imm) ? all_ones : 0;
dst.i8[16] = (a.i8[16] < imm) ? all_ones : 0;
dst.i8[17] = (a.i8[17] < imm) ? all_ones : 0;
dst.i8[18] = (a.i8[18] < imm) ? all_ones : 0;
dst.i8[19] = (a.i8[19] < imm) ? all_ones : 0;
dst.i8[20] = (a.i8[20] < imm) ? all_ones : 0;
dst.i8[21] = (a.i8[21] < imm) ? all_ones : 0;
dst.i8[22] = (a.i8[22] < imm) ? all_ones : 0;
dst.i8[23] = (a.i8[23] < imm) ? all_ones : 0;
dst.i8[24] = (a.i8[24] < imm) ? all_ones : 0;
dst.i8[25] = (a.i8[25] < imm) ? all_ones : 0;
dst.i8[26] = (a.i8[26] < imm) ? all_ones : 0;
dst.i8[27] = (a.i8[27] < imm) ? all_ones : 0;
dst.i8[28] = (a.i8[28] < imm) ? all_ones : 0;
dst.i8[29] = (a.i8[29] < imm) ? all_ones : 0;
dst.i8[30] = (a.i8[30] < imm) ? all_ones : 0;
dst.i8[31] = (a.i8[31] < imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxclti_s_b(a, imm) ((__m256i)__builtin_lasx_mxclti_s_b((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclti_s_d"></span>

## __m256i __lasx_mxclti_s_d (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxclti_s_d (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxclti.s.d
Builtin: __builtin_lasx_mxclti_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:704
```

### Description

Compare signed 4 x i64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i64[0] = (a.i64[0] < imm) ? all_ones : 0;
dst.i64[1] = (a.i64[1] < imm) ? all_ones : 0;
dst.i64[2] = (a.i64[2] < imm) ? all_ones : 0;
dst.i64[3] = (a.i64[3] < imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxclti_s_d(a, imm) ((__m256i)__builtin_lasx_mxclti_s_d((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclti_s_h"></span>

## __m256i __lasx_mxclti_s_h (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxclti_s_h (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxclti.s.h
Builtin: __builtin_lasx_mxclti_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:702
```

### Description

Compare signed 16 x i16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i16[0] = (a.i16[0] < imm) ? all_ones : 0;
dst.i16[1] = (a.i16[1] < imm) ? all_ones : 0;
dst.i16[2] = (a.i16[2] < imm) ? all_ones : 0;
dst.i16[3] = (a.i16[3] < imm) ? all_ones : 0;
dst.i16[4] = (a.i16[4] < imm) ? all_ones : 0;
dst.i16[5] = (a.i16[5] < imm) ? all_ones : 0;
dst.i16[6] = (a.i16[6] < imm) ? all_ones : 0;
dst.i16[7] = (a.i16[7] < imm) ? all_ones : 0;
dst.i16[8] = (a.i16[8] < imm) ? all_ones : 0;
dst.i16[9] = (a.i16[9] < imm) ? all_ones : 0;
dst.i16[10] = (a.i16[10] < imm) ? all_ones : 0;
dst.i16[11] = (a.i16[11] < imm) ? all_ones : 0;
dst.i16[12] = (a.i16[12] < imm) ? all_ones : 0;
dst.i16[13] = (a.i16[13] < imm) ? all_ones : 0;
dst.i16[14] = (a.i16[14] < imm) ? all_ones : 0;
dst.i16[15] = (a.i16[15] < imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxclti_s_h(a, imm) ((__m256i)__builtin_lasx_mxclti_s_h((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclti_s_w"></span>

## __m256i __lasx_mxclti_s_w (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxclti_s_w (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxclti.s.w
Builtin: __builtin_lasx_mxclti_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:703
```

### Description

Compare signed 8 x i32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i32[0] = (a.i32[0] < imm) ? all_ones : 0;
dst.i32[1] = (a.i32[1] < imm) ? all_ones : 0;
dst.i32[2] = (a.i32[2] < imm) ? all_ones : 0;
dst.i32[3] = (a.i32[3] < imm) ? all_ones : 0;
dst.i32[4] = (a.i32[4] < imm) ? all_ones : 0;
dst.i32[5] = (a.i32[5] < imm) ? all_ones : 0;
dst.i32[6] = (a.i32[6] < imm) ? all_ones : 0;
dst.i32[7] = (a.i32[7] < imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxclti_s_w(a, imm) ((__m256i)__builtin_lasx_mxclti_s_w((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclti_u_b"></span>

## __m256i __lasx_mxclti_u_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxclti_u_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxclti.u.b
Builtin: __builtin_lasx_mxclti_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:733
```

### Description

Compare unsigned 32 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u8[0] = (a.u8[0] < imm) ? all_ones : 0;
dst.u8[1] = (a.u8[1] < imm) ? all_ones : 0;
dst.u8[2] = (a.u8[2] < imm) ? all_ones : 0;
dst.u8[3] = (a.u8[3] < imm) ? all_ones : 0;
dst.u8[4] = (a.u8[4] < imm) ? all_ones : 0;
dst.u8[5] = (a.u8[5] < imm) ? all_ones : 0;
dst.u8[6] = (a.u8[6] < imm) ? all_ones : 0;
dst.u8[7] = (a.u8[7] < imm) ? all_ones : 0;
dst.u8[8] = (a.u8[8] < imm) ? all_ones : 0;
dst.u8[9] = (a.u8[9] < imm) ? all_ones : 0;
dst.u8[10] = (a.u8[10] < imm) ? all_ones : 0;
dst.u8[11] = (a.u8[11] < imm) ? all_ones : 0;
dst.u8[12] = (a.u8[12] < imm) ? all_ones : 0;
dst.u8[13] = (a.u8[13] < imm) ? all_ones : 0;
dst.u8[14] = (a.u8[14] < imm) ? all_ones : 0;
dst.u8[15] = (a.u8[15] < imm) ? all_ones : 0;
dst.u8[16] = (a.u8[16] < imm) ? all_ones : 0;
dst.u8[17] = (a.u8[17] < imm) ? all_ones : 0;
dst.u8[18] = (a.u8[18] < imm) ? all_ones : 0;
dst.u8[19] = (a.u8[19] < imm) ? all_ones : 0;
dst.u8[20] = (a.u8[20] < imm) ? all_ones : 0;
dst.u8[21] = (a.u8[21] < imm) ? all_ones : 0;
dst.u8[22] = (a.u8[22] < imm) ? all_ones : 0;
dst.u8[23] = (a.u8[23] < imm) ? all_ones : 0;
dst.u8[24] = (a.u8[24] < imm) ? all_ones : 0;
dst.u8[25] = (a.u8[25] < imm) ? all_ones : 0;
dst.u8[26] = (a.u8[26] < imm) ? all_ones : 0;
dst.u8[27] = (a.u8[27] < imm) ? all_ones : 0;
dst.u8[28] = (a.u8[28] < imm) ? all_ones : 0;
dst.u8[29] = (a.u8[29] < imm) ? all_ones : 0;
dst.u8[30] = (a.u8[30] < imm) ? all_ones : 0;
dst.u8[31] = (a.u8[31] < imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxclti_u_b(a, imm) ((__m256i)__builtin_lasx_mxclti_u_b((v32u8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclti_u_d"></span>

## __m256i __lasx_mxclti_u_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxclti_u_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxclti.u.d
Builtin: __builtin_lasx_mxclti_u_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:736
```

### Description

Compare unsigned 4 x u64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u64[0] = (a.u64[0] < imm) ? all_ones : 0;
dst.u64[1] = (a.u64[1] < imm) ? all_ones : 0;
dst.u64[2] = (a.u64[2] < imm) ? all_ones : 0;
dst.u64[3] = (a.u64[3] < imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxclti_u_d(a, imm) ((__m256i)__builtin_lasx_mxclti_u_d((v4u64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclti_u_h"></span>

## __m256i __lasx_mxclti_u_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxclti_u_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxclti.u.h
Builtin: __builtin_lasx_mxclti_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:734
```

### Description

Compare unsigned 16 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u16[0] = (a.u16[0] < imm) ? all_ones : 0;
dst.u16[1] = (a.u16[1] < imm) ? all_ones : 0;
dst.u16[2] = (a.u16[2] < imm) ? all_ones : 0;
dst.u16[3] = (a.u16[3] < imm) ? all_ones : 0;
dst.u16[4] = (a.u16[4] < imm) ? all_ones : 0;
dst.u16[5] = (a.u16[5] < imm) ? all_ones : 0;
dst.u16[6] = (a.u16[6] < imm) ? all_ones : 0;
dst.u16[7] = (a.u16[7] < imm) ? all_ones : 0;
dst.u16[8] = (a.u16[8] < imm) ? all_ones : 0;
dst.u16[9] = (a.u16[9] < imm) ? all_ones : 0;
dst.u16[10] = (a.u16[10] < imm) ? all_ones : 0;
dst.u16[11] = (a.u16[11] < imm) ? all_ones : 0;
dst.u16[12] = (a.u16[12] < imm) ? all_ones : 0;
dst.u16[13] = (a.u16[13] < imm) ? all_ones : 0;
dst.u16[14] = (a.u16[14] < imm) ? all_ones : 0;
dst.u16[15] = (a.u16[15] < imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxclti_u_h(a, imm) ((__m256i)__builtin_lasx_mxclti_u_h((v16u16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxclti_u_w"></span>

## __m256i __lasx_mxclti_u_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxclti_u_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxclti.u.w
Builtin: __builtin_lasx_mxclti_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:735
```

### Description

Compare unsigned 8 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] < imm) ? all_ones : 0;
dst.u32[1] = (a.u32[1] < imm) ? all_ones : 0;
dst.u32[2] = (a.u32[2] < imm) ? all_ones : 0;
dst.u32[3] = (a.u32[3] < imm) ? all_ones : 0;
dst.u32[4] = (a.u32[4] < imm) ? all_ones : 0;
dst.u32[5] = (a.u32[5] < imm) ? all_ones : 0;
dst.u32[6] = (a.u32[6] < imm) ? all_ones : 0;
dst.u32[7] = (a.u32[7] < imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxclti_u_w(a, imm) ((__m256i)__builtin_lasx_mxclti_u_w((v8u32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmax_a_b"></span>

## __m256i __lasx_mxmax_a_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmax_a_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmax.a.b
Builtin: __builtin_lasx_mxmax_a_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:586
```

### Description

Select the lane-wise maximum of modular integer operands on 32 x u8 lanes.

### Operation

```c
dst.u8[0] = max(a.i8[0], b.i8[0]);
dst.u8[1] = max(a.i8[1], b.i8[1]);
dst.u8[2] = max(a.i8[2], b.i8[2]);
dst.u8[3] = max(a.i8[3], b.i8[3]);
dst.u8[4] = max(a.i8[4], b.i8[4]);
dst.u8[5] = max(a.i8[5], b.i8[5]);
dst.u8[6] = max(a.i8[6], b.i8[6]);
dst.u8[7] = max(a.i8[7], b.i8[7]);
dst.u8[8] = max(a.i8[8], b.i8[8]);
dst.u8[9] = max(a.i8[9], b.i8[9]);
dst.u8[10] = max(a.i8[10], b.i8[10]);
dst.u8[11] = max(a.i8[11], b.i8[11]);
dst.u8[12] = max(a.i8[12], b.i8[12]);
dst.u8[13] = max(a.i8[13], b.i8[13]);
dst.u8[14] = max(a.i8[14], b.i8[14]);
dst.u8[15] = max(a.i8[15], b.i8[15]);
dst.u8[16] = max(a.i8[16], b.i8[16]);
dst.u8[17] = max(a.i8[17], b.i8[17]);
dst.u8[18] = max(a.i8[18], b.i8[18]);
dst.u8[19] = max(a.i8[19], b.i8[19]);
dst.u8[20] = max(a.i8[20], b.i8[20]);
dst.u8[21] = max(a.i8[21], b.i8[21]);
dst.u8[22] = max(a.i8[22], b.i8[22]);
dst.u8[23] = max(a.i8[23], b.i8[23]);
dst.u8[24] = max(a.i8[24], b.i8[24]);
dst.u8[25] = max(a.i8[25], b.i8[25]);
dst.u8[26] = max(a.i8[26], b.i8[26]);
dst.u8[27] = max(a.i8[27], b.i8[27]);
dst.u8[28] = max(a.i8[28], b.i8[28]);
dst.u8[29] = max(a.i8[29], b.i8[29]);
dst.u8[30] = max(a.i8[30], b.i8[30]);
dst.u8[31] = max(a.i8[31], b.i8[31]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_a_b((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxmax_a_d"></span>

## __m256i __lasx_mxmax_a_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmax_a_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmax.a.d
Builtin: __builtin_lasx_mxmax_a_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:607
```

### Description

Select the lane-wise maximum of modular integer operands on 4 x u64 lanes.

### Operation

```c
dst.u64[0] = max(a.i64[0], b.i64[0]);
dst.u64[1] = max(a.i64[1], b.i64[1]);
dst.u64[2] = max(a.i64[2], b.i64[2]);
dst.u64[3] = max(a.i64[3], b.i64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_a_d((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxmax_a_h"></span>

## __m256i __lasx_mxmax_a_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmax_a_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmax.a.h
Builtin: __builtin_lasx_mxmax_a_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:593
```

### Description

Select the lane-wise maximum of modular integer operands on 16 x u16 lanes.

### Operation

```c
dst.u16[0] = max(a.i16[0], b.i16[0]);
dst.u16[1] = max(a.i16[1], b.i16[1]);
dst.u16[2] = max(a.i16[2], b.i16[2]);
dst.u16[3] = max(a.i16[3], b.i16[3]);
dst.u16[4] = max(a.i16[4], b.i16[4]);
dst.u16[5] = max(a.i16[5], b.i16[5]);
dst.u16[6] = max(a.i16[6], b.i16[6]);
dst.u16[7] = max(a.i16[7], b.i16[7]);
dst.u16[8] = max(a.i16[8], b.i16[8]);
dst.u16[9] = max(a.i16[9], b.i16[9]);
dst.u16[10] = max(a.i16[10], b.i16[10]);
dst.u16[11] = max(a.i16[11], b.i16[11]);
dst.u16[12] = max(a.i16[12], b.i16[12]);
dst.u16[13] = max(a.i16[13], b.i16[13]);
dst.u16[14] = max(a.i16[14], b.i16[14]);
dst.u16[15] = max(a.i16[15], b.i16[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_a_h((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxmax_a_w"></span>

## __m256i __lasx_mxmax_a_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmax_a_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmax.a.w
Builtin: __builtin_lasx_mxmax_a_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:600
```

### Description

Select the lane-wise maximum of modular integer operands on 8 x u32 lanes.

### Operation

```c
dst.u32[0] = max(a.i32[0], b.i32[0]);
dst.u32[1] = max(a.i32[1], b.i32[1]);
dst.u32[2] = max(a.i32[2], b.i32[2]);
dst.u32[3] = max(a.i32[3], b.i32[3]);
dst.u32[4] = max(a.i32[4], b.i32[4]);
dst.u32[5] = max(a.i32[5], b.i32[5]);
dst.u32[6] = max(a.i32[6], b.i32[6]);
dst.u32[7] = max(a.i32[7], b.i32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_a_w((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxmax_s_b"></span>

## __m256i __lasx_mxmax_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmax_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmax.s.b
Builtin: __builtin_lasx_mxmax_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:458
```

### Description

Select the lane-wise maximum of signed integer operands on 32 x i8 lanes.

### Operation

```c
dst.i8[0] = max(a.i8[0], b.i8[0]);
dst.i8[1] = max(a.i8[1], b.i8[1]);
dst.i8[2] = max(a.i8[2], b.i8[2]);
dst.i8[3] = max(a.i8[3], b.i8[3]);
dst.i8[4] = max(a.i8[4], b.i8[4]);
dst.i8[5] = max(a.i8[5], b.i8[5]);
dst.i8[6] = max(a.i8[6], b.i8[6]);
dst.i8[7] = max(a.i8[7], b.i8[7]);
dst.i8[8] = max(a.i8[8], b.i8[8]);
dst.i8[9] = max(a.i8[9], b.i8[9]);
dst.i8[10] = max(a.i8[10], b.i8[10]);
dst.i8[11] = max(a.i8[11], b.i8[11]);
dst.i8[12] = max(a.i8[12], b.i8[12]);
dst.i8[13] = max(a.i8[13], b.i8[13]);
dst.i8[14] = max(a.i8[14], b.i8[14]);
dst.i8[15] = max(a.i8[15], b.i8[15]);
dst.i8[16] = max(a.i8[16], b.i8[16]);
dst.i8[17] = max(a.i8[17], b.i8[17]);
dst.i8[18] = max(a.i8[18], b.i8[18]);
dst.i8[19] = max(a.i8[19], b.i8[19]);
dst.i8[20] = max(a.i8[20], b.i8[20]);
dst.i8[21] = max(a.i8[21], b.i8[21]);
dst.i8[22] = max(a.i8[22], b.i8[22]);
dst.i8[23] = max(a.i8[23], b.i8[23]);
dst.i8[24] = max(a.i8[24], b.i8[24]);
dst.i8[25] = max(a.i8[25], b.i8[25]);
dst.i8[26] = max(a.i8[26], b.i8[26]);
dst.i8[27] = max(a.i8[27], b.i8[27]);
dst.i8[28] = max(a.i8[28], b.i8[28]);
dst.i8[29] = max(a.i8[29], b.i8[29]);
dst.i8[30] = max(a.i8[30], b.i8[30]);
dst.i8[31] = max(a.i8[31], b.i8[31]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_s_b((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxmax_s_d"></span>

## __m256i __lasx_mxmax_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmax_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmax.s.d
Builtin: __builtin_lasx_mxmax_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:479
```

### Description

Select the lane-wise maximum of signed integer operands on 4 x i64 lanes.

### Operation

```c
dst.i64[0] = max(a.i64[0], b.i64[0]);
dst.i64[1] = max(a.i64[1], b.i64[1]);
dst.i64[2] = max(a.i64[2], b.i64[2]);
dst.i64[3] = max(a.i64[3], b.i64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_s_d((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxmax_s_h"></span>

## __m256i __lasx_mxmax_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmax_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmax.s.h
Builtin: __builtin_lasx_mxmax_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:465
```

### Description

Select the lane-wise maximum of signed integer operands on 16 x i16 lanes.

### Operation

```c
dst.i16[0] = max(a.i16[0], b.i16[0]);
dst.i16[1] = max(a.i16[1], b.i16[1]);
dst.i16[2] = max(a.i16[2], b.i16[2]);
dst.i16[3] = max(a.i16[3], b.i16[3]);
dst.i16[4] = max(a.i16[4], b.i16[4]);
dst.i16[5] = max(a.i16[5], b.i16[5]);
dst.i16[6] = max(a.i16[6], b.i16[6]);
dst.i16[7] = max(a.i16[7], b.i16[7]);
dst.i16[8] = max(a.i16[8], b.i16[8]);
dst.i16[9] = max(a.i16[9], b.i16[9]);
dst.i16[10] = max(a.i16[10], b.i16[10]);
dst.i16[11] = max(a.i16[11], b.i16[11]);
dst.i16[12] = max(a.i16[12], b.i16[12]);
dst.i16[13] = max(a.i16[13], b.i16[13]);
dst.i16[14] = max(a.i16[14], b.i16[14]);
dst.i16[15] = max(a.i16[15], b.i16[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_s_h((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxmax_s_w"></span>

## __m256i __lasx_mxmax_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmax_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmax.s.w
Builtin: __builtin_lasx_mxmax_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:472
```

### Description

Select the lane-wise maximum of signed integer operands on 8 x i32 lanes.

### Operation

```c
dst.i32[0] = max(a.i32[0], b.i32[0]);
dst.i32[1] = max(a.i32[1], b.i32[1]);
dst.i32[2] = max(a.i32[2], b.i32[2]);
dst.i32[3] = max(a.i32[3], b.i32[3]);
dst.i32[4] = max(a.i32[4], b.i32[4]);
dst.i32[5] = max(a.i32[5], b.i32[5]);
dst.i32[6] = max(a.i32[6], b.i32[6]);
dst.i32[7] = max(a.i32[7], b.i32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_s_w((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxmax_u_b"></span>

## __m256i __lasx_mxmax_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmax_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmax.u.b
Builtin: __builtin_lasx_mxmax_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:490
```

### Description

Select the lane-wise maximum of unsigned integer operands on 32 x u8 lanes.

### Operation

```c
dst.u8[0] = max(a.u8[0], b.u8[0]);
dst.u8[1] = max(a.u8[1], b.u8[1]);
dst.u8[2] = max(a.u8[2], b.u8[2]);
dst.u8[3] = max(a.u8[3], b.u8[3]);
dst.u8[4] = max(a.u8[4], b.u8[4]);
dst.u8[5] = max(a.u8[5], b.u8[5]);
dst.u8[6] = max(a.u8[6], b.u8[6]);
dst.u8[7] = max(a.u8[7], b.u8[7]);
dst.u8[8] = max(a.u8[8], b.u8[8]);
dst.u8[9] = max(a.u8[9], b.u8[9]);
dst.u8[10] = max(a.u8[10], b.u8[10]);
dst.u8[11] = max(a.u8[11], b.u8[11]);
dst.u8[12] = max(a.u8[12], b.u8[12]);
dst.u8[13] = max(a.u8[13], b.u8[13]);
dst.u8[14] = max(a.u8[14], b.u8[14]);
dst.u8[15] = max(a.u8[15], b.u8[15]);
dst.u8[16] = max(a.u8[16], b.u8[16]);
dst.u8[17] = max(a.u8[17], b.u8[17]);
dst.u8[18] = max(a.u8[18], b.u8[18]);
dst.u8[19] = max(a.u8[19], b.u8[19]);
dst.u8[20] = max(a.u8[20], b.u8[20]);
dst.u8[21] = max(a.u8[21], b.u8[21]);
dst.u8[22] = max(a.u8[22], b.u8[22]);
dst.u8[23] = max(a.u8[23], b.u8[23]);
dst.u8[24] = max(a.u8[24], b.u8[24]);
dst.u8[25] = max(a.u8[25], b.u8[25]);
dst.u8[26] = max(a.u8[26], b.u8[26]);
dst.u8[27] = max(a.u8[27], b.u8[27]);
dst.u8[28] = max(a.u8[28], b.u8[28]);
dst.u8[29] = max(a.u8[29], b.u8[29]);
dst.u8[30] = max(a.u8[30], b.u8[30]);
dst.u8[31] = max(a.u8[31], b.u8[31]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_u_b((v32u8)a, (v32u8)b);
```

<span id="intrinsic-__lasx_mxmax_u_d"></span>

## __m256i __lasx_mxmax_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmax_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmax.u.d
Builtin: __builtin_lasx_mxmax_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:511
```

### Description

Select the lane-wise maximum of unsigned integer operands on 4 x u64 lanes.

### Operation

```c
dst.u64[0] = max(a.u64[0], b.u64[0]);
dst.u64[1] = max(a.u64[1], b.u64[1]);
dst.u64[2] = max(a.u64[2], b.u64[2]);
dst.u64[3] = max(a.u64[3], b.u64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_u_d((v4u64)a, (v4u64)b);
```

<span id="intrinsic-__lasx_mxmax_u_h"></span>

## __m256i __lasx_mxmax_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmax_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmax.u.h
Builtin: __builtin_lasx_mxmax_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:497
```

### Description

Select the lane-wise maximum of unsigned integer operands on 16 x u16 lanes.

### Operation

```c
dst.u16[0] = max(a.u16[0], b.u16[0]);
dst.u16[1] = max(a.u16[1], b.u16[1]);
dst.u16[2] = max(a.u16[2], b.u16[2]);
dst.u16[3] = max(a.u16[3], b.u16[3]);
dst.u16[4] = max(a.u16[4], b.u16[4]);
dst.u16[5] = max(a.u16[5], b.u16[5]);
dst.u16[6] = max(a.u16[6], b.u16[6]);
dst.u16[7] = max(a.u16[7], b.u16[7]);
dst.u16[8] = max(a.u16[8], b.u16[8]);
dst.u16[9] = max(a.u16[9], b.u16[9]);
dst.u16[10] = max(a.u16[10], b.u16[10]);
dst.u16[11] = max(a.u16[11], b.u16[11]);
dst.u16[12] = max(a.u16[12], b.u16[12]);
dst.u16[13] = max(a.u16[13], b.u16[13]);
dst.u16[14] = max(a.u16[14], b.u16[14]);
dst.u16[15] = max(a.u16[15], b.u16[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_u_h((v16u16)a, (v16u16)b);
```

<span id="intrinsic-__lasx_mxmax_u_w"></span>

## __m256i __lasx_mxmax_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmax_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmax.u.w
Builtin: __builtin_lasx_mxmax_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:504
```

### Description

Select the lane-wise maximum of unsigned integer operands on 8 x u32 lanes.

### Operation

```c
dst.u32[0] = max(a.u32[0], b.u32[0]);
dst.u32[1] = max(a.u32[1], b.u32[1]);
dst.u32[2] = max(a.u32[2], b.u32[2]);
dst.u32[3] = max(a.u32[3], b.u32[3]);
dst.u32[4] = max(a.u32[4], b.u32[4]);
dst.u32[5] = max(a.u32[5], b.u32[5]);
dst.u32[6] = max(a.u32[6], b.u32[6]);
dst.u32[7] = max(a.u32[7], b.u32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_u_w((v8u32)a, (v8u32)b);
```

<span id="intrinsic-__lasx_mxmaxi_s_b"></span>

## __m256i __lasx_mxmaxi_s_b (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxmaxi_s_b (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.s.b
Builtin: __builtin_lasx_mxmaxi_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:485
```

### Description

Select the lane-wise maximum of signed integer operands on 32 x i8 lanes.

### Operation

```c
dst.i8[0] = max(a.i8[0], imm);
dst.i8[1] = max(a.i8[1], imm);
dst.i8[2] = max(a.i8[2], imm);
dst.i8[3] = max(a.i8[3], imm);
dst.i8[4] = max(a.i8[4], imm);
dst.i8[5] = max(a.i8[5], imm);
dst.i8[6] = max(a.i8[6], imm);
dst.i8[7] = max(a.i8[7], imm);
dst.i8[8] = max(a.i8[8], imm);
dst.i8[9] = max(a.i8[9], imm);
dst.i8[10] = max(a.i8[10], imm);
dst.i8[11] = max(a.i8[11], imm);
dst.i8[12] = max(a.i8[12], imm);
dst.i8[13] = max(a.i8[13], imm);
dst.i8[14] = max(a.i8[14], imm);
dst.i8[15] = max(a.i8[15], imm);
dst.i8[16] = max(a.i8[16], imm);
dst.i8[17] = max(a.i8[17], imm);
dst.i8[18] = max(a.i8[18], imm);
dst.i8[19] = max(a.i8[19], imm);
dst.i8[20] = max(a.i8[20], imm);
dst.i8[21] = max(a.i8[21], imm);
dst.i8[22] = max(a.i8[22], imm);
dst.i8[23] = max(a.i8[23], imm);
dst.i8[24] = max(a.i8[24], imm);
dst.i8[25] = max(a.i8[25], imm);
dst.i8[26] = max(a.i8[26], imm);
dst.i8[27] = max(a.i8[27], imm);
dst.i8[28] = max(a.i8[28], imm);
dst.i8[29] = max(a.i8[29], imm);
dst.i8[30] = max(a.i8[30], imm);
dst.i8[31] = max(a.i8[31], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxmaxi_s_b(a, imm) ((__m256i)__builtin_lasx_mxmaxi_s_b((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmaxi_s_d"></span>

## __m256i __lasx_mxmaxi_s_d (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxmaxi_s_d (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.s.d
Builtin: __builtin_lasx_mxmaxi_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:488
```

### Description

Select the lane-wise maximum of signed integer operands on 4 x i64 lanes.

### Operation

```c
dst.i64[0] = max(a.i64[0], imm);
dst.i64[1] = max(a.i64[1], imm);
dst.i64[2] = max(a.i64[2], imm);
dst.i64[3] = max(a.i64[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxmaxi_s_d(a, imm) ((__m256i)__builtin_lasx_mxmaxi_s_d((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmaxi_s_h"></span>

## __m256i __lasx_mxmaxi_s_h (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxmaxi_s_h (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.s.h
Builtin: __builtin_lasx_mxmaxi_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:486
```

### Description

Select the lane-wise maximum of signed integer operands on 16 x i16 lanes.

### Operation

```c
dst.i16[0] = max(a.i16[0], imm);
dst.i16[1] = max(a.i16[1], imm);
dst.i16[2] = max(a.i16[2], imm);
dst.i16[3] = max(a.i16[3], imm);
dst.i16[4] = max(a.i16[4], imm);
dst.i16[5] = max(a.i16[5], imm);
dst.i16[6] = max(a.i16[6], imm);
dst.i16[7] = max(a.i16[7], imm);
dst.i16[8] = max(a.i16[8], imm);
dst.i16[9] = max(a.i16[9], imm);
dst.i16[10] = max(a.i16[10], imm);
dst.i16[11] = max(a.i16[11], imm);
dst.i16[12] = max(a.i16[12], imm);
dst.i16[13] = max(a.i16[13], imm);
dst.i16[14] = max(a.i16[14], imm);
dst.i16[15] = max(a.i16[15], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxmaxi_s_h(a, imm) ((__m256i)__builtin_lasx_mxmaxi_s_h((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmaxi_s_w"></span>

## __m256i __lasx_mxmaxi_s_w (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxmaxi_s_w (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.s.w
Builtin: __builtin_lasx_mxmaxi_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:487
```

### Description

Select the lane-wise maximum of signed integer operands on 8 x i32 lanes.

### Operation

```c
dst.i32[0] = max(a.i32[0], imm);
dst.i32[1] = max(a.i32[1], imm);
dst.i32[2] = max(a.i32[2], imm);
dst.i32[3] = max(a.i32[3], imm);
dst.i32[4] = max(a.i32[4], imm);
dst.i32[5] = max(a.i32[5], imm);
dst.i32[6] = max(a.i32[6], imm);
dst.i32[7] = max(a.i32[7], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxmaxi_s_w(a, imm) ((__m256i)__builtin_lasx_mxmaxi_s_w((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmaxi_u_b"></span>

## __m256i __lasx_mxmaxi_u_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxmaxi_u_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.u.b
Builtin: __builtin_lasx_mxmaxi_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:517
```

### Description

Select the lane-wise maximum of unsigned integer operands on 32 x u8 lanes.

### Operation

```c
dst.u8[0] = max(a.u8[0], imm);
dst.u8[1] = max(a.u8[1], imm);
dst.u8[2] = max(a.u8[2], imm);
dst.u8[3] = max(a.u8[3], imm);
dst.u8[4] = max(a.u8[4], imm);
dst.u8[5] = max(a.u8[5], imm);
dst.u8[6] = max(a.u8[6], imm);
dst.u8[7] = max(a.u8[7], imm);
dst.u8[8] = max(a.u8[8], imm);
dst.u8[9] = max(a.u8[9], imm);
dst.u8[10] = max(a.u8[10], imm);
dst.u8[11] = max(a.u8[11], imm);
dst.u8[12] = max(a.u8[12], imm);
dst.u8[13] = max(a.u8[13], imm);
dst.u8[14] = max(a.u8[14], imm);
dst.u8[15] = max(a.u8[15], imm);
dst.u8[16] = max(a.u8[16], imm);
dst.u8[17] = max(a.u8[17], imm);
dst.u8[18] = max(a.u8[18], imm);
dst.u8[19] = max(a.u8[19], imm);
dst.u8[20] = max(a.u8[20], imm);
dst.u8[21] = max(a.u8[21], imm);
dst.u8[22] = max(a.u8[22], imm);
dst.u8[23] = max(a.u8[23], imm);
dst.u8[24] = max(a.u8[24], imm);
dst.u8[25] = max(a.u8[25], imm);
dst.u8[26] = max(a.u8[26], imm);
dst.u8[27] = max(a.u8[27], imm);
dst.u8[28] = max(a.u8[28], imm);
dst.u8[29] = max(a.u8[29], imm);
dst.u8[30] = max(a.u8[30], imm);
dst.u8[31] = max(a.u8[31], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxmaxi_u_b(a, imm) ((__m256i)__builtin_lasx_mxmaxi_u_b((v32u8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmaxi_u_d"></span>

## __m256i __lasx_mxmaxi_u_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxmaxi_u_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.u.d
Builtin: __builtin_lasx_mxmaxi_u_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:520
```

### Description

Select the lane-wise maximum of unsigned integer operands on 4 x u64 lanes.

### Operation

```c
dst.u64[0] = max(a.u64[0], imm);
dst.u64[1] = max(a.u64[1], imm);
dst.u64[2] = max(a.u64[2], imm);
dst.u64[3] = max(a.u64[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxmaxi_u_d(a, imm) ((__m256i)__builtin_lasx_mxmaxi_u_d((v4u64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmaxi_u_h"></span>

## __m256i __lasx_mxmaxi_u_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxmaxi_u_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.u.h
Builtin: __builtin_lasx_mxmaxi_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:518
```

### Description

Select the lane-wise maximum of unsigned integer operands on 16 x u16 lanes.

### Operation

```c
dst.u16[0] = max(a.u16[0], imm);
dst.u16[1] = max(a.u16[1], imm);
dst.u16[2] = max(a.u16[2], imm);
dst.u16[3] = max(a.u16[3], imm);
dst.u16[4] = max(a.u16[4], imm);
dst.u16[5] = max(a.u16[5], imm);
dst.u16[6] = max(a.u16[6], imm);
dst.u16[7] = max(a.u16[7], imm);
dst.u16[8] = max(a.u16[8], imm);
dst.u16[9] = max(a.u16[9], imm);
dst.u16[10] = max(a.u16[10], imm);
dst.u16[11] = max(a.u16[11], imm);
dst.u16[12] = max(a.u16[12], imm);
dst.u16[13] = max(a.u16[13], imm);
dst.u16[14] = max(a.u16[14], imm);
dst.u16[15] = max(a.u16[15], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxmaxi_u_h(a, imm) ((__m256i)__builtin_lasx_mxmaxi_u_h((v16u16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmaxi_u_w"></span>

## __m256i __lasx_mxmaxi_u_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxmaxi_u_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.u.w
Builtin: __builtin_lasx_mxmaxi_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:519
```

### Description

Select the lane-wise maximum of unsigned integer operands on 8 x u32 lanes.

### Operation

```c
dst.u32[0] = max(a.u32[0], imm);
dst.u32[1] = max(a.u32[1], imm);
dst.u32[2] = max(a.u32[2], imm);
dst.u32[3] = max(a.u32[3], imm);
dst.u32[4] = max(a.u32[4], imm);
dst.u32[5] = max(a.u32[5], imm);
dst.u32[6] = max(a.u32[6], imm);
dst.u32[7] = max(a.u32[7], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxmaxi_u_w(a, imm) ((__m256i)__builtin_lasx_mxmaxi_u_w((v8u32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmin_a_b"></span>

## __m256i __lasx_mxmin_a_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmin_a_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmin.a.b
Builtin: __builtin_lasx_mxmin_a_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:614
```

### Description

Select the lane-wise minimum of modular integer operands on 32 x u8 lanes.

### Operation

```c
dst.u8[0] = min(a.i8[0], b.i8[0]);
dst.u8[1] = min(a.i8[1], b.i8[1]);
dst.u8[2] = min(a.i8[2], b.i8[2]);
dst.u8[3] = min(a.i8[3], b.i8[3]);
dst.u8[4] = min(a.i8[4], b.i8[4]);
dst.u8[5] = min(a.i8[5], b.i8[5]);
dst.u8[6] = min(a.i8[6], b.i8[6]);
dst.u8[7] = min(a.i8[7], b.i8[7]);
dst.u8[8] = min(a.i8[8], b.i8[8]);
dst.u8[9] = min(a.i8[9], b.i8[9]);
dst.u8[10] = min(a.i8[10], b.i8[10]);
dst.u8[11] = min(a.i8[11], b.i8[11]);
dst.u8[12] = min(a.i8[12], b.i8[12]);
dst.u8[13] = min(a.i8[13], b.i8[13]);
dst.u8[14] = min(a.i8[14], b.i8[14]);
dst.u8[15] = min(a.i8[15], b.i8[15]);
dst.u8[16] = min(a.i8[16], b.i8[16]);
dst.u8[17] = min(a.i8[17], b.i8[17]);
dst.u8[18] = min(a.i8[18], b.i8[18]);
dst.u8[19] = min(a.i8[19], b.i8[19]);
dst.u8[20] = min(a.i8[20], b.i8[20]);
dst.u8[21] = min(a.i8[21], b.i8[21]);
dst.u8[22] = min(a.i8[22], b.i8[22]);
dst.u8[23] = min(a.i8[23], b.i8[23]);
dst.u8[24] = min(a.i8[24], b.i8[24]);
dst.u8[25] = min(a.i8[25], b.i8[25]);
dst.u8[26] = min(a.i8[26], b.i8[26]);
dst.u8[27] = min(a.i8[27], b.i8[27]);
dst.u8[28] = min(a.i8[28], b.i8[28]);
dst.u8[29] = min(a.i8[29], b.i8[29]);
dst.u8[30] = min(a.i8[30], b.i8[30]);
dst.u8[31] = min(a.i8[31], b.i8[31]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_a_b((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxmin_a_d"></span>

## __m256i __lasx_mxmin_a_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmin_a_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmin.a.d
Builtin: __builtin_lasx_mxmin_a_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:635
```

### Description

Select the lane-wise minimum of modular integer operands on 4 x u64 lanes.

### Operation

```c
dst.u64[0] = min(a.i64[0], b.i64[0]);
dst.u64[1] = min(a.i64[1], b.i64[1]);
dst.u64[2] = min(a.i64[2], b.i64[2]);
dst.u64[3] = min(a.i64[3], b.i64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_a_d((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxmin_a_h"></span>

## __m256i __lasx_mxmin_a_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmin_a_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmin.a.h
Builtin: __builtin_lasx_mxmin_a_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:621
```

### Description

Select the lane-wise minimum of modular integer operands on 16 x u16 lanes.

### Operation

```c
dst.u16[0] = min(a.i16[0], b.i16[0]);
dst.u16[1] = min(a.i16[1], b.i16[1]);
dst.u16[2] = min(a.i16[2], b.i16[2]);
dst.u16[3] = min(a.i16[3], b.i16[3]);
dst.u16[4] = min(a.i16[4], b.i16[4]);
dst.u16[5] = min(a.i16[5], b.i16[5]);
dst.u16[6] = min(a.i16[6], b.i16[6]);
dst.u16[7] = min(a.i16[7], b.i16[7]);
dst.u16[8] = min(a.i16[8], b.i16[8]);
dst.u16[9] = min(a.i16[9], b.i16[9]);
dst.u16[10] = min(a.i16[10], b.i16[10]);
dst.u16[11] = min(a.i16[11], b.i16[11]);
dst.u16[12] = min(a.i16[12], b.i16[12]);
dst.u16[13] = min(a.i16[13], b.i16[13]);
dst.u16[14] = min(a.i16[14], b.i16[14]);
dst.u16[15] = min(a.i16[15], b.i16[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_a_h((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxmin_a_w"></span>

## __m256i __lasx_mxmin_a_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmin_a_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmin.a.w
Builtin: __builtin_lasx_mxmin_a_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:628
```

### Description

Select the lane-wise minimum of modular integer operands on 8 x u32 lanes.

### Operation

```c
dst.u32[0] = min(a.i32[0], b.i32[0]);
dst.u32[1] = min(a.i32[1], b.i32[1]);
dst.u32[2] = min(a.i32[2], b.i32[2]);
dst.u32[3] = min(a.i32[3], b.i32[3]);
dst.u32[4] = min(a.i32[4], b.i32[4]);
dst.u32[5] = min(a.i32[5], b.i32[5]);
dst.u32[6] = min(a.i32[6], b.i32[6]);
dst.u32[7] = min(a.i32[7], b.i32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_a_w((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxmin_s_b"></span>

## __m256i __lasx_mxmin_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmin_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmin.s.b
Builtin: __builtin_lasx_mxmin_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:522
```

### Description

Select the lane-wise minimum of signed integer operands on 32 x i8 lanes.

### Operation

```c
dst.i8[0] = min(a.i8[0], b.i8[0]);
dst.i8[1] = min(a.i8[1], b.i8[1]);
dst.i8[2] = min(a.i8[2], b.i8[2]);
dst.i8[3] = min(a.i8[3], b.i8[3]);
dst.i8[4] = min(a.i8[4], b.i8[4]);
dst.i8[5] = min(a.i8[5], b.i8[5]);
dst.i8[6] = min(a.i8[6], b.i8[6]);
dst.i8[7] = min(a.i8[7], b.i8[7]);
dst.i8[8] = min(a.i8[8], b.i8[8]);
dst.i8[9] = min(a.i8[9], b.i8[9]);
dst.i8[10] = min(a.i8[10], b.i8[10]);
dst.i8[11] = min(a.i8[11], b.i8[11]);
dst.i8[12] = min(a.i8[12], b.i8[12]);
dst.i8[13] = min(a.i8[13], b.i8[13]);
dst.i8[14] = min(a.i8[14], b.i8[14]);
dst.i8[15] = min(a.i8[15], b.i8[15]);
dst.i8[16] = min(a.i8[16], b.i8[16]);
dst.i8[17] = min(a.i8[17], b.i8[17]);
dst.i8[18] = min(a.i8[18], b.i8[18]);
dst.i8[19] = min(a.i8[19], b.i8[19]);
dst.i8[20] = min(a.i8[20], b.i8[20]);
dst.i8[21] = min(a.i8[21], b.i8[21]);
dst.i8[22] = min(a.i8[22], b.i8[22]);
dst.i8[23] = min(a.i8[23], b.i8[23]);
dst.i8[24] = min(a.i8[24], b.i8[24]);
dst.i8[25] = min(a.i8[25], b.i8[25]);
dst.i8[26] = min(a.i8[26], b.i8[26]);
dst.i8[27] = min(a.i8[27], b.i8[27]);
dst.i8[28] = min(a.i8[28], b.i8[28]);
dst.i8[29] = min(a.i8[29], b.i8[29]);
dst.i8[30] = min(a.i8[30], b.i8[30]);
dst.i8[31] = min(a.i8[31], b.i8[31]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_s_b((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxmin_s_d"></span>

## __m256i __lasx_mxmin_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmin_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmin.s.d
Builtin: __builtin_lasx_mxmin_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:543
```

### Description

Select the lane-wise minimum of signed integer operands on 4 x i64 lanes.

### Operation

```c
dst.i64[0] = min(a.i64[0], b.i64[0]);
dst.i64[1] = min(a.i64[1], b.i64[1]);
dst.i64[2] = min(a.i64[2], b.i64[2]);
dst.i64[3] = min(a.i64[3], b.i64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_s_d((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_mxmin_s_h"></span>

## __m256i __lasx_mxmin_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmin_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmin.s.h
Builtin: __builtin_lasx_mxmin_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:529
```

### Description

Select the lane-wise minimum of signed integer operands on 16 x i16 lanes.

### Operation

```c
dst.i16[0] = min(a.i16[0], b.i16[0]);
dst.i16[1] = min(a.i16[1], b.i16[1]);
dst.i16[2] = min(a.i16[2], b.i16[2]);
dst.i16[3] = min(a.i16[3], b.i16[3]);
dst.i16[4] = min(a.i16[4], b.i16[4]);
dst.i16[5] = min(a.i16[5], b.i16[5]);
dst.i16[6] = min(a.i16[6], b.i16[6]);
dst.i16[7] = min(a.i16[7], b.i16[7]);
dst.i16[8] = min(a.i16[8], b.i16[8]);
dst.i16[9] = min(a.i16[9], b.i16[9]);
dst.i16[10] = min(a.i16[10], b.i16[10]);
dst.i16[11] = min(a.i16[11], b.i16[11]);
dst.i16[12] = min(a.i16[12], b.i16[12]);
dst.i16[13] = min(a.i16[13], b.i16[13]);
dst.i16[14] = min(a.i16[14], b.i16[14]);
dst.i16[15] = min(a.i16[15], b.i16[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_s_h((v16i16)a, (v16i16)b);
```

<span id="intrinsic-__lasx_mxmin_s_w"></span>

## __m256i __lasx_mxmin_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmin_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmin.s.w
Builtin: __builtin_lasx_mxmin_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:536
```

### Description

Select the lane-wise minimum of signed integer operands on 8 x i32 lanes.

### Operation

```c
dst.i32[0] = min(a.i32[0], b.i32[0]);
dst.i32[1] = min(a.i32[1], b.i32[1]);
dst.i32[2] = min(a.i32[2], b.i32[2]);
dst.i32[3] = min(a.i32[3], b.i32[3]);
dst.i32[4] = min(a.i32[4], b.i32[4]);
dst.i32[5] = min(a.i32[5], b.i32[5]);
dst.i32[6] = min(a.i32[6], b.i32[6]);
dst.i32[7] = min(a.i32[7], b.i32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_s_w((v8i32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_mxmin_u_b"></span>

## __m256i __lasx_mxmin_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmin_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmin.u.b
Builtin: __builtin_lasx_mxmin_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:554
```

### Description

Select the lane-wise minimum of unsigned integer operands on 32 x u8 lanes.

### Operation

```c
dst.u8[0] = min(a.u8[0], b.u8[0]);
dst.u8[1] = min(a.u8[1], b.u8[1]);
dst.u8[2] = min(a.u8[2], b.u8[2]);
dst.u8[3] = min(a.u8[3], b.u8[3]);
dst.u8[4] = min(a.u8[4], b.u8[4]);
dst.u8[5] = min(a.u8[5], b.u8[5]);
dst.u8[6] = min(a.u8[6], b.u8[6]);
dst.u8[7] = min(a.u8[7], b.u8[7]);
dst.u8[8] = min(a.u8[8], b.u8[8]);
dst.u8[9] = min(a.u8[9], b.u8[9]);
dst.u8[10] = min(a.u8[10], b.u8[10]);
dst.u8[11] = min(a.u8[11], b.u8[11]);
dst.u8[12] = min(a.u8[12], b.u8[12]);
dst.u8[13] = min(a.u8[13], b.u8[13]);
dst.u8[14] = min(a.u8[14], b.u8[14]);
dst.u8[15] = min(a.u8[15], b.u8[15]);
dst.u8[16] = min(a.u8[16], b.u8[16]);
dst.u8[17] = min(a.u8[17], b.u8[17]);
dst.u8[18] = min(a.u8[18], b.u8[18]);
dst.u8[19] = min(a.u8[19], b.u8[19]);
dst.u8[20] = min(a.u8[20], b.u8[20]);
dst.u8[21] = min(a.u8[21], b.u8[21]);
dst.u8[22] = min(a.u8[22], b.u8[22]);
dst.u8[23] = min(a.u8[23], b.u8[23]);
dst.u8[24] = min(a.u8[24], b.u8[24]);
dst.u8[25] = min(a.u8[25], b.u8[25]);
dst.u8[26] = min(a.u8[26], b.u8[26]);
dst.u8[27] = min(a.u8[27], b.u8[27]);
dst.u8[28] = min(a.u8[28], b.u8[28]);
dst.u8[29] = min(a.u8[29], b.u8[29]);
dst.u8[30] = min(a.u8[30], b.u8[30]);
dst.u8[31] = min(a.u8[31], b.u8[31]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_u_b((v32u8)a, (v32u8)b);
```

<span id="intrinsic-__lasx_mxmin_u_d"></span>

## __m256i __lasx_mxmin_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmin_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmin.u.d
Builtin: __builtin_lasx_mxmin_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:575
```

### Description

Select the lane-wise minimum of unsigned integer operands on 4 x u64 lanes.

### Operation

```c
dst.u64[0] = min(a.u64[0], b.u64[0]);
dst.u64[1] = min(a.u64[1], b.u64[1]);
dst.u64[2] = min(a.u64[2], b.u64[2]);
dst.u64[3] = min(a.u64[3], b.u64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_u_d((v4u64)a, (v4u64)b);
```

<span id="intrinsic-__lasx_mxmin_u_h"></span>

## __m256i __lasx_mxmin_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmin_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmin.u.h
Builtin: __builtin_lasx_mxmin_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:561
```

### Description

Select the lane-wise minimum of unsigned integer operands on 16 x u16 lanes.

### Operation

```c
dst.u16[0] = min(a.u16[0], b.u16[0]);
dst.u16[1] = min(a.u16[1], b.u16[1]);
dst.u16[2] = min(a.u16[2], b.u16[2]);
dst.u16[3] = min(a.u16[3], b.u16[3]);
dst.u16[4] = min(a.u16[4], b.u16[4]);
dst.u16[5] = min(a.u16[5], b.u16[5]);
dst.u16[6] = min(a.u16[6], b.u16[6]);
dst.u16[7] = min(a.u16[7], b.u16[7]);
dst.u16[8] = min(a.u16[8], b.u16[8]);
dst.u16[9] = min(a.u16[9], b.u16[9]);
dst.u16[10] = min(a.u16[10], b.u16[10]);
dst.u16[11] = min(a.u16[11], b.u16[11]);
dst.u16[12] = min(a.u16[12], b.u16[12]);
dst.u16[13] = min(a.u16[13], b.u16[13]);
dst.u16[14] = min(a.u16[14], b.u16[14]);
dst.u16[15] = min(a.u16[15], b.u16[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_u_h((v16u16)a, (v16u16)b);
```

<span id="intrinsic-__lasx_mxmin_u_w"></span>

## __m256i __lasx_mxmin_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmin_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmin.u.w
Builtin: __builtin_lasx_mxmin_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:568
```

### Description

Select the lane-wise minimum of unsigned integer operands on 8 x u32 lanes.

### Operation

```c
dst.u32[0] = min(a.u32[0], b.u32[0]);
dst.u32[1] = min(a.u32[1], b.u32[1]);
dst.u32[2] = min(a.u32[2], b.u32[2]);
dst.u32[3] = min(a.u32[3], b.u32[3]);
dst.u32[4] = min(a.u32[4], b.u32[4]);
dst.u32[5] = min(a.u32[5], b.u32[5]);
dst.u32[6] = min(a.u32[6], b.u32[6]);
dst.u32[7] = min(a.u32[7], b.u32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_u_w((v8u32)a, (v8u32)b);
```

<span id="intrinsic-__lasx_mxmini_s_b"></span>

## __m256i __lasx_mxmini_s_b (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxmini_s_b (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxmini.s.b
Builtin: __builtin_lasx_mxmini_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:549
```

### Description

Select the lane-wise minimum of signed integer operands on 32 x i8 lanes.

### Operation

```c
dst.i8[0] = min(a.i8[0], imm);
dst.i8[1] = min(a.i8[1], imm);
dst.i8[2] = min(a.i8[2], imm);
dst.i8[3] = min(a.i8[3], imm);
dst.i8[4] = min(a.i8[4], imm);
dst.i8[5] = min(a.i8[5], imm);
dst.i8[6] = min(a.i8[6], imm);
dst.i8[7] = min(a.i8[7], imm);
dst.i8[8] = min(a.i8[8], imm);
dst.i8[9] = min(a.i8[9], imm);
dst.i8[10] = min(a.i8[10], imm);
dst.i8[11] = min(a.i8[11], imm);
dst.i8[12] = min(a.i8[12], imm);
dst.i8[13] = min(a.i8[13], imm);
dst.i8[14] = min(a.i8[14], imm);
dst.i8[15] = min(a.i8[15], imm);
dst.i8[16] = min(a.i8[16], imm);
dst.i8[17] = min(a.i8[17], imm);
dst.i8[18] = min(a.i8[18], imm);
dst.i8[19] = min(a.i8[19], imm);
dst.i8[20] = min(a.i8[20], imm);
dst.i8[21] = min(a.i8[21], imm);
dst.i8[22] = min(a.i8[22], imm);
dst.i8[23] = min(a.i8[23], imm);
dst.i8[24] = min(a.i8[24], imm);
dst.i8[25] = min(a.i8[25], imm);
dst.i8[26] = min(a.i8[26], imm);
dst.i8[27] = min(a.i8[27], imm);
dst.i8[28] = min(a.i8[28], imm);
dst.i8[29] = min(a.i8[29], imm);
dst.i8[30] = min(a.i8[30], imm);
dst.i8[31] = min(a.i8[31], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxmini_s_b(a, imm) ((__m256i)__builtin_lasx_mxmini_s_b((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmini_s_d"></span>

## __m256i __lasx_mxmini_s_d (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxmini_s_d (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxmini.s.d
Builtin: __builtin_lasx_mxmini_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:552
```

### Description

Select the lane-wise minimum of signed integer operands on 4 x i64 lanes.

### Operation

```c
dst.i64[0] = min(a.i64[0], imm);
dst.i64[1] = min(a.i64[1], imm);
dst.i64[2] = min(a.i64[2], imm);
dst.i64[3] = min(a.i64[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxmini_s_d(a, imm) ((__m256i)__builtin_lasx_mxmini_s_d((v4i64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmini_s_h"></span>

## __m256i __lasx_mxmini_s_h (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxmini_s_h (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxmini.s.h
Builtin: __builtin_lasx_mxmini_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:550
```

### Description

Select the lane-wise minimum of signed integer operands on 16 x i16 lanes.

### Operation

```c
dst.i16[0] = min(a.i16[0], imm);
dst.i16[1] = min(a.i16[1], imm);
dst.i16[2] = min(a.i16[2], imm);
dst.i16[3] = min(a.i16[3], imm);
dst.i16[4] = min(a.i16[4], imm);
dst.i16[5] = min(a.i16[5], imm);
dst.i16[6] = min(a.i16[6], imm);
dst.i16[7] = min(a.i16[7], imm);
dst.i16[8] = min(a.i16[8], imm);
dst.i16[9] = min(a.i16[9], imm);
dst.i16[10] = min(a.i16[10], imm);
dst.i16[11] = min(a.i16[11], imm);
dst.i16[12] = min(a.i16[12], imm);
dst.i16[13] = min(a.i16[13], imm);
dst.i16[14] = min(a.i16[14], imm);
dst.i16[15] = min(a.i16[15], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxmini_s_h(a, imm) ((__m256i)__builtin_lasx_mxmini_s_h((v16i16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmini_s_w"></span>

## __m256i __lasx_mxmini_s_w (__m256i a, signed char imm)

### Synopsis

```c
__m256i __lasx_mxmini_s_w (__m256i a, signed char imm)
#include <loongson-asxintrin.h>
Instruction: mxmini.s.w
Builtin: __builtin_lasx_mxmini_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:551
```

### Description

Select the lane-wise minimum of signed integer operands on 8 x i32 lanes.

### Operation

```c
dst.i32[0] = min(a.i32[0], imm);
dst.i32[1] = min(a.i32[1], imm);
dst.i32[2] = min(a.i32[2], imm);
dst.i32[3] = min(a.i32[3], imm);
dst.i32[4] = min(a.i32[4], imm);
dst.i32[5] = min(a.i32[5], imm);
dst.i32[6] = min(a.i32[6], imm);
dst.i32[7] = min(a.i32[7], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxmini_s_w(a, imm) ((__m256i)__builtin_lasx_mxmini_s_w((v8i32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmini_u_b"></span>

## __m256i __lasx_mxmini_u_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxmini_u_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxmini.u.b
Builtin: __builtin_lasx_mxmini_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:581
```

### Description

Select the lane-wise minimum of unsigned integer operands on 32 x u8 lanes.

### Operation

```c
dst.u8[0] = min(a.u8[0], imm);
dst.u8[1] = min(a.u8[1], imm);
dst.u8[2] = min(a.u8[2], imm);
dst.u8[3] = min(a.u8[3], imm);
dst.u8[4] = min(a.u8[4], imm);
dst.u8[5] = min(a.u8[5], imm);
dst.u8[6] = min(a.u8[6], imm);
dst.u8[7] = min(a.u8[7], imm);
dst.u8[8] = min(a.u8[8], imm);
dst.u8[9] = min(a.u8[9], imm);
dst.u8[10] = min(a.u8[10], imm);
dst.u8[11] = min(a.u8[11], imm);
dst.u8[12] = min(a.u8[12], imm);
dst.u8[13] = min(a.u8[13], imm);
dst.u8[14] = min(a.u8[14], imm);
dst.u8[15] = min(a.u8[15], imm);
dst.u8[16] = min(a.u8[16], imm);
dst.u8[17] = min(a.u8[17], imm);
dst.u8[18] = min(a.u8[18], imm);
dst.u8[19] = min(a.u8[19], imm);
dst.u8[20] = min(a.u8[20], imm);
dst.u8[21] = min(a.u8[21], imm);
dst.u8[22] = min(a.u8[22], imm);
dst.u8[23] = min(a.u8[23], imm);
dst.u8[24] = min(a.u8[24], imm);
dst.u8[25] = min(a.u8[25], imm);
dst.u8[26] = min(a.u8[26], imm);
dst.u8[27] = min(a.u8[27], imm);
dst.u8[28] = min(a.u8[28], imm);
dst.u8[29] = min(a.u8[29], imm);
dst.u8[30] = min(a.u8[30], imm);
dst.u8[31] = min(a.u8[31], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxmini_u_b(a, imm) ((__m256i)__builtin_lasx_mxmini_u_b((v32u8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmini_u_d"></span>

## __m256i __lasx_mxmini_u_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxmini_u_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxmini.u.d
Builtin: __builtin_lasx_mxmini_u_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:584
```

### Description

Select the lane-wise minimum of unsigned integer operands on 4 x u64 lanes.

### Operation

```c
dst.u64[0] = min(a.u64[0], imm);
dst.u64[1] = min(a.u64[1], imm);
dst.u64[2] = min(a.u64[2], imm);
dst.u64[3] = min(a.u64[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxmini_u_d(a, imm) ((__m256i)__builtin_lasx_mxmini_u_d((v4u64)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmini_u_h"></span>

## __m256i __lasx_mxmini_u_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxmini_u_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxmini.u.h
Builtin: __builtin_lasx_mxmini_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:582
```

### Description

Select the lane-wise minimum of unsigned integer operands on 16 x u16 lanes.

### Operation

```c
dst.u16[0] = min(a.u16[0], imm);
dst.u16[1] = min(a.u16[1], imm);
dst.u16[2] = min(a.u16[2], imm);
dst.u16[3] = min(a.u16[3], imm);
dst.u16[4] = min(a.u16[4], imm);
dst.u16[5] = min(a.u16[5], imm);
dst.u16[6] = min(a.u16[6], imm);
dst.u16[7] = min(a.u16[7], imm);
dst.u16[8] = min(a.u16[8], imm);
dst.u16[9] = min(a.u16[9], imm);
dst.u16[10] = min(a.u16[10], imm);
dst.u16[11] = min(a.u16[11], imm);
dst.u16[12] = min(a.u16[12], imm);
dst.u16[13] = min(a.u16[13], imm);
dst.u16[14] = min(a.u16[14], imm);
dst.u16[15] = min(a.u16[15], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxmini_u_h(a, imm) ((__m256i)__builtin_lasx_mxmini_u_h((v16u16)(a), (imm)))
```

<span id="intrinsic-__lasx_mxmini_u_w"></span>

## __m256i __lasx_mxmini_u_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxmini_u_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxmini.u.w
Builtin: __builtin_lasx_mxmini_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:583
```

### Description

Select the lane-wise minimum of unsigned integer operands on 8 x u32 lanes.

### Operation

```c
dst.u32[0] = min(a.u32[0], imm);
dst.u32[1] = min(a.u32[1], imm);
dst.u32[2] = min(a.u32[2], imm);
dst.u32[3] = min(a.u32[3], imm);
dst.u32[4] = min(a.u32[4], imm);
dst.u32[5] = min(a.u32[5], imm);
dst.u32[6] = min(a.u32[6], imm);
dst.u32[7] = min(a.u32[7], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxmini_u_w(a, imm) ((__m256i)__builtin_lasx_mxmini_u_w((v8u32)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvhminposh_u_d"></span>

## __m256i __lasx_mxvhminposh_u_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvhminposh_u_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvhminposh.u.d
Builtin: __builtin_lasx_mxvhminposh_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3524
```

### Description

Select the lane-wise minimum of unsigned integer operands on 4 x u64 lanes.

### Operation

```c
dst.u64[0] = min(a.i16[0], b.u64[0]);
dst.u64[1] = min(a.i16[1], b.u64[1]);
dst.u64[2] = min(a.i16[2], b.u64[2]);
dst.u64[3] = min(a.i16[3], b.u64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvhminposh_u_d((v16i16)a);
```

<span id="intrinsic-__lasx_mxvhminposh_u_q"></span>

## __m256i __lasx_mxvhminposh_u_q (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvhminposh_u_q (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvhminposh.u.q
Builtin: __builtin_lasx_mxvhminposh_u_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3538
```

### Description

Select the lane-wise minimum of unsigned integer operands on 2 x u128 lanes.

### Operation

```c
dst.u128[0] = min(a.i16[0], b.u128[0]);
dst.u128[1] = min(a.i16[1], b.u128[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvhminposh_u_q((v16i16)a);
```

<span id="intrinsic-__lasx_mxvhminposh_u_w"></span>

## __m256i __lasx_mxvhminposh_u_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvhminposh_u_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvhminposh.u.w
Builtin: __builtin_lasx_mxvhminposh_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3531
```

### Description

Select the lane-wise minimum of unsigned integer operands on 8 x u32 lanes.

### Operation

```c
dst.u32[0] = min(a.i16[0], b.u32[0]);
dst.u32[1] = min(a.i16[1], b.u32[1]);
dst.u32[2] = min(a.i16[2], b.u32[2]);
dst.u32[3] = min(a.i16[3], b.u32[3]);
dst.u32[4] = min(a.i16[4], b.u32[4]);
dst.u32[5] = min(a.i16[5], b.u32[5]);
dst.u32[6] = min(a.i16[6], b.u32[6]);
dst.u32[7] = min(a.i16[7], b.u32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvhminposh_u_w((v16i16)a);
```

