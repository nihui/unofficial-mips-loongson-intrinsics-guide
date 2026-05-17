# Float Conversion

Generated from `include/loongson-asxintrin.h`. This page contains 56 intrinsics.

<span id="intrinsic-__lasx_xfclass_d"></span>

## __m256i __lasx_xfclass_d (__m256d a)

### Synopsis

```c
__m256i __lasx_xfclass_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xfclass.d
Builtin: __builtin_lasx_xfclass_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2571
```

### Description

Classify floating-point values lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.u64[0] = classify_fp(a.fp64[0]);
dst.u64[1] = classify_fp(a.fp64[1]);
dst.u64[2] = classify_fp(a.fp64[2]);
dst.u64[3] = classify_fp(a.fp64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfclass_d((v4f64)a);
```

<span id="intrinsic-__lasx_xfclass_w"></span>

## __m256i __lasx_xfclass_w (__m256 a)

### Synopsis

```c
__m256i __lasx_xfclass_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xfclass.w
Builtin: __builtin_lasx_xfclass_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2564
```

### Description

Classify floating-point values lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.u32[0] = classify_fp(a.fp32[0]);
dst.u32[1] = classify_fp(a.fp32[1]);
dst.u32[2] = classify_fp(a.fp32[2]);
dst.u32[3] = classify_fp(a.fp32[3]);
dst.u32[4] = classify_fp(a.fp32[4]);
dst.u32[5] = classify_fp(a.fp32[5]);
dst.u32[6] = classify_fp(a.fp32[6]);
dst.u32[7] = classify_fp(a.fp32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfclass_w((v8f32)a);
```

<span id="intrinsic-__lasx_xfexdo_h"></span>

## __m256i __lasx_xfexdo_h (__m256 a, __m256 b)

### Synopsis

```c
__m256i __lasx_xfexdo_h (__m256 a, __m256 b)
#include <loongson-asxintrin.h>
Instruction: xfexdo.h
Builtin: __builtin_lasx_xfexdo_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2396
```

### Description

Extract and convert paired floating-point data lane-wise for 16 x fp16 lanes.

### Operation

```c
dst.fp32[0] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 0);
dst.fp32[1] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 1);
dst.fp32[2] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 2);
dst.fp32[3] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 3);
dst.fp32[4] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 4);
dst.fp32[5] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 5);
dst.fp32[6] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 6);
dst.fp32[7] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 7);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfexdo_h((v8f32)a, (v8f32)b);
```

<span id="intrinsic-__lasx_xfexdo_w"></span>

## __m256 __lasx_xfexdo_w (__m256d a, __m256d b)

### Synopsis

```c
__m256 __lasx_xfexdo_w (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xfexdo.w
Builtin: __builtin_lasx_xfexdo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2403
```

### Description

Extract and convert paired floating-point data lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 0);
dst.fp32[1] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 1);
dst.fp32[2] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 2);
dst.fp32[3] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 3);
dst.fp32[4] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 4);
dst.fp32[5] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 5);
dst.fp32[6] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 6);
dst.fp32[7] = extract_odd_or_double_format_element(interleave_or_pair_fp_sources(a, b), 7);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 1 |

### Header Mapping

```c
return (__m256)__builtin_lasx_xfexdo_w((v4f64)a, (v4f64)b);
```

<span id="intrinsic-__lasx_xfexp2_d"></span>

## __m256d __lasx_xfexp2_d (__m256d a, __m256i b)

### Synopsis

```c
__m256d __lasx_xfexp2_d (__m256d a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: xfexp2.d
Builtin: __builtin_lasx_xfexp2_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2389
```

### Description

