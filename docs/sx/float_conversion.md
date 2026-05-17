# Float Conversion

Generated from `include/loongson-sxintrin.h`. This page contains 32 intrinsics.

## __m128i __lsx_vfceil_d (__m128d a)

### Synopsis

```c
__m128i __lsx_vfceil_d (__m128d a)
#include <loongson-sxintrin.h>
Instruction: vfceil.d
Builtin: __builtin_lsx_vfceil_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1158
```

### Description

Round toward positive infinity and convert lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_positive_infinity);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_positive_infinity);
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
return (__m128i)__builtin_lsx_vfceil_d((v2f64)a);
```

## __m128i __lsx_vfceil_w (__m128 a)

### Synopsis

```c
__m128i __lsx_vfceil_w (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vfceil.w
Builtin: __builtin_lsx_vfceil_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1151
```

### Description

Round toward positive infinity and convert lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=toward_positive_infinity);
dst.i32[1] = integer_convert(a.fp32[1], rounding=toward_positive_infinity);
dst.i32[2] = integer_convert(a.fp32[2], rounding=toward_positive_infinity);
dst.i32[3] = integer_convert(a.fp32[3], rounding=toward_positive_infinity);
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
return (__m128i)__builtin_lsx_vfceil_w((v4f32)a);
```

## __m128i __lsx_vfceildo_w (__m128d a, __m128d b)

### Synopsis

```c
__m128i __lsx_vfceildo_w (__m128d a, __m128d b)
#include <loongson-sxintrin.h>
Instruction: vfceildo.w
Builtin: __builtin_lsx_vfceildo_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1200
```

### Description

Round toward positive infinity and convert lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=toward_positive_infinity);
dst.i32[1] = integer_convert(a.fp32[1], rounding=toward_positive_infinity);
dst.i32[2] = integer_convert(a.fp32[2], rounding=toward_positive_infinity);
dst.i32[3] = integer_convert(a.fp32[3], rounding=toward_positive_infinity);
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
return (__m128i)__builtin_lsx_vfceildo_w((v2f64)a, (v2f64)b);
```

## __m128i __lsx_vfceilupl_d (__m128 a)

### Synopsis

```c
__m128i __lsx_vfceilupl_d (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vfceilupl.d
Builtin: __builtin_lsx_vfceilupl_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1263
```

### Description

Round toward positive infinity and convert lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_positive_infinity);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_positive_infinity);
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
return (__m128i)__builtin_lsx_vfceilupl_d((v4f32)a);
```

## __m128i __lsx_vfceilupr_d (__m128 a)

### Synopsis

```c
__m128i __lsx_vfceilupr_d (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vfceilupr.d
Builtin: __builtin_lsx_vfceilupr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1270
```

### Description

Round toward positive infinity and convert lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_positive_infinity);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_positive_infinity);
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
return (__m128i)__builtin_lsx_vfceilupr_d((v4f32)a);
```

## __m128 __lsx_vffintdo_w (__m128i a, __m128i b)

### Synopsis

```c
__m128 __lsx_vffintdo_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vffintdo.w
Builtin: __builtin_lsx_vffintdo_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1186
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
return (__m128)__builtin_lsx_vffintdo_w((v2i64)a, (v2i64)b);
```

## __m128d __lsx_vffintupl_d (__m128i a)

### Synopsis

```c
__m128d __lsx_vffintupl_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vffintupl.d
Builtin: __builtin_lsx_vffintupl_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1235
```

### Description

Convert integer to floating point lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = float_convert(a.i64[0]);
dst.fp64[1] = float_convert(a.i64[1]);
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
return (__m128d)__builtin_lsx_vffintupl_d((v4i32)a);
```

## __m128d __lsx_vffintupr_d (__m128i a)

### Synopsis

```c
__m128d __lsx_vffintupr_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vffintupr.d
Builtin: __builtin_lsx_vffintupr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1242
```

### Description

