# Integer Comparison

Generated from `include/msa.h`. This page contains 80 intrinsics.

<span id="intrinsic-__msa_ceq_b"></span>

## v16i8 __msa_ceq_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_ceq_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: ceq.b
Builtin: __builtin_msa_ceq_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:188
```

### Description

Compare modular 16 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_ceq_b __builtin_msa_ceq_b
```

<span id="intrinsic-__msa_ceq_d"></span>

## v2i64 __msa_ceq_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_ceq_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: ceq.d
Builtin: __builtin_msa_ceq_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:191
```

### Description

Compare modular 2 x u64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u64[0] = (a.u64[0] == b.u64[0]) ? all_ones : 0;
dst.u64[1] = (a.u64[1] == b.u64[1]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_ceq_d __builtin_msa_ceq_d
```

<span id="intrinsic-__msa_ceq_h"></span>

## v8i16 __msa_ceq_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_ceq_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: ceq.h
Builtin: __builtin_msa_ceq_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:189
```

### Description

Compare modular 8 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_ceq_h __builtin_msa_ceq_h
```

<span id="intrinsic-__msa_ceq_w"></span>

## v4i32 __msa_ceq_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_ceq_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: ceq.w
Builtin: __builtin_msa_ceq_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:190
```

### Description

Compare modular 4 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] == b.u32[0]) ? all_ones : 0;
dst.u32[1] = (a.u32[1] == b.u32[1]) ? all_ones : 0;
dst.u32[2] = (a.u32[2] == b.u32[2]) ? all_ones : 0;
dst.u32[3] = (a.u32[3] == b.u32[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_ceq_w __builtin_msa_ceq_w
```

<span id="intrinsic-__msa_ceqi_b"></span>

## v16i8 __msa_ceqi_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_ceqi_b (v16i8 a, int imm)
#include <msa.h>
Instruction: ceqi.b
Builtin: __builtin_msa_ceqi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:192
```

### Description

Compare modular 16 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_ceqi_b __builtin_msa_ceqi_b
```

<span id="intrinsic-__msa_ceqi_d"></span>

## v2i64 __msa_ceqi_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_ceqi_d (v2i64 a, int imm)
#include <msa.h>
Instruction: ceqi.d
Builtin: __builtin_msa_ceqi_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:195
```

### Description

Compare modular 2 x u64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u64[0] = (a.u64[0] == imm) ? all_ones : 0;
dst.u64[1] = (a.u64[1] == imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_ceqi_d __builtin_msa_ceqi_d
```

<span id="intrinsic-__msa_ceqi_h"></span>

## v8i16 __msa_ceqi_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_ceqi_h (v8i16 a, int imm)
#include <msa.h>
Instruction: ceqi.h
Builtin: __builtin_msa_ceqi_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:193
```

### Description

Compare modular 8 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_ceqi_h __builtin_msa_ceqi_h
```

<span id="intrinsic-__msa_ceqi_w"></span>

## v4i32 __msa_ceqi_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_ceqi_w (v4i32 a, int imm)
#include <msa.h>
Instruction: ceqi.w
Builtin: __builtin_msa_ceqi_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:194
```

### Description

Compare modular 4 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] == imm) ? all_ones : 0;
dst.u32[1] = (a.u32[1] == imm) ? all_ones : 0;
dst.u32[2] = (a.u32[2] == imm) ? all_ones : 0;
dst.u32[3] = (a.u32[3] == imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_ceqi_w __builtin_msa_ceqi_w
```

<span id="intrinsic-__msa_cle_s_b"></span>

## v16i8 __msa_cle_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_cle_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: cle.s.b
Builtin: __builtin_msa_cle_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:212
```

### Description

Compare signed 16 x i8 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_cle_s_b __builtin_msa_cle_s_b
```

<span id="intrinsic-__msa_cle_s_d"></span>

## v2i64 __msa_cle_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_cle_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: cle.s.d
Builtin: __builtin_msa_cle_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:215
```

### Description

Compare signed 2 x i64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i64[0] = (a.i64[0] <= b.i64[0]) ? all_ones : 0;
dst.i64[1] = (a.i64[1] <= b.i64[1]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_cle_s_d __builtin_msa_cle_s_d
```

<span id="intrinsic-__msa_cle_s_h"></span>

## v8i16 __msa_cle_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_cle_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: cle.s.h
Builtin: __builtin_msa_cle_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:213
```

### Description

Compare signed 8 x i16 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_cle_s_h __builtin_msa_cle_s_h
```

<span id="intrinsic-__msa_cle_s_w"></span>

