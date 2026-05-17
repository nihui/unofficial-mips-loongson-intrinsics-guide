# Shift

Generated from `include/msa.h`. This page contains 40 intrinsics.

<span id="intrinsic-__msa_sll_b"></span>

## v16i8 __msa_sll_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_sll_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: sll.b
Builtin: __builtin_msa_sll_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:52
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_sll_b __builtin_msa_sll_b
```

<span id="intrinsic-__msa_sll_d"></span>

## v2i64 __msa_sll_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_sll_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: sll.d
Builtin: __builtin_msa_sll_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:55
```

### Description

Shift-left each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] << (b.u64[0] & 63);
dst.u64[1] = a.u64[1] << (b.u64[1] & 63);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_sll_d __builtin_msa_sll_d
```

<span id="intrinsic-__msa_sll_h"></span>

## v8i16 __msa_sll_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_sll_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: sll.h
Builtin: __builtin_msa_sll_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:53
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_sll_h __builtin_msa_sll_h
```

<span id="intrinsic-__msa_sll_w"></span>

## v4i32 __msa_sll_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_sll_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: sll.w
Builtin: __builtin_msa_sll_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:54
```

### Description

Shift-left each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] << (b.u32[0] & 31);
dst.u32[1] = a.u32[1] << (b.u32[1] & 31);
dst.u32[2] = a.u32[2] << (b.u32[2] & 31);
dst.u32[3] = a.u32[3] << (b.u32[3] & 31);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_sll_w __builtin_msa_sll_w
```

<span id="intrinsic-__msa_slli_b"></span>

## v16i8 __msa_slli_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_slli_b (v16i8 a, int imm)
#include <msa.h>
Instruction: slli.b
Builtin: __builtin_msa_slli_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:56
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_slli_b __builtin_msa_slli_b
```

<span id="intrinsic-__msa_slli_d"></span>

## v2i64 __msa_slli_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_slli_d (v2i64 a, int imm)
#include <msa.h>
Instruction: slli.d
Builtin: __builtin_msa_slli_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:59
```

### Description

Shift-left each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] << imm;
dst.u64[1] = a.u64[1] << imm;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_slli_d __builtin_msa_slli_d
```

<span id="intrinsic-__msa_slli_h"></span>

## v8i16 __msa_slli_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_slli_h (v8i16 a, int imm)
#include <msa.h>
Instruction: slli.h
Builtin: __builtin_msa_slli_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:57
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_slli_h __builtin_msa_slli_h
```

<span id="intrinsic-__msa_slli_w"></span>

## v4i32 __msa_slli_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_slli_w (v4i32 a, int imm)
#include <msa.h>
Instruction: slli.w
Builtin: __builtin_msa_slli_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:58
```

### Description

Shift-left each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] << imm;
dst.u32[1] = a.u32[1] << imm;
dst.u32[2] = a.u32[2] << imm;
dst.u32[3] = a.u32[3] << imm;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_slli_w __builtin_msa_slli_w
```

<span id="intrinsic-__msa_sra_b"></span>

## v16i8 __msa_sra_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_sra_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: sra.b
Builtin: __builtin_msa_sra_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:60
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_sra_b __builtin_msa_sra_b
```

<span id="intrinsic-__msa_sra_d"></span>

## v2i64 __msa_sra_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_sra_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: sra.d
Builtin: __builtin_msa_sra_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:63
```

### Description

Arithmetic-shift-right each signed u64 lane.

### Operation

```c
dst.i64[0] = arithmetic_shift_right(a.i64[0], (b.i64[0] & 63));
dst.i64[1] = arithmetic_shift_right(a.i64[1], (b.i64[1] & 63));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_sra_d __builtin_msa_sra_d
```

<span id="intrinsic-__msa_sra_h"></span>

## v8i16 __msa_sra_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_sra_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: sra.h
Builtin: __builtin_msa_sra_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:61
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_sra_h __builtin_msa_sra_h
```

<span id="intrinsic-__msa_sra_w"></span>

## v4i32 __msa_sra_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_sra_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: sra.w
Builtin: __builtin_msa_sra_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:62
```

### Description

Arithmetic-shift-right each signed u32 lane.

### Operation

