# Float Conversion

Generated from `include/msa.h`. This page contains 24 intrinsics.

<span id="intrinsic-__msa_fclass_d"></span>

## v2i64 __msa_fclass_d (v2f64 a)

### Synopsis

```c
v2i64 __msa_fclass_d (v2f64 a)
#include <msa.h>
Instruction: fclass.d
Builtin: __builtin_msa_fclass_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:548
```

### Description

Classify floating-point values lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.u64[0] = classify_fp(a.fp64[0]);
dst.u64[1] = classify_fp(a.fp64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_fclass_d __builtin_msa_fclass_d
```

<span id="intrinsic-__msa_fclass_w"></span>

## v4i32 __msa_fclass_w (v4f32 a)

### Synopsis

```c
v4i32 __msa_fclass_w (v4f32 a)
#include <msa.h>
Instruction: fclass.w
Builtin: __builtin_msa_fclass_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:547
```

### Description

Classify floating-point values lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.u32[0] = classify_fp(a.fp32[0]);
dst.u32[1] = classify_fp(a.fp32[1]);
dst.u32[2] = classify_fp(a.fp32[2]);
dst.u32[3] = classify_fp(a.fp32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_fclass_w __builtin_msa_fclass_w
```

<span id="intrinsic-__msa_fexdo_h"></span>

## v8i16 __msa_fexdo_h (v4f32 a, v4f32 b)

### Synopsis

```c
v8i16 __msa_fexdo_h (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fexdo.h
Builtin: __builtin_msa_fexdo_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:523
```

### Description

Extract and convert paired floating-point data lane-wise for 8 x fp16 lanes.

### Operation

```c
dst.fp32[0] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 0);
dst.fp32[1] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 1);
dst.fp32[2] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 2);
dst.fp32[3] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 3);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 1 |

### Header Mapping

```c
#define __msa_fexdo_h __builtin_msa_fexdo_h
```

<span id="intrinsic-__msa_fexdo_w"></span>

## v4f32 __msa_fexdo_w (v2f64 a, v2f64 b)

### Synopsis

```c
v4f32 __msa_fexdo_w (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fexdo.w
Builtin: __builtin_msa_fexdo_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:524
```

### Description

Extract and convert paired floating-point data lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 0);
dst.fp32[1] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 1);
dst.fp32[2] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 2);
dst.fp32[3] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 3);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 1 |

### Header Mapping

```c
#define __msa_fexdo_w __builtin_msa_fexdo_w
```

<span id="intrinsic-__msa_fexp2_d"></span>

## v2f64 __msa_fexp2_d (v2f64 a, v2i64 b)

### Synopsis

```c
v2f64 __msa_fexp2_d (v2f64 a, v2i64 b)
#include <msa.h>
Instruction: fexp2.d
Builtin: __builtin_msa_fexp2_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:522
```

### Description

Compute base-2 exponential lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] * pow2(b.i64[0]);
dst.fp64[1] = a.fp64[1] * pow2(b.i64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_fexp2_d __builtin_msa_fexp2_d
```

<span id="intrinsic-__msa_fexp2_w"></span>

## v4f32 __msa_fexp2_w (v4f32 a, v4i32 b)

### Synopsis

```c
v4f32 __msa_fexp2_w (v4f32 a, v4i32 b)
#include <msa.h>
Instruction: fexp2.w
Builtin: __builtin_msa_fexp2_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:521
```

### Description

Compute base-2 exponential lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] * pow2(b.i32[0]);
dst.fp32[1] = a.fp32[1] * pow2(b.i32[1]);
dst.fp32[2] = a.fp32[2] * pow2(b.i32[2]);
dst.fp32[3] = a.fp32[3] * pow2(b.i32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_fexp2_w __builtin_msa_fexp2_w
```

<span id="intrinsic-__msa_fexupl_d"></span>

## v2f64 __msa_fexupl_d (v4f32 a)

### Synopsis

```c
v2f64 __msa_fexupl_d (v4f32 a)
#include <msa.h>
Instruction: fexupl.d
Builtin: __builtin_msa_fexupl_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:560
```

### Description

Extend lower floating-point or fixed-point lanes lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = widen_lower_half_to_next_fp_width(a, 0);
dst.fp64[1] = widen_lower_half_to_next_fp_width(a, 1);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 1 |

### Header Mapping

```c
#define __msa_fexupl_d __builtin_msa_fexupl_d
```

<span id="intrinsic-__msa_fexupl_w"></span>

## v4f32 __msa_fexupl_w (v8i16 a)

### Synopsis

```c
v4f32 __msa_fexupl_w (v8i16 a)
#include <msa.h>
Instruction: fexupl.w
Builtin: __builtin_msa_fexupl_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:559
```

### Description

Extend lower floating-point or fixed-point lanes lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = widen_lower_half_to_next_fp_width(a, 0);
dst.fp32[1] = widen_lower_half_to_next_fp_width(a, 1);
dst.fp32[2] = widen_lower_half_to_next_fp_width(a, 2);
dst.fp32[3] = widen_lower_half_to_next_fp_width(a, 3);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 1 |

### Header Mapping

```c
#define __msa_fexupl_w __builtin_msa_fexupl_w
```

<span id="intrinsic-__msa_fexupr_d"></span>

## v2f64 __msa_fexupr_d (v4f32 a)

### Synopsis

```c
v2f64 __msa_fexupr_d (v4f32 a)
#include <msa.h>
Instruction: fexupr.d
Builtin: __builtin_msa_fexupr_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:562
```

### Description

Extend upper floating-point or fixed-point lanes lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = widen_upper_half_to_next_fp_width(a, 0);
dst.fp64[1] = widen_upper_half_to_next_fp_width(a, 1);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 1 |

### Header Mapping

```c
#define __msa_fexupr_d __builtin_msa_fexupr_d
```

<span id="intrinsic-__msa_fexupr_w"></span>

## v4f32 __msa_fexupr_w (v8i16 a)

### Synopsis

```c
v4f32 __msa_fexupr_w (v8i16 a)
#include <msa.h>
Instruction: fexupr.w
Builtin: __builtin_msa_fexupr_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:561
```

### Description

Extend upper floating-point or fixed-point lanes lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = widen_upper_half_to_next_fp_width(a, 0);
dst.fp32[1] = widen_upper_half_to_next_fp_width(a, 1);
dst.fp32[2] = widen_upper_half_to_next_fp_width(a, 2);
dst.fp32[3] = widen_upper_half_to_next_fp_width(a, 3);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 1 |

### Header Mapping

```c
#define __msa_fexupr_w __builtin_msa_fexupr_w
```

<span id="intrinsic-__msa_ffint_s_d"></span>

## v2f64 __msa_ffint_s_d (v2i64 a)

### Synopsis

```c
v2f64 __msa_ffint_s_d (v2i64 a)
#include <msa.h>
Instruction: ffint.s.d
Builtin: __builtin_msa_ffint_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:576
```

### Description

Convert integer to floating point lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = float_convert(a.i64[0]);
dst.fp64[1] = float_convert(a.i64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_ffint_s_d __builtin_msa_ffint_s_d
```

<span id="intrinsic-__msa_ffint_s_w"></span>

## v4f32 __msa_ffint_s_w (v4i32 a)

### Synopsis

```c
v4f32 __msa_ffint_s_w (v4i32 a)
#include <msa.h>
Instruction: ffint.s.w
Builtin: __builtin_msa_ffint_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:575
```

### Description

Convert integer to floating point lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = float_convert(a.i32[0]);
dst.fp32[1] = float_convert(a.i32[1]);
dst.fp32[2] = float_convert(a.i32[2]);
dst.fp32[3] = float_convert(a.i32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_ffint_s_w __builtin_msa_ffint_s_w
```

<span id="intrinsic-__msa_ffint_u_d"></span>

## v2f64 __msa_ffint_u_d (v2u64 a)

### Synopsis

```c
v2f64 __msa_ffint_u_d (v2u64 a)
#include <msa.h>
Instruction: ffint.u.d
Builtin: __builtin_msa_ffint_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:578
```

### Description

Convert integer to floating point lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = float_convert(a.u64[0]);
dst.fp64[1] = float_convert(a.u64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_ffint_u_d __builtin_msa_ffint_u_d
```

<span id="intrinsic-__msa_ffint_u_w"></span>

## v4f32 __msa_ffint_u_w (v4u32 a)

### Synopsis

```c
v4f32 __msa_ffint_u_w (v4u32 a)
#include <msa.h>
Instruction: ffint.u.w
Builtin: __builtin_msa_ffint_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:577
```

### Description

Convert integer to floating point lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = float_convert(a.u32[0]);
dst.fp32[1] = float_convert(a.u32[1]);
dst.fp32[2] = float_convert(a.u32[2]);
dst.fp32[3] = float_convert(a.u32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_ffint_u_w __builtin_msa_ffint_u_w
```

<span id="intrinsic-__msa_frint_d"></span>

## v2f64 __msa_frint_d (v2f64 a)

### Synopsis

```c
v2f64 __msa_frint_d (v2f64 a)
#include <msa.h>
Instruction: frint.d
Builtin: __builtin_msa_frint_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:554
```

### Description

Round to an integral floating-point value lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = round_to_integral_float(a.fp64[0], rounding_mode_from_suffix);
dst.fp64[1] = round_to_integral_float(a.fp64[1], rounding_mode_from_suffix);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_frint_d __builtin_msa_frint_d
```

<span id="intrinsic-__msa_frint_w"></span>

## v4f32 __msa_frint_w (v4f32 a)

### Synopsis

```c
v4f32 __msa_frint_w (v4f32 a)
#include <msa.h>
Instruction: frint.w
Builtin: __builtin_msa_frint_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:553
```

### Description

Round to an integral floating-point value lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = round_to_integral_float(a.fp32[0], rounding_mode_from_suffix);
dst.fp32[1] = round_to_integral_float(a.fp32[1], rounding_mode_from_suffix);
dst.fp32[2] = round_to_integral_float(a.fp32[2], rounding_mode_from_suffix);
dst.fp32[3] = round_to_integral_float(a.fp32[3], rounding_mode_from_suffix);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_frint_w __builtin_msa_frint_w
```

<span id="intrinsic-__msa_ftint_s_d"></span>

## v2i64 __msa_ftint_s_d (v2f64 a)

### Synopsis

```c
v2i64 __msa_ftint_s_d (v2f64 a)
#include <msa.h>
Instruction: ftint.s.d
Builtin: __builtin_msa_ftint_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:568
```

### Description

Convert floating point to integer lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=current_rounding_mode);
dst.i64[1] = integer_convert(a.fp64[1], rounding=current_rounding_mode);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_ftint_s_d __builtin_msa_ftint_s_d
```

<span id="intrinsic-__msa_ftint_s_w"></span>

## v4i32 __msa_ftint_s_w (v4f32 a)

### Synopsis

```c
v4i32 __msa_ftint_s_w (v4f32 a)
#include <msa.h>
Instruction: ftint.s.w
Builtin: __builtin_msa_ftint_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:567
```

### Description

Convert floating point to integer lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=current_rounding_mode);
dst.i32[1] = integer_convert(a.fp32[1], rounding=current_rounding_mode);
dst.i32[2] = integer_convert(a.fp32[2], rounding=current_rounding_mode);
dst.i32[3] = integer_convert(a.fp32[3], rounding=current_rounding_mode);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_ftint_s_w __builtin_msa_ftint_s_w
```

<span id="intrinsic-__msa_ftint_u_d"></span>

## v2u64 __msa_ftint_u_d (v2f64 a)

### Synopsis

```c
v2u64 __msa_ftint_u_d (v2f64 a)
#include <msa.h>
Instruction: ftint.u.d
Builtin: __builtin_msa_ftint_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:570
```

### Description

Convert floating point to integer lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.u64[0] = integer_convert(a.fp64[0], rounding=current_rounding_mode);
dst.u64[1] = integer_convert(a.fp64[1], rounding=current_rounding_mode);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_ftint_u_d __builtin_msa_ftint_u_d
```

<span id="intrinsic-__msa_ftint_u_w"></span>

## v4u32 __msa_ftint_u_w (v4f32 a)

### Synopsis

```c
v4u32 __msa_ftint_u_w (v4f32 a)
#include <msa.h>
Instruction: ftint.u.w
Builtin: __builtin_msa_ftint_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:569
```

### Description

Convert floating point to integer lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.u32[0] = integer_convert(a.fp32[0], rounding=current_rounding_mode);
dst.u32[1] = integer_convert(a.fp32[1], rounding=current_rounding_mode);
dst.u32[2] = integer_convert(a.fp32[2], rounding=current_rounding_mode);
dst.u32[3] = integer_convert(a.fp32[3], rounding=current_rounding_mode);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_ftint_u_w __builtin_msa_ftint_u_w
```

<span id="intrinsic-__msa_ftrunc_s_d"></span>

## v2i64 __msa_ftrunc_s_d (v2f64 a)

### Synopsis

```c
v2i64 __msa_ftrunc_s_d (v2f64 a)
#include <msa.h>
Instruction: ftrunc.s.d
Builtin: __builtin_msa_ftrunc_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:572
```

### Description

Truncate floating point to integer lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_zero);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_zero);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_ftrunc_s_d __builtin_msa_ftrunc_s_d
```

<span id="intrinsic-__msa_ftrunc_s_w"></span>

## v4i32 __msa_ftrunc_s_w (v4f32 a)

### Synopsis

```c
v4i32 __msa_ftrunc_s_w (v4f32 a)
#include <msa.h>
Instruction: ftrunc.s.w
Builtin: __builtin_msa_ftrunc_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:571
```

### Description

Truncate floating point to integer lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=toward_zero);
dst.i32[1] = integer_convert(a.fp32[1], rounding=toward_zero);
dst.i32[2] = integer_convert(a.fp32[2], rounding=toward_zero);
dst.i32[3] = integer_convert(a.fp32[3], rounding=toward_zero);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_ftrunc_s_w __builtin_msa_ftrunc_s_w
```

<span id="intrinsic-__msa_ftrunc_u_d"></span>

## v2u64 __msa_ftrunc_u_d (v2f64 a)

### Synopsis

```c
v2u64 __msa_ftrunc_u_d (v2f64 a)
#include <msa.h>
Instruction: ftrunc.u.d
Builtin: __builtin_msa_ftrunc_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:574
```

### Description

Truncate floating point to integer lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.u64[0] = integer_convert(a.fp64[0], rounding=toward_zero);
dst.u64[1] = integer_convert(a.fp64[1], rounding=toward_zero);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_ftrunc_u_d __builtin_msa_ftrunc_u_d
```

<span id="intrinsic-__msa_ftrunc_u_w"></span>

## v4u32 __msa_ftrunc_u_w (v4f32 a)

### Synopsis

```c
v4u32 __msa_ftrunc_u_w (v4f32 a)
#include <msa.h>
Instruction: ftrunc.u.w
Builtin: __builtin_msa_ftrunc_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:573
```

### Description

Truncate floating point to integer lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.u32[0] = integer_convert(a.fp32[0], rounding=toward_zero);
dst.u32[1] = integer_convert(a.fp32[1], rounding=toward_zero);
dst.u32[2] = integer_convert(a.fp32[2], rounding=toward_zero);
dst.u32[3] = integer_convert(a.fp32[3], rounding=toward_zero);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
#define __msa_ftrunc_u_w __builtin_msa_ftrunc_u_w
```

