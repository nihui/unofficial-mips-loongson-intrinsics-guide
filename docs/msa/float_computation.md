# Float Computation

Generated from `include/msa.h`. This page contains 34 intrinsics.

## v2f64 __msa_fadd_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fadd_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fadd.d
Builtin: __builtin_msa_fadd_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:510
```

### Description

Add lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] + b.fp64[0];
dst.fp64[1] = a.fp64[1] + b.fp64[1];
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
#define __msa_fadd_d __builtin_msa_fadd_d
```

## v4f32 __msa_fadd_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fadd_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fadd.w
Builtin: __builtin_msa_fadd_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:509
```

### Description

Add lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] + b.fp32[0];
dst.fp32[1] = a.fp32[1] + b.fp32[1];
dst.fp32[2] = a.fp32[2] + b.fp32[2];
dst.fp32[3] = a.fp32[3] + b.fp32[3];
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
#define __msa_fadd_w __builtin_msa_fadd_w
```

## v2f64 __msa_fdiv_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fdiv_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fdiv.d
Builtin: __builtin_msa_fdiv_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:516
```

### Description

Divide lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] / b.fp64[0];
dst.fp64[1] = a.fp64[1] / b.fp64[1];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>8/23</td><td>0.21(1/4.67)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_fdiv_d __builtin_msa_fdiv_d
```

## v4f32 __msa_fdiv_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fdiv_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fdiv.w
Builtin: __builtin_msa_fdiv_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:515
```

### Description

Divide lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] / b.fp32[0];
dst.fp32[1] = a.fp32[1] / b.fp32[1];
dst.fp32[2] = a.fp32[2] / b.fp32[2];
dst.fp32[3] = a.fp32[3] / b.fp32[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>11/27</td><td>0.14(1/7)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_fdiv_w __builtin_msa_fdiv_w
```

## v2f64 __msa_ffql_d (v4i32 a)

### Synopsis

```c
v2f64 __msa_ffql_d (v4i32 a)
#include <msa.h>
Instruction: ffql.d
Builtin: __builtin_msa_ffql_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:564
```

### Description

Convert lower fixed-point q-format lanes to floating point lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fixed_point_q_to_float_lower_half(a, 0);
dst.fp64[1] = fixed_point_q_to_float_lower_half(a, 1);
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
#define __msa_ffql_d __builtin_msa_ffql_d
```

## v4f32 __msa_ffql_w (v8i16 a)

### Synopsis

```c
v4f32 __msa_ffql_w (v8i16 a)
#include <msa.h>
Instruction: ffql.w
Builtin: __builtin_msa_ffql_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:563
```

### Description

Convert lower fixed-point q-format lanes to floating point lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fixed_point_q_to_float_lower_half(a, 0);
dst.fp32[1] = fixed_point_q_to_float_lower_half(a, 1);
dst.fp32[2] = fixed_point_q_to_float_lower_half(a, 2);
dst.fp32[3] = fixed_point_q_to_float_lower_half(a, 3);
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
#define __msa_ffql_w __builtin_msa_ffql_w
```

## v2f64 __msa_ffqr_d (v4i32 a)

### Synopsis

```c
v2f64 __msa_ffqr_d (v4i32 a)
#include <msa.h>
Instruction: ffqr.d
Builtin: __builtin_msa_ffqr_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:566
```

### Description

Convert upper fixed-point q-format lanes to floating point lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fixed_point_q_to_float_upper_half(a, 0);
dst.fp64[1] = fixed_point_q_to_float_upper_half(a, 1);
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
#define __msa_ffqr_d __builtin_msa_ffqr_d
```

## v4f32 __msa_ffqr_w (v8i16 a)

### Synopsis

```c
v4f32 __msa_ffqr_w (v8i16 a)
#include <msa.h>
Instruction: ffqr.w
Builtin: __builtin_msa_ffqr_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:565
```

### Description

Convert upper fixed-point q-format lanes to floating point lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fixed_point_q_to_float_upper_half(a, 0);
dst.fp32[1] = fixed_point_q_to_float_upper_half(a, 1);
dst.fp32[2] = fixed_point_q_to_float_upper_half(a, 2);
dst.fp32[3] = fixed_point_q_to_float_upper_half(a, 3);
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
#define __msa_ffqr_w __builtin_msa_ffqr_w
```

## v2f64 __msa_flog2_d (v2f64 a)

### Synopsis

```c
v2f64 __msa_flog2_d (v2f64 a)
#include <msa.h>
Instruction: flog2.d
Builtin: __builtin_msa_flog2_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:558
```

### Description