Convert integer to floating point lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = float_convert(a.i64[0]);
dst.fp64[1] = float_convert(a.i64[1]);
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
return (__m128d)__builtin_lsx_vffintupr_d((v4i32)a);
```

## __m128i __lsx_vffloor_d (__m128d a)

### Synopsis

```c
__m128i __lsx_vffloor_d (__m128d a)
#include <loongson-sxintrin.h>
Instruction: vffloor.d
Builtin: __builtin_lsx_vffloor_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1172
```

### Description

Round toward negative infinity and convert lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_negative_infinity);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_negative_infinity);
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
return (__m128i)__builtin_lsx_vffloor_d((v2f64)a);
```

## __m128i __lsx_vffloor_w (__m128 a)

### Synopsis

```c
__m128i __lsx_vffloor_w (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vffloor.w
Builtin: __builtin_lsx_vffloor_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1165
```

### Description

Round toward negative infinity and convert lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=toward_negative_infinity);
dst.i32[1] = integer_convert(a.fp32[1], rounding=toward_negative_infinity);
dst.i32[2] = integer_convert(a.fp32[2], rounding=toward_negative_infinity);
dst.i32[3] = integer_convert(a.fp32[3], rounding=toward_negative_infinity);
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
return (__m128i)__builtin_lsx_vffloor_w((v4f32)a);
```

## __m128i __lsx_vffloordo_w (__m128d a, __m128d b)

### Synopsis

```c
__m128i __lsx_vffloordo_w (__m128d a, __m128d b)
#include <loongson-sxintrin.h>
Instruction: vffloordo.w
Builtin: __builtin_lsx_vffloordo_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1207
```

### Description

Round toward negative infinity and convert lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=toward_negative_infinity);
dst.i32[1] = integer_convert(a.fp32[1], rounding=toward_negative_infinity);
dst.i32[2] = integer_convert(a.fp32[2], rounding=toward_negative_infinity);
dst.i32[3] = integer_convert(a.fp32[3], rounding=toward_negative_infinity);
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
return (__m128i)__builtin_lsx_vffloordo_w((v2f64)a, (v2f64)b);
```

## __m128i __lsx_vffloorupl_d (__m128 a)

### Synopsis

```c
__m128i __lsx_vffloorupl_d (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vffloorupl.d
Builtin: __builtin_lsx_vffloorupl_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1277
```

### Description

