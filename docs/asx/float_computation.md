# Float Computation

Generated from `include/loongson-asxintrin.h`. This page contains 54 intrinsics.

## __m256d __lasx_xfadd_d (__m256d a, __m256d b)

### Synopsis

```c
__m256d __lasx_xfadd_d (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xfadd.d
Builtin: __builtin_lasx_xfadd_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2305
```

### Description

Add lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] + b.fp64[0];
dst.fp64[1] = a.fp64[1] + b.fp64[1];
dst.fp64[2] = a.fp64[2] + b.fp64[2];
dst.fp64[3] = a.fp64[3] + b.fp64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfadd_d((v4f64)a, (v4f64)b);
```

## __m256 __lasx_xfadd_w (__m256 a, __m256 b)

### Synopsis

```c
__m256 __lasx_xfadd_w (__m256 a, __m256 b)
#include <loongson-asxintrin.h>
Instruction: xfadd.w
Builtin: __builtin_lasx_xfadd_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2298
```

### Description

Add lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] + b.fp32[0];
dst.fp32[1] = a.fp32[1] + b.fp32[1];
dst.fp32[2] = a.fp32[2] + b.fp32[2];
dst.fp32[3] = a.fp32[3] + b.fp32[3];
dst.fp32[4] = a.fp32[4] + b.fp32[4];
dst.fp32[5] = a.fp32[5] + b.fp32[5];
dst.fp32[6] = a.fp32[6] + b.fp32[6];
dst.fp32[7] = a.fp32[7] + b.fp32[7];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xfadd_w((v8f32)a, (v8f32)b);
```

## __m256d __lasx_xfdiv_d (__m256d a, __m256d b)

### Synopsis

```c
__m256d __lasx_xfdiv_d (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xfdiv.d
Builtin: __builtin_lasx_xfdiv_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2347
```

### Description

Divide lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] / b.fp64[0];
dst.fp64[1] = a.fp64[1] / b.fp64[1];
dst.fp64[2] = a.fp64[2] / b.fp64[2];
dst.fp64[3] = a.fp64[3] / b.fp64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>8.21/23</td><td>0.15(1/6.67)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfdiv_d((v4f64)a, (v4f64)b);
```

## __m256 __lasx_xfdiv_w (__m256 a, __m256 b)

### Synopsis

```c
__m256 __lasx_xfdiv_w (__m256 a, __m256 b)
#include <loongson-asxintrin.h>
Instruction: xfdiv.w
Builtin: __builtin_lasx_xfdiv_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2340
```

### Description

Divide lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] / b.fp32[0];
dst.fp32[1] = a.fp32[1] / b.fp32[1];
dst.fp32[2] = a.fp32[2] / b.fp32[2];
dst.fp32[3] = a.fp32[3] / b.fp32[3];
dst.fp32[4] = a.fp32[4] / b.fp32[4];
dst.fp32[5] = a.fp32[5] / b.fp32[5];
dst.fp32[6] = a.fp32[6] / b.fp32[6];
dst.fp32[7] = a.fp32[7] / b.fp32[7];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>11/27</td><td>0.11(1/9.38)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xfdiv_w((v8f32)a, (v8f32)b);
```

## __m256d __lasx_xffql_d (__m256i a)

### Synopsis

```c
__m256d __lasx_xffql_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xffql.d
Builtin: __builtin_lasx_xffql_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2683
```

### Description

Convert lower fixed-point q-format lanes to floating point lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fixed_point_q_to_float_lower_half(a, 0);
dst.fp64[1] = fixed_point_q_to_float_lower_half(a, 1);
dst.fp64[2] = fixed_point_q_to_float_lower_half(a, 2);
dst.fp64[3] = fixed_point_q_to_float_lower_half(a, 3);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xffql_d((v8i32)a);
```

## __m256 __lasx_xffql_w (__m256i a)

### Synopsis

```c
__m256 __lasx_xffql_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xffql.w
Builtin: __builtin_lasx_xffql_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2676
```

### Description

Convert lower fixed-point q-format lanes to floating point lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fixed_point_q_to_float_lower_half(a, 0);
dst.fp32[1] = fixed_point_q_to_float_lower_half(a, 1);
dst.fp32[2] = fixed_point_q_to_float_lower_half(a, 2);
dst.fp32[3] = fixed_point_q_to_float_lower_half(a, 3);
dst.fp32[4] = fixed_point_q_to_float_lower_half(a, 4);
dst.fp32[5] = fixed_point_q_to_float_lower_half(a, 5);
dst.fp32[6] = fixed_point_q_to_float_lower_half(a, 6);
dst.fp32[7] = fixed_point_q_to_float_lower_half(a, 7);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xffql_w((v16i16)a);
```

## __m256d __lasx_xffqr_d (__m256i a)

### Synopsis

```c
__m256d __lasx_xffqr_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xffqr.d
Builtin: __builtin_lasx_xffqr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2697
```

### Description

Convert upper fixed-point q-format lanes to floating point lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fixed_point_q_to_float_upper_half(a, 0);
dst.fp64[1] = fixed_point_q_to_float_upper_half(a, 1);
dst.fp64[2] = fixed_point_q_to_float_upper_half(a, 2);
dst.fp64[3] = fixed_point_q_to_float_upper_half(a, 3);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xffqr_d((v8i32)a);
```

## __m256 __lasx_xffqr_w (__m256i a)

### Synopsis

```c
__m256 __lasx_xffqr_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xffqr.w
Builtin: __builtin_lasx_xffqr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2690
```

### Description

Convert upper fixed-point q-format lanes to floating point lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fixed_point_q_to_float_upper_half(a, 0);
dst.fp32[1] = fixed_point_q_to_float_upper_half(a, 1);
dst.fp32[2] = fixed_point_q_to_float_upper_half(a, 2);
dst.fp32[3] = fixed_point_q_to_float_upper_half(a, 3);
dst.fp32[4] = fixed_point_q_to_float_upper_half(a, 4);
dst.fp32[5] = fixed_point_q_to_float_upper_half(a, 5);
dst.fp32[6] = fixed_point_q_to_float_upper_half(a, 6);
dst.fp32[7] = fixed_point_q_to_float_upper_half(a, 7);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xffqr_w((v16i16)a);
```