```c
dst.i32[0] = arithmetic_shift_right(a.i32[0], (b.i32[0] & 31));
dst.i32[1] = arithmetic_shift_right(a.i32[1], (b.i32[1] & 31));
dst.i32[2] = arithmetic_shift_right(a.i32[2], (b.i32[2] & 31));
dst.i32[3] = arithmetic_shift_right(a.i32[3], (b.i32[3] & 31));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_sra_w __builtin_msa_sra_w
```

<span id="intrinsic-__msa_srai_b"></span>

## v16i8 __msa_srai_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_srai_b (v16i8 a, int imm)
#include <msa.h>
Instruction: srai.b
Builtin: __builtin_msa_srai_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:64
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_srai_b __builtin_msa_srai_b
```

<span id="intrinsic-__msa_srai_d"></span>

## v2i64 __msa_srai_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_srai_d (v2i64 a, int imm)
#include <msa.h>
Instruction: srai.d
Builtin: __builtin_msa_srai_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:67
```

### Description

Arithmetic-shift-right each signed u64 lane.

### Operation

```c
dst.i64[0] = arithmetic_shift_right(a.i64[0], imm);
dst.i64[1] = arithmetic_shift_right(a.i64[1], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_srai_d __builtin_msa_srai_d
```

<span id="intrinsic-__msa_srai_h"></span>

## v8i16 __msa_srai_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_srai_h (v8i16 a, int imm)
#include <msa.h>
Instruction: srai.h
Builtin: __builtin_msa_srai_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:65
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_srai_h __builtin_msa_srai_h
```

<span id="intrinsic-__msa_srai_w"></span>

## v4i32 __msa_srai_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_srai_w (v4i32 a, int imm)
#include <msa.h>
Instruction: srai.w
Builtin: __builtin_msa_srai_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:66
```

### Description

Arithmetic-shift-right each signed u32 lane.

### Operation

```c
dst.i32[0] = arithmetic_shift_right(a.i32[0], imm);
dst.i32[1] = arithmetic_shift_right(a.i32[1], imm);
dst.i32[2] = arithmetic_shift_right(a.i32[2], imm);
dst.i32[3] = arithmetic_shift_right(a.i32[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_srai_w __builtin_msa_srai_w
```

<span id="intrinsic-__msa_srar_b"></span>

## v16i8 __msa_srar_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_srar_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: srar.b
Builtin: __builtin_msa_srar_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:68
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srar_b __builtin_msa_srar_b
```

<span id="intrinsic-__msa_srar_d"></span>

## v2i64 __msa_srar_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_srar_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: srar.d
Builtin: __builtin_msa_srar_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:71
```

### Description

Round and arithmetic-shift-right each u64 lane.

### Operation

```c
dst.i64[0] = rounding_arithmetic_shift_right(a.i64[0], (b.i64[0] & 63));
dst.i64[1] = rounding_arithmetic_shift_right(a.i64[1], (b.i64[1] & 63));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srar_d __builtin_msa_srar_d
```

<span id="intrinsic-__msa_srar_h"></span>

## v8i16 __msa_srar_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_srar_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: srar.h
Builtin: __builtin_msa_srar_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:69
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srar_h __builtin_msa_srar_h
```

<span id="intrinsic-__msa_srar_w"></span>

## v4i32 __msa_srar_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_srar_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: srar.w
Builtin: __builtin_msa_srar_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:70
```

### Description

Round and arithmetic-shift-right each u32 lane.

### Operation

```c
dst.i32[0] = rounding_arithmetic_shift_right(a.i32[0], (b.i32[0] & 31));
dst.i32[1] = rounding_arithmetic_shift_right(a.i32[1], (b.i32[1] & 31));
dst.i32[2] = rounding_arithmetic_shift_right(a.i32[2], (b.i32[2] & 31));
dst.i32[3] = rounding_arithmetic_shift_right(a.i32[3], (b.i32[3] & 31));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srar_w __builtin_msa_srar_w
```

<span id="intrinsic-__msa_srari_b"></span>

## v16i8 __msa_srari_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_srari_b (v16i8 a, int imm)
#include <msa.h>
Instruction: srari.b
Builtin: __builtin_msa_srari_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:72
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srari_b __builtin_msa_srari_b
```

<span id="intrinsic-__msa_srari_d"></span>

## v2i64 __msa_srari_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_srari_d (v2i64 a, int imm)
#include <msa.h>
Instruction: srari.d
Builtin: __builtin_msa_srari_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:75
```

