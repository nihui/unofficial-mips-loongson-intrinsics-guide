# Integer Computation

Generated from `include/loongson-mmiintrin.h`. This page contains 34 intrinsics.

## uint16x4_t biadd (uint8x8_t a)

### Synopsis

```c
uint16x4_t biadd (uint8x8_t a)
#include <loongson-mmiintrin.h>
Instruction: biadd
Builtin: __builtin_loongson_biadd
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:434
```

### Description

Add modular integer lanes of `a` and `b` on 1 x u64 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u16[0] = a.u8[0] + a.u8[1];
dst.u16[1] = a.u8[2] + a.u8[3];
dst.u16[2] = a.u8[4] + a.u8[5];
dst.u16[3] = a.u8[6] + a.u8[7];
```

### Header Mapping

```c
return __builtin_loongson_biadd (a);
```

## int8x8_t paddb_s (int8x8_t a, int8x8_t b)

### Synopsis

```c
int8x8_t paddb_s (int8x8_t a, int8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: paddb.s
Builtin: __builtin_loongson_paddb_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:107
```

### Description

Add signed integer lanes of `a` and `b` on 8 x i8 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.i8[0] = a.i8[0] + b.i8[0];
dst.i8[1] = a.i8[1] + b.i8[1];
dst.i8[2] = a.i8[2] + b.i8[2];
dst.i8[3] = a.i8[3] + b.i8[3];
dst.i8[4] = a.i8[4] + b.i8[4];
dst.i8[5] = a.i8[5] + b.i8[5];
dst.i8[6] = a.i8[6] + b.i8[6];
dst.i8[7] = a.i8[7] + b.i8[7];
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
return __builtin_loongson_paddb_s (a, b);
```

## uint8x8_t paddb_u (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t paddb_u (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: paddb.u
Builtin: __builtin_loongson_paddb_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:89
```

### Description

Add unsigned integer lanes of `a` and `b` on 8 x u8 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u8[0] = a.u8[0] + b.u8[0];
dst.u8[1] = a.u8[1] + b.u8[1];
dst.u8[2] = a.u8[2] + b.u8[2];
dst.u8[3] = a.u8[3] + b.u8[3];
dst.u8[4] = a.u8[4] + b.u8[4];
dst.u8[5] = a.u8[5] + b.u8[5];
dst.u8[6] = a.u8[6] + b.u8[6];
dst.u8[7] = a.u8[7] + b.u8[7];
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
return __builtin_loongson_paddb_u (a, b);
```

## int64_t paddd_s (int64_t a, int64_t b)

### Synopsis

```c
int64_t paddd_s (int64_t a, int64_t b)
#include <loongson-mmiintrin.h>
Instruction: paddd.s
Builtin: __builtin_loongson_paddd_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:120
```

### Description

Add signed integer lanes of `a` and `b` on 1 x i64 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.i64[0] = a.i64[0] + b.i64[0];
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
return __builtin_loongson_paddd_s (a, b);
```

## uint64_t paddd_u (uint64_t a, uint64_t b)

### Synopsis

```c
uint64_t paddd_u (uint64_t a, uint64_t b)
#include <loongson-mmiintrin.h>
Instruction: paddd.u
Builtin: __builtin_loongson_paddd_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:114
```

### Description

Add unsigned integer lanes of `a` and `b` on 1 x u64 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u64[0] = a.u64[0] + b.u64[0];
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
return __builtin_loongson_paddd_u (a, b);
```

## int16x4_t paddh_s (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t paddh_s (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: paddh.s
Builtin: __builtin_loongson_paddh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:101
```

### Description

Add signed integer lanes of `a` and `b` on 4 x i16 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.i16[0] = a.i16[0] + b.i16[0];
dst.i16[1] = a.i16[1] + b.i16[1];
dst.i16[2] = a.i16[2] + b.i16[2];
dst.i16[3] = a.i16[3] + b.i16[3];
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
return __builtin_loongson_paddh_s (a, b);
```

## uint16x4_t paddh_u (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t paddh_u (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: paddh.u
Builtin: __builtin_loongson_paddh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:83
```

### Description

Add unsigned integer lanes of `a` and `b` on 4 x u16 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u16[0] = a.u16[0] + b.u16[0];
dst.u16[1] = a.u16[1] + b.u16[1];
dst.u16[2] = a.u16[2] + b.u16[2];
dst.u16[3] = a.u16[3] + b.u16[3];
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
return __builtin_loongson_paddh_u (a, b);
```

## int8x8_t paddsb (int8x8_t a, int8x8_t b)

### Synopsis

```c
int8x8_t paddsb (int8x8_t a, int8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: paddsb
Builtin: __builtin_loongson_paddsb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:133
```

### Description

Perform lane-wise modular saturating integer arithmetic on 8 x u8 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u8[0] = saturate(a.i8[0] + b.i8[0], 8, signedness);
dst.u8[1] = saturate(a.i8[1] + b.i8[1], 8, signedness);
dst.u8[2] = saturate(a.i8[2] + b.i8[2], 8, signedness);
dst.u8[3] = saturate(a.i8[3] + b.i8[3], 8, signedness);
dst.u8[4] = saturate(a.i8[4] + b.i8[4], 8, signedness);
dst.u8[5] = saturate(a.i8[5] + b.i8[5], 8, signedness);
dst.u8[6] = saturate(a.i8[6] + b.i8[6], 8, signedness);
dst.u8[7] = saturate(a.i8[7] + b.i8[7], 8, signedness);
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
return __builtin_loongson_paddsb (a, b);
```

## int16x4_t paddsh (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t paddsh (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: paddsh
Builtin: __builtin_loongson_paddsh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:127
```

### Description

Perform lane-wise modular saturating integer arithmetic on 4 x u16 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u16[0] = saturate(a.i16[0] + b.i16[0], 16, signedness);
dst.u16[1] = saturate(a.i16[1] + b.i16[1], 16, signedness);
dst.u16[2] = saturate(a.i16[2] + b.i16[2], 16, signedness);
dst.u16[3] = saturate(a.i16[3] + b.i16[3], 16, signedness);
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
return __builtin_loongson_paddsh (a, b);
```

## uint8x8_t paddusb (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t paddusb (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: paddusb
Builtin: __builtin_loongson_paddusb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:146
```

### Description

Add modular integer lanes of `a` and `b` on 8 x u8 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u8[0] = a.u8[0] + b.u8[0];
dst.u8[1] = a.u8[1] + b.u8[1];
dst.u8[2] = a.u8[2] + b.u8[2];
dst.u8[3] = a.u8[3] + b.u8[3];
dst.u8[4] = a.u8[4] + b.u8[4];
dst.u8[5] = a.u8[5] + b.u8[5];
dst.u8[6] = a.u8[6] + b.u8[6];
dst.u8[7] = a.u8[7] + b.u8[7];
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
return __builtin_loongson_paddusb (a, b);
```

## uint16x4_t paddush (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t paddush (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: paddush
Builtin: __builtin_loongson_paddush
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:140
```

### Description

Add modular integer lanes of `a` and `b` on 4 x u16 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u16[0] = a.u16[0] + b.u16[0];
dst.u16[1] = a.u16[1] + b.u16[1];
dst.u16[2] = a.u16[2] + b.u16[2];
dst.u16[3] = a.u16[3] + b.u16[3];
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
return __builtin_loongson_paddush (a, b);
```

## int32x2_t paddw_s (int32x2_t a, int32x2_t b)

### Synopsis

```c
int32x2_t paddw_s (int32x2_t a, int32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: paddw.s
Builtin: __builtin_loongson_paddw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:95
```

### Description

Add signed integer lanes of `a` and `b` on 2 x i32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.i32[0] = a.i32[0] + b.i32[0];
dst.i32[1] = a.i32[1] + b.i32[1];
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
return __builtin_loongson_paddw_s (a, b);
```

## uint32x2_t paddw_u (uint32x2_t a, uint32x2_t b)

### Synopsis

```c
uint32x2_t paddw_u (uint32x2_t a, uint32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: paddw.u
Builtin: __builtin_loongson_paddw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:77
```

### Description

Add unsigned integer lanes of `a` and `b` on 2 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u32[0] = a.u32[0] + b.u32[0];
dst.u32[1] = a.u32[1] + b.u32[1];
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
return __builtin_loongson_paddw_u (a, b);
```

## uint8x8_t pasubub (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t pasubub (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: pasubub
Builtin: __builtin_loongson_pasubub
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:427
```

### Description

Subtract modular integer lanes of `b` from `a` on 8 x u8 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u8[0] = abs(a.u8[0] - b.u8[0]);
dst.u8[1] = abs(a.u8[1] - b.u8[1]);
dst.u8[2] = abs(a.u8[2] - b.u8[2]);
dst.u8[3] = abs(a.u8[3] - b.u8[3]);
dst.u8[4] = abs(a.u8[4] - b.u8[4]);
dst.u8[5] = abs(a.u8[5] - b.u8[5]);
dst.u8[6] = abs(a.u8[6] - b.u8[6]);
dst.u8[7] = abs(a.u8[7] - b.u8[7]);
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
return __builtin_loongson_pasubub (a, b);
```

## uint8x8_t pavgb (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t pavgb (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: pavgb
Builtin: __builtin_loongson_pavgb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:208
```

### Description

Compute the lane-wise floor average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.u8[0] = floor_average(a.u8[0], b.u8[0]);
dst.u8[1] = floor_average(a.u8[1], b.u8[1]);
dst.u8[2] = floor_average(a.u8[2], b.u8[2]);
dst.u8[3] = floor_average(a.u8[3], b.u8[3]);
dst.u8[4] = floor_average(a.u8[4], b.u8[4]);
dst.u8[5] = floor_average(a.u8[5], b.u8[5]);
dst.u8[6] = floor_average(a.u8[6], b.u8[6]);
dst.u8[7] = floor_average(a.u8[7], b.u8[7]);
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
return __builtin_loongson_pavgb (a, b);
```

## uint16x4_t pavgh (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t pavgh (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pavgh
Builtin: __builtin_loongson_pavgh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:202
```

### Description

Compute the lane-wise floor average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.u16[0] = floor_average(a.u16[0], b.u16[0]);
dst.u16[1] = floor_average(a.u16[1], b.u16[1]);
dst.u16[2] = floor_average(a.u16[2], b.u16[2]);
dst.u16[3] = floor_average(a.u16[3], b.u16[3]);
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
return __builtin_loongson_pavgh (a, b);
```

## int32x2_t pmaddhw (int16x4_t a, int16x4_t b)

### Synopsis

```c
int32x2_t pmaddhw (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pmaddhw
Builtin: __builtin_loongson_pmaddhw
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:351
```

### Description

Add modular integer lanes of `a` and `b` on 2 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.i32[0] = a.i16[0] * b.i16[0] + a.i16[1] * b.i16[1];
dst.i32[1] = a.i16[2] * b.i16[2] + a.i16[3] * b.i16[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.50/4</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return __builtin_loongson_pmaddhw (a, b);
```

## int16x4_t pmulhh (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t pmulhh (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pmulhh
Builtin: __builtin_loongson_pmulhh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:406
```

### Description

Multiply signed 16-bit lanes and keep the upper 16 bits of each 32-bit product.

### Operation

```c
dst.i16[0] = high_16_bits(a.i16[0] * b.i16[0]);
dst.i16[1] = high_16_bits(a.i16[1] * b.i16[1]);
dst.i16[2] = high_16_bits(a.i16[2] * b.i16[2]);
dst.i16[3] = high_16_bits(a.i16[3] * b.i16[3]);
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
return __builtin_loongson_pmulhh (a, b);
```

## uint16x4_t pmulhuh (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t pmulhuh (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pmulhuh
Builtin: __builtin_loongson_pmulhuh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:399
```

### Description

Multiply modular integer lanes of `a` and `b` on 4 x u16 lanes.

### Operation

```c
dst.u16[0] = a.u16[0] * b.u16[0];
dst.u16[1] = a.u16[1] * b.u16[1];
dst.u16[2] = a.u16[2] * b.u16[2];
dst.u16[3] = a.u16[3] * b.u16[3];
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
return __builtin_loongson_pmulhuh (a, b);
```

## int16x4_t pmullh (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t pmullh (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pmullh
Builtin: __builtin_loongson_pmullh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:413
```

### Description

Multiply signed 16-bit lanes and keep the lower 16 bits of each 32-bit product.

### Operation

```c
dst.i16[0] = low_16_bits(a.i16[0] * b.i16[0]);
dst.i16[1] = low_16_bits(a.i16[1] * b.i16[1]);
dst.i16[2] = low_16_bits(a.i16[2] * b.i16[2]);
dst.i16[3] = low_16_bits(a.i16[3] * b.i16[3]);
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
return __builtin_loongson_pmullh (a, b);
```

## int64_t pmuluw (uint32x2_t a, uint32x2_t b)

### Synopsis

```c
int64_t pmuluw (uint32x2_t a, uint32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: pmuluw
Builtin: __builtin_loongson_pmuluw
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:420
```

### Description

Multiply modular integer lanes of `a` and `b` on 2 x u32 lanes.

### Operation

```c
dst.u32[0] = a.u32[0] * b.u32[0];
dst.u32[1] = a.u32[1] * b.u32[1];
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
return __builtin_loongson_pmuluw (a, b);
```

## uint16x4_t psadbh (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint16x4_t psadbh (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: psadbh
Builtin: __builtin_loongson_psadbh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:443
```

### Description

Compute sums of absolute differences for adjacent modular lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.u16[0] = abs(a.u8[0] - b.u8[0]) + abs(a.u8[1] - b.u8[1]);
dst.u16[1] = abs(a.u8[2] - b.u8[2]) + abs(a.u8[3] - b.u8[3]);
dst.u16[2] = abs(a.u8[4] - b.u8[4]) + abs(a.u8[5] - b.u8[5]);
dst.u16[3] = abs(a.u8[6] - b.u8[6]) + abs(a.u8[7] - b.u8[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return __builtin_loongson_psadbh (a, b);
```

## int8x8_t psubb_s (int8x8_t a, int8x8_t b)

### Synopsis

```c
int8x8_t psubb_s (int8x8_t a, int8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: psubb.s
Builtin: __builtin_loongson_psubb_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:568
```

### Description

Subtract signed integer lanes of `b` from `a` on 8 x i8 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i8[0] = a.i8[0] - b.i8[0];
dst.i8[1] = a.i8[1] - b.i8[1];
dst.i8[2] = a.i8[2] - b.i8[2];
dst.i8[3] = a.i8[3] - b.i8[3];
dst.i8[4] = a.i8[4] - b.i8[4];
dst.i8[5] = a.i8[5] - b.i8[5];
dst.i8[6] = a.i8[6] - b.i8[6];
dst.i8[7] = a.i8[7] - b.i8[7];
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
return __builtin_loongson_psubb_s (a, b);
```

## uint8x8_t psubb_u (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t psubb_u (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: psubb.u
Builtin: __builtin_loongson_psubb_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:550
```

### Description

Subtract unsigned integer lanes of `b` from `a` on 8 x u8 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u8[0] = a.u8[0] - b.u8[0];
dst.u8[1] = a.u8[1] - b.u8[1];
dst.u8[2] = a.u8[2] - b.u8[2];
dst.u8[3] = a.u8[3] - b.u8[3];
dst.u8[4] = a.u8[4] - b.u8[4];
dst.u8[5] = a.u8[5] - b.u8[5];
dst.u8[6] = a.u8[6] - b.u8[6];
dst.u8[7] = a.u8[7] - b.u8[7];
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
return __builtin_loongson_psubb_u (a, b);
```

## int64_t psubd_s (int64_t a, int64_t b)

### Synopsis

```c
int64_t psubd_s (int64_t a, int64_t b)
#include <loongson-mmiintrin.h>
Instruction: psubd.s
Builtin: __builtin_loongson_psubd_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:581
```

### Description

Subtract signed integer lanes of `b` from `a` on 1 x i64 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i64[0] = a.i64[0] - b.i64[0];
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
return __builtin_loongson_psubd_s (a, b);
```

## uint64_t psubd_u (uint64_t a, uint64_t b)

### Synopsis

```c
uint64_t psubd_u (uint64_t a, uint64_t b)
#include <loongson-mmiintrin.h>
Instruction: psubd.u
Builtin: __builtin_loongson_psubd_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:575
```

### Description

Subtract unsigned integer lanes of `b` from `a` on 1 x u64 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u64[0] = a.u64[0] - b.u64[0];
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
return __builtin_loongson_psubd_u (a, b);
```

## int16x4_t psubh_s (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t psubh_s (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: psubh.s
Builtin: __builtin_loongson_psubh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:562
```

### Description

Subtract signed integer lanes of `b` from `a` on 4 x i16 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i16[0] = a.i16[0] - b.i16[0];
dst.i16[1] = a.i16[1] - b.i16[1];
dst.i16[2] = a.i16[2] - b.i16[2];
dst.i16[3] = a.i16[3] - b.i16[3];
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
return __builtin_loongson_psubh_s (a, b);
```

## uint16x4_t psubh_u (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t psubh_u (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: psubh.u
Builtin: __builtin_loongson_psubh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:544
```

### Description

Subtract unsigned integer lanes of `b` from `a` on 4 x u16 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u16[0] = a.u16[0] - b.u16[0];
dst.u16[1] = a.u16[1] - b.u16[1];
dst.u16[2] = a.u16[2] - b.u16[2];
dst.u16[3] = a.u16[3] - b.u16[3];
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
return __builtin_loongson_psubh_u (a, b);
```

## int8x8_t psubsb (int8x8_t a, int8x8_t b)

### Synopsis

```c
int8x8_t psubsb (int8x8_t a, int8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: psubsb
Builtin: __builtin_loongson_psubsb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:594
```

### Description

Perform lane-wise modular saturating integer arithmetic on 8 x u8 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u8[0] = saturate(a.i8[0] - b.i8[0], 8, signedness);
dst.u8[1] = saturate(a.i8[1] - b.i8[1], 8, signedness);
dst.u8[2] = saturate(a.i8[2] - b.i8[2], 8, signedness);
dst.u8[3] = saturate(a.i8[3] - b.i8[3], 8, signedness);
dst.u8[4] = saturate(a.i8[4] - b.i8[4], 8, signedness);
dst.u8[5] = saturate(a.i8[5] - b.i8[5], 8, signedness);
dst.u8[6] = saturate(a.i8[6] - b.i8[6], 8, signedness);
dst.u8[7] = saturate(a.i8[7] - b.i8[7], 8, signedness);
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
return __builtin_loongson_psubsb (a, b);
```

## int16x4_t psubsh (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t psubsh (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: psubsh
Builtin: __builtin_loongson_psubsh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:588
```

### Description

Perform lane-wise modular saturating integer arithmetic on 4 x u16 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u16[0] = saturate(a.i16[0] - b.i16[0], 16, signedness);
dst.u16[1] = saturate(a.i16[1] - b.i16[1], 16, signedness);
dst.u16[2] = saturate(a.i16[2] - b.i16[2], 16, signedness);
dst.u16[3] = saturate(a.i16[3] - b.i16[3], 16, signedness);
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
return __builtin_loongson_psubsh (a, b);
```

## uint8x8_t psubusb (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t psubusb (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: psubusb
Builtin: __builtin_loongson_psubusb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:607
```

### Description

Subtract modular integer lanes of `b` from `a` on 8 x u8 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u8[0] = a.u8[0] - b.u8[0];
dst.u8[1] = a.u8[1] - b.u8[1];
dst.u8[2] = a.u8[2] - b.u8[2];
dst.u8[3] = a.u8[3] - b.u8[3];
dst.u8[4] = a.u8[4] - b.u8[4];
dst.u8[5] = a.u8[5] - b.u8[5];
dst.u8[6] = a.u8[6] - b.u8[6];
dst.u8[7] = a.u8[7] - b.u8[7];
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
return __builtin_loongson_psubusb (a, b);
```

## uint16x4_t psubush (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t psubush (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: psubush
Builtin: __builtin_loongson_psubush
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:601
```

### Description

Subtract modular integer lanes of `b` from `a` on 4 x u16 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u16[0] = a.u16[0] - b.u16[0];
dst.u16[1] = a.u16[1] - b.u16[1];
dst.u16[2] = a.u16[2] - b.u16[2];
dst.u16[3] = a.u16[3] - b.u16[3];
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
return __builtin_loongson_psubush (a, b);
```

## int32x2_t psubw_s (int32x2_t a, int32x2_t b)

### Synopsis

```c
int32x2_t psubw_s (int32x2_t a, int32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: psubw.s
Builtin: __builtin_loongson_psubw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:556
```

### Description

Subtract signed integer lanes of `b` from `a` on 2 x i32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i32[0] = a.i32[0] - b.i32[0];
dst.i32[1] = a.i32[1] - b.i32[1];
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
return __builtin_loongson_psubw_s (a, b);
```

## uint32x2_t psubw_u (uint32x2_t a, uint32x2_t b)

### Synopsis

```c
uint32x2_t psubw_u (uint32x2_t a, uint32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: psubw.u
Builtin: __builtin_loongson_psubw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:538
```

### Description

Subtract unsigned integer lanes of `b` from `a` on 2 x u32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u32[0] = a.u32[0] - b.u32[0];
dst.u32[1] = a.u32[1] - b.u32[1];
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
return __builtin_loongson_psubw_u (a, b);
```