Compute base-2 logarithm lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = log2(a.fp64[0]);
dst.fp64[1] = log2(a.fp64[1]);
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
#define __msa_flog2_d __builtin_msa_flog2_d
```

## v4f32 __msa_flog2_w (v4f32 a)

### Synopsis

```c
v4f32 __msa_flog2_w (v4f32 a)
#include <msa.h>
Instruction: flog2.w
Builtin: __builtin_msa_flog2_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:557
```

### Description

Compute base-2 logarithm lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = log2(a.fp32[0]);
dst.fp32[1] = log2(a.fp32[1]);
dst.fp32[2] = log2(a.fp32[2]);
dst.fp32[3] = log2(a.fp32[3]);
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
#define __msa_flog2_w __builtin_msa_flog2_w
```

## v2f64 __msa_fmadd_d (v2f64 a, v2f64 b, v2f64 c)

### Synopsis

```c
v2f64 __msa_fmadd_d (v2f64 a, v2f64 b, v2f64 c)
#include <msa.h>
Instruction: fmadd.d
Builtin: __builtin_msa_fmadd_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:518
```

### Description

Fused multiply-add lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fused_round((a.fp64[0] * b.fp64[0]) + c.fp64[0]);
dst.fp64[1] = fused_round((a.fp64[1] * b.fp64[1]) + c.fp64[1]);
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
#define __msa_fmadd_d __builtin_msa_fmadd_d
```

## v4f32 __msa_fmadd_w (v4f32 a, v4f32 b, v4f32 c)

### Synopsis

```c
v4f32 __msa_fmadd_w (v4f32 a, v4f32 b, v4f32 c)
#include <msa.h>
Instruction: fmadd.w
Builtin: __builtin_msa_fmadd_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:517
```

### Description

Fused multiply-add lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fused_round((a.fp32[0] * b.fp32[0]) + c.fp32[0]);
dst.fp32[1] = fused_round((a.fp32[1] * b.fp32[1]) + c.fp32[1]);
dst.fp32[2] = fused_round((a.fp32[2] * b.fp32[2]) + c.fp32[2]);
dst.fp32[3] = fused_round((a.fp32[3] * b.fp32[3]) + c.fp32[3]);
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
#define __msa_fmadd_w __builtin_msa_fmadd_w
```

## v2f64 __msa_fmax_a_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fmax_a_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fmax.a.d
Builtin: __builtin_msa_fmax_a_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:534
```

### Description

Compute maximum lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fp_max(a.fp64[0], b.fp64[0]);
dst.fp64[1] = fp_max(a.fp64[1], b.fp64[1]);
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
#define __msa_fmax_a_d __builtin_msa_fmax_a_d
```

## v4f32 __msa_fmax_a_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fmax_a_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fmax.a.w
Builtin: __builtin_msa_fmax_a_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:533
```

### Description

Compute maximum lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fp_max(a.fp32[0], b.fp32[0]);
dst.fp32[1] = fp_max(a.fp32[1], b.fp32[1]);
dst.fp32[2] = fp_max(a.fp32[2], b.fp32[2]);
dst.fp32[3] = fp_max(a.fp32[3], b.fp32[3]);
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
#define __msa_fmax_a_w __builtin_msa_fmax_a_w
```

## v2f64 __msa_fmax_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fmax_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fmax.d
Builtin: __builtin_msa_fmax_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:532
```

### Description

Compute maximum lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fp_max(a.fp64[0], b.fp64[0]);
dst.fp64[1] = fp_max(a.fp64[1], b.fp64[1]);
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
#define __msa_fmax_d __builtin_msa_fmax_d
```

## v4f32 __msa_fmax_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fmax_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fmax.w
Builtin: __builtin_msa_fmax_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:531
```

### Description

Compute maximum lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fp_max(a.fp32[0], b.fp32[0]);
dst.fp32[1] = fp_max(a.fp32[1], b.fp32[1]);
dst.fp32[2] = fp_max(a.fp32[2], b.fp32[2]);
dst.fp32[3] = fp_max(a.fp32[3], b.fp32[3]);
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
#define __msa_fmax_w __builtin_msa_fmax_w
```

## v2f64 __msa_fmin_a_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fmin_a_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fmin.a.d
Builtin: __builtin_msa_fmin_a_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:530
```

### Description

Compute minimum lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fp_min(a.fp64[0], b.fp64[0]);
dst.fp64[1] = fp_min(a.fp64[1], b.fp64[1]);
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
#define __msa_fmin_a_d __builtin_msa_fmin_a_d
```

