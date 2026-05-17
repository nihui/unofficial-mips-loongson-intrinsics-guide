# Integer Comparison

Generated from `include/loongson-mmiintrin.h`. This page contains 16 intrinsics.

<span id="intrinsic-pcmpeqb_s"></span>

## int8x8_t pcmpeqb_s (int8x8_t a, int8x8_t b)

### Synopsis

```c
int8x8_t pcmpeqb_s (int8x8_t a, int8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: pcmpeqb.s
Builtin: __builtin_loongson_pcmpeqb_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:245
```

### Description

Compare signed 8 x i8 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i8[0] = (a.i8[0] == b.i8[0]) ? all_ones : 0;
dst.i8[1] = (a.i8[1] == b.i8[1]) ? all_ones : 0;
dst.i8[2] = (a.i8[2] == b.i8[2]) ? all_ones : 0;
dst.i8[3] = (a.i8[3] == b.i8[3]) ? all_ones : 0;
dst.i8[4] = (a.i8[4] == b.i8[4]) ? all_ones : 0;
dst.i8[5] = (a.i8[5] == b.i8[5]) ? all_ones : 0;
dst.i8[6] = (a.i8[6] == b.i8[6]) ? all_ones : 0;
dst.i8[7] = (a.i8[7] == b.i8[7]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pcmpeqb_s (a, b);
```

<span id="intrinsic-pcmpeqb_u"></span>

## uint8x8_t pcmpeqb_u (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t pcmpeqb_u (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: pcmpeqb.u
Builtin: __builtin_loongson_pcmpeqb_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:227
```

### Description

Compare unsigned 8 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pcmpeqb_u (a, b);
```

<span id="intrinsic-pcmpeqh_s"></span>

## int16x4_t pcmpeqh_s (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t pcmpeqh_s (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pcmpeqh.s
Builtin: __builtin_loongson_pcmpeqh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:239
```

### Description

Compare signed 4 x i16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i16[0] = (a.i16[0] == b.i16[0]) ? all_ones : 0;
dst.i16[1] = (a.i16[1] == b.i16[1]) ? all_ones : 0;
dst.i16[2] = (a.i16[2] == b.i16[2]) ? all_ones : 0;
dst.i16[3] = (a.i16[3] == b.i16[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pcmpeqh_s (a, b);
```

<span id="intrinsic-pcmpeqh_u"></span>

## uint16x4_t pcmpeqh_u (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t pcmpeqh_u (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pcmpeqh.u
Builtin: __builtin_loongson_pcmpeqh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:221
```

### Description

Compare unsigned 4 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u16[0] = (a.u16[0] == b.u16[0]) ? all_ones : 0;
dst.u16[1] = (a.u16[1] == b.u16[1]) ? all_ones : 0;
dst.u16[2] = (a.u16[2] == b.u16[2]) ? all_ones : 0;
dst.u16[3] = (a.u16[3] == b.u16[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pcmpeqh_u (a, b);
```

<span id="intrinsic-pcmpeqw_s"></span>

## int32x2_t pcmpeqw_s (int32x2_t a, int32x2_t b)

### Synopsis

```c
int32x2_t pcmpeqw_s (int32x2_t a, int32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: pcmpeqw.s
Builtin: __builtin_loongson_pcmpeqw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:233
```

### Description

Compare signed 2 x i32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i32[0] = (a.i32[0] == b.i32[0]) ? all_ones : 0;
dst.i32[1] = (a.i32[1] == b.i32[1]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pcmpeqw_s (a, b);
```

<span id="intrinsic-pcmpeqw_u"></span>

## uint32x2_t pcmpeqw_u (uint32x2_t a, uint32x2_t b)

### Synopsis

```c
uint32x2_t pcmpeqw_u (uint32x2_t a, uint32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: pcmpeqw.u
Builtin: __builtin_loongson_pcmpeqw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:215
```

### Description

Compare unsigned 2 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] == b.u32[0]) ? all_ones : 0;
dst.u32[1] = (a.u32[1] == b.u32[1]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pcmpeqw_u (a, b);
```

<span id="intrinsic-pcmpgtb_s"></span>

## int8x8_t pcmpgtb_s (int8x8_t a, int8x8_t b)

### Synopsis

```c
int8x8_t pcmpgtb_s (int8x8_t a, int8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: pcmpgtb.s
Builtin: __builtin_loongson_pcmpgtb_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:282
```

### Description

Compare signed 8 x i8 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i8[0] = (a.i8[0] > b.i8[0]) ? all_ones : 0;
dst.i8[1] = (a.i8[1] > b.i8[1]) ? all_ones : 0;
dst.i8[2] = (a.i8[2] > b.i8[2]) ? all_ones : 0;
dst.i8[3] = (a.i8[3] > b.i8[3]) ? all_ones : 0;
dst.i8[4] = (a.i8[4] > b.i8[4]) ? all_ones : 0;
dst.i8[5] = (a.i8[5] > b.i8[5]) ? all_ones : 0;
dst.i8[6] = (a.i8[6] > b.i8[6]) ? all_ones : 0;
dst.i8[7] = (a.i8[7] > b.i8[7]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pcmpgtb_s (a, b);
```

<span id="intrinsic-pcmpgtb_u"></span>

## uint8x8_t pcmpgtb_u (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t pcmpgtb_u (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: pcmpgtb.u
Builtin: __builtin_loongson_pcmpgtb_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:264
```

### Description

Compare unsigned 8 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u8[0] = (a.u8[0] > b.u8[0]) ? all_ones : 0;
dst.u8[1] = (a.u8[1] > b.u8[1]) ? all_ones : 0;
dst.u8[2] = (a.u8[2] > b.u8[2]) ? all_ones : 0;
dst.u8[3] = (a.u8[3] > b.u8[3]) ? all_ones : 0;
dst.u8[4] = (a.u8[4] > b.u8[4]) ? all_ones : 0;
dst.u8[5] = (a.u8[5] > b.u8[5]) ? all_ones : 0;
dst.u8[6] = (a.u8[6] > b.u8[6]) ? all_ones : 0;
dst.u8[7] = (a.u8[7] > b.u8[7]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pcmpgtb_u (a, b);
```

<span id="intrinsic-pcmpgth_s"></span>

## int16x4_t pcmpgth_s (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t pcmpgth_s (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pcmpgth.s
Builtin: __builtin_loongson_pcmpgth_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:276
```

### Description

Compare signed 4 x i16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i16[0] = (a.i16[0] > b.i16[0]) ? all_ones : 0;
dst.i16[1] = (a.i16[1] > b.i16[1]) ? all_ones : 0;
dst.i16[2] = (a.i16[2] > b.i16[2]) ? all_ones : 0;
dst.i16[3] = (a.i16[3] > b.i16[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pcmpgth_s (a, b);
```

<span id="intrinsic-pcmpgth_u"></span>

## uint16x4_t pcmpgth_u (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t pcmpgth_u (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pcmpgth.u
Builtin: __builtin_loongson_pcmpgth_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:258
```

### Description

Compare unsigned 4 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u16[0] = (a.u16[0] > b.u16[0]) ? all_ones : 0;
dst.u16[1] = (a.u16[1] > b.u16[1]) ? all_ones : 0;
dst.u16[2] = (a.u16[2] > b.u16[2]) ? all_ones : 0;
dst.u16[3] = (a.u16[3] > b.u16[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pcmpgth_u (a, b);
```

<span id="intrinsic-pcmpgtw_s"></span>

## int32x2_t pcmpgtw_s (int32x2_t a, int32x2_t b)

### Synopsis

```c
int32x2_t pcmpgtw_s (int32x2_t a, int32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: pcmpgtw.s
Builtin: __builtin_loongson_pcmpgtw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:270
```

### Description

Compare signed 2 x i32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i32[0] = (a.i32[0] > b.i32[0]) ? all_ones : 0;
dst.i32[1] = (a.i32[1] > b.i32[1]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pcmpgtw_s (a, b);
```

<span id="intrinsic-pcmpgtw_u"></span>

## uint32x2_t pcmpgtw_u (uint32x2_t a, uint32x2_t b)

### Synopsis

```c
uint32x2_t pcmpgtw_u (uint32x2_t a, uint32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: pcmpgtw.u
Builtin: __builtin_loongson_pcmpgtw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:252
```

### Description

Compare unsigned 2 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] > b.u32[0]) ? all_ones : 0;
dst.u32[1] = (a.u32[1] > b.u32[1]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pcmpgtw_u (a, b);
```

<span id="intrinsic-pmaxsh"></span>

## int16x4_t pmaxsh (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t pmaxsh (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pmaxsh
Builtin: __builtin_loongson_pmaxsh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:358
```

### Description

Select the lane-wise maximum of modular integer operands on 4 x u16 lanes.

### Operation

```c
dst.u16[0] = max(a.i16[0], b.i16[0]);
dst.u16[1] = max(a.i16[1], b.i16[1]);
dst.u16[2] = max(a.i16[2], b.i16[2]);
dst.u16[3] = max(a.i16[3], b.i16[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pmaxsh (a, b);
```

<span id="intrinsic-pmaxub"></span>

## uint8x8_t pmaxub (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t pmaxub (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: pmaxub
Builtin: __builtin_loongson_pmaxub
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:365
```

### Description

Select the lane-wise maximum of modular integer operands on 8 x u8 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pmaxub (a, b);
```

<span id="intrinsic-pminsh"></span>

## int16x4_t pminsh (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t pminsh (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pminsh
Builtin: __builtin_loongson_pminsh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:372
```

### Description

Select the lane-wise minimum of modular integer operands on 4 x u16 lanes.

### Operation

```c
dst.u16[0] = min(a.i16[0], b.i16[0]);
dst.u16[1] = min(a.i16[1], b.i16[1]);
dst.u16[2] = min(a.i16[2], b.i16[2]);
dst.u16[3] = min(a.i16[3], b.i16[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pminsh (a, b);
```

<span id="intrinsic-pminub"></span>

## uint8x8_t pminub (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t pminub (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: pminub
Builtin: __builtin_loongson_pminub
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:379
```

### Description

Select the lane-wise minimum of modular integer operands on 8 x u8 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pminub (a, b);
```

