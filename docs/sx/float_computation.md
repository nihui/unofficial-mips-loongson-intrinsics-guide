# Float Computation

Generated from `include/loongson-sxintrin.h`. This page contains 26 intrinsics.

## __m128d __lsx_vfabs_d (__m128d a)

### Synopsis

```c
__m128d __lsx_vfabs_d (__m128d a)
#include <loongson-sxintrin.h>
Instruction: vfabs.d
Builtin: __builtin_lsx_vfabs_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1004
```

### Description

Compute absolute value lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = abs(a.fp64[0]);
dst.fp64[1] = abs(a.fp64[1]);
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
return (__m128d)__builtin_lsx_vfabs_d((v2f64)a);
```

## __m128 __lsx_vfabs_w (__m128 a)

### Synopsis

```c
__m128 __lsx_vfabs_w (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vfabs.w
Builtin: __builtin_lsx_vfabs_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:997
```

### Description

Compute absolute value lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = abs(a.fp32[0]);
dst.fp32[1] = abs(a.fp32[1]);
dst.fp32[2] = abs(a.fp32[2]);
dst.fp32[3] = abs(a.fp32[3]);
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
return (__m128)__builtin_lsx_vfabs_w((v4f32)a);
```

## __m128d __lsx_vfaddsub_d (__m128d a, __m128d b)

### Synopsis

```c
__m128d __lsx_vfaddsub_d (__m128d a, __m128d b)
#include <loongson-sxintrin.h>
Instruction: vfaddsub.d
Builtin: __builtin_lsx_vfaddsub_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1025
```

### Description

Alternately add and subtract floating-point 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] + b.fp64[0];
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
return (__m128d)__builtin_lsx_vfaddsub_d((v2f64)a, (v2f64)b);
```

## __m128 __lsx_vfaddsub_w (__m128 a, __m128 b)

### Synopsis

```c
__m128 __lsx_vfaddsub_w (__m128 a, __m128 b)
#include <loongson-sxintrin.h>
Instruction: vfaddsub.w
Builtin: __builtin_lsx_vfaddsub_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1032
```

### Description

Alternately add and subtract floating-point 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] + b.fp32[0];
dst.fp32[1] = a.fp32[1] - b.fp32[1];
dst.fp32[2] = a.fp32[2] + b.fp32[2];
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
return (__m128)__builtin_lsx_vfaddsub_w((v4f32)a, (v4f32)b);
```

## __m128d __lsx_vfmadd_d (__m128d a, __m128d b, __m128d c)

### Synopsis

```c
__m128d __lsx_vfmadd_d (__m128d a, __m128d b, __m128d c)
#include <loongson-sxintrin.h>
Instruction: vfmadd.d
Builtin: __builtin_lsx_vfmadd_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1067
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
return (__m128d)__builtin_lsx_vfmadd_d((v2f64)a, (v2f64)b, (v2f64)c);
```

## __m128 __lsx_vfmadd_w (__m128 a, __m128 b, __m128 c)

### Synopsis

```c
__m128 __lsx_vfmadd_w (__m128 a, __m128 b, __m128 c)
#include <loongson-sxintrin.h>
Instruction: vfmadd.w
Builtin: __builtin_lsx_vfmadd_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1074
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
return (__m128)__builtin_lsx_vfmadd_w((v4f32)a, (v4f32)b, (v4f32)c);
```

## __m128d __lsx_vfmaddsub_d (__m128d a, __m128d b, __m128d c)

### Synopsis

```c
__m128d __lsx_vfmaddsub_d (__m128d a, __m128d b, __m128d c)
#include <loongson-sxintrin.h>
Instruction: vfmaddsub.d
Builtin: __builtin_lsx_vfmaddsub_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1053
```

### Description