## v4i32 __msa_cle_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_cle_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: cle.s.w
Builtin: __builtin_msa_cle_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:214
```

### Description

Compare signed 4 x i32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i32[0] = (a.i32[0] <= b.i32[0]) ? all_ones : 0;
dst.i32[1] = (a.i32[1] <= b.i32[1]) ? all_ones : 0;
dst.i32[2] = (a.i32[2] <= b.i32[2]) ? all_ones : 0;
dst.i32[3] = (a.i32[3] <= b.i32[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_cle_s_w __builtin_msa_cle_s_w
```

<span id="intrinsic-__msa_cle_u_b"></span>

## v16i8 __msa_cle_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16i8 __msa_cle_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: cle.u.b
Builtin: __builtin_msa_cle_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:220
```

### Description

Compare unsigned 16 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_cle_u_b __builtin_msa_cle_u_b
```

<span id="intrinsic-__msa_cle_u_d"></span>

## v2i64 __msa_cle_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2i64 __msa_cle_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: cle.u.d
Builtin: __builtin_msa_cle_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:223
```

### Description

Compare unsigned 2 x u64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u64[0] = (a.u64[0] <= b.u64[0]) ? all_ones : 0;
dst.u64[1] = (a.u64[1] <= b.u64[1]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_cle_u_d __builtin_msa_cle_u_d
```

<span id="intrinsic-__msa_cle_u_h"></span>

## v8i16 __msa_cle_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8i16 __msa_cle_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: cle.u.h
Builtin: __builtin_msa_cle_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:221
```

### Description

Compare unsigned 8 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_cle_u_h __builtin_msa_cle_u_h
```

<span id="intrinsic-__msa_cle_u_w"></span>

## v4i32 __msa_cle_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4i32 __msa_cle_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: cle.u.w
Builtin: __builtin_msa_cle_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:222
```

### Description

Compare unsigned 4 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] <= b.u32[0]) ? all_ones : 0;
dst.u32[1] = (a.u32[1] <= b.u32[1]) ? all_ones : 0;
dst.u32[2] = (a.u32[2] <= b.u32[2]) ? all_ones : 0;
dst.u32[3] = (a.u32[3] <= b.u32[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_cle_u_w __builtin_msa_cle_u_w
```

<span id="intrinsic-__msa_clei_s_b"></span>

## v16i8 __msa_clei_s_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_clei_s_b (v16i8 a, int imm)
#include <msa.h>
Instruction: clei.s.b
Builtin: __builtin_msa_clei_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:216
```

### Description

Compare signed 16 x i8 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clei_s_b __builtin_msa_clei_s_b
```

<span id="intrinsic-__msa_clei_s_d"></span>

## v2i64 __msa_clei_s_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_clei_s_d (v2i64 a, int imm)
#include <msa.h>
Instruction: clei.s.d
Builtin: __builtin_msa_clei_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:219
```

### Description

Compare signed 2 x i64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i64[0] = (a.i64[0] <= imm) ? all_ones : 0;
dst.i64[1] = (a.i64[1] <= imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_clei_s_d __builtin_msa_clei_s_d
```

<span id="intrinsic-__msa_clei_s_h"></span>

## v8i16 __msa_clei_s_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_clei_s_h (v8i16 a, int imm)
#include <msa.h>
Instruction: clei.s.h
Builtin: __builtin_msa_clei_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:217
```

### Description

Compare signed 8 x i16 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clei_s_h __builtin_msa_clei_s_h
```

<span id="intrinsic-__msa_clei_s_w"></span>

## v4i32 __msa_clei_s_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_clei_s_w (v4i32 a, int imm)
#include <msa.h>
Instruction: clei.s.w
Builtin: __builtin_msa_clei_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:218
```

### Description

Compare signed 4 x i32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i32[0] = (a.i32[0] <= imm) ? all_ones : 0;
dst.i32[1] = (a.i32[1] <= imm) ? all_ones : 0;
dst.i32[2] = (a.i32[2] <= imm) ? all_ones : 0;
dst.i32[3] = (a.i32[3] <= imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clei_s_w __builtin_msa_clei_s_w
```

<span id="intrinsic-__msa_clei_u_b"></span>

## v16i8 __msa_clei_u_b (v16u8 a, int imm)

### Synopsis

```c
v16i8 __msa_clei_u_b (v16u8 a, int imm)
#include <msa.h>
Instruction: clei.u.b
Builtin: __builtin_msa_clei_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:224
```

### Description