Round toward negative infinity and convert lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_negative_infinity);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_negative_infinity);
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
return (__m128i)__builtin_lsx_vffloorupl_d((v4f32)a);
```

## __m128i __lsx_vffloorupr_d (__m128 a)

### Synopsis

```c
__m128i __lsx_vffloorupr_d (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vffloorupr.d
Builtin: __builtin_lsx_vffloorupr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1284
```

### Description

Round toward negative infinity and convert lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_negative_infinity);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_negative_infinity);
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
return (__m128i)__builtin_lsx_vffloorupr_d((v4f32)a);
```

## __m128i __lsx_vfrint_rm00_d (__m128d a)

### Synopsis

```c
__m128i __lsx_vfrint_rm00_d (__m128d a)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm00.d
Builtin: __builtin_lsx_vfrint_rm00_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1312
```

### Description

Round to an integral floating-point value lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = round_to_integral_float(a.fp64[0], rounding_mode_from_suffix);
dst.fp64[1] = round_to_integral_float(a.fp64[1], rounding_mode_from_suffix);
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
return (__m128i)__builtin_lsx_vfrint_rm00_d((v2f64)a);
```

## __m128i __lsx_vfrint_rm00_w (__m128 a)

### Synopsis

```c
__m128i __lsx_vfrint_rm00_w (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm00.w
Builtin: __builtin_lsx_vfrint_rm00_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1305
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
return (__m128i)__builtin_lsx_vfrint_rm00_w((v4f32)a);
```

## __m128i __lsx_vfrint_rm01_d (__m128d a)

### Synopsis

```c
__m128i __lsx_vfrint_rm01_d (__m128d a)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm01.d
Builtin: __builtin_lsx_vfrint_rm01_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1326
```

### Description

Round to an integral floating-point value lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = round_to_integral_float(a.fp64[0], rounding_mode_from_suffix);
dst.fp64[1] = round_to_integral_float(a.fp64[1], rounding_mode_from_suffix);
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
return (__m128i)__builtin_lsx_vfrint_rm01_d((v2f64)a);
```

## __m128i __lsx_vfrint_rm01_w (__m128 a)

### Synopsis

```c
__m128i __lsx_vfrint_rm01_w (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm01.w
Builtin: __builtin_lsx_vfrint_rm01_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1319
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
return (__m128i)__builtin_lsx_vfrint_rm01_w((v4f32)a);
```

## __m128i __lsx_vfrint_rm10_d (__m128d a)

### Synopsis

```c
__m128i __lsx_vfrint_rm10_d (__m128d a)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm10.d
Builtin: __builtin_lsx_vfrint_rm10_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1340
```

### Description

Round to an integral floating-point value lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = round_to_integral_float(a.fp64[0], rounding_mode_from_suffix);
dst.fp64[1] = round_to_integral_float(a.fp64[1], rounding_mode_from_suffix);
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
return (__m128i)__builtin_lsx_vfrint_rm10_d((v2f64)a);
```

## __m128i __lsx_vfrint_rm10_w (__m128 a)

### Synopsis

```c
__m128i __lsx_vfrint_rm10_w (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm10.w
Builtin: __builtin_lsx_vfrint_rm10_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1333
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
return (__m128i)__builtin_lsx_vfrint_rm10_w((v4f32)a);
```

## __m128i __lsx_vfrint_rm11_d (__m128d a)

### Synopsis

```c
__m128i __lsx_vfrint_rm11_d (__m128d a)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm11.d
Builtin: __builtin_lsx_vfrint_rm11_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1354
```

### Description

Round to an integral floating-point value lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.fp64[0] = round_to_integral_float(a.fp64[0], rounding_mode_from_suffix);
dst.fp64[1] = round_to_integral_float(a.fp64[1], rounding_mode_from_suffix);
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
return (__m128i)__builtin_lsx_vfrint_rm11_d((v2f64)a);
```

## __m128i __lsx_vfrint_rm11_w (__m128 a)

### Synopsis

```c
__m128i __lsx_vfrint_rm11_w (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm11.w
Builtin: __builtin_lsx_vfrint_rm11_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1347
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
return (__m128i)__builtin_lsx_vfrint_rm11_w((v4f32)a);
```

## __m128i __lsx_vfround_d (__m128d a)

### Synopsis

```c
__m128i __lsx_vfround_d (__m128d a)
#include <loongson-sxintrin.h>
Instruction: vfround.d
Builtin: __builtin_lsx_vfround_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1144
```

### Description

Round to nearest and convert lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=nearest);
dst.i64[1] = integer_convert(a.fp64[1], rounding=nearest);
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
return (__m128i)__builtin_lsx_vfround_d((v2f64)a);
```

## __m128i __lsx_vfround_w (__m128 a)

### Synopsis

```c
__m128i __lsx_vfround_w (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vfround.w
Builtin: __builtin_lsx_vfround_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1137
```

### Description

Round to nearest and convert lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=nearest);
dst.i32[1] = integer_convert(a.fp32[1], rounding=nearest);
dst.i32[2] = integer_convert(a.fp32[2], rounding=nearest);
dst.i32[3] = integer_convert(a.fp32[3], rounding=nearest);
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
return (__m128i)__builtin_lsx_vfround_w((v4f32)a);
```

## __m128i __lsx_vfrounddo_w (__m128d a, __m128d b)

### Synopsis

```c
__m128i __lsx_vfrounddo_w (__m128d a, __m128d b)
#include <loongson-sxintrin.h>
Instruction: vfrounddo.w
Builtin: __builtin_lsx_vfrounddo_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1214
```

### Description

Round to nearest and convert lane-wise for 4 x fp32 lanes.

### Operation

```c
dst.i32[0] = integer_convert(a.fp32[0], rounding=nearest);
dst.i32[1] = integer_convert(a.fp32[1], rounding=nearest);
dst.i32[2] = integer_convert(a.fp32[2], rounding=nearest);
dst.i32[3] = integer_convert(a.fp32[3], rounding=nearest);
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
return (__m128i)__builtin_lsx_vfrounddo_w((v2f64)a, (v2f64)b);
```

## __m128i __lsx_vfroundupl_d (__m128 a)

### Synopsis

```c
__m128i __lsx_vfroundupl_d (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vfroundupl.d
Builtin: __builtin_lsx_vfroundupl_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1291
```

### Description

Round to nearest and convert lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=nearest);
dst.i64[1] = integer_convert(a.fp64[1], rounding=nearest);
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
return (__m128i)__builtin_lsx_vfroundupl_d((v4f32)a);
```

## __m128i __lsx_vfroundupr_d (__m128 a)

### Synopsis

```c
__m128i __lsx_vfroundupr_d (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vfroundupr.d
Builtin: __builtin_lsx_vfroundupr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1298
```

### Description

Round to nearest and convert lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=nearest);
dst.i64[1] = integer_convert(a.fp64[1], rounding=nearest);
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
return (__m128i)__builtin_lsx_vfroundupr_d((v4f32)a);
```

## __m128i __lsx_vftintdo_w (__m128d a, __m128d b)

### Synopsis

```c
__m128i __lsx_vftintdo_w (__m128d a, __m128d b)
#include <loongson-sxintrin.h>
Instruction: vftintdo.w
Builtin: __builtin_lsx_vftintdo_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1179
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
return (__m128i)__builtin_lsx_vftintdo_w((v2f64)a, (v2f64)b);
```

## __m128i __lsx_vftintupl_d (__m128 a)

### Synopsis

```c
__m128i __lsx_vftintupl_d (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vftintupl.d
Builtin: __builtin_lsx_vftintupl_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1221
```

### Description

Convert floating point to integer lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=current_rounding_mode);
dst.i64[1] = integer_convert(a.fp64[1], rounding=current_rounding_mode);
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
return (__m128i)__builtin_lsx_vftintupl_d((v4f32)a);
```

## __m128i __lsx_vftintupr_d (__m128 a)

### Synopsis

```c
__m128i __lsx_vftintupr_d (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vftintupr.d
Builtin: __builtin_lsx_vftintupr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1228
```

### Description

Convert floating point to integer lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=current_rounding_mode);
dst.i64[1] = integer_convert(a.fp64[1], rounding=current_rounding_mode);
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
return (__m128i)__builtin_lsx_vftintupr_d((v4f32)a);
```

## __m128i __lsx_vftruncdo_w (__m128d a, __m128d b)

### Synopsis

```c
__m128i __lsx_vftruncdo_w (__m128d a, __m128d b)
#include <loongson-sxintrin.h>
Instruction: vftruncdo.w
Builtin: __builtin_lsx_vftruncdo_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1193
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
return (__m128i)__builtin_lsx_vftruncdo_w((v2f64)a, (v2f64)b);
```

## __m128i __lsx_vftruncupl_d (__m128 a)

### Synopsis

```c
__m128i __lsx_vftruncupl_d (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vftruncupl.d
Builtin: __builtin_lsx_vftruncupl_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1249
```

### Description

Truncate floating point to integer lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_zero);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_zero);
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
return (__m128i)__builtin_lsx_vftruncupl_d((v4f32)a);
```

## __m128i __lsx_vftruncupr_d (__m128 a)

### Synopsis

```c
__m128i __lsx_vftruncupr_d (__m128 a)
#include <loongson-sxintrin.h>
Instruction: vftruncupr.d
Builtin: __builtin_lsx_vftruncupr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1256
```

### Description

Truncate floating point to integer lane-wise for 2 x fp64 lanes.

### Operation

```c
dst.i64[0] = integer_convert(a.fp64[0], rounding=toward_zero);
dst.i64[1] = integer_convert(a.fp64[1], rounding=toward_zero);
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
return (__m128i)__builtin_lsx_vftruncupr_d((v4f32)a);
```