Alternately fused multiply-add and fused multiply-subtract floating-point 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fused_round((a.fp64[0] * b.fp64[0]) + c.fp64[0]);
dst.fp64[1] = fused_round((a.fp64[1] * b.fp64[1]) - c.fp64[1]);
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
return (__m128d)__builtin_lsx_vfmaddsub_d((v2f64)a, (v2f64)b, (v2f64)c);
```

## __m128 __lsx_vfmaddsub_w (__m128 a, __m128 b, __m128 c)

### Synopsis

```c
__m128 __lsx_vfmaddsub_w (__m128 a, __m128 b, __m128 c)
#include <loongson-sxintrin.h>
Instruction: vfmaddsub.w
Builtin: __builtin_lsx_vfmaddsub_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1060
```

### Description

Alternately fused multiply-add and fused multiply-subtract floating-point 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fused_round((a.fp32[0] * b.fp32[0]) + c.fp32[0]);
dst.fp32[1] = fused_round((a.fp32[1] * b.fp32[1]) - c.fp32[1]);
dst.fp32[2] = fused_round((a.fp32[2] * b.fp32[2]) + c.fp32[2]);
dst.fp32[3] = fused_round((a.fp32[3] * b.fp32[3]) - c.fp32[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.51/5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m128)__builtin_lsx_vfmaddsub_w((v4f32)a, (v4f32)b, (v4f32)c);
```

## __m128d __lsx_vfmsub_d (__m128d a, __m128d b, __m128d c)

### Synopsis

```c
__m128d __lsx_vfmsub_d (__m128d a, __m128d b, __m128d c)
#include <loongson-sxintrin.h>
Instruction: vfmsub.d
Builtin: __builtin_lsx_vfmsub_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1081
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
<tr><td>0.50/5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m128d)__builtin_lsx_vfmsub_d((v2f64)a, (v2f64)b, (v2f64)c);
```

## __m128 __lsx_vfmsub_w (__m128 a, __m128 b, __m128 c)

### Synopsis

```c
__m128 __lsx_vfmsub_w (__m128 a, __m128 b, __m128 c)
#include <loongson-sxintrin.h>
Instruction: vfmsub.w
Builtin: __builtin_lsx_vfmsub_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1088
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
<tr><td>0.50/5</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m128)__builtin_lsx_vfmsub_w((v4f32)a, (v4f32)b, (v4f32)c);
```

## __m128d __lsx_vfmsubadd_d (__m128d a, __m128d b, __m128d c)

### Synopsis

```c
__m128d __lsx_vfmsubadd_d (__m128d a, __m128d b, __m128d c)
#include <loongson-sxintrin.h>
Instruction: vfmsubadd.d
Builtin: __builtin_lsx_vfmsubadd_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1123
```

### Description

Alternately fused multiply-add and fused multiply-subtract floating-point 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = fused_round((a.fp64[0] * b.fp64[0]) - c.fp64[0]);
dst.fp64[1] = fused_round((a.fp64[1] * b.fp64[1]) + c.fp64[1]);
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
return (__m128d)__builtin_lsx_vfmsubadd_d((v2f64)a, (v2f64)b, (v2f64)c);
```

## __m128 __lsx_vfmsubadd_w (__m128 a, __m128 b, __m128 c)

### Synopsis

```c
__m128 __lsx_vfmsubadd_w (__m128 a, __m128 b, __m128 c)
#include <loongson-sxintrin.h>
Instruction: vfmsubadd.w
Builtin: __builtin_lsx_vfmsubadd_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1130
```

### Description

Alternately fused multiply-add and fused multiply-subtract floating-point 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = fused_round((a.fp32[0] * b.fp32[0]) - c.fp32[0]);
dst.fp32[1] = fused_round((a.fp32[1] * b.fp32[1]) + c.fp32[1]);
dst.fp32[2] = fused_round((a.fp32[2] * b.fp32[2]) - c.fp32[2]);
dst.fp32[3] = fused_round((a.fp32[3] * b.fp32[3]) + c.fp32[3]);
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
return (__m128)__builtin_lsx_vfmsubadd_w((v4f32)a, (v4f32)b, (v4f32)c);
```

## __m128d __lsx_vfneg_d (__m128d a)

### Synopsis

```c
__m128d __lsx_vfneg_d (__m128d a)
#include <loongson-sxintrin.h>
Instruction: vfneg.d
Builtin: __builtin_lsx_vfneg_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1018
```

### Description