Compare unsigned 16 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clei_u_b __builtin_msa_clei_u_b
```

<span id="intrinsic-__msa_clei_u_d"></span>

## v2i64 __msa_clei_u_d (v2u64 a, int imm)

### Synopsis

```c
v2i64 __msa_clei_u_d (v2u64 a, int imm)
#include <msa.h>
Instruction: clei.u.d
Builtin: __builtin_msa_clei_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:227
```

### Description

Compare unsigned 2 x u64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u64[0] = (a.u64[0] <= imm) ? all_ones : 0;
dst.u64[1] = (a.u64[1] <= imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_clei_u_d __builtin_msa_clei_u_d
```

<span id="intrinsic-__msa_clei_u_h"></span>

## v8i16 __msa_clei_u_h (v8u16 a, int imm)

### Synopsis

```c
v8i16 __msa_clei_u_h (v8u16 a, int imm)
#include <msa.h>
Instruction: clei.u.h
Builtin: __builtin_msa_clei_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:225
```

### Description

Compare unsigned 8 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clei_u_h __builtin_msa_clei_u_h
```

<span id="intrinsic-__msa_clei_u_w"></span>

## v4i32 __msa_clei_u_w (v4u32 a, int imm)

### Synopsis

```c
v4i32 __msa_clei_u_w (v4u32 a, int imm)
#include <msa.h>
Instruction: clei.u.w
Builtin: __builtin_msa_clei_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:226
```

### Description

Compare unsigned 4 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] <= imm) ? all_ones : 0;
dst.u32[1] = (a.u32[1] <= imm) ? all_ones : 0;
dst.u32[2] = (a.u32[2] <= imm) ? all_ones : 0;
dst.u32[3] = (a.u32[3] <= imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clei_u_w __builtin_msa_clei_u_w
```

<span id="intrinsic-__msa_clt_s_b"></span>

## v16i8 __msa_clt_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_clt_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: clt.s.b
Builtin: __builtin_msa_clt_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:196
```

### Description

Compare signed 16 x i8 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clt_s_b __builtin_msa_clt_s_b
```

<span id="intrinsic-__msa_clt_s_d"></span>

## v2i64 __msa_clt_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_clt_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: clt.s.d
Builtin: __builtin_msa_clt_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:199
```

### Description

Compare signed 2 x i64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i64[0] = (a.i64[0] < b.i64[0]) ? all_ones : 0;
dst.i64[1] = (a.i64[1] < b.i64[1]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_clt_s_d __builtin_msa_clt_s_d
```

<span id="intrinsic-__msa_clt_s_h"></span>

## v8i16 __msa_clt_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_clt_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: clt.s.h
Builtin: __builtin_msa_clt_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:197
```

### Description

Compare signed 8 x i16 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clt_s_h __builtin_msa_clt_s_h
```

<span id="intrinsic-__msa_clt_s_w"></span>

## v4i32 __msa_clt_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_clt_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: clt.s.w
Builtin: __builtin_msa_clt_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:198
```

### Description

Compare signed 4 x i32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i32[0] = (a.i32[0] < b.i32[0]) ? all_ones : 0;
dst.i32[1] = (a.i32[1] < b.i32[1]) ? all_ones : 0;
dst.i32[2] = (a.i32[2] < b.i32[2]) ? all_ones : 0;
dst.i32[3] = (a.i32[3] < b.i32[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clt_s_w __builtin_msa_clt_s_w
```

<span id="intrinsic-__msa_clt_u_b"></span>

## v16i8 __msa_clt_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16i8 __msa_clt_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: clt.u.b
Builtin: __builtin_msa_clt_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:204
```

### Description

Compare unsigned 16 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clt_u_b __builtin_msa_clt_u_b
```

<span id="intrinsic-__msa_clt_u_d"></span>

## v2i64 __msa_clt_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2i64 __msa_clt_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: clt.u.d
Builtin: __builtin_msa_clt_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:207
```

### Description

Compare unsigned 2 x u64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u64[0] = (a.u64[0] < b.u64[0]) ? all_ones : 0;
dst.u64[1] = (a.u64[1] < b.u64[1]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_clt_u_d __builtin_msa_clt_u_d
```

<span id="intrinsic-__msa_clt_u_h"></span>

## v8i16 __msa_clt_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8i16 __msa_clt_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: clt.u.h
Builtin: __builtin_msa_clt_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:205
```

### Description

Compare unsigned 8 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clt_u_h __builtin_msa_clt_u_h
```

<span id="intrinsic-__msa_clt_u_w"></span>

## v4i32 __msa_clt_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4i32 __msa_clt_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: clt.u.w
Builtin: __builtin_msa_clt_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:206
```

### Description

Compare unsigned 4 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] < b.u32[0]) ? all_ones : 0;
dst.u32[1] = (a.u32[1] < b.u32[1]) ? all_ones : 0;
dst.u32[2] = (a.u32[2] < b.u32[2]) ? all_ones : 0;
dst.u32[3] = (a.u32[3] < b.u32[3]) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clt_u_w __builtin_msa_clt_u_w
```