Compute base-2 exponential lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] * pow2(b.i64[0]);
dst.fp64[1] = a.fp64[1] * pow2(b.i64[1]);
dst.fp64[2] = a.fp64[2] * pow2(b.i64[2]);
dst.fp64[3] = a.fp64[3] * pow2(b.i64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfexp2_d((v4f64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_xfexp2_w"></span>

## __m256 __lasx_xfexp2_w (__m256 a, __m256i b)

### Synopsis

```c
__m256 __lasx_xfexp2_w (__m256 a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: xfexp2.w
Builtin: __builtin_lasx_xfexp2_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2382
```

### Description

Compute base-2 exponential lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] * pow2(b.i32[0]);
dst.fp32[1] = a.fp32[1] * pow2(b.i32[1]);
dst.fp32[2] = a.fp32[2] * pow2(b.i32[2]);
dst.fp32[3] = a.fp32[3] * pow2(b.i32[3]);
dst.fp32[4] = a.fp32[4] * pow2(b.i32[4]);
dst.fp32[5] = a.fp32[5] * pow2(b.i32[5]);
dst.fp32[6] = a.fp32[6] * pow2(b.i32[6]);
dst.fp32[7] = a.fp32[7] * pow2(b.i32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256)__builtin_lasx_xfexp2_w((v8f32)a, (v8i32)b);
```

<span id="intrinsic-__lasx_xfexupl_d"></span>

## __m256d __lasx_xfexupl_d (__m256 a)

### Synopsis

```c
__m256d __lasx_xfexupl_d (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xfexupl.d
Builtin: __builtin_lasx_xfexupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2655
```

### Description

Extend lower floating-point or fixed-point lanes lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = widen_lower_half_to_next_fp_width(a, 0);
dst.fp64[1] = widen_lower_half_to_next_fp_width(a, 1);
dst.fp64[2] = widen_lower_half_to_next_fp_width(a, 2);
dst.fp64[3] = widen_lower_half_to_next_fp_width(a, 3);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfexupl_d((v8f32)a);
```

<span id="intrinsic-__lasx_xfexupl_w"></span>

## __m256 __lasx_xfexupl_w (__m256i a)

### Synopsis

```c
__m256 __lasx_xfexupl_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xfexupl.w
Builtin: __builtin_lasx_xfexupl_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2648
```

### Description

Extend lower floating-point or fixed-point lanes lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = widen_lower_half_to_next_fp_width(a, 0);
dst.fp32[1] = widen_lower_half_to_next_fp_width(a, 1);
dst.fp32[2] = widen_lower_half_to_next_fp_width(a, 2);
dst.fp32[3] = widen_lower_half_to_next_fp_width(a, 3);
dst.fp32[4] = widen_lower_half_to_next_fp_width(a, 4);
dst.fp32[5] = widen_lower_half_to_next_fp_width(a, 5);
dst.fp32[6] = widen_lower_half_to_next_fp_width(a, 6);
dst.fp32[7] = widen_lower_half_to_next_fp_width(a, 7);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 1 |

### Header Mapping

```c
return (__m256)__builtin_lasx_xfexupl_w((v16i16)a);
```

<span id="intrinsic-__lasx_xfexupr_d"></span>

## __m256d __lasx_xfexupr_d (__m256 a)

### Synopsis

```c
__m256d __lasx_xfexupr_d (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xfexupr.d
Builtin: __builtin_lasx_xfexupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2669
```

### Description

Extend upper floating-point or fixed-point lanes lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = widen_upper_half_to_next_fp_width(a, 0);
dst.fp64[1] = widen_upper_half_to_next_fp_width(a, 1);
dst.fp64[2] = widen_upper_half_to_next_fp_width(a, 2);
dst.fp64[3] = widen_upper_half_to_next_fp_width(a, 3);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 1 |

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfexupr_d((v8f32)a);
```

<span id="intrinsic-__lasx_xfexupr_w"></span>

## __m256 __lasx_xfexupr_w (__m256i a)

### Synopsis

```c
__m256 __lasx_xfexupr_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xfexupr.w
Builtin: __builtin_lasx_xfexupr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2662
```

### Description

Extend upper floating-point or fixed-point lanes lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = widen_upper_half_to_next_fp_width(a, 0);
dst.fp32[1] = widen_upper_half_to_next_fp_width(a, 1);
dst.fp32[2] = widen_upper_half_to_next_fp_width(a, 2);
dst.fp32[3] = widen_upper_half_to_next_fp_width(a, 3);
dst.fp32[4] = widen_upper_half_to_next_fp_width(a, 4);
dst.fp32[5] = widen_upper_half_to_next_fp_width(a, 5);
dst.fp32[6] = widen_upper_half_to_next_fp_width(a, 6);
dst.fp32[7] = widen_upper_half_to_next_fp_width(a, 7);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 3 | 1 |

### Header Mapping

```c
return (__m256)__builtin_lasx_xfexupr_w((v16i16)a);
```

<span id="intrinsic-__lasx_xffint_s_d"></span>

## __m256d __lasx_xffint_s_d (__m256i a)

### Synopsis

```c
__m256d __lasx_xffint_s_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xffint.s.d
Builtin: __builtin_lasx_xffint_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2767
```

### Description

Convert integer to floating point lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = float_convert(a.i64[0]);
dst.fp64[1] = float_convert(a.i64[1]);
dst.fp64[2] = float_convert(a.i64[2]);
dst.fp64[3] = float_convert(a.i64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256d)__builtin_lasx_xffint_s_d((v4i64)a);
```

<span id="intrinsic-__lasx_xffint_s_w"></span>

## __m256 __lasx_xffint_s_w (__m256i a)

### Synopsis

```c
__m256 __lasx_xffint_s_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xffint.s.w
Builtin: __builtin_lasx_xffint_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2760
```

### Description

Convert integer to floating point lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = float_convert(a.i32[0]);
dst.fp32[1] = float_convert(a.i32[1]);
dst.fp32[2] = float_convert(a.i32[2]);
dst.fp32[3] = float_convert(a.i32[3]);
dst.fp32[4] = float_convert(a.i32[4]);
dst.fp32[5] = float_convert(a.i32[5]);
dst.fp32[6] = float_convert(a.i32[6]);
dst.fp32[7] = float_convert(a.i32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256)__builtin_lasx_xffint_s_w((v8i32)a);
```

<span id="intrinsic-__lasx_xffint_u_d"></span>

## __m256d __lasx_xffint_u_d (__m256i a)

### Synopsis

```c
__m256d __lasx_xffint_u_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xffint.u.d
Builtin: __builtin_lasx_xffint_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2781
```

### Description

Convert integer to floating point lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = float_convert(a.u64[0]);
dst.fp64[1] = float_convert(a.u64[1]);
dst.fp64[2] = float_convert(a.u64[2]);
dst.fp64[3] = float_convert(a.u64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256d)__builtin_lasx_xffint_u_d((v4u64)a);
```

<span id="intrinsic-__lasx_xffint_u_w"></span>

## __m256 __lasx_xffint_u_w (__m256i a)

### Synopsis

```c
__m256 __lasx_xffint_u_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xffint.u.w
Builtin: __builtin_lasx_xffint_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2774
```

### Description

Convert integer to floating point lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = float_convert(a.u32[0]);
dst.fp32[1] = float_convert(a.u32[1]);
dst.fp32[2] = float_convert(a.u32[2]);
dst.fp32[3] = float_convert(a.u32[3]);
dst.fp32[4] = float_convert(a.u32[4]);
dst.fp32[5] = float_convert(a.u32[5]);
dst.fp32[6] = float_convert(a.u32[6]);
dst.fp32[7] = float_convert(a.u32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256)__builtin_lasx_xffint_u_w((v8u32)a);
```

<span id="intrinsic-__lasx_xfrint_d"></span>

## __m256d __lasx_xfrint_d (__m256d a)

### Synopsis

```c
__m256d __lasx_xfrint_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xfrint.d
Builtin: __builtin_lasx_xfrint_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2613
```

### Description

Round to an integral floating-point value lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = round_to_integral_float(a.fp64[0], rounding_mode_from_suffix);
dst.fp64[1] = round_to_integral_float(a.fp64[1], rounding_mode_from_suffix);
dst.fp64[2] = round_to_integral_float(a.fp64[2], rounding_mode_from_suffix);
dst.fp64[3] = round_to_integral_float(a.fp64[3], rounding_mode_from_suffix);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfrint_d((v4f64)a);
```

<span id="intrinsic-__lasx_xfrint_w"></span>

## __m256 __lasx_xfrint_w (__m256 a)

### Synopsis

```c
__m256 __lasx_xfrint_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xfrint.w
Builtin: __builtin_lasx_xfrint_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2606
```

### Description

Round to an integral floating-point value lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = round_to_integral_float(a.fp32[0], rounding_mode_from_suffix);
dst.fp32[1] = round_to_integral_float(a.fp32[1], rounding_mode_from_suffix);
dst.fp32[2] = round_to_integral_float(a.fp32[2], rounding_mode_from_suffix);
dst.fp32[3] = round_to_integral_float(a.fp32[3], rounding_mode_from_suffix);
dst.fp32[4] = round_to_integral_float(a.fp32[4], rounding_mode_from_suffix);
dst.fp32[5] = round_to_integral_float(a.fp32[5], rounding_mode_from_suffix);
dst.fp32[6] = round_to_integral_float(a.fp32[6], rounding_mode_from_suffix);
dst.fp32[7] = round_to_integral_float(a.fp32[7], rounding_mode_from_suffix);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256)__builtin_lasx_xfrint_w((v8f32)a);
```

<span id="intrinsic-__lasx_xftint_s_d"></span>

## __m256i __lasx_xftint_s_d (__m256d a)

### Synopsis

```c
__m256i __lasx_xftint_s_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xftint.s.d
Builtin: __builtin_lasx_xftint_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2711
```

### Description

Convert floating point to integer lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=current_rounding_mode);
dst.i64[1] = integer_convert(a.fp64[1], rounding=current_rounding_mode);
dst.i64[2] = integer_convert(a.fp64[2], rounding=current_rounding_mode);
dst.i64[3] = integer_convert(a.fp64[3], rounding=current_rounding_mode);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftint_s_d((v4f64)a);
```

<span id="intrinsic-__lasx_xftint_s_w"></span>

## __m256i __lasx_xftint_s_w (__m256 a)

### Synopsis

```c
__m256i __lasx_xftint_s_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xftint.s.w
Builtin: __builtin_lasx_xftint_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2704
```

### Description

Convert floating point to integer lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=current_rounding_mode);
dst.i32[1] = integer_convert(a.fp32[1], rounding=current_rounding_mode);
dst.i32[2] = integer_convert(a.fp32[2], rounding=current_rounding_mode);
dst.i32[3] = integer_convert(a.fp32[3], rounding=current_rounding_mode);
dst.i32[4] = integer_convert(a.fp32[4], rounding=current_rounding_mode);
dst.i32[5] = integer_convert(a.fp32[5], rounding=current_rounding_mode);
dst.i32[6] = integer_convert(a.fp32[6], rounding=current_rounding_mode);
dst.i32[7] = integer_convert(a.fp32[7], rounding=current_rounding_mode);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftint_s_w((v8f32)a);
```

<span id="intrinsic-__lasx_xftint_u_d"></span>

## __m256i __lasx_xftint_u_d (__m256d a)

### Synopsis

```c
__m256i __lasx_xftint_u_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xftint.u.d
Builtin: __builtin_lasx_xftint_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2725
```

### Description

Convert floating point to integer lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.u64[0] = integer_convert(a.fp64[0], rounding=current_rounding_mode);
dst.u64[1] = integer_convert(a.fp64[1], rounding=current_rounding_mode);
dst.u64[2] = integer_convert(a.fp64[2], rounding=current_rounding_mode);
dst.u64[3] = integer_convert(a.fp64[3], rounding=current_rounding_mode);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftint_u_d((v4f64)a);
```

<span id="intrinsic-__lasx_xftint_u_w"></span>

## __m256i __lasx_xftint_u_w (__m256 a)

### Synopsis

```c
__m256i __lasx_xftint_u_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xftint.u.w
Builtin: __builtin_lasx_xftint_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2718
```

### Description

Convert floating point to integer lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.u32[0] = integer_convert(a.fp32[0], rounding=current_rounding_mode);
dst.u32[1] = integer_convert(a.fp32[1], rounding=current_rounding_mode);
dst.u32[2] = integer_convert(a.fp32[2], rounding=current_rounding_mode);
dst.u32[3] = integer_convert(a.fp32[3], rounding=current_rounding_mode);
dst.u32[4] = integer_convert(a.fp32[4], rounding=current_rounding_mode);
dst.u32[5] = integer_convert(a.fp32[5], rounding=current_rounding_mode);
dst.u32[6] = integer_convert(a.fp32[6], rounding=current_rounding_mode);
dst.u32[7] = integer_convert(a.fp32[7], rounding=current_rounding_mode);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftint_u_w((v8f32)a);
```

<span id="intrinsic-__lasx_xftrunc_s_d"></span>

## __m256i __lasx_xftrunc_s_d (__m256d a)

### Synopsis

```c
__m256i __lasx_xftrunc_s_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xftrunc.s.d
Builtin: __builtin_lasx_xftrunc_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2739
```

### Description

Truncate floating point to integer lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_zero);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_zero);
dst.i64[2] = integer_convert(a.fp64[2], rounding=toward_zero);
dst.i64[3] = integer_convert(a.fp64[3], rounding=toward_zero);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftrunc_s_d((v4f64)a);
```

<span id="intrinsic-__lasx_xftrunc_s_w"></span>

## __m256i __lasx_xftrunc_s_w (__m256 a)

### Synopsis

```c
__m256i __lasx_xftrunc_s_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xftrunc.s.w
Builtin: __builtin_lasx_xftrunc_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2732
```

### Description

Truncate floating point to integer lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=toward_zero);
dst.i32[1] = integer_convert(a.fp32[1], rounding=toward_zero);
dst.i32[2] = integer_convert(a.fp32[2], rounding=toward_zero);
dst.i32[3] = integer_convert(a.fp32[3], rounding=toward_zero);
dst.i32[4] = integer_convert(a.fp32[4], rounding=toward_zero);
dst.i32[5] = integer_convert(a.fp32[5], rounding=toward_zero);
dst.i32[6] = integer_convert(a.fp32[6], rounding=toward_zero);
dst.i32[7] = integer_convert(a.fp32[7], rounding=toward_zero);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftrunc_s_w((v8f32)a);
```

<span id="intrinsic-__lasx_xftrunc_u_d"></span>

## __m256i __lasx_xftrunc_u_d (__m256d a)

### Synopsis

```c
__m256i __lasx_xftrunc_u_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xftrunc.u.d
Builtin: __builtin_lasx_xftrunc_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2753
```

### Description

Truncate floating point to integer lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.u64[0] = integer_convert(a.fp64[0], rounding=toward_zero);
dst.u64[1] = integer_convert(a.fp64[1], rounding=toward_zero);
dst.u64[2] = integer_convert(a.fp64[2], rounding=toward_zero);
dst.u64[3] = integer_convert(a.fp64[3], rounding=toward_zero);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftrunc_u_d((v4f64)a);
```