## v4f32 __msa_fmin_a_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fmin_a_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fmin.a.w
Builtin: __builtin_msa_fmin_a_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:529
```

### Description

Compute minimum lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fp_min(a.fp32[0], b.fp32[0]);
dst.fp32[1] = fp_min(a.fp32[1], b.fp32[1]);
dst.fp32[2] = fp_min(a.fp32[2], b.fp32[2]);
dst.fp32[3] = fp_min(a.fp32[3], b.fp32[3]);
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
#define __msa_fmin_a_w __builtin_msa_fmin_a_w
```

## v2f64 __msa_fmin_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fmin_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fmin.d
Builtin: __builtin_msa_fmin_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:528
```

### Description

Compute minimum lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fp_min(a.fp64[0], b.fp64[0]);
dst.fp64[1] = fp_min(a.fp64[1], b.fp64[1]);
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
#define __msa_fmin_d __builtin_msa_fmin_d
```

## v4f32 __msa_fmin_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fmin_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fmin.w
Builtin: __builtin_msa_fmin_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:527
```

### Description

Compute minimum lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fp_min(a.fp32[0], b.fp32[0]);
dst.fp32[1] = fp_min(a.fp32[1], b.fp32[1]);
dst.fp32[2] = fp_min(a.fp32[2], b.fp32[2]);
dst.fp32[3] = fp_min(a.fp32[3], b.fp32[3]);
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
#define __msa_fmin_w __builtin_msa_fmin_w
```

## v2f64 __msa_fmsub_d (v2f64 a, v2f64 b, v2f64 c)

### Synopsis

```c
v2f64 __msa_fmsub_d (v2f64 a, v2f64 b, v2f64 c)
#include <msa.h>
Instruction: fmsub.d
Builtin: __builtin_msa_fmsub_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:520
```

### Description

Fused multiply-subtract lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fused_round((a.fp64[0] * b.fp64[0]) - c.fp64[0]);
dst.fp64[1] = fused_round((a.fp64[1] * b.fp64[1]) - c.fp64[1]);
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
#define __msa_fmsub_d __builtin_msa_fmsub_d
```

## v4f32 __msa_fmsub_w (v4f32 a, v4f32 b, v4f32 c)

### Synopsis

```c
v4f32 __msa_fmsub_w (v4f32 a, v4f32 b, v4f32 c)
#include <msa.h>
Instruction: fmsub.w
Builtin: __builtin_msa_fmsub_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:519
```

### Description

Fused multiply-subtract lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fused_round((a.fp32[0] * b.fp32[0]) - c.fp32[0]);
dst.fp32[1] = fused_round((a.fp32[1] * b.fp32[1]) - c.fp32[1]);
dst.fp32[2] = fused_round((a.fp32[2] * b.fp32[2]) - c.fp32[2]);
dst.fp32[3] = fused_round((a.fp32[3] * b.fp32[3]) - c.fp32[3]);
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
#define __msa_fmsub_w __builtin_msa_fmsub_w
```

## v2f64 __msa_fmul_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fmul_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fmul.d
Builtin: __builtin_msa_fmul_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:514
```

### Description

Multiply lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] * b.fp64[0];
dst.fp64[1] = a.fp64[1] * b.fp64[1];
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
#define __msa_fmul_d __builtin_msa_fmul_d
```

## v4f32 __msa_fmul_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fmul_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fmul.w
Builtin: __builtin_msa_fmul_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:513
```

### Description

Multiply lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] * b.fp32[0];
dst.fp32[1] = a.fp32[1] * b.fp32[1];
dst.fp32[2] = a.fp32[2] * b.fp32[2];
dst.fp32[3] = a.fp32[3] * b.fp32[3];
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
#define __msa_fmul_w __builtin_msa_fmul_w
```

## v2f64 __msa_frcp_d (v2f64 a)

### Synopsis

```c
v2f64 __msa_frcp_d (v2f64 a)
#include <msa.h>
Instruction: frcp.d
Builtin: __builtin_msa_frcp_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:552
```

### Description

Compute reciprocal estimate lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = 1.0 / a.fp64[0];
dst.fp64[1] = 1.0 / a.fp64[1];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>8</td><td>0.15(1/6.76)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_frcp_d __builtin_msa_frcp_d
```

## v4f32 __msa_frcp_w (v4f32 a)

### Synopsis

```c
v4f32 __msa_frcp_w (v4f32 a)
#include <msa.h>
Instruction: frcp.w
Builtin: __builtin_msa_frcp_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:551
```

### Description

Compute reciprocal estimate lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = 1.0 / a.fp32[0];
dst.fp32[1] = 1.0 / a.fp32[1];
dst.fp32[2] = 1.0 / a.fp32[2];
dst.fp32[3] = 1.0 / a.fp32[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>11</td><td>0.12(1/8.36)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_frcp_w __builtin_msa_frcp_w
```