<span id="intrinsic-__msa_clti_s_b"></span>

## v16i8 __msa_clti_s_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_clti_s_b (v16i8 a, int imm)
#include <msa.h>
Instruction: clti.s.b
Builtin: __builtin_msa_clti_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:200
```

### Description

Compare signed 16 x i8 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clti_s_b __builtin_msa_clti_s_b
```

<span id="intrinsic-__msa_clti_s_d"></span>

## v2i64 __msa_clti_s_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_clti_s_d (v2i64 a, int imm)
#include <msa.h>
Instruction: clti.s.d
Builtin: __builtin_msa_clti_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:203
```

### Description

Compare signed 2 x i64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i64[0] = (a.i64[0] < imm) ? all_ones : 0;
dst.i64[1] = (a.i64[1] < imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_clti_s_d __builtin_msa_clti_s_d
```

<span id="intrinsic-__msa_clti_s_h"></span>

## v8i16 __msa_clti_s_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_clti_s_h (v8i16 a, int imm)
#include <msa.h>
Instruction: clti.s.h
Builtin: __builtin_msa_clti_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:201
```

### Description

Compare signed 8 x i16 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clti_s_h __builtin_msa_clti_s_h
```

<span id="intrinsic-__msa_clti_s_w"></span>

## v4i32 __msa_clti_s_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_clti_s_w (v4i32 a, int imm)
#include <msa.h>
Instruction: clti.s.w
Builtin: __builtin_msa_clti_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:202
```

### Description

Compare signed 4 x i32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.i32[0] = (a.i32[0] < imm) ? all_ones : 0;
dst.i32[1] = (a.i32[1] < imm) ? all_ones : 0;
dst.i32[2] = (a.i32[2] < imm) ? all_ones : 0;
dst.i32[3] = (a.i32[3] < imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clti_s_w __builtin_msa_clti_s_w
```

<span id="intrinsic-__msa_clti_u_b"></span>

## v16i8 __msa_clti_u_b (v16u8 a, int imm)

### Synopsis

```c
v16i8 __msa_clti_u_b (v16u8 a, int imm)
#include <msa.h>
Instruction: clti.u.b
Builtin: __builtin_msa_clti_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:208
```

### Description

Compare unsigned 16 x u8 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clti_u_b __builtin_msa_clti_u_b
```

<span id="intrinsic-__msa_clti_u_d"></span>

## v2i64 __msa_clti_u_d (v2u64 a, int imm)

### Synopsis

```c
v2i64 __msa_clti_u_d (v2u64 a, int imm)
#include <msa.h>
Instruction: clti.u.d
Builtin: __builtin_msa_clti_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:211
```

### Description

Compare unsigned 2 x u64 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u64[0] = (a.u64[0] < imm) ? all_ones : 0;
dst.u64[1] = (a.u64[1] < imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_clti_u_d __builtin_msa_clti_u_d
```

<span id="intrinsic-__msa_clti_u_h"></span>

## v8i16 __msa_clti_u_h (v8u16 a, int imm)

### Synopsis

```c
v8i16 __msa_clti_u_h (v8u16 a, int imm)
#include <msa.h>
Instruction: clti.u.h
Builtin: __builtin_msa_clti_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:209
```

### Description

Compare unsigned 8 x u16 lanes and produce all-ones elements for true lanes, zero for false lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clti_u_h __builtin_msa_clti_u_h
```

<span id="intrinsic-__msa_clti_u_w"></span>

## v4i32 __msa_clti_u_w (v4u32 a, int imm)

### Synopsis

```c
v4i32 __msa_clti_u_w (v4u32 a, int imm)
#include <msa.h>
Instruction: clti.u.w
Builtin: __builtin_msa_clti_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:210
```

### Description

Compare unsigned 4 x u32 lanes and produce all-ones elements for true lanes, zero for false lanes.

### Operation

```c
dst.u32[0] = (a.u32[0] < imm) ? all_ones : 0;
dst.u32[1] = (a.u32[1] < imm) ? all_ones : 0;
dst.u32[2] = (a.u32[2] < imm) ? all_ones : 0;
dst.u32[3] = (a.u32[3] < imm) ? all_ones : 0;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_clti_u_w __builtin_msa_clti_u_w
```

<span id="intrinsic-__msa_max_a_b"></span>

## v16i8 __msa_max_a_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_max_a_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: max.a.b
Builtin: __builtin_msa_max_a_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:180
```

### Description