<span id="intrinsic-__lasx_xftrunc_u_w"></span>

## __m256i __lasx_xftrunc_u_w (__m256 a)

### Synopsis

```c
__m256i __lasx_xftrunc_u_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xftrunc.u.w
Builtin: __builtin_lasx_xftrunc_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2746
```

### Description

Truncate floating point to integer lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.u32[0] = integer_convert(a.fp32[0], rounding=toward_zero);
dst.u32[1] = integer_convert(a.fp32[1], rounding=toward_zero);
dst.u32[2] = integer_convert(a.fp32[2], rounding=toward_zero);
dst.u32[3] = integer_convert(a.fp32[3], rounding=toward_zero);
dst.u32[4] = integer_convert(a.fp32[4], rounding=toward_zero);
dst.u32[5] = integer_convert(a.fp32[5], rounding=toward_zero);
dst.u32[6] = integer_convert(a.fp32[6], rounding=toward_zero);
dst.u32[7] = integer_convert(a.fp32[7], rounding=toward_zero);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftrunc_u_w((v8f32)a);
```

<span id="intrinsic-__lasx_xvfceil_d"></span>

## __m256i __lasx_xvfceil_d (__m256d a)

### Synopsis

```c
__m256i __lasx_xvfceil_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xvfceil.d
Builtin: __builtin_lasx_xvfceil_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3897
```

### Description

Round toward positive infinity and convert lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_positive_infinity);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_positive_infinity);
dst.i64[2] = integer_convert(a.fp64[2], rounding=toward_positive_infinity);
dst.i64[3] = integer_convert(a.fp64[3], rounding=toward_positive_infinity);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfceil_d((v4f64)a);
```