## v2f64 __msa_frsqrt_d (v2f64 a)

### Synopsis

```c
v2f64 __msa_frsqrt_d (v2f64 a)
#include <msa.h>
Instruction: frsqrt.d
Builtin: __builtin_msa_frsqrt_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:556
```

### Description

Compute reciprocal square-root estimate lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = 1.0 / sqrt(a.fp64[0]);
dst.fp64[1] = 1.0 / sqrt(a.fp64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>15</td><td>0.06(1/16.59)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_frsqrt_d __builtin_msa_frsqrt_d
```

## v4f32 __msa_frsqrt_w (v4f32 a)

### Synopsis

```c
v4f32 __msa_frsqrt_w (v4f32 a)
#include <msa.h>
Instruction: frsqrt.w
Builtin: __builtin_msa_frsqrt_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:555
```

### Description

Compute reciprocal square-root estimate lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = 1.0 / sqrt(a.fp32[0]);
dst.fp32[1] = 1.0 / sqrt(a.fp32[1]);
dst.fp32[2] = 1.0 / sqrt(a.fp32[2]);
dst.fp32[3] = 1.0 / sqrt(a.fp32[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>17</td><td>0.05(1/20)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_frsqrt_w __builtin_msa_frsqrt_w
```

## v2f64 __msa_fsqrt_d (v2f64 a)

### Synopsis

```c
v2f64 __msa_fsqrt_d (v2f64 a)
#include <msa.h>
Instruction: fsqrt.d
Builtin: __builtin_msa_fsqrt_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:550
```

### Description

Compute square root lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = sqrt(a.fp64[0]);
dst.fp64[1] = sqrt(a.fp64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>10</td><td>0.09(1/11.43)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_fsqrt_d __builtin_msa_fsqrt_d
```

## v4f32 __msa_fsqrt_w (v4f32 a)

### Synopsis

```c
v4f32 __msa_fsqrt_w (v4f32 a)
#include <msa.h>
Instruction: fsqrt.w
Builtin: __builtin_msa_fsqrt_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:549
```

### Description

Compute square root lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = sqrt(a.fp32[0]);
dst.fp32[1] = sqrt(a.fp32[1]);
dst.fp32[2] = sqrt(a.fp32[2]);
dst.fp32[3] = sqrt(a.fp32[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>11</td><td>0.08(1/13)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_fsqrt_w __builtin_msa_fsqrt_w
```

## v2f64 __msa_fsub_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fsub_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fsub.d
Builtin: __builtin_msa_fsub_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:512
```

### Description

Subtract lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] - b.fp64[0];
dst.fp64[1] = a.fp64[1] - b.fp64[1];
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
#define __msa_fsub_d __builtin_msa_fsub_d
```

## v4f32 __msa_fsub_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fsub_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fsub.w
Builtin: __builtin_msa_fsub_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:511
```

### Description

Subtract lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] - b.fp32[0];
dst.fp32[1] = a.fp32[1] - b.fp32[1];
dst.fp32[2] = a.fp32[2] - b.fp32[2];
dst.fp32[3] = a.fp32[3] - b.fp32[3];
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
#define __msa_fsub_w __builtin_msa_fsub_w
```

## v8i16 __msa_ftq_h (v4f32 a, v4f32 b)

### Synopsis

```c
v8i16 __msa_ftq_h (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: ftq.h
Builtin: __builtin_msa_ftq_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:525
```

### Description

Convert floating-point lanes to fixed-point q-format lane-wise for 8 x fp16 lanes.

### Operation

```c
dst.i32[0] = float_to_fixed_point_q(a, b, 0);
dst.i32[1] = float_to_fixed_point_q(a, b, 1);
dst.i32[2] = float_to_fixed_point_q(a, b, 2);
dst.i32[3] = float_to_fixed_point_q(a, b, 3);
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
#define __msa_ftq_h __builtin_msa_ftq_h
```

## v4i32 __msa_ftq_w (v2f64 a, v2f64 b)

### Synopsis

```c
v4i32 __msa_ftq_w (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: ftq.w
Builtin: __builtin_msa_ftq_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:526
```

### Description

Convert floating-point lanes to fixed-point q-format lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.i32[0] = float_to_fixed_point_q(a, b, 0);
dst.i32[1] = float_to_fixed_point_q(a, b, 1);
dst.i32[2] = float_to_fixed_point_q(a, b, 2);
dst.i32[3] = float_to_fixed_point_q(a, b, 3);
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
#define __msa_ftq_w __builtin_msa_ftq_w
```