## __m256d __lasx_xflog2_d (__m256d a)

### Synopsis

```c
__m256d __lasx_xflog2_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xflog2.d
Builtin: __builtin_lasx_xflog2_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2641
```

### Description

Compute base-2 logarithm lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = log2(a.fp64[0]);
dst.fp64[1] = log2(a.fp64[1]);
dst.fp64[2] = log2(a.fp64[2]);
dst.fp64[3] = log2(a.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xflog2_d((v4f64)a);
```

## __m256 __lasx_xflog2_w (__m256 a)

### Synopsis

```c
__m256 __lasx_xflog2_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xflog2.w
Builtin: __builtin_lasx_xflog2_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2634
```

### Description

Compute base-2 logarithm lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = log2(a.fp32[0]);
dst.fp32[1] = log2(a.fp32[1]);
dst.fp32[2] = log2(a.fp32[2]);
dst.fp32[3] = log2(a.fp32[3]);
dst.fp32[4] = log2(a.fp32[4]);
dst.fp32[5] = log2(a.fp32[5]);
dst.fp32[6] = log2(a.fp32[6]);
dst.fp32[7] = log2(a.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xflog2_w((v8f32)a);
```

## __m256d __lasx_xfmadd_d (__m256d a, __m256d b, __m256d c)

### Synopsis

```c
__m256d __lasx_xfmadd_d (__m256d a, __m256d b, __m256d c)
#include <loongson-asxintrin.h>
Instruction: xfmadd.d
Builtin: __builtin_lasx_xfmadd_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2361
```

### Description

Fused multiply-add lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fused_round((a.fp64[0] * b.fp64[0]) + c.fp64[0]);
dst.fp64[1] = fused_round((a.fp64[1] * b.fp64[1]) + c.fp64[1]);
dst.fp64[2] = fused_round((a.fp64[2] * b.fp64[2]) + c.fp64[2]);
dst.fp64[3] = fused_round((a.fp64[3] * b.fp64[3]) + c.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmadd_d((v4f64)a, (v4f64)b, (v4f64)c);
```

## __m256 __lasx_xfmadd_w (__m256 a, __m256 b, __m256 c)

### Synopsis

```c
__m256 __lasx_xfmadd_w (__m256 a, __m256 b, __m256 c)
#include <loongson-asxintrin.h>
Instruction: xfmadd.w
Builtin: __builtin_lasx_xfmadd_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2354
```

### Description

Fused multiply-add lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fused_round((a.fp32[0] * b.fp32[0]) + c.fp32[0]);
dst.fp32[1] = fused_round((a.fp32[1] * b.fp32[1]) + c.fp32[1]);
dst.fp32[2] = fused_round((a.fp32[2] * b.fp32[2]) + c.fp32[2]);
dst.fp32[3] = fused_round((a.fp32[3] * b.fp32[3]) + c.fp32[3]);
dst.fp32[4] = fused_round((a.fp32[4] * b.fp32[4]) + c.fp32[4]);
dst.fp32[5] = fused_round((a.fp32[5] * b.fp32[5]) + c.fp32[5]);
dst.fp32[6] = fused_round((a.fp32[6] * b.fp32[6]) + c.fp32[6]);
dst.fp32[7] = fused_round((a.fp32[7] * b.fp32[7]) + c.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmadd_w((v8f32)a, (v8f32)b, (v8f32)c);
```

## __m256d __lasx_xfmax_a_d (__m256d a, __m256d b)

### Synopsis

```c
__m256d __lasx_xfmax_a_d (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xfmax.a.d
Builtin: __builtin_lasx_xfmax_a_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2473
```

### Description

Compute maximum lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fp_max(a.fp64[0], b.fp64[0]);
dst.fp64[1] = fp_max(a.fp64[1], b.fp64[1]);
dst.fp64[2] = fp_max(a.fp64[2], b.fp64[2]);
dst.fp64[3] = fp_max(a.fp64[3], b.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmax_a_d((v4f64)a, (v4f64)b);
```

## __m256 __lasx_xfmax_a_w (__m256 a, __m256 b)

### Synopsis

```c
__m256 __lasx_xfmax_a_w (__m256 a, __m256 b)
#include <loongson-asxintrin.h>
Instruction: xfmax.a.w
Builtin: __builtin_lasx_xfmax_a_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2466
```

### Description

Compute maximum lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fp_max(a.fp32[0], b.fp32[0]);
dst.fp32[1] = fp_max(a.fp32[1], b.fp32[1]);
dst.fp32[2] = fp_max(a.fp32[2], b.fp32[2]);
dst.fp32[3] = fp_max(a.fp32[3], b.fp32[3]);
dst.fp32[4] = fp_max(a.fp32[4], b.fp32[4]);
dst.fp32[5] = fp_max(a.fp32[5], b.fp32[5]);
dst.fp32[6] = fp_max(a.fp32[6], b.fp32[6]);
dst.fp32[7] = fp_max(a.fp32[7], b.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmax_a_w((v8f32)a, (v8f32)b);
```

## __m256d __lasx_xfmax_d (__m256d a, __m256d b)

### Synopsis

```c
__m256d __lasx_xfmax_d (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xfmax.d
Builtin: __builtin_lasx_xfmax_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2459
```

### Description

Compute maximum lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fp_max(a.fp64[0], b.fp64[0]);
dst.fp64[1] = fp_max(a.fp64[1], b.fp64[1]);
dst.fp64[2] = fp_max(a.fp64[2], b.fp64[2]);
dst.fp64[3] = fp_max(a.fp64[3], b.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmax_d((v4f64)a, (v4f64)b);
```

## __m256 __lasx_xfmax_w (__m256 a, __m256 b)

### Synopsis

```c
__m256 __lasx_xfmax_w (__m256 a, __m256 b)
#include <loongson-asxintrin.h>
Instruction: xfmax.w
Builtin: __builtin_lasx_xfmax_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2452
```

### Description

Compute maximum lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fp_max(a.fp32[0], b.fp32[0]);
dst.fp32[1] = fp_max(a.fp32[1], b.fp32[1]);
dst.fp32[2] = fp_max(a.fp32[2], b.fp32[2]);
dst.fp32[3] = fp_max(a.fp32[3], b.fp32[3]);
dst.fp32[4] = fp_max(a.fp32[4], b.fp32[4]);
dst.fp32[5] = fp_max(a.fp32[5], b.fp32[5]);
dst.fp32[6] = fp_max(a.fp32[6], b.fp32[6]);
dst.fp32[7] = fp_max(a.fp32[7], b.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmax_w((v8f32)a, (v8f32)b);
```

## __m256d __lasx_xfmin_a_d (__m256d a, __m256d b)

### Synopsis

```c
__m256d __lasx_xfmin_a_d (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xfmin.a.d
Builtin: __builtin_lasx_xfmin_a_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2445
```

### Description

Compute minimum lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fp_min(a.fp64[0], b.fp64[0]);
dst.fp64[1] = fp_min(a.fp64[1], b.fp64[1]);
dst.fp64[2] = fp_min(a.fp64[2], b.fp64[2]);
dst.fp64[3] = fp_min(a.fp64[3], b.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmin_a_d((v4f64)a, (v4f64)b);
```

## __m256 __lasx_xfmin_a_w (__m256 a, __m256 b)

### Synopsis

```c
__m256 __lasx_xfmin_a_w (__m256 a, __m256 b)
#include <loongson-asxintrin.h>
Instruction: xfmin.a.w
Builtin: __builtin_lasx_xfmin_a_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2438
```

### Description

Compute minimum lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fp_min(a.fp32[0], b.fp32[0]);
dst.fp32[1] = fp_min(a.fp32[1], b.fp32[1]);
dst.fp32[2] = fp_min(a.fp32[2], b.fp32[2]);
dst.fp32[3] = fp_min(a.fp32[3], b.fp32[3]);
dst.fp32[4] = fp_min(a.fp32[4], b.fp32[4]);
dst.fp32[5] = fp_min(a.fp32[5], b.fp32[5]);
dst.fp32[6] = fp_min(a.fp32[6], b.fp32[6]);
dst.fp32[7] = fp_min(a.fp32[7], b.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmin_a_w((v8f32)a, (v8f32)b);
```

## __m256d __lasx_xfmin_d (__m256d a, __m256d b)

### Synopsis

```c
__m256d __lasx_xfmin_d (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xfmin.d
Builtin: __builtin_lasx_xfmin_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2431
```

### Description

Compute minimum lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fp_min(a.fp64[0], b.fp64[0]);
dst.fp64[1] = fp_min(a.fp64[1], b.fp64[1]);
dst.fp64[2] = fp_min(a.fp64[2], b.fp64[2]);
dst.fp64[3] = fp_min(a.fp64[3], b.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmin_d((v4f64)a, (v4f64)b);
```

## __m256 __lasx_xfmin_w (__m256 a, __m256 b)

### Synopsis

```c
__m256 __lasx_xfmin_w (__m256 a, __m256 b)
#include <loongson-asxintrin.h>
Instruction: xfmin.w
Builtin: __builtin_lasx_xfmin_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2424
```

### Description

Compute minimum lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fp_min(a.fp32[0], b.fp32[0]);
dst.fp32[1] = fp_min(a.fp32[1], b.fp32[1]);
dst.fp32[2] = fp_min(a.fp32[2], b.fp32[2]);
dst.fp32[3] = fp_min(a.fp32[3], b.fp32[3]);
dst.fp32[4] = fp_min(a.fp32[4], b.fp32[4]);
dst.fp32[5] = fp_min(a.fp32[5], b.fp32[5]);
dst.fp32[6] = fp_min(a.fp32[6], b.fp32[6]);
dst.fp32[7] = fp_min(a.fp32[7], b.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmin_w((v8f32)a, (v8f32)b);
```

## __m256d __lasx_xfmsub_d (__m256d a, __m256d b, __m256d c)

### Synopsis

```c
__m256d __lasx_xfmsub_d (__m256d a, __m256d b, __m256d c)
#include <loongson-asxintrin.h>
Instruction: xfmsub.d
Builtin: __builtin_lasx_xfmsub_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2375
```

### Description

Fused multiply-subtract lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fused_round((a.fp64[0] * b.fp64[0]) - c.fp64[0]);
dst.fp64[1] = fused_round((a.fp64[1] * b.fp64[1]) - c.fp64[1]);
dst.fp64[2] = fused_round((a.fp64[2] * b.fp64[2]) - c.fp64[2]);
dst.fp64[3] = fused_round((a.fp64[3] * b.fp64[3]) - c.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmsub_d((v4f64)a, (v4f64)b, (v4f64)c);
```

## __m256 __lasx_xfmsub_w (__m256 a, __m256 b, __m256 c)

### Synopsis

```c
__m256 __lasx_xfmsub_w (__m256 a, __m256 b, __m256 c)
#include <loongson-asxintrin.h>
Instruction: xfmsub.w
Builtin: __builtin_lasx_xfmsub_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2368
```

### Description

Fused multiply-subtract lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fused_round((a.fp32[0] * b.fp32[0]) - c.fp32[0]);
dst.fp32[1] = fused_round((a.fp32[1] * b.fp32[1]) - c.fp32[1]);
dst.fp32[2] = fused_round((a.fp32[2] * b.fp32[2]) - c.fp32[2]);
dst.fp32[3] = fused_round((a.fp32[3] * b.fp32[3]) - c.fp32[3]);
dst.fp32[4] = fused_round((a.fp32[4] * b.fp32[4]) - c.fp32[4]);
dst.fp32[5] = fused_round((a.fp32[5] * b.fp32[5]) - c.fp32[5]);
dst.fp32[6] = fused_round((a.fp32[6] * b.fp32[6]) - c.fp32[6]);
dst.fp32[7] = fused_round((a.fp32[7] * b.fp32[7]) - c.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmsub_w((v8f32)a, (v8f32)b, (v8f32)c);
```

## __m256d __lasx_xfmul_d (__m256d a, __m256d b)

### Synopsis

```c
__m256d __lasx_xfmul_d (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xfmul.d
Builtin: __builtin_lasx_xfmul_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2333
```

### Description

Multiply lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] * b.fp64[0];
dst.fp64[1] = a.fp64[1] * b.fp64[1];
dst.fp64[2] = a.fp64[2] * b.fp64[2];
dst.fp64[3] = a.fp64[3] * b.fp64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmul_d((v4f64)a, (v4f64)b);
```

## __m256 __lasx_xfmul_w (__m256 a, __m256 b)

### Synopsis

```c
__m256 __lasx_xfmul_w (__m256 a, __m256 b)
#include <loongson-asxintrin.h>
Instruction: xfmul.w
Builtin: __builtin_lasx_xfmul_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2326
```

### Description

Multiply lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] * b.fp32[0];
dst.fp32[1] = a.fp32[1] * b.fp32[1];
dst.fp32[2] = a.fp32[2] * b.fp32[2];
dst.fp32[3] = a.fp32[3] * b.fp32[3];
dst.fp32[4] = a.fp32[4] * b.fp32[4];
dst.fp32[5] = a.fp32[5] * b.fp32[5];
dst.fp32[6] = a.fp32[6] * b.fp32[6];
dst.fp32[7] = a.fp32[7] * b.fp32[7];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmul_w((v8f32)a, (v8f32)b);
```

## __m256d __lasx_xfrcp_d (__m256d a)

### Synopsis

```c
__m256d __lasx_xfrcp_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xfrcp.d
Builtin: __builtin_lasx_xfrcp_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2599
```

### Description

Compute reciprocal estimate lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = 1.0 / a.fp64[0];
dst.fp64[1] = 1.0 / a.fp64[1];
dst.fp64[2] = 1.0 / a.fp64[2];
dst.fp64[3] = 1.0 / a.fp64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>23</td><td>0.10(1/10)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfrcp_d((v4f64)a);
```

## __m256 __lasx_xfrcp_w (__m256 a)

### Synopsis

```c
__m256 __lasx_xfrcp_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xfrcp.w
Builtin: __builtin_lasx_xfrcp_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2592
```

### Description

Compute reciprocal estimate lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = 1.0 / a.fp32[0];
dst.fp32[1] = 1.0 / a.fp32[1];
dst.fp32[2] = 1.0 / a.fp32[2];
dst.fp32[3] = 1.0 / a.fp32[3];
dst.fp32[4] = 1.0 / a.fp32[4];
dst.fp32[5] = 1.0 / a.fp32[5];
dst.fp32[6] = 1.0 / a.fp32[6];
dst.fp32[7] = 1.0 / a.fp32[7];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>27</td><td>0.09(1/11)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xfrcp_w((v8f32)a);
```

## __m256d __lasx_xfrsqrt_d (__m256d a)

### Synopsis

```c
__m256d __lasx_xfrsqrt_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xfrsqrt.d
Builtin: __builtin_lasx_xfrsqrt_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2627
```

### Description

Compute reciprocal square-root estimate lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = 1.0 / sqrt(a.fp64[0]);
dst.fp64[1] = 1.0 / sqrt(a.fp64[1]);
dst.fp64[2] = 1.0 / sqrt(a.fp64[2]);
dst.fp64[3] = 1.0 / sqrt(a.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>15</td><td>0.06(1/17)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfrsqrt_d((v4f64)a);
```

## __m256 __lasx_xfrsqrt_w (__m256 a)

### Synopsis

```c
__m256 __lasx_xfrsqrt_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xfrsqrt.w
Builtin: __builtin_lasx_xfrsqrt_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2620
```

### Description

Compute reciprocal square-root estimate lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = 1.0 / sqrt(a.fp32[0]);
dst.fp32[1] = 1.0 / sqrt(a.fp32[1]);
dst.fp32[2] = 1.0 / sqrt(a.fp32[2]);
dst.fp32[3] = 1.0 / sqrt(a.fp32[3]);
dst.fp32[4] = 1.0 / sqrt(a.fp32[4]);
dst.fp32[5] = 1.0 / sqrt(a.fp32[5]);
dst.fp32[6] = 1.0 / sqrt(a.fp32[6]);
dst.fp32[7] = 1.0 / sqrt(a.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>25</td><td>0.05(1/20)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xfrsqrt_w((v8f32)a);
```

## __m256d __lasx_xfsqrt_d (__m256d a)

### Synopsis

```c
__m256d __lasx_xfsqrt_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xfsqrt.d
Builtin: __builtin_lasx_xfsqrt_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2585
```

### Description

Compute square root lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = sqrt(a.fp64[0]);
dst.fp64[1] = sqrt(a.fp64[1]);
dst.fp64[2] = sqrt(a.fp64[2]);
dst.fp64[3] = sqrt(a.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>10</td><td>0.09(1/11.48)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfsqrt_d((v4f64)a);
```

## __m256 __lasx_xfsqrt_w (__m256 a)

### Synopsis

```c
__m256 __lasx_xfsqrt_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xfsqrt.w
Builtin: __builtin_lasx_xfsqrt_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2578
```

### Description

Compute square root lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = sqrt(a.fp32[0]);
dst.fp32[1] = sqrt(a.fp32[1]);
dst.fp32[2] = sqrt(a.fp32[2]);
dst.fp32[3] = sqrt(a.fp32[3]);
dst.fp32[4] = sqrt(a.fp32[4]);
dst.fp32[5] = sqrt(a.fp32[5]);
dst.fp32[6] = sqrt(a.fp32[6]);
dst.fp32[7] = sqrt(a.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>39</td><td>0.08(1/13)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xfsqrt_w((v8f32)a);
```

## __m256d __lasx_xfsub_d (__m256d a, __m256d b)

### Synopsis

```c
__m256d __lasx_xfsub_d (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xfsub.d
Builtin: __builtin_lasx_xfsub_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2319
```

### Description

Subtract lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] - b.fp64[0];
dst.fp64[1] = a.fp64[1] - b.fp64[1];
dst.fp64[2] = a.fp64[2] - b.fp64[2];
dst.fp64[3] = a.fp64[3] - b.fp64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfsub_d((v4f64)a, (v4f64)b);
```

## __m256 __lasx_xfsub_w (__m256 a, __m256 b)

### Synopsis

```c
__m256 __lasx_xfsub_w (__m256 a, __m256 b)
#include <loongson-asxintrin.h>
Instruction: xfsub.w
Builtin: __builtin_lasx_xfsub_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2312
```

### Description

Subtract lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] - b.fp32[0];
dst.fp32[1] = a.fp32[1] - b.fp32[1];
dst.fp32[2] = a.fp32[2] - b.fp32[2];
dst.fp32[3] = a.fp32[3] - b.fp32[3];
dst.fp32[4] = a.fp32[4] - b.fp32[4];
dst.fp32[5] = a.fp32[5] - b.fp32[5];
dst.fp32[6] = a.fp32[6] - b.fp32[6];
dst.fp32[7] = a.fp32[7] - b.fp32[7];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xfsub_w((v8f32)a, (v8f32)b);
```

## __m256i __lasx_xftq_h (__m256 a, __m256 b)

### Synopsis

```c
__m256i __lasx_xftq_h (__m256 a, __m256 b)
#include <loongson-asxintrin.h>
Instruction: xftq.h
Builtin: __builtin_lasx_xftq_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2410
```

### Description

Convert floating-point lanes to fixed-point q-format lane-wise for 16 x fp16 lanes.

### Operation

```c
dst.i32[0] = float_to_fixed_point_q(a, b, 0);
dst.i32[1] = float_to_fixed_point_q(a, b, 1);
dst.i32[2] = float_to_fixed_point_q(a, b, 2);
dst.i32[3] = float_to_fixed_point_q(a, b, 3);
dst.i32[4] = float_to_fixed_point_q(a, b, 4);
dst.i32[5] = float_to_fixed_point_q(a, b, 5);
dst.i32[6] = float_to_fixed_point_q(a, b, 6);
dst.i32[7] = float_to_fixed_point_q(a, b, 7);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftq_h((v8f32)a, (v8f32)b);
```

## __m256i __lasx_xftq_w (__m256d a, __m256d b)

### Synopsis

```c
__m256i __lasx_xftq_w (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xftq.w
Builtin: __builtin_lasx_xftq_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2417
```

### Description

Convert floating-point lanes to fixed-point q-format lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.i32[0] = float_to_fixed_point_q(a, b, 0);
dst.i32[1] = float_to_fixed_point_q(a, b, 1);
dst.i32[2] = float_to_fixed_point_q(a, b, 2);
dst.i32[3] = float_to_fixed_point_q(a, b, 3);
dst.i32[4] = float_to_fixed_point_q(a, b, 4);
dst.i32[5] = float_to_fixed_point_q(a, b, 5);
dst.i32[6] = float_to_fixed_point_q(a, b, 6);
dst.i32[7] = float_to_fixed_point_q(a, b, 7);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftq_w((v4f64)a, (v4f64)b);
```

## __m256d __lasx_xvfabs_d (__m256d a)

### Synopsis

```c
__m256d __lasx_xvfabs_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xvfabs.d
Builtin: __builtin_lasx_xvfabs_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3743
```

### Description

Compute absolute value lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = abs(a.fp64[0]);
dst.fp64[1] = abs(a.fp64[1]);
dst.fp64[2] = abs(a.fp64[2]);
dst.fp64[3] = abs(a.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfabs_d((v4f64)a);
```

## __m256 __lasx_xvfabs_w (__m256 a)

### Synopsis

```c
__m256 __lasx_xvfabs_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvfabs.w
Builtin: __builtin_lasx_xvfabs_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3736
```

### Description

Compute absolute value lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = abs(a.fp32[0]);
dst.fp32[1] = abs(a.fp32[1]);
dst.fp32[2] = abs(a.fp32[2]);
dst.fp32[3] = abs(a.fp32[3]);
dst.fp32[4] = abs(a.fp32[4]);
dst.fp32[5] = abs(a.fp32[5]);
dst.fp32[6] = abs(a.fp32[6]);
dst.fp32[7] = abs(a.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfabs_w((v8f32)a);
```

## __m256d __lasx_xvfaddsub_d (__m256d a, __m256d b)

### Synopsis

```c
__m256d __lasx_xvfaddsub_d (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xvfaddsub.d
Builtin: __builtin_lasx_xvfaddsub_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3764
```

### Description

Alternately add and subtract floating-point 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] + b.fp64[0];
dst.fp64[1] = a.fp64[1] - b.fp64[1];
dst.fp64[2] = a.fp64[2] + b.fp64[2];
dst.fp64[3] = a.fp64[3] - b.fp64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfaddsub_d((v4f64)a, (v4f64)b);
```

## __m256 __lasx_xvfaddsub_w (__m256 a, __m256 b)

### Synopsis

```c
__m256 __lasx_xvfaddsub_w (__m256 a, __m256 b)
#include <loongson-asxintrin.h>
Instruction: xvfaddsub.w
Builtin: __builtin_lasx_xvfaddsub_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3771
```

### Description

Alternately add and subtract floating-point 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] + b.fp32[0];
dst.fp32[1] = a.fp32[1] - b.fp32[1];
dst.fp32[2] = a.fp32[2] + b.fp32[2];
dst.fp32[3] = a.fp32[3] - b.fp32[3];
dst.fp32[4] = a.fp32[4] + b.fp32[4];
dst.fp32[5] = a.fp32[5] - b.fp32[5];
dst.fp32[6] = a.fp32[6] + b.fp32[6];
dst.fp32[7] = a.fp32[7] - b.fp32[7];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfaddsub_w((v8f32)a, (v8f32)b);
```

## __m256d __lasx_xvfmadd_d (__m256d a, __m256d b, __m256d c)

### Synopsis

```c
__m256d __lasx_xvfmadd_d (__m256d a, __m256d b, __m256d c)
#include <loongson-asxintrin.h>
Instruction: xvfmadd.d
Builtin: __builtin_lasx_xvfmadd_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3778
```

### Description

Fused multiply-add lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fused_round((a.fp64[0] * b.fp64[0]) + c.fp64[0]);
dst.fp64[1] = fused_round((a.fp64[1] * b.fp64[1]) + c.fp64[1]);
dst.fp64[2] = fused_round((a.fp64[2] * b.fp64[2]) + c.fp64[2]);
dst.fp64[3] = fused_round((a.fp64[3] * b.fp64[3]) + c.fp64[3]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfmadd_d((v4f64)a, (v4f64)b, (v4f64)c);
```

## __m256 __lasx_xvfmadd_w (__m256 a, __m256 b, __m256 c)

### Synopsis

```c
__m256 __lasx_xvfmadd_w (__m256 a, __m256 b, __m256 c)
#include <loongson-asxintrin.h>
Instruction: xvfmadd.w
Builtin: __builtin_lasx_xvfmadd_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3785
```

### Description

Fused multiply-add lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fused_round((a.fp32[0] * b.fp32[0]) + c.fp32[0]);
dst.fp32[1] = fused_round((a.fp32[1] * b.fp32[1]) + c.fp32[1]);
dst.fp32[2] = fused_round((a.fp32[2] * b.fp32[2]) + c.fp32[2]);
dst.fp32[3] = fused_round((a.fp32[3] * b.fp32[3]) + c.fp32[3]);
dst.fp32[4] = fused_round((a.fp32[4] * b.fp32[4]) + c.fp32[4]);
dst.fp32[5] = fused_round((a.fp32[5] * b.fp32[5]) + c.fp32[5]);
dst.fp32[6] = fused_round((a.fp32[6] * b.fp32[6]) + c.fp32[6]);
dst.fp32[7] = fused_round((a.fp32[7] * b.fp32[7]) + c.fp32[7]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfmadd_w((v8f32)a, (v8f32)b, (v8f32)c);
```

## __m256d __lasx_xvfmaddsub_d (__m256d a, __m256d b, __m256d c)

### Synopsis

```c
__m256d __lasx_xvfmaddsub_d (__m256d a, __m256d b, __m256d c)
#include <loongson-asxintrin.h>
Instruction: xvfmaddsub.d
Builtin: __builtin_lasx_xvfmaddsub_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3848
```

### Description

Alternately fused multiply-add and fused multiply-subtract floating-point 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fused_round((a.fp64[0] * b.fp64[0]) + c.fp64[0]);
dst.fp64[1] = fused_round((a.fp64[1] * b.fp64[1]) - c.fp64[1]);
dst.fp64[2] = fused_round((a.fp64[2] * b.fp64[2]) + c.fp64[2]);
dst.fp64[3] = fused_round((a.fp64[3] * b.fp64[3]) - c.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.50/5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfmaddsub_d((v4f64)a, (v4f64)b, (v4f64)c);
```

## __m256 __lasx_xvfmaddsub_w (__m256 a, __m256 b, __m256 c)

### Synopsis

```c
__m256 __lasx_xvfmaddsub_w (__m256 a, __m256 b, __m256 c)
#include <loongson-asxintrin.h>
Instruction: xvfmaddsub.w
Builtin: __builtin_lasx_xvfmaddsub_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3855
```

### Description

Alternately fused multiply-add and fused multiply-subtract floating-point 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fused_round((a.fp32[0] * b.fp32[0]) + c.fp32[0]);
dst.fp32[1] = fused_round((a.fp32[1] * b.fp32[1]) - c.fp32[1]);
dst.fp32[2] = fused_round((a.fp32[2] * b.fp32[2]) + c.fp32[2]);
dst.fp32[3] = fused_round((a.fp32[3] * b.fp32[3]) - c.fp32[3]);
dst.fp32[4] = fused_round((a.fp32[4] * b.fp32[4]) + c.fp32[4]);
dst.fp32[5] = fused_round((a.fp32[5] * b.fp32[5]) - c.fp32[5]);
dst.fp32[6] = fused_round((a.fp32[6] * b.fp32[6]) + c.fp32[6]);
dst.fp32[7] = fused_round((a.fp32[7] * b.fp32[7]) - c.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.50/5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfmaddsub_w((v8f32)a, (v8f32)b, (v8f32)c);
```

## __m256d __lasx_xvfmsub_d (__m256d a, __m256d b, __m256d c)

### Synopsis

```c
__m256d __lasx_xvfmsub_d (__m256d a, __m256d b, __m256d c)
#include <loongson-asxintrin.h>
Instruction: xvfmsub.d
Builtin: __builtin_lasx_xvfmsub_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3792
```

### Description

Fused multiply-subtract lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fused_round((a.fp64[0] * b.fp64[0]) - c.fp64[0]);
dst.fp64[1] = fused_round((a.fp64[1] * b.fp64[1]) - c.fp64[1]);
dst.fp64[2] = fused_round((a.fp64[2] * b.fp64[2]) - c.fp64[2]);
dst.fp64[3] = fused_round((a.fp64[3] * b.fp64[3]) - c.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.50/5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfmsub_d((v4f64)a, (v4f64)b, (v4f64)c);
```

## __m256 __lasx_xvfmsub_w (__m256 a, __m256 b, __m256 c)

### Synopsis

```c
__m256 __lasx_xvfmsub_w (__m256 a, __m256 b, __m256 c)
#include <loongson-asxintrin.h>
Instruction: xvfmsub.w
Builtin: __builtin_lasx_xvfmsub_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3799
```

### Description

Fused multiply-subtract lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fused_round((a.fp32[0] * b.fp32[0]) - c.fp32[0]);
dst.fp32[1] = fused_round((a.fp32[1] * b.fp32[1]) - c.fp32[1]);
dst.fp32[2] = fused_round((a.fp32[2] * b.fp32[2]) - c.fp32[2]);
dst.fp32[3] = fused_round((a.fp32[3] * b.fp32[3]) - c.fp32[3]);
dst.fp32[4] = fused_round((a.fp32[4] * b.fp32[4]) - c.fp32[4]);
dst.fp32[5] = fused_round((a.fp32[5] * b.fp32[5]) - c.fp32[5]);
dst.fp32[6] = fused_round((a.fp32[6] * b.fp32[6]) - c.fp32[6]);
dst.fp32[7] = fused_round((a.fp32[7] * b.fp32[7]) - c.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.50/5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfmsub_w((v8f32)a, (v8f32)b, (v8f32)c);
```

## __m256d __lasx_xvfmsubadd_d (__m256d a, __m256d b, __m256d c)

### Synopsis

```c
__m256d __lasx_xvfmsubadd_d (__m256d a, __m256d b, __m256d c)
#include <loongson-asxintrin.h>
Instruction: xvfmsubadd.d
Builtin: __builtin_lasx_xvfmsubadd_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3862
```

### Description

Alternately fused multiply-add and fused multiply-subtract floating-point 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fused_round((a.fp64[0] * b.fp64[0]) - c.fp64[0]);
dst.fp64[1] = fused_round((a.fp64[1] * b.fp64[1]) + c.fp64[1]);
dst.fp64[2] = fused_round((a.fp64[2] * b.fp64[2]) - c.fp64[2]);
dst.fp64[3] = fused_round((a.fp64[3] * b.fp64[3]) + c.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.50/5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfmsubadd_d((v4f64)a, (v4f64)b, (v4f64)c);
```

## __m256 __lasx_xvfmsubadd_w (__m256 a, __m256 b, __m256 c)

### Synopsis

```c
__m256 __lasx_xvfmsubadd_w (__m256 a, __m256 b, __m256 c)
#include <loongson-asxintrin.h>
Instruction: xvfmsubadd.w
Builtin: __builtin_lasx_xvfmsubadd_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3869
```

### Description

Alternately fused multiply-add and fused multiply-subtract floating-point 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fused_round((a.fp32[0] * b.fp32[0]) - c.fp32[0]);
dst.fp32[1] = fused_round((a.fp32[1] * b.fp32[1]) + c.fp32[1]);
dst.fp32[2] = fused_round((a.fp32[2] * b.fp32[2]) - c.fp32[2]);
dst.fp32[3] = fused_round((a.fp32[3] * b.fp32[3]) + c.fp32[3]);
dst.fp32[4] = fused_round((a.fp32[4] * b.fp32[4]) - c.fp32[4]);
dst.fp32[5] = fused_round((a.fp32[5] * b.fp32[5]) + c.fp32[5]);
dst.fp32[6] = fused_round((a.fp32[6] * b.fp32[6]) - c.fp32[6]);
dst.fp32[7] = fused_round((a.fp32[7] * b.fp32[7]) + c.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.50/5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfmsubadd_w((v8f32)a, (v8f32)b, (v8f32)c);
```

## __m256d __lasx_xvfneg_d (__m256d a)

### Synopsis

```c
__m256d __lasx_xvfneg_d (__m256d a)
#include <loongson-asxintrin.h>
Instruction: xvfneg.d
Builtin: __builtin_lasx_xvfneg_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3757
```

### Description

Negate lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = -a.fp64[0];
dst.fp64[1] = -a.fp64[1];
dst.fp64[2] = -a.fp64[2];
dst.fp64[3] = -a.fp64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfneg_d((v4f64)a);
```

## __m256 __lasx_xvfneg_w (__m256 a)

### Synopsis

```c
__m256 __lasx_xvfneg_w (__m256 a)
#include <loongson-asxintrin.h>
Instruction: xvfneg.w
Builtin: __builtin_lasx_xvfneg_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3750
```

### Description

Negate lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = -a.fp32[0];
dst.fp32[1] = -a.fp32[1];
dst.fp32[2] = -a.fp32[2];
dst.fp32[3] = -a.fp32[3];
dst.fp32[4] = -a.fp32[4];
dst.fp32[5] = -a.fp32[5];
dst.fp32[6] = -a.fp32[6];
dst.fp32[7] = -a.fp32[7];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfneg_w((v8f32)a);
```

## __m256d __lasx_xvfnmadd_d (__m256d a, __m256d b, __m256d c)

### Synopsis

```c
__m256d __lasx_xvfnmadd_d (__m256d a, __m256d b, __m256d c)
#include <loongson-asxintrin.h>
Instruction: xvfnmadd.d
Builtin: __builtin_lasx_xvfnmadd_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3806
```

### Description

Negated fused multiply-add lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = -fused_round((a.fp64[0] * b.fp64[0]) + c.fp64[0]);
dst.fp64[1] = -fused_round((a.fp64[1] * b.fp64[1]) + c.fp64[1]);
dst.fp64[2] = -fused_round((a.fp64[2] * b.fp64[2]) + c.fp64[2]);
dst.fp64[3] = -fused_round((a.fp64[3] * b.fp64[3]) + c.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.50/5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfnmadd_d((v4f64)a, (v4f64)b, (v4f64)c);
```

## __m256 __lasx_xvfnmadd_w (__m256 a, __m256 b, __m256 c)

### Synopsis

```c
__m256 __lasx_xvfnmadd_w (__m256 a, __m256 b, __m256 c)
#include <loongson-asxintrin.h>
Instruction: xvfnmadd.w
Builtin: __builtin_lasx_xvfnmadd_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3813
```

### Description

Negated fused multiply-add lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = -fused_round((a.fp32[0] * b.fp32[0]) + c.fp32[0]);
dst.fp32[1] = -fused_round((a.fp32[1] * b.fp32[1]) + c.fp32[1]);
dst.fp32[2] = -fused_round((a.fp32[2] * b.fp32[2]) + c.fp32[2]);
dst.fp32[3] = -fused_round((a.fp32[3] * b.fp32[3]) + c.fp32[3]);
dst.fp32[4] = -fused_round((a.fp32[4] * b.fp32[4]) + c.fp32[4]);
dst.fp32[5] = -fused_round((a.fp32[5] * b.fp32[5]) + c.fp32[5]);
dst.fp32[6] = -fused_round((a.fp32[6] * b.fp32[6]) + c.fp32[6]);
dst.fp32[7] = -fused_round((a.fp32[7] * b.fp32[7]) + c.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.50/5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfnmadd_w((v8f32)a, (v8f32)b, (v8f32)c);
```

## __m256d __lasx_xvfnmsub_d (__m256d a, __m256d b, __m256d c)

### Synopsis

```c
__m256d __lasx_xvfnmsub_d (__m256d a, __m256d b, __m256d c)
#include <loongson-asxintrin.h>
Instruction: xvfnmsub.d
Builtin: __builtin_lasx_xvfnmsub_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3820
```

### Description

Negated fused multiply-subtract lane-wise for 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = -fused_round((a.fp64[0] * b.fp64[0]) - c.fp64[0]);
dst.fp64[1] = -fused_round((a.fp64[1] * b.fp64[1]) - c.fp64[1]);
dst.fp64[2] = -fused_round((a.fp64[2] * b.fp64[2]) - c.fp64[2]);
dst.fp64[3] = -fused_round((a.fp64[3] * b.fp64[3]) - c.fp64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.50/5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfnmsub_d((v4f64)a, (v4f64)b, (v4f64)c);
```

## __m256 __lasx_xvfnmsub_w (__m256 a, __m256 b, __m256 c)

### Synopsis

```c
__m256 __lasx_xvfnmsub_w (__m256 a, __m256 b, __m256 c)
#include <loongson-asxintrin.h>
Instruction: xvfnmsub.w
Builtin: __builtin_lasx_xvfnmsub_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3827
```

### Description

Negated fused multiply-subtract lane-wise for 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = -fused_round((a.fp32[0] * b.fp32[0]) - c.fp32[0]);
dst.fp32[1] = -fused_round((a.fp32[1] * b.fp32[1]) - c.fp32[1]);
dst.fp32[2] = -fused_round((a.fp32[2] * b.fp32[2]) - c.fp32[2]);
dst.fp32[3] = -fused_round((a.fp32[3] * b.fp32[3]) - c.fp32[3]);
dst.fp32[4] = -fused_round((a.fp32[4] * b.fp32[4]) - c.fp32[4]);
dst.fp32[5] = -fused_round((a.fp32[5] * b.fp32[5]) - c.fp32[5]);
dst.fp32[6] = -fused_round((a.fp32[6] * b.fp32[6]) - c.fp32[6]);
dst.fp32[7] = -fused_round((a.fp32[7] * b.fp32[7]) - c.fp32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.50/5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfnmsub_w((v8f32)a, (v8f32)b, (v8f32)c);
```

## __m256d __lasx_xvfsubadd_d (__m256d a, __m256d b)

### Synopsis

```c
__m256d __lasx_xvfsubadd_d (__m256d a, __m256d b)
#include <loongson-asxintrin.h>
Instruction: xvfsubadd.d
Builtin: __builtin_lasx_xvfsubadd_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3834
```

### Description

Alternately add and subtract floating-point 4 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] - b.fp64[0];
dst.fp64[1] = a.fp64[1] + b.fp64[1];
dst.fp64[2] = a.fp64[2] - b.fp64[2];
dst.fp64[3] = a.fp64[3] + b.fp64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfsubadd_d((v4f64)a, (v4f64)b);
```

## __m256 __lasx_xvfsubadd_w (__m256 a, __m256 b)

### Synopsis

```c
__m256 __lasx_xvfsubadd_w (__m256 a, __m256 b)
#include <loongson-asxintrin.h>
Instruction: xvfsubadd.w
Builtin: __builtin_lasx_xvfsubadd_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3841
```

### Description

Alternately add and subtract floating-point 8 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] - b.fp32[0];
dst.fp32[1] = a.fp32[1] + b.fp32[1];
dst.fp32[2] = a.fp32[2] - b.fp32[2];
dst.fp32[3] = a.fp32[3] + b.fp32[3];
dst.fp32[4] = a.fp32[4] - b.fp32[4];
dst.fp32[5] = a.fp32[5] + b.fp32[5];
dst.fp32[6] = a.fp32[6] - b.fp32[6];
dst.fp32[7] = a.fp32[7] + b.fp32[7];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfsubadd_w((v8f32)a, (v8f32)b);
```