<span id="intrinsic-__lasx_xvfceil_w"></span>

## __m256i __lasx_xvfceil_w (__m256 a)

### Synopsis

```c
__m256i __lasx_xvfceil_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvfceil.w
Builtin: __builtin_lasx_xvfceil_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3890
```

### Description

Round toward positive infinity and convert lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=toward_positive_infinity);
dst.i32[1] = integer_convert(a.fp32[1], rounding=toward_positive_infinity);
dst.i32[2] = integer_convert(a.fp32[2], rounding=toward_positive_infinity);
dst.i32[3] = integer_convert(a.fp32[3], rounding=toward_positive_infinity);
dst.i32[4] = integer_convert(a.fp32[4], rounding=toward_positive_infinity);
dst.i32[5] = integer_convert(a.fp32[5], rounding=toward_positive_infinity);
dst.i32[6] = integer_convert(a.fp32[6], rounding=toward_positive_infinity);
dst.i32[7] = integer_convert(a.fp32[7], rounding=toward_positive_infinity);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfceil_w((v8f32)a);
```

<span id="intrinsic-__lasx_xvfceildo_w"></span>

## __m256i __lasx_xvfceildo_w (__m256d a, __m256d b)

### Synopsis

```c
__m256i __lasx_xvfceildo_w (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xvfceildo.w
Builtin: __builtin_lasx_xvfceildo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3939
```

### Description

Round toward positive infinity and convert lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=toward_positive_infinity);
dst.i32[1] = integer_convert(a.fp32[1], rounding=toward_positive_infinity);
dst.i32[2] = integer_convert(a.fp32[2], rounding=toward_positive_infinity);
dst.i32[3] = integer_convert(a.fp32[3], rounding=toward_positive_infinity);
dst.i32[4] = integer_convert(a.fp32[4], rounding=toward_positive_infinity);
dst.i32[5] = integer_convert(a.fp32[5], rounding=toward_positive_infinity);
dst.i32[6] = integer_convert(a.fp32[6], rounding=toward_positive_infinity);
dst.i32[7] = integer_convert(a.fp32[7], rounding=toward_positive_infinity);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfceildo_w((v4f64)a, (v4f64)b);
```

<span id="intrinsic-__lasx_xvfceilupl_d"></span>

## __m256i __lasx_xvfceilupl_d (__m256 a)

### Synopsis

```c
__m256i __lasx_xvfceilupl_d (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvfceilupl.d
Builtin: __builtin_lasx_xvfceilupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4002
```

### Description

Round toward positive infinity and convert lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_positive_infinity);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_positive_infinity);
dst.i64[2] = integer_convert(a.fp64[2], rounding=toward_positive_infinity);
dst.i64[3] = integer_convert(a.fp64[3], rounding=toward_positive_infinity);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfceilupl_d((v8f32)a);
```

<span id="intrinsic-__lasx_xvfceilupr_d"></span>

## __m256i __lasx_xvfceilupr_d (__m256 a)

### Synopsis

```c
__m256i __lasx_xvfceilupr_d (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvfceilupr.d
Builtin: __builtin_lasx_xvfceilupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4009
```

### Description

Round toward positive infinity and convert lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_positive_infinity);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_positive_infinity);
dst.i64[2] = integer_convert(a.fp64[2], rounding=toward_positive_infinity);
dst.i64[3] = integer_convert(a.fp64[3], rounding=toward_positive_infinity);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfceilupr_d((v8f32)a);
```

<span id="intrinsic-__lasx_xvffintdo_w"></span>

## __m256 __lasx_xvffintdo_w (__m256i a, __m256i b)

### Synopsis

```c
__m256 __lasx_xvffintdo_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: xvffintdo.w
Builtin: __builtin_lasx_xvffintdo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3925
```

### Description

Convert integer to floating point lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = float_convert(a.i32[0]);
dst.fp32[1] = float_convert(a.i32[1]);
dst.fp32[2] = float_convert(a.i32[2]);
dst.fp32[3] = float_convert(a.i32[3]);
dst.fp32[4] = float_convert(a.i32[4]);
dst.fp32[5] = float_convert(a.i32[5]);
dst.fp32[6] = float_convert(a.i32[6]);
dst.fp32[7] = float_convert(a.i32[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256)__builtin_lasx_xvffintdo_w((v4i64)a, (v4i64)b);
```

<span id="intrinsic-__lasx_xvffintupl_d"></span>

## __m256d __lasx_xvffintupl_d (__m256i a)

### Synopsis

```c
__m256d __lasx_xvffintupl_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xvffintupl.d
Builtin: __builtin_lasx_xvffintupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3974
```

### Description

Convert integer to floating point lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = float_convert(a.i64[0]);
dst.fp64[1] = float_convert(a.i64[1]);
dst.fp64[2] = float_convert(a.i64[2]);
dst.fp64[3] = float_convert(a.i64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvffintupl_d((v8i32)a);
```

<span id="intrinsic-__lasx_xvffintupr_d"></span>

## __m256d __lasx_xvffintupr_d (__m256i a)

### Synopsis

```c
__m256d __lasx_xvffintupr_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xvffintupr.d
Builtin: __builtin_lasx_xvffintupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3981
```

### Description

Convert integer to floating point lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = float_convert(a.i64[0]);
dst.fp64[1] = float_convert(a.i64[1]);
dst.fp64[2] = float_convert(a.i64[2]);
dst.fp64[3] = float_convert(a.i64[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvffintupr_d((v8i32)a);
```

<span id="intrinsic-__lasx_xvffloor_d"></span>

## __m256i __lasx_xvffloor_d (__m256d a)

### Synopsis

```c
__m256i __lasx_xvffloor_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xvffloor.d
Builtin: __builtin_lasx_xvffloor_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3911
```

### Description

Round toward negative infinity and convert lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_negative_infinity);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_negative_infinity);
dst.i64[2] = integer_convert(a.fp64[2], rounding=toward_negative_infinity);
dst.i64[3] = integer_convert(a.fp64[3], rounding=toward_negative_infinity);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvffloor_d((v4f64)a);
```

<span id="intrinsic-__lasx_xvffloor_w"></span>

## __m256i __lasx_xvffloor_w (__m256 a)

### Synopsis

```c
__m256i __lasx_xvffloor_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvffloor.w
Builtin: __builtin_lasx_xvffloor_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3904
```

### Description

Round toward negative infinity and convert lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=toward_negative_infinity);
dst.i32[1] = integer_convert(a.fp32[1], rounding=toward_negative_infinity);
dst.i32[2] = integer_convert(a.fp32[2], rounding=toward_negative_infinity);
dst.i32[3] = integer_convert(a.fp32[3], rounding=toward_negative_infinity);
dst.i32[4] = integer_convert(a.fp32[4], rounding=toward_negative_infinity);
dst.i32[5] = integer_convert(a.fp32[5], rounding=toward_negative_infinity);
dst.i32[6] = integer_convert(a.fp32[6], rounding=toward_negative_infinity);
dst.i32[7] = integer_convert(a.fp32[7], rounding=toward_negative_infinity);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvffloor_w((v8f32)a);
```

<span id="intrinsic-__lasx_xvffloordo_w"></span>

## __m256i __lasx_xvffloordo_w (__m256d a, __m256d b)

### Synopsis

```c
__m256i __lasx_xvffloordo_w (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xvffloordo.w
Builtin: __builtin_lasx_xvffloordo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3946
```

### Description

Round toward negative infinity and convert lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=toward_negative_infinity);
dst.i32[1] = integer_convert(a.fp32[1], rounding=toward_negative_infinity);
dst.i32[2] = integer_convert(a.fp32[2], rounding=toward_negative_infinity);
dst.i32[3] = integer_convert(a.fp32[3], rounding=toward_negative_infinity);
dst.i32[4] = integer_convert(a.fp32[4], rounding=toward_negative_infinity);
dst.i32[5] = integer_convert(a.fp32[5], rounding=toward_negative_infinity);
dst.i32[6] = integer_convert(a.fp32[6], rounding=toward_negative_infinity);
dst.i32[7] = integer_convert(a.fp32[7], rounding=toward_negative_infinity);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvffloordo_w((v4f64)a, (v4f64)b);
```

<span id="intrinsic-__lasx_xvffloorupl_d"></span>

## __m256i __lasx_xvffloorupl_d (__m256 a)

### Synopsis

```c
__m256i __lasx_xvffloorupl_d (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvffloorupl.d
Builtin: __builtin_lasx_xvffloorupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4016
```

### Description

Round toward negative infinity and convert lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_negative_infinity);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_negative_infinity);
dst.i64[2] = integer_convert(a.fp64[2], rounding=toward_negative_infinity);
dst.i64[3] = integer_convert(a.fp64[3], rounding=toward_negative_infinity);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvffloorupl_d((v8f32)a);
```

<span id="intrinsic-__lasx_xvffloorupr_d"></span>

## __m256i __lasx_xvffloorupr_d (__m256 a)

### Synopsis

```c
__m256i __lasx_xvffloorupr_d (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvffloorupr.d
Builtin: __builtin_lasx_xvffloorupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4023
```

### Description

Round toward negative infinity and convert lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_negative_infinity);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_negative_infinity);
dst.i64[2] = integer_convert(a.fp64[2], rounding=toward_negative_infinity);
dst.i64[3] = integer_convert(a.fp64[3], rounding=toward_negative_infinity);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvffloorupr_d((v8f32)a);
```

<span id="intrinsic-__lasx_xvfrint_rm00_d"></span>

## __m256i __lasx_xvfrint_rm00_d (__m256d a)

### Synopsis

```c
__m256i __lasx_xvfrint_rm00_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm00.d
Builtin: __builtin_lasx_xvfrint_rm00_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4051
```

### Description

Round to an integral floating-point value lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = round_to_integral_float(a.fp64[0], rounding_mode_from_suffix);
dst.fp64[1] = round_to_integral_float(a.fp64[1], rounding_mode_from_suffix);
dst.fp64[2] = round_to_integral_float(a.fp64[2], rounding_mode_from_suffix);
dst.fp64[3] = round_to_integral_float(a.fp64[3], rounding_mode_from_suffix);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm00_d((v4f64)a);
```

<span id="intrinsic-__lasx_xvfrint_rm00_w"></span>

## __m256i __lasx_xvfrint_rm00_w (__m256 a)

### Synopsis

```c
__m256i __lasx_xvfrint_rm00_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm00.w
Builtin: __builtin_lasx_xvfrint_rm00_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4044
```

### Description

Round to an integral floating-point value lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = round_to_integral_float(a.fp32[0], rounding_mode_from_suffix);
dst.fp32[1] = round_to_integral_float(a.fp32[1], rounding_mode_from_suffix);
dst.fp32[2] = round_to_integral_float(a.fp32[2], rounding_mode_from_suffix);
dst.fp32[3] = round_to_integral_float(a.fp32[3], rounding_mode_from_suffix);
dst.fp32[4] = round_to_integral_float(a.fp32[4], rounding_mode_from_suffix);
dst.fp32[5] = round_to_integral_float(a.fp32[5], rounding_mode_from_suffix);
dst.fp32[6] = round_to_integral_float(a.fp32[6], rounding_mode_from_suffix);
dst.fp32[7] = round_to_integral_float(a.fp32[7], rounding_mode_from_suffix);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm00_w((v8f32)a);
```

<span id="intrinsic-__lasx_xvfrint_rm01_d"></span>

## __m256i __lasx_xvfrint_rm01_d (__m256d a)

### Synopsis

```c
__m256i __lasx_xvfrint_rm01_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm01.d
Builtin: __builtin_lasx_xvfrint_rm01_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4065
```

### Description

Round to an integral floating-point value lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = round_to_integral_float(a.fp64[0], rounding_mode_from_suffix);
dst.fp64[1] = round_to_integral_float(a.fp64[1], rounding_mode_from_suffix);
dst.fp64[2] = round_to_integral_float(a.fp64[2], rounding_mode_from_suffix);
dst.fp64[3] = round_to_integral_float(a.fp64[3], rounding_mode_from_suffix);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm01_d((v4f64)a);
```

<span id="intrinsic-__lasx_xvfrint_rm01_w"></span>

## __m256i __lasx_xvfrint_rm01_w (__m256 a)

### Synopsis

```c
__m256i __lasx_xvfrint_rm01_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm01.w
Builtin: __builtin_lasx_xvfrint_rm01_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4058
```

### Description

Round to an integral floating-point value lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = round_to_integral_float(a.fp32[0], rounding_mode_from_suffix);
dst.fp32[1] = round_to_integral_float(a.fp32[1], rounding_mode_from_suffix);
dst.fp32[2] = round_to_integral_float(a.fp32[2], rounding_mode_from_suffix);
dst.fp32[3] = round_to_integral_float(a.fp32[3], rounding_mode_from_suffix);
dst.fp32[4] = round_to_integral_float(a.fp32[4], rounding_mode_from_suffix);
dst.fp32[5] = round_to_integral_float(a.fp32[5], rounding_mode_from_suffix);
dst.fp32[6] = round_to_integral_float(a.fp32[6], rounding_mode_from_suffix);
dst.fp32[7] = round_to_integral_float(a.fp32[7], rounding_mode_from_suffix);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm01_w((v8f32)a);
```

<span id="intrinsic-__lasx_xvfrint_rm10_d"></span>

## __m256i __lasx_xvfrint_rm10_d (__m256d a)

### Synopsis

```c
__m256i __lasx_xvfrint_rm10_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm10.d
Builtin: __builtin_lasx_xvfrint_rm10_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4079
```

### Description

Round to an integral floating-point value lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = round_to_integral_float(a.fp64[0], rounding_mode_from_suffix);
dst.fp64[1] = round_to_integral_float(a.fp64[1], rounding_mode_from_suffix);
dst.fp64[2] = round_to_integral_float(a.fp64[2], rounding_mode_from_suffix);
dst.fp64[3] = round_to_integral_float(a.fp64[3], rounding_mode_from_suffix);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm10_d((v4f64)a);
```

<span id="intrinsic-__lasx_xvfrint_rm10_w"></span>

## __m256i __lasx_xvfrint_rm10_w (__m256 a)

### Synopsis

```c
__m256i __lasx_xvfrint_rm10_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm10.w
Builtin: __builtin_lasx_xvfrint_rm10_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4072
```

### Description

Round to an integral floating-point value lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = round_to_integral_float(a.fp32[0], rounding_mode_from_suffix);
dst.fp32[1] = round_to_integral_float(a.fp32[1], rounding_mode_from_suffix);
dst.fp32[2] = round_to_integral_float(a.fp32[2], rounding_mode_from_suffix);
dst.fp32[3] = round_to_integral_float(a.fp32[3], rounding_mode_from_suffix);
dst.fp32[4] = round_to_integral_float(a.fp32[4], rounding_mode_from_suffix);
dst.fp32[5] = round_to_integral_float(a.fp32[5], rounding_mode_from_suffix);
dst.fp32[6] = round_to_integral_float(a.fp32[6], rounding_mode_from_suffix);
dst.fp32[7] = round_to_integral_float(a.fp32[7], rounding_mode_from_suffix);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm10_w((v8f32)a);
```

<span id="intrinsic-__lasx_xvfrint_rm11_d"></span>

## __m256i __lasx_xvfrint_rm11_d (__m256d a)

### Synopsis

```c
__m256i __lasx_xvfrint_rm11_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm11.d
Builtin: __builtin_lasx_xvfrint_rm11_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4093
```

### Description

Round to an integral floating-point value lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = round_to_integral_float(a.fp64[0], rounding_mode_from_suffix);
dst.fp64[1] = round_to_integral_float(a.fp64[1], rounding_mode_from_suffix);
dst.fp64[2] = round_to_integral_float(a.fp64[2], rounding_mode_from_suffix);
dst.fp64[3] = round_to_integral_float(a.fp64[3], rounding_mode_from_suffix);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm11_d((v4f64)a);
```

<span id="intrinsic-__lasx_xvfrint_rm11_w"></span>

## __m256i __lasx_xvfrint_rm11_w (__m256 a)

### Synopsis

```c
__m256i __lasx_xvfrint_rm11_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm11.w
Builtin: __builtin_lasx_xvfrint_rm11_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4086
```

### Description

Round to an integral floating-point value lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = round_to_integral_float(a.fp32[0], rounding_mode_from_suffix);
dst.fp32[1] = round_to_integral_float(a.fp32[1], rounding_mode_from_suffix);
dst.fp32[2] = round_to_integral_float(a.fp32[2], rounding_mode_from_suffix);
dst.fp32[3] = round_to_integral_float(a.fp32[3], rounding_mode_from_suffix);
dst.fp32[4] = round_to_integral_float(a.fp32[4], rounding_mode_from_suffix);
dst.fp32[5] = round_to_integral_float(a.fp32[5], rounding_mode_from_suffix);
dst.fp32[6] = round_to_integral_float(a.fp32[6], rounding_mode_from_suffix);
dst.fp32[7] = round_to_integral_float(a.fp32[7], rounding_mode_from_suffix);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm11_w((v8f32)a);
```

<span id="intrinsic-__lasx_xvfround_d"></span>

## __m256i __lasx_xvfround_d (__m256d a)

### Synopsis

```c
__m256i __lasx_xvfround_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xvfround.d
Builtin: __builtin_lasx_xvfround_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3883
```

### Description

Round to nearest and convert lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=nearest);
dst.i64[1] = integer_convert(a.fp64[1], rounding=nearest);
dst.i64[2] = integer_convert(a.fp64[2], rounding=nearest);
dst.i64[3] = integer_convert(a.fp64[3], rounding=nearest);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfround_d((v4f64)a);
```

<span id="intrinsic-__lasx_xvfround_w"></span>

## __m256i __lasx_xvfround_w (__m256 a)

### Synopsis

```c
__m256i __lasx_xvfround_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvfround.w
Builtin: __builtin_lasx_xvfround_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3876
```

### Description

Round to nearest and convert lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=nearest);
dst.i32[1] = integer_convert(a.fp32[1], rounding=nearest);
dst.i32[2] = integer_convert(a.fp32[2], rounding=nearest);
dst.i32[3] = integer_convert(a.fp32[3], rounding=nearest);
dst.i32[4] = integer_convert(a.fp32[4], rounding=nearest);
dst.i32[5] = integer_convert(a.fp32[5], rounding=nearest);
dst.i32[6] = integer_convert(a.fp32[6], rounding=nearest);
dst.i32[7] = integer_convert(a.fp32[7], rounding=nearest);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 4 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfround_w((v8f32)a);
```

<span id="intrinsic-__lasx_xvfrounddo_w"></span>

## __m256i __lasx_xvfrounddo_w (__m256d a, __m256d b)

### Synopsis

```c
__m256i __lasx_xvfrounddo_w (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xvfrounddo.w
Builtin: __builtin_lasx_xvfrounddo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3953
```

### Description

Round to nearest and convert lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=nearest);
dst.i32[1] = integer_convert(a.fp32[1], rounding=nearest);
dst.i32[2] = integer_convert(a.fp32[2], rounding=nearest);
dst.i32[3] = integer_convert(a.fp32[3], rounding=nearest);
dst.i32[4] = integer_convert(a.fp32[4], rounding=nearest);
dst.i32[5] = integer_convert(a.fp32[5], rounding=nearest);
dst.i32[6] = integer_convert(a.fp32[6], rounding=nearest);
dst.i32[7] = integer_convert(a.fp32[7], rounding=nearest);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrounddo_w((v4f64)a, (v4f64)b);
```

<span id="intrinsic-__lasx_xvfroundupl_d"></span>

## __m256i __lasx_xvfroundupl_d (__m256 a)

### Synopsis

```c
__m256i __lasx_xvfroundupl_d (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvfroundupl.d
Builtin: __builtin_lasx_xvfroundupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4030
```

### Description

Round to nearest and convert lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=nearest);
dst.i64[1] = integer_convert(a.fp64[1], rounding=nearest);
dst.i64[2] = integer_convert(a.fp64[2], rounding=nearest);
dst.i64[3] = integer_convert(a.fp64[3], rounding=nearest);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfroundupl_d((v8f32)a);
```

<span id="intrinsic-__lasx_xvfroundupr_d"></span>

## __m256i __lasx_xvfroundupr_d (__m256 a)

### Synopsis

```c
__m256i __lasx_xvfroundupr_d (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvfroundupr.d
Builtin: __builtin_lasx_xvfroundupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4037
```

### Description

Round to nearest and convert lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=nearest);
dst.i64[1] = integer_convert(a.fp64[1], rounding=nearest);
dst.i64[2] = integer_convert(a.fp64[2], rounding=nearest);
dst.i64[3] = integer_convert(a.fp64[3], rounding=nearest);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfroundupr_d((v8f32)a);
```

<span id="intrinsic-__lasx_xvftintdo_w"></span>

## __m256i __lasx_xvftintdo_w (__m256d a, __m256d b)

### Synopsis

```c
__m256i __lasx_xvftintdo_w (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xvftintdo.w
Builtin: __builtin_lasx_xvftintdo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3918
```

### Description

Convert floating point to integer lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=current_rounding_mode);
dst.i32[1] = integer_convert(a.fp32[1], rounding=current_rounding_mode);
dst.i32[2] = integer_convert(a.fp32[2], rounding=current_rounding_mode);
dst.i32[3] = integer_convert(a.fp32[3], rounding=current_rounding_mode);
dst.i32[4] = integer_convert(a.fp32[4], rounding=current_rounding_mode);
dst.i32[5] = integer_convert(a.fp32[5], rounding=current_rounding_mode);
dst.i32[6] = integer_convert(a.fp32[6], rounding=current_rounding_mode);
dst.i32[7] = integer_convert(a.fp32[7], rounding=current_rounding_mode);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvftintdo_w((v4f64)a, (v4f64)b);
```

<span id="intrinsic-__lasx_xvftintupl_d"></span>

## __m256i __lasx_xvftintupl_d (__m256 a)

### Synopsis

```c
__m256i __lasx_xvftintupl_d (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvftintupl.d
Builtin: __builtin_lasx_xvftintupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3960
```

### Description

Convert floating point to integer lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=current_rounding_mode);
dst.i64[1] = integer_convert(a.fp64[1], rounding=current_rounding_mode);
dst.i64[2] = integer_convert(a.fp64[2], rounding=current_rounding_mode);
dst.i64[3] = integer_convert(a.fp64[3], rounding=current_rounding_mode);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvftintupl_d((v8f32)a);
```

<span id="intrinsic-__lasx_xvftintupr_d"></span>

## __m256i __lasx_xvftintupr_d (__m256 a)

### Synopsis

```c
__m256i __lasx_xvftintupr_d (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvftintupr.d
Builtin: __builtin_lasx_xvftintupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3967
```

### Description

Convert floating point to integer lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=current_rounding_mode);
dst.i64[1] = integer_convert(a.fp64[1], rounding=current_rounding_mode);
dst.i64[2] = integer_convert(a.fp64[2], rounding=current_rounding_mode);
dst.i64[3] = integer_convert(a.fp64[3], rounding=current_rounding_mode);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvftintupr_d((v8f32)a);
```

<span id="intrinsic-__lasx_xvftruncdo_w"></span>

## __m256i __lasx_xvftruncdo_w (__m256d a, __m256d b)

### Synopsis

```c
__m256i __lasx_xvftruncdo_w (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xvftruncdo.w
Builtin: __builtin_lasx_xvftruncdo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3932
```

### Description

Truncate floating point to integer lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=toward_zero);
dst.i32[1] = integer_convert(a.fp32[1], rounding=toward_zero);
dst.i32[2] = integer_convert(a.fp32[2], rounding=toward_zero);
dst.i32[3] = integer_convert(a.fp32[3], rounding=toward_zero);
dst.i32[4] = integer_convert(a.fp32[4], rounding=toward_zero);
dst.i32[5] = integer_convert(a.fp32[5], rounding=toward_zero);
dst.i32[6] = integer_convert(a.fp32[6], rounding=toward_zero);
dst.i32[7] = integer_convert(a.fp32[7], rounding=toward_zero);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvftruncdo_w((v4f64)a, (v4f64)b);
```

<span id="intrinsic-__lasx_xvftruncupl_d"></span>

## __m256i __lasx_xvftruncupl_d (__m256 a)

### Synopsis

```c
__m256i __lasx_xvftruncupl_d (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvftruncupl.d
Builtin: __builtin_lasx_xvftruncupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3988
```

### Description

Truncate floating point to integer lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_zero);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_zero);
dst.i64[2] = integer_convert(a.fp64[2], rounding=toward_zero);
dst.i64[3] = integer_convert(a.fp64[3], rounding=toward_zero);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvftruncupl_d((v8f32)a);
```

<span id="intrinsic-__lasx_xvftruncupr_d"></span>

## __m256i __lasx_xvftruncupr_d (__m256 a)

### Synopsis

```c
__m256i __lasx_xvftruncupr_d (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvftruncupr.d
Builtin: __builtin_lasx_xvftruncupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3995
```

### Description

Truncate floating point to integer lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_zero);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_zero);
dst.i64[2] = integer_convert(a.fp64[2], rounding=toward_zero);
dst.i64[3] = integer_convert(a.fp64[3], rounding=toward_zero);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvftruncupr_d((v8f32)a);
```