### Description

Round and arithmetic-shift-right each u64 lane.

### Operation

```c
dst.i64[0] = rounding_arithmetic_shift_right(a.i64[0], imm);
dst.i64[1] = rounding_arithmetic_shift_right(a.i64[1], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srari_d __builtin_msa_srari_d
```

<span id="intrinsic-__msa_srari_h"></span>

## v8i16 __msa_srari_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_srari_h (v8i16 a, int imm)
#include <msa.h>
Instruction: srari.h
Builtin: __builtin_msa_srari_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:73
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srari_h __builtin_msa_srari_h
```

<span id="intrinsic-__msa_srari_w"></span>

## v4i32 __msa_srari_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_srari_w (v4i32 a, int imm)
#include <msa.h>
Instruction: srari.w
Builtin: __builtin_msa_srari_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:74
```

### Description

Round and arithmetic-shift-right each u32 lane.

### Operation

```c
dst.i32[0] = rounding_arithmetic_shift_right(a.i32[0], imm);
dst.i32[1] = rounding_arithmetic_shift_right(a.i32[1], imm);
dst.i32[2] = rounding_arithmetic_shift_right(a.i32[2], imm);
dst.i32[3] = rounding_arithmetic_shift_right(a.i32[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srari_w __builtin_msa_srari_w
```

<span id="intrinsic-__msa_srl_b"></span>

## v16i8 __msa_srl_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_srl_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: srl.b
Builtin: __builtin_msa_srl_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:76
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_srl_b __builtin_msa_srl_b
```

<span id="intrinsic-__msa_srl_d"></span>

## v2i64 __msa_srl_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_srl_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: srl.d
Builtin: __builtin_msa_srl_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:79
```

### Description

Logical-shift-right each unsigned u64 lane.

### Operation

```c
dst.u64[0] = logical_shift_right(a.u64[0], (b.u64[0] & 63));
dst.u64[1] = logical_shift_right(a.u64[1], (b.u64[1] & 63));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_srl_d __builtin_msa_srl_d
```

<span id="intrinsic-__msa_srl_h"></span>

## v8i16 __msa_srl_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_srl_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: srl.h
Builtin: __builtin_msa_srl_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:77
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_srl_h __builtin_msa_srl_h
```

<span id="intrinsic-__msa_srl_w"></span>

## v4i32 __msa_srl_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_srl_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: srl.w
Builtin: __builtin_msa_srl_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:78
```

### Description

Logical-shift-right each unsigned u32 lane.

### Operation

```c
dst.u32[0] = logical_shift_right(a.u32[0], (b.u32[0] & 31));
dst.u32[1] = logical_shift_right(a.u32[1], (b.u32[1] & 31));
dst.u32[2] = logical_shift_right(a.u32[2], (b.u32[2] & 31));
dst.u32[3] = logical_shift_right(a.u32[3], (b.u32[3] & 31));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_srl_w __builtin_msa_srl_w
```

<span id="intrinsic-__msa_srli_b"></span>

## v16i8 __msa_srli_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_srli_b (v16i8 a, int imm)
#include <msa.h>
Instruction: srli.b
Builtin: __builtin_msa_srli_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:80
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_srli_b __builtin_msa_srli_b
```

<span id="intrinsic-__msa_srli_d"></span>

## v2i64 __msa_srli_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_srli_d (v2i64 a, int imm)
#include <msa.h>
Instruction: srli.d
Builtin: __builtin_msa_srli_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:83
```

### Description

Logical-shift-right each unsigned u64 lane.

### Operation

```c
dst.u64[0] = logical_shift_right(a.u64[0], imm);
dst.u64[1] = logical_shift_right(a.u64[1], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_srli_d __builtin_msa_srli_d
```

<span id="intrinsic-__msa_srli_h"></span>

## v8i16 __msa_srli_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_srli_h (v8i16 a, int imm)
#include <msa.h>
Instruction: srli.h
Builtin: __builtin_msa_srli_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:81
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_srli_h __builtin_msa_srli_h
```

<span id="intrinsic-__msa_srli_w"></span>

## v4i32 __msa_srli_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_srli_w (v4i32 a, int imm)
#include <msa.h>
Instruction: srli.w
Builtin: __builtin_msa_srli_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:82
```