Select the lane-wise maximum of modular integer operands on 16 x u8 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_max_a_b __builtin_msa_max_a_b
```

<span id="intrinsic-__msa_max_a_d"></span>

## v2i64 __msa_max_a_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_max_a_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: max.a.d
Builtin: __builtin_msa_max_a_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:183
```

### Description

Select the lane-wise maximum of modular integer operands on 2 x u64 lanes.

### Operation

```c
dst.u64[0] = max(a.i64[0], b.i64[0]);
dst.u64[1] = max(a.i64[1], b.i64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_max_a_d __builtin_msa_max_a_d
```

<span id="intrinsic-__msa_max_a_h"></span>

## v8i16 __msa_max_a_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_max_a_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: max.a.h
Builtin: __builtin_msa_max_a_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:181
```

### Description

Select the lane-wise maximum of modular integer operands on 8 x u16 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_max_a_h __builtin_msa_max_a_h
```

<span id="intrinsic-__msa_max_a_w"></span>

## v4i32 __msa_max_a_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_max_a_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: max.a.w
Builtin: __builtin_msa_max_a_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:182
```

### Description

Select the lane-wise maximum of modular integer operands on 4 x u32 lanes.

### Operation

```c
dst.u32[0] = max(a.i32[0], b.i32[0]);
dst.u32[1] = max(a.i32[1], b.i32[1]);
dst.u32[2] = max(a.i32[2], b.i32[2]);
dst.u32[3] = max(a.i32[3], b.i32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_max_a_w __builtin_msa_max_a_w
```

<span id="intrinsic-__msa_max_s_b"></span>

## v16i8 __msa_max_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_max_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: max.s.b
Builtin: __builtin_msa_max_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:148
```

### Description

Select the lane-wise maximum of signed integer operands on 16 x i8 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_max_s_b __builtin_msa_max_s_b
```

<span id="intrinsic-__msa_max_s_d"></span>

## v2i64 __msa_max_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_max_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: max.s.d
Builtin: __builtin_msa_max_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:151
```

### Description

Select the lane-wise maximum of signed integer operands on 2 x i64 lanes.

### Operation

```c
dst.i64[0] = max(a.i64[0], b.i64[0]);
dst.i64[1] = max(a.i64[1], b.i64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_max_s_d __builtin_msa_max_s_d
```

<span id="intrinsic-__msa_max_s_h"></span>

## v8i16 __msa_max_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_max_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: max.s.h
Builtin: __builtin_msa_max_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:149
```

### Description

Select the lane-wise maximum of signed integer operands on 8 x i16 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_max_s_h __builtin_msa_max_s_h
```

<span id="intrinsic-__msa_max_s_w"></span>

## v4i32 __msa_max_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_max_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: max.s.w
Builtin: __builtin_msa_max_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:150
```

### Description

Select the lane-wise maximum of signed integer operands on 4 x i32 lanes.

### Operation

```c
dst.i32[0] = max(a.i32[0], b.i32[0]);
dst.i32[1] = max(a.i32[1], b.i32[1]);
dst.i32[2] = max(a.i32[2], b.i32[2]);
dst.i32[3] = max(a.i32[3], b.i32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_max_s_w __builtin_msa_max_s_w
```

<span id="intrinsic-__msa_max_u_b"></span>

## v16u8 __msa_max_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_max_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: max.u.b
Builtin: __builtin_msa_max_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:156
```

### Description

Select the lane-wise maximum of unsigned integer operands on 16 x u8 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_max_u_b __builtin_msa_max_u_b
```

<span id="intrinsic-__msa_max_u_d"></span>

## v2u64 __msa_max_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_max_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: max.u.d
Builtin: __builtin_msa_max_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:159
```

### Description

Select the lane-wise maximum of unsigned integer operands on 2 x u64 lanes.

### Operation

```c
dst.u64[0] = max(a.u64[0], b.u64[0]);
dst.u64[1] = max(a.u64[1], b.u64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_max_u_d __builtin_msa_max_u_d
```

<span id="intrinsic-__msa_max_u_h"></span>

## v8u16 __msa_max_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_max_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: max.u.h
Builtin: __builtin_msa_max_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:157
```

### Description

Select the lane-wise maximum of unsigned integer operands on 8 x u16 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_max_u_h __builtin_msa_max_u_h
```

<span id="intrinsic-__msa_max_u_w"></span>

## v4u32 __msa_max_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_max_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: max.u.w
Builtin: __builtin_msa_max_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:158
```

### Description

Select the lane-wise maximum of unsigned integer operands on 4 x u32 lanes.

### Operation

```c
dst.u32[0] = max(a.u32[0], b.u32[0]);
dst.u32[1] = max(a.u32[1], b.u32[1]);
dst.u32[2] = max(a.u32[2], b.u32[2]);
dst.u32[3] = max(a.u32[3], b.u32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_max_u_w __builtin_msa_max_u_w
```

<span id="intrinsic-__msa_maxi_s_b"></span>

## v16i8 __msa_maxi_s_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_maxi_s_b (v16i8 a, int imm)
#include <msa.h>
Instruction: maxi.s.b
Builtin: __builtin_msa_maxi_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:152
```

### Description

Select the lane-wise maximum of signed integer operands on 16 x i8 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_maxi_s_b __builtin_msa_maxi_s_b
```

<span id="intrinsic-__msa_maxi_s_d"></span>

## v2i64 __msa_maxi_s_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_maxi_s_d (v2i64 a, int imm)
#include <msa.h>
Instruction: maxi.s.d
Builtin: __builtin_msa_maxi_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:155
```

### Description

Select the lane-wise maximum of signed integer operands on 2 x i64 lanes.

### Operation

```c
dst.i64[0] = max(a.i64[0], imm);
dst.i64[1] = max(a.i64[1], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_maxi_s_d __builtin_msa_maxi_s_d
```

<span id="intrinsic-__msa_maxi_s_h"></span>

## v8i16 __msa_maxi_s_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_maxi_s_h (v8i16 a, int imm)
#include <msa.h>
Instruction: maxi.s.h
Builtin: __builtin_msa_maxi_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:153
```

### Description

Select the lane-wise maximum of signed integer operands on 8 x i16 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_maxi_s_h __builtin_msa_maxi_s_h
```

<span id="intrinsic-__msa_maxi_s_w"></span>

## v4i32 __msa_maxi_s_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_maxi_s_w (v4i32 a, int imm)
#include <msa.h>
Instruction: maxi.s.w
Builtin: __builtin_msa_maxi_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:154
```

### Description

Select the lane-wise maximum of signed integer operands on 4 x i32 lanes.

### Operation

```c
dst.i32[0] = max(a.i32[0], imm);
dst.i32[1] = max(a.i32[1], imm);
dst.i32[2] = max(a.i32[2], imm);
dst.i32[3] = max(a.i32[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_maxi_s_w __builtin_msa_maxi_s_w
```

<span id="intrinsic-__msa_maxi_u_b"></span>

## v16u8 __msa_maxi_u_b (v16u8 a, int imm)

### Synopsis

```c
v16u8 __msa_maxi_u_b (v16u8 a, int imm)
#include <msa.h>
Instruction: maxi.u.b
Builtin: __builtin_msa_maxi_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:160
```

### Description

Select the lane-wise maximum of unsigned integer operands on 16 x u8 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_maxi_u_b __builtin_msa_maxi_u_b
```

<span id="intrinsic-__msa_maxi_u_d"></span>

## v2u64 __msa_maxi_u_d (v2u64 a, int imm)

### Synopsis

```c
v2u64 __msa_maxi_u_d (v2u64 a, int imm)
#include <msa.h>
Instruction: maxi.u.d
Builtin: __builtin_msa_maxi_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:163
```

### Description

Select the lane-wise maximum of unsigned integer operands on 2 x u64 lanes.

### Operation

```c
dst.u64[0] = max(a.u64[0], imm);
dst.u64[1] = max(a.u64[1], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_maxi_u_d __builtin_msa_maxi_u_d
```

<span id="intrinsic-__msa_maxi_u_h"></span>

## v8u16 __msa_maxi_u_h (v8u16 a, int imm)

### Synopsis

```c
v8u16 __msa_maxi_u_h (v8u16 a, int imm)
#include <msa.h>
Instruction: maxi.u.h
Builtin: __builtin_msa_maxi_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:161
```

### Description

Select the lane-wise maximum of unsigned integer operands on 8 x u16 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_maxi_u_h __builtin_msa_maxi_u_h
```

<span id="intrinsic-__msa_maxi_u_w"></span>

## v4u32 __msa_maxi_u_w (v4u32 a, int imm)

### Synopsis

```c
v4u32 __msa_maxi_u_w (v4u32 a, int imm)
#include <msa.h>
Instruction: maxi.u.w
Builtin: __builtin_msa_maxi_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:162
```

### Description

Select the lane-wise maximum of unsigned integer operands on 4 x u32 lanes.

### Operation

```c
dst.u32[0] = max(a.u32[0], imm);
dst.u32[1] = max(a.u32[1], imm);
dst.u32[2] = max(a.u32[2], imm);
dst.u32[3] = max(a.u32[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_maxi_u_w __builtin_msa_maxi_u_w
```

<span id="intrinsic-__msa_min_a_b"></span>

## v16i8 __msa_min_a_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_min_a_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: min.a.b
Builtin: __builtin_msa_min_a_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:184
```

### Description

Select the lane-wise minimum of modular integer operands on 16 x u8 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_min_a_b __builtin_msa_min_a_b
```

<span id="intrinsic-__msa_min_a_d"></span>

## v2i64 __msa_min_a_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_min_a_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: min.a.d
Builtin: __builtin_msa_min_a_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:187
```

### Description

Select the lane-wise minimum of modular integer operands on 2 x u64 lanes.

### Operation

```c
dst.u64[0] = min(a.i64[0], b.i64[0]);
dst.u64[1] = min(a.i64[1], b.i64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_min_a_d __builtin_msa_min_a_d
```

<span id="intrinsic-__msa_min_a_h"></span>

## v8i16 __msa_min_a_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_min_a_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: min.a.h
Builtin: __builtin_msa_min_a_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:185
```

### Description

Select the lane-wise minimum of modular integer operands on 8 x u16 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_min_a_h __builtin_msa_min_a_h
```

<span id="intrinsic-__msa_min_a_w"></span>

## v4i32 __msa_min_a_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_min_a_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: min.a.w
Builtin: __builtin_msa_min_a_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:186
```

### Description

Select the lane-wise minimum of modular integer operands on 4 x u32 lanes.

### Operation

```c
dst.u32[0] = min(a.i32[0], b.i32[0]);
dst.u32[1] = min(a.i32[1], b.i32[1]);
dst.u32[2] = min(a.i32[2], b.i32[2]);
dst.u32[3] = min(a.i32[3], b.i32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_min_a_w __builtin_msa_min_a_w
```

<span id="intrinsic-__msa_min_s_b"></span>

## v16i8 __msa_min_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_min_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: min.s.b
Builtin: __builtin_msa_min_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:164
```

### Description

Select the lane-wise minimum of signed integer operands on 16 x i8 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_min_s_b __builtin_msa_min_s_b
```

<span id="intrinsic-__msa_min_s_d"></span>

## v2i64 __msa_min_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_min_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: min.s.d
Builtin: __builtin_msa_min_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:167
```

### Description

Select the lane-wise minimum of signed integer operands on 2 x i64 lanes.

### Operation

```c
dst.i64[0] = min(a.i64[0], b.i64[0]);
dst.i64[1] = min(a.i64[1], b.i64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_min_s_d __builtin_msa_min_s_d
```

<span id="intrinsic-__msa_min_s_h"></span>

## v8i16 __msa_min_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_min_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: min.s.h
Builtin: __builtin_msa_min_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:165
```

### Description

Select the lane-wise minimum of signed integer operands on 8 x i16 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_min_s_h __builtin_msa_min_s_h
```

<span id="intrinsic-__msa_min_s_w"></span>

## v4i32 __msa_min_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_min_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: min.s.w
Builtin: __builtin_msa_min_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:166
```

### Description

Select the lane-wise minimum of signed integer operands on 4 x i32 lanes.

### Operation

```c
dst.i32[0] = min(a.i32[0], b.i32[0]);
dst.i32[1] = min(a.i32[1], b.i32[1]);
dst.i32[2] = min(a.i32[2], b.i32[2]);
dst.i32[3] = min(a.i32[3], b.i32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_min_s_w __builtin_msa_min_s_w
```

<span id="intrinsic-__msa_min_u_b"></span>

## v16u8 __msa_min_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_min_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: min.u.b
Builtin: __builtin_msa_min_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:172
```

### Description

Select the lane-wise minimum of unsigned integer operands on 16 x u8 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_min_u_b __builtin_msa_min_u_b
```

<span id="intrinsic-__msa_min_u_d"></span>

## v2u64 __msa_min_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_min_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: min.u.d
Builtin: __builtin_msa_min_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:175
```

### Description

Select the lane-wise minimum of unsigned integer operands on 2 x u64 lanes.

### Operation

```c
dst.u64[0] = min(a.u64[0], b.u64[0]);
dst.u64[1] = min(a.u64[1], b.u64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_min_u_d __builtin_msa_min_u_d
```

<span id="intrinsic-__msa_min_u_h"></span>

## v8u16 __msa_min_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_min_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: min.u.h
Builtin: __builtin_msa_min_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:173
```

### Description

Select the lane-wise minimum of unsigned integer operands on 8 x u16 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_min_u_h __builtin_msa_min_u_h
```

<span id="intrinsic-__msa_min_u_w"></span>

## v4u32 __msa_min_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_min_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: min.u.w
Builtin: __builtin_msa_min_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:174
```

### Description

Select the lane-wise minimum of unsigned integer operands on 4 x u32 lanes.

### Operation

```c
dst.u32[0] = min(a.u32[0], b.u32[0]);
dst.u32[1] = min(a.u32[1], b.u32[1]);
dst.u32[2] = min(a.u32[2], b.u32[2]);
dst.u32[3] = min(a.u32[3], b.u32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_min_u_w __builtin_msa_min_u_w
```

<span id="intrinsic-__msa_mini_s_b"></span>

## v16i8 __msa_mini_s_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_mini_s_b (v16i8 a, int imm)
#include <msa.h>
Instruction: mini.s.b
Builtin: __builtin_msa_mini_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:168
```

### Description

Select the lane-wise minimum of signed integer operands on 16 x i8 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_mini_s_b __builtin_msa_mini_s_b
```

<span id="intrinsic-__msa_mini_s_d"></span>

## v2i64 __msa_mini_s_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_mini_s_d (v2i64 a, int imm)
#include <msa.h>
Instruction: mini.s.d
Builtin: __builtin_msa_mini_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:171
```

### Description

Select the lane-wise minimum of signed integer operands on 2 x i64 lanes.

### Operation

```c
dst.i64[0] = min(a.i64[0], imm);
dst.i64[1] = min(a.i64[1], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_mini_s_d __builtin_msa_mini_s_d
```

<span id="intrinsic-__msa_mini_s_h"></span>

## v8i16 __msa_mini_s_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_mini_s_h (v8i16 a, int imm)
#include <msa.h>
Instruction: mini.s.h
Builtin: __builtin_msa_mini_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:169
```

### Description

Select the lane-wise minimum of signed integer operands on 8 x i16 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_mini_s_h __builtin_msa_mini_s_h
```

<span id="intrinsic-__msa_mini_s_w"></span>

## v4i32 __msa_mini_s_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_mini_s_w (v4i32 a, int imm)
#include <msa.h>
Instruction: mini.s.w
Builtin: __builtin_msa_mini_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:170
```

### Description

Select the lane-wise minimum of signed integer operands on 4 x i32 lanes.

### Operation

```c
dst.i32[0] = min(a.i32[0], imm);
dst.i32[1] = min(a.i32[1], imm);
dst.i32[2] = min(a.i32[2], imm);
dst.i32[3] = min(a.i32[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_mini_s_w __builtin_msa_mini_s_w
```

<span id="intrinsic-__msa_mini_u_b"></span>

## v16u8 __msa_mini_u_b (v16u8 a, int imm)

### Synopsis

```c
v16u8 __msa_mini_u_b (v16u8 a, int imm)
#include <msa.h>
Instruction: mini.u.b
Builtin: __builtin_msa_mini_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:176
```

### Description

Select the lane-wise minimum of unsigned integer operands on 16 x u8 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_mini_u_b __builtin_msa_mini_u_b
```

<span id="intrinsic-__msa_mini_u_d"></span>

## v2u64 __msa_mini_u_d (v2u64 a, int imm)

### Synopsis

```c
v2u64 __msa_mini_u_d (v2u64 a, int imm)
#include <msa.h>
Instruction: mini.u.d
Builtin: __builtin_msa_mini_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:179
```

### Description

Select the lane-wise minimum of unsigned integer operands on 2 x u64 lanes.

### Operation

```c
dst.u64[0] = min(a.u64[0], imm);
dst.u64[1] = min(a.u64[1], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_mini_u_d __builtin_msa_mini_u_d
```

<span id="intrinsic-__msa_mini_u_h"></span>

## v8u16 __msa_mini_u_h (v8u16 a, int imm)

### Synopsis

```c
v8u16 __msa_mini_u_h (v8u16 a, int imm)
#include <msa.h>
Instruction: mini.u.h
Builtin: __builtin_msa_mini_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:177
```

### Description

Select the lane-wise minimum of unsigned integer operands on 8 x u16 lanes.

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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_mini_u_h __builtin_msa_mini_u_h
```

<span id="intrinsic-__msa_mini_u_w"></span>

## v4u32 __msa_mini_u_w (v4u32 a, int imm)

### Synopsis

```c
v4u32 __msa_mini_u_w (v4u32 a, int imm)
#include <msa.h>
Instruction: mini.u.w
Builtin: __builtin_msa_mini_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:178
```

### Description

Select the lane-wise minimum of unsigned integer operands on 4 x u32 lanes.

### Operation

```c
dst.u32[0] = min(a.u32[0], imm);
dst.u32[1] = min(a.u32[1], imm);
dst.u32[2] = min(a.u32[2], imm);
dst.u32[3] = min(a.u32[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_mini_u_w __builtin_msa_mini_u_w
```