Negate lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = -a.fp64[0];
dst.fp64[1] = -a.fp64[1];
```

### Header Mapping

```c
return (__m128d)__builtin_lsx_vfneg_d((v2f64)a);
```

## __m128 __lsx_vfneg_w (__m128 a)

### Synopsis

```c
__m128 __lsx_vfneg_w (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vfneg.w
Builtin: __builtin_lsx_vfneg_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1011
```

### Description

Negate lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = -a.fp32[0];
dst.fp32[1] = -a.fp32[1];
dst.fp32[2] = -a.fp32[2];
dst.fp32[3] = -a.fp32[3];
```

### Header Mapping

```c
return (__m128)__builtin_lsx_vfneg_w((v4f32)a);
```

## __m128d __lsx_vfnmadd_d (__m128d a, __m128d b, __m128d c)

### Synopsis

```c
__m128d __lsx_vfnmadd_d (__m128d a, __m128d b, __m128d c)
#include <loongson-sxintrin.h>
Instruction: vfnmadd.d
Builtin: __builtin_lsx_vfnmadd_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1095
```

### Description

Negated fused multiply-add lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = -fused_round((a.fp64[0] * b.fp64[0]) + c.fp64[0]);
dst.fp64[1] = -fused_round((a.fp64[1] * b.fp64[1]) + c.fp64[1]);
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
return (__m128d)__builtin_lsx_vfnmadd_d((v2f64)a, (v2f64)b, (v2f64)c);
```

## __m128 __lsx_vfnmadd_w (__m128 a, __m128 b, __m128 c)

### Synopsis

```c
__m128 __lsx_vfnmadd_w (__m128 a, __m128 b, __m128 c)
#include <loongson-sxintrin.h>
Instruction: vfnmadd.w
Builtin: __builtin_lsx_vfnmadd_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1102
```

### Description

Negated fused multiply-add lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = -fused_round((a.fp32[0] * b.fp32[0]) + c.fp32[0]);
dst.fp32[1] = -fused_round((a.fp32[1] * b.fp32[1]) + c.fp32[1]);
dst.fp32[2] = -fused_round((a.fp32[2] * b.fp32[2]) + c.fp32[2]);
dst.fp32[3] = -fused_round((a.fp32[3] * b.fp32[3]) + c.fp32[3]);
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
return (__m128)__builtin_lsx_vfnmadd_w((v4f32)a, (v4f32)b, (v4f32)c);
```

## __m128d __lsx_vfnmsub_d (__m128d a, __m128d b, __m128d c)

### Synopsis

```c
__m128d __lsx_vfnmsub_d (__m128d a, __m128d b, __m128d c)
#include <loongson-sxintrin.h>
Instruction: vfnmsub.d
Builtin: __builtin_lsx_vfnmsub_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1109
```

### Description

Negated fused multiply-subtract lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = -fused_round((a.fp64[0] * b.fp64[0]) - c.fp64[0]);
dst.fp64[1] = -fused_round((a.fp64[1] * b.fp64[1]) - c.fp64[1]);
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
return (__m128d)__builtin_lsx_vfnmsub_d((v2f64)a, (v2f64)b, (v2f64)c);
```

## __m128 __lsx_vfnmsub_w (__m128 a, __m128 b, __m128 c)

### Synopsis

```c
__m128 __lsx_vfnmsub_w (__m128 a, __m128 b, __m128 c)
#include <loongson-sxintrin.h>
Instruction: vfnmsub.w
Builtin: __builtin_lsx_vfnmsub_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1116
```

### Description

Negated fused multiply-subtract lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = -fused_round((a.fp32[0] * b.fp32[0]) - c.fp32[0]);
dst.fp32[1] = -fused_round((a.fp32[1] * b.fp32[1]) - c.fp32[1]);
dst.fp32[2] = -fused_round((a.fp32[2] * b.fp32[2]) - c.fp32[2]);
dst.fp32[3] = -fused_round((a.fp32[3] * b.fp32[3]) - c.fp32[3]);
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
return (__m128)__builtin_lsx_vfnmsub_w((v4f32)a, (v4f32)b, (v4f32)c);
```

## __m128i __lsx_vfrstii_b (__m128i a, __m128i b, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vfrstii_b (__m128i a, __m128i b, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vfrstii.b
Builtin: __builtin_lsx_vfrstii_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:838
```

### Description

Find the first matching u8 element positions from `a` and `b` under the immediate and return match indices, or zero when no selected match is found. This supports vectorized substring/search primitives.

### Operation

```c
dst = first_match_indices_or_zero(a, b, imm);
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
#define __lsx_vfrstii_b(a, b, imm) ((__m128i)__builtin_lsx_vfrstii_b((v16i8)(a), (v16i8)(b), (imm)))
```

## __m128i __lsx_vfrstii_h (__m128i a, __m128i b, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vfrstii_h (__m128i a, __m128i b, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vfrstii.h
Builtin: __builtin_lsx_vfrstii_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:837
```

### Description

Find the first matching fp16 element positions from `a` and `b` under the immediate and return match indices, or zero when no selected match is found. This supports vectorized substring/search primitives.

### Operation

```c
dst = first_match_indices_or_zero(a, b, imm);
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
#define __lsx_vfrstii_h(a, b, imm) ((__m128i)__builtin_lsx_vfrstii_h((v8i16)(a), (v8i16)(b), (imm)))
```

## __m128i __lsx_vfrstiv_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __lsx_vfrstiv_b (__m128i a, __m128i b, __m128i c)
#include <loongson-sxintrin.h>
Instruction: vfrstiv.b
Builtin: __builtin_lsx_vfrstiv_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:847
```

### Description

Find the first matching u8 element positions from `a` and `b` under the control vector and return match indices, or zero when no selected match is found. This supports vectorized substring/search primitives.

### Operation

```c
dst = first_match_indices_or_zero(a, b, control vector);
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
return (__m128i)__builtin_lsx_vfrstiv_b((v16i8)a, (v16i8)b, (v16i8)c);
```

## __m128i __lsx_vfrstiv_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __lsx_vfrstiv_h (__m128i a, __m128i b, __m128i c)
#include <loongson-sxintrin.h>
Instruction: vfrstiv.h
Builtin: __builtin_lsx_vfrstiv_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:840
```

### Description

Find the first matching fp16 element positions from `a` and `b` under the control vector and return match indices, or zero when no selected match is found. This supports vectorized substring/search primitives.

### Operation

```c
dst = first_match_indices_or_zero(a, b, control vector);
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
return (__m128i)__builtin_lsx_vfrstiv_h((v8i16)a, (v8i16)b, (v8i16)c);
```

## __m128i __lsx_vfrstm_b (__m128i a)

### Synopsis

```c
__m128i __lsx_vfrstm_b (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vfrstm.b
Builtin: __builtin_lsx_vfrstm_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:861
```

### Description

Find the first matching u8 element positions from `a` and `b` under the mask vector and return match indices, or zero when no selected match is found. This supports vectorized substring/search primitives.

### Operation

```c
dst = first_match_indices_or_zero(a, b, mask);
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
return (__m128i)__builtin_lsx_vfrstm_b((v16i8)a);
```

## __m128i __lsx_vfrstm_h (__m128i a)

### Synopsis

```c
__m128i __lsx_vfrstm_h (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vfrstm.h
Builtin: __builtin_lsx_vfrstm_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:854
```

### Description

Find the first matching fp16 element positions from `a` and `b` under the mask vector and return match indices, or zero when no selected match is found. This supports vectorized substring/search primitives.

### Operation

```c
dst = first_match_indices_or_zero(a, b, mask);
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
return (__m128i)__builtin_lsx_vfrstm_h((v8i16)a);
```

## __m128d __lsx_vfsubadd_d (__m128d a, __m128d b)

### Synopsis

```c
__m128d __lsx_vfsubadd_d (__m128d a, __m128d b)
#include <loongson-sxintrin.h>
Instruction: vfsubadd.d
Builtin: __builtin_lsx_vfsubadd_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1039
```

### Description

Alternately add and subtract floating-point 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = a.fp64[0] - b.fp64[0];
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
return (__m128d)__builtin_lsx_vfsubadd_d((v2f64)a, (v2f64)b);
```

## __m128 __lsx_vfsubadd_w (__m128 a, __m128 b)

### Synopsis

```c
__m128 __lsx_vfsubadd_w (__m128 a, __m128 b)
#include <loongson-sxintrin.h>
Instruction: vfsubadd.w
Builtin: __builtin_lsx_vfsubadd_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1046
```

### Description

Alternately add and subtract floating-point 4 x fp32 lanes.

### Operation

```c
dst.fp32[0] = a.fp32[0] - b.fp32[0];
dst.fp32[1] = a.fp32[1] + b.fp32[1];
dst.fp32[2] = a.fp32[2] - b.fp32[2];
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
return (__m128)__builtin_lsx_vfsubadd_w((v4f32)a, (v4f32)b);
```