### Description

Logical-shift-right each unsigned u32 lane.

### Operation

```c
dst.u32[0] = logical_shift_right(a.u32[0], imm);
dst.u32[1] = logical_shift_right(a.u32[1], imm);
dst.u32[2] = logical_shift_right(a.u32[2], imm);
dst.u32[3] = logical_shift_right(a.u32[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __msa_srli_w __builtin_msa_srli_w
```

<span id="intrinsic-__msa_srlr_b"></span>

## v16i8 __msa_srlr_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_srlr_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: srlr.b
Builtin: __builtin_msa_srlr_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:84
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srlr_b __builtin_msa_srlr_b
```

<span id="intrinsic-__msa_srlr_d"></span>

## v2i64 __msa_srlr_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_srlr_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: srlr.d
Builtin: __builtin_msa_srlr_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:87
```

### Description

Round and logical-shift-right each u64 lane.

### Operation

```c
dst.u64[0] = rounding_logical_shift_right(a.u64[0], (b.u64[0] & 63));
dst.u64[1] = rounding_logical_shift_right(a.u64[1], (b.u64[1] & 63));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srlr_d __builtin_msa_srlr_d
```

<span id="intrinsic-__msa_srlr_h"></span>

## v8i16 __msa_srlr_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_srlr_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: srlr.h
Builtin: __builtin_msa_srlr_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:85
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srlr_h __builtin_msa_srlr_h
```

<span id="intrinsic-__msa_srlr_w"></span>

## v4i32 __msa_srlr_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_srlr_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: srlr.w
Builtin: __builtin_msa_srlr_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:86
```

### Description

Round and logical-shift-right each u32 lane.

### Operation

```c
dst.u32[0] = rounding_logical_shift_right(a.u32[0], (b.u32[0] & 31));
dst.u32[1] = rounding_logical_shift_right(a.u32[1], (b.u32[1] & 31));
dst.u32[2] = rounding_logical_shift_right(a.u32[2], (b.u32[2] & 31));
dst.u32[3] = rounding_logical_shift_right(a.u32[3], (b.u32[3] & 31));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srlr_w __builtin_msa_srlr_w
```

<span id="intrinsic-__msa_srlri_b"></span>

## v16i8 __msa_srlri_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_srlri_b (v16i8 a, int imm)
#include <msa.h>
Instruction: srlri.b
Builtin: __builtin_msa_srlri_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:88
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srlri_b __builtin_msa_srlri_b
```

<span id="intrinsic-__msa_srlri_d"></span>

## v2i64 __msa_srlri_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_srlri_d (v2i64 a, int imm)
#include <msa.h>
Instruction: srlri.d
Builtin: __builtin_msa_srlri_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:91
```

### Description

Round and logical-shift-right each u64 lane.

### Operation

```c
dst.u64[0] = rounding_logical_shift_right(a.u64[0], imm);
dst.u64[1] = rounding_logical_shift_right(a.u64[1], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srlri_d __builtin_msa_srlri_d
```

<span id="intrinsic-__msa_srlri_h"></span>

## v8i16 __msa_srlri_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_srlri_h (v8i16 a, int imm)
#include <msa.h>
Instruction: srlri.h
Builtin: __builtin_msa_srlri_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:89
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
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srlri_h __builtin_msa_srlri_h
```

<span id="intrinsic-__msa_srlri_w"></span>

## v4i32 __msa_srlri_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_srlri_w (v4i32 a, int imm)
#include <msa.h>
Instruction: srlri.w
Builtin: __builtin_msa_srlri_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:90
```

### Description

Round and logical-shift-right each u32 lane.

### Operation

```c
dst.u32[0] = rounding_logical_shift_right(a.u32[0], imm);
dst.u32[1] = rounding_logical_shift_right(a.u32[1], imm);
dst.u32[2] = rounding_logical_shift_right(a.u32[2], imm);
dst.u32[3] = rounding_logical_shift_right(a.u32[3], imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 2 |

### Header Mapping

```c
#define __msa_srlri_w __builtin_msa_srlri_w
```

