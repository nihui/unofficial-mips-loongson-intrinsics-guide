# Integer Computation

Generated from `include/loongson-asxintrin.h`. This page contains 509 intrinsics.

## __m256i __lasx_mxadd_a_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadd_a_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadd.a.b
Builtin: __builtin_lasx_mxadd_a_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:810
```

### Description

Add modular integer lanes of `a` and `b` on 32 x u8 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u8[0] = abs(a.i8[0]) + abs(b.i8[0]);
dst.u8[1] = abs(a.i8[1]) + abs(b.i8[1]);
dst.u8[2] = abs(a.i8[2]) + abs(b.i8[2]);
dst.u8[3] = abs(a.i8[3]) + abs(b.i8[3]);
dst.u8[4] = abs(a.i8[4]) + abs(b.i8[4]);
dst.u8[5] = abs(a.i8[5]) + abs(b.i8[5]);
dst.u8[6] = abs(a.i8[6]) + abs(b.i8[6]);
dst.u8[7] = abs(a.i8[7]) + abs(b.i8[7]);
dst.u8[8] = abs(a.i8[8]) + abs(b.i8[8]);
dst.u8[9] = abs(a.i8[9]) + abs(b.i8[9]);
dst.u8[10] = abs(a.i8[10]) + abs(b.i8[10]);
dst.u8[11] = abs(a.i8[11]) + abs(b.i8[11]);
dst.u8[12] = abs(a.i8[12]) + abs(b.i8[12]);
dst.u8[13] = abs(a.i8[13]) + abs(b.i8[13]);
dst.u8[14] = abs(a.i8[14]) + abs(b.i8[14]);
dst.u8[15] = abs(a.i8[15]) + abs(b.i8[15]);
dst.u8[16] = abs(a.i8[16]) + abs(b.i8[16]);
dst.u8[17] = abs(a.i8[17]) + abs(b.i8[17]);
dst.u8[18] = abs(a.i8[18]) + abs(b.i8[18]);
dst.u8[19] = abs(a.i8[19]) + abs(b.i8[19]);
dst.u8[20] = abs(a.i8[20]) + abs(b.i8[20]);
dst.u8[21] = abs(a.i8[21]) + abs(b.i8[21]);
dst.u8[22] = abs(a.i8[22]) + abs(b.i8[22]);
dst.u8[23] = abs(a.i8[23]) + abs(b.i8[23]);
dst.u8[24] = abs(a.i8[24]) + abs(b.i8[24]);
dst.u8[25] = abs(a.i8[25]) + abs(b.i8[25]);
dst.u8[26] = abs(a.i8[26]) + abs(b.i8[26]);
dst.u8[27] = abs(a.i8[27]) + abs(b.i8[27]);
dst.u8[28] = abs(a.i8[28]) + abs(b.i8[28]);
dst.u8[29] = abs(a.i8[29]) + abs(b.i8[29]);
dst.u8[30] = abs(a.i8[30]) + abs(b.i8[30]);
dst.u8[31] = abs(a.i8[31]) + abs(b.i8[31]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadd_a_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxadd_a_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadd_a_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadd.a.d
Builtin: __builtin_lasx_mxadd_a_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:831
```

### Description

Add modular integer lanes of `a` and `b` on 4 x u64 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u64[0] = abs(a.i64[0]) + abs(b.i64[0]);
dst.u64[1] = abs(a.i64[1]) + abs(b.i64[1]);
dst.u64[2] = abs(a.i64[2]) + abs(b.i64[2]);
dst.u64[3] = abs(a.i64[3]) + abs(b.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadd_a_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxadd_a_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadd_a_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadd.a.h
Builtin: __builtin_lasx_mxadd_a_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:817
```

### Description

Add modular integer lanes of `a` and `b` on 16 x u16 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u16[0] = abs(a.i16[0]) + abs(b.i16[0]);
dst.u16[1] = abs(a.i16[1]) + abs(b.i16[1]);
dst.u16[2] = abs(a.i16[2]) + abs(b.i16[2]);
dst.u16[3] = abs(a.i16[3]) + abs(b.i16[3]);
dst.u16[4] = abs(a.i16[4]) + abs(b.i16[4]);
dst.u16[5] = abs(a.i16[5]) + abs(b.i16[5]);
dst.u16[6] = abs(a.i16[6]) + abs(b.i16[6]);
dst.u16[7] = abs(a.i16[7]) + abs(b.i16[7]);
dst.u16[8] = abs(a.i16[8]) + abs(b.i16[8]);
dst.u16[9] = abs(a.i16[9]) + abs(b.i16[9]);
dst.u16[10] = abs(a.i16[10]) + abs(b.i16[10]);
dst.u16[11] = abs(a.i16[11]) + abs(b.i16[11]);
dst.u16[12] = abs(a.i16[12]) + abs(b.i16[12]);
dst.u16[13] = abs(a.i16[13]) + abs(b.i16[13]);
dst.u16[14] = abs(a.i16[14]) + abs(b.i16[14]);
dst.u16[15] = abs(a.i16[15]) + abs(b.i16[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadd_a_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxadd_a_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadd_a_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadd.a.w
Builtin: __builtin_lasx_mxadd_a_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:824
```

### Description

Add modular integer lanes of `a` and `b` on 8 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u32[0] = abs(a.i32[0]) + abs(b.i32[0]);
dst.u32[1] = abs(a.i32[1]) + abs(b.i32[1]);
dst.u32[2] = abs(a.i32[2]) + abs(b.i32[2]);
dst.u32[3] = abs(a.i32[3]) + abs(b.i32[3]);
dst.u32[4] = abs(a.i32[4]) + abs(b.i32[4]);
dst.u32[5] = abs(a.i32[5]) + abs(b.i32[5]);
dst.u32[6] = abs(a.i32[6]) + abs(b.i32[6]);
dst.u32[7] = abs(a.i32[7]) + abs(b.i32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadd_a_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxadds_a_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadds_a_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadds.a.b
Builtin: __builtin_lasx_mxadds_a_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:838
```

### Description

Perform lane-wise modular saturating integer arithmetic on 32 x u8 lanes, clamping overflow instead of wrapping.

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
dst.u8[8] = saturate(a.i8[8] + b.i8[8], 8, signedness);
dst.u8[9] = saturate(a.i8[9] + b.i8[9], 8, signedness);
dst.u8[10] = saturate(a.i8[10] + b.i8[10], 8, signedness);
dst.u8[11] = saturate(a.i8[11] + b.i8[11], 8, signedness);
dst.u8[12] = saturate(a.i8[12] + b.i8[12], 8, signedness);
dst.u8[13] = saturate(a.i8[13] + b.i8[13], 8, signedness);
dst.u8[14] = saturate(a.i8[14] + b.i8[14], 8, signedness);
dst.u8[15] = saturate(a.i8[15] + b.i8[15], 8, signedness);
dst.u8[16] = saturate(a.i8[16] + b.i8[16], 8, signedness);
dst.u8[17] = saturate(a.i8[17] + b.i8[17], 8, signedness);
dst.u8[18] = saturate(a.i8[18] + b.i8[18], 8, signedness);
dst.u8[19] = saturate(a.i8[19] + b.i8[19], 8, signedness);
dst.u8[20] = saturate(a.i8[20] + b.i8[20], 8, signedness);
dst.u8[21] = saturate(a.i8[21] + b.i8[21], 8, signedness);
dst.u8[22] = saturate(a.i8[22] + b.i8[22], 8, signedness);
dst.u8[23] = saturate(a.i8[23] + b.i8[23], 8, signedness);
dst.u8[24] = saturate(a.i8[24] + b.i8[24], 8, signedness);
dst.u8[25] = saturate(a.i8[25] + b.i8[25], 8, signedness);
dst.u8[26] = saturate(a.i8[26] + b.i8[26], 8, signedness);
dst.u8[27] = saturate(a.i8[27] + b.i8[27], 8, signedness);
dst.u8[28] = saturate(a.i8[28] + b.i8[28], 8, signedness);
dst.u8[29] = saturate(a.i8[29] + b.i8[29], 8, signedness);
dst.u8[30] = saturate(a.i8[30] + b.i8[30], 8, signedness);
dst.u8[31] = saturate(a.i8[31] + b.i8[31], 8, signedness);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_a_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxadds_a_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadds_a_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadds.a.d
Builtin: __builtin_lasx_mxadds_a_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:859
```

### Description

Perform lane-wise modular saturating integer arithmetic on 4 x u64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u64[0] = saturate(a.i64[0] + b.i64[0], 64, signedness);
dst.u64[1] = saturate(a.i64[1] + b.i64[1], 64, signedness);
dst.u64[2] = saturate(a.i64[2] + b.i64[2], 64, signedness);
dst.u64[3] = saturate(a.i64[3] + b.i64[3], 64, signedness);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_a_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxadds_a_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadds_a_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadds.a.h
Builtin: __builtin_lasx_mxadds_a_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:845
```

### Description

Perform lane-wise modular saturating integer arithmetic on 16 x u16 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u16[0] = saturate(a.i16[0] + b.i16[0], 16, signedness);
dst.u16[1] = saturate(a.i16[1] + b.i16[1], 16, signedness);
dst.u16[2] = saturate(a.i16[2] + b.i16[2], 16, signedness);
dst.u16[3] = saturate(a.i16[3] + b.i16[3], 16, signedness);
dst.u16[4] = saturate(a.i16[4] + b.i16[4], 16, signedness);
dst.u16[5] = saturate(a.i16[5] + b.i16[5], 16, signedness);
dst.u16[6] = saturate(a.i16[6] + b.i16[6], 16, signedness);
dst.u16[7] = saturate(a.i16[7] + b.i16[7], 16, signedness);
dst.u16[8] = saturate(a.i16[8] + b.i16[8], 16, signedness);
dst.u16[9] = saturate(a.i16[9] + b.i16[9], 16, signedness);
dst.u16[10] = saturate(a.i16[10] + b.i16[10], 16, signedness);
dst.u16[11] = saturate(a.i16[11] + b.i16[11], 16, signedness);
dst.u16[12] = saturate(a.i16[12] + b.i16[12], 16, signedness);
dst.u16[13] = saturate(a.i16[13] + b.i16[13], 16, signedness);
dst.u16[14] = saturate(a.i16[14] + b.i16[14], 16, signedness);
dst.u16[15] = saturate(a.i16[15] + b.i16[15], 16, signedness);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_a_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxadds_a_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadds_a_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadds.a.w
Builtin: __builtin_lasx_mxadds_a_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:852
```

### Description

Perform lane-wise modular saturating integer arithmetic on 8 x u32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u32[0] = saturate(a.i32[0] + b.i32[0], 32, signedness);
dst.u32[1] = saturate(a.i32[1] + b.i32[1], 32, signedness);
dst.u32[2] = saturate(a.i32[2] + b.i32[2], 32, signedness);
dst.u32[3] = saturate(a.i32[3] + b.i32[3], 32, signedness);
dst.u32[4] = saturate(a.i32[4] + b.i32[4], 32, signedness);
dst.u32[5] = saturate(a.i32[5] + b.i32[5], 32, signedness);
dst.u32[6] = saturate(a.i32[6] + b.i32[6], 32, signedness);
dst.u32[7] = saturate(a.i32[7] + b.i32[7], 32, signedness);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_a_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxadds_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadds_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadds.s.b
Builtin: __builtin_lasx_mxadds_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:866
```

### Description

Perform lane-wise signed saturating integer arithmetic on 32 x i8 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i8[0] = saturate(a.i8[0] + b.i8[0], 8, signedness);
dst.i8[1] = saturate(a.i8[1] + b.i8[1], 8, signedness);
dst.i8[2] = saturate(a.i8[2] + b.i8[2], 8, signedness);
dst.i8[3] = saturate(a.i8[3] + b.i8[3], 8, signedness);
dst.i8[4] = saturate(a.i8[4] + b.i8[4], 8, signedness);
dst.i8[5] = saturate(a.i8[5] + b.i8[5], 8, signedness);
dst.i8[6] = saturate(a.i8[6] + b.i8[6], 8, signedness);
dst.i8[7] = saturate(a.i8[7] + b.i8[7], 8, signedness);
dst.i8[8] = saturate(a.i8[8] + b.i8[8], 8, signedness);
dst.i8[9] = saturate(a.i8[9] + b.i8[9], 8, signedness);
dst.i8[10] = saturate(a.i8[10] + b.i8[10], 8, signedness);
dst.i8[11] = saturate(a.i8[11] + b.i8[11], 8, signedness);
dst.i8[12] = saturate(a.i8[12] + b.i8[12], 8, signedness);
dst.i8[13] = saturate(a.i8[13] + b.i8[13], 8, signedness);
dst.i8[14] = saturate(a.i8[14] + b.i8[14], 8, signedness);
dst.i8[15] = saturate(a.i8[15] + b.i8[15], 8, signedness);
dst.i8[16] = saturate(a.i8[16] + b.i8[16], 8, signedness);
dst.i8[17] = saturate(a.i8[17] + b.i8[17], 8, signedness);
dst.i8[18] = saturate(a.i8[18] + b.i8[18], 8, signedness);
dst.i8[19] = saturate(a.i8[19] + b.i8[19], 8, signedness);
dst.i8[20] = saturate(a.i8[20] + b.i8[20], 8, signedness);
dst.i8[21] = saturate(a.i8[21] + b.i8[21], 8, signedness);
dst.i8[22] = saturate(a.i8[22] + b.i8[22], 8, signedness);
dst.i8[23] = saturate(a.i8[23] + b.i8[23], 8, signedness);
dst.i8[24] = saturate(a.i8[24] + b.i8[24], 8, signedness);
dst.i8[25] = saturate(a.i8[25] + b.i8[25], 8, signedness);
dst.i8[26] = saturate(a.i8[26] + b.i8[26], 8, signedness);
dst.i8[27] = saturate(a.i8[27] + b.i8[27], 8, signedness);
dst.i8[28] = saturate(a.i8[28] + b.i8[28], 8, signedness);
dst.i8[29] = saturate(a.i8[29] + b.i8[29], 8, signedness);
dst.i8[30] = saturate(a.i8[30] + b.i8[30], 8, signedness);
dst.i8[31] = saturate(a.i8[31] + b.i8[31], 8, signedness);
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
return (__m256i)__builtin_lasx_mxadds_s_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxadds_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadds_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadds.s.d
Builtin: __builtin_lasx_mxadds_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:887
```

### Description

Perform lane-wise signed saturating integer arithmetic on 4 x i64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i64[0] = saturate(a.i64[0] + b.i64[0], 64, signedness);
dst.i64[1] = saturate(a.i64[1] + b.i64[1], 64, signedness);
dst.i64[2] = saturate(a.i64[2] + b.i64[2], 64, signedness);
dst.i64[3] = saturate(a.i64[3] + b.i64[3], 64, signedness);
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
return (__m256i)__builtin_lasx_mxadds_s_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxadds_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadds_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadds.s.h
Builtin: __builtin_lasx_mxadds_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:873
```

### Description

Perform lane-wise signed saturating integer arithmetic on 16 x i16 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i16[0] = saturate(a.i16[0] + b.i16[0], 16, signedness);
dst.i16[1] = saturate(a.i16[1] + b.i16[1], 16, signedness);
dst.i16[2] = saturate(a.i16[2] + b.i16[2], 16, signedness);
dst.i16[3] = saturate(a.i16[3] + b.i16[3], 16, signedness);
dst.i16[4] = saturate(a.i16[4] + b.i16[4], 16, signedness);
dst.i16[5] = saturate(a.i16[5] + b.i16[5], 16, signedness);
dst.i16[6] = saturate(a.i16[6] + b.i16[6], 16, signedness);
dst.i16[7] = saturate(a.i16[7] + b.i16[7], 16, signedness);
dst.i16[8] = saturate(a.i16[8] + b.i16[8], 16, signedness);
dst.i16[9] = saturate(a.i16[9] + b.i16[9], 16, signedness);
dst.i16[10] = saturate(a.i16[10] + b.i16[10], 16, signedness);
dst.i16[11] = saturate(a.i16[11] + b.i16[11], 16, signedness);
dst.i16[12] = saturate(a.i16[12] + b.i16[12], 16, signedness);
dst.i16[13] = saturate(a.i16[13] + b.i16[13], 16, signedness);
dst.i16[14] = saturate(a.i16[14] + b.i16[14], 16, signedness);
dst.i16[15] = saturate(a.i16[15] + b.i16[15], 16, signedness);
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
return (__m256i)__builtin_lasx_mxadds_s_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxadds_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadds_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadds.s.w
Builtin: __builtin_lasx_mxadds_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:880
```

### Description

Perform lane-wise signed saturating integer arithmetic on 8 x i32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i32[0] = saturate(a.i32[0] + b.i32[0], 32, signedness);
dst.i32[1] = saturate(a.i32[1] + b.i32[1], 32, signedness);
dst.i32[2] = saturate(a.i32[2] + b.i32[2], 32, signedness);
dst.i32[3] = saturate(a.i32[3] + b.i32[3], 32, signedness);
dst.i32[4] = saturate(a.i32[4] + b.i32[4], 32, signedness);
dst.i32[5] = saturate(a.i32[5] + b.i32[5], 32, signedness);
dst.i32[6] = saturate(a.i32[6] + b.i32[6], 32, signedness);
dst.i32[7] = saturate(a.i32[7] + b.i32[7], 32, signedness);
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
return (__m256i)__builtin_lasx_mxadds_s_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxadds_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadds_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadds.u.b
Builtin: __builtin_lasx_mxadds_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:894
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 32 x u8 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u8[0] = saturate(a.u8[0] + b.u8[0], 8, signedness);
dst.u8[1] = saturate(a.u8[1] + b.u8[1], 8, signedness);
dst.u8[2] = saturate(a.u8[2] + b.u8[2], 8, signedness);
dst.u8[3] = saturate(a.u8[3] + b.u8[3], 8, signedness);
dst.u8[4] = saturate(a.u8[4] + b.u8[4], 8, signedness);
dst.u8[5] = saturate(a.u8[5] + b.u8[5], 8, signedness);
dst.u8[6] = saturate(a.u8[6] + b.u8[6], 8, signedness);
dst.u8[7] = saturate(a.u8[7] + b.u8[7], 8, signedness);
dst.u8[8] = saturate(a.u8[8] + b.u8[8], 8, signedness);
dst.u8[9] = saturate(a.u8[9] + b.u8[9], 8, signedness);
dst.u8[10] = saturate(a.u8[10] + b.u8[10], 8, signedness);
dst.u8[11] = saturate(a.u8[11] + b.u8[11], 8, signedness);
dst.u8[12] = saturate(a.u8[12] + b.u8[12], 8, signedness);
dst.u8[13] = saturate(a.u8[13] + b.u8[13], 8, signedness);
dst.u8[14] = saturate(a.u8[14] + b.u8[14], 8, signedness);
dst.u8[15] = saturate(a.u8[15] + b.u8[15], 8, signedness);
dst.u8[16] = saturate(a.u8[16] + b.u8[16], 8, signedness);
dst.u8[17] = saturate(a.u8[17] + b.u8[17], 8, signedness);
dst.u8[18] = saturate(a.u8[18] + b.u8[18], 8, signedness);
dst.u8[19] = saturate(a.u8[19] + b.u8[19], 8, signedness);
dst.u8[20] = saturate(a.u8[20] + b.u8[20], 8, signedness);
dst.u8[21] = saturate(a.u8[21] + b.u8[21], 8, signedness);
dst.u8[22] = saturate(a.u8[22] + b.u8[22], 8, signedness);
dst.u8[23] = saturate(a.u8[23] + b.u8[23], 8, signedness);
dst.u8[24] = saturate(a.u8[24] + b.u8[24], 8, signedness);
dst.u8[25] = saturate(a.u8[25] + b.u8[25], 8, signedness);
dst.u8[26] = saturate(a.u8[26] + b.u8[26], 8, signedness);
dst.u8[27] = saturate(a.u8[27] + b.u8[27], 8, signedness);
dst.u8[28] = saturate(a.u8[28] + b.u8[28], 8, signedness);
dst.u8[29] = saturate(a.u8[29] + b.u8[29], 8, signedness);
dst.u8[30] = saturate(a.u8[30] + b.u8[30], 8, signedness);
dst.u8[31] = saturate(a.u8[31] + b.u8[31], 8, signedness);
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
return (__m256i)__builtin_lasx_mxadds_u_b((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxadds_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadds_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadds.u.d
Builtin: __builtin_lasx_mxadds_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:915
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 4 x u64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u64[0] = saturate(a.u64[0] + b.u64[0], 64, signedness);
dst.u64[1] = saturate(a.u64[1] + b.u64[1], 64, signedness);
dst.u64[2] = saturate(a.u64[2] + b.u64[2], 64, signedness);
dst.u64[3] = saturate(a.u64[3] + b.u64[3], 64, signedness);
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
return (__m256i)__builtin_lasx_mxadds_u_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxadds_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadds_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadds.u.h
Builtin: __builtin_lasx_mxadds_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:901
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 16 x u16 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u16[0] = saturate(a.u16[0] + b.u16[0], 16, signedness);
dst.u16[1] = saturate(a.u16[1] + b.u16[1], 16, signedness);
dst.u16[2] = saturate(a.u16[2] + b.u16[2], 16, signedness);
dst.u16[3] = saturate(a.u16[3] + b.u16[3], 16, signedness);
dst.u16[4] = saturate(a.u16[4] + b.u16[4], 16, signedness);
dst.u16[5] = saturate(a.u16[5] + b.u16[5], 16, signedness);
dst.u16[6] = saturate(a.u16[6] + b.u16[6], 16, signedness);
dst.u16[7] = saturate(a.u16[7] + b.u16[7], 16, signedness);
dst.u16[8] = saturate(a.u16[8] + b.u16[8], 16, signedness);
dst.u16[9] = saturate(a.u16[9] + b.u16[9], 16, signedness);
dst.u16[10] = saturate(a.u16[10] + b.u16[10], 16, signedness);
dst.u16[11] = saturate(a.u16[11] + b.u16[11], 16, signedness);
dst.u16[12] = saturate(a.u16[12] + b.u16[12], 16, signedness);
dst.u16[13] = saturate(a.u16[13] + b.u16[13], 16, signedness);
dst.u16[14] = saturate(a.u16[14] + b.u16[14], 16, signedness);
dst.u16[15] = saturate(a.u16[15] + b.u16[15], 16, signedness);
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
return (__m256i)__builtin_lasx_mxadds_u_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxadds_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxadds_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxadds.u.w
Builtin: __builtin_lasx_mxadds_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:908
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 8 x u32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u32[0] = saturate(a.u32[0] + b.u32[0], 32, signedness);
dst.u32[1] = saturate(a.u32[1] + b.u32[1], 32, signedness);
dst.u32[2] = saturate(a.u32[2] + b.u32[2], 32, signedness);
dst.u32[3] = saturate(a.u32[3] + b.u32[3], 32, signedness);
dst.u32[4] = saturate(a.u32[4] + b.u32[4], 32, signedness);
dst.u32[5] = saturate(a.u32[5] + b.u32[5], 32, signedness);
dst.u32[6] = saturate(a.u32[6] + b.u32[6], 32, signedness);
dst.u32[7] = saturate(a.u32[7] + b.u32[7], 32, signedness);
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
return (__m256i)__builtin_lasx_mxadds_u_w((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxaddv_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxaddv_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxaddv.b
Builtin: __builtin_lasx_mxaddv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:394
```

### Description

Add modular integer lanes of `a` and `b` on 32 x u8 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u8[0] = a.i8[0] + b.i8[0];
dst.u8[1] = a.i8[1] + b.i8[1];
dst.u8[2] = a.i8[2] + b.i8[2];
dst.u8[3] = a.i8[3] + b.i8[3];
dst.u8[4] = a.i8[4] + b.i8[4];
dst.u8[5] = a.i8[5] + b.i8[5];
dst.u8[6] = a.i8[6] + b.i8[6];
dst.u8[7] = a.i8[7] + b.i8[7];
dst.u8[8] = a.i8[8] + b.i8[8];
dst.u8[9] = a.i8[9] + b.i8[9];
dst.u8[10] = a.i8[10] + b.i8[10];
dst.u8[11] = a.i8[11] + b.i8[11];
dst.u8[12] = a.i8[12] + b.i8[12];
dst.u8[13] = a.i8[13] + b.i8[13];
dst.u8[14] = a.i8[14] + b.i8[14];
dst.u8[15] = a.i8[15] + b.i8[15];
dst.u8[16] = a.i8[16] + b.i8[16];
dst.u8[17] = a.i8[17] + b.i8[17];
dst.u8[18] = a.i8[18] + b.i8[18];
dst.u8[19] = a.i8[19] + b.i8[19];
dst.u8[20] = a.i8[20] + b.i8[20];
dst.u8[21] = a.i8[21] + b.i8[21];
dst.u8[22] = a.i8[22] + b.i8[22];
dst.u8[23] = a.i8[23] + b.i8[23];
dst.u8[24] = a.i8[24] + b.i8[24];
dst.u8[25] = a.i8[25] + b.i8[25];
dst.u8[26] = a.i8[26] + b.i8[26];
dst.u8[27] = a.i8[27] + b.i8[27];
dst.u8[28] = a.i8[28] + b.i8[28];
dst.u8[29] = a.i8[29] + b.i8[29];
dst.u8[30] = a.i8[30] + b.i8[30];
dst.u8[31] = a.i8[31] + b.i8[31];
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
return (__m256i)__builtin_lasx_mxaddv_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxaddv_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxaddv_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxaddv.d
Builtin: __builtin_lasx_mxaddv_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:415
```

### Description

Add modular integer lanes of `a` and `b` on 4 x u64 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u64[0] = a.i64[0] + b.i64[0];
dst.u64[1] = a.i64[1] + b.i64[1];
dst.u64[2] = a.i64[2] + b.i64[2];
dst.u64[3] = a.i64[3] + b.i64[3];
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
return (__m256i)__builtin_lasx_mxaddv_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxaddv_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxaddv_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxaddv.h
Builtin: __builtin_lasx_mxaddv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:401
```

### Description

Add modular integer lanes of `a` and `b` on 16 x u16 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u16[0] = a.i16[0] + b.i16[0];
dst.u16[1] = a.i16[1] + b.i16[1];
dst.u16[2] = a.i16[2] + b.i16[2];
dst.u16[3] = a.i16[3] + b.i16[3];
dst.u16[4] = a.i16[4] + b.i16[4];
dst.u16[5] = a.i16[5] + b.i16[5];
dst.u16[6] = a.i16[6] + b.i16[6];
dst.u16[7] = a.i16[7] + b.i16[7];
dst.u16[8] = a.i16[8] + b.i16[8];
dst.u16[9] = a.i16[9] + b.i16[9];
dst.u16[10] = a.i16[10] + b.i16[10];
dst.u16[11] = a.i16[11] + b.i16[11];
dst.u16[12] = a.i16[12] + b.i16[12];
dst.u16[13] = a.i16[13] + b.i16[13];
dst.u16[14] = a.i16[14] + b.i16[14];
dst.u16[15] = a.i16[15] + b.i16[15];
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
return (__m256i)__builtin_lasx_mxaddv_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxaddv_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxaddv_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxaddv.w
Builtin: __builtin_lasx_mxaddv_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:408
```

### Description

Add modular integer lanes of `a` and `b` on 8 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u32[0] = a.i32[0] + b.i32[0];
dst.u32[1] = a.i32[1] + b.i32[1];
dst.u32[2] = a.i32[2] + b.i32[2];
dst.u32[3] = a.i32[3] + b.i32[3];
dst.u32[4] = a.i32[4] + b.i32[4];
dst.u32[5] = a.i32[5] + b.i32[5];
dst.u32[6] = a.i32[6] + b.i32[6];
dst.u32[7] = a.i32[7] + b.i32[7];
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
return (__m256i)__builtin_lasx_mxaddv_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxaddvi_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxaddvi_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxaddvi.b
Builtin: __builtin_lasx_mxaddvi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:421
```

### Description

Add modular integer lanes of `a` and `b` on 32 x u8 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u8[0] = a.i8[0] + imm;
dst.u8[1] = a.i8[1] + imm;
dst.u8[2] = a.i8[2] + imm;
dst.u8[3] = a.i8[3] + imm;
dst.u8[4] = a.i8[4] + imm;
dst.u8[5] = a.i8[5] + imm;
dst.u8[6] = a.i8[6] + imm;
dst.u8[7] = a.i8[7] + imm;
dst.u8[8] = a.i8[8] + imm;
dst.u8[9] = a.i8[9] + imm;
dst.u8[10] = a.i8[10] + imm;
dst.u8[11] = a.i8[11] + imm;
dst.u8[12] = a.i8[12] + imm;
dst.u8[13] = a.i8[13] + imm;
dst.u8[14] = a.i8[14] + imm;
dst.u8[15] = a.i8[15] + imm;
dst.u8[16] = a.i8[16] + imm;
dst.u8[17] = a.i8[17] + imm;
dst.u8[18] = a.i8[18] + imm;
dst.u8[19] = a.i8[19] + imm;
dst.u8[20] = a.i8[20] + imm;
dst.u8[21] = a.i8[21] + imm;
dst.u8[22] = a.i8[22] + imm;
dst.u8[23] = a.i8[23] + imm;
dst.u8[24] = a.i8[24] + imm;
dst.u8[25] = a.i8[25] + imm;
dst.u8[26] = a.i8[26] + imm;
dst.u8[27] = a.i8[27] + imm;
dst.u8[28] = a.i8[28] + imm;
dst.u8[29] = a.i8[29] + imm;
dst.u8[30] = a.i8[30] + imm;
dst.u8[31] = a.i8[31] + imm;
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
#define __lasx_mxaddvi_b(a, imm) ((__m256i)__builtin_lasx_mxaddvi_b((v32i8)(a), (imm)))
```

## __m256i __lasx_mxaddvi_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxaddvi_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxaddvi.d
Builtin: __builtin_lasx_mxaddvi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:424
```

### Description

Add modular integer lanes of `a` and `b` on 4 x u64 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u64[0] = a.i64[0] + imm;
dst.u64[1] = a.i64[1] + imm;
dst.u64[2] = a.i64[2] + imm;
dst.u64[3] = a.i64[3] + imm;
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
#define __lasx_mxaddvi_d(a, imm) ((__m256i)__builtin_lasx_mxaddvi_d((v4i64)(a), (imm)))
```

## __m256i __lasx_mxaddvi_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxaddvi_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxaddvi.h
Builtin: __builtin_lasx_mxaddvi_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:422
```

### Description

Add modular integer lanes of `a` and `b` on 16 x u16 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u16[0] = a.i16[0] + imm;
dst.u16[1] = a.i16[1] + imm;
dst.u16[2] = a.i16[2] + imm;
dst.u16[3] = a.i16[3] + imm;
dst.u16[4] = a.i16[4] + imm;
dst.u16[5] = a.i16[5] + imm;
dst.u16[6] = a.i16[6] + imm;
dst.u16[7] = a.i16[7] + imm;
dst.u16[8] = a.i16[8] + imm;
dst.u16[9] = a.i16[9] + imm;
dst.u16[10] = a.i16[10] + imm;
dst.u16[11] = a.i16[11] + imm;
dst.u16[12] = a.i16[12] + imm;
dst.u16[13] = a.i16[13] + imm;
dst.u16[14] = a.i16[14] + imm;
dst.u16[15] = a.i16[15] + imm;
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
#define __lasx_mxaddvi_h(a, imm) ((__m256i)__builtin_lasx_mxaddvi_h((v16i16)(a), (imm)))
```

## __m256i __lasx_mxaddvi_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxaddvi_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxaddvi.w
Builtin: __builtin_lasx_mxaddvi_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:423
```

### Description

Add modular integer lanes of `a` and `b` on 8 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u32[0] = a.i32[0] + imm;
dst.u32[1] = a.i32[1] + imm;
dst.u32[2] = a.i32[2] + imm;
dst.u32[3] = a.i32[3] + imm;
dst.u32[4] = a.i32[4] + imm;
dst.u32[5] = a.i32[5] + imm;
dst.u32[6] = a.i32[6] + imm;
dst.u32[7] = a.i32[7] + imm;
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
#define __lasx_mxaddvi_w(a, imm) ((__m256i)__builtin_lasx_mxaddvi_w((v8i32)(a), (imm)))
```

## __m256i __lasx_mxasub_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxasub_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxasub.s.b
Builtin: __builtin_lasx_mxasub_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1146
```

### Description

Subtract signed integer lanes of `b` from `a` on 32 x i8 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i8[0] = abs(a.i8[0] - b.i8[0]);
dst.i8[1] = abs(a.i8[1] - b.i8[1]);
dst.i8[2] = abs(a.i8[2] - b.i8[2]);
dst.i8[3] = abs(a.i8[3] - b.i8[3]);
dst.i8[4] = abs(a.i8[4] - b.i8[4]);
dst.i8[5] = abs(a.i8[5] - b.i8[5]);
dst.i8[6] = abs(a.i8[6] - b.i8[6]);
dst.i8[7] = abs(a.i8[7] - b.i8[7]);
dst.i8[8] = abs(a.i8[8] - b.i8[8]);
dst.i8[9] = abs(a.i8[9] - b.i8[9]);
dst.i8[10] = abs(a.i8[10] - b.i8[10]);
dst.i8[11] = abs(a.i8[11] - b.i8[11]);
dst.i8[12] = abs(a.i8[12] - b.i8[12]);
dst.i8[13] = abs(a.i8[13] - b.i8[13]);
dst.i8[14] = abs(a.i8[14] - b.i8[14]);
dst.i8[15] = abs(a.i8[15] - b.i8[15]);
dst.i8[16] = abs(a.i8[16] - b.i8[16]);
dst.i8[17] = abs(a.i8[17] - b.i8[17]);
dst.i8[18] = abs(a.i8[18] - b.i8[18]);
dst.i8[19] = abs(a.i8[19] - b.i8[19]);
dst.i8[20] = abs(a.i8[20] - b.i8[20]);
dst.i8[21] = abs(a.i8[21] - b.i8[21]);
dst.i8[22] = abs(a.i8[22] - b.i8[22]);
dst.i8[23] = abs(a.i8[23] - b.i8[23]);
dst.i8[24] = abs(a.i8[24] - b.i8[24]);
dst.i8[25] = abs(a.i8[25] - b.i8[25]);
dst.i8[26] = abs(a.i8[26] - b.i8[26]);
dst.i8[27] = abs(a.i8[27] - b.i8[27]);
dst.i8[28] = abs(a.i8[28] - b.i8[28]);
dst.i8[29] = abs(a.i8[29] - b.i8[29]);
dst.i8[30] = abs(a.i8[30] - b.i8[30]);
dst.i8[31] = abs(a.i8[31] - b.i8[31]);
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
return (__m256i)__builtin_lasx_mxasub_s_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxasub_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxasub_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxasub.s.d
Builtin: __builtin_lasx_mxasub_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1167
```

### Description

Subtract signed integer lanes of `b` from `a` on 4 x i64 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i64[0] = abs(a.i64[0] - b.i64[0]);
dst.i64[1] = abs(a.i64[1] - b.i64[1]);
dst.i64[2] = abs(a.i64[2] - b.i64[2]);
dst.i64[3] = abs(a.i64[3] - b.i64[3]);
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
return (__m256i)__builtin_lasx_mxasub_s_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxasub_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxasub_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxasub.s.h
Builtin: __builtin_lasx_mxasub_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1153
```

### Description

Subtract signed integer lanes of `b` from `a` on 16 x i16 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i16[0] = abs(a.i16[0] - b.i16[0]);
dst.i16[1] = abs(a.i16[1] - b.i16[1]);
dst.i16[2] = abs(a.i16[2] - b.i16[2]);
dst.i16[3] = abs(a.i16[3] - b.i16[3]);
dst.i16[4] = abs(a.i16[4] - b.i16[4]);
dst.i16[5] = abs(a.i16[5] - b.i16[5]);
dst.i16[6] = abs(a.i16[6] - b.i16[6]);
dst.i16[7] = abs(a.i16[7] - b.i16[7]);
dst.i16[8] = abs(a.i16[8] - b.i16[8]);
dst.i16[9] = abs(a.i16[9] - b.i16[9]);
dst.i16[10] = abs(a.i16[10] - b.i16[10]);
dst.i16[11] = abs(a.i16[11] - b.i16[11]);
dst.i16[12] = abs(a.i16[12] - b.i16[12]);
dst.i16[13] = abs(a.i16[13] - b.i16[13]);
dst.i16[14] = abs(a.i16[14] - b.i16[14]);
dst.i16[15] = abs(a.i16[15] - b.i16[15]);
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
return (__m256i)__builtin_lasx_mxasub_s_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxasub_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxasub_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxasub.s.w
Builtin: __builtin_lasx_mxasub_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1160
```

### Description

Subtract signed integer lanes of `b` from `a` on 8 x i32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i32[0] = abs(a.i32[0] - b.i32[0]);
dst.i32[1] = abs(a.i32[1] - b.i32[1]);
dst.i32[2] = abs(a.i32[2] - b.i32[2]);
dst.i32[3] = abs(a.i32[3] - b.i32[3]);
dst.i32[4] = abs(a.i32[4] - b.i32[4]);
dst.i32[5] = abs(a.i32[5] - b.i32[5]);
dst.i32[6] = abs(a.i32[6] - b.i32[6]);
dst.i32[7] = abs(a.i32[7] - b.i32[7]);
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
return (__m256i)__builtin_lasx_mxasub_s_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxasub_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxasub_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxasub.u.b
Builtin: __builtin_lasx_mxasub_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1174
```

### Description

Subtract unsigned integer lanes of `b` from `a` on 32 x u8 lanes; immediate forms subtract the scalar immediate.

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
dst.u8[8] = abs(a.u8[8] - b.u8[8]);
dst.u8[9] = abs(a.u8[9] - b.u8[9]);
dst.u8[10] = abs(a.u8[10] - b.u8[10]);
dst.u8[11] = abs(a.u8[11] - b.u8[11]);
dst.u8[12] = abs(a.u8[12] - b.u8[12]);
dst.u8[13] = abs(a.u8[13] - b.u8[13]);
dst.u8[14] = abs(a.u8[14] - b.u8[14]);
dst.u8[15] = abs(a.u8[15] - b.u8[15]);
dst.u8[16] = abs(a.u8[16] - b.u8[16]);
dst.u8[17] = abs(a.u8[17] - b.u8[17]);
dst.u8[18] = abs(a.u8[18] - b.u8[18]);
dst.u8[19] = abs(a.u8[19] - b.u8[19]);
dst.u8[20] = abs(a.u8[20] - b.u8[20]);
dst.u8[21] = abs(a.u8[21] - b.u8[21]);
dst.u8[22] = abs(a.u8[22] - b.u8[22]);
dst.u8[23] = abs(a.u8[23] - b.u8[23]);
dst.u8[24] = abs(a.u8[24] - b.u8[24]);
dst.u8[25] = abs(a.u8[25] - b.u8[25]);
dst.u8[26] = abs(a.u8[26] - b.u8[26]);
dst.u8[27] = abs(a.u8[27] - b.u8[27]);
dst.u8[28] = abs(a.u8[28] - b.u8[28]);
dst.u8[29] = abs(a.u8[29] - b.u8[29]);
dst.u8[30] = abs(a.u8[30] - b.u8[30]);
dst.u8[31] = abs(a.u8[31] - b.u8[31]);
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
return (__m256i)__builtin_lasx_mxasub_u_b((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxasub_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxasub_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxasub.u.d
Builtin: __builtin_lasx_mxasub_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1195
```

### Description

Subtract unsigned integer lanes of `b` from `a` on 4 x u64 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u64[0] = abs(a.u64[0] - b.u64[0]);
dst.u64[1] = abs(a.u64[1] - b.u64[1]);
dst.u64[2] = abs(a.u64[2] - b.u64[2]);
dst.u64[3] = abs(a.u64[3] - b.u64[3]);
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
return (__m256i)__builtin_lasx_mxasub_u_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxasub_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxasub_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxasub.u.h
Builtin: __builtin_lasx_mxasub_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1181
```

### Description

Subtract unsigned integer lanes of `b` from `a` on 16 x u16 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u16[0] = abs(a.u16[0] - b.u16[0]);
dst.u16[1] = abs(a.u16[1] - b.u16[1]);
dst.u16[2] = abs(a.u16[2] - b.u16[2]);
dst.u16[3] = abs(a.u16[3] - b.u16[3]);
dst.u16[4] = abs(a.u16[4] - b.u16[4]);
dst.u16[5] = abs(a.u16[5] - b.u16[5]);
dst.u16[6] = abs(a.u16[6] - b.u16[6]);
dst.u16[7] = abs(a.u16[7] - b.u16[7]);
dst.u16[8] = abs(a.u16[8] - b.u16[8]);
dst.u16[9] = abs(a.u16[9] - b.u16[9]);
dst.u16[10] = abs(a.u16[10] - b.u16[10]);
dst.u16[11] = abs(a.u16[11] - b.u16[11]);
dst.u16[12] = abs(a.u16[12] - b.u16[12]);
dst.u16[13] = abs(a.u16[13] - b.u16[13]);
dst.u16[14] = abs(a.u16[14] - b.u16[14]);
dst.u16[15] = abs(a.u16[15] - b.u16[15]);
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
return (__m256i)__builtin_lasx_mxasub_u_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxasub_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxasub_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxasub.u.w
Builtin: __builtin_lasx_mxasub_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1188
```

### Description

Subtract unsigned integer lanes of `b` from `a` on 8 x u32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u32[0] = abs(a.u32[0] - b.u32[0]);
dst.u32[1] = abs(a.u32[1] - b.u32[1]);
dst.u32[2] = abs(a.u32[2] - b.u32[2]);
dst.u32[3] = abs(a.u32[3] - b.u32[3]);
dst.u32[4] = abs(a.u32[4] - b.u32[4]);
dst.u32[5] = abs(a.u32[5] - b.u32[5]);
dst.u32[6] = abs(a.u32[6] - b.u32[6]);
dst.u32[7] = abs(a.u32[7] - b.u32[7]);
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
return (__m256i)__builtin_lasx_mxasub_u_w((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxave_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxave_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxave.s.b
Builtin: __builtin_lasx_mxave_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:922
```

### Description

Compute the lane-wise floor average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.i8[0] = floor_average(a.i8[0], b.i8[0]);
dst.i8[1] = floor_average(a.i8[1], b.i8[1]);
dst.i8[2] = floor_average(a.i8[2], b.i8[2]);
dst.i8[3] = floor_average(a.i8[3], b.i8[3]);
dst.i8[4] = floor_average(a.i8[4], b.i8[4]);
dst.i8[5] = floor_average(a.i8[5], b.i8[5]);
dst.i8[6] = floor_average(a.i8[6], b.i8[6]);
dst.i8[7] = floor_average(a.i8[7], b.i8[7]);
dst.i8[8] = floor_average(a.i8[8], b.i8[8]);
dst.i8[9] = floor_average(a.i8[9], b.i8[9]);
dst.i8[10] = floor_average(a.i8[10], b.i8[10]);
dst.i8[11] = floor_average(a.i8[11], b.i8[11]);
dst.i8[12] = floor_average(a.i8[12], b.i8[12]);
dst.i8[13] = floor_average(a.i8[13], b.i8[13]);
dst.i8[14] = floor_average(a.i8[14], b.i8[14]);
dst.i8[15] = floor_average(a.i8[15], b.i8[15]);
dst.i8[16] = floor_average(a.i8[16], b.i8[16]);
dst.i8[17] = floor_average(a.i8[17], b.i8[17]);
dst.i8[18] = floor_average(a.i8[18], b.i8[18]);
dst.i8[19] = floor_average(a.i8[19], b.i8[19]);
dst.i8[20] = floor_average(a.i8[20], b.i8[20]);
dst.i8[21] = floor_average(a.i8[21], b.i8[21]);
dst.i8[22] = floor_average(a.i8[22], b.i8[22]);
dst.i8[23] = floor_average(a.i8[23], b.i8[23]);
dst.i8[24] = floor_average(a.i8[24], b.i8[24]);
dst.i8[25] = floor_average(a.i8[25], b.i8[25]);
dst.i8[26] = floor_average(a.i8[26], b.i8[26]);
dst.i8[27] = floor_average(a.i8[27], b.i8[27]);
dst.i8[28] = floor_average(a.i8[28], b.i8[28]);
dst.i8[29] = floor_average(a.i8[29], b.i8[29]);
dst.i8[30] = floor_average(a.i8[30], b.i8[30]);
dst.i8[31] = floor_average(a.i8[31], b.i8[31]);
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
return (__m256i)__builtin_lasx_mxave_s_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxave_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxave_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxave.s.d
Builtin: __builtin_lasx_mxave_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:943
```

### Description

Compute the lane-wise floor average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.i64[0] = floor_average(a.i64[0], b.i64[0]);
dst.i64[1] = floor_average(a.i64[1], b.i64[1]);
dst.i64[2] = floor_average(a.i64[2], b.i64[2]);
dst.i64[3] = floor_average(a.i64[3], b.i64[3]);
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
return (__m256i)__builtin_lasx_mxave_s_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxave_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxave_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxave.s.h
Builtin: __builtin_lasx_mxave_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:929
```

### Description

Compute the lane-wise floor average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.i16[0] = floor_average(a.i16[0], b.i16[0]);
dst.i16[1] = floor_average(a.i16[1], b.i16[1]);
dst.i16[2] = floor_average(a.i16[2], b.i16[2]);
dst.i16[3] = floor_average(a.i16[3], b.i16[3]);
dst.i16[4] = floor_average(a.i16[4], b.i16[4]);
dst.i16[5] = floor_average(a.i16[5], b.i16[5]);
dst.i16[6] = floor_average(a.i16[6], b.i16[6]);
dst.i16[7] = floor_average(a.i16[7], b.i16[7]);
dst.i16[8] = floor_average(a.i16[8], b.i16[8]);
dst.i16[9] = floor_average(a.i16[9], b.i16[9]);
dst.i16[10] = floor_average(a.i16[10], b.i16[10]);
dst.i16[11] = floor_average(a.i16[11], b.i16[11]);
dst.i16[12] = floor_average(a.i16[12], b.i16[12]);
dst.i16[13] = floor_average(a.i16[13], b.i16[13]);
dst.i16[14] = floor_average(a.i16[14], b.i16[14]);
dst.i16[15] = floor_average(a.i16[15], b.i16[15]);
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
return (__m256i)__builtin_lasx_mxave_s_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxave_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxave_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxave.s.w
Builtin: __builtin_lasx_mxave_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:936
```

### Description

Compute the lane-wise floor average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.i32[0] = floor_average(a.i32[0], b.i32[0]);
dst.i32[1] = floor_average(a.i32[1], b.i32[1]);
dst.i32[2] = floor_average(a.i32[2], b.i32[2]);
dst.i32[3] = floor_average(a.i32[3], b.i32[3]);
dst.i32[4] = floor_average(a.i32[4], b.i32[4]);
dst.i32[5] = floor_average(a.i32[5], b.i32[5]);
dst.i32[6] = floor_average(a.i32[6], b.i32[6]);
dst.i32[7] = floor_average(a.i32[7], b.i32[7]);
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
return (__m256i)__builtin_lasx_mxave_s_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxave_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxave_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxave.u.b
Builtin: __builtin_lasx_mxave_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:950
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
dst.u8[8] = floor_average(a.u8[8], b.u8[8]);
dst.u8[9] = floor_average(a.u8[9], b.u8[9]);
dst.u8[10] = floor_average(a.u8[10], b.u8[10]);
dst.u8[11] = floor_average(a.u8[11], b.u8[11]);
dst.u8[12] = floor_average(a.u8[12], b.u8[12]);
dst.u8[13] = floor_average(a.u8[13], b.u8[13]);
dst.u8[14] = floor_average(a.u8[14], b.u8[14]);
dst.u8[15] = floor_average(a.u8[15], b.u8[15]);
dst.u8[16] = floor_average(a.u8[16], b.u8[16]);
dst.u8[17] = floor_average(a.u8[17], b.u8[17]);
dst.u8[18] = floor_average(a.u8[18], b.u8[18]);
dst.u8[19] = floor_average(a.u8[19], b.u8[19]);
dst.u8[20] = floor_average(a.u8[20], b.u8[20]);
dst.u8[21] = floor_average(a.u8[21], b.u8[21]);
dst.u8[22] = floor_average(a.u8[22], b.u8[22]);
dst.u8[23] = floor_average(a.u8[23], b.u8[23]);
dst.u8[24] = floor_average(a.u8[24], b.u8[24]);
dst.u8[25] = floor_average(a.u8[25], b.u8[25]);
dst.u8[26] = floor_average(a.u8[26], b.u8[26]);
dst.u8[27] = floor_average(a.u8[27], b.u8[27]);
dst.u8[28] = floor_average(a.u8[28], b.u8[28]);
dst.u8[29] = floor_average(a.u8[29], b.u8[29]);
dst.u8[30] = floor_average(a.u8[30], b.u8[30]);
dst.u8[31] = floor_average(a.u8[31], b.u8[31]);
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
return (__m256i)__builtin_lasx_mxave_u_b((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxave_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxave_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxave.u.d
Builtin: __builtin_lasx_mxave_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:971
```

### Description

Compute the lane-wise floor average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.u64[0] = floor_average(a.u64[0], b.u64[0]);
dst.u64[1] = floor_average(a.u64[1], b.u64[1]);
dst.u64[2] = floor_average(a.u64[2], b.u64[2]);
dst.u64[3] = floor_average(a.u64[3], b.u64[3]);
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
return (__m256i)__builtin_lasx_mxave_u_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxave_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxave_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxave.u.h
Builtin: __builtin_lasx_mxave_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:957
```

### Description

Compute the lane-wise floor average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.u16[0] = floor_average(a.u16[0], b.u16[0]);
dst.u16[1] = floor_average(a.u16[1], b.u16[1]);
dst.u16[2] = floor_average(a.u16[2], b.u16[2]);
dst.u16[3] = floor_average(a.u16[3], b.u16[3]);
dst.u16[4] = floor_average(a.u16[4], b.u16[4]);
dst.u16[5] = floor_average(a.u16[5], b.u16[5]);
dst.u16[6] = floor_average(a.u16[6], b.u16[6]);
dst.u16[7] = floor_average(a.u16[7], b.u16[7]);
dst.u16[8] = floor_average(a.u16[8], b.u16[8]);
dst.u16[9] = floor_average(a.u16[9], b.u16[9]);
dst.u16[10] = floor_average(a.u16[10], b.u16[10]);
dst.u16[11] = floor_average(a.u16[11], b.u16[11]);
dst.u16[12] = floor_average(a.u16[12], b.u16[12]);
dst.u16[13] = floor_average(a.u16[13], b.u16[13]);
dst.u16[14] = floor_average(a.u16[14], b.u16[14]);
dst.u16[15] = floor_average(a.u16[15], b.u16[15]);
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
return (__m256i)__builtin_lasx_mxave_u_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxave_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxave_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxave.u.w
Builtin: __builtin_lasx_mxave_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:964
```

### Description

Compute the lane-wise floor average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.u32[0] = floor_average(a.u32[0], b.u32[0]);
dst.u32[1] = floor_average(a.u32[1], b.u32[1]);
dst.u32[2] = floor_average(a.u32[2], b.u32[2]);
dst.u32[3] = floor_average(a.u32[3], b.u32[3]);
dst.u32[4] = floor_average(a.u32[4], b.u32[4]);
dst.u32[5] = floor_average(a.u32[5], b.u32[5]);
dst.u32[6] = floor_average(a.u32[6], b.u32[6]);
dst.u32[7] = floor_average(a.u32[7], b.u32[7]);
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
return (__m256i)__builtin_lasx_mxave_u_w((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxaver_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxaver_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxaver.s.b
Builtin: __builtin_lasx_mxaver_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:978
```

### Description

Compute the lane-wise rounded-up average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.i8[0] = ceil_average(a.i8[0], b.i8[0]);
dst.i8[1] = ceil_average(a.i8[1], b.i8[1]);
dst.i8[2] = ceil_average(a.i8[2], b.i8[2]);
dst.i8[3] = ceil_average(a.i8[3], b.i8[3]);
dst.i8[4] = ceil_average(a.i8[4], b.i8[4]);
dst.i8[5] = ceil_average(a.i8[5], b.i8[5]);
dst.i8[6] = ceil_average(a.i8[6], b.i8[6]);
dst.i8[7] = ceil_average(a.i8[7], b.i8[7]);
dst.i8[8] = ceil_average(a.i8[8], b.i8[8]);
dst.i8[9] = ceil_average(a.i8[9], b.i8[9]);
dst.i8[10] = ceil_average(a.i8[10], b.i8[10]);
dst.i8[11] = ceil_average(a.i8[11], b.i8[11]);
dst.i8[12] = ceil_average(a.i8[12], b.i8[12]);
dst.i8[13] = ceil_average(a.i8[13], b.i8[13]);
dst.i8[14] = ceil_average(a.i8[14], b.i8[14]);
dst.i8[15] = ceil_average(a.i8[15], b.i8[15]);
dst.i8[16] = ceil_average(a.i8[16], b.i8[16]);
dst.i8[17] = ceil_average(a.i8[17], b.i8[17]);
dst.i8[18] = ceil_average(a.i8[18], b.i8[18]);
dst.i8[19] = ceil_average(a.i8[19], b.i8[19]);
dst.i8[20] = ceil_average(a.i8[20], b.i8[20]);
dst.i8[21] = ceil_average(a.i8[21], b.i8[21]);
dst.i8[22] = ceil_average(a.i8[22], b.i8[22]);
dst.i8[23] = ceil_average(a.i8[23], b.i8[23]);
dst.i8[24] = ceil_average(a.i8[24], b.i8[24]);
dst.i8[25] = ceil_average(a.i8[25], b.i8[25]);
dst.i8[26] = ceil_average(a.i8[26], b.i8[26]);
dst.i8[27] = ceil_average(a.i8[27], b.i8[27]);
dst.i8[28] = ceil_average(a.i8[28], b.i8[28]);
dst.i8[29] = ceil_average(a.i8[29], b.i8[29]);
dst.i8[30] = ceil_average(a.i8[30], b.i8[30]);
dst.i8[31] = ceil_average(a.i8[31], b.i8[31]);
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
return (__m256i)__builtin_lasx_mxaver_s_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxaver_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxaver_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxaver.s.d
Builtin: __builtin_lasx_mxaver_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:999
```

### Description

Compute the lane-wise rounded-up average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.i64[0] = ceil_average(a.i64[0], b.i64[0]);
dst.i64[1] = ceil_average(a.i64[1], b.i64[1]);
dst.i64[2] = ceil_average(a.i64[2], b.i64[2]);
dst.i64[3] = ceil_average(a.i64[3], b.i64[3]);
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
return (__m256i)__builtin_lasx_mxaver_s_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxaver_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxaver_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxaver.s.h
Builtin: __builtin_lasx_mxaver_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:985
```

### Description

Compute the lane-wise rounded-up average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.i16[0] = ceil_average(a.i16[0], b.i16[0]);
dst.i16[1] = ceil_average(a.i16[1], b.i16[1]);
dst.i16[2] = ceil_average(a.i16[2], b.i16[2]);
dst.i16[3] = ceil_average(a.i16[3], b.i16[3]);
dst.i16[4] = ceil_average(a.i16[4], b.i16[4]);
dst.i16[5] = ceil_average(a.i16[5], b.i16[5]);
dst.i16[6] = ceil_average(a.i16[6], b.i16[6]);
dst.i16[7] = ceil_average(a.i16[7], b.i16[7]);
dst.i16[8] = ceil_average(a.i16[8], b.i16[8]);
dst.i16[9] = ceil_average(a.i16[9], b.i16[9]);
dst.i16[10] = ceil_average(a.i16[10], b.i16[10]);
dst.i16[11] = ceil_average(a.i16[11], b.i16[11]);
dst.i16[12] = ceil_average(a.i16[12], b.i16[12]);
dst.i16[13] = ceil_average(a.i16[13], b.i16[13]);
dst.i16[14] = ceil_average(a.i16[14], b.i16[14]);
dst.i16[15] = ceil_average(a.i16[15], b.i16[15]);
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
return (__m256i)__builtin_lasx_mxaver_s_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxaver_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxaver_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxaver.s.w
Builtin: __builtin_lasx_mxaver_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:992
```

### Description

Compute the lane-wise rounded-up average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.i32[0] = ceil_average(a.i32[0], b.i32[0]);
dst.i32[1] = ceil_average(a.i32[1], b.i32[1]);
dst.i32[2] = ceil_average(a.i32[2], b.i32[2]);
dst.i32[3] = ceil_average(a.i32[3], b.i32[3]);
dst.i32[4] = ceil_average(a.i32[4], b.i32[4]);
dst.i32[5] = ceil_average(a.i32[5], b.i32[5]);
dst.i32[6] = ceil_average(a.i32[6], b.i32[6]);
dst.i32[7] = ceil_average(a.i32[7], b.i32[7]);
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
return (__m256i)__builtin_lasx_mxaver_s_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxaver_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxaver_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxaver.u.b
Builtin: __builtin_lasx_mxaver_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1006
```

### Description

Compute the lane-wise rounded-up average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.u8[0] = ceil_average(a.u8[0], b.u8[0]);
dst.u8[1] = ceil_average(a.u8[1], b.u8[1]);
dst.u8[2] = ceil_average(a.u8[2], b.u8[2]);
dst.u8[3] = ceil_average(a.u8[3], b.u8[3]);
dst.u8[4] = ceil_average(a.u8[4], b.u8[4]);
dst.u8[5] = ceil_average(a.u8[5], b.u8[5]);
dst.u8[6] = ceil_average(a.u8[6], b.u8[6]);
dst.u8[7] = ceil_average(a.u8[7], b.u8[7]);
dst.u8[8] = ceil_average(a.u8[8], b.u8[8]);
dst.u8[9] = ceil_average(a.u8[9], b.u8[9]);
dst.u8[10] = ceil_average(a.u8[10], b.u8[10]);
dst.u8[11] = ceil_average(a.u8[11], b.u8[11]);
dst.u8[12] = ceil_average(a.u8[12], b.u8[12]);
dst.u8[13] = ceil_average(a.u8[13], b.u8[13]);
dst.u8[14] = ceil_average(a.u8[14], b.u8[14]);
dst.u8[15] = ceil_average(a.u8[15], b.u8[15]);
dst.u8[16] = ceil_average(a.u8[16], b.u8[16]);
dst.u8[17] = ceil_average(a.u8[17], b.u8[17]);
dst.u8[18] = ceil_average(a.u8[18], b.u8[18]);
dst.u8[19] = ceil_average(a.u8[19], b.u8[19]);
dst.u8[20] = ceil_average(a.u8[20], b.u8[20]);
dst.u8[21] = ceil_average(a.u8[21], b.u8[21]);
dst.u8[22] = ceil_average(a.u8[22], b.u8[22]);
dst.u8[23] = ceil_average(a.u8[23], b.u8[23]);
dst.u8[24] = ceil_average(a.u8[24], b.u8[24]);
dst.u8[25] = ceil_average(a.u8[25], b.u8[25]);
dst.u8[26] = ceil_average(a.u8[26], b.u8[26]);
dst.u8[27] = ceil_average(a.u8[27], b.u8[27]);
dst.u8[28] = ceil_average(a.u8[28], b.u8[28]);
dst.u8[29] = ceil_average(a.u8[29], b.u8[29]);
dst.u8[30] = ceil_average(a.u8[30], b.u8[30]);
dst.u8[31] = ceil_average(a.u8[31], b.u8[31]);
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
return (__m256i)__builtin_lasx_mxaver_u_b((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxaver_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxaver_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxaver.u.d
Builtin: __builtin_lasx_mxaver_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1027
```

### Description

Compute the lane-wise rounded-up average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.u64[0] = ceil_average(a.u64[0], b.u64[0]);
dst.u64[1] = ceil_average(a.u64[1], b.u64[1]);
dst.u64[2] = ceil_average(a.u64[2], b.u64[2]);
dst.u64[3] = ceil_average(a.u64[3], b.u64[3]);
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
return (__m256i)__builtin_lasx_mxaver_u_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxaver_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxaver_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxaver.u.h
Builtin: __builtin_lasx_mxaver_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1013
```

### Description

Compute the lane-wise rounded-up average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.u16[0] = ceil_average(a.u16[0], b.u16[0]);
dst.u16[1] = ceil_average(a.u16[1], b.u16[1]);
dst.u16[2] = ceil_average(a.u16[2], b.u16[2]);
dst.u16[3] = ceil_average(a.u16[3], b.u16[3]);
dst.u16[4] = ceil_average(a.u16[4], b.u16[4]);
dst.u16[5] = ceil_average(a.u16[5], b.u16[5]);
dst.u16[6] = ceil_average(a.u16[6], b.u16[6]);
dst.u16[7] = ceil_average(a.u16[7], b.u16[7]);
dst.u16[8] = ceil_average(a.u16[8], b.u16[8]);
dst.u16[9] = ceil_average(a.u16[9], b.u16[9]);
dst.u16[10] = ceil_average(a.u16[10], b.u16[10]);
dst.u16[11] = ceil_average(a.u16[11], b.u16[11]);
dst.u16[12] = ceil_average(a.u16[12], b.u16[12]);
dst.u16[13] = ceil_average(a.u16[13], b.u16[13]);
dst.u16[14] = ceil_average(a.u16[14], b.u16[14]);
dst.u16[15] = ceil_average(a.u16[15], b.u16[15]);
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
return (__m256i)__builtin_lasx_mxaver_u_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxaver_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxaver_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxaver.u.w
Builtin: __builtin_lasx_mxaver_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1020
```

### Description

Compute the lane-wise rounded-up average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.u32[0] = ceil_average(a.u32[0], b.u32[0]);
dst.u32[1] = ceil_average(a.u32[1], b.u32[1]);
dst.u32[2] = ceil_average(a.u32[2], b.u32[2]);
dst.u32[3] = ceil_average(a.u32[3], b.u32[3]);
dst.u32[4] = ceil_average(a.u32[4], b.u32[4]);
dst.u32[5] = ceil_average(a.u32[5], b.u32[5]);
dst.u32[6] = ceil_average(a.u32[6], b.u32[6]);
dst.u32[7] = ceil_average(a.u32[7], b.u32[7]);
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
return (__m256i)__builtin_lasx_mxaver_u_w((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxdiv_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdiv_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdiv.s.b
Builtin: __builtin_lasx_mxdiv_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1286
```

### Description

Divide signed integer lanes of `a` by `b` on 32 x i8 lanes.

### Operation

```c
dst.i8[0] = a.i8[0] / b.i8[0];
dst.i8[1] = a.i8[1] / b.i8[1];
dst.i8[2] = a.i8[2] / b.i8[2];
dst.i8[3] = a.i8[3] / b.i8[3];
dst.i8[4] = a.i8[4] / b.i8[4];
dst.i8[5] = a.i8[5] / b.i8[5];
dst.i8[6] = a.i8[6] / b.i8[6];
dst.i8[7] = a.i8[7] / b.i8[7];
dst.i8[8] = a.i8[8] / b.i8[8];
dst.i8[9] = a.i8[9] / b.i8[9];
dst.i8[10] = a.i8[10] / b.i8[10];
dst.i8[11] = a.i8[11] / b.i8[11];
dst.i8[12] = a.i8[12] / b.i8[12];
dst.i8[13] = a.i8[13] / b.i8[13];
dst.i8[14] = a.i8[14] / b.i8[14];
dst.i8[15] = a.i8[15] / b.i8[15];
dst.i8[16] = a.i8[16] / b.i8[16];
dst.i8[17] = a.i8[17] / b.i8[17];
dst.i8[18] = a.i8[18] / b.i8[18];
dst.i8[19] = a.i8[19] / b.i8[19];
dst.i8[20] = a.i8[20] / b.i8[20];
dst.i8[21] = a.i8[21] / b.i8[21];
dst.i8[22] = a.i8[22] / b.i8[22];
dst.i8[23] = a.i8[23] / b.i8[23];
dst.i8[24] = a.i8[24] / b.i8[24];
dst.i8[25] = a.i8[25] / b.i8[25];
dst.i8[26] = a.i8[26] / b.i8[26];
dst.i8[27] = a.i8[27] / b.i8[27];
dst.i8[28] = a.i8[28] / b.i8[28];
dst.i8[29] = a.i8[29] / b.i8[29];
dst.i8[30] = a.i8[30] / b.i8[30];
dst.i8[31] = a.i8[31] / b.i8[31];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>29/51</td><td>0.05(1/22)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_s_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxdiv_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdiv_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdiv.s.d
Builtin: __builtin_lasx_mxdiv_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1307
```

### Description

Divide signed integer lanes of `a` by `b` on 4 x i64 lanes.

### Operation

```c
dst.i64[0] = a.i64[0] / b.i64[0];
dst.i64[1] = a.i64[1] / b.i64[1];
dst.i64[2] = a.i64[2] / b.i64[2];
dst.i64[3] = a.i64[3] / b.i64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>8</td><td>0.14(1/7)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_s_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxdiv_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdiv_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdiv.s.h
Builtin: __builtin_lasx_mxdiv_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1293
```

### Description

Divide signed integer lanes of `a` by `b` on 16 x i16 lanes.

### Operation

```c
dst.i16[0] = a.i16[0] / b.i16[0];
dst.i16[1] = a.i16[1] / b.i16[1];
dst.i16[2] = a.i16[2] / b.i16[2];
dst.i16[3] = a.i16[3] / b.i16[3];
dst.i16[4] = a.i16[4] / b.i16[4];
dst.i16[5] = a.i16[5] / b.i16[5];
dst.i16[6] = a.i16[6] / b.i16[6];
dst.i16[7] = a.i16[7] / b.i16[7];
dst.i16[8] = a.i16[8] / b.i16[8];
dst.i16[9] = a.i16[9] / b.i16[9];
dst.i16[10] = a.i16[10] / b.i16[10];
dst.i16[11] = a.i16[11] / b.i16[11];
dst.i16[12] = a.i16[12] / b.i16[12];
dst.i16[13] = a.i16[13] / b.i16[13];
dst.i16[14] = a.i16[14] / b.i16[14];
dst.i16[15] = a.i16[15] / b.i16[15];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>17/31</td><td>0.07(1/13.33)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_s_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxdiv_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdiv_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdiv.s.w
Builtin: __builtin_lasx_mxdiv_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1300
```

### Description

Divide signed integer lanes of `a` by `b` on 8 x i32 lanes.

### Operation

```c
dst.i32[0] = a.i32[0] / b.i32[0];
dst.i32[1] = a.i32[1] / b.i32[1];
dst.i32[2] = a.i32[2] / b.i32[2];
dst.i32[3] = a.i32[3] / b.i32[3];
dst.i32[4] = a.i32[4] / b.i32[4];
dst.i32[5] = a.i32[5] / b.i32[5];
dst.i32[6] = a.i32[6] / b.i32[6];
dst.i32[7] = a.i32[7] / b.i32[7];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>11/17</td><td>0.11(1/9)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_s_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxdiv_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdiv_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdiv.u.b
Builtin: __builtin_lasx_mxdiv_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1314
```

### Description

Divide unsigned integer lanes of `a` by `b` on 32 x u8 lanes.

### Operation

```c
dst.u8[0] = a.u8[0] / b.u8[0];
dst.u8[1] = a.u8[1] / b.u8[1];
dst.u8[2] = a.u8[2] / b.u8[2];
dst.u8[3] = a.u8[3] / b.u8[3];
dst.u8[4] = a.u8[4] / b.u8[4];
dst.u8[5] = a.u8[5] / b.u8[5];
dst.u8[6] = a.u8[6] / b.u8[6];
dst.u8[7] = a.u8[7] / b.u8[7];
dst.u8[8] = a.u8[8] / b.u8[8];
dst.u8[9] = a.u8[9] / b.u8[9];
dst.u8[10] = a.u8[10] / b.u8[10];
dst.u8[11] = a.u8[11] / b.u8[11];
dst.u8[12] = a.u8[12] / b.u8[12];
dst.u8[13] = a.u8[13] / b.u8[13];
dst.u8[14] = a.u8[14] / b.u8[14];
dst.u8[15] = a.u8[15] / b.u8[15];
dst.u8[16] = a.u8[16] / b.u8[16];
dst.u8[17] = a.u8[17] / b.u8[17];
dst.u8[18] = a.u8[18] / b.u8[18];
dst.u8[19] = a.u8[19] / b.u8[19];
dst.u8[20] = a.u8[20] / b.u8[20];
dst.u8[21] = a.u8[21] / b.u8[21];
dst.u8[22] = a.u8[22] / b.u8[22];
dst.u8[23] = a.u8[23] / b.u8[23];
dst.u8[24] = a.u8[24] / b.u8[24];
dst.u8[25] = a.u8[25] / b.u8[25];
dst.u8[26] = a.u8[26] / b.u8[26];
dst.u8[27] = a.u8[27] / b.u8[27];
dst.u8[28] = a.u8[28] / b.u8[28];
dst.u8[29] = a.u8[29] / b.u8[29];
dst.u8[30] = a.u8[30] / b.u8[30];
dst.u8[31] = a.u8[31] / b.u8[31];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>29/43</td><td>0.05(1/20)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_u_b((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxdiv_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdiv_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdiv.u.d
Builtin: __builtin_lasx_mxdiv_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1335
```

### Description

Divide unsigned integer lanes of `a` by `b` on 4 x u64 lanes.

### Operation

```c
dst.u64[0] = a.u64[0] / b.u64[0];
dst.u64[1] = a.u64[1] / b.u64[1];
dst.u64[2] = a.u64[2] / b.u64[2];
dst.u64[3] = a.u64[3] / b.u64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>8</td><td>0.16(1/6.17)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_u_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxdiv_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdiv_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdiv.u.h
Builtin: __builtin_lasx_mxdiv_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1321
```

### Description

Divide unsigned integer lanes of `a` by `b` on 16 x u16 lanes.

### Operation

```c
dst.u16[0] = a.u16[0] / b.u16[0];
dst.u16[1] = a.u16[1] / b.u16[1];
dst.u16[2] = a.u16[2] / b.u16[2];
dst.u16[3] = a.u16[3] / b.u16[3];
dst.u16[4] = a.u16[4] / b.u16[4];
dst.u16[5] = a.u16[5] / b.u16[5];
dst.u16[6] = a.u16[6] / b.u16[6];
dst.u16[7] = a.u16[7] / b.u16[7];
dst.u16[8] = a.u16[8] / b.u16[8];
dst.u16[9] = a.u16[9] / b.u16[9];
dst.u16[10] = a.u16[10] / b.u16[10];
dst.u16[11] = a.u16[11] / b.u16[11];
dst.u16[12] = a.u16[12] / b.u16[12];
dst.u16[13] = a.u16[13] / b.u16[13];
dst.u16[14] = a.u16[14] / b.u16[14];
dst.u16[15] = a.u16[15] / b.u16[15];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>17/21</td><td>0.09(1/11.36)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_u_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxdiv_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdiv_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdiv.u.w
Builtin: __builtin_lasx_mxdiv_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1328
```

### Description

Divide unsigned integer lanes of `a` by `b` on 8 x u32 lanes.

### Operation

```c
dst.u32[0] = a.u32[0] / b.u32[0];
dst.u32[1] = a.u32[1] / b.u32[1];
dst.u32[2] = a.u32[2] / b.u32[2];
dst.u32[3] = a.u32[3] / b.u32[3];
dst.u32[4] = a.u32[4] / b.u32[4];
dst.u32[5] = a.u32[5] / b.u32[5];
dst.u32[6] = a.u32[6] / b.u32[6];
dst.u32[7] = a.u32[7] / b.u32[7];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>11/18</td><td>0.14(1/7.16)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_u_w((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxdotp_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.s.d
Builtin: __builtin_lasx_mxdotp_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1496
```

### Description

Multiply adjacent pairs of narrower signed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i64[0] = a.i32[0] * b.i32[0] + a.i32[1] * b.i32[1];
dst.i64[1] = a.i32[2] * b.i32[2] + a.i32[3] * b.i32[3];
dst.i64[2] = a.i32[4] * b.i32[4] + a.i32[5] * b.i32[5];
dst.i64[3] = a.i32[6] * b.i32[6] + a.i32[7] * b.i32[7];
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
return (__m256i)__builtin_lasx_mxdotp_s_d((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxdotp_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.s.h
Builtin: __builtin_lasx_mxdotp_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1482
```

### Description

Multiply adjacent pairs of narrower signed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i16[0] = a.i8[0] * b.i8[0] + a.i8[1] * b.i8[1];
dst.i16[1] = a.i8[2] * b.i8[2] + a.i8[3] * b.i8[3];
dst.i16[2] = a.i8[4] * b.i8[4] + a.i8[5] * b.i8[5];
dst.i16[3] = a.i8[6] * b.i8[6] + a.i8[7] * b.i8[7];
dst.i16[4] = a.i8[8] * b.i8[8] + a.i8[9] * b.i8[9];
dst.i16[5] = a.i8[10] * b.i8[10] + a.i8[11] * b.i8[11];
dst.i16[6] = a.i8[12] * b.i8[12] + a.i8[13] * b.i8[13];
dst.i16[7] = a.i8[14] * b.i8[14] + a.i8[15] * b.i8[15];
dst.i16[8] = a.i8[16] * b.i8[16] + a.i8[17] * b.i8[17];
dst.i16[9] = a.i8[18] * b.i8[18] + a.i8[19] * b.i8[19];
dst.i16[10] = a.i8[20] * b.i8[20] + a.i8[21] * b.i8[21];
dst.i16[11] = a.i8[22] * b.i8[22] + a.i8[23] * b.i8[23];
dst.i16[12] = a.i8[24] * b.i8[24] + a.i8[25] * b.i8[25];
dst.i16[13] = a.i8[26] * b.i8[26] + a.i8[27] * b.i8[27];
dst.i16[14] = a.i8[28] * b.i8[28] + a.i8[29] * b.i8[29];
dst.i16[15] = a.i8[30] * b.i8[30] + a.i8[31] * b.i8[31];
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
return (__m256i)__builtin_lasx_mxdotp_s_h((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxdotp_s_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_s_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.s.q
Builtin: __builtin_lasx_mxdotp_s_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4410
```

### Description

Multiply adjacent pairs of narrower signed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i128[0] = a.i64[0] * b.i64[0] + a.i64[1] * b.i64[1];
dst.i128[1] = a.i64[2] * b.i64[2] + a.i64[3] * b.i64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdotp_s_q ((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxdotp_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.s.w
Builtin: __builtin_lasx_mxdotp_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1489
```

### Description

Multiply adjacent pairs of narrower signed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i32[0] = a.i16[0] * b.i16[0] + a.i16[1] * b.i16[1];
dst.i32[1] = a.i16[2] * b.i16[2] + a.i16[3] * b.i16[3];
dst.i32[2] = a.i16[4] * b.i16[4] + a.i16[5] * b.i16[5];
dst.i32[3] = a.i16[6] * b.i16[6] + a.i16[7] * b.i16[7];
dst.i32[4] = a.i16[8] * b.i16[8] + a.i16[9] * b.i16[9];
dst.i32[5] = a.i16[10] * b.i16[10] + a.i16[11] * b.i16[11];
dst.i32[6] = a.i16[12] * b.i16[12] + a.i16[13] * b.i16[13];
dst.i32[7] = a.i16[14] * b.i16[14] + a.i16[15] * b.i16[15];
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
return (__m256i)__builtin_lasx_mxdotp_s_w((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxdotp_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.u.d
Builtin: __builtin_lasx_mxdotp_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1517
```

### Description

Multiply adjacent pairs of narrower unsigned lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.u64[0] = a.u32[0] * b.u32[0] + a.u32[1] * b.u32[1];
dst.u64[1] = a.u32[2] * b.u32[2] + a.u32[3] * b.u32[3];
dst.u64[2] = a.u32[4] * b.u32[4] + a.u32[5] * b.u32[5];
dst.u64[3] = a.u32[6] * b.u32[6] + a.u32[7] * b.u32[7];
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
return (__m256i)__builtin_lasx_mxdotp_u_d((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxdotp_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.u.h
Builtin: __builtin_lasx_mxdotp_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1503
```

### Description

Multiply adjacent pairs of narrower unsigned lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.u16[0] = a.u8[0] * b.u8[0] + a.u8[1] * b.u8[1];
dst.u16[1] = a.u8[2] * b.u8[2] + a.u8[3] * b.u8[3];
dst.u16[2] = a.u8[4] * b.u8[4] + a.u8[5] * b.u8[5];
dst.u16[3] = a.u8[6] * b.u8[6] + a.u8[7] * b.u8[7];
dst.u16[4] = a.u8[8] * b.u8[8] + a.u8[9] * b.u8[9];
dst.u16[5] = a.u8[10] * b.u8[10] + a.u8[11] * b.u8[11];
dst.u16[6] = a.u8[12] * b.u8[12] + a.u8[13] * b.u8[13];
dst.u16[7] = a.u8[14] * b.u8[14] + a.u8[15] * b.u8[15];
dst.u16[8] = a.u8[16] * b.u8[16] + a.u8[17] * b.u8[17];
dst.u16[9] = a.u8[18] * b.u8[18] + a.u8[19] * b.u8[19];
dst.u16[10] = a.u8[20] * b.u8[20] + a.u8[21] * b.u8[21];
dst.u16[11] = a.u8[22] * b.u8[22] + a.u8[23] * b.u8[23];
dst.u16[12] = a.u8[24] * b.u8[24] + a.u8[25] * b.u8[25];
dst.u16[13] = a.u8[26] * b.u8[26] + a.u8[27] * b.u8[27];
dst.u16[14] = a.u8[28] * b.u8[28] + a.u8[29] * b.u8[29];
dst.u16[15] = a.u8[30] * b.u8[30] + a.u8[31] * b.u8[31];
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
return (__m256i)__builtin_lasx_mxdotp_u_h((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxdotp_u_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_u_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.u.q
Builtin: __builtin_lasx_mxdotp_u_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4416
```

### Description

Multiply adjacent pairs of narrower unsigned lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.u128[0] = a.u64[0] * b.u64[0] + a.u64[1] * b.u64[1];
dst.u128[1] = a.u64[2] * b.u64[2] + a.u64[3] * b.u64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdotp_u_q ((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxdotp_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.u.w
Builtin: __builtin_lasx_mxdotp_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1510
```

### Description

Multiply adjacent pairs of narrower unsigned lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.u32[0] = a.u16[0] * b.u16[0] + a.u16[1] * b.u16[1];
dst.u32[1] = a.u16[2] * b.u16[2] + a.u16[3] * b.u16[3];
dst.u32[2] = a.u16[4] * b.u16[4] + a.u16[5] * b.u16[5];
dst.u32[3] = a.u16[6] * b.u16[6] + a.u16[7] * b.u16[7];
dst.u32[4] = a.u16[8] * b.u16[8] + a.u16[9] * b.u16[9];
dst.u32[5] = a.u16[10] * b.u16[10] + a.u16[11] * b.u16[11];
dst.u32[6] = a.u16[12] * b.u16[12] + a.u16[13] * b.u16[13];
dst.u32[7] = a.u16[14] * b.u16[14] + a.u16[15] * b.u16[15];
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
return (__m256i)__builtin_lasx_mxdotp_u_w((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxdotp_us_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_us_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.us.d
Builtin: __builtin_lasx_mxdotp_us_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4434
```

### Description

Multiply adjacent pairs of narrower unsigned/signed mixed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i64[0] = a.u32[0] * b.i32[0] + a.u32[1] * b.i32[1];
dst.i64[1] = a.u32[2] * b.i32[2] + a.u32[3] * b.i32[3];
dst.i64[2] = a.u32[4] * b.i32[4] + a.u32[5] * b.i32[5];
dst.i64[3] = a.u32[6] * b.i32[6] + a.u32[7] * b.i32[7];
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
return (__m256i) __builtin_lasx_mxdotp_us_d ((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxdotp_us_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_us_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.us.h
Builtin: __builtin_lasx_mxdotp_us_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4422
```

### Description

Multiply adjacent pairs of narrower unsigned/signed mixed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i16[0] = a.u8[0] * b.i8[0] + a.u8[1] * b.i8[1];
dst.i16[1] = a.u8[2] * b.i8[2] + a.u8[3] * b.i8[3];
dst.i16[2] = a.u8[4] * b.i8[4] + a.u8[5] * b.i8[5];
dst.i16[3] = a.u8[6] * b.i8[6] + a.u8[7] * b.i8[7];
dst.i16[4] = a.u8[8] * b.i8[8] + a.u8[9] * b.i8[9];
dst.i16[5] = a.u8[10] * b.i8[10] + a.u8[11] * b.i8[11];
dst.i16[6] = a.u8[12] * b.i8[12] + a.u8[13] * b.i8[13];
dst.i16[7] = a.u8[14] * b.i8[14] + a.u8[15] * b.i8[15];
dst.i16[8] = a.u8[16] * b.i8[16] + a.u8[17] * b.i8[17];
dst.i16[9] = a.u8[18] * b.i8[18] + a.u8[19] * b.i8[19];
dst.i16[10] = a.u8[20] * b.i8[20] + a.u8[21] * b.i8[21];
dst.i16[11] = a.u8[22] * b.i8[22] + a.u8[23] * b.i8[23];
dst.i16[12] = a.u8[24] * b.i8[24] + a.u8[25] * b.i8[25];
dst.i16[13] = a.u8[26] * b.i8[26] + a.u8[27] * b.i8[27];
dst.i16[14] = a.u8[28] * b.i8[28] + a.u8[29] * b.i8[29];
dst.i16[15] = a.u8[30] * b.i8[30] + a.u8[31] * b.i8[31];
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
return (__m256i) __builtin_lasx_mxdotp_us_h ((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxdotp_us_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_us_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.us.q
Builtin: __builtin_lasx_mxdotp_us_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4440
```

### Description

Multiply adjacent pairs of narrower unsigned/signed mixed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i128[0] = a.u64[0] * b.i64[0] + a.u64[1] * b.i64[1];
dst.i128[1] = a.u64[2] * b.i64[2] + a.u64[3] * b.i64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdotp_us_q ((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxdotp_us_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_us_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.us.w
Builtin: __builtin_lasx_mxdotp_us_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4428
```

### Description

Multiply adjacent pairs of narrower unsigned/signed mixed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i32[0] = a.u16[0] * b.i16[0] + a.u16[1] * b.i16[1];
dst.i32[1] = a.u16[2] * b.i16[2] + a.u16[3] * b.i16[3];
dst.i32[2] = a.u16[4] * b.i16[4] + a.u16[5] * b.i16[5];
dst.i32[3] = a.u16[6] * b.i16[6] + a.u16[7] * b.i16[7];
dst.i32[4] = a.u16[8] * b.i16[8] + a.u16[9] * b.i16[9];
dst.i32[5] = a.u16[10] * b.i16[10] + a.u16[11] * b.i16[11];
dst.i32[6] = a.u16[12] * b.i16[12] + a.u16[13] * b.i16[13];
dst.i32[7] = a.u16[14] * b.i16[14] + a.u16[15] * b.i16[15];
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
return (__m256i) __builtin_lasx_mxdotp_us_w ((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxdpadd_s_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpadd_s_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.s.d
Builtin: __builtin_lasx_mxdpadd_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1538
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i64[0] = a.i64[0] + b.i32[0] * c.i32[0] + b.i32[1] * c.i32[1];
dst.i64[1] = a.i64[1] + b.i32[2] * c.i32[2] + b.i32[3] * c.i32[3];
dst.i64[2] = a.i64[2] + b.i32[4] * c.i32[4] + b.i32[5] * c.i32[5];
dst.i64[3] = a.i64[3] + b.i32[6] * c.i32[6] + b.i32[7] * c.i32[7];
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
return (__m256i)__builtin_lasx_mxdpadd_s_d((v4i64)a, (v8i32)b, (v8i32)c);
```

## __m256i __lasx_mxdpadd_s_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpadd_s_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.s.h
Builtin: __builtin_lasx_mxdpadd_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1524
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i16[0] = a.i16[0] + b.i8[0] * c.i8[0] + b.i8[1] * c.i8[1];
dst.i16[1] = a.i16[1] + b.i8[2] * c.i8[2] + b.i8[3] * c.i8[3];
dst.i16[2] = a.i16[2] + b.i8[4] * c.i8[4] + b.i8[5] * c.i8[5];
dst.i16[3] = a.i16[3] + b.i8[6] * c.i8[6] + b.i8[7] * c.i8[7];
dst.i16[4] = a.i16[4] + b.i8[8] * c.i8[8] + b.i8[9] * c.i8[9];
dst.i16[5] = a.i16[5] + b.i8[10] * c.i8[10] + b.i8[11] * c.i8[11];
dst.i16[6] = a.i16[6] + b.i8[12] * c.i8[12] + b.i8[13] * c.i8[13];
dst.i16[7] = a.i16[7] + b.i8[14] * c.i8[14] + b.i8[15] * c.i8[15];
dst.i16[8] = a.i16[8] + b.i8[16] * c.i8[16] + b.i8[17] * c.i8[17];
dst.i16[9] = a.i16[9] + b.i8[18] * c.i8[18] + b.i8[19] * c.i8[19];
dst.i16[10] = a.i16[10] + b.i8[20] * c.i8[20] + b.i8[21] * c.i8[21];
dst.i16[11] = a.i16[11] + b.i8[22] * c.i8[22] + b.i8[23] * c.i8[23];
dst.i16[12] = a.i16[12] + b.i8[24] * c.i8[24] + b.i8[25] * c.i8[25];
dst.i16[13] = a.i16[13] + b.i8[26] * c.i8[26] + b.i8[27] * c.i8[27];
dst.i16[14] = a.i16[14] + b.i8[28] * c.i8[28] + b.i8[29] * c.i8[29];
dst.i16[15] = a.i16[15] + b.i8[30] * c.i8[30] + b.i8[31] * c.i8[31];
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
return (__m256i)__builtin_lasx_mxdpadd_s_h((v16i16)a, (v32i8)b, (v32i8)c);
```

## __m256i __lasx_mxdpadd_s_q (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpadd_s_q (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.s.q
Builtin: __builtin_lasx_mxdpadd_s_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4446
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i128[0] = a.i128[0] + b.i64[0] * c.i64[0] + b.i64[1] * c.i64[1];
dst.i128[1] = a.i128[1] + b.i64[2] * c.i64[2] + b.i64[3] * c.i64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdpadd_s_q ((v4i64) a, (v4i64) b, (v4i64) c);
```

## __m256i __lasx_mxdpadd_s_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpadd_s_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.s.w
Builtin: __builtin_lasx_mxdpadd_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1531
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i32[0] = a.i32[0] + b.i16[0] * c.i16[0] + b.i16[1] * c.i16[1];
dst.i32[1] = a.i32[1] + b.i16[2] * c.i16[2] + b.i16[3] * c.i16[3];
dst.i32[2] = a.i32[2] + b.i16[4] * c.i16[4] + b.i16[5] * c.i16[5];
dst.i32[3] = a.i32[3] + b.i16[6] * c.i16[6] + b.i16[7] * c.i16[7];
dst.i32[4] = a.i32[4] + b.i16[8] * c.i16[8] + b.i16[9] * c.i16[9];
dst.i32[5] = a.i32[5] + b.i16[10] * c.i16[10] + b.i16[11] * c.i16[11];
dst.i32[6] = a.i32[6] + b.i16[12] * c.i16[12] + b.i16[13] * c.i16[13];
dst.i32[7] = a.i32[7] + b.i16[14] * c.i16[14] + b.i16[15] * c.i16[15];
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
return (__m256i)__builtin_lasx_mxdpadd_s_w((v8i32)a, (v16i16)b, (v16i16)c);
```

## __m256i __lasx_mxdpadd_u_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpadd_u_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.u.d
Builtin: __builtin_lasx_mxdpadd_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1559
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u64[0] = a.u64[0] + b.u32[0] * c.u32[0] + b.u32[1] * c.u32[1];
dst.u64[1] = a.u64[1] + b.u32[2] * c.u32[2] + b.u32[3] * c.u32[3];
dst.u64[2] = a.u64[2] + b.u32[4] * c.u32[4] + b.u32[5] * c.u32[5];
dst.u64[3] = a.u64[3] + b.u32[6] * c.u32[6] + b.u32[7] * c.u32[7];
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
return (__m256i)__builtin_lasx_mxdpadd_u_d((v4u64)a, (v8u32)b, (v8u32)c);
```

## __m256i __lasx_mxdpadd_u_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpadd_u_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.u.h
Builtin: __builtin_lasx_mxdpadd_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1545
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u16[0] = a.u16[0] + b.u8[0] * c.u8[0] + b.u8[1] * c.u8[1];
dst.u16[1] = a.u16[1] + b.u8[2] * c.u8[2] + b.u8[3] * c.u8[3];
dst.u16[2] = a.u16[2] + b.u8[4] * c.u8[4] + b.u8[5] * c.u8[5];
dst.u16[3] = a.u16[3] + b.u8[6] * c.u8[6] + b.u8[7] * c.u8[7];
dst.u16[4] = a.u16[4] + b.u8[8] * c.u8[8] + b.u8[9] * c.u8[9];
dst.u16[5] = a.u16[5] + b.u8[10] * c.u8[10] + b.u8[11] * c.u8[11];
dst.u16[6] = a.u16[6] + b.u8[12] * c.u8[12] + b.u8[13] * c.u8[13];
dst.u16[7] = a.u16[7] + b.u8[14] * c.u8[14] + b.u8[15] * c.u8[15];
dst.u16[8] = a.u16[8] + b.u8[16] * c.u8[16] + b.u8[17] * c.u8[17];
dst.u16[9] = a.u16[9] + b.u8[18] * c.u8[18] + b.u8[19] * c.u8[19];
dst.u16[10] = a.u16[10] + b.u8[20] * c.u8[20] + b.u8[21] * c.u8[21];
dst.u16[11] = a.u16[11] + b.u8[22] * c.u8[22] + b.u8[23] * c.u8[23];
dst.u16[12] = a.u16[12] + b.u8[24] * c.u8[24] + b.u8[25] * c.u8[25];
dst.u16[13] = a.u16[13] + b.u8[26] * c.u8[26] + b.u8[27] * c.u8[27];
dst.u16[14] = a.u16[14] + b.u8[28] * c.u8[28] + b.u8[29] * c.u8[29];
dst.u16[15] = a.u16[15] + b.u8[30] * c.u8[30] + b.u8[31] * c.u8[31];
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
return (__m256i)__builtin_lasx_mxdpadd_u_h((v16u16)a, (v32u8)b, (v32u8)c);
```

## __m256i __lasx_mxdpadd_u_q (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpadd_u_q (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.u.q
Builtin: __builtin_lasx_mxdpadd_u_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4452
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u128[0] = a.u128[0] + b.u64[0] * c.u64[0] + b.u64[1] * c.u64[1];
dst.u128[1] = a.u128[1] + b.u64[2] * c.u64[2] + b.u64[3] * c.u64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdpadd_u_q ((v4u64) a, (v4u64) b, (v4u64) c);
```

## __m256i __lasx_mxdpadd_u_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpadd_u_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.u.w
Builtin: __builtin_lasx_mxdpadd_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1552
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u32[0] = a.u32[0] + b.u16[0] * c.u16[0] + b.u16[1] * c.u16[1];
dst.u32[1] = a.u32[1] + b.u16[2] * c.u16[2] + b.u16[3] * c.u16[3];
dst.u32[2] = a.u32[2] + b.u16[4] * c.u16[4] + b.u16[5] * c.u16[5];
dst.u32[3] = a.u32[3] + b.u16[6] * c.u16[6] + b.u16[7] * c.u16[7];
dst.u32[4] = a.u32[4] + b.u16[8] * c.u16[8] + b.u16[9] * c.u16[9];
dst.u32[5] = a.u32[5] + b.u16[10] * c.u16[10] + b.u16[11] * c.u16[11];
dst.u32[6] = a.u32[6] + b.u16[12] * c.u16[12] + b.u16[13] * c.u16[13];
dst.u32[7] = a.u32[7] + b.u16[14] * c.u16[14] + b.u16[15] * c.u16[15];
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
return (__m256i)__builtin_lasx_mxdpadd_u_w((v8u32)a, (v16u16)b, (v16u16)c);
```

## __m256i __lasx_mxdpadd_us_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpadd_us_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.us.d
Builtin: __builtin_lasx_mxdpadd_us_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4470
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i64[0] = a.i64[0] + b.u32[0] * c.i32[0] + b.u32[1] * c.i32[1];
dst.i64[1] = a.i64[1] + b.u32[2] * c.i32[2] + b.u32[3] * c.i32[3];
dst.i64[2] = a.i64[2] + b.u32[4] * c.i32[4] + b.u32[5] * c.i32[5];
dst.i64[3] = a.i64[3] + b.u32[6] * c.i32[6] + b.u32[7] * c.i32[7];
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
return (__m256i) __builtin_lasx_mxdpadd_us_d ((v4u64) a, (v8u32) b, (v8i32) c);
```

## __m256i __lasx_mxdpadd_us_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpadd_us_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.us.h
Builtin: __builtin_lasx_mxdpadd_us_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4458
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i16[0] = a.i16[0] + b.u8[0] * c.i8[0] + b.u8[1] * c.i8[1];
dst.i16[1] = a.i16[1] + b.u8[2] * c.i8[2] + b.u8[3] * c.i8[3];
dst.i16[2] = a.i16[2] + b.u8[4] * c.i8[4] + b.u8[5] * c.i8[5];
dst.i16[3] = a.i16[3] + b.u8[6] * c.i8[6] + b.u8[7] * c.i8[7];
dst.i16[4] = a.i16[4] + b.u8[8] * c.i8[8] + b.u8[9] * c.i8[9];
dst.i16[5] = a.i16[5] + b.u8[10] * c.i8[10] + b.u8[11] * c.i8[11];
dst.i16[6] = a.i16[6] + b.u8[12] * c.i8[12] + b.u8[13] * c.i8[13];
dst.i16[7] = a.i16[7] + b.u8[14] * c.i8[14] + b.u8[15] * c.i8[15];
dst.i16[8] = a.i16[8] + b.u8[16] * c.i8[16] + b.u8[17] * c.i8[17];
dst.i16[9] = a.i16[9] + b.u8[18] * c.i8[18] + b.u8[19] * c.i8[19];
dst.i16[10] = a.i16[10] + b.u8[20] * c.i8[20] + b.u8[21] * c.i8[21];
dst.i16[11] = a.i16[11] + b.u8[22] * c.i8[22] + b.u8[23] * c.i8[23];
dst.i16[12] = a.i16[12] + b.u8[24] * c.i8[24] + b.u8[25] * c.i8[25];
dst.i16[13] = a.i16[13] + b.u8[26] * c.i8[26] + b.u8[27] * c.i8[27];
dst.i16[14] = a.i16[14] + b.u8[28] * c.i8[28] + b.u8[29] * c.i8[29];
dst.i16[15] = a.i16[15] + b.u8[30] * c.i8[30] + b.u8[31] * c.i8[31];
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
return (__m256i) __builtin_lasx_mxdpadd_us_h ((v16u16) a, (v32u8) b, (v32i8) c);
```

## __m256i __lasx_mxdpadd_us_q (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpadd_us_q (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.us.q
Builtin: __builtin_lasx_mxdpadd_us_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4476
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i128[0] = a.i128[0] + b.u64[0] * c.i64[0] + b.u64[1] * c.i64[1];
dst.i128[1] = a.i128[1] + b.u64[2] * c.i64[2] + b.u64[3] * c.i64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdpadd_us_q ((v4u64) a, (v4u64) b, (v4i64) c);
```

## __m256i __lasx_mxdpadd_us_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpadd_us_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.us.w
Builtin: __builtin_lasx_mxdpadd_us_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4464
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i32[0] = a.i32[0] + b.u16[0] * c.i16[0] + b.u16[1] * c.i16[1];
dst.i32[1] = a.i32[1] + b.u16[2] * c.i16[2] + b.u16[3] * c.i16[3];
dst.i32[2] = a.i32[2] + b.u16[4] * c.i16[4] + b.u16[5] * c.i16[5];
dst.i32[3] = a.i32[3] + b.u16[6] * c.i16[6] + b.u16[7] * c.i16[7];
dst.i32[4] = a.i32[4] + b.u16[8] * c.i16[8] + b.u16[9] * c.i16[9];
dst.i32[5] = a.i32[5] + b.u16[10] * c.i16[10] + b.u16[11] * c.i16[11];
dst.i32[6] = a.i32[6] + b.u16[12] * c.i16[12] + b.u16[13] * c.i16[13];
dst.i32[7] = a.i32[7] + b.u16[14] * c.i16[14] + b.u16[15] * c.i16[15];
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
return (__m256i) __builtin_lasx_mxdpadd_us_w ((v8u32) a, (v16u16) b, (v16i16) c);
```

## __m256i __lasx_mxdpsub_s_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpsub_s_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.s.d
Builtin: __builtin_lasx_mxdpsub_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1580
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i64[0] = a.i64[0] - b.i32[0] * c.i32[0] - b.i32[1] * c.i32[1];
dst.i64[1] = a.i64[1] - b.i32[2] * c.i32[2] - b.i32[3] * c.i32[3];
dst.i64[2] = a.i64[2] - b.i32[4] * c.i32[4] - b.i32[5] * c.i32[5];
dst.i64[3] = a.i64[3] - b.i32[6] * c.i32[6] - b.i32[7] * c.i32[7];
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
return (__m256i)__builtin_lasx_mxdpsub_s_d((v4i64)a, (v8i32)b, (v8i32)c);
```

## __m256i __lasx_mxdpsub_s_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpsub_s_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.s.h
Builtin: __builtin_lasx_mxdpsub_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1566
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i16[0] = a.i16[0] - b.i8[0] * c.i8[0] - b.i8[1] * c.i8[1];
dst.i16[1] = a.i16[1] - b.i8[2] * c.i8[2] - b.i8[3] * c.i8[3];
dst.i16[2] = a.i16[2] - b.i8[4] * c.i8[4] - b.i8[5] * c.i8[5];
dst.i16[3] = a.i16[3] - b.i8[6] * c.i8[6] - b.i8[7] * c.i8[7];
dst.i16[4] = a.i16[4] - b.i8[8] * c.i8[8] - b.i8[9] * c.i8[9];
dst.i16[5] = a.i16[5] - b.i8[10] * c.i8[10] - b.i8[11] * c.i8[11];
dst.i16[6] = a.i16[6] - b.i8[12] * c.i8[12] - b.i8[13] * c.i8[13];
dst.i16[7] = a.i16[7] - b.i8[14] * c.i8[14] - b.i8[15] * c.i8[15];
dst.i16[8] = a.i16[8] - b.i8[16] * c.i8[16] - b.i8[17] * c.i8[17];
dst.i16[9] = a.i16[9] - b.i8[18] * c.i8[18] - b.i8[19] * c.i8[19];
dst.i16[10] = a.i16[10] - b.i8[20] * c.i8[20] - b.i8[21] * c.i8[21];
dst.i16[11] = a.i16[11] - b.i8[22] * c.i8[22] - b.i8[23] * c.i8[23];
dst.i16[12] = a.i16[12] - b.i8[24] * c.i8[24] - b.i8[25] * c.i8[25];
dst.i16[13] = a.i16[13] - b.i8[26] * c.i8[26] - b.i8[27] * c.i8[27];
dst.i16[14] = a.i16[14] - b.i8[28] * c.i8[28] - b.i8[29] * c.i8[29];
dst.i16[15] = a.i16[15] - b.i8[30] * c.i8[30] - b.i8[31] * c.i8[31];
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
return (__m256i)__builtin_lasx_mxdpsub_s_h((v16i16)a, (v32i8)b, (v32i8)c);
```

## __m256i __lasx_mxdpsub_s_q (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpsub_s_q (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.s.q
Builtin: __builtin_lasx_mxdpsub_s_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4482
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i128[0] = a.i128[0] - b.i64[0] * c.i64[0] - b.i64[1] * c.i64[1];
dst.i128[1] = a.i128[1] - b.i64[2] * c.i64[2] - b.i64[3] * c.i64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdpsub_s_q ((v4i64) a, (v4i64) b, (v4i64) c);
```

## __m256i __lasx_mxdpsub_s_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpsub_s_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.s.w
Builtin: __builtin_lasx_mxdpsub_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1573
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i32[0] = a.i32[0] - b.i16[0] * c.i16[0] - b.i16[1] * c.i16[1];
dst.i32[1] = a.i32[1] - b.i16[2] * c.i16[2] - b.i16[3] * c.i16[3];
dst.i32[2] = a.i32[2] - b.i16[4] * c.i16[4] - b.i16[5] * c.i16[5];
dst.i32[3] = a.i32[3] - b.i16[6] * c.i16[6] - b.i16[7] * c.i16[7];
dst.i32[4] = a.i32[4] - b.i16[8] * c.i16[8] - b.i16[9] * c.i16[9];
dst.i32[5] = a.i32[5] - b.i16[10] * c.i16[10] - b.i16[11] * c.i16[11];
dst.i32[6] = a.i32[6] - b.i16[12] * c.i16[12] - b.i16[13] * c.i16[13];
dst.i32[7] = a.i32[7] - b.i16[14] * c.i16[14] - b.i16[15] * c.i16[15];
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
return (__m256i)__builtin_lasx_mxdpsub_s_w((v8i32)a, (v16i16)b, (v16i16)c);
```

## __m256i __lasx_mxdpsub_u_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpsub_u_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.u.d
Builtin: __builtin_lasx_mxdpsub_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1601
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u64[0] = a.u64[0] - b.u32[0] * c.u32[0] - b.u32[1] * c.u32[1];
dst.u64[1] = a.u64[1] - b.u32[2] * c.u32[2] - b.u32[3] * c.u32[3];
dst.u64[2] = a.u64[2] - b.u32[4] * c.u32[4] - b.u32[5] * c.u32[5];
dst.u64[3] = a.u64[3] - b.u32[6] * c.u32[6] - b.u32[7] * c.u32[7];
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
return (__m256i)__builtin_lasx_mxdpsub_u_d((v4i64)a, (v8u32)b, (v8u32)c);
```

## __m256i __lasx_mxdpsub_u_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpsub_u_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.u.h
Builtin: __builtin_lasx_mxdpsub_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1587
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u16[0] = a.u16[0] - b.u8[0] * c.u8[0] - b.u8[1] * c.u8[1];
dst.u16[1] = a.u16[1] - b.u8[2] * c.u8[2] - b.u8[3] * c.u8[3];
dst.u16[2] = a.u16[2] - b.u8[4] * c.u8[4] - b.u8[5] * c.u8[5];
dst.u16[3] = a.u16[3] - b.u8[6] * c.u8[6] - b.u8[7] * c.u8[7];
dst.u16[4] = a.u16[4] - b.u8[8] * c.u8[8] - b.u8[9] * c.u8[9];
dst.u16[5] = a.u16[5] - b.u8[10] * c.u8[10] - b.u8[11] * c.u8[11];
dst.u16[6] = a.u16[6] - b.u8[12] * c.u8[12] - b.u8[13] * c.u8[13];
dst.u16[7] = a.u16[7] - b.u8[14] * c.u8[14] - b.u8[15] * c.u8[15];
dst.u16[8] = a.u16[8] - b.u8[16] * c.u8[16] - b.u8[17] * c.u8[17];
dst.u16[9] = a.u16[9] - b.u8[18] * c.u8[18] - b.u8[19] * c.u8[19];
dst.u16[10] = a.u16[10] - b.u8[20] * c.u8[20] - b.u8[21] * c.u8[21];
dst.u16[11] = a.u16[11] - b.u8[22] * c.u8[22] - b.u8[23] * c.u8[23];
dst.u16[12] = a.u16[12] - b.u8[24] * c.u8[24] - b.u8[25] * c.u8[25];
dst.u16[13] = a.u16[13] - b.u8[26] * c.u8[26] - b.u8[27] * c.u8[27];
dst.u16[14] = a.u16[14] - b.u8[28] * c.u8[28] - b.u8[29] * c.u8[29];
dst.u16[15] = a.u16[15] - b.u8[30] * c.u8[30] - b.u8[31] * c.u8[31];
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
return (__m256i)__builtin_lasx_mxdpsub_u_h((v16i16)a, (v32u8)b, (v32u8)c);
```

## __m256i __lasx_mxdpsub_u_q (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpsub_u_q (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.u.q
Builtin: __builtin_lasx_mxdpsub_u_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4488
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u128[0] = a.u128[0] - b.u64[0] * c.u64[0] - b.u64[1] * c.u64[1];
dst.u128[1] = a.u128[1] - b.u64[2] * c.u64[2] - b.u64[3] * c.u64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdpsub_u_q ((v4u64) a, (v4u64) b, (v4u64) c);
```

## __m256i __lasx_mxdpsub_u_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxdpsub_u_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.u.w
Builtin: __builtin_lasx_mxdpsub_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1594
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u32[0] = a.u32[0] - b.u16[0] * c.u16[0] - b.u16[1] * c.u16[1];
dst.u32[1] = a.u32[1] - b.u16[2] * c.u16[2] - b.u16[3] * c.u16[3];
dst.u32[2] = a.u32[2] - b.u16[4] * c.u16[4] - b.u16[5] * c.u16[5];
dst.u32[3] = a.u32[3] - b.u16[6] * c.u16[6] - b.u16[7] * c.u16[7];
dst.u32[4] = a.u32[4] - b.u16[8] * c.u16[8] - b.u16[9] * c.u16[9];
dst.u32[5] = a.u32[5] - b.u16[10] * c.u16[10] - b.u16[11] * c.u16[11];
dst.u32[6] = a.u32[6] - b.u16[12] * c.u16[12] - b.u16[13] * c.u16[13];
dst.u32[7] = a.u32[7] - b.u16[14] * c.u16[14] - b.u16[15] * c.u16[15];
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
return (__m256i)__builtin_lasx_mxdpsub_u_w((v8i32)a, (v16u16)b, (v16u16)c);
```

## __m256i __lasx_mxhadd_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhadd_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhadd.s.d
Builtin: __builtin_lasx_mxhadd_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1356
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 4 x i64 lanes.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) + widen(b.i32[0]);
dst.i64[1] = widen(a.i32[1]) + widen(b.i32[1]);
dst.i64[2] = widen(a.i32[2]) + widen(b.i32[2]);
dst.i64[3] = widen(a.i32[3]) + widen(b.i32[3]);
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
return (__m256i)__builtin_lasx_mxhadd_s_d((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxhadd_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhadd_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhadd.s.h
Builtin: __builtin_lasx_mxhadd_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1342
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 16 x i16 lanes.

### Operation

```c
dst.i16[0] = widen(a.i8[0]) + widen(b.i8[0]);
dst.i16[1] = widen(a.i8[1]) + widen(b.i8[1]);
dst.i16[2] = widen(a.i8[2]) + widen(b.i8[2]);
dst.i16[3] = widen(a.i8[3]) + widen(b.i8[3]);
dst.i16[4] = widen(a.i8[4]) + widen(b.i8[4]);
dst.i16[5] = widen(a.i8[5]) + widen(b.i8[5]);
dst.i16[6] = widen(a.i8[6]) + widen(b.i8[6]);
dst.i16[7] = widen(a.i8[7]) + widen(b.i8[7]);
dst.i16[8] = widen(a.i8[8]) + widen(b.i8[8]);
dst.i16[9] = widen(a.i8[9]) + widen(b.i8[9]);
dst.i16[10] = widen(a.i8[10]) + widen(b.i8[10]);
dst.i16[11] = widen(a.i8[11]) + widen(b.i8[11]);
dst.i16[12] = widen(a.i8[12]) + widen(b.i8[12]);
dst.i16[13] = widen(a.i8[13]) + widen(b.i8[13]);
dst.i16[14] = widen(a.i8[14]) + widen(b.i8[14]);
dst.i16[15] = widen(a.i8[15]) + widen(b.i8[15]);
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
return (__m256i)__builtin_lasx_mxhadd_s_h((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxhadd_s_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhadd_s_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhadd.s.q
Builtin: __builtin_lasx_mxhadd_s_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4494
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 2 x i128 lanes.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) + widen(b.i64[0]);
dst.i128[1] = widen(a.i64[1]) + widen(b.i64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxhadd_s_q ((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxhadd_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhadd_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhadd.s.w
Builtin: __builtin_lasx_mxhadd_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1349
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 8 x i32 lanes.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[1] = widen(a.i16[1]) + widen(b.i16[1]);
dst.i32[2] = widen(a.i16[2]) + widen(b.i16[2]);
dst.i32[3] = widen(a.i16[3]) + widen(b.i16[3]);
dst.i32[4] = widen(a.i16[4]) + widen(b.i16[4]);
dst.i32[5] = widen(a.i16[5]) + widen(b.i16[5]);
dst.i32[6] = widen(a.i16[6]) + widen(b.i16[6]);
dst.i32[7] = widen(a.i16[7]) + widen(b.i16[7]);
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
return (__m256i)__builtin_lasx_mxhadd_s_w((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxhadd_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhadd_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhadd.u.d
Builtin: __builtin_lasx_mxhadd_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1377
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 4 x u64 lanes.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) + widen(b.u32[0]);
dst.u64[1] = widen(a.u32[1]) + widen(b.u32[1]);
dst.u64[2] = widen(a.u32[2]) + widen(b.u32[2]);
dst.u64[3] = widen(a.u32[3]) + widen(b.u32[3]);
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
return (__m256i)__builtin_lasx_mxhadd_u_d((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxhadd_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhadd_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhadd.u.h
Builtin: __builtin_lasx_mxhadd_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1363
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 16 x u16 lanes.

### Operation

```c
dst.u16[0] = widen(a.u8[0]) + widen(b.u8[0]);
dst.u16[1] = widen(a.u8[1]) + widen(b.u8[1]);
dst.u16[2] = widen(a.u8[2]) + widen(b.u8[2]);
dst.u16[3] = widen(a.u8[3]) + widen(b.u8[3]);
dst.u16[4] = widen(a.u8[4]) + widen(b.u8[4]);
dst.u16[5] = widen(a.u8[5]) + widen(b.u8[5]);
dst.u16[6] = widen(a.u8[6]) + widen(b.u8[6]);
dst.u16[7] = widen(a.u8[7]) + widen(b.u8[7]);
dst.u16[8] = widen(a.u8[8]) + widen(b.u8[8]);
dst.u16[9] = widen(a.u8[9]) + widen(b.u8[9]);
dst.u16[10] = widen(a.u8[10]) + widen(b.u8[10]);
dst.u16[11] = widen(a.u8[11]) + widen(b.u8[11]);
dst.u16[12] = widen(a.u8[12]) + widen(b.u8[12]);
dst.u16[13] = widen(a.u8[13]) + widen(b.u8[13]);
dst.u16[14] = widen(a.u8[14]) + widen(b.u8[14]);
dst.u16[15] = widen(a.u8[15]) + widen(b.u8[15]);
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
return (__m256i)__builtin_lasx_mxhadd_u_h((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxhadd_u_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhadd_u_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhadd.u.q
Builtin: __builtin_lasx_mxhadd_u_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4500
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 2 x u128 lanes.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.u64[0]);
dst.u128[1] = widen(a.u64[1]) + widen(b.u64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxhadd_u_q ((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxhadd_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhadd_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhadd.u.w
Builtin: __builtin_lasx_mxhadd_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1370
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 8 x u32 lanes.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[1] = widen(a.u16[1]) + widen(b.u16[1]);
dst.u32[2] = widen(a.u16[2]) + widen(b.u16[2]);
dst.u32[3] = widen(a.u16[3]) + widen(b.u16[3]);
dst.u32[4] = widen(a.u16[4]) + widen(b.u16[4]);
dst.u32[5] = widen(a.u16[5]) + widen(b.u16[5]);
dst.u32[6] = widen(a.u16[6]) + widen(b.u16[6]);
dst.u32[7] = widen(a.u16[7]) + widen(b.u16[7]);
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
return (__m256i)__builtin_lasx_mxhadd_u_w((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxhsub_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhsub_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhsub.s.d
Builtin: __builtin_lasx_mxhsub_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1398
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 4 x i64 lanes.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) - widen(b.i32[0]);
dst.i64[1] = widen(a.i32[1]) - widen(b.i32[1]);
dst.i64[2] = widen(a.i32[2]) - widen(b.i32[2]);
dst.i64[3] = widen(a.i32[3]) - widen(b.i32[3]);
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
return (__m256i)__builtin_lasx_mxhsub_s_d((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxhsub_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhsub_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhsub.s.h
Builtin: __builtin_lasx_mxhsub_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1384
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 16 x i16 lanes.

### Operation

```c
dst.i16[0] = widen(a.i8[0]) - widen(b.i8[0]);
dst.i16[1] = widen(a.i8[1]) - widen(b.i8[1]);
dst.i16[2] = widen(a.i8[2]) - widen(b.i8[2]);
dst.i16[3] = widen(a.i8[3]) - widen(b.i8[3]);
dst.i16[4] = widen(a.i8[4]) - widen(b.i8[4]);
dst.i16[5] = widen(a.i8[5]) - widen(b.i8[5]);
dst.i16[6] = widen(a.i8[6]) - widen(b.i8[6]);
dst.i16[7] = widen(a.i8[7]) - widen(b.i8[7]);
dst.i16[8] = widen(a.i8[8]) - widen(b.i8[8]);
dst.i16[9] = widen(a.i8[9]) - widen(b.i8[9]);
dst.i16[10] = widen(a.i8[10]) - widen(b.i8[10]);
dst.i16[11] = widen(a.i8[11]) - widen(b.i8[11]);
dst.i16[12] = widen(a.i8[12]) - widen(b.i8[12]);
dst.i16[13] = widen(a.i8[13]) - widen(b.i8[13]);
dst.i16[14] = widen(a.i8[14]) - widen(b.i8[14]);
dst.i16[15] = widen(a.i8[15]) - widen(b.i8[15]);
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
return (__m256i)__builtin_lasx_mxhsub_s_h((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxhsub_s_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhsub_s_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhsub.s.q
Builtin: __builtin_lasx_mxhsub_s_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4506
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 2 x i128 lanes.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) - widen(b.i64[0]);
dst.i128[1] = widen(a.i64[1]) - widen(b.i64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxhsub_s_q ((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxhsub_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhsub_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhsub.s.w
Builtin: __builtin_lasx_mxhsub_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1391
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 8 x i32 lanes.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[1] = widen(a.i16[1]) - widen(b.i16[1]);
dst.i32[2] = widen(a.i16[2]) - widen(b.i16[2]);
dst.i32[3] = widen(a.i16[3]) - widen(b.i16[3]);
dst.i32[4] = widen(a.i16[4]) - widen(b.i16[4]);
dst.i32[5] = widen(a.i16[5]) - widen(b.i16[5]);
dst.i32[6] = widen(a.i16[6]) - widen(b.i16[6]);
dst.i32[7] = widen(a.i16[7]) - widen(b.i16[7]);
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
return (__m256i)__builtin_lasx_mxhsub_s_w((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxhsub_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhsub_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhsub.u.d
Builtin: __builtin_lasx_mxhsub_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1419
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 4 x u64 lanes.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) - widen(b.u32[0]);
dst.u64[1] = widen(a.u32[1]) - widen(b.u32[1]);
dst.u64[2] = widen(a.u32[2]) - widen(b.u32[2]);
dst.u64[3] = widen(a.u32[3]) - widen(b.u32[3]);
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
return (__m256i)__builtin_lasx_mxhsub_u_d((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxhsub_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhsub_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhsub.u.h
Builtin: __builtin_lasx_mxhsub_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1405
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 16 x u16 lanes.

### Operation

```c
dst.u16[0] = widen(a.u8[0]) - widen(b.u8[0]);
dst.u16[1] = widen(a.u8[1]) - widen(b.u8[1]);
dst.u16[2] = widen(a.u8[2]) - widen(b.u8[2]);
dst.u16[3] = widen(a.u8[3]) - widen(b.u8[3]);
dst.u16[4] = widen(a.u8[4]) - widen(b.u8[4]);
dst.u16[5] = widen(a.u8[5]) - widen(b.u8[5]);
dst.u16[6] = widen(a.u8[6]) - widen(b.u8[6]);
dst.u16[7] = widen(a.u8[7]) - widen(b.u8[7]);
dst.u16[8] = widen(a.u8[8]) - widen(b.u8[8]);
dst.u16[9] = widen(a.u8[9]) - widen(b.u8[9]);
dst.u16[10] = widen(a.u8[10]) - widen(b.u8[10]);
dst.u16[11] = widen(a.u8[11]) - widen(b.u8[11]);
dst.u16[12] = widen(a.u8[12]) - widen(b.u8[12]);
dst.u16[13] = widen(a.u8[13]) - widen(b.u8[13]);
dst.u16[14] = widen(a.u8[14]) - widen(b.u8[14]);
dst.u16[15] = widen(a.u8[15]) - widen(b.u8[15]);
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
return (__m256i)__builtin_lasx_mxhsub_u_h((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxhsub_u_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhsub_u_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhsub.u.q
Builtin: __builtin_lasx_mxhsub_u_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4512
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 2 x u128 lanes.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) - widen(b.u64[0]);
dst.u128[1] = widen(a.u64[1]) - widen(b.u64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxhsub_u_q ((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxhsub_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhsub_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhsub.u.w
Builtin: __builtin_lasx_mxhsub_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1412
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 8 x u32 lanes.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[1] = widen(a.u16[1]) - widen(b.u16[1]);
dst.u32[2] = widen(a.u16[2]) - widen(b.u16[2]);
dst.u32[3] = widen(a.u16[3]) - widen(b.u16[3]);
dst.u32[4] = widen(a.u16[4]) - widen(b.u16[4]);
dst.u32[5] = widen(a.u16[5]) - widen(b.u16[5]);
dst.u32[6] = widen(a.u16[6]) - widen(b.u16[6]);
dst.u32[7] = widen(a.u16[7]) - widen(b.u16[7]);
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
return (__m256i)__builtin_lasx_mxhsub_u_w((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxmadd_q_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmadd_q_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmadd.q.h
Builtin: __builtin_lasx_mxmadd_q_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2508
```

### Description

Add modular integer lanes of `a` and `b` on 16 x u16 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.i16[0] = signed_saturate(a.i16[0] + signed_saturate(q_format_shift(b.i16[0] * c.i16[0], 16 - 1), 16), 16);
dst.i16[1] = signed_saturate(a.i16[1] + signed_saturate(q_format_shift(b.i16[1] * c.i16[1], 16 - 1), 16), 16);
dst.i16[2] = signed_saturate(a.i16[2] + signed_saturate(q_format_shift(b.i16[2] * c.i16[2], 16 - 1), 16), 16);
dst.i16[3] = signed_saturate(a.i16[3] + signed_saturate(q_format_shift(b.i16[3] * c.i16[3], 16 - 1), 16), 16);
dst.i16[4] = signed_saturate(a.i16[4] + signed_saturate(q_format_shift(b.i16[4] * c.i16[4], 16 - 1), 16), 16);
dst.i16[5] = signed_saturate(a.i16[5] + signed_saturate(q_format_shift(b.i16[5] * c.i16[5], 16 - 1), 16), 16);
dst.i16[6] = signed_saturate(a.i16[6] + signed_saturate(q_format_shift(b.i16[6] * c.i16[6], 16 - 1), 16), 16);
dst.i16[7] = signed_saturate(a.i16[7] + signed_saturate(q_format_shift(b.i16[7] * c.i16[7], 16 - 1), 16), 16);
dst.i16[8] = signed_saturate(a.i16[8] + signed_saturate(q_format_shift(b.i16[8] * c.i16[8], 16 - 1), 16), 16);
dst.i16[9] = signed_saturate(a.i16[9] + signed_saturate(q_format_shift(b.i16[9] * c.i16[9], 16 - 1), 16), 16);
dst.i16[10] = signed_saturate(a.i16[10] + signed_saturate(q_format_shift(b.i16[10] * c.i16[10], 16 - 1), 16), 16);
dst.i16[11] = signed_saturate(a.i16[11] + signed_saturate(q_format_shift(b.i16[11] * c.i16[11], 16 - 1), 16), 16);
dst.i16[12] = signed_saturate(a.i16[12] + signed_saturate(q_format_shift(b.i16[12] * c.i16[12], 16 - 1), 16), 16);
dst.i16[13] = signed_saturate(a.i16[13] + signed_saturate(q_format_shift(b.i16[13] * c.i16[13], 16 - 1), 16), 16);
dst.i16[14] = signed_saturate(a.i16[14] + signed_saturate(q_format_shift(b.i16[14] * c.i16[14], 16 - 1), 16), 16);
dst.i16[15] = signed_saturate(a.i16[15] + signed_saturate(q_format_shift(b.i16[15] * c.i16[15], 16 - 1), 16), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.62</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmadd_q_h((v16i16)a, (v16i16)b, (v16i16)c);
```

## __m256i __lasx_mxmadd_q_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmadd_q_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmadd.q.w
Builtin: __builtin_lasx_mxmadd_q_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2515
```

### Description

Add modular integer lanes of `a` and `b` on 8 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.i32[0] = signed_saturate(a.i32[0] + signed_saturate(q_format_shift(b.i32[0] * c.i32[0], 32 - 1), 32), 32);
dst.i32[1] = signed_saturate(a.i32[1] + signed_saturate(q_format_shift(b.i32[1] * c.i32[1], 32 - 1), 32), 32);
dst.i32[2] = signed_saturate(a.i32[2] + signed_saturate(q_format_shift(b.i32[2] * c.i32[2], 32 - 1), 32), 32);
dst.i32[3] = signed_saturate(a.i32[3] + signed_saturate(q_format_shift(b.i32[3] * c.i32[3], 32 - 1), 32), 32);
dst.i32[4] = signed_saturate(a.i32[4] + signed_saturate(q_format_shift(b.i32[4] * c.i32[4], 32 - 1), 32), 32);
dst.i32[5] = signed_saturate(a.i32[5] + signed_saturate(q_format_shift(b.i32[5] * c.i32[5], 32 - 1), 32), 32);
dst.i32[6] = signed_saturate(a.i32[6] + signed_saturate(q_format_shift(b.i32[6] * c.i32[6], 32 - 1), 32), 32);
dst.i32[7] = signed_saturate(a.i32[7] + signed_saturate(q_format_shift(b.i32[7] * c.i32[7], 32 - 1), 32), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.62</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmadd_q_w((v8i32)a, (v8i32)b, (v8i32)c);
```

## __m256i __lasx_mxmaddr_q_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmaddr_q_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmaddr.q.h
Builtin: __builtin_lasx_mxmaddr_q_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2522
```

### Description

Add modular integer lanes of `a` and `b` on 16 x u16 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.i16[0] = signed_saturate(a.i16[0] + signed_saturate(rounding_q_format_shift(b.i16[0] * c.i16[0], 16 - 1), 16), 16);
dst.i16[1] = signed_saturate(a.i16[1] + signed_saturate(rounding_q_format_shift(b.i16[1] * c.i16[1], 16 - 1), 16), 16);
dst.i16[2] = signed_saturate(a.i16[2] + signed_saturate(rounding_q_format_shift(b.i16[2] * c.i16[2], 16 - 1), 16), 16);
dst.i16[3] = signed_saturate(a.i16[3] + signed_saturate(rounding_q_format_shift(b.i16[3] * c.i16[3], 16 - 1), 16), 16);
dst.i16[4] = signed_saturate(a.i16[4] + signed_saturate(rounding_q_format_shift(b.i16[4] * c.i16[4], 16 - 1), 16), 16);
dst.i16[5] = signed_saturate(a.i16[5] + signed_saturate(rounding_q_format_shift(b.i16[5] * c.i16[5], 16 - 1), 16), 16);
dst.i16[6] = signed_saturate(a.i16[6] + signed_saturate(rounding_q_format_shift(b.i16[6] * c.i16[6], 16 - 1), 16), 16);
dst.i16[7] = signed_saturate(a.i16[7] + signed_saturate(rounding_q_format_shift(b.i16[7] * c.i16[7], 16 - 1), 16), 16);
dst.i16[8] = signed_saturate(a.i16[8] + signed_saturate(rounding_q_format_shift(b.i16[8] * c.i16[8], 16 - 1), 16), 16);
dst.i16[9] = signed_saturate(a.i16[9] + signed_saturate(rounding_q_format_shift(b.i16[9] * c.i16[9], 16 - 1), 16), 16);
dst.i16[10] = signed_saturate(a.i16[10] + signed_saturate(rounding_q_format_shift(b.i16[10] * c.i16[10], 16 - 1), 16), 16);
dst.i16[11] = signed_saturate(a.i16[11] + signed_saturate(rounding_q_format_shift(b.i16[11] * c.i16[11], 16 - 1), 16), 16);
dst.i16[12] = signed_saturate(a.i16[12] + signed_saturate(rounding_q_format_shift(b.i16[12] * c.i16[12], 16 - 1), 16), 16);
dst.i16[13] = signed_saturate(a.i16[13] + signed_saturate(rounding_q_format_shift(b.i16[13] * c.i16[13], 16 - 1), 16), 16);
dst.i16[14] = signed_saturate(a.i16[14] + signed_saturate(rounding_q_format_shift(b.i16[14] * c.i16[14], 16 - 1), 16), 16);
dst.i16[15] = signed_saturate(a.i16[15] + signed_saturate(rounding_q_format_shift(b.i16[15] * c.i16[15], 16 - 1), 16), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.62</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmaddr_q_h((v16i16)a, (v16i16)b, (v16i16)c);
```

## __m256i __lasx_mxmaddr_q_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmaddr_q_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmaddr.q.w
Builtin: __builtin_lasx_mxmaddr_q_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2529
```

### Description

Add modular integer lanes of `a` and `b` on 8 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.i32[0] = signed_saturate(a.i32[0] + signed_saturate(rounding_q_format_shift(b.i32[0] * c.i32[0], 32 - 1), 32), 32);
dst.i32[1] = signed_saturate(a.i32[1] + signed_saturate(rounding_q_format_shift(b.i32[1] * c.i32[1], 32 - 1), 32), 32);
dst.i32[2] = signed_saturate(a.i32[2] + signed_saturate(rounding_q_format_shift(b.i32[2] * c.i32[2], 32 - 1), 32), 32);
dst.i32[3] = signed_saturate(a.i32[3] + signed_saturate(rounding_q_format_shift(b.i32[3] * c.i32[3], 32 - 1), 32), 32);
dst.i32[4] = signed_saturate(a.i32[4] + signed_saturate(rounding_q_format_shift(b.i32[4] * c.i32[4], 32 - 1), 32), 32);
dst.i32[5] = signed_saturate(a.i32[5] + signed_saturate(rounding_q_format_shift(b.i32[5] * c.i32[5], 32 - 1), 32), 32);
dst.i32[6] = signed_saturate(a.i32[6] + signed_saturate(rounding_q_format_shift(b.i32[6] * c.i32[6], 32 - 1), 32), 32);
dst.i32[7] = signed_saturate(a.i32[7] + signed_saturate(rounding_q_format_shift(b.i32[7] * c.i32[7], 32 - 1), 32), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.62</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmaddr_q_w((v8i32)a, (v8i32)b, (v8i32)c);
```

## __m256i __lasx_mxmaddv_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmaddv_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmaddv.b
Builtin: __builtin_lasx_mxmaddv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1230
```

### Description

Add modular integer lanes of `a` and `b` on 32 x u8 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u8[0] = a.u8[0] + b.u8[0] * c.u8[0];
dst.u8[1] = a.u8[1] + b.u8[1] * c.u8[1];
dst.u8[2] = a.u8[2] + b.u8[2] * c.u8[2];
dst.u8[3] = a.u8[3] + b.u8[3] * c.u8[3];
dst.u8[4] = a.u8[4] + b.u8[4] * c.u8[4];
dst.u8[5] = a.u8[5] + b.u8[5] * c.u8[5];
dst.u8[6] = a.u8[6] + b.u8[6] * c.u8[6];
dst.u8[7] = a.u8[7] + b.u8[7] * c.u8[7];
dst.u8[8] = a.u8[8] + b.u8[8] * c.u8[8];
dst.u8[9] = a.u8[9] + b.u8[9] * c.u8[9];
dst.u8[10] = a.u8[10] + b.u8[10] * c.u8[10];
dst.u8[11] = a.u8[11] + b.u8[11] * c.u8[11];
dst.u8[12] = a.u8[12] + b.u8[12] * c.u8[12];
dst.u8[13] = a.u8[13] + b.u8[13] * c.u8[13];
dst.u8[14] = a.u8[14] + b.u8[14] * c.u8[14];
dst.u8[15] = a.u8[15] + b.u8[15] * c.u8[15];
dst.u8[16] = a.u8[16] + b.u8[16] * c.u8[16];
dst.u8[17] = a.u8[17] + b.u8[17] * c.u8[17];
dst.u8[18] = a.u8[18] + b.u8[18] * c.u8[18];
dst.u8[19] = a.u8[19] + b.u8[19] * c.u8[19];
dst.u8[20] = a.u8[20] + b.u8[20] * c.u8[20];
dst.u8[21] = a.u8[21] + b.u8[21] * c.u8[21];
dst.u8[22] = a.u8[22] + b.u8[22] * c.u8[22];
dst.u8[23] = a.u8[23] + b.u8[23] * c.u8[23];
dst.u8[24] = a.u8[24] + b.u8[24] * c.u8[24];
dst.u8[25] = a.u8[25] + b.u8[25] * c.u8[25];
dst.u8[26] = a.u8[26] + b.u8[26] * c.u8[26];
dst.u8[27] = a.u8[27] + b.u8[27] * c.u8[27];
dst.u8[28] = a.u8[28] + b.u8[28] * c.u8[28];
dst.u8[29] = a.u8[29] + b.u8[29] * c.u8[29];
dst.u8[30] = a.u8[30] + b.u8[30] * c.u8[30];
dst.u8[31] = a.u8[31] + b.u8[31] * c.u8[31];
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
return (__m256i)__builtin_lasx_mxmaddv_b((v32i8)a, (v32i8)b, (v32i8)c);
```

## __m256i __lasx_mxmaddv_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmaddv_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmaddv.d
Builtin: __builtin_lasx_mxmaddv_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1251
```

### Description

Add modular integer lanes of `a` and `b` on 4 x u64 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u64[0] = a.u64[0] + b.u64[0] * c.u64[0];
dst.u64[1] = a.u64[1] + b.u64[1] * c.u64[1];
dst.u64[2] = a.u64[2] + b.u64[2] * c.u64[2];
dst.u64[3] = a.u64[3] + b.u64[3] * c.u64[3];
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
return (__m256i)__builtin_lasx_mxmaddv_d((v4i64)a, (v4i64)b, (v4i64)c);
```

## __m256i __lasx_mxmaddv_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmaddv_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmaddv.h
Builtin: __builtin_lasx_mxmaddv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1237
```

### Description

Add modular integer lanes of `a` and `b` on 16 x u16 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u16[0] = a.u16[0] + b.u16[0] * c.u16[0];
dst.u16[1] = a.u16[1] + b.u16[1] * c.u16[1];
dst.u16[2] = a.u16[2] + b.u16[2] * c.u16[2];
dst.u16[3] = a.u16[3] + b.u16[3] * c.u16[3];
dst.u16[4] = a.u16[4] + b.u16[4] * c.u16[4];
dst.u16[5] = a.u16[5] + b.u16[5] * c.u16[5];
dst.u16[6] = a.u16[6] + b.u16[6] * c.u16[6];
dst.u16[7] = a.u16[7] + b.u16[7] * c.u16[7];
dst.u16[8] = a.u16[8] + b.u16[8] * c.u16[8];
dst.u16[9] = a.u16[9] + b.u16[9] * c.u16[9];
dst.u16[10] = a.u16[10] + b.u16[10] * c.u16[10];
dst.u16[11] = a.u16[11] + b.u16[11] * c.u16[11];
dst.u16[12] = a.u16[12] + b.u16[12] * c.u16[12];
dst.u16[13] = a.u16[13] + b.u16[13] * c.u16[13];
dst.u16[14] = a.u16[14] + b.u16[14] * c.u16[14];
dst.u16[15] = a.u16[15] + b.u16[15] * c.u16[15];
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
return (__m256i)__builtin_lasx_mxmaddv_h((v16i16)a, (v16i16)b, (v16i16)c);
```

## __m256i __lasx_mxmaddv_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmaddv_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmaddv.w
Builtin: __builtin_lasx_mxmaddv_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1244
```

### Description

Add modular integer lanes of `a` and `b` on 8 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u32[0] = a.u32[0] + b.u32[0] * c.u32[0];
dst.u32[1] = a.u32[1] + b.u32[1] * c.u32[1];
dst.u32[2] = a.u32[2] + b.u32[2] * c.u32[2];
dst.u32[3] = a.u32[3] + b.u32[3] * c.u32[3];
dst.u32[4] = a.u32[4] + b.u32[4] * c.u32[4];
dst.u32[5] = a.u32[5] + b.u32[5] * c.u32[5];
dst.u32[6] = a.u32[6] + b.u32[6] * c.u32[6];
dst.u32[7] = a.u32[7] + b.u32[7] * c.u32[7];
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
return (__m256i)__builtin_lasx_mxmaddv_w((v8i32)a, (v8i32)b, (v8i32)c);
```

## __m256i __lasx_mxmod_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmod_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmod.s.b
Builtin: __builtin_lasx_mxmod_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1426
```

### Description

Compute the lane-wise signed remainder of `a` divided by `b` on 32 x i8 lanes.

### Operation

```c
dst.i8[0] = a.i8[0] % b.i8[0];
dst.i8[1] = a.i8[1] % b.i8[1];
dst.i8[2] = a.i8[2] % b.i8[2];
dst.i8[3] = a.i8[3] % b.i8[3];
dst.i8[4] = a.i8[4] % b.i8[4];
dst.i8[5] = a.i8[5] % b.i8[5];
dst.i8[6] = a.i8[6] % b.i8[6];
dst.i8[7] = a.i8[7] % b.i8[7];
dst.i8[8] = a.i8[8] % b.i8[8];
dst.i8[9] = a.i8[9] % b.i8[9];
dst.i8[10] = a.i8[10] % b.i8[10];
dst.i8[11] = a.i8[11] % b.i8[11];
dst.i8[12] = a.i8[12] % b.i8[12];
dst.i8[13] = a.i8[13] % b.i8[13];
dst.i8[14] = a.i8[14] % b.i8[14];
dst.i8[15] = a.i8[15] % b.i8[15];
dst.i8[16] = a.i8[16] % b.i8[16];
dst.i8[17] = a.i8[17] % b.i8[17];
dst.i8[18] = a.i8[18] % b.i8[18];
dst.i8[19] = a.i8[19] % b.i8[19];
dst.i8[20] = a.i8[20] % b.i8[20];
dst.i8[21] = a.i8[21] % b.i8[21];
dst.i8[22] = a.i8[22] % b.i8[22];
dst.i8[23] = a.i8[23] % b.i8[23];
dst.i8[24] = a.i8[24] % b.i8[24];
dst.i8[25] = a.i8[25] % b.i8[25];
dst.i8[26] = a.i8[26] % b.i8[26];
dst.i8[27] = a.i8[27] % b.i8[27];
dst.i8[28] = a.i8[28] % b.i8[28];
dst.i8[29] = a.i8[29] % b.i8[29];
dst.i8[30] = a.i8[30] % b.i8[30];
dst.i8[31] = a.i8[31] % b.i8[31];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>29/44</td><td>0.04(1/25)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_s_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxmod_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmod_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmod.s.d
Builtin: __builtin_lasx_mxmod_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1447
```

### Description

Compute the lane-wise signed remainder of `a` divided by `b` on 4 x i64 lanes.

### Operation

```c
dst.i64[0] = a.i64[0] % b.i64[0];
dst.i64[1] = a.i64[1] % b.i64[1];
dst.i64[2] = a.i64[2] % b.i64[2];
dst.i64[3] = a.i64[3] % b.i64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>8/10</td><td>0.10(1/10.25)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_s_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxmod_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmod_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmod.s.h
Builtin: __builtin_lasx_mxmod_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1433
```

### Description

Compute the lane-wise signed remainder of `a` divided by `b` on 16 x i16 lanes.

### Operation

```c
dst.i16[0] = a.i16[0] % b.i16[0];
dst.i16[1] = a.i16[1] % b.i16[1];
dst.i16[2] = a.i16[2] % b.i16[2];
dst.i16[3] = a.i16[3] % b.i16[3];
dst.i16[4] = a.i16[4] % b.i16[4];
dst.i16[5] = a.i16[5] % b.i16[5];
dst.i16[6] = a.i16[6] % b.i16[6];
dst.i16[7] = a.i16[7] % b.i16[7];
dst.i16[8] = a.i16[8] % b.i16[8];
dst.i16[9] = a.i16[9] % b.i16[9];
dst.i16[10] = a.i16[10] % b.i16[10];
dst.i16[11] = a.i16[11] % b.i16[11];
dst.i16[12] = a.i16[12] % b.i16[12];
dst.i16[13] = a.i16[13] % b.i16[13];
dst.i16[14] = a.i16[14] % b.i16[14];
dst.i16[15] = a.i16[15] % b.i16[15];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>17/25</td><td>0.06(1/16)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_s_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxmod_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmod_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmod.s.w
Builtin: __builtin_lasx_mxmod_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1440
```

### Description

Compute the lane-wise signed remainder of `a` divided by `b` on 8 x i32 lanes.

### Operation

```c
dst.i32[0] = a.i32[0] % b.i32[0];
dst.i32[1] = a.i32[1] % b.i32[1];
dst.i32[2] = a.i32[2] % b.i32[2];
dst.i32[3] = a.i32[3] % b.i32[3];
dst.i32[4] = a.i32[4] % b.i32[4];
dst.i32[5] = a.i32[5] % b.i32[5];
dst.i32[6] = a.i32[6] % b.i32[6];
dst.i32[7] = a.i32[7] % b.i32[7];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>11/15</td><td>0.09(1/11.48)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_s_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxmod_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmod_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmod.u.b
Builtin: __builtin_lasx_mxmod_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1454
```

### Description

Compute the lane-wise unsigned remainder of `a` divided by `b` on 32 x u8 lanes.

### Operation

```c
dst.u8[0] = a.u8[0] % b.u8[0];
dst.u8[1] = a.u8[1] % b.u8[1];
dst.u8[2] = a.u8[2] % b.u8[2];
dst.u8[3] = a.u8[3] % b.u8[3];
dst.u8[4] = a.u8[4] % b.u8[4];
dst.u8[5] = a.u8[5] % b.u8[5];
dst.u8[6] = a.u8[6] % b.u8[6];
dst.u8[7] = a.u8[7] % b.u8[7];
dst.u8[8] = a.u8[8] % b.u8[8];
dst.u8[9] = a.u8[9] % b.u8[9];
dst.u8[10] = a.u8[10] % b.u8[10];
dst.u8[11] = a.u8[11] % b.u8[11];
dst.u8[12] = a.u8[12] % b.u8[12];
dst.u8[13] = a.u8[13] % b.u8[13];
dst.u8[14] = a.u8[14] % b.u8[14];
dst.u8[15] = a.u8[15] % b.u8[15];
dst.u8[16] = a.u8[16] % b.u8[16];
dst.u8[17] = a.u8[17] % b.u8[17];
dst.u8[18] = a.u8[18] % b.u8[18];
dst.u8[19] = a.u8[19] % b.u8[19];
dst.u8[20] = a.u8[20] % b.u8[20];
dst.u8[21] = a.u8[21] % b.u8[21];
dst.u8[22] = a.u8[22] % b.u8[22];
dst.u8[23] = a.u8[23] % b.u8[23];
dst.u8[24] = a.u8[24] % b.u8[24];
dst.u8[25] = a.u8[25] % b.u8[25];
dst.u8[26] = a.u8[26] % b.u8[26];
dst.u8[27] = a.u8[27] % b.u8[27];
dst.u8[28] = a.u8[28] % b.u8[28];
dst.u8[29] = a.u8[29] % b.u8[29];
dst.u8[30] = a.u8[30] % b.u8[30];
dst.u8[31] = a.u8[31] % b.u8[31];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>29/44</td><td>0.04(1/23)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_u_b((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxmod_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmod_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmod.u.d
Builtin: __builtin_lasx_mxmod_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1475
```

### Description

Compute the lane-wise unsigned remainder of `a` divided by `b` on 4 x u64 lanes.

### Operation

```c
dst.u64[0] = a.u64[0] % b.u64[0];
dst.u64[1] = a.u64[1] % b.u64[1];
dst.u64[2] = a.u64[2] % b.u64[2];
dst.u64[3] = a.u64[3] % b.u64[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>8/10</td><td>0.11(1/9.26)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_u_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxmod_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmod_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmod.u.h
Builtin: __builtin_lasx_mxmod_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1461
```

### Description

Compute the lane-wise unsigned remainder of `a` divided by `b` on 16 x u16 lanes.

### Operation

```c
dst.u16[0] = a.u16[0] % b.u16[0];
dst.u16[1] = a.u16[1] % b.u16[1];
dst.u16[2] = a.u16[2] % b.u16[2];
dst.u16[3] = a.u16[3] % b.u16[3];
dst.u16[4] = a.u16[4] % b.u16[4];
dst.u16[5] = a.u16[5] % b.u16[5];
dst.u16[6] = a.u16[6] % b.u16[6];
dst.u16[7] = a.u16[7] % b.u16[7];
dst.u16[8] = a.u16[8] % b.u16[8];
dst.u16[9] = a.u16[9] % b.u16[9];
dst.u16[10] = a.u16[10] % b.u16[10];
dst.u16[11] = a.u16[11] % b.u16[11];
dst.u16[12] = a.u16[12] % b.u16[12];
dst.u16[13] = a.u16[13] % b.u16[13];
dst.u16[14] = a.u16[14] % b.u16[14];
dst.u16[15] = a.u16[15] % b.u16[15];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>17/25</td><td>0.06(1/16.54)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_u_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxmod_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmod_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmod.u.w
Builtin: __builtin_lasx_mxmod_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1468
```

### Description

Compute the lane-wise unsigned remainder of `a` divided by `b` on 8 x u32 lanes.

### Operation

```c
dst.u32[0] = a.u32[0] % b.u32[0];
dst.u32[1] = a.u32[1] % b.u32[1];
dst.u32[2] = a.u32[2] % b.u32[2];
dst.u32[3] = a.u32[3] % b.u32[3];
dst.u32[4] = a.u32[4] % b.u32[4];
dst.u32[5] = a.u32[5] % b.u32[5];
dst.u32[6] = a.u32[6] % b.u32[6];
dst.u32[7] = a.u32[7] % b.u32[7];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>11/15</td><td>0.06(1/15.68)</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_u_w((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxmsub_q_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmsub_q_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmsub.q.h
Builtin: __builtin_lasx_mxmsub_q_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2536
```

### Description

Subtract modular integer lanes of `b` from `a` on 16 x u16 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i16[0] = signed_saturate(a.i16[0] - signed_saturate(q_format_shift(b.i16[0] * c.i16[0], 16 - 1), 16), 16);
dst.i16[1] = signed_saturate(a.i16[1] - signed_saturate(q_format_shift(b.i16[1] * c.i16[1], 16 - 1), 16), 16);
dst.i16[2] = signed_saturate(a.i16[2] - signed_saturate(q_format_shift(b.i16[2] * c.i16[2], 16 - 1), 16), 16);
dst.i16[3] = signed_saturate(a.i16[3] - signed_saturate(q_format_shift(b.i16[3] * c.i16[3], 16 - 1), 16), 16);
dst.i16[4] = signed_saturate(a.i16[4] - signed_saturate(q_format_shift(b.i16[4] * c.i16[4], 16 - 1), 16), 16);
dst.i16[5] = signed_saturate(a.i16[5] - signed_saturate(q_format_shift(b.i16[5] * c.i16[5], 16 - 1), 16), 16);
dst.i16[6] = signed_saturate(a.i16[6] - signed_saturate(q_format_shift(b.i16[6] * c.i16[6], 16 - 1), 16), 16);
dst.i16[7] = signed_saturate(a.i16[7] - signed_saturate(q_format_shift(b.i16[7] * c.i16[7], 16 - 1), 16), 16);
dst.i16[8] = signed_saturate(a.i16[8] - signed_saturate(q_format_shift(b.i16[8] * c.i16[8], 16 - 1), 16), 16);
dst.i16[9] = signed_saturate(a.i16[9] - signed_saturate(q_format_shift(b.i16[9] * c.i16[9], 16 - 1), 16), 16);
dst.i16[10] = signed_saturate(a.i16[10] - signed_saturate(q_format_shift(b.i16[10] * c.i16[10], 16 - 1), 16), 16);
dst.i16[11] = signed_saturate(a.i16[11] - signed_saturate(q_format_shift(b.i16[11] * c.i16[11], 16 - 1), 16), 16);
dst.i16[12] = signed_saturate(a.i16[12] - signed_saturate(q_format_shift(b.i16[12] * c.i16[12], 16 - 1), 16), 16);
dst.i16[13] = signed_saturate(a.i16[13] - signed_saturate(q_format_shift(b.i16[13] * c.i16[13], 16 - 1), 16), 16);
dst.i16[14] = signed_saturate(a.i16[14] - signed_saturate(q_format_shift(b.i16[14] * c.i16[14], 16 - 1), 16), 16);
dst.i16[15] = signed_saturate(a.i16[15] - signed_saturate(q_format_shift(b.i16[15] * c.i16[15], 16 - 1), 16), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.62</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmsub_q_h((v16i16)a, (v16i16)b, (v16i16)c);
```

## __m256i __lasx_mxmsub_q_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmsub_q_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmsub.q.w
Builtin: __builtin_lasx_mxmsub_q_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2543
```

### Description

Subtract modular integer lanes of `b` from `a` on 8 x u32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i32[0] = signed_saturate(a.i32[0] - signed_saturate(q_format_shift(b.i32[0] * c.i32[0], 32 - 1), 32), 32);
dst.i32[1] = signed_saturate(a.i32[1] - signed_saturate(q_format_shift(b.i32[1] * c.i32[1], 32 - 1), 32), 32);
dst.i32[2] = signed_saturate(a.i32[2] - signed_saturate(q_format_shift(b.i32[2] * c.i32[2], 32 - 1), 32), 32);
dst.i32[3] = signed_saturate(a.i32[3] - signed_saturate(q_format_shift(b.i32[3] * c.i32[3], 32 - 1), 32), 32);
dst.i32[4] = signed_saturate(a.i32[4] - signed_saturate(q_format_shift(b.i32[4] * c.i32[4], 32 - 1), 32), 32);
dst.i32[5] = signed_saturate(a.i32[5] - signed_saturate(q_format_shift(b.i32[5] * c.i32[5], 32 - 1), 32), 32);
dst.i32[6] = signed_saturate(a.i32[6] - signed_saturate(q_format_shift(b.i32[6] * c.i32[6], 32 - 1), 32), 32);
dst.i32[7] = signed_saturate(a.i32[7] - signed_saturate(q_format_shift(b.i32[7] * c.i32[7], 32 - 1), 32), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.62</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmsub_q_w((v8i32)a, (v8i32)b, (v8i32)c);
```

## __m256i __lasx_mxmsubr_q_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmsubr_q_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmsubr.q.h
Builtin: __builtin_lasx_mxmsubr_q_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2550
```

### Description

Subtract modular integer lanes of `b` from `a` on 16 x u16 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i16[0] = signed_saturate(a.i16[0] - signed_saturate(rounding_q_format_shift(b.i16[0] * c.i16[0], 16 - 1), 16), 16);
dst.i16[1] = signed_saturate(a.i16[1] - signed_saturate(rounding_q_format_shift(b.i16[1] * c.i16[1], 16 - 1), 16), 16);
dst.i16[2] = signed_saturate(a.i16[2] - signed_saturate(rounding_q_format_shift(b.i16[2] * c.i16[2], 16 - 1), 16), 16);
dst.i16[3] = signed_saturate(a.i16[3] - signed_saturate(rounding_q_format_shift(b.i16[3] * c.i16[3], 16 - 1), 16), 16);
dst.i16[4] = signed_saturate(a.i16[4] - signed_saturate(rounding_q_format_shift(b.i16[4] * c.i16[4], 16 - 1), 16), 16);
dst.i16[5] = signed_saturate(a.i16[5] - signed_saturate(rounding_q_format_shift(b.i16[5] * c.i16[5], 16 - 1), 16), 16);
dst.i16[6] = signed_saturate(a.i16[6] - signed_saturate(rounding_q_format_shift(b.i16[6] * c.i16[6], 16 - 1), 16), 16);
dst.i16[7] = signed_saturate(a.i16[7] - signed_saturate(rounding_q_format_shift(b.i16[7] * c.i16[7], 16 - 1), 16), 16);
dst.i16[8] = signed_saturate(a.i16[8] - signed_saturate(rounding_q_format_shift(b.i16[8] * c.i16[8], 16 - 1), 16), 16);
dst.i16[9] = signed_saturate(a.i16[9] - signed_saturate(rounding_q_format_shift(b.i16[9] * c.i16[9], 16 - 1), 16), 16);
dst.i16[10] = signed_saturate(a.i16[10] - signed_saturate(rounding_q_format_shift(b.i16[10] * c.i16[10], 16 - 1), 16), 16);
dst.i16[11] = signed_saturate(a.i16[11] - signed_saturate(rounding_q_format_shift(b.i16[11] * c.i16[11], 16 - 1), 16), 16);
dst.i16[12] = signed_saturate(a.i16[12] - signed_saturate(rounding_q_format_shift(b.i16[12] * c.i16[12], 16 - 1), 16), 16);
dst.i16[13] = signed_saturate(a.i16[13] - signed_saturate(rounding_q_format_shift(b.i16[13] * c.i16[13], 16 - 1), 16), 16);
dst.i16[14] = signed_saturate(a.i16[14] - signed_saturate(rounding_q_format_shift(b.i16[14] * c.i16[14], 16 - 1), 16), 16);
dst.i16[15] = signed_saturate(a.i16[15] - signed_saturate(rounding_q_format_shift(b.i16[15] * c.i16[15], 16 - 1), 16), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.62</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmsubr_q_h((v16i16)a, (v16i16)b, (v16i16)c);
```

## __m256i __lasx_mxmsubr_q_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmsubr_q_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmsubr.q.w
Builtin: __builtin_lasx_mxmsubr_q_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2557
```

### Description

Subtract modular integer lanes of `b` from `a` on 8 x u32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i32[0] = signed_saturate(a.i32[0] - signed_saturate(rounding_q_format_shift(b.i32[0] * c.i32[0], 32 - 1), 32), 32);
dst.i32[1] = signed_saturate(a.i32[1] - signed_saturate(rounding_q_format_shift(b.i32[1] * c.i32[1], 32 - 1), 32), 32);
dst.i32[2] = signed_saturate(a.i32[2] - signed_saturate(rounding_q_format_shift(b.i32[2] * c.i32[2], 32 - 1), 32), 32);
dst.i32[3] = signed_saturate(a.i32[3] - signed_saturate(rounding_q_format_shift(b.i32[3] * c.i32[3], 32 - 1), 32), 32);
dst.i32[4] = signed_saturate(a.i32[4] - signed_saturate(rounding_q_format_shift(b.i32[4] * c.i32[4], 32 - 1), 32), 32);
dst.i32[5] = signed_saturate(a.i32[5] - signed_saturate(rounding_q_format_shift(b.i32[5] * c.i32[5], 32 - 1), 32), 32);
dst.i32[6] = signed_saturate(a.i32[6] - signed_saturate(rounding_q_format_shift(b.i32[6] * c.i32[6], 32 - 1), 32), 32);
dst.i32[7] = signed_saturate(a.i32[7] - signed_saturate(rounding_q_format_shift(b.i32[7] * c.i32[7], 32 - 1), 32), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.62</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmsubr_q_w((v8i32)a, (v8i32)b, (v8i32)c);
```

## __m256i __lasx_mxmsubv_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmsubv_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmsubv.b
Builtin: __builtin_lasx_mxmsubv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1258
```

### Description

Subtract modular integer lanes of `b` from `a` on 32 x u8 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u8[0] = a.u8[0] - b.u8[0] * c.u8[0];
dst.u8[1] = a.u8[1] - b.u8[1] * c.u8[1];
dst.u8[2] = a.u8[2] - b.u8[2] * c.u8[2];
dst.u8[3] = a.u8[3] - b.u8[3] * c.u8[3];
dst.u8[4] = a.u8[4] - b.u8[4] * c.u8[4];
dst.u8[5] = a.u8[5] - b.u8[5] * c.u8[5];
dst.u8[6] = a.u8[6] - b.u8[6] * c.u8[6];
dst.u8[7] = a.u8[7] - b.u8[7] * c.u8[7];
dst.u8[8] = a.u8[8] - b.u8[8] * c.u8[8];
dst.u8[9] = a.u8[9] - b.u8[9] * c.u8[9];
dst.u8[10] = a.u8[10] - b.u8[10] * c.u8[10];
dst.u8[11] = a.u8[11] - b.u8[11] * c.u8[11];
dst.u8[12] = a.u8[12] - b.u8[12] * c.u8[12];
dst.u8[13] = a.u8[13] - b.u8[13] * c.u8[13];
dst.u8[14] = a.u8[14] - b.u8[14] * c.u8[14];
dst.u8[15] = a.u8[15] - b.u8[15] * c.u8[15];
dst.u8[16] = a.u8[16] - b.u8[16] * c.u8[16];
dst.u8[17] = a.u8[17] - b.u8[17] * c.u8[17];
dst.u8[18] = a.u8[18] - b.u8[18] * c.u8[18];
dst.u8[19] = a.u8[19] - b.u8[19] * c.u8[19];
dst.u8[20] = a.u8[20] - b.u8[20] * c.u8[20];
dst.u8[21] = a.u8[21] - b.u8[21] * c.u8[21];
dst.u8[22] = a.u8[22] - b.u8[22] * c.u8[22];
dst.u8[23] = a.u8[23] - b.u8[23] * c.u8[23];
dst.u8[24] = a.u8[24] - b.u8[24] * c.u8[24];
dst.u8[25] = a.u8[25] - b.u8[25] * c.u8[25];
dst.u8[26] = a.u8[26] - b.u8[26] * c.u8[26];
dst.u8[27] = a.u8[27] - b.u8[27] * c.u8[27];
dst.u8[28] = a.u8[28] - b.u8[28] * c.u8[28];
dst.u8[29] = a.u8[29] - b.u8[29] * c.u8[29];
dst.u8[30] = a.u8[30] - b.u8[30] * c.u8[30];
dst.u8[31] = a.u8[31] - b.u8[31] * c.u8[31];
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
return (__m256i)__builtin_lasx_mxmsubv_b((v32i8)a, (v32i8)b, (v32i8)c);
```

## __m256i __lasx_mxmsubv_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmsubv_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmsubv.d
Builtin: __builtin_lasx_mxmsubv_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1279
```

### Description

Subtract modular integer lanes of `b` from `a` on 4 x u64 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u64[0] = a.u64[0] - b.u64[0] * c.u64[0];
dst.u64[1] = a.u64[1] - b.u64[1] * c.u64[1];
dst.u64[2] = a.u64[2] - b.u64[2] * c.u64[2];
dst.u64[3] = a.u64[3] - b.u64[3] * c.u64[3];
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
return (__m256i)__builtin_lasx_mxmsubv_d((v4i64)a, (v4i64)b, (v4i64)c);
```

## __m256i __lasx_mxmsubv_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmsubv_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmsubv.h
Builtin: __builtin_lasx_mxmsubv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1265
```

### Description

Subtract modular integer lanes of `b` from `a` on 16 x u16 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u16[0] = a.u16[0] - b.u16[0] * c.u16[0];
dst.u16[1] = a.u16[1] - b.u16[1] * c.u16[1];
dst.u16[2] = a.u16[2] - b.u16[2] * c.u16[2];
dst.u16[3] = a.u16[3] - b.u16[3] * c.u16[3];
dst.u16[4] = a.u16[4] - b.u16[4] * c.u16[4];
dst.u16[5] = a.u16[5] - b.u16[5] * c.u16[5];
dst.u16[6] = a.u16[6] - b.u16[6] * c.u16[6];
dst.u16[7] = a.u16[7] - b.u16[7] * c.u16[7];
dst.u16[8] = a.u16[8] - b.u16[8] * c.u16[8];
dst.u16[9] = a.u16[9] - b.u16[9] * c.u16[9];
dst.u16[10] = a.u16[10] - b.u16[10] * c.u16[10];
dst.u16[11] = a.u16[11] - b.u16[11] * c.u16[11];
dst.u16[12] = a.u16[12] - b.u16[12] * c.u16[12];
dst.u16[13] = a.u16[13] - b.u16[13] * c.u16[13];
dst.u16[14] = a.u16[14] - b.u16[14] * c.u16[14];
dst.u16[15] = a.u16[15] - b.u16[15] * c.u16[15];
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
return (__m256i)__builtin_lasx_mxmsubv_h((v16i16)a, (v16i16)b, (v16i16)c);
```

## __m256i __lasx_mxmsubv_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxmsubv_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxmsubv.w
Builtin: __builtin_lasx_mxmsubv_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1272
```

### Description

Subtract modular integer lanes of `b` from `a` on 8 x u32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u32[0] = a.u32[0] - b.u32[0] * c.u32[0];
dst.u32[1] = a.u32[1] - b.u32[1] * c.u32[1];
dst.u32[2] = a.u32[2] - b.u32[2] * c.u32[2];
dst.u32[3] = a.u32[3] - b.u32[3] * c.u32[3];
dst.u32[4] = a.u32[4] - b.u32[4] * c.u32[4];
dst.u32[5] = a.u32[5] - b.u32[5] * c.u32[5];
dst.u32[6] = a.u32[6] - b.u32[6] * c.u32[6];
dst.u32[7] = a.u32[7] - b.u32[7] * c.u32[7];
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
return (__m256i)__builtin_lasx_mxmsubv_w((v8i32)a, (v8i32)b, (v8i32)c);
```

## __m256i __lasx_mxmuhv_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmuhv_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmuhv.s.d
Builtin: __builtin_lasx_mxmuhv_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4833
```

### Description

Multiply signed integer lanes and keep the upper half of each product.

### Operation

```c
dst.i64[0] = upper_64_bits(a.i64[0] * b.i64[0]);
dst.i64[1] = upper_64_bits(a.i64[1] * b.i64[1]);
dst.i64[2] = upper_64_bits(a.i64[2] * b.i64[2]);
dst.i64[3] = upper_64_bits(a.i64[3] * b.i64[3]);
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
return (__m256i)__builtin_lasx_mxmuhv_s_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxmuhv_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmuhv_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmuhv.u.d
Builtin: __builtin_lasx_mxmuhv_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4854
```

### Description

Multiply unsigned integer lanes and keep the upper half of each product.

### Operation

```c
dst.u64[0] = upper_64_bits(a.u64[0] * b.u64[0]);
dst.u64[1] = upper_64_bits(a.u64[1] * b.u64[1]);
dst.u64[2] = upper_64_bits(a.u64[2] * b.u64[2]);
dst.u64[3] = upper_64_bits(a.u64[3] * b.u64[3]);
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
return (__m256i)__builtin_lasx_mxmuhv_u_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxmuhv_us_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmuhv_us_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmuhv.us.d
Builtin: __builtin_lasx_mxmuhv_us_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4875
```

### Description

Multiply unsigned/signed mixed integer lanes and keep the upper half of each product.

### Operation

```c
dst.u64[0] = upper_64_bits(a.u64[0] * b.i64[0]);
dst.u64[1] = upper_64_bits(a.u64[1] * b.i64[1]);
dst.u64[2] = upper_64_bits(a.u64[2] * b.i64[2]);
dst.u64[3] = upper_64_bits(a.u64[3] * b.i64[3]);
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
return (__m256i)__builtin_lasx_mxmuhv_us_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxmul_q_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmul_q_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmul.q.h
Builtin: __builtin_lasx_mxmul_q_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2480
```

### Description

Multiply modular integer lanes of `a` and `b` on 16 x u16 lanes.

### Operation

```c
dst.i16[0] = signed_saturate(q_format_shift(a.i16[0] * b.i16[0], 16 - 1), 16);
dst.i16[1] = signed_saturate(q_format_shift(a.i16[1] * b.i16[1], 16 - 1), 16);
dst.i16[2] = signed_saturate(q_format_shift(a.i16[2] * b.i16[2], 16 - 1), 16);
dst.i16[3] = signed_saturate(q_format_shift(a.i16[3] * b.i16[3], 16 - 1), 16);
dst.i16[4] = signed_saturate(q_format_shift(a.i16[4] * b.i16[4], 16 - 1), 16);
dst.i16[5] = signed_saturate(q_format_shift(a.i16[5] * b.i16[5], 16 - 1), 16);
dst.i16[6] = signed_saturate(q_format_shift(a.i16[6] * b.i16[6], 16 - 1), 16);
dst.i16[7] = signed_saturate(q_format_shift(a.i16[7] * b.i16[7], 16 - 1), 16);
dst.i16[8] = signed_saturate(q_format_shift(a.i16[8] * b.i16[8], 16 - 1), 16);
dst.i16[9] = signed_saturate(q_format_shift(a.i16[9] * b.i16[9], 16 - 1), 16);
dst.i16[10] = signed_saturate(q_format_shift(a.i16[10] * b.i16[10], 16 - 1), 16);
dst.i16[11] = signed_saturate(q_format_shift(a.i16[11] * b.i16[11], 16 - 1), 16);
dst.i16[12] = signed_saturate(q_format_shift(a.i16[12] * b.i16[12], 16 - 1), 16);
dst.i16[13] = signed_saturate(q_format_shift(a.i16[13] * b.i16[13], 16 - 1), 16);
dst.i16[14] = signed_saturate(q_format_shift(a.i16[14] * b.i16[14], 16 - 1), 16);
dst.i16[15] = signed_saturate(q_format_shift(a.i16[15] * b.i16[15], 16 - 1), 16);
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
return (__m256i)__builtin_lasx_mxmul_q_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxmul_q_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmul_q_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmul.q.w
Builtin: __builtin_lasx_mxmul_q_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2487
```

### Description

Multiply modular integer lanes of `a` and `b` on 8 x u32 lanes.

### Operation

```c
dst.i32[0] = signed_saturate(q_format_shift(a.i32[0] * b.i32[0], 32 - 1), 32);
dst.i32[1] = signed_saturate(q_format_shift(a.i32[1] * b.i32[1], 32 - 1), 32);
dst.i32[2] = signed_saturate(q_format_shift(a.i32[2] * b.i32[2], 32 - 1), 32);
dst.i32[3] = signed_saturate(q_format_shift(a.i32[3] * b.i32[3], 32 - 1), 32);
dst.i32[4] = signed_saturate(q_format_shift(a.i32[4] * b.i32[4], 32 - 1), 32);
dst.i32[5] = signed_saturate(q_format_shift(a.i32[5] * b.i32[5], 32 - 1), 32);
dst.i32[6] = signed_saturate(q_format_shift(a.i32[6] * b.i32[6], 32 - 1), 32);
dst.i32[7] = signed_saturate(q_format_shift(a.i32[7] * b.i32[7], 32 - 1), 32);
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
return (__m256i)__builtin_lasx_mxmul_q_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxmulr_q_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmulr_q_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmulr.q.h
Builtin: __builtin_lasx_mxmulr_q_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2494
```

### Description

Multiply modular integer lanes of `a` and `b` on 16 x u16 lanes.

### Operation

```c
dst.i16[0] = signed_saturate(rounding_q_format_shift(a.i16[0] * b.i16[0], 16 - 1), 16);
dst.i16[1] = signed_saturate(rounding_q_format_shift(a.i16[1] * b.i16[1], 16 - 1), 16);
dst.i16[2] = signed_saturate(rounding_q_format_shift(a.i16[2] * b.i16[2], 16 - 1), 16);
dst.i16[3] = signed_saturate(rounding_q_format_shift(a.i16[3] * b.i16[3], 16 - 1), 16);
dst.i16[4] = signed_saturate(rounding_q_format_shift(a.i16[4] * b.i16[4], 16 - 1), 16);
dst.i16[5] = signed_saturate(rounding_q_format_shift(a.i16[5] * b.i16[5], 16 - 1), 16);
dst.i16[6] = signed_saturate(rounding_q_format_shift(a.i16[6] * b.i16[6], 16 - 1), 16);
dst.i16[7] = signed_saturate(rounding_q_format_shift(a.i16[7] * b.i16[7], 16 - 1), 16);
dst.i16[8] = signed_saturate(rounding_q_format_shift(a.i16[8] * b.i16[8], 16 - 1), 16);
dst.i16[9] = signed_saturate(rounding_q_format_shift(a.i16[9] * b.i16[9], 16 - 1), 16);
dst.i16[10] = signed_saturate(rounding_q_format_shift(a.i16[10] * b.i16[10], 16 - 1), 16);
dst.i16[11] = signed_saturate(rounding_q_format_shift(a.i16[11] * b.i16[11], 16 - 1), 16);
dst.i16[12] = signed_saturate(rounding_q_format_shift(a.i16[12] * b.i16[12], 16 - 1), 16);
dst.i16[13] = signed_saturate(rounding_q_format_shift(a.i16[13] * b.i16[13], 16 - 1), 16);
dst.i16[14] = signed_saturate(rounding_q_format_shift(a.i16[14] * b.i16[14], 16 - 1), 16);
dst.i16[15] = signed_saturate(rounding_q_format_shift(a.i16[15] * b.i16[15], 16 - 1), 16);
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
return (__m256i)__builtin_lasx_mxmulr_q_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxmulr_q_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmulr_q_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmulr.q.w
Builtin: __builtin_lasx_mxmulr_q_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2501
```

### Description

Multiply modular integer lanes of `a` and `b` on 8 x u32 lanes.

### Operation

```c
dst.i32[0] = signed_saturate(rounding_q_format_shift(a.i32[0] * b.i32[0], 32 - 1), 32);
dst.i32[1] = signed_saturate(rounding_q_format_shift(a.i32[1] * b.i32[1], 32 - 1), 32);
dst.i32[2] = signed_saturate(rounding_q_format_shift(a.i32[2] * b.i32[2], 32 - 1), 32);
dst.i32[3] = signed_saturate(rounding_q_format_shift(a.i32[3] * b.i32[3], 32 - 1), 32);
dst.i32[4] = signed_saturate(rounding_q_format_shift(a.i32[4] * b.i32[4], 32 - 1), 32);
dst.i32[5] = signed_saturate(rounding_q_format_shift(a.i32[5] * b.i32[5], 32 - 1), 32);
dst.i32[6] = signed_saturate(rounding_q_format_shift(a.i32[6] * b.i32[6], 32 - 1), 32);
dst.i32[7] = signed_saturate(rounding_q_format_shift(a.i32[7] * b.i32[7], 32 - 1), 32);
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
return (__m256i)__builtin_lasx_mxmulr_q_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxmulv_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmulv_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmulv.b
Builtin: __builtin_lasx_mxmulv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1202
```

### Description

Multiply modular integer lanes of `a` and `b` on 32 x u8 lanes.

### Operation

```c
dst.u8[0] = a.i8[0] * b.i8[0];
dst.u8[1] = a.i8[1] * b.i8[1];
dst.u8[2] = a.i8[2] * b.i8[2];
dst.u8[3] = a.i8[3] * b.i8[3];
dst.u8[4] = a.i8[4] * b.i8[4];
dst.u8[5] = a.i8[5] * b.i8[5];
dst.u8[6] = a.i8[6] * b.i8[6];
dst.u8[7] = a.i8[7] * b.i8[7];
dst.u8[8] = a.i8[8] * b.i8[8];
dst.u8[9] = a.i8[9] * b.i8[9];
dst.u8[10] = a.i8[10] * b.i8[10];
dst.u8[11] = a.i8[11] * b.i8[11];
dst.u8[12] = a.i8[12] * b.i8[12];
dst.u8[13] = a.i8[13] * b.i8[13];
dst.u8[14] = a.i8[14] * b.i8[14];
dst.u8[15] = a.i8[15] * b.i8[15];
dst.u8[16] = a.i8[16] * b.i8[16];
dst.u8[17] = a.i8[17] * b.i8[17];
dst.u8[18] = a.i8[18] * b.i8[18];
dst.u8[19] = a.i8[19] * b.i8[19];
dst.u8[20] = a.i8[20] * b.i8[20];
dst.u8[21] = a.i8[21] * b.i8[21];
dst.u8[22] = a.i8[22] * b.i8[22];
dst.u8[23] = a.i8[23] * b.i8[23];
dst.u8[24] = a.i8[24] * b.i8[24];
dst.u8[25] = a.i8[25] * b.i8[25];
dst.u8[26] = a.i8[26] * b.i8[26];
dst.u8[27] = a.i8[27] * b.i8[27];
dst.u8[28] = a.i8[28] * b.i8[28];
dst.u8[29] = a.i8[29] * b.i8[29];
dst.u8[30] = a.i8[30] * b.i8[30];
dst.u8[31] = a.i8[31] * b.i8[31];
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
return (__m256i)__builtin_lasx_mxmulv_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxmulv_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmulv_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmulv.d
Builtin: __builtin_lasx_mxmulv_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1223
```

### Description

Multiply modular integer lanes of `a` and `b` on 4 x u64 lanes.

### Operation

```c
dst.u64[0] = a.i64[0] * b.i64[0];
dst.u64[1] = a.i64[1] * b.i64[1];
dst.u64[2] = a.i64[2] * b.i64[2];
dst.u64[3] = a.i64[3] * b.i64[3];
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
return (__m256i)__builtin_lasx_mxmulv_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxmulv_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmulv_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmulv.h
Builtin: __builtin_lasx_mxmulv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1209
```

### Description

Multiply modular integer lanes of `a` and `b` on 16 x u16 lanes.

### Operation

```c
dst.u16[0] = a.i16[0] * b.i16[0];
dst.u16[1] = a.i16[1] * b.i16[1];
dst.u16[2] = a.i16[2] * b.i16[2];
dst.u16[3] = a.i16[3] * b.i16[3];
dst.u16[4] = a.i16[4] * b.i16[4];
dst.u16[5] = a.i16[5] * b.i16[5];
dst.u16[6] = a.i16[6] * b.i16[6];
dst.u16[7] = a.i16[7] * b.i16[7];
dst.u16[8] = a.i16[8] * b.i16[8];
dst.u16[9] = a.i16[9] * b.i16[9];
dst.u16[10] = a.i16[10] * b.i16[10];
dst.u16[11] = a.i16[11] * b.i16[11];
dst.u16[12] = a.i16[12] * b.i16[12];
dst.u16[13] = a.i16[13] * b.i16[13];
dst.u16[14] = a.i16[14] * b.i16[14];
dst.u16[15] = a.i16[15] * b.i16[15];
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
return (__m256i)__builtin_lasx_mxmulv_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxmulv_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmulv_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmulv.w
Builtin: __builtin_lasx_mxmulv_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1216
```

### Description

Multiply modular integer lanes of `a` and `b` on 8 x u32 lanes.

### Operation

```c
dst.u32[0] = a.i32[0] * b.i32[0];
dst.u32[1] = a.i32[1] * b.i32[1];
dst.u32[2] = a.i32[2] * b.i32[2];
dst.u32[3] = a.i32[3] * b.i32[3];
dst.u32[4] = a.i32[4] * b.i32[4];
dst.u32[5] = a.i32[5] * b.i32[5];
dst.u32[6] = a.i32[6] * b.i32[6];
dst.u32[7] = a.i32[7] * b.i32[7];
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
return (__m256i)__builtin_lasx_mxmulv_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxsad_adj2_s_acc_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_s_acc_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.s.acc.w2x.b
Builtin: __builtin_lasx_mxsad_adj2_s_acc_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5021
```

### Description

Compute sums of absolute differences for adjacent signed lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.i16[0] = a.i16[0] + abs(widen(b.i8[0]) - widen(c.i8[0])) + abs(widen(b.i8[1]) - widen(c.i8[1]));
dst.i16[1] = a.i16[1] + abs(widen(b.i8[2]) - widen(c.i8[2])) + abs(widen(b.i8[3]) - widen(c.i8[3]));
dst.i16[2] = a.i16[2] + abs(widen(b.i8[4]) - widen(c.i8[4])) + abs(widen(b.i8[5]) - widen(c.i8[5]));
dst.i16[3] = a.i16[3] + abs(widen(b.i8[6]) - widen(c.i8[6])) + abs(widen(b.i8[7]) - widen(c.i8[7]));
dst.i16[4] = a.i16[4] + abs(widen(b.i8[8]) - widen(c.i8[8])) + abs(widen(b.i8[9]) - widen(c.i8[9]));
dst.i16[5] = a.i16[5] + abs(widen(b.i8[10]) - widen(c.i8[10])) + abs(widen(b.i8[11]) - widen(c.i8[11]));
dst.i16[6] = a.i16[6] + abs(widen(b.i8[12]) - widen(c.i8[12])) + abs(widen(b.i8[13]) - widen(c.i8[13]));
dst.i16[7] = a.i16[7] + abs(widen(b.i8[14]) - widen(c.i8[14])) + abs(widen(b.i8[15]) - widen(c.i8[15]));
dst.i16[8] = a.i16[8] + abs(widen(b.i8[16]) - widen(c.i8[16])) + abs(widen(b.i8[17]) - widen(c.i8[17]));
dst.i16[9] = a.i16[9] + abs(widen(b.i8[18]) - widen(c.i8[18])) + abs(widen(b.i8[19]) - widen(c.i8[19]));
dst.i16[10] = a.i16[10] + abs(widen(b.i8[20]) - widen(c.i8[20])) + abs(widen(b.i8[21]) - widen(c.i8[21]));
dst.i16[11] = a.i16[11] + abs(widen(b.i8[22]) - widen(c.i8[22])) + abs(widen(b.i8[23]) - widen(c.i8[23]));
dst.i16[12] = a.i16[12] + abs(widen(b.i8[24]) - widen(c.i8[24])) + abs(widen(b.i8[25]) - widen(c.i8[25]));
dst.i16[13] = a.i16[13] + abs(widen(b.i8[26]) - widen(c.i8[26])) + abs(widen(b.i8[27]) - widen(c.i8[27]));
dst.i16[14] = a.i16[14] + abs(widen(b.i8[28]) - widen(c.i8[28])) + abs(widen(b.i8[29]) - widen(c.i8[29]));
dst.i16[15] = a.i16[15] + abs(widen(b.i8[30]) - widen(c.i8[30])) + abs(widen(b.i8[31]) - widen(c.i8[31]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_s_acc_w2x_b((v16i16) a, (v32i8) b, (v32i8) c);
```

## __m256i __lasx_mxsad_adj2_s_acc_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_s_acc_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.s.acc.w2x.h
Builtin: __builtin_lasx_mxsad_adj2_s_acc_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5041
```

### Description

Compute sums of absolute differences for adjacent signed lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.i32[0] = a.i32[0] + abs(widen(b.i16[0]) - widen(c.i16[0])) + abs(widen(b.i16[1]) - widen(c.i16[1]));
dst.i32[1] = a.i32[1] + abs(widen(b.i16[2]) - widen(c.i16[2])) + abs(widen(b.i16[3]) - widen(c.i16[3]));
dst.i32[2] = a.i32[2] + abs(widen(b.i16[4]) - widen(c.i16[4])) + abs(widen(b.i16[5]) - widen(c.i16[5]));
dst.i32[3] = a.i32[3] + abs(widen(b.i16[6]) - widen(c.i16[6])) + abs(widen(b.i16[7]) - widen(c.i16[7]));
dst.i32[4] = a.i32[4] + abs(widen(b.i16[8]) - widen(c.i16[8])) + abs(widen(b.i16[9]) - widen(c.i16[9]));
dst.i32[5] = a.i32[5] + abs(widen(b.i16[10]) - widen(c.i16[10])) + abs(widen(b.i16[11]) - widen(c.i16[11]));
dst.i32[6] = a.i32[6] + abs(widen(b.i16[12]) - widen(c.i16[12])) + abs(widen(b.i16[13]) - widen(c.i16[13]));
dst.i32[7] = a.i32[7] + abs(widen(b.i16[14]) - widen(c.i16[14])) + abs(widen(b.i16[15]) - widen(c.i16[15]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_s_acc_w2x_h((v8i32) a, (v16i16) b, (v16i16) c);
```

## __m256i __lasx_mxsad_adj2_s_acc_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_s_acc_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.s.acc.w2x.w
Builtin: __builtin_lasx_mxsad_adj2_s_acc_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5061
```

### Description

Compute sums of absolute differences for adjacent signed lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.i64[0] = a.i64[0] + abs(widen(b.i32[0]) - widen(c.i32[0])) + abs(widen(b.i32[1]) - widen(c.i32[1]));
dst.i64[1] = a.i64[1] + abs(widen(b.i32[2]) - widen(c.i32[2])) + abs(widen(b.i32[3]) - widen(c.i32[3]));
dst.i64[2] = a.i64[2] + abs(widen(b.i32[4]) - widen(c.i32[4])) + abs(widen(b.i32[5]) - widen(c.i32[5]));
dst.i64[3] = a.i64[3] + abs(widen(b.i32[6]) - widen(c.i32[6])) + abs(widen(b.i32[7]) - widen(c.i32[7]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_s_acc_w2x_w((v4i64) a, (v8i32) b, (v8i32) c);
```

## __m256i __lasx_mxsad_adj2_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.s.w2x.b
Builtin: __builtin_lasx_mxsad_adj2_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4896
```

### Description

Compute sums of absolute differences for adjacent signed lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.i16[0] = abs(widen(a.i8[0]) - widen(b.i8[0])) + abs(widen(a.i8[1]) - widen(b.i8[1]));
dst.i16[1] = abs(widen(a.i8[2]) - widen(b.i8[2])) + abs(widen(a.i8[3]) - widen(b.i8[3]));
dst.i16[2] = abs(widen(a.i8[4]) - widen(b.i8[4])) + abs(widen(a.i8[5]) - widen(b.i8[5]));
dst.i16[3] = abs(widen(a.i8[6]) - widen(b.i8[6])) + abs(widen(a.i8[7]) - widen(b.i8[7]));
dst.i16[4] = abs(widen(a.i8[8]) - widen(b.i8[8])) + abs(widen(a.i8[9]) - widen(b.i8[9]));
dst.i16[5] = abs(widen(a.i8[10]) - widen(b.i8[10])) + abs(widen(a.i8[11]) - widen(b.i8[11]));
dst.i16[6] = abs(widen(a.i8[12]) - widen(b.i8[12])) + abs(widen(a.i8[13]) - widen(b.i8[13]));
dst.i16[7] = abs(widen(a.i8[14]) - widen(b.i8[14])) + abs(widen(a.i8[15]) - widen(b.i8[15]));
dst.i16[8] = abs(widen(a.i8[16]) - widen(b.i8[16])) + abs(widen(a.i8[17]) - widen(b.i8[17]));
dst.i16[9] = abs(widen(a.i8[18]) - widen(b.i8[18])) + abs(widen(a.i8[19]) - widen(b.i8[19]));
dst.i16[10] = abs(widen(a.i8[20]) - widen(b.i8[20])) + abs(widen(a.i8[21]) - widen(b.i8[21]));
dst.i16[11] = abs(widen(a.i8[22]) - widen(b.i8[22])) + abs(widen(a.i8[23]) - widen(b.i8[23]));
dst.i16[12] = abs(widen(a.i8[24]) - widen(b.i8[24])) + abs(widen(a.i8[25]) - widen(b.i8[25]));
dst.i16[13] = abs(widen(a.i8[26]) - widen(b.i8[26])) + abs(widen(a.i8[27]) - widen(b.i8[27]));
dst.i16[14] = abs(widen(a.i8[28]) - widen(b.i8[28])) + abs(widen(a.i8[29]) - widen(b.i8[29]));
dst.i16[15] = abs(widen(a.i8[30]) - widen(b.i8[30])) + abs(widen(a.i8[31]) - widen(b.i8[31]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxsad_adj2_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.s.w2x.h
Builtin: __builtin_lasx_mxsad_adj2_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4917
```

### Description

Compute sums of absolute differences for adjacent signed lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.i32[0] = abs(widen(a.i16[0]) - widen(b.i16[0])) + abs(widen(a.i16[1]) - widen(b.i16[1]));
dst.i32[1] = abs(widen(a.i16[2]) - widen(b.i16[2])) + abs(widen(a.i16[3]) - widen(b.i16[3]));
dst.i32[2] = abs(widen(a.i16[4]) - widen(b.i16[4])) + abs(widen(a.i16[5]) - widen(b.i16[5]));
dst.i32[3] = abs(widen(a.i16[6]) - widen(b.i16[6])) + abs(widen(a.i16[7]) - widen(b.i16[7]));
dst.i32[4] = abs(widen(a.i16[8]) - widen(b.i16[8])) + abs(widen(a.i16[9]) - widen(b.i16[9]));
dst.i32[5] = abs(widen(a.i16[10]) - widen(b.i16[10])) + abs(widen(a.i16[11]) - widen(b.i16[11]));
dst.i32[6] = abs(widen(a.i16[12]) - widen(b.i16[12])) + abs(widen(a.i16[13]) - widen(b.i16[13]));
dst.i32[7] = abs(widen(a.i16[14]) - widen(b.i16[14])) + abs(widen(a.i16[15]) - widen(b.i16[15]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxsad_adj2_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.s.w2x.w
Builtin: __builtin_lasx_mxsad_adj2_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4938
```

### Description

Compute sums of absolute differences for adjacent signed lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.i64[0] = abs(widen(a.i32[0]) - widen(b.i32[0])) + abs(widen(a.i32[1]) - widen(b.i32[1]));
dst.i64[1] = abs(widen(a.i32[2]) - widen(b.i32[2])) + abs(widen(a.i32[3]) - widen(b.i32[3]));
dst.i64[2] = abs(widen(a.i32[4]) - widen(b.i32[4])) + abs(widen(a.i32[5]) - widen(b.i32[5]));
dst.i64[3] = abs(widen(a.i32[6]) - widen(b.i32[6])) + abs(widen(a.i32[7]) - widen(b.i32[7]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxsad_adj2_u_acc_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_u_acc_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.u.acc.w2x.b
Builtin: __builtin_lasx_mxsad_adj2_u_acc_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5081
```

### Description

Compute sums of absolute differences for adjacent unsigned lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.u16[0] = a.u16[0] + abs(widen(b.u8[0]) - widen(c.u8[0])) + abs(widen(b.u8[1]) - widen(c.u8[1]));
dst.u16[1] = a.u16[1] + abs(widen(b.u8[2]) - widen(c.u8[2])) + abs(widen(b.u8[3]) - widen(c.u8[3]));
dst.u16[2] = a.u16[2] + abs(widen(b.u8[4]) - widen(c.u8[4])) + abs(widen(b.u8[5]) - widen(c.u8[5]));
dst.u16[3] = a.u16[3] + abs(widen(b.u8[6]) - widen(c.u8[6])) + abs(widen(b.u8[7]) - widen(c.u8[7]));
dst.u16[4] = a.u16[4] + abs(widen(b.u8[8]) - widen(c.u8[8])) + abs(widen(b.u8[9]) - widen(c.u8[9]));
dst.u16[5] = a.u16[5] + abs(widen(b.u8[10]) - widen(c.u8[10])) + abs(widen(b.u8[11]) - widen(c.u8[11]));
dst.u16[6] = a.u16[6] + abs(widen(b.u8[12]) - widen(c.u8[12])) + abs(widen(b.u8[13]) - widen(c.u8[13]));
dst.u16[7] = a.u16[7] + abs(widen(b.u8[14]) - widen(c.u8[14])) + abs(widen(b.u8[15]) - widen(c.u8[15]));
dst.u16[8] = a.u16[8] + abs(widen(b.u8[16]) - widen(c.u8[16])) + abs(widen(b.u8[17]) - widen(c.u8[17]));
dst.u16[9] = a.u16[9] + abs(widen(b.u8[18]) - widen(c.u8[18])) + abs(widen(b.u8[19]) - widen(c.u8[19]));
dst.u16[10] = a.u16[10] + abs(widen(b.u8[20]) - widen(c.u8[20])) + abs(widen(b.u8[21]) - widen(c.u8[21]));
dst.u16[11] = a.u16[11] + abs(widen(b.u8[22]) - widen(c.u8[22])) + abs(widen(b.u8[23]) - widen(c.u8[23]));
dst.u16[12] = a.u16[12] + abs(widen(b.u8[24]) - widen(c.u8[24])) + abs(widen(b.u8[25]) - widen(c.u8[25]));
dst.u16[13] = a.u16[13] + abs(widen(b.u8[26]) - widen(c.u8[26])) + abs(widen(b.u8[27]) - widen(c.u8[27]));
dst.u16[14] = a.u16[14] + abs(widen(b.u8[28]) - widen(c.u8[28])) + abs(widen(b.u8[29]) - widen(c.u8[29]));
dst.u16[15] = a.u16[15] + abs(widen(b.u8[30]) - widen(c.u8[30])) + abs(widen(b.u8[31]) - widen(c.u8[31]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_u_acc_w2x_b((v16u16) a, (v32u8) b, (v32u8) c);
```

## __m256i __lasx_mxsad_adj2_u_acc_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_u_acc_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.u.acc.w2x.h
Builtin: __builtin_lasx_mxsad_adj2_u_acc_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5101
```

### Description

Compute sums of absolute differences for adjacent unsigned lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.u32[0] = a.u32[0] + abs(widen(b.u16[0]) - widen(c.u16[0])) + abs(widen(b.u16[1]) - widen(c.u16[1]));
dst.u32[1] = a.u32[1] + abs(widen(b.u16[2]) - widen(c.u16[2])) + abs(widen(b.u16[3]) - widen(c.u16[3]));
dst.u32[2] = a.u32[2] + abs(widen(b.u16[4]) - widen(c.u16[4])) + abs(widen(b.u16[5]) - widen(c.u16[5]));
dst.u32[3] = a.u32[3] + abs(widen(b.u16[6]) - widen(c.u16[6])) + abs(widen(b.u16[7]) - widen(c.u16[7]));
dst.u32[4] = a.u32[4] + abs(widen(b.u16[8]) - widen(c.u16[8])) + abs(widen(b.u16[9]) - widen(c.u16[9]));
dst.u32[5] = a.u32[5] + abs(widen(b.u16[10]) - widen(c.u16[10])) + abs(widen(b.u16[11]) - widen(c.u16[11]));
dst.u32[6] = a.u32[6] + abs(widen(b.u16[12]) - widen(c.u16[12])) + abs(widen(b.u16[13]) - widen(c.u16[13]));
dst.u32[7] = a.u32[7] + abs(widen(b.u16[14]) - widen(c.u16[14])) + abs(widen(b.u16[15]) - widen(c.u16[15]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_u_acc_w2x_h((v8u32) a, (v16u16) b, (v16u16) c);
```

## __m256i __lasx_mxsad_adj2_u_acc_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_u_acc_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.u.acc.w2x.w
Builtin: __builtin_lasx_mxsad_adj2_u_acc_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5121
```

### Description

Compute sums of absolute differences for adjacent unsigned lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.u64[0] = a.u64[0] + abs(widen(b.u32[0]) - widen(c.u32[0])) + abs(widen(b.u32[1]) - widen(c.u32[1]));
dst.u64[1] = a.u64[1] + abs(widen(b.u32[2]) - widen(c.u32[2])) + abs(widen(b.u32[3]) - widen(c.u32[3]));
dst.u64[2] = a.u64[2] + abs(widen(b.u32[4]) - widen(c.u32[4])) + abs(widen(b.u32[5]) - widen(c.u32[5]));
dst.u64[3] = a.u64[3] + abs(widen(b.u32[6]) - widen(c.u32[6])) + abs(widen(b.u32[7]) - widen(c.u32[7]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_u_acc_w2x_w((v4u64) a, (v8u32) b, (v8u32) c);
```

## __m256i __lasx_mxsad_adj2_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.u.w2x.b
Builtin: __builtin_lasx_mxsad_adj2_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4959
```

### Description

Compute sums of absolute differences for adjacent unsigned lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.u16[0] = abs(widen(a.u8[0]) - widen(b.u8[0])) + abs(widen(a.u8[1]) - widen(b.u8[1]));
dst.u16[1] = abs(widen(a.u8[2]) - widen(b.u8[2])) + abs(widen(a.u8[3]) - widen(b.u8[3]));
dst.u16[2] = abs(widen(a.u8[4]) - widen(b.u8[4])) + abs(widen(a.u8[5]) - widen(b.u8[5]));
dst.u16[3] = abs(widen(a.u8[6]) - widen(b.u8[6])) + abs(widen(a.u8[7]) - widen(b.u8[7]));
dst.u16[4] = abs(widen(a.u8[8]) - widen(b.u8[8])) + abs(widen(a.u8[9]) - widen(b.u8[9]));
dst.u16[5] = abs(widen(a.u8[10]) - widen(b.u8[10])) + abs(widen(a.u8[11]) - widen(b.u8[11]));
dst.u16[6] = abs(widen(a.u8[12]) - widen(b.u8[12])) + abs(widen(a.u8[13]) - widen(b.u8[13]));
dst.u16[7] = abs(widen(a.u8[14]) - widen(b.u8[14])) + abs(widen(a.u8[15]) - widen(b.u8[15]));
dst.u16[8] = abs(widen(a.u8[16]) - widen(b.u8[16])) + abs(widen(a.u8[17]) - widen(b.u8[17]));
dst.u16[9] = abs(widen(a.u8[18]) - widen(b.u8[18])) + abs(widen(a.u8[19]) - widen(b.u8[19]));
dst.u16[10] = abs(widen(a.u8[20]) - widen(b.u8[20])) + abs(widen(a.u8[21]) - widen(b.u8[21]));
dst.u16[11] = abs(widen(a.u8[22]) - widen(b.u8[22])) + abs(widen(a.u8[23]) - widen(b.u8[23]));
dst.u16[12] = abs(widen(a.u8[24]) - widen(b.u8[24])) + abs(widen(a.u8[25]) - widen(b.u8[25]));
dst.u16[13] = abs(widen(a.u8[26]) - widen(b.u8[26])) + abs(widen(a.u8[27]) - widen(b.u8[27]));
dst.u16[14] = abs(widen(a.u8[28]) - widen(b.u8[28])) + abs(widen(a.u8[29]) - widen(b.u8[29]));
dst.u16[15] = abs(widen(a.u8[30]) - widen(b.u8[30])) + abs(widen(a.u8[31]) - widen(b.u8[31]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxsad_adj2_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.u.w2x.h
Builtin: __builtin_lasx_mxsad_adj2_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4980
```

### Description

Compute sums of absolute differences for adjacent unsigned lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.u32[0] = abs(widen(a.u16[0]) - widen(b.u16[0])) + abs(widen(a.u16[1]) - widen(b.u16[1]));
dst.u32[1] = abs(widen(a.u16[2]) - widen(b.u16[2])) + abs(widen(a.u16[3]) - widen(b.u16[3]));
dst.u32[2] = abs(widen(a.u16[4]) - widen(b.u16[4])) + abs(widen(a.u16[5]) - widen(b.u16[5]));
dst.u32[3] = abs(widen(a.u16[6]) - widen(b.u16[6])) + abs(widen(a.u16[7]) - widen(b.u16[7]));
dst.u32[4] = abs(widen(a.u16[8]) - widen(b.u16[8])) + abs(widen(a.u16[9]) - widen(b.u16[9]));
dst.u32[5] = abs(widen(a.u16[10]) - widen(b.u16[10])) + abs(widen(a.u16[11]) - widen(b.u16[11]));
dst.u32[6] = abs(widen(a.u16[12]) - widen(b.u16[12])) + abs(widen(a.u16[13]) - widen(b.u16[13]));
dst.u32[7] = abs(widen(a.u16[14]) - widen(b.u16[14])) + abs(widen(a.u16[15]) - widen(b.u16[15]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxsad_adj2_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.u.w2x.w
Builtin: __builtin_lasx_mxsad_adj2_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5001
```

### Description

Compute sums of absolute differences for adjacent unsigned lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.u64[0] = abs(widen(a.u32[0]) - widen(b.u32[0])) + abs(widen(a.u32[1]) - widen(b.u32[1]));
dst.u64[1] = abs(widen(a.u32[2]) - widen(b.u32[2])) + abs(widen(a.u32[3]) - widen(b.u32[3]));
dst.u64[2] = abs(widen(a.u32[4]) - widen(b.u32[4])) + abs(widen(a.u32[5]) - widen(b.u32[5]));
dst.u64[3] = abs(widen(a.u32[6]) - widen(b.u32[6])) + abs(widen(a.u32[7]) - widen(b.u32[7]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxsat_s_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsat_s_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsat.s.b
Builtin: __builtin_lasx_mxsat_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:801
```

### Description

Perform lane-wise signed saturating integer arithmetic on 32 x i8 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i8[0] = saturate(a.i8[0], range_selected_by_imm, signedness);
dst.i8[1] = saturate(a.i8[1], range_selected_by_imm, signedness);
dst.i8[2] = saturate(a.i8[2], range_selected_by_imm, signedness);
dst.i8[3] = saturate(a.i8[3], range_selected_by_imm, signedness);
dst.i8[4] = saturate(a.i8[4], range_selected_by_imm, signedness);
dst.i8[5] = saturate(a.i8[5], range_selected_by_imm, signedness);
dst.i8[6] = saturate(a.i8[6], range_selected_by_imm, signedness);
dst.i8[7] = saturate(a.i8[7], range_selected_by_imm, signedness);
dst.i8[8] = saturate(a.i8[8], range_selected_by_imm, signedness);
dst.i8[9] = saturate(a.i8[9], range_selected_by_imm, signedness);
dst.i8[10] = saturate(a.i8[10], range_selected_by_imm, signedness);
dst.i8[11] = saturate(a.i8[11], range_selected_by_imm, signedness);
dst.i8[12] = saturate(a.i8[12], range_selected_by_imm, signedness);
dst.i8[13] = saturate(a.i8[13], range_selected_by_imm, signedness);
dst.i8[14] = saturate(a.i8[14], range_selected_by_imm, signedness);
dst.i8[15] = saturate(a.i8[15], range_selected_by_imm, signedness);
dst.i8[16] = saturate(a.i8[16], range_selected_by_imm, signedness);
dst.i8[17] = saturate(a.i8[17], range_selected_by_imm, signedness);
dst.i8[18] = saturate(a.i8[18], range_selected_by_imm, signedness);
dst.i8[19] = saturate(a.i8[19], range_selected_by_imm, signedness);
dst.i8[20] = saturate(a.i8[20], range_selected_by_imm, signedness);
dst.i8[21] = saturate(a.i8[21], range_selected_by_imm, signedness);
dst.i8[22] = saturate(a.i8[22], range_selected_by_imm, signedness);
dst.i8[23] = saturate(a.i8[23], range_selected_by_imm, signedness);
dst.i8[24] = saturate(a.i8[24], range_selected_by_imm, signedness);
dst.i8[25] = saturate(a.i8[25], range_selected_by_imm, signedness);
dst.i8[26] = saturate(a.i8[26], range_selected_by_imm, signedness);
dst.i8[27] = saturate(a.i8[27], range_selected_by_imm, signedness);
dst.i8[28] = saturate(a.i8[28], range_selected_by_imm, signedness);
dst.i8[29] = saturate(a.i8[29], range_selected_by_imm, signedness);
dst.i8[30] = saturate(a.i8[30], range_selected_by_imm, signedness);
dst.i8[31] = saturate(a.i8[31], range_selected_by_imm, signedness);
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
#define __lasx_mxsat_s_b(a, imm) ((__m256i)__builtin_lasx_mxsat_s_b((v32i8)(a), (imm)))
```

## __m256i __lasx_mxsat_s_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsat_s_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsat.s.d
Builtin: __builtin_lasx_mxsat_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:804
```

### Description

Perform lane-wise signed saturating integer arithmetic on 4 x i64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i64[0] = saturate(a.i64[0], range_selected_by_imm, signedness);
dst.i64[1] = saturate(a.i64[1], range_selected_by_imm, signedness);
dst.i64[2] = saturate(a.i64[2], range_selected_by_imm, signedness);
dst.i64[3] = saturate(a.i64[3], range_selected_by_imm, signedness);
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
#define __lasx_mxsat_s_d(a, imm) ((__m256i)__builtin_lasx_mxsat_s_d((v4i64)(a), (imm)))
```

## __m256i __lasx_mxsat_s_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsat_s_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsat.s.h
Builtin: __builtin_lasx_mxsat_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:802
```

### Description

Perform lane-wise signed saturating integer arithmetic on 16 x i16 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i16[0] = saturate(a.i16[0], range_selected_by_imm, signedness);
dst.i16[1] = saturate(a.i16[1], range_selected_by_imm, signedness);
dst.i16[2] = saturate(a.i16[2], range_selected_by_imm, signedness);
dst.i16[3] = saturate(a.i16[3], range_selected_by_imm, signedness);
dst.i16[4] = saturate(a.i16[4], range_selected_by_imm, signedness);
dst.i16[5] = saturate(a.i16[5], range_selected_by_imm, signedness);
dst.i16[6] = saturate(a.i16[6], range_selected_by_imm, signedness);
dst.i16[7] = saturate(a.i16[7], range_selected_by_imm, signedness);
dst.i16[8] = saturate(a.i16[8], range_selected_by_imm, signedness);
dst.i16[9] = saturate(a.i16[9], range_selected_by_imm, signedness);
dst.i16[10] = saturate(a.i16[10], range_selected_by_imm, signedness);
dst.i16[11] = saturate(a.i16[11], range_selected_by_imm, signedness);
dst.i16[12] = saturate(a.i16[12], range_selected_by_imm, signedness);
dst.i16[13] = saturate(a.i16[13], range_selected_by_imm, signedness);
dst.i16[14] = saturate(a.i16[14], range_selected_by_imm, signedness);
dst.i16[15] = saturate(a.i16[15], range_selected_by_imm, signedness);
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
#define __lasx_mxsat_s_h(a, imm) ((__m256i)__builtin_lasx_mxsat_s_h((v16i16)(a), (imm)))
```

## __m256i __lasx_mxsat_s_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsat_s_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsat.s.w
Builtin: __builtin_lasx_mxsat_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:803
```

### Description

Perform lane-wise signed saturating integer arithmetic on 8 x i32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i32[0] = saturate(a.i32[0], range_selected_by_imm, signedness);
dst.i32[1] = saturate(a.i32[1], range_selected_by_imm, signedness);
dst.i32[2] = saturate(a.i32[2], range_selected_by_imm, signedness);
dst.i32[3] = saturate(a.i32[3], range_selected_by_imm, signedness);
dst.i32[4] = saturate(a.i32[4], range_selected_by_imm, signedness);
dst.i32[5] = saturate(a.i32[5], range_selected_by_imm, signedness);
dst.i32[6] = saturate(a.i32[6], range_selected_by_imm, signedness);
dst.i32[7] = saturate(a.i32[7], range_selected_by_imm, signedness);
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
#define __lasx_mxsat_s_w(a, imm) ((__m256i)__builtin_lasx_mxsat_s_w((v8i32)(a), (imm)))
```

## __m256i __lasx_mxsat_u_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsat_u_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsat.u.b
Builtin: __builtin_lasx_mxsat_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:805
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 32 x u8 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u8[0] = saturate(a.u8[0], range_selected_by_imm, signedness);
dst.u8[1] = saturate(a.u8[1], range_selected_by_imm, signedness);
dst.u8[2] = saturate(a.u8[2], range_selected_by_imm, signedness);
dst.u8[3] = saturate(a.u8[3], range_selected_by_imm, signedness);
dst.u8[4] = saturate(a.u8[4], range_selected_by_imm, signedness);
dst.u8[5] = saturate(a.u8[5], range_selected_by_imm, signedness);
dst.u8[6] = saturate(a.u8[6], range_selected_by_imm, signedness);
dst.u8[7] = saturate(a.u8[7], range_selected_by_imm, signedness);
dst.u8[8] = saturate(a.u8[8], range_selected_by_imm, signedness);
dst.u8[9] = saturate(a.u8[9], range_selected_by_imm, signedness);
dst.u8[10] = saturate(a.u8[10], range_selected_by_imm, signedness);
dst.u8[11] = saturate(a.u8[11], range_selected_by_imm, signedness);
dst.u8[12] = saturate(a.u8[12], range_selected_by_imm, signedness);
dst.u8[13] = saturate(a.u8[13], range_selected_by_imm, signedness);
dst.u8[14] = saturate(a.u8[14], range_selected_by_imm, signedness);
dst.u8[15] = saturate(a.u8[15], range_selected_by_imm, signedness);
dst.u8[16] = saturate(a.u8[16], range_selected_by_imm, signedness);
dst.u8[17] = saturate(a.u8[17], range_selected_by_imm, signedness);
dst.u8[18] = saturate(a.u8[18], range_selected_by_imm, signedness);
dst.u8[19] = saturate(a.u8[19], range_selected_by_imm, signedness);
dst.u8[20] = saturate(a.u8[20], range_selected_by_imm, signedness);
dst.u8[21] = saturate(a.u8[21], range_selected_by_imm, signedness);
dst.u8[22] = saturate(a.u8[22], range_selected_by_imm, signedness);
dst.u8[23] = saturate(a.u8[23], range_selected_by_imm, signedness);
dst.u8[24] = saturate(a.u8[24], range_selected_by_imm, signedness);
dst.u8[25] = saturate(a.u8[25], range_selected_by_imm, signedness);
dst.u8[26] = saturate(a.u8[26], range_selected_by_imm, signedness);
dst.u8[27] = saturate(a.u8[27], range_selected_by_imm, signedness);
dst.u8[28] = saturate(a.u8[28], range_selected_by_imm, signedness);
dst.u8[29] = saturate(a.u8[29], range_selected_by_imm, signedness);
dst.u8[30] = saturate(a.u8[30], range_selected_by_imm, signedness);
dst.u8[31] = saturate(a.u8[31], range_selected_by_imm, signedness);
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
#define __lasx_mxsat_u_b(a, imm) ((__m256i)__builtin_lasx_mxsat_u_b((v32u8)(a), (imm)))
```

## __m256i __lasx_mxsat_u_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsat_u_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsat.u.d
Builtin: __builtin_lasx_mxsat_u_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:808
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 4 x u64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u64[0] = saturate(a.u64[0], range_selected_by_imm, signedness);
dst.u64[1] = saturate(a.u64[1], range_selected_by_imm, signedness);
dst.u64[2] = saturate(a.u64[2], range_selected_by_imm, signedness);
dst.u64[3] = saturate(a.u64[3], range_selected_by_imm, signedness);
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
#define __lasx_mxsat_u_d(a, imm) ((__m256i)__builtin_lasx_mxsat_u_d((v4u64)(a), (imm)))
```

## __m256i __lasx_mxsat_u_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsat_u_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsat.u.h
Builtin: __builtin_lasx_mxsat_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:806
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 16 x u16 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u16[0] = saturate(a.u16[0], range_selected_by_imm, signedness);
dst.u16[1] = saturate(a.u16[1], range_selected_by_imm, signedness);
dst.u16[2] = saturate(a.u16[2], range_selected_by_imm, signedness);
dst.u16[3] = saturate(a.u16[3], range_selected_by_imm, signedness);
dst.u16[4] = saturate(a.u16[4], range_selected_by_imm, signedness);
dst.u16[5] = saturate(a.u16[5], range_selected_by_imm, signedness);
dst.u16[6] = saturate(a.u16[6], range_selected_by_imm, signedness);
dst.u16[7] = saturate(a.u16[7], range_selected_by_imm, signedness);
dst.u16[8] = saturate(a.u16[8], range_selected_by_imm, signedness);
dst.u16[9] = saturate(a.u16[9], range_selected_by_imm, signedness);
dst.u16[10] = saturate(a.u16[10], range_selected_by_imm, signedness);
dst.u16[11] = saturate(a.u16[11], range_selected_by_imm, signedness);
dst.u16[12] = saturate(a.u16[12], range_selected_by_imm, signedness);
dst.u16[13] = saturate(a.u16[13], range_selected_by_imm, signedness);
dst.u16[14] = saturate(a.u16[14], range_selected_by_imm, signedness);
dst.u16[15] = saturate(a.u16[15], range_selected_by_imm, signedness);
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
#define __lasx_mxsat_u_h(a, imm) ((__m256i)__builtin_lasx_mxsat_u_h((v16u16)(a), (imm)))
```

## __m256i __lasx_mxsat_u_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsat_u_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsat.u.w
Builtin: __builtin_lasx_mxsat_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:807
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 8 x u32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u32[0] = saturate(a.u32[0], range_selected_by_imm, signedness);
dst.u32[1] = saturate(a.u32[1], range_selected_by_imm, signedness);
dst.u32[2] = saturate(a.u32[2], range_selected_by_imm, signedness);
dst.u32[3] = saturate(a.u32[3], range_selected_by_imm, signedness);
dst.u32[4] = saturate(a.u32[4], range_selected_by_imm, signedness);
dst.u32[5] = saturate(a.u32[5], range_selected_by_imm, signedness);
dst.u32[6] = saturate(a.u32[6], range_selected_by_imm, signedness);
dst.u32[7] = saturate(a.u32[7], range_selected_by_imm, signedness);
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
#define __lasx_mxsat_u_w(a, imm) ((__m256i)__builtin_lasx_mxsat_u_w((v8u32)(a), (imm)))
```

## __m256i __lasx_mxsubs_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubs_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubs.s.b
Builtin: __builtin_lasx_mxsubs_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1034
```

### Description

Perform lane-wise signed saturating integer arithmetic on 32 x i8 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i8[0] = saturate(a.i8[0] - b.i8[0], 8, signedness);
dst.i8[1] = saturate(a.i8[1] - b.i8[1], 8, signedness);
dst.i8[2] = saturate(a.i8[2] - b.i8[2], 8, signedness);
dst.i8[3] = saturate(a.i8[3] - b.i8[3], 8, signedness);
dst.i8[4] = saturate(a.i8[4] - b.i8[4], 8, signedness);
dst.i8[5] = saturate(a.i8[5] - b.i8[5], 8, signedness);
dst.i8[6] = saturate(a.i8[6] - b.i8[6], 8, signedness);
dst.i8[7] = saturate(a.i8[7] - b.i8[7], 8, signedness);
dst.i8[8] = saturate(a.i8[8] - b.i8[8], 8, signedness);
dst.i8[9] = saturate(a.i8[9] - b.i8[9], 8, signedness);
dst.i8[10] = saturate(a.i8[10] - b.i8[10], 8, signedness);
dst.i8[11] = saturate(a.i8[11] - b.i8[11], 8, signedness);
dst.i8[12] = saturate(a.i8[12] - b.i8[12], 8, signedness);
dst.i8[13] = saturate(a.i8[13] - b.i8[13], 8, signedness);
dst.i8[14] = saturate(a.i8[14] - b.i8[14], 8, signedness);
dst.i8[15] = saturate(a.i8[15] - b.i8[15], 8, signedness);
dst.i8[16] = saturate(a.i8[16] - b.i8[16], 8, signedness);
dst.i8[17] = saturate(a.i8[17] - b.i8[17], 8, signedness);
dst.i8[18] = saturate(a.i8[18] - b.i8[18], 8, signedness);
dst.i8[19] = saturate(a.i8[19] - b.i8[19], 8, signedness);
dst.i8[20] = saturate(a.i8[20] - b.i8[20], 8, signedness);
dst.i8[21] = saturate(a.i8[21] - b.i8[21], 8, signedness);
dst.i8[22] = saturate(a.i8[22] - b.i8[22], 8, signedness);
dst.i8[23] = saturate(a.i8[23] - b.i8[23], 8, signedness);
dst.i8[24] = saturate(a.i8[24] - b.i8[24], 8, signedness);
dst.i8[25] = saturate(a.i8[25] - b.i8[25], 8, signedness);
dst.i8[26] = saturate(a.i8[26] - b.i8[26], 8, signedness);
dst.i8[27] = saturate(a.i8[27] - b.i8[27], 8, signedness);
dst.i8[28] = saturate(a.i8[28] - b.i8[28], 8, signedness);
dst.i8[29] = saturate(a.i8[29] - b.i8[29], 8, signedness);
dst.i8[30] = saturate(a.i8[30] - b.i8[30], 8, signedness);
dst.i8[31] = saturate(a.i8[31] - b.i8[31], 8, signedness);
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
return (__m256i)__builtin_lasx_mxsubs_s_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxsubs_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubs_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubs.s.d
Builtin: __builtin_lasx_mxsubs_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1055
```

### Description

Perform lane-wise signed saturating integer arithmetic on 4 x i64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i64[0] = saturate(a.i64[0] - b.i64[0], 64, signedness);
dst.i64[1] = saturate(a.i64[1] - b.i64[1], 64, signedness);
dst.i64[2] = saturate(a.i64[2] - b.i64[2], 64, signedness);
dst.i64[3] = saturate(a.i64[3] - b.i64[3], 64, signedness);
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
return (__m256i)__builtin_lasx_mxsubs_s_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxsubs_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubs_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubs.s.h
Builtin: __builtin_lasx_mxsubs_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1041
```

### Description

Perform lane-wise signed saturating integer arithmetic on 16 x i16 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i16[0] = saturate(a.i16[0] - b.i16[0], 16, signedness);
dst.i16[1] = saturate(a.i16[1] - b.i16[1], 16, signedness);
dst.i16[2] = saturate(a.i16[2] - b.i16[2], 16, signedness);
dst.i16[3] = saturate(a.i16[3] - b.i16[3], 16, signedness);
dst.i16[4] = saturate(a.i16[4] - b.i16[4], 16, signedness);
dst.i16[5] = saturate(a.i16[5] - b.i16[5], 16, signedness);
dst.i16[6] = saturate(a.i16[6] - b.i16[6], 16, signedness);
dst.i16[7] = saturate(a.i16[7] - b.i16[7], 16, signedness);
dst.i16[8] = saturate(a.i16[8] - b.i16[8], 16, signedness);
dst.i16[9] = saturate(a.i16[9] - b.i16[9], 16, signedness);
dst.i16[10] = saturate(a.i16[10] - b.i16[10], 16, signedness);
dst.i16[11] = saturate(a.i16[11] - b.i16[11], 16, signedness);
dst.i16[12] = saturate(a.i16[12] - b.i16[12], 16, signedness);
dst.i16[13] = saturate(a.i16[13] - b.i16[13], 16, signedness);
dst.i16[14] = saturate(a.i16[14] - b.i16[14], 16, signedness);
dst.i16[15] = saturate(a.i16[15] - b.i16[15], 16, signedness);
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
return (__m256i)__builtin_lasx_mxsubs_s_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxsubs_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubs_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubs.s.w
Builtin: __builtin_lasx_mxsubs_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1048
```

### Description

Perform lane-wise signed saturating integer arithmetic on 8 x i32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i32[0] = saturate(a.i32[0] - b.i32[0], 32, signedness);
dst.i32[1] = saturate(a.i32[1] - b.i32[1], 32, signedness);
dst.i32[2] = saturate(a.i32[2] - b.i32[2], 32, signedness);
dst.i32[3] = saturate(a.i32[3] - b.i32[3], 32, signedness);
dst.i32[4] = saturate(a.i32[4] - b.i32[4], 32, signedness);
dst.i32[5] = saturate(a.i32[5] - b.i32[5], 32, signedness);
dst.i32[6] = saturate(a.i32[6] - b.i32[6], 32, signedness);
dst.i32[7] = saturate(a.i32[7] - b.i32[7], 32, signedness);
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
return (__m256i)__builtin_lasx_mxsubs_s_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxsubs_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubs_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubs.u.b
Builtin: __builtin_lasx_mxsubs_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1062
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 32 x u8 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u8[0] = saturate(a.u8[0] - b.u8[0], 8, signedness);
dst.u8[1] = saturate(a.u8[1] - b.u8[1], 8, signedness);
dst.u8[2] = saturate(a.u8[2] - b.u8[2], 8, signedness);
dst.u8[3] = saturate(a.u8[3] - b.u8[3], 8, signedness);
dst.u8[4] = saturate(a.u8[4] - b.u8[4], 8, signedness);
dst.u8[5] = saturate(a.u8[5] - b.u8[5], 8, signedness);
dst.u8[6] = saturate(a.u8[6] - b.u8[6], 8, signedness);
dst.u8[7] = saturate(a.u8[7] - b.u8[7], 8, signedness);
dst.u8[8] = saturate(a.u8[8] - b.u8[8], 8, signedness);
dst.u8[9] = saturate(a.u8[9] - b.u8[9], 8, signedness);
dst.u8[10] = saturate(a.u8[10] - b.u8[10], 8, signedness);
dst.u8[11] = saturate(a.u8[11] - b.u8[11], 8, signedness);
dst.u8[12] = saturate(a.u8[12] - b.u8[12], 8, signedness);
dst.u8[13] = saturate(a.u8[13] - b.u8[13], 8, signedness);
dst.u8[14] = saturate(a.u8[14] - b.u8[14], 8, signedness);
dst.u8[15] = saturate(a.u8[15] - b.u8[15], 8, signedness);
dst.u8[16] = saturate(a.u8[16] - b.u8[16], 8, signedness);
dst.u8[17] = saturate(a.u8[17] - b.u8[17], 8, signedness);
dst.u8[18] = saturate(a.u8[18] - b.u8[18], 8, signedness);
dst.u8[19] = saturate(a.u8[19] - b.u8[19], 8, signedness);
dst.u8[20] = saturate(a.u8[20] - b.u8[20], 8, signedness);
dst.u8[21] = saturate(a.u8[21] - b.u8[21], 8, signedness);
dst.u8[22] = saturate(a.u8[22] - b.u8[22], 8, signedness);
dst.u8[23] = saturate(a.u8[23] - b.u8[23], 8, signedness);
dst.u8[24] = saturate(a.u8[24] - b.u8[24], 8, signedness);
dst.u8[25] = saturate(a.u8[25] - b.u8[25], 8, signedness);
dst.u8[26] = saturate(a.u8[26] - b.u8[26], 8, signedness);
dst.u8[27] = saturate(a.u8[27] - b.u8[27], 8, signedness);
dst.u8[28] = saturate(a.u8[28] - b.u8[28], 8, signedness);
dst.u8[29] = saturate(a.u8[29] - b.u8[29], 8, signedness);
dst.u8[30] = saturate(a.u8[30] - b.u8[30], 8, signedness);
dst.u8[31] = saturate(a.u8[31] - b.u8[31], 8, signedness);
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
return (__m256i)__builtin_lasx_mxsubs_u_b((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxsubs_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubs_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubs.u.d
Builtin: __builtin_lasx_mxsubs_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1083
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 4 x u64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u64[0] = saturate(a.u64[0] - b.u64[0], 64, signedness);
dst.u64[1] = saturate(a.u64[1] - b.u64[1], 64, signedness);
dst.u64[2] = saturate(a.u64[2] - b.u64[2], 64, signedness);
dst.u64[3] = saturate(a.u64[3] - b.u64[3], 64, signedness);
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
return (__m256i)__builtin_lasx_mxsubs_u_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxsubs_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubs_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubs.u.h
Builtin: __builtin_lasx_mxsubs_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1069
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 16 x u16 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u16[0] = saturate(a.u16[0] - b.u16[0], 16, signedness);
dst.u16[1] = saturate(a.u16[1] - b.u16[1], 16, signedness);
dst.u16[2] = saturate(a.u16[2] - b.u16[2], 16, signedness);
dst.u16[3] = saturate(a.u16[3] - b.u16[3], 16, signedness);
dst.u16[4] = saturate(a.u16[4] - b.u16[4], 16, signedness);
dst.u16[5] = saturate(a.u16[5] - b.u16[5], 16, signedness);
dst.u16[6] = saturate(a.u16[6] - b.u16[6], 16, signedness);
dst.u16[7] = saturate(a.u16[7] - b.u16[7], 16, signedness);
dst.u16[8] = saturate(a.u16[8] - b.u16[8], 16, signedness);
dst.u16[9] = saturate(a.u16[9] - b.u16[9], 16, signedness);
dst.u16[10] = saturate(a.u16[10] - b.u16[10], 16, signedness);
dst.u16[11] = saturate(a.u16[11] - b.u16[11], 16, signedness);
dst.u16[12] = saturate(a.u16[12] - b.u16[12], 16, signedness);
dst.u16[13] = saturate(a.u16[13] - b.u16[13], 16, signedness);
dst.u16[14] = saturate(a.u16[14] - b.u16[14], 16, signedness);
dst.u16[15] = saturate(a.u16[15] - b.u16[15], 16, signedness);
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
return (__m256i)__builtin_lasx_mxsubs_u_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxsubs_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubs_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubs.u.w
Builtin: __builtin_lasx_mxsubs_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1076
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 8 x u32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u32[0] = saturate(a.u32[0] - b.u32[0], 32, signedness);
dst.u32[1] = saturate(a.u32[1] - b.u32[1], 32, signedness);
dst.u32[2] = saturate(a.u32[2] - b.u32[2], 32, signedness);
dst.u32[3] = saturate(a.u32[3] - b.u32[3], 32, signedness);
dst.u32[4] = saturate(a.u32[4] - b.u32[4], 32, signedness);
dst.u32[5] = saturate(a.u32[5] - b.u32[5], 32, signedness);
dst.u32[6] = saturate(a.u32[6] - b.u32[6], 32, signedness);
dst.u32[7] = saturate(a.u32[7] - b.u32[7], 32, signedness);
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
return (__m256i)__builtin_lasx_mxsubs_u_w((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxsubssu_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubssu_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubssu.u.b
Builtin: __builtin_lasx_mxsubssu_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4716
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 32 x u8 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u8[0] = unsigned_saturate(a.i8[0] - b.u8[0], 8);
dst.u8[1] = unsigned_saturate(a.i8[1] - b.u8[1], 8);
dst.u8[2] = unsigned_saturate(a.i8[2] - b.u8[2], 8);
dst.u8[3] = unsigned_saturate(a.i8[3] - b.u8[3], 8);
dst.u8[4] = unsigned_saturate(a.i8[4] - b.u8[4], 8);
dst.u8[5] = unsigned_saturate(a.i8[5] - b.u8[5], 8);
dst.u8[6] = unsigned_saturate(a.i8[6] - b.u8[6], 8);
dst.u8[7] = unsigned_saturate(a.i8[7] - b.u8[7], 8);
dst.u8[8] = unsigned_saturate(a.i8[8] - b.u8[8], 8);
dst.u8[9] = unsigned_saturate(a.i8[9] - b.u8[9], 8);
dst.u8[10] = unsigned_saturate(a.i8[10] - b.u8[10], 8);
dst.u8[11] = unsigned_saturate(a.i8[11] - b.u8[11], 8);
dst.u8[12] = unsigned_saturate(a.i8[12] - b.u8[12], 8);
dst.u8[13] = unsigned_saturate(a.i8[13] - b.u8[13], 8);
dst.u8[14] = unsigned_saturate(a.i8[14] - b.u8[14], 8);
dst.u8[15] = unsigned_saturate(a.i8[15] - b.u8[15], 8);
dst.u8[16] = unsigned_saturate(a.i8[16] - b.u8[16], 8);
dst.u8[17] = unsigned_saturate(a.i8[17] - b.u8[17], 8);
dst.u8[18] = unsigned_saturate(a.i8[18] - b.u8[18], 8);
dst.u8[19] = unsigned_saturate(a.i8[19] - b.u8[19], 8);
dst.u8[20] = unsigned_saturate(a.i8[20] - b.u8[20], 8);
dst.u8[21] = unsigned_saturate(a.i8[21] - b.u8[21], 8);
dst.u8[22] = unsigned_saturate(a.i8[22] - b.u8[22], 8);
dst.u8[23] = unsigned_saturate(a.i8[23] - b.u8[23], 8);
dst.u8[24] = unsigned_saturate(a.i8[24] - b.u8[24], 8);
dst.u8[25] = unsigned_saturate(a.i8[25] - b.u8[25], 8);
dst.u8[26] = unsigned_saturate(a.i8[26] - b.u8[26], 8);
dst.u8[27] = unsigned_saturate(a.i8[27] - b.u8[27], 8);
dst.u8[28] = unsigned_saturate(a.i8[28] - b.u8[28], 8);
dst.u8[29] = unsigned_saturate(a.i8[29] - b.u8[29], 8);
dst.u8[30] = unsigned_saturate(a.i8[30] - b.u8[30], 8);
dst.u8[31] = unsigned_saturate(a.i8[31] - b.u8[31], 8);
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
return (__m256i) __builtin_lasx_mxsubssu_u_b ((v32i8) a, (v32u8) b);
```

## __m256i __lasx_mxsubssu_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubssu_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubssu.u.d
Builtin: __builtin_lasx_mxsubssu_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4734
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 4 x u64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u64[0] = unsigned_saturate(a.i64[0] - b.u64[0], 64);
dst.u64[1] = unsigned_saturate(a.i64[1] - b.u64[1], 64);
dst.u64[2] = unsigned_saturate(a.i64[2] - b.u64[2], 64);
dst.u64[3] = unsigned_saturate(a.i64[3] - b.u64[3], 64);
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
return (__m256i) __builtin_lasx_mxsubssu_u_d ((v4i64) a, (v4u64) b);
```

## __m256i __lasx_mxsubssu_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubssu_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubssu.u.h
Builtin: __builtin_lasx_mxsubssu_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4722
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 16 x u16 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u16[0] = unsigned_saturate(a.i16[0] - b.u16[0], 16);
dst.u16[1] = unsigned_saturate(a.i16[1] - b.u16[1], 16);
dst.u16[2] = unsigned_saturate(a.i16[2] - b.u16[2], 16);
dst.u16[3] = unsigned_saturate(a.i16[3] - b.u16[3], 16);
dst.u16[4] = unsigned_saturate(a.i16[4] - b.u16[4], 16);
dst.u16[5] = unsigned_saturate(a.i16[5] - b.u16[5], 16);
dst.u16[6] = unsigned_saturate(a.i16[6] - b.u16[6], 16);
dst.u16[7] = unsigned_saturate(a.i16[7] - b.u16[7], 16);
dst.u16[8] = unsigned_saturate(a.i16[8] - b.u16[8], 16);
dst.u16[9] = unsigned_saturate(a.i16[9] - b.u16[9], 16);
dst.u16[10] = unsigned_saturate(a.i16[10] - b.u16[10], 16);
dst.u16[11] = unsigned_saturate(a.i16[11] - b.u16[11], 16);
dst.u16[12] = unsigned_saturate(a.i16[12] - b.u16[12], 16);
dst.u16[13] = unsigned_saturate(a.i16[13] - b.u16[13], 16);
dst.u16[14] = unsigned_saturate(a.i16[14] - b.u16[14], 16);
dst.u16[15] = unsigned_saturate(a.i16[15] - b.u16[15], 16);
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
return (__m256i) __builtin_lasx_mxsubssu_u_h ((v16i16) a, (v16u16) b);
```

## __m256i __lasx_mxsubssu_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubssu_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubssu.u.w
Builtin: __builtin_lasx_mxsubssu_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4728
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 8 x u32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u32[0] = unsigned_saturate(a.i32[0] - b.u32[0], 32);
dst.u32[1] = unsigned_saturate(a.i32[1] - b.u32[1], 32);
dst.u32[2] = unsigned_saturate(a.i32[2] - b.u32[2], 32);
dst.u32[3] = unsigned_saturate(a.i32[3] - b.u32[3], 32);
dst.u32[4] = unsigned_saturate(a.i32[4] - b.u32[4], 32);
dst.u32[5] = unsigned_saturate(a.i32[5] - b.u32[5], 32);
dst.u32[6] = unsigned_saturate(a.i32[6] - b.u32[6], 32);
dst.u32[7] = unsigned_saturate(a.i32[7] - b.u32[7], 32);
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
return (__m256i) __builtin_lasx_mxsubssu_u_w ((v8i32) a, (v8u32) b);
```

## __m256i __lasx_mxsubsus_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubsus_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubsus.u.b
Builtin: __builtin_lasx_mxsubsus_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1118
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 32 x u8 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u8[0] = unsigned_saturate(a.u8[0] - b.i8[0], 8);
dst.u8[1] = unsigned_saturate(a.u8[1] - b.i8[1], 8);
dst.u8[2] = unsigned_saturate(a.u8[2] - b.i8[2], 8);
dst.u8[3] = unsigned_saturate(a.u8[3] - b.i8[3], 8);
dst.u8[4] = unsigned_saturate(a.u8[4] - b.i8[4], 8);
dst.u8[5] = unsigned_saturate(a.u8[5] - b.i8[5], 8);
dst.u8[6] = unsigned_saturate(a.u8[6] - b.i8[6], 8);
dst.u8[7] = unsigned_saturate(a.u8[7] - b.i8[7], 8);
dst.u8[8] = unsigned_saturate(a.u8[8] - b.i8[8], 8);
dst.u8[9] = unsigned_saturate(a.u8[9] - b.i8[9], 8);
dst.u8[10] = unsigned_saturate(a.u8[10] - b.i8[10], 8);
dst.u8[11] = unsigned_saturate(a.u8[11] - b.i8[11], 8);
dst.u8[12] = unsigned_saturate(a.u8[12] - b.i8[12], 8);
dst.u8[13] = unsigned_saturate(a.u8[13] - b.i8[13], 8);
dst.u8[14] = unsigned_saturate(a.u8[14] - b.i8[14], 8);
dst.u8[15] = unsigned_saturate(a.u8[15] - b.i8[15], 8);
dst.u8[16] = unsigned_saturate(a.u8[16] - b.i8[16], 8);
dst.u8[17] = unsigned_saturate(a.u8[17] - b.i8[17], 8);
dst.u8[18] = unsigned_saturate(a.u8[18] - b.i8[18], 8);
dst.u8[19] = unsigned_saturate(a.u8[19] - b.i8[19], 8);
dst.u8[20] = unsigned_saturate(a.u8[20] - b.i8[20], 8);
dst.u8[21] = unsigned_saturate(a.u8[21] - b.i8[21], 8);
dst.u8[22] = unsigned_saturate(a.u8[22] - b.i8[22], 8);
dst.u8[23] = unsigned_saturate(a.u8[23] - b.i8[23], 8);
dst.u8[24] = unsigned_saturate(a.u8[24] - b.i8[24], 8);
dst.u8[25] = unsigned_saturate(a.u8[25] - b.i8[25], 8);
dst.u8[26] = unsigned_saturate(a.u8[26] - b.i8[26], 8);
dst.u8[27] = unsigned_saturate(a.u8[27] - b.i8[27], 8);
dst.u8[28] = unsigned_saturate(a.u8[28] - b.i8[28], 8);
dst.u8[29] = unsigned_saturate(a.u8[29] - b.i8[29], 8);
dst.u8[30] = unsigned_saturate(a.u8[30] - b.i8[30], 8);
dst.u8[31] = unsigned_saturate(a.u8[31] - b.i8[31], 8);
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
return (__m256i)__builtin_lasx_mxsubsus_u_b((v32u8)a, (v32i8)b);
```

## __m256i __lasx_mxsubsus_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubsus_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubsus.u.d
Builtin: __builtin_lasx_mxsubsus_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1139
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 4 x u64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u64[0] = unsigned_saturate(a.u64[0] - b.i64[0], 64);
dst.u64[1] = unsigned_saturate(a.u64[1] - b.i64[1], 64);
dst.u64[2] = unsigned_saturate(a.u64[2] - b.i64[2], 64);
dst.u64[3] = unsigned_saturate(a.u64[3] - b.i64[3], 64);
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
return (__m256i)__builtin_lasx_mxsubsus_u_d((v4u64)a, (v4i64)b);
```

## __m256i __lasx_mxsubsus_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubsus_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubsus.u.h
Builtin: __builtin_lasx_mxsubsus_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1125
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 16 x u16 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u16[0] = unsigned_saturate(a.u16[0] - b.i16[0], 16);
dst.u16[1] = unsigned_saturate(a.u16[1] - b.i16[1], 16);
dst.u16[2] = unsigned_saturate(a.u16[2] - b.i16[2], 16);
dst.u16[3] = unsigned_saturate(a.u16[3] - b.i16[3], 16);
dst.u16[4] = unsigned_saturate(a.u16[4] - b.i16[4], 16);
dst.u16[5] = unsigned_saturate(a.u16[5] - b.i16[5], 16);
dst.u16[6] = unsigned_saturate(a.u16[6] - b.i16[6], 16);
dst.u16[7] = unsigned_saturate(a.u16[7] - b.i16[7], 16);
dst.u16[8] = unsigned_saturate(a.u16[8] - b.i16[8], 16);
dst.u16[9] = unsigned_saturate(a.u16[9] - b.i16[9], 16);
dst.u16[10] = unsigned_saturate(a.u16[10] - b.i16[10], 16);
dst.u16[11] = unsigned_saturate(a.u16[11] - b.i16[11], 16);
dst.u16[12] = unsigned_saturate(a.u16[12] - b.i16[12], 16);
dst.u16[13] = unsigned_saturate(a.u16[13] - b.i16[13], 16);
dst.u16[14] = unsigned_saturate(a.u16[14] - b.i16[14], 16);
dst.u16[15] = unsigned_saturate(a.u16[15] - b.i16[15], 16);
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
return (__m256i)__builtin_lasx_mxsubsus_u_h((v16u16)a, (v16i16)b);
```

## __m256i __lasx_mxsubsus_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubsus_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubsus.u.w
Builtin: __builtin_lasx_mxsubsus_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1132
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 8 x u32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u32[0] = unsigned_saturate(a.u32[0] - b.i32[0], 32);
dst.u32[1] = unsigned_saturate(a.u32[1] - b.i32[1], 32);
dst.u32[2] = unsigned_saturate(a.u32[2] - b.i32[2], 32);
dst.u32[3] = unsigned_saturate(a.u32[3] - b.i32[3], 32);
dst.u32[4] = unsigned_saturate(a.u32[4] - b.i32[4], 32);
dst.u32[5] = unsigned_saturate(a.u32[5] - b.i32[5], 32);
dst.u32[6] = unsigned_saturate(a.u32[6] - b.i32[6], 32);
dst.u32[7] = unsigned_saturate(a.u32[7] - b.i32[7], 32);
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
return (__m256i)__builtin_lasx_mxsubsus_u_w((v8u32)a, (v8i32)b);
```

## __m256i __lasx_mxsubsuu_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubsuu_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubsuu.s.b
Builtin: __builtin_lasx_mxsubsuu_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1090
```

### Description

Perform lane-wise signed saturating integer arithmetic on 32 x i8 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i8[0] = signed_saturate(a.u8[0] - b.u8[0], 8);
dst.i8[1] = signed_saturate(a.u8[1] - b.u8[1], 8);
dst.i8[2] = signed_saturate(a.u8[2] - b.u8[2], 8);
dst.i8[3] = signed_saturate(a.u8[3] - b.u8[3], 8);
dst.i8[4] = signed_saturate(a.u8[4] - b.u8[4], 8);
dst.i8[5] = signed_saturate(a.u8[5] - b.u8[5], 8);
dst.i8[6] = signed_saturate(a.u8[6] - b.u8[6], 8);
dst.i8[7] = signed_saturate(a.u8[7] - b.u8[7], 8);
dst.i8[8] = signed_saturate(a.u8[8] - b.u8[8], 8);
dst.i8[9] = signed_saturate(a.u8[9] - b.u8[9], 8);
dst.i8[10] = signed_saturate(a.u8[10] - b.u8[10], 8);
dst.i8[11] = signed_saturate(a.u8[11] - b.u8[11], 8);
dst.i8[12] = signed_saturate(a.u8[12] - b.u8[12], 8);
dst.i8[13] = signed_saturate(a.u8[13] - b.u8[13], 8);
dst.i8[14] = signed_saturate(a.u8[14] - b.u8[14], 8);
dst.i8[15] = signed_saturate(a.u8[15] - b.u8[15], 8);
dst.i8[16] = signed_saturate(a.u8[16] - b.u8[16], 8);
dst.i8[17] = signed_saturate(a.u8[17] - b.u8[17], 8);
dst.i8[18] = signed_saturate(a.u8[18] - b.u8[18], 8);
dst.i8[19] = signed_saturate(a.u8[19] - b.u8[19], 8);
dst.i8[20] = signed_saturate(a.u8[20] - b.u8[20], 8);
dst.i8[21] = signed_saturate(a.u8[21] - b.u8[21], 8);
dst.i8[22] = signed_saturate(a.u8[22] - b.u8[22], 8);
dst.i8[23] = signed_saturate(a.u8[23] - b.u8[23], 8);
dst.i8[24] = signed_saturate(a.u8[24] - b.u8[24], 8);
dst.i8[25] = signed_saturate(a.u8[25] - b.u8[25], 8);
dst.i8[26] = signed_saturate(a.u8[26] - b.u8[26], 8);
dst.i8[27] = signed_saturate(a.u8[27] - b.u8[27], 8);
dst.i8[28] = signed_saturate(a.u8[28] - b.u8[28], 8);
dst.i8[29] = signed_saturate(a.u8[29] - b.u8[29], 8);
dst.i8[30] = signed_saturate(a.u8[30] - b.u8[30], 8);
dst.i8[31] = signed_saturate(a.u8[31] - b.u8[31], 8);
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
return (__m256i)__builtin_lasx_mxsubsuu_s_b((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxsubsuu_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubsuu_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubsuu.s.d
Builtin: __builtin_lasx_mxsubsuu_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1111
```

### Description

Perform lane-wise signed saturating integer arithmetic on 4 x i64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i64[0] = signed_saturate(a.u64[0] - b.u64[0], 64);
dst.i64[1] = signed_saturate(a.u64[1] - b.u64[1], 64);
dst.i64[2] = signed_saturate(a.u64[2] - b.u64[2], 64);
dst.i64[3] = signed_saturate(a.u64[3] - b.u64[3], 64);
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
return (__m256i)__builtin_lasx_mxsubsuu_s_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxsubsuu_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubsuu_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubsuu.s.h
Builtin: __builtin_lasx_mxsubsuu_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1097
```

### Description

Perform lane-wise signed saturating integer arithmetic on 16 x i16 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i16[0] = signed_saturate(a.u16[0] - b.u16[0], 16);
dst.i16[1] = signed_saturate(a.u16[1] - b.u16[1], 16);
dst.i16[2] = signed_saturate(a.u16[2] - b.u16[2], 16);
dst.i16[3] = signed_saturate(a.u16[3] - b.u16[3], 16);
dst.i16[4] = signed_saturate(a.u16[4] - b.u16[4], 16);
dst.i16[5] = signed_saturate(a.u16[5] - b.u16[5], 16);
dst.i16[6] = signed_saturate(a.u16[6] - b.u16[6], 16);
dst.i16[7] = signed_saturate(a.u16[7] - b.u16[7], 16);
dst.i16[8] = signed_saturate(a.u16[8] - b.u16[8], 16);
dst.i16[9] = signed_saturate(a.u16[9] - b.u16[9], 16);
dst.i16[10] = signed_saturate(a.u16[10] - b.u16[10], 16);
dst.i16[11] = signed_saturate(a.u16[11] - b.u16[11], 16);
dst.i16[12] = signed_saturate(a.u16[12] - b.u16[12], 16);
dst.i16[13] = signed_saturate(a.u16[13] - b.u16[13], 16);
dst.i16[14] = signed_saturate(a.u16[14] - b.u16[14], 16);
dst.i16[15] = signed_saturate(a.u16[15] - b.u16[15], 16);
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
return (__m256i)__builtin_lasx_mxsubsuu_s_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxsubsuu_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubsuu_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubsuu.s.w
Builtin: __builtin_lasx_mxsubsuu_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1104
```

### Description

Perform lane-wise signed saturating integer arithmetic on 8 x i32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i32[0] = signed_saturate(a.u32[0] - b.u32[0], 32);
dst.i32[1] = signed_saturate(a.u32[1] - b.u32[1], 32);
dst.i32[2] = signed_saturate(a.u32[2] - b.u32[2], 32);
dst.i32[3] = signed_saturate(a.u32[3] - b.u32[3], 32);
dst.i32[4] = signed_saturate(a.u32[4] - b.u32[4], 32);
dst.i32[5] = signed_saturate(a.u32[5] - b.u32[5], 32);
dst.i32[6] = signed_saturate(a.u32[6] - b.u32[6], 32);
dst.i32[7] = signed_saturate(a.u32[7] - b.u32[7], 32);
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
return (__m256i)__builtin_lasx_mxsubsuu_s_w((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxsubv_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubv_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubv.b
Builtin: __builtin_lasx_mxsubv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:426
```

### Description

Subtract modular integer lanes of `b` from `a` on 32 x u8 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u8[0] = a.i8[0] - b.i8[0];
dst.u8[1] = a.i8[1] - b.i8[1];
dst.u8[2] = a.i8[2] - b.i8[2];
dst.u8[3] = a.i8[3] - b.i8[3];
dst.u8[4] = a.i8[4] - b.i8[4];
dst.u8[5] = a.i8[5] - b.i8[5];
dst.u8[6] = a.i8[6] - b.i8[6];
dst.u8[7] = a.i8[7] - b.i8[7];
dst.u8[8] = a.i8[8] - b.i8[8];
dst.u8[9] = a.i8[9] - b.i8[9];
dst.u8[10] = a.i8[10] - b.i8[10];
dst.u8[11] = a.i8[11] - b.i8[11];
dst.u8[12] = a.i8[12] - b.i8[12];
dst.u8[13] = a.i8[13] - b.i8[13];
dst.u8[14] = a.i8[14] - b.i8[14];
dst.u8[15] = a.i8[15] - b.i8[15];
dst.u8[16] = a.i8[16] - b.i8[16];
dst.u8[17] = a.i8[17] - b.i8[17];
dst.u8[18] = a.i8[18] - b.i8[18];
dst.u8[19] = a.i8[19] - b.i8[19];
dst.u8[20] = a.i8[20] - b.i8[20];
dst.u8[21] = a.i8[21] - b.i8[21];
dst.u8[22] = a.i8[22] - b.i8[22];
dst.u8[23] = a.i8[23] - b.i8[23];
dst.u8[24] = a.i8[24] - b.i8[24];
dst.u8[25] = a.i8[25] - b.i8[25];
dst.u8[26] = a.i8[26] - b.i8[26];
dst.u8[27] = a.i8[27] - b.i8[27];
dst.u8[28] = a.i8[28] - b.i8[28];
dst.u8[29] = a.i8[29] - b.i8[29];
dst.u8[30] = a.i8[30] - b.i8[30];
dst.u8[31] = a.i8[31] - b.i8[31];
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
return (__m256i)__builtin_lasx_mxsubv_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxsubv_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubv_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubv.d
Builtin: __builtin_lasx_mxsubv_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:447
```

### Description

Subtract modular integer lanes of `b` from `a` on 4 x u64 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u64[0] = a.i64[0] - b.i64[0];
dst.u64[1] = a.i64[1] - b.i64[1];
dst.u64[2] = a.i64[2] - b.i64[2];
dst.u64[3] = a.i64[3] - b.i64[3];
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
return (__m256i)__builtin_lasx_mxsubv_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxsubv_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubv_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubv.h
Builtin: __builtin_lasx_mxsubv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:433
```

### Description

Subtract modular integer lanes of `b` from `a` on 16 x u16 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u16[0] = a.i16[0] - b.i16[0];
dst.u16[1] = a.i16[1] - b.i16[1];
dst.u16[2] = a.i16[2] - b.i16[2];
dst.u16[3] = a.i16[3] - b.i16[3];
dst.u16[4] = a.i16[4] - b.i16[4];
dst.u16[5] = a.i16[5] - b.i16[5];
dst.u16[6] = a.i16[6] - b.i16[6];
dst.u16[7] = a.i16[7] - b.i16[7];
dst.u16[8] = a.i16[8] - b.i16[8];
dst.u16[9] = a.i16[9] - b.i16[9];
dst.u16[10] = a.i16[10] - b.i16[10];
dst.u16[11] = a.i16[11] - b.i16[11];
dst.u16[12] = a.i16[12] - b.i16[12];
dst.u16[13] = a.i16[13] - b.i16[13];
dst.u16[14] = a.i16[14] - b.i16[14];
dst.u16[15] = a.i16[15] - b.i16[15];
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
return (__m256i)__builtin_lasx_mxsubv_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxsubv_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubv_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubv.w
Builtin: __builtin_lasx_mxsubv_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:440
```

### Description

Subtract modular integer lanes of `b` from `a` on 8 x u32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u32[0] = a.i32[0] - b.i32[0];
dst.u32[1] = a.i32[1] - b.i32[1];
dst.u32[2] = a.i32[2] - b.i32[2];
dst.u32[3] = a.i32[3] - b.i32[3];
dst.u32[4] = a.i32[4] - b.i32[4];
dst.u32[5] = a.i32[5] - b.i32[5];
dst.u32[6] = a.i32[6] - b.i32[6];
dst.u32[7] = a.i32[7] - b.i32[7];
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
return (__m256i)__builtin_lasx_mxsubv_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxsubvi_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsubvi_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsubvi.b
Builtin: __builtin_lasx_mxsubvi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:453
```

### Description

Subtract modular integer lanes of `b` from `a` on 32 x u8 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u8[0] = a.i8[0] - imm;
dst.u8[1] = a.i8[1] - imm;
dst.u8[2] = a.i8[2] - imm;
dst.u8[3] = a.i8[3] - imm;
dst.u8[4] = a.i8[4] - imm;
dst.u8[5] = a.i8[5] - imm;
dst.u8[6] = a.i8[6] - imm;
dst.u8[7] = a.i8[7] - imm;
dst.u8[8] = a.i8[8] - imm;
dst.u8[9] = a.i8[9] - imm;
dst.u8[10] = a.i8[10] - imm;
dst.u8[11] = a.i8[11] - imm;
dst.u8[12] = a.i8[12] - imm;
dst.u8[13] = a.i8[13] - imm;
dst.u8[14] = a.i8[14] - imm;
dst.u8[15] = a.i8[15] - imm;
dst.u8[16] = a.i8[16] - imm;
dst.u8[17] = a.i8[17] - imm;
dst.u8[18] = a.i8[18] - imm;
dst.u8[19] = a.i8[19] - imm;
dst.u8[20] = a.i8[20] - imm;
dst.u8[21] = a.i8[21] - imm;
dst.u8[22] = a.i8[22] - imm;
dst.u8[23] = a.i8[23] - imm;
dst.u8[24] = a.i8[24] - imm;
dst.u8[25] = a.i8[25] - imm;
dst.u8[26] = a.i8[26] - imm;
dst.u8[27] = a.i8[27] - imm;
dst.u8[28] = a.i8[28] - imm;
dst.u8[29] = a.i8[29] - imm;
dst.u8[30] = a.i8[30] - imm;
dst.u8[31] = a.i8[31] - imm;
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
#define __lasx_mxsubvi_b(a, imm) ((__m256i)__builtin_lasx_mxsubvi_b((v32i8)(a), (imm)))
```

## __m256i __lasx_mxsubvi_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsubvi_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsubvi.d
Builtin: __builtin_lasx_mxsubvi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:456
```

### Description

Subtract modular integer lanes of `b` from `a` on 4 x u64 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u64[0] = a.i64[0] - imm;
dst.u64[1] = a.i64[1] - imm;
dst.u64[2] = a.i64[2] - imm;
dst.u64[3] = a.i64[3] - imm;
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
#define __lasx_mxsubvi_d(a, imm) ((__m256i)__builtin_lasx_mxsubvi_d((v4i64)(a), (imm)))
```

## __m256i __lasx_mxsubvi_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsubvi_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsubvi.h
Builtin: __builtin_lasx_mxsubvi_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:454
```

### Description

Subtract modular integer lanes of `b` from `a` on 16 x u16 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u16[0] = a.i16[0] - imm;
dst.u16[1] = a.i16[1] - imm;
dst.u16[2] = a.i16[2] - imm;
dst.u16[3] = a.i16[3] - imm;
dst.u16[4] = a.i16[4] - imm;
dst.u16[5] = a.i16[5] - imm;
dst.u16[6] = a.i16[6] - imm;
dst.u16[7] = a.i16[7] - imm;
dst.u16[8] = a.i16[8] - imm;
dst.u16[9] = a.i16[9] - imm;
dst.u16[10] = a.i16[10] - imm;
dst.u16[11] = a.i16[11] - imm;
dst.u16[12] = a.i16[12] - imm;
dst.u16[13] = a.i16[13] - imm;
dst.u16[14] = a.i16[14] - imm;
dst.u16[15] = a.i16[15] - imm;
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
#define __lasx_mxsubvi_h(a, imm) ((__m256i)__builtin_lasx_mxsubvi_h((v16i16)(a), (imm)))
```

## __m256i __lasx_mxsubvi_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsubvi_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsubvi.w
Builtin: __builtin_lasx_mxsubvi_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:455
```

### Description

Subtract modular integer lanes of `b` from `a` on 8 x u32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u32[0] = a.i32[0] - imm;
dst.u32[1] = a.i32[1] - imm;
dst.u32[2] = a.i32[2] - imm;
dst.u32[3] = a.i32[3] - imm;
dst.u32[4] = a.i32[4] - imm;
dst.u32[5] = a.i32[5] - imm;
dst.u32[6] = a.i32[6] - imm;
dst.u32[7] = a.i32[7] - imm;
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
#define __lasx_mxsubvi_w(a, imm) ((__m256i)__builtin_lasx_mxsubvi_w((v8i32)(a), (imm)))
```

## __m256i __lasx_mxvabs_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvabs_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvabs.b
Builtin: __builtin_lasx_mxvabs_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2802
```

### Description

Take the absolute value of each signed integer lane on 32 x u8 lanes.

### Operation

```c
dst.u8[0] = abs(a.i8[0]);
dst.u8[1] = abs(a.i8[1]);
dst.u8[2] = abs(a.i8[2]);
dst.u8[3] = abs(a.i8[3]);
dst.u8[4] = abs(a.i8[4]);
dst.u8[5] = abs(a.i8[5]);
dst.u8[6] = abs(a.i8[6]);
dst.u8[7] = abs(a.i8[7]);
dst.u8[8] = abs(a.i8[8]);
dst.u8[9] = abs(a.i8[9]);
dst.u8[10] = abs(a.i8[10]);
dst.u8[11] = abs(a.i8[11]);
dst.u8[12] = abs(a.i8[12]);
dst.u8[13] = abs(a.i8[13]);
dst.u8[14] = abs(a.i8[14]);
dst.u8[15] = abs(a.i8[15]);
dst.u8[16] = abs(a.i8[16]);
dst.u8[17] = abs(a.i8[17]);
dst.u8[18] = abs(a.i8[18]);
dst.u8[19] = abs(a.i8[19]);
dst.u8[20] = abs(a.i8[20]);
dst.u8[21] = abs(a.i8[21]);
dst.u8[22] = abs(a.i8[22]);
dst.u8[23] = abs(a.i8[23]);
dst.u8[24] = abs(a.i8[24]);
dst.u8[25] = abs(a.i8[25]);
dst.u8[26] = abs(a.i8[26]);
dst.u8[27] = abs(a.i8[27]);
dst.u8[28] = abs(a.i8[28]);
dst.u8[29] = abs(a.i8[29]);
dst.u8[30] = abs(a.i8[30]);
dst.u8[31] = abs(a.i8[31]);
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
return (__m256i)__builtin_lasx_mxvabs_b((v32i8)a);
```

## __m256i __lasx_mxvabs_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvabs_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvabs.d
Builtin: __builtin_lasx_mxvabs_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2823
```

### Description

Take the absolute value of each signed integer lane on 4 x u64 lanes.

### Operation

```c
dst.u64[0] = abs(a.i64[0]);
dst.u64[1] = abs(a.i64[1]);
dst.u64[2] = abs(a.i64[2]);
dst.u64[3] = abs(a.i64[3]);
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
return (__m256i)__builtin_lasx_mxvabs_d((v4i64)a);
```

## __m256i __lasx_mxvabs_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvabs_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvabs.h
Builtin: __builtin_lasx_mxvabs_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2809
```

### Description

Take the absolute value of each signed integer lane on 16 x u16 lanes.

### Operation

```c
dst.u16[0] = abs(a.i16[0]);
dst.u16[1] = abs(a.i16[1]);
dst.u16[2] = abs(a.i16[2]);
dst.u16[3] = abs(a.i16[3]);
dst.u16[4] = abs(a.i16[4]);
dst.u16[5] = abs(a.i16[5]);
dst.u16[6] = abs(a.i16[6]);
dst.u16[7] = abs(a.i16[7]);
dst.u16[8] = abs(a.i16[8]);
dst.u16[9] = abs(a.i16[9]);
dst.u16[10] = abs(a.i16[10]);
dst.u16[11] = abs(a.i16[11]);
dst.u16[12] = abs(a.i16[12]);
dst.u16[13] = abs(a.i16[13]);
dst.u16[14] = abs(a.i16[14]);
dst.u16[15] = abs(a.i16[15]);
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
return (__m256i)__builtin_lasx_mxvabs_h((v16i16)a);
```

## __m256i __lasx_mxvabs_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvabs_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvabs.w
Builtin: __builtin_lasx_mxvabs_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2816
```

### Description

Take the absolute value of each signed integer lane on 8 x u32 lanes.

### Operation

```c
dst.u32[0] = abs(a.i32[0]);
dst.u32[1] = abs(a.i32[1]);
dst.u32[2] = abs(a.i32[2]);
dst.u32[3] = abs(a.i32[3]);
dst.u32[4] = abs(a.i32[4]);
dst.u32[5] = abs(a.i32[5]);
dst.u32[6] = abs(a.i32[6]);
dst.u32[7] = abs(a.i32[7]);
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
return (__m256i)__builtin_lasx_mxvabs_w((v8i32)a);
```

## __m256i __lasx_mxvacc4b_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvacc4b_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvacc4b.u.h
Builtin: __builtin_lasx_mxvacc4b_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3082
```

### Description

Sum groups of 4 unsigned bytes into wider lanes, reducing packed byte data into partial sums.

### Operation

```c
dst.u32[0] = a.u8[0] + a.u8[1] + a.u8[2] + a.u8[3];
dst.u32[1] = a.u8[4] + a.u8[5] + a.u8[6] + a.u8[7];
dst.u32[2] = a.u8[8] + a.u8[9] + a.u8[10] + a.u8[11];
dst.u32[3] = a.u8[12] + a.u8[13] + a.u8[14] + a.u8[15];
dst.u32[4] = a.u8[16] + a.u8[17] + a.u8[18] + a.u8[19];
dst.u32[5] = a.u8[20] + a.u8[21] + a.u8[22] + a.u8[23];
dst.u32[6] = a.u8[24] + a.u8[25] + a.u8[26] + a.u8[27];
dst.u32[7] = a.u8[28] + a.u8[29] + a.u8[30] + a.u8[31];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvacc4b_u_h((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxvacc8b_u_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvacc8b_u_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvacc8b.u.d
Builtin: __builtin_lasx_mxvacc8b_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3089
```

### Description

Sum groups of 8 unsigned bytes into wider lanes, reducing packed byte data into partial sums.

### Operation

```c
dst.u64[0] = a.u8[0] + a.u8[1] + a.u8[2] + a.u8[3] + a.u8[4] + a.u8[5] + a.u8[6] + a.u8[7];
dst.u64[1] = a.u8[8] + a.u8[9] + a.u8[10] + a.u8[11] + a.u8[12] + a.u8[13] + a.u8[14] + a.u8[15];
dst.u64[2] = a.u8[16] + a.u8[17] + a.u8[18] + a.u8[19] + a.u8[20] + a.u8[21] + a.u8[22] + a.u8[23];
dst.u64[3] = a.u8[24] + a.u8[25] + a.u8[26] + a.u8[27] + a.u8[28] + a.u8[29] + a.u8[30] + a.u8[31];
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
return (__m256i)__builtin_lasx_mxvacc8b_u_d((v32u8)a);
```

## __m256i __lasx_mxvadd_el0_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.q
Builtin: __builtin_lasx_mxvadd_el0_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4740
```

### Description

Add modular integer lanes of `a` and `b` on 2 x u128 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u128[0] = a.i64[0] + b.i64[0];
dst.u128[1] = a.i64[1] + b.i64[1];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxvadd_el0_q ((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_el0_s_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_s_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.s.wx.d
Builtin: __builtin_lasx_mxvadd_el0_s_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5184
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) + widen(b.i64[0]);
dst.i128[1] = widen(a.i64[0]) + widen(b.i64[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_s_wx_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_el0_s_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_s_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.s.wx.h
Builtin: __builtin_lasx_mxvadd_el0_s_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5142
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[1] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[2] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[3] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[4] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[5] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[6] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[7] = widen(a.i16[0]) + widen(b.i16[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_s_wx_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_el0_s_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_s_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.s.wx.w
Builtin: __builtin_lasx_mxvadd_el0_s_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5163
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) + widen(b.i32[0]);
dst.i64[1] = widen(a.i32[0]) + widen(b.i32[0]);
dst.i64[2] = widen(a.i32[0]) + widen(b.i32[0]);
dst.i64[3] = widen(a.i32[0]) + widen(b.i32[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_s_wx_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_el0_u_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_u_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.u.wx.d
Builtin: __builtin_lasx_mxvadd_el0_u_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5247
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.u64[0]);
dst.u128[1] = widen(a.u64[0]) + widen(b.u64[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_u_wx_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvadd_el0_u_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_u_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.u.wx.h
Builtin: __builtin_lasx_mxvadd_el0_u_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5205
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[1] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[2] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[3] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[4] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[5] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[6] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[7] = widen(a.u16[0]) + widen(b.u16[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_u_wx_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvadd_el0_u_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_u_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.u.wx.w
Builtin: __builtin_lasx_mxvadd_el0_u_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5226
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) + widen(b.u32[0]);
dst.u64[1] = widen(a.u32[0]) + widen(b.u32[0]);
dst.u64[2] = widen(a.u32[0]) + widen(b.u32[0]);
dst.u64[3] = widen(a.u32[0]) + widen(b.u32[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_u_wx_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvadd_el0_us_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_us_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.us.wx.d
Builtin: __builtin_lasx_mxvadd_el0_us_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5310
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.i64[0]);
dst.u128[1] = widen(a.u64[0]) + widen(b.i64[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_us_wx_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_el0_us_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_us_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.us.wx.h
Builtin: __builtin_lasx_mxvadd_el0_us_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5268
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[1] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[2] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[3] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[4] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[5] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[6] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[7] = widen(a.u16[0]) + widen(b.i16[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_us_wx_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_el0_us_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_us_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.us.wx.w
Builtin: __builtin_lasx_mxvadd_el0_us_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5289
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) + widen(b.i32[0]);
dst.u64[1] = widen(a.u32[0]) + widen(b.i32[0]);
dst.u64[2] = widen(a.u32[0]) + widen(b.i32[0]);
dst.u64[3] = widen(a.u32[0]) + widen(b.i32[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_us_wx_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_even_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.s.w2x.b
Builtin: __builtin_lasx_mxvadd_even_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5331
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[0]) + widen(b.i8[0]);
dst.i16[1] = widen(a.i8[2]) + widen(b.i8[2]);
dst.i16[2] = widen(a.i8[4]) + widen(b.i8[4]);
dst.i16[3] = widen(a.i8[6]) + widen(b.i8[6]);
dst.i16[4] = widen(a.i8[8]) + widen(b.i8[8]);
dst.i16[5] = widen(a.i8[10]) + widen(b.i8[10]);
dst.i16[6] = widen(a.i8[12]) + widen(b.i8[12]);
dst.i16[7] = widen(a.i8[14]) + widen(b.i8[14]);
dst.i16[8] = widen(a.i8[16]) + widen(b.i8[16]);
dst.i16[9] = widen(a.i8[18]) + widen(b.i8[18]);
dst.i16[10] = widen(a.i8[20]) + widen(b.i8[20]);
dst.i16[11] = widen(a.i8[22]) + widen(b.i8[22]);
dst.i16[12] = widen(a.i8[24]) + widen(b.i8[24]);
dst.i16[13] = widen(a.i8[26]) + widen(b.i8[26]);
dst.i16[14] = widen(a.i8[28]) + widen(b.i8[28]);
dst.i16[15] = widen(a.i8[30]) + widen(b.i8[30]);
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
return (__m256i)__builtin_lasx_mxvadd_even_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_even_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.s.w2x.d
Builtin: __builtin_lasx_mxvadd_even_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5394
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) + widen(b.i64[0]);
dst.i128[1] = widen(a.i64[2]) + widen(b.i64[2]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_even_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.s.w2x.h
Builtin: __builtin_lasx_mxvadd_even_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5352
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[1] = widen(a.i16[2]) + widen(b.i16[2]);
dst.i32[2] = widen(a.i16[4]) + widen(b.i16[4]);
dst.i32[3] = widen(a.i16[6]) + widen(b.i16[6]);
dst.i32[4] = widen(a.i16[8]) + widen(b.i16[8]);
dst.i32[5] = widen(a.i16[10]) + widen(b.i16[10]);
dst.i32[6] = widen(a.i16[12]) + widen(b.i16[12]);
dst.i32[7] = widen(a.i16[14]) + widen(b.i16[14]);
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
return (__m256i)__builtin_lasx_mxvadd_even_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_even_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.s.w2x.w
Builtin: __builtin_lasx_mxvadd_even_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5373
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) + widen(b.i32[0]);
dst.i64[1] = widen(a.i32[2]) + widen(b.i32[2]);
dst.i64[2] = widen(a.i32[4]) + widen(b.i32[4]);
dst.i64[3] = widen(a.i32[6]) + widen(b.i32[6]);
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
return (__m256i)__builtin_lasx_mxvadd_even_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_even_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.u.w2x.b
Builtin: __builtin_lasx_mxvadd_even_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5415
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[0]) + widen(b.u8[0]);
dst.u16[1] = widen(a.u8[2]) + widen(b.u8[2]);
dst.u16[2] = widen(a.u8[4]) + widen(b.u8[4]);
dst.u16[3] = widen(a.u8[6]) + widen(b.u8[6]);
dst.u16[4] = widen(a.u8[8]) + widen(b.u8[8]);
dst.u16[5] = widen(a.u8[10]) + widen(b.u8[10]);
dst.u16[6] = widen(a.u8[12]) + widen(b.u8[12]);
dst.u16[7] = widen(a.u8[14]) + widen(b.u8[14]);
dst.u16[8] = widen(a.u8[16]) + widen(b.u8[16]);
dst.u16[9] = widen(a.u8[18]) + widen(b.u8[18]);
dst.u16[10] = widen(a.u8[20]) + widen(b.u8[20]);
dst.u16[11] = widen(a.u8[22]) + widen(b.u8[22]);
dst.u16[12] = widen(a.u8[24]) + widen(b.u8[24]);
dst.u16[13] = widen(a.u8[26]) + widen(b.u8[26]);
dst.u16[14] = widen(a.u8[28]) + widen(b.u8[28]);
dst.u16[15] = widen(a.u8[30]) + widen(b.u8[30]);
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
return (__m256i)__builtin_lasx_mxvadd_even_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvadd_even_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.u.w2x.d
Builtin: __builtin_lasx_mxvadd_even_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5478
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.u64[0]);
dst.u128[1] = widen(a.u64[2]) + widen(b.u64[2]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvadd_even_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.u.w2x.h
Builtin: __builtin_lasx_mxvadd_even_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5436
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[1] = widen(a.u16[2]) + widen(b.u16[2]);
dst.u32[2] = widen(a.u16[4]) + widen(b.u16[4]);
dst.u32[3] = widen(a.u16[6]) + widen(b.u16[6]);
dst.u32[4] = widen(a.u16[8]) + widen(b.u16[8]);
dst.u32[5] = widen(a.u16[10]) + widen(b.u16[10]);
dst.u32[6] = widen(a.u16[12]) + widen(b.u16[12]);
dst.u32[7] = widen(a.u16[14]) + widen(b.u16[14]);
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
return (__m256i)__builtin_lasx_mxvadd_even_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvadd_even_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.u.w2x.w
Builtin: __builtin_lasx_mxvadd_even_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5457
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) + widen(b.u32[0]);
dst.u64[1] = widen(a.u32[2]) + widen(b.u32[2]);
dst.u64[2] = widen(a.u32[4]) + widen(b.u32[4]);
dst.u64[3] = widen(a.u32[6]) + widen(b.u32[6]);
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
return (__m256i)__builtin_lasx_mxvadd_even_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvadd_even_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.us.w2x.b
Builtin: __builtin_lasx_mxvadd_even_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5499
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[0]) + widen(b.i8[0]);
dst.u16[1] = widen(a.u8[2]) + widen(b.i8[2]);
dst.u16[2] = widen(a.u8[4]) + widen(b.i8[4]);
dst.u16[3] = widen(a.u8[6]) + widen(b.i8[6]);
dst.u16[4] = widen(a.u8[8]) + widen(b.i8[8]);
dst.u16[5] = widen(a.u8[10]) + widen(b.i8[10]);
dst.u16[6] = widen(a.u8[12]) + widen(b.i8[12]);
dst.u16[7] = widen(a.u8[14]) + widen(b.i8[14]);
dst.u16[8] = widen(a.u8[16]) + widen(b.i8[16]);
dst.u16[9] = widen(a.u8[18]) + widen(b.i8[18]);
dst.u16[10] = widen(a.u8[20]) + widen(b.i8[20]);
dst.u16[11] = widen(a.u8[22]) + widen(b.i8[22]);
dst.u16[12] = widen(a.u8[24]) + widen(b.i8[24]);
dst.u16[13] = widen(a.u8[26]) + widen(b.i8[26]);
dst.u16[14] = widen(a.u8[28]) + widen(b.i8[28]);
dst.u16[15] = widen(a.u8[30]) + widen(b.i8[30]);
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
return (__m256i)__builtin_lasx_mxvadd_even_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_even_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.us.w2x.d
Builtin: __builtin_lasx_mxvadd_even_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5562
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.i64[0]);
dst.u128[1] = widen(a.u64[2]) + widen(b.i64[2]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_even_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.us.w2x.h
Builtin: __builtin_lasx_mxvadd_even_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5520
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[1] = widen(a.u16[2]) + widen(b.i16[2]);
dst.u32[2] = widen(a.u16[4]) + widen(b.i16[4]);
dst.u32[3] = widen(a.u16[6]) + widen(b.i16[6]);
dst.u32[4] = widen(a.u16[8]) + widen(b.i16[8]);
dst.u32[5] = widen(a.u16[10]) + widen(b.i16[10]);
dst.u32[6] = widen(a.u16[12]) + widen(b.i16[12]);
dst.u32[7] = widen(a.u16[14]) + widen(b.i16[14]);
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
return (__m256i)__builtin_lasx_mxvadd_even_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_even_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.us.w2x.w
Builtin: __builtin_lasx_mxvadd_even_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5541
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) + widen(b.i32[0]);
dst.u64[1] = widen(a.u32[2]) + widen(b.i32[2]);
dst.u64[2] = widen(a.u32[4]) + widen(b.i32[4]);
dst.u64[3] = widen(a.u32[6]) + widen(b.i32[6]);
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
return (__m256i)__builtin_lasx_mxvadd_even_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_hi_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.s.w2x.b
Builtin: __builtin_lasx_mxvadd_hi_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6087
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[16]) + widen(b.i8[16]);
dst.i16[1] = widen(a.i8[17]) + widen(b.i8[17]);
dst.i16[2] = widen(a.i8[18]) + widen(b.i8[18]);
dst.i16[3] = widen(a.i8[19]) + widen(b.i8[19]);
dst.i16[4] = widen(a.i8[20]) + widen(b.i8[20]);
dst.i16[5] = widen(a.i8[21]) + widen(b.i8[21]);
dst.i16[6] = widen(a.i8[22]) + widen(b.i8[22]);
dst.i16[7] = widen(a.i8[23]) + widen(b.i8[23]);
dst.i16[8] = widen(a.i8[24]) + widen(b.i8[24]);
dst.i16[9] = widen(a.i8[25]) + widen(b.i8[25]);
dst.i16[10] = widen(a.i8[26]) + widen(b.i8[26]);
dst.i16[11] = widen(a.i8[27]) + widen(b.i8[27]);
dst.i16[12] = widen(a.i8[28]) + widen(b.i8[28]);
dst.i16[13] = widen(a.i8[29]) + widen(b.i8[29]);
dst.i16[14] = widen(a.i8[30]) + widen(b.i8[30]);
dst.i16[15] = widen(a.i8[31]) + widen(b.i8[31]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_hi_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.s.w2x.d
Builtin: __builtin_lasx_mxvadd_hi_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6150
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[2]) + widen(b.i64[2]);
dst.i128[1] = widen(a.i64[3]) + widen(b.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_hi_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.s.w2x.h
Builtin: __builtin_lasx_mxvadd_hi_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6108
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[8]) + widen(b.i16[8]);
dst.i32[1] = widen(a.i16[9]) + widen(b.i16[9]);
dst.i32[2] = widen(a.i16[10]) + widen(b.i16[10]);
dst.i32[3] = widen(a.i16[11]) + widen(b.i16[11]);
dst.i32[4] = widen(a.i16[12]) + widen(b.i16[12]);
dst.i32[5] = widen(a.i16[13]) + widen(b.i16[13]);
dst.i32[6] = widen(a.i16[14]) + widen(b.i16[14]);
dst.i32[7] = widen(a.i16[15]) + widen(b.i16[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_hi_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.s.w2x.w
Builtin: __builtin_lasx_mxvadd_hi_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6129
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[4]) + widen(b.i32[4]);
dst.i64[1] = widen(a.i32[5]) + widen(b.i32[5]);
dst.i64[2] = widen(a.i32[6]) + widen(b.i32[6]);
dst.i64[3] = widen(a.i32[7]) + widen(b.i32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_hi_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.u.w2x.b
Builtin: __builtin_lasx_mxvadd_hi_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6171
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[16]) + widen(b.u8[16]);
dst.u16[1] = widen(a.u8[17]) + widen(b.u8[17]);
dst.u16[2] = widen(a.u8[18]) + widen(b.u8[18]);
dst.u16[3] = widen(a.u8[19]) + widen(b.u8[19]);
dst.u16[4] = widen(a.u8[20]) + widen(b.u8[20]);
dst.u16[5] = widen(a.u8[21]) + widen(b.u8[21]);
dst.u16[6] = widen(a.u8[22]) + widen(b.u8[22]);
dst.u16[7] = widen(a.u8[23]) + widen(b.u8[23]);
dst.u16[8] = widen(a.u8[24]) + widen(b.u8[24]);
dst.u16[9] = widen(a.u8[25]) + widen(b.u8[25]);
dst.u16[10] = widen(a.u8[26]) + widen(b.u8[26]);
dst.u16[11] = widen(a.u8[27]) + widen(b.u8[27]);
dst.u16[12] = widen(a.u8[28]) + widen(b.u8[28]);
dst.u16[13] = widen(a.u8[29]) + widen(b.u8[29]);
dst.u16[14] = widen(a.u8[30]) + widen(b.u8[30]);
dst.u16[15] = widen(a.u8[31]) + widen(b.u8[31]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvadd_hi_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.u.w2x.d
Builtin: __builtin_lasx_mxvadd_hi_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6234
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[2]) + widen(b.u64[2]);
dst.u128[1] = widen(a.u64[3]) + widen(b.u64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvadd_hi_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.u.w2x.h
Builtin: __builtin_lasx_mxvadd_hi_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6192
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[8]) + widen(b.u16[8]);
dst.u32[1] = widen(a.u16[9]) + widen(b.u16[9]);
dst.u32[2] = widen(a.u16[10]) + widen(b.u16[10]);
dst.u32[3] = widen(a.u16[11]) + widen(b.u16[11]);
dst.u32[4] = widen(a.u16[12]) + widen(b.u16[12]);
dst.u32[5] = widen(a.u16[13]) + widen(b.u16[13]);
dst.u32[6] = widen(a.u16[14]) + widen(b.u16[14]);
dst.u32[7] = widen(a.u16[15]) + widen(b.u16[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvadd_hi_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.u.w2x.w
Builtin: __builtin_lasx_mxvadd_hi_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6213
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[4]) + widen(b.u32[4]);
dst.u64[1] = widen(a.u32[5]) + widen(b.u32[5]);
dst.u64[2] = widen(a.u32[6]) + widen(b.u32[6]);
dst.u64[3] = widen(a.u32[7]) + widen(b.u32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvadd_hi_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.us.w2x.b
Builtin: __builtin_lasx_mxvadd_hi_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6255
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[16]) + widen(b.i8[16]);
dst.u16[1] = widen(a.u8[17]) + widen(b.i8[17]);
dst.u16[2] = widen(a.u8[18]) + widen(b.i8[18]);
dst.u16[3] = widen(a.u8[19]) + widen(b.i8[19]);
dst.u16[4] = widen(a.u8[20]) + widen(b.i8[20]);
dst.u16[5] = widen(a.u8[21]) + widen(b.i8[21]);
dst.u16[6] = widen(a.u8[22]) + widen(b.i8[22]);
dst.u16[7] = widen(a.u8[23]) + widen(b.i8[23]);
dst.u16[8] = widen(a.u8[24]) + widen(b.i8[24]);
dst.u16[9] = widen(a.u8[25]) + widen(b.i8[25]);
dst.u16[10] = widen(a.u8[26]) + widen(b.i8[26]);
dst.u16[11] = widen(a.u8[27]) + widen(b.i8[27]);
dst.u16[12] = widen(a.u8[28]) + widen(b.i8[28]);
dst.u16[13] = widen(a.u8[29]) + widen(b.i8[29]);
dst.u16[14] = widen(a.u8[30]) + widen(b.i8[30]);
dst.u16[15] = widen(a.u8[31]) + widen(b.i8[31]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_hi_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.us.w2x.d
Builtin: __builtin_lasx_mxvadd_hi_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6318
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[2]) + widen(b.i64[2]);
dst.u128[1] = widen(a.u64[3]) + widen(b.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_hi_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.us.w2x.h
Builtin: __builtin_lasx_mxvadd_hi_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6276
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[8]) + widen(b.i16[8]);
dst.u32[1] = widen(a.u16[9]) + widen(b.i16[9]);
dst.u32[2] = widen(a.u16[10]) + widen(b.i16[10]);
dst.u32[3] = widen(a.u16[11]) + widen(b.i16[11]);
dst.u32[4] = widen(a.u16[12]) + widen(b.i16[12]);
dst.u32[5] = widen(a.u16[13]) + widen(b.i16[13]);
dst.u32[6] = widen(a.u16[14]) + widen(b.i16[14]);
dst.u32[7] = widen(a.u16[15]) + widen(b.i16[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_hi_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.us.w2x.w
Builtin: __builtin_lasx_mxvadd_hi_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6297
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[4]) + widen(b.i32[4]);
dst.u64[1] = widen(a.u32[5]) + widen(b.i32[5]);
dst.u64[2] = widen(a.u32[6]) + widen(b.i32[6]);
dst.u64[3] = widen(a.u32[7]) + widen(b.i32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_lo_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.s.w2x.b
Builtin: __builtin_lasx_mxvadd_lo_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5835
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[0]) + widen(b.i8[0]);
dst.i16[1] = widen(a.i8[1]) + widen(b.i8[1]);
dst.i16[2] = widen(a.i8[2]) + widen(b.i8[2]);
dst.i16[3] = widen(a.i8[3]) + widen(b.i8[3]);
dst.i16[4] = widen(a.i8[4]) + widen(b.i8[4]);
dst.i16[5] = widen(a.i8[5]) + widen(b.i8[5]);
dst.i16[6] = widen(a.i8[6]) + widen(b.i8[6]);
dst.i16[7] = widen(a.i8[7]) + widen(b.i8[7]);
dst.i16[8] = widen(a.i8[8]) + widen(b.i8[8]);
dst.i16[9] = widen(a.i8[9]) + widen(b.i8[9]);
dst.i16[10] = widen(a.i8[10]) + widen(b.i8[10]);
dst.i16[11] = widen(a.i8[11]) + widen(b.i8[11]);
dst.i16[12] = widen(a.i8[12]) + widen(b.i8[12]);
dst.i16[13] = widen(a.i8[13]) + widen(b.i8[13]);
dst.i16[14] = widen(a.i8[14]) + widen(b.i8[14]);
dst.i16[15] = widen(a.i8[15]) + widen(b.i8[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_lo_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.s.w2x.d
Builtin: __builtin_lasx_mxvadd_lo_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5898
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) + widen(b.i64[0]);
dst.i128[1] = widen(a.i64[1]) + widen(b.i64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_lo_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.s.w2x.h
Builtin: __builtin_lasx_mxvadd_lo_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5856
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[1] = widen(a.i16[1]) + widen(b.i16[1]);
dst.i32[2] = widen(a.i16[2]) + widen(b.i16[2]);
dst.i32[3] = widen(a.i16[3]) + widen(b.i16[3]);
dst.i32[4] = widen(a.i16[4]) + widen(b.i16[4]);
dst.i32[5] = widen(a.i16[5]) + widen(b.i16[5]);
dst.i32[6] = widen(a.i16[6]) + widen(b.i16[6]);
dst.i32[7] = widen(a.i16[7]) + widen(b.i16[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_lo_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.s.w2x.w
Builtin: __builtin_lasx_mxvadd_lo_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5877
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) + widen(b.i32[0]);
dst.i64[1] = widen(a.i32[1]) + widen(b.i32[1]);
dst.i64[2] = widen(a.i32[2]) + widen(b.i32[2]);
dst.i64[3] = widen(a.i32[3]) + widen(b.i32[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_lo_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.u.w2x.b
Builtin: __builtin_lasx_mxvadd_lo_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5919
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[0]) + widen(b.u8[0]);
dst.u16[1] = widen(a.u8[1]) + widen(b.u8[1]);
dst.u16[2] = widen(a.u8[2]) + widen(b.u8[2]);
dst.u16[3] = widen(a.u8[3]) + widen(b.u8[3]);
dst.u16[4] = widen(a.u8[4]) + widen(b.u8[4]);
dst.u16[5] = widen(a.u8[5]) + widen(b.u8[5]);
dst.u16[6] = widen(a.u8[6]) + widen(b.u8[6]);
dst.u16[7] = widen(a.u8[7]) + widen(b.u8[7]);
dst.u16[8] = widen(a.u8[8]) + widen(b.u8[8]);
dst.u16[9] = widen(a.u8[9]) + widen(b.u8[9]);
dst.u16[10] = widen(a.u8[10]) + widen(b.u8[10]);
dst.u16[11] = widen(a.u8[11]) + widen(b.u8[11]);
dst.u16[12] = widen(a.u8[12]) + widen(b.u8[12]);
dst.u16[13] = widen(a.u8[13]) + widen(b.u8[13]);
dst.u16[14] = widen(a.u8[14]) + widen(b.u8[14]);
dst.u16[15] = widen(a.u8[15]) + widen(b.u8[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvadd_lo_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.u.w2x.d
Builtin: __builtin_lasx_mxvadd_lo_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5982
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.u64[0]);
dst.u128[1] = widen(a.u64[1]) + widen(b.u64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvadd_lo_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.u.w2x.h
Builtin: __builtin_lasx_mxvadd_lo_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5940
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[1] = widen(a.u16[1]) + widen(b.u16[1]);
dst.u32[2] = widen(a.u16[2]) + widen(b.u16[2]);
dst.u32[3] = widen(a.u16[3]) + widen(b.u16[3]);
dst.u32[4] = widen(a.u16[4]) + widen(b.u16[4]);
dst.u32[5] = widen(a.u16[5]) + widen(b.u16[5]);
dst.u32[6] = widen(a.u16[6]) + widen(b.u16[6]);
dst.u32[7] = widen(a.u16[7]) + widen(b.u16[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvadd_lo_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.u.w2x.w
Builtin: __builtin_lasx_mxvadd_lo_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5961
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) + widen(b.u32[0]);
dst.u64[1] = widen(a.u32[1]) + widen(b.u32[1]);
dst.u64[2] = widen(a.u32[2]) + widen(b.u32[2]);
dst.u64[3] = widen(a.u32[3]) + widen(b.u32[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvadd_lo_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.us.w2x.b
Builtin: __builtin_lasx_mxvadd_lo_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6003
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[0]) + widen(b.i8[0]);
dst.u16[1] = widen(a.u8[1]) + widen(b.i8[1]);
dst.u16[2] = widen(a.u8[2]) + widen(b.i8[2]);
dst.u16[3] = widen(a.u8[3]) + widen(b.i8[3]);
dst.u16[4] = widen(a.u8[4]) + widen(b.i8[4]);
dst.u16[5] = widen(a.u8[5]) + widen(b.i8[5]);
dst.u16[6] = widen(a.u8[6]) + widen(b.i8[6]);
dst.u16[7] = widen(a.u8[7]) + widen(b.i8[7]);
dst.u16[8] = widen(a.u8[8]) + widen(b.i8[8]);
dst.u16[9] = widen(a.u8[9]) + widen(b.i8[9]);
dst.u16[10] = widen(a.u8[10]) + widen(b.i8[10]);
dst.u16[11] = widen(a.u8[11]) + widen(b.i8[11]);
dst.u16[12] = widen(a.u8[12]) + widen(b.i8[12]);
dst.u16[13] = widen(a.u8[13]) + widen(b.i8[13]);
dst.u16[14] = widen(a.u8[14]) + widen(b.i8[14]);
dst.u16[15] = widen(a.u8[15]) + widen(b.i8[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_lo_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.us.w2x.d
Builtin: __builtin_lasx_mxvadd_lo_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6066
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.i64[0]);
dst.u128[1] = widen(a.u64[1]) + widen(b.i64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_lo_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.us.w2x.h
Builtin: __builtin_lasx_mxvadd_lo_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6024
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[1] = widen(a.u16[1]) + widen(b.i16[1]);
dst.u32[2] = widen(a.u16[2]) + widen(b.i16[2]);
dst.u32[3] = widen(a.u16[3]) + widen(b.i16[3]);
dst.u32[4] = widen(a.u16[4]) + widen(b.i16[4]);
dst.u32[5] = widen(a.u16[5]) + widen(b.i16[5]);
dst.u32[6] = widen(a.u16[6]) + widen(b.i16[6]);
dst.u32[7] = widen(a.u16[7]) + widen(b.i16[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_lo_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.us.w2x.w
Builtin: __builtin_lasx_mxvadd_lo_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6045
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) + widen(b.i32[0]);
dst.u64[1] = widen(a.u32[1]) + widen(b.i32[1]);
dst.u64[2] = widen(a.u32[2]) + widen(b.i32[2]);
dst.u64[3] = widen(a.u32[3]) + widen(b.i32[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_odd_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.s.w2x.b
Builtin: __builtin_lasx_mxvadd_odd_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5583
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[1]) + widen(b.i8[1]);
dst.i16[1] = widen(a.i8[3]) + widen(b.i8[3]);
dst.i16[2] = widen(a.i8[5]) + widen(b.i8[5]);
dst.i16[3] = widen(a.i8[7]) + widen(b.i8[7]);
dst.i16[4] = widen(a.i8[9]) + widen(b.i8[9]);
dst.i16[5] = widen(a.i8[11]) + widen(b.i8[11]);
dst.i16[6] = widen(a.i8[13]) + widen(b.i8[13]);
dst.i16[7] = widen(a.i8[15]) + widen(b.i8[15]);
dst.i16[8] = widen(a.i8[17]) + widen(b.i8[17]);
dst.i16[9] = widen(a.i8[19]) + widen(b.i8[19]);
dst.i16[10] = widen(a.i8[21]) + widen(b.i8[21]);
dst.i16[11] = widen(a.i8[23]) + widen(b.i8[23]);
dst.i16[12] = widen(a.i8[25]) + widen(b.i8[25]);
dst.i16[13] = widen(a.i8[27]) + widen(b.i8[27]);
dst.i16[14] = widen(a.i8[29]) + widen(b.i8[29]);
dst.i16[15] = widen(a.i8[31]) + widen(b.i8[31]);
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
return (__m256i)__builtin_lasx_mxvadd_odd_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_odd_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.s.w2x.d
Builtin: __builtin_lasx_mxvadd_odd_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5646
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[1]) + widen(b.i64[1]);
dst.i128[1] = widen(a.i64[3]) + widen(b.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_odd_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.s.w2x.h
Builtin: __builtin_lasx_mxvadd_odd_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5604
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[1]) + widen(b.i16[1]);
dst.i32[1] = widen(a.i16[3]) + widen(b.i16[3]);
dst.i32[2] = widen(a.i16[5]) + widen(b.i16[5]);
dst.i32[3] = widen(a.i16[7]) + widen(b.i16[7]);
dst.i32[4] = widen(a.i16[9]) + widen(b.i16[9]);
dst.i32[5] = widen(a.i16[11]) + widen(b.i16[11]);
dst.i32[6] = widen(a.i16[13]) + widen(b.i16[13]);
dst.i32[7] = widen(a.i16[15]) + widen(b.i16[15]);
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
return (__m256i)__builtin_lasx_mxvadd_odd_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_odd_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.s.w2x.w
Builtin: __builtin_lasx_mxvadd_odd_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5625
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[1]) + widen(b.i32[1]);
dst.i64[1] = widen(a.i32[3]) + widen(b.i32[3]);
dst.i64[2] = widen(a.i32[5]) + widen(b.i32[5]);
dst.i64[3] = widen(a.i32[7]) + widen(b.i32[7]);
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
return (__m256i)__builtin_lasx_mxvadd_odd_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_odd_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.u.w2x.b
Builtin: __builtin_lasx_mxvadd_odd_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5667
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[1]) + widen(b.u8[1]);
dst.u16[1] = widen(a.u8[3]) + widen(b.u8[3]);
dst.u16[2] = widen(a.u8[5]) + widen(b.u8[5]);
dst.u16[3] = widen(a.u8[7]) + widen(b.u8[7]);
dst.u16[4] = widen(a.u8[9]) + widen(b.u8[9]);
dst.u16[5] = widen(a.u8[11]) + widen(b.u8[11]);
dst.u16[6] = widen(a.u8[13]) + widen(b.u8[13]);
dst.u16[7] = widen(a.u8[15]) + widen(b.u8[15]);
dst.u16[8] = widen(a.u8[17]) + widen(b.u8[17]);
dst.u16[9] = widen(a.u8[19]) + widen(b.u8[19]);
dst.u16[10] = widen(a.u8[21]) + widen(b.u8[21]);
dst.u16[11] = widen(a.u8[23]) + widen(b.u8[23]);
dst.u16[12] = widen(a.u8[25]) + widen(b.u8[25]);
dst.u16[13] = widen(a.u8[27]) + widen(b.u8[27]);
dst.u16[14] = widen(a.u8[29]) + widen(b.u8[29]);
dst.u16[15] = widen(a.u8[31]) + widen(b.u8[31]);
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
return (__m256i)__builtin_lasx_mxvadd_odd_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvadd_odd_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.u.w2x.d
Builtin: __builtin_lasx_mxvadd_odd_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5730
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) + widen(b.u64[1]);
dst.u128[1] = widen(a.u64[3]) + widen(b.u64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvadd_odd_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.u.w2x.h
Builtin: __builtin_lasx_mxvadd_odd_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5688
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[1]) + widen(b.u16[1]);
dst.u32[1] = widen(a.u16[3]) + widen(b.u16[3]);
dst.u32[2] = widen(a.u16[5]) + widen(b.u16[5]);
dst.u32[3] = widen(a.u16[7]) + widen(b.u16[7]);
dst.u32[4] = widen(a.u16[9]) + widen(b.u16[9]);
dst.u32[5] = widen(a.u16[11]) + widen(b.u16[11]);
dst.u32[6] = widen(a.u16[13]) + widen(b.u16[13]);
dst.u32[7] = widen(a.u16[15]) + widen(b.u16[15]);
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
return (__m256i)__builtin_lasx_mxvadd_odd_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvadd_odd_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.u.w2x.w
Builtin: __builtin_lasx_mxvadd_odd_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5709
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[1]) + widen(b.u32[1]);
dst.u64[1] = widen(a.u32[3]) + widen(b.u32[3]);
dst.u64[2] = widen(a.u32[5]) + widen(b.u32[5]);
dst.u64[3] = widen(a.u32[7]) + widen(b.u32[7]);
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
return (__m256i)__builtin_lasx_mxvadd_odd_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvadd_odd_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.us.w2x.b
Builtin: __builtin_lasx_mxvadd_odd_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5751
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[1]) + widen(b.i8[1]);
dst.u16[1] = widen(a.u8[3]) + widen(b.i8[3]);
dst.u16[2] = widen(a.u8[5]) + widen(b.i8[5]);
dst.u16[3] = widen(a.u8[7]) + widen(b.i8[7]);
dst.u16[4] = widen(a.u8[9]) + widen(b.i8[9]);
dst.u16[5] = widen(a.u8[11]) + widen(b.i8[11]);
dst.u16[6] = widen(a.u8[13]) + widen(b.i8[13]);
dst.u16[7] = widen(a.u8[15]) + widen(b.i8[15]);
dst.u16[8] = widen(a.u8[17]) + widen(b.i8[17]);
dst.u16[9] = widen(a.u8[19]) + widen(b.i8[19]);
dst.u16[10] = widen(a.u8[21]) + widen(b.i8[21]);
dst.u16[11] = widen(a.u8[23]) + widen(b.i8[23]);
dst.u16[12] = widen(a.u8[25]) + widen(b.i8[25]);
dst.u16[13] = widen(a.u8[27]) + widen(b.i8[27]);
dst.u16[14] = widen(a.u8[29]) + widen(b.i8[29]);
dst.u16[15] = widen(a.u8[31]) + widen(b.i8[31]);
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
return (__m256i)__builtin_lasx_mxvadd_odd_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_odd_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.us.w2x.d
Builtin: __builtin_lasx_mxvadd_odd_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5814
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) + widen(b.i64[1]);
dst.u128[1] = widen(a.u64[3]) + widen(b.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_odd_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.us.w2x.h
Builtin: __builtin_lasx_mxvadd_odd_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5772
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[1]) + widen(b.i16[1]);
dst.u32[1] = widen(a.u16[3]) + widen(b.i16[3]);
dst.u32[2] = widen(a.u16[5]) + widen(b.i16[5]);
dst.u32[3] = widen(a.u16[7]) + widen(b.i16[7]);
dst.u32[4] = widen(a.u16[9]) + widen(b.i16[9]);
dst.u32[5] = widen(a.u16[11]) + widen(b.i16[11]);
dst.u32[6] = widen(a.u16[13]) + widen(b.i16[13]);
dst.u32[7] = widen(a.u16[15]) + widen(b.i16[15]);
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
return (__m256i)__builtin_lasx_mxvadd_odd_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_odd_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.us.w2x.w
Builtin: __builtin_lasx_mxvadd_odd_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5793
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[1]) + widen(b.i32[1]);
dst.u64[1] = widen(a.u32[3]) + widen(b.i32[3]);
dst.u64[2] = widen(a.u32[5]) + widen(b.i32[5]);
dst.u64[3] = widen(a.u32[7]) + widen(b.i32[7]);
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
return (__m256i)__builtin_lasx_mxvadd_odd_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvaddx_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvaddx_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvaddx.s.d
Builtin: __builtin_lasx_mxvaddx_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2858
```

### Description

Treat `a` as 4 x i64 lanes, extend the corresponding narrower i32 lanes from `b`, and add them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i64[0] = a.i64[0] + sign_extend(b.i32[0], 64);
dst.i64[1] = a.i64[1] + sign_extend(b.i32[1], 64);
dst.i64[2] = a.i64[2] + sign_extend(b.i32[2], 64);
dst.i64[3] = a.i64[3] + sign_extend(b.i32[3], 64);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddx_s_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxvaddx_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvaddx_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvaddx.s.h
Builtin: __builtin_lasx_mxvaddx_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2872
```

### Description

Treat `a` as 16 x i16 lanes, extend the corresponding narrower i8 lanes from `b`, and add them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i16[0] = a.i16[0] + sign_extend(b.i8[0], 16);
dst.i16[1] = a.i16[1] + sign_extend(b.i8[1], 16);
dst.i16[2] = a.i16[2] + sign_extend(b.i8[2], 16);
dst.i16[3] = a.i16[3] + sign_extend(b.i8[3], 16);
dst.i16[4] = a.i16[4] + sign_extend(b.i8[4], 16);
dst.i16[5] = a.i16[5] + sign_extend(b.i8[5], 16);
dst.i16[6] = a.i16[6] + sign_extend(b.i8[6], 16);
dst.i16[7] = a.i16[7] + sign_extend(b.i8[7], 16);
dst.i16[8] = a.i16[8] + sign_extend(b.i8[8], 16);
dst.i16[9] = a.i16[9] + sign_extend(b.i8[9], 16);
dst.i16[10] = a.i16[10] + sign_extend(b.i8[10], 16);
dst.i16[11] = a.i16[11] + sign_extend(b.i8[11], 16);
dst.i16[12] = a.i16[12] + sign_extend(b.i8[12], 16);
dst.i16[13] = a.i16[13] + sign_extend(b.i8[13], 16);
dst.i16[14] = a.i16[14] + sign_extend(b.i8[14], 16);
dst.i16[15] = a.i16[15] + sign_extend(b.i8[15], 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddx_s_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxvaddx_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvaddx_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvaddx.s.w
Builtin: __builtin_lasx_mxvaddx_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2865
```

### Description

Treat `a` as 8 x i32 lanes, extend the corresponding narrower i16 lanes from `b`, and add them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i32[0] = a.i32[0] + sign_extend(b.i16[0], 32);
dst.i32[1] = a.i32[1] + sign_extend(b.i16[1], 32);
dst.i32[2] = a.i32[2] + sign_extend(b.i16[2], 32);
dst.i32[3] = a.i32[3] + sign_extend(b.i16[3], 32);
dst.i32[4] = a.i32[4] + sign_extend(b.i16[4], 32);
dst.i32[5] = a.i32[5] + sign_extend(b.i16[5], 32);
dst.i32[6] = a.i32[6] + sign_extend(b.i16[6], 32);
dst.i32[7] = a.i32[7] + sign_extend(b.i16[7], 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddx_s_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxvaddx_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvaddx_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvaddx.u.d
Builtin: __builtin_lasx_mxvaddx_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2879
```

### Description

Treat `a` as 4 x u64 lanes, extend the corresponding narrower u32 lanes from `b`, and add them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u64[0] = a.u64[0] + zero_extend(b.u32[0], 64);
dst.u64[1] = a.u64[1] + zero_extend(b.u32[1], 64);
dst.u64[2] = a.u64[2] + zero_extend(b.u32[2], 64);
dst.u64[3] = a.u64[3] + zero_extend(b.u32[3], 64);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddx_u_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxvaddx_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvaddx_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvaddx.u.h
Builtin: __builtin_lasx_mxvaddx_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2893
```

### Description

Treat `a` as 16 x u16 lanes, extend the corresponding narrower u8 lanes from `b`, and add them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u16[0] = a.u16[0] + zero_extend(b.u8[0], 16);
dst.u16[1] = a.u16[1] + zero_extend(b.u8[1], 16);
dst.u16[2] = a.u16[2] + zero_extend(b.u8[2], 16);
dst.u16[3] = a.u16[3] + zero_extend(b.u8[3], 16);
dst.u16[4] = a.u16[4] + zero_extend(b.u8[4], 16);
dst.u16[5] = a.u16[5] + zero_extend(b.u8[5], 16);
dst.u16[6] = a.u16[6] + zero_extend(b.u8[6], 16);
dst.u16[7] = a.u16[7] + zero_extend(b.u8[7], 16);
dst.u16[8] = a.u16[8] + zero_extend(b.u8[8], 16);
dst.u16[9] = a.u16[9] + zero_extend(b.u8[9], 16);
dst.u16[10] = a.u16[10] + zero_extend(b.u8[10], 16);
dst.u16[11] = a.u16[11] + zero_extend(b.u8[11], 16);
dst.u16[12] = a.u16[12] + zero_extend(b.u8[12], 16);
dst.u16[13] = a.u16[13] + zero_extend(b.u8[13], 16);
dst.u16[14] = a.u16[14] + zero_extend(b.u8[14], 16);
dst.u16[15] = a.u16[15] + zero_extend(b.u8[15], 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddx_u_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxvaddx_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvaddx_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvaddx.u.w
Builtin: __builtin_lasx_mxvaddx_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2886
```

### Description

Treat `a` as 8 x u32 lanes, extend the corresponding narrower u16 lanes from `b`, and add them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u32[0] = a.u32[0] + zero_extend(b.u16[0], 32);
dst.u32[1] = a.u32[1] + zero_extend(b.u16[1], 32);
dst.u32[2] = a.u32[2] + zero_extend(b.u16[2], 32);
dst.u32[3] = a.u32[3] + zero_extend(b.u16[3], 32);
dst.u32[4] = a.u32[4] + zero_extend(b.u16[4], 32);
dst.u32[5] = a.u32[5] + zero_extend(b.u16[5], 32);
dst.u32[6] = a.u32[6] + zero_extend(b.u16[6], 32);
dst.u32[7] = a.u32[7] + zero_extend(b.u16[7], 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddx_u_w((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxvaddxs_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvaddxs_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvaddxs.s.d
Builtin: __builtin_lasx_mxvaddxs_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2942
```

### Description

Treat `a` as 4 x i64 lanes, extend the corresponding narrower i32 lanes from `b`, and add them into the wider lanes with signed saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i64[0] = signed_saturate(a.i64[0] + sign_extend(b.i32[0], 64), 64);
dst.i64[1] = signed_saturate(a.i64[1] + sign_extend(b.i32[1], 64), 64);
dst.i64[2] = signed_saturate(a.i64[2] + sign_extend(b.i32[2], 64), 64);
dst.i64[3] = signed_saturate(a.i64[3] + sign_extend(b.i32[3], 64), 64);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddxs_s_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxvaddxs_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvaddxs_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvaddxs.s.h
Builtin: __builtin_lasx_mxvaddxs_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2956
```

### Description

Treat `a` as 16 x i16 lanes, extend the corresponding narrower i8 lanes from `b`, and add them into the wider lanes with signed saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i16[0] = signed_saturate(a.i16[0] + sign_extend(b.i8[0], 16), 16);
dst.i16[1] = signed_saturate(a.i16[1] + sign_extend(b.i8[1], 16), 16);
dst.i16[2] = signed_saturate(a.i16[2] + sign_extend(b.i8[2], 16), 16);
dst.i16[3] = signed_saturate(a.i16[3] + sign_extend(b.i8[3], 16), 16);
dst.i16[4] = signed_saturate(a.i16[4] + sign_extend(b.i8[4], 16), 16);
dst.i16[5] = signed_saturate(a.i16[5] + sign_extend(b.i8[5], 16), 16);
dst.i16[6] = signed_saturate(a.i16[6] + sign_extend(b.i8[6], 16), 16);
dst.i16[7] = signed_saturate(a.i16[7] + sign_extend(b.i8[7], 16), 16);
dst.i16[8] = signed_saturate(a.i16[8] + sign_extend(b.i8[8], 16), 16);
dst.i16[9] = signed_saturate(a.i16[9] + sign_extend(b.i8[9], 16), 16);
dst.i16[10] = signed_saturate(a.i16[10] + sign_extend(b.i8[10], 16), 16);
dst.i16[11] = signed_saturate(a.i16[11] + sign_extend(b.i8[11], 16), 16);
dst.i16[12] = signed_saturate(a.i16[12] + sign_extend(b.i8[12], 16), 16);
dst.i16[13] = signed_saturate(a.i16[13] + sign_extend(b.i8[13], 16), 16);
dst.i16[14] = signed_saturate(a.i16[14] + sign_extend(b.i8[14], 16), 16);
dst.i16[15] = signed_saturate(a.i16[15] + sign_extend(b.i8[15], 16), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddxs_s_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxvaddxs_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvaddxs_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvaddxs.s.w
Builtin: __builtin_lasx_mxvaddxs_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2949
```

### Description

Treat `a` as 8 x i32 lanes, extend the corresponding narrower i16 lanes from `b`, and add them into the wider lanes with signed saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i32[0] = signed_saturate(a.i32[0] + sign_extend(b.i16[0], 32), 32);
dst.i32[1] = signed_saturate(a.i32[1] + sign_extend(b.i16[1], 32), 32);
dst.i32[2] = signed_saturate(a.i32[2] + sign_extend(b.i16[2], 32), 32);
dst.i32[3] = signed_saturate(a.i32[3] + sign_extend(b.i16[3], 32), 32);
dst.i32[4] = signed_saturate(a.i32[4] + sign_extend(b.i16[4], 32), 32);
dst.i32[5] = signed_saturate(a.i32[5] + sign_extend(b.i16[5], 32), 32);
dst.i32[6] = signed_saturate(a.i32[6] + sign_extend(b.i16[6], 32), 32);
dst.i32[7] = signed_saturate(a.i32[7] + sign_extend(b.i16[7], 32), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddxs_s_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxvaddxs_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvaddxs_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvaddxs.u.d
Builtin: __builtin_lasx_mxvaddxs_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2963
```

### Description

Treat `a` as 4 x u64 lanes, extend the corresponding narrower u32 lanes from `b`, and add them into the wider lanes with unsigned saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u64[0] = unsigned_saturate(a.u64[0] + zero_extend(b.u32[0], 64), 64);
dst.u64[1] = unsigned_saturate(a.u64[1] + zero_extend(b.u32[1], 64), 64);
dst.u64[2] = unsigned_saturate(a.u64[2] + zero_extend(b.u32[2], 64), 64);
dst.u64[3] = unsigned_saturate(a.u64[3] + zero_extend(b.u32[3], 64), 64);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddxs_u_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxvaddxs_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvaddxs_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvaddxs.u.h
Builtin: __builtin_lasx_mxvaddxs_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2977
```

### Description

Treat `a` as 16 x u16 lanes, extend the corresponding narrower u8 lanes from `b`, and add them into the wider lanes with unsigned saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u16[0] = unsigned_saturate(a.u16[0] + zero_extend(b.u8[0], 16), 16);
dst.u16[1] = unsigned_saturate(a.u16[1] + zero_extend(b.u8[1], 16), 16);
dst.u16[2] = unsigned_saturate(a.u16[2] + zero_extend(b.u8[2], 16), 16);
dst.u16[3] = unsigned_saturate(a.u16[3] + zero_extend(b.u8[3], 16), 16);
dst.u16[4] = unsigned_saturate(a.u16[4] + zero_extend(b.u8[4], 16), 16);
dst.u16[5] = unsigned_saturate(a.u16[5] + zero_extend(b.u8[5], 16), 16);
dst.u16[6] = unsigned_saturate(a.u16[6] + zero_extend(b.u8[6], 16), 16);
dst.u16[7] = unsigned_saturate(a.u16[7] + zero_extend(b.u8[7], 16), 16);
dst.u16[8] = unsigned_saturate(a.u16[8] + zero_extend(b.u8[8], 16), 16);
dst.u16[9] = unsigned_saturate(a.u16[9] + zero_extend(b.u8[9], 16), 16);
dst.u16[10] = unsigned_saturate(a.u16[10] + zero_extend(b.u8[10], 16), 16);
dst.u16[11] = unsigned_saturate(a.u16[11] + zero_extend(b.u8[11], 16), 16);
dst.u16[12] = unsigned_saturate(a.u16[12] + zero_extend(b.u8[12], 16), 16);
dst.u16[13] = unsigned_saturate(a.u16[13] + zero_extend(b.u8[13], 16), 16);
dst.u16[14] = unsigned_saturate(a.u16[14] + zero_extend(b.u8[14], 16), 16);
dst.u16[15] = unsigned_saturate(a.u16[15] + zero_extend(b.u8[15], 16), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddxs_u_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxvaddxs_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvaddxs_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvaddxs.u.w
Builtin: __builtin_lasx_mxvaddxs_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2970
```

### Description

Treat `a` as 8 x u32 lanes, extend the corresponding narrower u16 lanes from `b`, and add them into the wider lanes with unsigned saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u32[0] = unsigned_saturate(a.u32[0] + zero_extend(b.u16[0], 32), 32);
dst.u32[1] = unsigned_saturate(a.u32[1] + zero_extend(b.u16[1], 32), 32);
dst.u32[2] = unsigned_saturate(a.u32[2] + zero_extend(b.u16[2], 32), 32);
dst.u32[3] = unsigned_saturate(a.u32[3] + zero_extend(b.u16[3], 32), 32);
dst.u32[4] = unsigned_saturate(a.u32[4] + zero_extend(b.u16[4], 32), 32);
dst.u32[5] = unsigned_saturate(a.u32[5] + zero_extend(b.u16[5], 32), 32);
dst.u32[6] = unsigned_saturate(a.u32[6] + zero_extend(b.u16[6], 32), 32);
dst.u32[7] = unsigned_saturate(a.u32[7] + zero_extend(b.u16[7], 32), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddxs_u_w((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxvmuhp_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmuhp_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmuhp.d
Builtin: __builtin_lasx_mxvmuhp_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6360
```

### Description

Multiply modular integer lanes and keep the upper half of each product.

### Operation

```c
dst.u64[0] = high_part(vmuhp_lane(a.u64[0], b.u64[0]));
dst.u64[1] = high_part(vmuhp_lane(a.u64[1], b.u64[1]));
dst.u64[2] = high_part(vmuhp_lane(a.u64[2], b.u64[2]));
dst.u64[3] = high_part(vmuhp_lane(a.u64[3], b.u64[3]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmuhp_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmuhp_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmuhp_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmuhp.w
Builtin: __builtin_lasx_mxvmuhp_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6339
```

### Description

Multiply modular integer lanes and keep the upper half of each product.

### Operation

```c
dst.u32[0] = high_part(vmuhp_lane(a.u32[0], b.u32[0]));
dst.u32[1] = high_part(vmuhp_lane(a.u32[1], b.u32[1]));
dst.u32[2] = high_part(vmuhp_lane(a.u32[2], b.u32[2]));
dst.u32[3] = high_part(vmuhp_lane(a.u32[3], b.u32[3]));
dst.u32[4] = high_part(vmuhp_lane(a.u32[4], b.u32[4]));
dst.u32[5] = high_part(vmuhp_lane(a.u32[5], b.u32[5]));
dst.u32[6] = high_part(vmuhp_lane(a.u32[6], b.u32[6]));
dst.u32[7] = high_part(vmuhp_lane(a.u32[7], b.u32[7]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmuhp_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmuhp_xacc_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmuhp_xacc_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmuhp.xacc.d
Builtin: __builtin_lasx_mxvmuhp_xacc_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6442
```

### Description

Compute the Loongson MSA2 high-part packed multiply and combine the result with accumulator `a`. This supports multiply-accumulate style integer kernels.

### Operation

```c
dst.u64[0] = a.u64[0] + high_part(vmuhp_lane(b.u64[0], c.u64[0]));
dst.u64[1] = a.u64[1] + high_part(vmuhp_lane(b.u64[1], c.u64[1]));
dst.u64[2] = a.u64[2] + high_part(vmuhp_lane(b.u64[2], c.u64[2]));
dst.u64[3] = a.u64[3] + high_part(vmuhp_lane(b.u64[3], c.u64[3]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmuhp_xacc_d((v4i64) a, (v4i64) b, (v4i64) c);
```

## __m256i __lasx_mxvmuhp_xacc_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmuhp_xacc_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmuhp.xacc.w
Builtin: __builtin_lasx_mxvmuhp_xacc_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6422
```

### Description

Compute the Loongson MSA2 high-part packed multiply and combine the result with accumulator `a`. This supports multiply-accumulate style integer kernels.

### Operation

```c
dst.u32[0] = a.u32[0] + high_part(vmuhp_lane(b.u32[0], c.u32[0]));
dst.u32[1] = a.u32[1] + high_part(vmuhp_lane(b.u32[1], c.u32[1]));
dst.u32[2] = a.u32[2] + high_part(vmuhp_lane(b.u32[2], c.u32[2]));
dst.u32[3] = a.u32[3] + high_part(vmuhp_lane(b.u32[3], c.u32[3]));
dst.u32[4] = a.u32[4] + high_part(vmuhp_lane(b.u32[4], c.u32[4]));
dst.u32[5] = a.u32[5] + high_part(vmuhp_lane(b.u32[5], c.u32[5]));
dst.u32[6] = a.u32[6] + high_part(vmuhp_lane(b.u32[6], c.u32[6]));
dst.u32[7] = a.u32[7] + high_part(vmuhp_lane(b.u32[7], c.u32[7]));
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmuhp_xacc_w((v8i32) a, (v8i32) b, (v8i32) c);
```

## __m256i __lasx_mxvmulhi_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulhi_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.s.b
Builtin: __builtin_lasx_mxvmulhi_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3117
```

### Description

Multiply signed integer lanes and keep the upper half of each product.

### Operation

```c
dst.i8[0] = upper_8_bits(a.i8[0] * b.i8[0]);
dst.i8[1] = upper_8_bits(a.i8[1] * b.i8[1]);
dst.i8[2] = upper_8_bits(a.i8[2] * b.i8[2]);
dst.i8[3] = upper_8_bits(a.i8[3] * b.i8[3]);
dst.i8[4] = upper_8_bits(a.i8[4] * b.i8[4]);
dst.i8[5] = upper_8_bits(a.i8[5] * b.i8[5]);
dst.i8[6] = upper_8_bits(a.i8[6] * b.i8[6]);
dst.i8[7] = upper_8_bits(a.i8[7] * b.i8[7]);
dst.i8[8] = upper_8_bits(a.i8[8] * b.i8[8]);
dst.i8[9] = upper_8_bits(a.i8[9] * b.i8[9]);
dst.i8[10] = upper_8_bits(a.i8[10] * b.i8[10]);
dst.i8[11] = upper_8_bits(a.i8[11] * b.i8[11]);
dst.i8[12] = upper_8_bits(a.i8[12] * b.i8[12]);
dst.i8[13] = upper_8_bits(a.i8[13] * b.i8[13]);
dst.i8[14] = upper_8_bits(a.i8[14] * b.i8[14]);
dst.i8[15] = upper_8_bits(a.i8[15] * b.i8[15]);
dst.i8[16] = upper_8_bits(a.i8[16] * b.i8[16]);
dst.i8[17] = upper_8_bits(a.i8[17] * b.i8[17]);
dst.i8[18] = upper_8_bits(a.i8[18] * b.i8[18]);
dst.i8[19] = upper_8_bits(a.i8[19] * b.i8[19]);
dst.i8[20] = upper_8_bits(a.i8[20] * b.i8[20]);
dst.i8[21] = upper_8_bits(a.i8[21] * b.i8[21]);
dst.i8[22] = upper_8_bits(a.i8[22] * b.i8[22]);
dst.i8[23] = upper_8_bits(a.i8[23] * b.i8[23]);
dst.i8[24] = upper_8_bits(a.i8[24] * b.i8[24]);
dst.i8[25] = upper_8_bits(a.i8[25] * b.i8[25]);
dst.i8[26] = upper_8_bits(a.i8[26] * b.i8[26]);
dst.i8[27] = upper_8_bits(a.i8[27] * b.i8[27]);
dst.i8[28] = upper_8_bits(a.i8[28] * b.i8[28]);
dst.i8[29] = upper_8_bits(a.i8[29] * b.i8[29]);
dst.i8[30] = upper_8_bits(a.i8[30] * b.i8[30]);
dst.i8[31] = upper_8_bits(a.i8[31] * b.i8[31]);
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
return (__m256i)__builtin_lasx_mxvmulhi_s_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxvmulhi_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulhi_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.s.d
Builtin: __builtin_lasx_mxvmulhi_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3096
```

### Description

Multiply signed integer lanes and keep the upper half of each product.

### Operation

```c
dst.i64[0] = upper_64_bits(a.i64[0] * b.i64[0]);
dst.i64[1] = upper_64_bits(a.i64[1] * b.i64[1]);
dst.i64[2] = upper_64_bits(a.i64[2] * b.i64[2]);
dst.i64[3] = upper_64_bits(a.i64[3] * b.i64[3]);
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
return (__m256i)__builtin_lasx_mxvmulhi_s_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxvmulhi_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulhi_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.s.h
Builtin: __builtin_lasx_mxvmulhi_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3110
```

### Description

Multiply signed integer lanes and keep the upper half of each product.

### Operation

```c
dst.i16[0] = upper_16_bits(a.i16[0] * b.i16[0]);
dst.i16[1] = upper_16_bits(a.i16[1] * b.i16[1]);
dst.i16[2] = upper_16_bits(a.i16[2] * b.i16[2]);
dst.i16[3] = upper_16_bits(a.i16[3] * b.i16[3]);
dst.i16[4] = upper_16_bits(a.i16[4] * b.i16[4]);
dst.i16[5] = upper_16_bits(a.i16[5] * b.i16[5]);
dst.i16[6] = upper_16_bits(a.i16[6] * b.i16[6]);
dst.i16[7] = upper_16_bits(a.i16[7] * b.i16[7]);
dst.i16[8] = upper_16_bits(a.i16[8] * b.i16[8]);
dst.i16[9] = upper_16_bits(a.i16[9] * b.i16[9]);
dst.i16[10] = upper_16_bits(a.i16[10] * b.i16[10]);
dst.i16[11] = upper_16_bits(a.i16[11] * b.i16[11]);
dst.i16[12] = upper_16_bits(a.i16[12] * b.i16[12]);
dst.i16[13] = upper_16_bits(a.i16[13] * b.i16[13]);
dst.i16[14] = upper_16_bits(a.i16[14] * b.i16[14]);
dst.i16[15] = upper_16_bits(a.i16[15] * b.i16[15]);
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
return (__m256i)__builtin_lasx_mxvmulhi_s_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxvmulhi_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulhi_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.s.w
Builtin: __builtin_lasx_mxvmulhi_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3103
```

### Description

Multiply signed integer lanes and keep the upper half of each product.

### Operation

```c
dst.i32[0] = upper_32_bits(a.i32[0] * b.i32[0]);
dst.i32[1] = upper_32_bits(a.i32[1] * b.i32[1]);
dst.i32[2] = upper_32_bits(a.i32[2] * b.i32[2]);
dst.i32[3] = upper_32_bits(a.i32[3] * b.i32[3]);
dst.i32[4] = upper_32_bits(a.i32[4] * b.i32[4]);
dst.i32[5] = upper_32_bits(a.i32[5] * b.i32[5]);
dst.i32[6] = upper_32_bits(a.i32[6] * b.i32[6]);
dst.i32[7] = upper_32_bits(a.i32[7] * b.i32[7]);
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
return (__m256i)__builtin_lasx_mxvmulhi_s_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxvmulhi_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulhi_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.u.b
Builtin: __builtin_lasx_mxvmulhi_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3145
```

### Description

Multiply unsigned integer lanes and keep the upper half of each product.

### Operation

```c
dst.u8[0] = upper_8_bits(a.u8[0] * b.u8[0]);
dst.u8[1] = upper_8_bits(a.u8[1] * b.u8[1]);
dst.u8[2] = upper_8_bits(a.u8[2] * b.u8[2]);
dst.u8[3] = upper_8_bits(a.u8[3] * b.u8[3]);
dst.u8[4] = upper_8_bits(a.u8[4] * b.u8[4]);
dst.u8[5] = upper_8_bits(a.u8[5] * b.u8[5]);
dst.u8[6] = upper_8_bits(a.u8[6] * b.u8[6]);
dst.u8[7] = upper_8_bits(a.u8[7] * b.u8[7]);
dst.u8[8] = upper_8_bits(a.u8[8] * b.u8[8]);
dst.u8[9] = upper_8_bits(a.u8[9] * b.u8[9]);
dst.u8[10] = upper_8_bits(a.u8[10] * b.u8[10]);
dst.u8[11] = upper_8_bits(a.u8[11] * b.u8[11]);
dst.u8[12] = upper_8_bits(a.u8[12] * b.u8[12]);
dst.u8[13] = upper_8_bits(a.u8[13] * b.u8[13]);
dst.u8[14] = upper_8_bits(a.u8[14] * b.u8[14]);
dst.u8[15] = upper_8_bits(a.u8[15] * b.u8[15]);
dst.u8[16] = upper_8_bits(a.u8[16] * b.u8[16]);
dst.u8[17] = upper_8_bits(a.u8[17] * b.u8[17]);
dst.u8[18] = upper_8_bits(a.u8[18] * b.u8[18]);
dst.u8[19] = upper_8_bits(a.u8[19] * b.u8[19]);
dst.u8[20] = upper_8_bits(a.u8[20] * b.u8[20]);
dst.u8[21] = upper_8_bits(a.u8[21] * b.u8[21]);
dst.u8[22] = upper_8_bits(a.u8[22] * b.u8[22]);
dst.u8[23] = upper_8_bits(a.u8[23] * b.u8[23]);
dst.u8[24] = upper_8_bits(a.u8[24] * b.u8[24]);
dst.u8[25] = upper_8_bits(a.u8[25] * b.u8[25]);
dst.u8[26] = upper_8_bits(a.u8[26] * b.u8[26]);
dst.u8[27] = upper_8_bits(a.u8[27] * b.u8[27]);
dst.u8[28] = upper_8_bits(a.u8[28] * b.u8[28]);
dst.u8[29] = upper_8_bits(a.u8[29] * b.u8[29]);
dst.u8[30] = upper_8_bits(a.u8[30] * b.u8[30]);
dst.u8[31] = upper_8_bits(a.u8[31] * b.u8[31]);
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
return (__m256i)__builtin_lasx_mxvmulhi_u_b((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxvmulhi_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulhi_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.u.d
Builtin: __builtin_lasx_mxvmulhi_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3124
```

### Description

Multiply unsigned integer lanes and keep the upper half of each product.

### Operation

```c
dst.u64[0] = upper_64_bits(a.u64[0] * b.u64[0]);
dst.u64[1] = upper_64_bits(a.u64[1] * b.u64[1]);
dst.u64[2] = upper_64_bits(a.u64[2] * b.u64[2]);
dst.u64[3] = upper_64_bits(a.u64[3] * b.u64[3]);
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
return (__m256i)__builtin_lasx_mxvmulhi_u_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxvmulhi_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulhi_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.u.h
Builtin: __builtin_lasx_mxvmulhi_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3138
```

### Description

Multiply unsigned integer lanes and keep the upper half of each product.

### Operation

```c
dst.u16[0] = upper_16_bits(a.u16[0] * b.u16[0]);
dst.u16[1] = upper_16_bits(a.u16[1] * b.u16[1]);
dst.u16[2] = upper_16_bits(a.u16[2] * b.u16[2]);
dst.u16[3] = upper_16_bits(a.u16[3] * b.u16[3]);
dst.u16[4] = upper_16_bits(a.u16[4] * b.u16[4]);
dst.u16[5] = upper_16_bits(a.u16[5] * b.u16[5]);
dst.u16[6] = upper_16_bits(a.u16[6] * b.u16[6]);
dst.u16[7] = upper_16_bits(a.u16[7] * b.u16[7]);
dst.u16[8] = upper_16_bits(a.u16[8] * b.u16[8]);
dst.u16[9] = upper_16_bits(a.u16[9] * b.u16[9]);
dst.u16[10] = upper_16_bits(a.u16[10] * b.u16[10]);
dst.u16[11] = upper_16_bits(a.u16[11] * b.u16[11]);
dst.u16[12] = upper_16_bits(a.u16[12] * b.u16[12]);
dst.u16[13] = upper_16_bits(a.u16[13] * b.u16[13]);
dst.u16[14] = upper_16_bits(a.u16[14] * b.u16[14]);
dst.u16[15] = upper_16_bits(a.u16[15] * b.u16[15]);
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
return (__m256i)__builtin_lasx_mxvmulhi_u_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxvmulhi_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulhi_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.u.w
Builtin: __builtin_lasx_mxvmulhi_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3131
```

### Description

Multiply unsigned integer lanes and keep the upper half of each product.

### Operation

```c
dst.u32[0] = upper_32_bits(a.u32[0] * b.u32[0]);
dst.u32[1] = upper_32_bits(a.u32[1] * b.u32[1]);
dst.u32[2] = upper_32_bits(a.u32[2] * b.u32[2]);
dst.u32[3] = upper_32_bits(a.u32[3] * b.u32[3]);
dst.u32[4] = upper_32_bits(a.u32[4] * b.u32[4]);
dst.u32[5] = upper_32_bits(a.u32[5] * b.u32[5]);
dst.u32[6] = upper_32_bits(a.u32[6] * b.u32[6]);
dst.u32[7] = upper_32_bits(a.u32[7] * b.u32[7]);
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
return (__m256i)__builtin_lasx_mxvmulhi_u_w((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxvmulhi_us_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulhi_us_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.us.b
Builtin: __builtin_lasx_mxvmulhi_us_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4115
```

### Description

Multiply unsigned/signed mixed integer lanes and keep the upper half of each product.

### Operation

```c
dst.u8[0] = upper_8_bits(a.i8[0] * b.i8[0]);
dst.u8[1] = upper_8_bits(a.i8[1] * b.i8[1]);
dst.u8[2] = upper_8_bits(a.i8[2] * b.i8[2]);
dst.u8[3] = upper_8_bits(a.i8[3] * b.i8[3]);
dst.u8[4] = upper_8_bits(a.i8[4] * b.i8[4]);
dst.u8[5] = upper_8_bits(a.i8[5] * b.i8[5]);
dst.u8[6] = upper_8_bits(a.i8[6] * b.i8[6]);
dst.u8[7] = upper_8_bits(a.i8[7] * b.i8[7]);
dst.u8[8] = upper_8_bits(a.i8[8] * b.i8[8]);
dst.u8[9] = upper_8_bits(a.i8[9] * b.i8[9]);
dst.u8[10] = upper_8_bits(a.i8[10] * b.i8[10]);
dst.u8[11] = upper_8_bits(a.i8[11] * b.i8[11]);
dst.u8[12] = upper_8_bits(a.i8[12] * b.i8[12]);
dst.u8[13] = upper_8_bits(a.i8[13] * b.i8[13]);
dst.u8[14] = upper_8_bits(a.i8[14] * b.i8[14]);
dst.u8[15] = upper_8_bits(a.i8[15] * b.i8[15]);
dst.u8[16] = upper_8_bits(a.i8[16] * b.i8[16]);
dst.u8[17] = upper_8_bits(a.i8[17] * b.i8[17]);
dst.u8[18] = upper_8_bits(a.i8[18] * b.i8[18]);
dst.u8[19] = upper_8_bits(a.i8[19] * b.i8[19]);
dst.u8[20] = upper_8_bits(a.i8[20] * b.i8[20]);
dst.u8[21] = upper_8_bits(a.i8[21] * b.i8[21]);
dst.u8[22] = upper_8_bits(a.i8[22] * b.i8[22]);
dst.u8[23] = upper_8_bits(a.i8[23] * b.i8[23]);
dst.u8[24] = upper_8_bits(a.i8[24] * b.i8[24]);
dst.u8[25] = upper_8_bits(a.i8[25] * b.i8[25]);
dst.u8[26] = upper_8_bits(a.i8[26] * b.i8[26]);
dst.u8[27] = upper_8_bits(a.i8[27] * b.i8[27]);
dst.u8[28] = upper_8_bits(a.i8[28] * b.i8[28]);
dst.u8[29] = upper_8_bits(a.i8[29] * b.i8[29]);
dst.u8[30] = upper_8_bits(a.i8[30] * b.i8[30]);
dst.u8[31] = upper_8_bits(a.i8[31] * b.i8[31]);
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
return (__m256i)__builtin_lasx_mxvmulhi_us_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxvmulhi_us_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulhi_us_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.us.h
Builtin: __builtin_lasx_mxvmulhi_us_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4108
```

### Description

Multiply unsigned/signed mixed integer lanes and keep the upper half of each product.

### Operation

```c
dst.u16[0] = upper_16_bits(a.i16[0] * b.i16[0]);
dst.u16[1] = upper_16_bits(a.i16[1] * b.i16[1]);
dst.u16[2] = upper_16_bits(a.i16[2] * b.i16[2]);
dst.u16[3] = upper_16_bits(a.i16[3] * b.i16[3]);
dst.u16[4] = upper_16_bits(a.i16[4] * b.i16[4]);
dst.u16[5] = upper_16_bits(a.i16[5] * b.i16[5]);
dst.u16[6] = upper_16_bits(a.i16[6] * b.i16[6]);
dst.u16[7] = upper_16_bits(a.i16[7] * b.i16[7]);
dst.u16[8] = upper_16_bits(a.i16[8] * b.i16[8]);
dst.u16[9] = upper_16_bits(a.i16[9] * b.i16[9]);
dst.u16[10] = upper_16_bits(a.i16[10] * b.i16[10]);
dst.u16[11] = upper_16_bits(a.i16[11] * b.i16[11]);
dst.u16[12] = upper_16_bits(a.i16[12] * b.i16[12]);
dst.u16[13] = upper_16_bits(a.i16[13] * b.i16[13]);
dst.u16[14] = upper_16_bits(a.i16[14] * b.i16[14]);
dst.u16[15] = upper_16_bits(a.i16[15] * b.i16[15]);
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
return (__m256i)__builtin_lasx_mxvmulhi_us_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxvmulhi_us_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulhi_us_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.us.w
Builtin: __builtin_lasx_mxvmulhi_us_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4101
```

### Description

Multiply unsigned/signed mixed integer lanes and keep the upper half of each product.

### Operation

```c
dst.u32[0] = upper_32_bits(a.i32[0] * b.i32[0]);
dst.u32[1] = upper_32_bits(a.i32[1] * b.i32[1]);
dst.u32[2] = upper_32_bits(a.i32[2] * b.i32[2]);
dst.u32[3] = upper_32_bits(a.i32[3] * b.i32[3]);
dst.u32[4] = upper_32_bits(a.i32[4] * b.i32[4]);
dst.u32[5] = upper_32_bits(a.i32[5] * b.i32[5]);
dst.u32[6] = upper_32_bits(a.i32[6] * b.i32[6]);
dst.u32[7] = upper_32_bits(a.i32[7] * b.i32[7]);
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
return (__m256i)__builtin_lasx_mxvmulhi_us_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxvmulp_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulp_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulp.d
Builtin: __builtin_lasx_mxvmulp_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6402
```

### Description

Compute the Loongson MSA2 packed multiply. This supports multiply-accumulate style integer kernels.

### Operation

```c
dst.u64[0] = vmulp_lane(a.u64[0], b.u64[0]);
dst.u64[1] = vmulp_lane(a.u64[1], b.u64[1]);
dst.u64[2] = vmulp_lane(a.u64[2], b.u64[2]);
dst.u64[3] = vmulp_lane(a.u64[3], b.u64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulp_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmulp_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulp_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulp.w
Builtin: __builtin_lasx_mxvmulp_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6381
```

### Description

Compute the Loongson MSA2 packed multiply. This supports multiply-accumulate style integer kernels.

### Operation

```c
dst.u32[0] = vmulp_lane(a.u32[0], b.u32[0]);
dst.u32[1] = vmulp_lane(a.u32[1], b.u32[1]);
dst.u32[2] = vmulp_lane(a.u32[2], b.u32[2]);
dst.u32[3] = vmulp_lane(a.u32[3], b.u32[3]);
dst.u32[4] = vmulp_lane(a.u32[4], b.u32[4]);
dst.u32[5] = vmulp_lane(a.u32[5], b.u32[5]);
dst.u32[6] = vmulp_lane(a.u32[6], b.u32[6]);
dst.u32[7] = vmulp_lane(a.u32[7], b.u32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulp_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmulp_xacc_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmulp_xacc_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmulp.xacc.d
Builtin: __builtin_lasx_mxvmulp_xacc_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6482
```

### Description

Compute the Loongson MSA2 packed multiply and combine the result with accumulator `a`. This supports multiply-accumulate style integer kernels.

### Operation

```c
dst.u64[0] = a.u64[0] + vmulp_lane(b.u64[0], c.u64[0]);
dst.u64[1] = a.u64[1] + vmulp_lane(b.u64[1], c.u64[1]);
dst.u64[2] = a.u64[2] + vmulp_lane(b.u64[2], c.u64[2]);
dst.u64[3] = a.u64[3] + vmulp_lane(b.u64[3], c.u64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulp_xacc_d((v4i64) a, (v4i64) b, (v4i64) c);
```

## __m256i __lasx_mxvmulp_xacc_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmulp_xacc_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmulp.xacc.w
Builtin: __builtin_lasx_mxvmulp_xacc_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6462
```

### Description

Compute the Loongson MSA2 packed multiply and combine the result with accumulator `a`. This supports multiply-accumulate style integer kernels.

### Operation

```c
dst.u32[0] = a.u32[0] + vmulp_lane(b.u32[0], c.u32[0]);
dst.u32[1] = a.u32[1] + vmulp_lane(b.u32[1], c.u32[1]);
dst.u32[2] = a.u32[2] + vmulp_lane(b.u32[2], c.u32[2]);
dst.u32[3] = a.u32[3] + vmulp_lane(b.u32[3], c.u32[3]);
dst.u32[4] = a.u32[4] + vmulp_lane(b.u32[4], c.u32[4]);
dst.u32[5] = a.u32[5] + vmulp_lane(b.u32[5], c.u32[5]);
dst.u32[6] = a.u32[6] + vmulp_lane(b.u32[6], c.u32[6]);
dst.u32[7] = a.u32[7] + vmulp_lane(b.u32[7], c.u32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulp_xacc_w((v8i32) a, (v8i32) b, (v8i32) c);
```

## __m256i __lasx_mxvmult_el0_acc_s_wx_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_s_wx_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.s.wx.d
Builtin: __builtin_lasx_mxvmult_el0_acc_s_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6731
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i64[0]) * widen(c.i64[0]);
dst.i128[1] = a.i128[1] + widen(b.i64[0]) * widen(c.i64[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_s_wx_d((v4i64) a, (v4i64) b, (v4i64) c);
```

## __m256i __lasx_mxvmult_el0_acc_s_wx_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_s_wx_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.s.wx.h
Builtin: __builtin_lasx_mxvmult_el0_acc_s_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6691
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = a.i32[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[1] = a.i32[1] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[2] = a.i32[2] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[3] = a.i32[3] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[4] = a.i32[4] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[5] = a.i32[5] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[6] = a.i32[6] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[7] = a.i32[7] + widen(b.i16[0]) * widen(c.i16[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_s_wx_h((v4i64) a, (v16i16) b, (v16i16) c);
```

## __m256i __lasx_mxvmult_el0_acc_s_wx_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_s_wx_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.s.wx.w
Builtin: __builtin_lasx_mxvmult_el0_acc_s_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6711
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i32[0]) * widen(c.i32[0]);
dst.i64[1] = a.i64[1] + widen(b.i32[0]) * widen(c.i32[0]);
dst.i64[2] = a.i64[2] + widen(b.i32[0]) * widen(c.i32[0]);
dst.i64[3] = a.i64[3] + widen(b.i32[0]) * widen(c.i32[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_s_wx_w((v4i64) a, (v8i32) b, (v8i32) c);
```

## __m256i __lasx_mxvmult_el0_acc_u_wx_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_u_wx_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.u.wx.d
Builtin: __builtin_lasx_mxvmult_el0_acc_u_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6791
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[0]) * widen(c.u64[0]);
dst.u128[1] = a.u128[1] + widen(b.u64[0]) * widen(c.u64[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_u_wx_d((v4u64) a, (v4u64) b, (v4u64) c);
```

## __m256i __lasx_mxvmult_el0_acc_u_wx_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_u_wx_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.u.wx.h
Builtin: __builtin_lasx_mxvmult_el0_acc_u_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6751
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[1] = a.u32[1] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[2] = a.u32[2] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[3] = a.u32[3] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[4] = a.u32[4] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[5] = a.u32[5] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[6] = a.u32[6] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[7] = a.u32[7] + widen(b.u16[0]) * widen(c.u16[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_u_wx_h((v4u64) a, (v16u16) b, (v16u16) c);
```

## __m256i __lasx_mxvmult_el0_acc_u_wx_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_u_wx_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.u.wx.w
Builtin: __builtin_lasx_mxvmult_el0_acc_u_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6771
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[0]) * widen(c.u32[0]);
dst.u64[1] = a.u64[1] + widen(b.u32[0]) * widen(c.u32[0]);
dst.u64[2] = a.u64[2] + widen(b.u32[0]) * widen(c.u32[0]);
dst.u64[3] = a.u64[3] + widen(b.u32[0]) * widen(c.u32[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_u_wx_w((v4u64) a, (v8u32) b, (v8u32) c);
```

## __m256i __lasx_mxvmult_el0_acc_us_wx_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_us_wx_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.us.wx.d
Builtin: __builtin_lasx_mxvmult_el0_acc_us_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6851
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[0]) * widen(c.i64[0]);
dst.u128[1] = a.u128[1] + widen(b.u64[0]) * widen(c.i64[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_us_wx_d((v4u64) a, (v4u64) b, (v4i64) c);
```

## __m256i __lasx_mxvmult_el0_acc_us_wx_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_us_wx_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.us.wx.h
Builtin: __builtin_lasx_mxvmult_el0_acc_us_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6811
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[1] = a.u32[1] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[2] = a.u32[2] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[3] = a.u32[3] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[4] = a.u32[4] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[5] = a.u32[5] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[6] = a.u32[6] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[7] = a.u32[7] + widen(b.u16[0]) * widen(c.i16[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_us_wx_h((v4u64) a, (v16u16) b, (v16i16) c);
```

## __m256i __lasx_mxvmult_el0_acc_us_wx_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_us_wx_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.us.wx.w
Builtin: __builtin_lasx_mxvmult_el0_acc_us_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6831
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[0]) * widen(c.i32[0]);
dst.u64[1] = a.u64[1] + widen(b.u32[0]) * widen(c.i32[0]);
dst.u64[2] = a.u64[2] + widen(b.u32[0]) * widen(c.i32[0]);
dst.u64[3] = a.u64[3] + widen(b.u32[0]) * widen(c.i32[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_us_wx_w((v4u64) a, (v8u32) b, (v8i32) c);
```

## __m256i __lasx_mxvmult_el0_s_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_s_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.s.wx.d
Builtin: __builtin_lasx_mxvmult_el0_s_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6545
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) * widen(b.i64[0]);
dst.i128[1] = widen(a.i64[0]) * widen(b.i64[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_s_wx_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_el0_s_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_s_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.s.wx.h
Builtin: __builtin_lasx_mxvmult_el0_s_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6503
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[1] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[2] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[3] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[4] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[5] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[6] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[7] = widen(a.i16[0]) * widen(b.i16[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_s_wx_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_el0_s_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_s_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.s.wx.w
Builtin: __builtin_lasx_mxvmult_el0_s_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6524
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) * widen(b.i32[0]);
dst.i64[1] = widen(a.i32[0]) * widen(b.i32[0]);
dst.i64[2] = widen(a.i32[0]) * widen(b.i32[0]);
dst.i64[3] = widen(a.i32[0]) * widen(b.i32[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_s_wx_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_el0_u_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_u_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.u.wx.d
Builtin: __builtin_lasx_mxvmult_el0_u_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6608
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) * widen(b.u64[0]);
dst.u128[1] = widen(a.u64[0]) * widen(b.u64[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_u_wx_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_el0_u_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_u_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.u.wx.h
Builtin: __builtin_lasx_mxvmult_el0_u_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6566
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[1] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[2] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[3] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[4] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[5] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[6] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[7] = widen(a.u16[0]) * widen(b.u16[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_u_wx_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_el0_u_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_u_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.u.wx.w
Builtin: __builtin_lasx_mxvmult_el0_u_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6587
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) * widen(b.u32[0]);
dst.u64[1] = widen(a.u32[0]) * widen(b.u32[0]);
dst.u64[2] = widen(a.u32[0]) * widen(b.u32[0]);
dst.u64[3] = widen(a.u32[0]) * widen(b.u32[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_u_wx_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_el0_us_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_us_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.us.wx.d
Builtin: __builtin_lasx_mxvmult_el0_us_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6671
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) * widen(b.i64[0]);
dst.u128[1] = widen(a.u64[0]) * widen(b.i64[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_us_wx_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_el0_us_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_us_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.us.wx.h
Builtin: __builtin_lasx_mxvmult_el0_us_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6629
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[1] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[2] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[3] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[4] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[5] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[6] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[7] = widen(a.u16[0]) * widen(b.i16[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_us_wx_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_el0_us_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_us_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.us.wx.w
Builtin: __builtin_lasx_mxvmult_el0_us_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6650
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) * widen(b.i32[0]);
dst.u64[1] = widen(a.u32[0]) * widen(b.i32[0]);
dst.u64[2] = widen(a.u32[0]) * widen(b.i32[0]);
dst.u64[3] = widen(a.u32[0]) * widen(b.i32[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_us_wx_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_even_acc_s_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_s_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.s.w2x.b
Builtin: __builtin_lasx_mxvmult_even_acc_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7744
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = a.i16[0] + widen(b.i8[0]) * widen(c.i8[0]);
dst.i16[1] = a.i16[1] + widen(b.i8[2]) * widen(c.i8[2]);
dst.i16[2] = a.i16[2] + widen(b.i8[4]) * widen(c.i8[4]);
dst.i16[3] = a.i16[3] + widen(b.i8[6]) * widen(c.i8[6]);
dst.i16[4] = a.i16[4] + widen(b.i8[8]) * widen(c.i8[8]);
dst.i16[5] = a.i16[5] + widen(b.i8[10]) * widen(c.i8[10]);
dst.i16[6] = a.i16[6] + widen(b.i8[12]) * widen(c.i8[12]);
dst.i16[7] = a.i16[7] + widen(b.i8[14]) * widen(c.i8[14]);
dst.i16[8] = a.i16[8] + widen(b.i8[16]) * widen(c.i8[16]);
dst.i16[9] = a.i16[9] + widen(b.i8[18]) * widen(c.i8[18]);
dst.i16[10] = a.i16[10] + widen(b.i8[20]) * widen(c.i8[20]);
dst.i16[11] = a.i16[11] + widen(b.i8[22]) * widen(c.i8[22]);
dst.i16[12] = a.i16[12] + widen(b.i8[24]) * widen(c.i8[24]);
dst.i16[13] = a.i16[13] + widen(b.i8[26]) * widen(c.i8[26]);
dst.i16[14] = a.i16[14] + widen(b.i8[28]) * widen(c.i8[28]);
dst.i16[15] = a.i16[15] + widen(b.i8[30]) * widen(c.i8[30]);
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
return (__m256i)__builtin_lasx_mxvmult_even_acc_s_w2x_b((v16i16) a, (v32i8) b, (v32i8) c);
```

## __m256i __lasx_mxvmult_even_acc_s_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_s_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.s.w2x.d
Builtin: __builtin_lasx_mxvmult_even_acc_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7804
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i64[0]) * widen(c.i64[0]);
dst.i128[1] = a.i128[1] + widen(b.i64[2]) * widen(c.i64[2]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_s_w2x_d((v4i64) a, (v4i64) b, (v4i64) c);
```

## __m256i __lasx_mxvmult_even_acc_s_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_s_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.s.w2x.h
Builtin: __builtin_lasx_mxvmult_even_acc_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7764
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = a.i32[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[1] = a.i32[1] + widen(b.i16[2]) * widen(c.i16[2]);
dst.i32[2] = a.i32[2] + widen(b.i16[4]) * widen(c.i16[4]);
dst.i32[3] = a.i32[3] + widen(b.i16[6]) * widen(c.i16[6]);
dst.i32[4] = a.i32[4] + widen(b.i16[8]) * widen(c.i16[8]);
dst.i32[5] = a.i32[5] + widen(b.i16[10]) * widen(c.i16[10]);
dst.i32[6] = a.i32[6] + widen(b.i16[12]) * widen(c.i16[12]);
dst.i32[7] = a.i32[7] + widen(b.i16[14]) * widen(c.i16[14]);
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
return (__m256i)__builtin_lasx_mxvmult_even_acc_s_w2x_h((v8i32) a, (v16i16) b, (v16i16) c);
```

## __m256i __lasx_mxvmult_even_acc_s_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_s_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.s.w2x.w
Builtin: __builtin_lasx_mxvmult_even_acc_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7784
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i32[0]) * widen(c.i32[0]);
dst.i64[1] = a.i64[1] + widen(b.i32[2]) * widen(c.i32[2]);
dst.i64[2] = a.i64[2] + widen(b.i32[4]) * widen(c.i32[4]);
dst.i64[3] = a.i64[3] + widen(b.i32[6]) * widen(c.i32[6]);
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
return (__m256i)__builtin_lasx_mxvmult_even_acc_s_w2x_w((v4i64) a, (v8i32) b, (v8i32) c);
```

## __m256i __lasx_mxvmult_even_acc_u_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_u_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.u.w2x.b
Builtin: __builtin_lasx_mxvmult_even_acc_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7824
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = a.u16[0] + widen(b.u8[0]) * widen(c.u8[0]);
dst.u16[1] = a.u16[1] + widen(b.u8[2]) * widen(c.u8[2]);
dst.u16[2] = a.u16[2] + widen(b.u8[4]) * widen(c.u8[4]);
dst.u16[3] = a.u16[3] + widen(b.u8[6]) * widen(c.u8[6]);
dst.u16[4] = a.u16[4] + widen(b.u8[8]) * widen(c.u8[8]);
dst.u16[5] = a.u16[5] + widen(b.u8[10]) * widen(c.u8[10]);
dst.u16[6] = a.u16[6] + widen(b.u8[12]) * widen(c.u8[12]);
dst.u16[7] = a.u16[7] + widen(b.u8[14]) * widen(c.u8[14]);
dst.u16[8] = a.u16[8] + widen(b.u8[16]) * widen(c.u8[16]);
dst.u16[9] = a.u16[9] + widen(b.u8[18]) * widen(c.u8[18]);
dst.u16[10] = a.u16[10] + widen(b.u8[20]) * widen(c.u8[20]);
dst.u16[11] = a.u16[11] + widen(b.u8[22]) * widen(c.u8[22]);
dst.u16[12] = a.u16[12] + widen(b.u8[24]) * widen(c.u8[24]);
dst.u16[13] = a.u16[13] + widen(b.u8[26]) * widen(c.u8[26]);
dst.u16[14] = a.u16[14] + widen(b.u8[28]) * widen(c.u8[28]);
dst.u16[15] = a.u16[15] + widen(b.u8[30]) * widen(c.u8[30]);
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
return (__m256i)__builtin_lasx_mxvmult_even_acc_u_w2x_b((v16u16) a, (v32u8) b, (v32u8) c);
```

## __m256i __lasx_mxvmult_even_acc_u_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_u_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.u.w2x.d
Builtin: __builtin_lasx_mxvmult_even_acc_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7884
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[0]) * widen(c.u64[0]);
dst.u128[1] = a.u128[1] + widen(b.u64[2]) * widen(c.u64[2]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_u_w2x_d((v4u64) a, (v4u64) b, (v4u64) c);
```

## __m256i __lasx_mxvmult_even_acc_u_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_u_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.u.w2x.h
Builtin: __builtin_lasx_mxvmult_even_acc_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7844
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[1] = a.u32[1] + widen(b.u16[2]) * widen(c.u16[2]);
dst.u32[2] = a.u32[2] + widen(b.u16[4]) * widen(c.u16[4]);
dst.u32[3] = a.u32[3] + widen(b.u16[6]) * widen(c.u16[6]);
dst.u32[4] = a.u32[4] + widen(b.u16[8]) * widen(c.u16[8]);
dst.u32[5] = a.u32[5] + widen(b.u16[10]) * widen(c.u16[10]);
dst.u32[6] = a.u32[6] + widen(b.u16[12]) * widen(c.u16[12]);
dst.u32[7] = a.u32[7] + widen(b.u16[14]) * widen(c.u16[14]);
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
return (__m256i)__builtin_lasx_mxvmult_even_acc_u_w2x_h((v8u32) a, (v16u16) b, (v16u16) c);
```

## __m256i __lasx_mxvmult_even_acc_u_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_u_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.u.w2x.w
Builtin: __builtin_lasx_mxvmult_even_acc_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7864
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[0]) * widen(c.u32[0]);
dst.u64[1] = a.u64[1] + widen(b.u32[2]) * widen(c.u32[2]);
dst.u64[2] = a.u64[2] + widen(b.u32[4]) * widen(c.u32[4]);
dst.u64[3] = a.u64[3] + widen(b.u32[6]) * widen(c.u32[6]);
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
return (__m256i)__builtin_lasx_mxvmult_even_acc_u_w2x_w((v4u64) a, (v8u32) b, (v8u32) c);
```

## __m256i __lasx_mxvmult_even_acc_us_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_us_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.us.w2x.b
Builtin: __builtin_lasx_mxvmult_even_acc_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7904
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = a.u16[0] + widen(b.u8[0]) * widen(c.i8[0]);
dst.u16[1] = a.u16[1] + widen(b.u8[2]) * widen(c.i8[2]);
dst.u16[2] = a.u16[2] + widen(b.u8[4]) * widen(c.i8[4]);
dst.u16[3] = a.u16[3] + widen(b.u8[6]) * widen(c.i8[6]);
dst.u16[4] = a.u16[4] + widen(b.u8[8]) * widen(c.i8[8]);
dst.u16[5] = a.u16[5] + widen(b.u8[10]) * widen(c.i8[10]);
dst.u16[6] = a.u16[6] + widen(b.u8[12]) * widen(c.i8[12]);
dst.u16[7] = a.u16[7] + widen(b.u8[14]) * widen(c.i8[14]);
dst.u16[8] = a.u16[8] + widen(b.u8[16]) * widen(c.i8[16]);
dst.u16[9] = a.u16[9] + widen(b.u8[18]) * widen(c.i8[18]);
dst.u16[10] = a.u16[10] + widen(b.u8[20]) * widen(c.i8[20]);
dst.u16[11] = a.u16[11] + widen(b.u8[22]) * widen(c.i8[22]);
dst.u16[12] = a.u16[12] + widen(b.u8[24]) * widen(c.i8[24]);
dst.u16[13] = a.u16[13] + widen(b.u8[26]) * widen(c.i8[26]);
dst.u16[14] = a.u16[14] + widen(b.u8[28]) * widen(c.i8[28]);
dst.u16[15] = a.u16[15] + widen(b.u8[30]) * widen(c.i8[30]);
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
return (__m256i)__builtin_lasx_mxvmult_even_acc_us_w2x_b((v16u16) a, (v32u8) b, (v32i8) c);
```

## __m256i __lasx_mxvmult_even_acc_us_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_us_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.us.w2x.d
Builtin: __builtin_lasx_mxvmult_even_acc_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7964
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[0]) * widen(c.i64[0]);
dst.u128[1] = a.u128[1] + widen(b.u64[2]) * widen(c.i64[2]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_us_w2x_d((v4u64) a, (v4u64) b, (v4i64) c);
```

## __m256i __lasx_mxvmult_even_acc_us_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_us_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.us.w2x.h
Builtin: __builtin_lasx_mxvmult_even_acc_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7924
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[1] = a.u32[1] + widen(b.u16[2]) * widen(c.i16[2]);
dst.u32[2] = a.u32[2] + widen(b.u16[4]) * widen(c.i16[4]);
dst.u32[3] = a.u32[3] + widen(b.u16[6]) * widen(c.i16[6]);
dst.u32[4] = a.u32[4] + widen(b.u16[8]) * widen(c.i16[8]);
dst.u32[5] = a.u32[5] + widen(b.u16[10]) * widen(c.i16[10]);
dst.u32[6] = a.u32[6] + widen(b.u16[12]) * widen(c.i16[12]);
dst.u32[7] = a.u32[7] + widen(b.u16[14]) * widen(c.i16[14]);
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
return (__m256i)__builtin_lasx_mxvmult_even_acc_us_w2x_h((v8u32) a, (v16u16) b, (v16i16) c);
```

## __m256i __lasx_mxvmult_even_acc_us_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_us_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.us.w2x.w
Builtin: __builtin_lasx_mxvmult_even_acc_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7944
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[0]) * widen(c.i32[0]);
dst.u64[1] = a.u64[1] + widen(b.u32[2]) * widen(c.i32[2]);
dst.u64[2] = a.u64[2] + widen(b.u32[4]) * widen(c.i32[4]);
dst.u64[3] = a.u64[3] + widen(b.u32[6]) * widen(c.i32[6]);
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
return (__m256i)__builtin_lasx_mxvmult_even_acc_us_w2x_w((v4u64) a, (v8u32) b, (v8i32) c);
```

## __m256i __lasx_mxvmult_even_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.s.w2x.b
Builtin: __builtin_lasx_mxvmult_even_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7241
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[0]) * widen(b.i8[0]);
dst.i16[1] = widen(a.i8[2]) * widen(b.i8[2]);
dst.i16[2] = widen(a.i8[4]) * widen(b.i8[4]);
dst.i16[3] = widen(a.i8[6]) * widen(b.i8[6]);
dst.i16[4] = widen(a.i8[8]) * widen(b.i8[8]);
dst.i16[5] = widen(a.i8[10]) * widen(b.i8[10]);
dst.i16[6] = widen(a.i8[12]) * widen(b.i8[12]);
dst.i16[7] = widen(a.i8[14]) * widen(b.i8[14]);
dst.i16[8] = widen(a.i8[16]) * widen(b.i8[16]);
dst.i16[9] = widen(a.i8[18]) * widen(b.i8[18]);
dst.i16[10] = widen(a.i8[20]) * widen(b.i8[20]);
dst.i16[11] = widen(a.i8[22]) * widen(b.i8[22]);
dst.i16[12] = widen(a.i8[24]) * widen(b.i8[24]);
dst.i16[13] = widen(a.i8[26]) * widen(b.i8[26]);
dst.i16[14] = widen(a.i8[28]) * widen(b.i8[28]);
dst.i16[15] = widen(a.i8[30]) * widen(b.i8[30]);
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
return (__m256i)__builtin_lasx_mxvmult_even_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_even_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.s.w2x.d
Builtin: __builtin_lasx_mxvmult_even_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7304
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) * widen(b.i64[0]);
dst.i128[1] = widen(a.i64[2]) * widen(b.i64[2]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_even_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.s.w2x.h
Builtin: __builtin_lasx_mxvmult_even_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7262
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[1] = widen(a.i16[2]) * widen(b.i16[2]);
dst.i32[2] = widen(a.i16[4]) * widen(b.i16[4]);
dst.i32[3] = widen(a.i16[6]) * widen(b.i16[6]);
dst.i32[4] = widen(a.i16[8]) * widen(b.i16[8]);
dst.i32[5] = widen(a.i16[10]) * widen(b.i16[10]);
dst.i32[6] = widen(a.i16[12]) * widen(b.i16[12]);
dst.i32[7] = widen(a.i16[14]) * widen(b.i16[14]);
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
return (__m256i)__builtin_lasx_mxvmult_even_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_even_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.s.w2x.w
Builtin: __builtin_lasx_mxvmult_even_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7283
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) * widen(b.i32[0]);
dst.i64[1] = widen(a.i32[2]) * widen(b.i32[2]);
dst.i64[2] = widen(a.i32[4]) * widen(b.i32[4]);
dst.i64[3] = widen(a.i32[6]) * widen(b.i32[6]);
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
return (__m256i)__builtin_lasx_mxvmult_even_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_even_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.u.w2x.b
Builtin: __builtin_lasx_mxvmult_even_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7325
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[0]) * widen(b.u8[0]);
dst.u16[1] = widen(a.u8[2]) * widen(b.u8[2]);
dst.u16[2] = widen(a.u8[4]) * widen(b.u8[4]);
dst.u16[3] = widen(a.u8[6]) * widen(b.u8[6]);
dst.u16[4] = widen(a.u8[8]) * widen(b.u8[8]);
dst.u16[5] = widen(a.u8[10]) * widen(b.u8[10]);
dst.u16[6] = widen(a.u8[12]) * widen(b.u8[12]);
dst.u16[7] = widen(a.u8[14]) * widen(b.u8[14]);
dst.u16[8] = widen(a.u8[16]) * widen(b.u8[16]);
dst.u16[9] = widen(a.u8[18]) * widen(b.u8[18]);
dst.u16[10] = widen(a.u8[20]) * widen(b.u8[20]);
dst.u16[11] = widen(a.u8[22]) * widen(b.u8[22]);
dst.u16[12] = widen(a.u8[24]) * widen(b.u8[24]);
dst.u16[13] = widen(a.u8[26]) * widen(b.u8[26]);
dst.u16[14] = widen(a.u8[28]) * widen(b.u8[28]);
dst.u16[15] = widen(a.u8[30]) * widen(b.u8[30]);
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
return (__m256i)__builtin_lasx_mxvmult_even_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_even_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.u.w2x.d
Builtin: __builtin_lasx_mxvmult_even_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7388
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) * widen(b.u64[0]);
dst.u128[1] = widen(a.u64[2]) * widen(b.u64[2]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_even_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.u.w2x.h
Builtin: __builtin_lasx_mxvmult_even_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7346
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[1] = widen(a.u16[2]) * widen(b.u16[2]);
dst.u32[2] = widen(a.u16[4]) * widen(b.u16[4]);
dst.u32[3] = widen(a.u16[6]) * widen(b.u16[6]);
dst.u32[4] = widen(a.u16[8]) * widen(b.u16[8]);
dst.u32[5] = widen(a.u16[10]) * widen(b.u16[10]);
dst.u32[6] = widen(a.u16[12]) * widen(b.u16[12]);
dst.u32[7] = widen(a.u16[14]) * widen(b.u16[14]);
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
return (__m256i)__builtin_lasx_mxvmult_even_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_even_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.u.w2x.w
Builtin: __builtin_lasx_mxvmult_even_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7367
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) * widen(b.u32[0]);
dst.u64[1] = widen(a.u32[2]) * widen(b.u32[2]);
dst.u64[2] = widen(a.u32[4]) * widen(b.u32[4]);
dst.u64[3] = widen(a.u32[6]) * widen(b.u32[6]);
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
return (__m256i)__builtin_lasx_mxvmult_even_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_even_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.us.w2x.b
Builtin: __builtin_lasx_mxvmult_even_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7409
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[0]) * widen(b.i8[0]);
dst.u16[1] = widen(a.u8[2]) * widen(b.i8[2]);
dst.u16[2] = widen(a.u8[4]) * widen(b.i8[4]);
dst.u16[3] = widen(a.u8[6]) * widen(b.i8[6]);
dst.u16[4] = widen(a.u8[8]) * widen(b.i8[8]);
dst.u16[5] = widen(a.u8[10]) * widen(b.i8[10]);
dst.u16[6] = widen(a.u8[12]) * widen(b.i8[12]);
dst.u16[7] = widen(a.u8[14]) * widen(b.i8[14]);
dst.u16[8] = widen(a.u8[16]) * widen(b.i8[16]);
dst.u16[9] = widen(a.u8[18]) * widen(b.i8[18]);
dst.u16[10] = widen(a.u8[20]) * widen(b.i8[20]);
dst.u16[11] = widen(a.u8[22]) * widen(b.i8[22]);
dst.u16[12] = widen(a.u8[24]) * widen(b.i8[24]);
dst.u16[13] = widen(a.u8[26]) * widen(b.i8[26]);
dst.u16[14] = widen(a.u8[28]) * widen(b.i8[28]);
dst.u16[15] = widen(a.u8[30]) * widen(b.i8[30]);
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
return (__m256i)__builtin_lasx_mxvmult_even_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_even_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.us.w2x.d
Builtin: __builtin_lasx_mxvmult_even_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7472
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) * widen(b.i64[0]);
dst.u128[1] = widen(a.u64[2]) * widen(b.i64[2]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_even_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.us.w2x.h
Builtin: __builtin_lasx_mxvmult_even_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7430
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[1] = widen(a.u16[2]) * widen(b.i16[2]);
dst.u32[2] = widen(a.u16[4]) * widen(b.i16[4]);
dst.u32[3] = widen(a.u16[6]) * widen(b.i16[6]);
dst.u32[4] = widen(a.u16[8]) * widen(b.i16[8]);
dst.u32[5] = widen(a.u16[10]) * widen(b.i16[10]);
dst.u32[6] = widen(a.u16[12]) * widen(b.i16[12]);
dst.u32[7] = widen(a.u16[14]) * widen(b.i16[14]);
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
return (__m256i)__builtin_lasx_mxvmult_even_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_even_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.us.w2x.w
Builtin: __builtin_lasx_mxvmult_even_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7451
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) * widen(b.i32[0]);
dst.u64[1] = widen(a.u32[2]) * widen(b.i32[2]);
dst.u64[2] = widen(a.u32[4]) * widen(b.i32[4]);
dst.u64[3] = widen(a.u32[6]) * widen(b.i32[6]);
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
return (__m256i)__builtin_lasx_mxvmult_even_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.s.w4x.b
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7060
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = a.i32[0] + widen(b.i8[0]) * widen(c.i8[0]);
dst.i32[1] = a.i32[1] + widen(b.i8[1]) * widen(c.i8[1]);
dst.i32[2] = a.i32[2] + widen(b.i8[2]) * widen(c.i8[2]);
dst.i32[3] = a.i32[3] + widen(b.i8[3]) * widen(c.i8[3]);
dst.i32[4] = a.i32[4] + widen(b.i8[4]) * widen(c.i8[4]);
dst.i32[5] = a.i32[5] + widen(b.i8[5]) * widen(c.i8[5]);
dst.i32[6] = a.i32[6] + widen(b.i8[6]) * widen(c.i8[6]);
dst.i32[7] = a.i32[7] + widen(b.i8[7]) * widen(c.i8[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_b((v8i32) a, (v32i8) b, (v32i8) c);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.s.w4x.h
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7080
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i64[1] = a.i64[1] + widen(b.i16[1]) * widen(c.i16[1]);
dst.i64[2] = a.i64[2] + widen(b.i16[2]) * widen(c.i16[2]);
dst.i64[3] = a.i64[3] + widen(b.i16[3]) * widen(c.i16[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_h((v4i64) a, (v16i16) b, (v16i16) c);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.s.w4x.w
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7100
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i32[0]) * widen(c.i32[0]);
dst.i128[1] = a.i128[1] + widen(b.i32[1]) * widen(c.i32[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_w((v4i64) a, (v8i32) b, (v8i32) c);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.u.w4x.b
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7120
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u8[0]) * widen(c.u8[0]);
dst.u32[1] = a.u32[1] + widen(b.u8[1]) * widen(c.u8[1]);
dst.u32[2] = a.u32[2] + widen(b.u8[2]) * widen(c.u8[2]);
dst.u32[3] = a.u32[3] + widen(b.u8[3]) * widen(c.u8[3]);
dst.u32[4] = a.u32[4] + widen(b.u8[4]) * widen(c.u8[4]);
dst.u32[5] = a.u32[5] + widen(b.u8[5]) * widen(c.u8[5]);
dst.u32[6] = a.u32[6] + widen(b.u8[6]) * widen(c.u8[6]);
dst.u32[7] = a.u32[7] + widen(b.u8[7]) * widen(c.u8[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_b((v8u32) a, (v32u8) b, (v32u8) c);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.u.w4x.h
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7140
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u64[1] = a.u64[1] + widen(b.u16[1]) * widen(c.u16[1]);
dst.u64[2] = a.u64[2] + widen(b.u16[2]) * widen(c.u16[2]);
dst.u64[3] = a.u64[3] + widen(b.u16[3]) * widen(c.u16[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_h((v4u64) a, (v16u16) b, (v16u16) c);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.u.w4x.w
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7160
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u32[0]) * widen(c.u32[0]);
dst.u128[1] = a.u128[1] + widen(b.u32[1]) * widen(c.u32[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_w((v4u64) a, (v8u32) b, (v8u32) c);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.us.w4x.b
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7180
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u8[0]) * widen(c.i8[0]);
dst.u32[1] = a.u32[1] + widen(b.u8[1]) * widen(c.i8[1]);
dst.u32[2] = a.u32[2] + widen(b.u8[2]) * widen(c.i8[2]);
dst.u32[3] = a.u32[3] + widen(b.u8[3]) * widen(c.i8[3]);
dst.u32[4] = a.u32[4] + widen(b.u8[4]) * widen(c.i8[4]);
dst.u32[5] = a.u32[5] + widen(b.u8[5]) * widen(c.i8[5]);
dst.u32[6] = a.u32[6] + widen(b.u8[6]) * widen(c.i8[6]);
dst.u32[7] = a.u32[7] + widen(b.u8[7]) * widen(c.i8[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_b((v8u32) a, (v32u8) b, (v32i8) c);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.us.w4x.h
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7200
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u64[1] = a.u64[1] + widen(b.u16[1]) * widen(c.i16[1]);
dst.u64[2] = a.u64[2] + widen(b.u16[2]) * widen(c.i16[2]);
dst.u64[3] = a.u64[3] + widen(b.u16[3]) * widen(c.i16[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_h((v4u64) a, (v16u16) b, (v16i16) c);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.us.w4x.w
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7220
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u32[0]) * widen(c.i32[0]);
dst.u128[1] = a.u128[1] + widen(b.u32[1]) * widen(c.i32[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_w((v4u64) a, (v8u32) b, (v8i32) c);
```

## __m256i __lasx_mxvmult_hadd_adj4_s_w4x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_s_w4x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.s.w4x.b
Builtin: __builtin_lasx_mxvmult_hadd_adj4_s_w4x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6872
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i8[0]) * widen(b.i8[0]);
dst.i32[1] = widen(a.i8[1]) * widen(b.i8[1]);
dst.i32[2] = widen(a.i8[2]) * widen(b.i8[2]);
dst.i32[3] = widen(a.i8[3]) * widen(b.i8[3]);
dst.i32[4] = widen(a.i8[4]) * widen(b.i8[4]);
dst.i32[5] = widen(a.i8[5]) * widen(b.i8[5]);
dst.i32[6] = widen(a.i8[6]) * widen(b.i8[6]);
dst.i32[7] = widen(a.i8[7]) * widen(b.i8[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_s_w4x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_s_w4x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_s_w4x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.s.w4x.h
Builtin: __builtin_lasx_mxvmult_hadd_adj4_s_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6893
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i64[1] = widen(a.i16[1]) * widen(b.i16[1]);
dst.i64[2] = widen(a.i16[2]) * widen(b.i16[2]);
dst.i64[3] = widen(a.i16[3]) * widen(b.i16[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_s_w4x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_s_w4x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_s_w4x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.s.w4x.w
Builtin: __builtin_lasx_mxvmult_hadd_adj4_s_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6914
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i32[0]) * widen(b.i32[0]);
dst.i128[1] = widen(a.i32[1]) * widen(b.i32[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_s_w4x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_u_w4x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_u_w4x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.u.w4x.b
Builtin: __builtin_lasx_mxvmult_hadd_adj4_u_w4x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6935
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u8[0]) * widen(b.u8[0]);
dst.u32[1] = widen(a.u8[1]) * widen(b.u8[1]);
dst.u32[2] = widen(a.u8[2]) * widen(b.u8[2]);
dst.u32[3] = widen(a.u8[3]) * widen(b.u8[3]);
dst.u32[4] = widen(a.u8[4]) * widen(b.u8[4]);
dst.u32[5] = widen(a.u8[5]) * widen(b.u8[5]);
dst.u32[6] = widen(a.u8[6]) * widen(b.u8[6]);
dst.u32[7] = widen(a.u8[7]) * widen(b.u8[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_u_w4x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_u_w4x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_u_w4x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.u.w4x.h
Builtin: __builtin_lasx_mxvmult_hadd_adj4_u_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6956
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u64[1] = widen(a.u16[1]) * widen(b.u16[1]);
dst.u64[2] = widen(a.u16[2]) * widen(b.u16[2]);
dst.u64[3] = widen(a.u16[3]) * widen(b.u16[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_u_w4x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_u_w4x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_u_w4x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.u.w4x.w
Builtin: __builtin_lasx_mxvmult_hadd_adj4_u_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6977
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u32[0]) * widen(b.u32[0]);
dst.u128[1] = widen(a.u32[1]) * widen(b.u32[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_u_w4x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_us_w4x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_us_w4x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.us.w4x.b
Builtin: __builtin_lasx_mxvmult_hadd_adj4_us_w4x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6998
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u8[0]) * widen(b.i8[0]);
dst.u32[1] = widen(a.u8[1]) * widen(b.i8[1]);
dst.u32[2] = widen(a.u8[2]) * widen(b.i8[2]);
dst.u32[3] = widen(a.u8[3]) * widen(b.i8[3]);
dst.u32[4] = widen(a.u8[4]) * widen(b.i8[4]);
dst.u32[5] = widen(a.u8[5]) * widen(b.i8[5]);
dst.u32[6] = widen(a.u8[6]) * widen(b.i8[6]);
dst.u32[7] = widen(a.u8[7]) * widen(b.i8[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_us_w4x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_us_w4x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_us_w4x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.us.w4x.h
Builtin: __builtin_lasx_mxvmult_hadd_adj4_us_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7019
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u64[1] = widen(a.u16[1]) * widen(b.i16[1]);
dst.u64[2] = widen(a.u16[2]) * widen(b.i16[2]);
dst.u64[3] = widen(a.u16[3]) * widen(b.i16[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_us_w4x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_us_w4x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_us_w4x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.us.w4x.w
Builtin: __builtin_lasx_mxvmult_hadd_adj4_us_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7040
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u32[0]) * widen(b.i32[0]);
dst.u128[1] = widen(a.u32[1]) * widen(b.i32[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_us_w4x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_hi_acc_s_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_s_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.s.w2x.b
Builtin: __builtin_lasx_mxvmult_hi_acc_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8968
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = a.i16[0] + widen(b.i8[16]) * widen(c.i8[16]);
dst.i16[1] = a.i16[1] + widen(b.i8[17]) * widen(c.i8[17]);
dst.i16[2] = a.i16[2] + widen(b.i8[18]) * widen(c.i8[18]);
dst.i16[3] = a.i16[3] + widen(b.i8[19]) * widen(c.i8[19]);
dst.i16[4] = a.i16[4] + widen(b.i8[20]) * widen(c.i8[20]);
dst.i16[5] = a.i16[5] + widen(b.i8[21]) * widen(c.i8[21]);
dst.i16[6] = a.i16[6] + widen(b.i8[22]) * widen(c.i8[22]);
dst.i16[7] = a.i16[7] + widen(b.i8[23]) * widen(c.i8[23]);
dst.i16[8] = a.i16[8] + widen(b.i8[24]) * widen(c.i8[24]);
dst.i16[9] = a.i16[9] + widen(b.i8[25]) * widen(c.i8[25]);
dst.i16[10] = a.i16[10] + widen(b.i8[26]) * widen(c.i8[26]);
dst.i16[11] = a.i16[11] + widen(b.i8[27]) * widen(c.i8[27]);
dst.i16[12] = a.i16[12] + widen(b.i8[28]) * widen(c.i8[28]);
dst.i16[13] = a.i16[13] + widen(b.i8[29]) * widen(c.i8[29]);
dst.i16[14] = a.i16[14] + widen(b.i8[30]) * widen(c.i8[30]);
dst.i16[15] = a.i16[15] + widen(b.i8[31]) * widen(c.i8[31]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_acc_s_w2x_b((v16i16) a, (v32i8) b, (v32i8) c);
```

## __m256i __lasx_mxvmult_hi_acc_s_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_s_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.s.w2x.d
Builtin: __builtin_lasx_mxvmult_hi_acc_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9028
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i64[2]) * widen(c.i64[2]);
dst.i128[1] = a.i128[1] + widen(b.i64[3]) * widen(c.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_s_w2x_d((v4i64) a, (v4i64) b, (v4i64) c);
```

## __m256i __lasx_mxvmult_hi_acc_s_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_s_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.s.w2x.h
Builtin: __builtin_lasx_mxvmult_hi_acc_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8988
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = a.i32[0] + widen(b.i16[8]) * widen(c.i16[8]);
dst.i32[1] = a.i32[1] + widen(b.i16[9]) * widen(c.i16[9]);
dst.i32[2] = a.i32[2] + widen(b.i16[10]) * widen(c.i16[10]);
dst.i32[3] = a.i32[3] + widen(b.i16[11]) * widen(c.i16[11]);
dst.i32[4] = a.i32[4] + widen(b.i16[12]) * widen(c.i16[12]);
dst.i32[5] = a.i32[5] + widen(b.i16[13]) * widen(c.i16[13]);
dst.i32[6] = a.i32[6] + widen(b.i16[14]) * widen(c.i16[14]);
dst.i32[7] = a.i32[7] + widen(b.i16[15]) * widen(c.i16[15]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_acc_s_w2x_h((v8i32) a, (v16i16) b, (v16i16) c);
```

## __m256i __lasx_mxvmult_hi_acc_s_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_s_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.s.w2x.w
Builtin: __builtin_lasx_mxvmult_hi_acc_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9008
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i32[4]) * widen(c.i32[4]);
dst.i64[1] = a.i64[1] + widen(b.i32[5]) * widen(c.i32[5]);
dst.i64[2] = a.i64[2] + widen(b.i32[6]) * widen(c.i32[6]);
dst.i64[3] = a.i64[3] + widen(b.i32[7]) * widen(c.i32[7]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_acc_s_w2x_w((v4i64) a, (v8i32) b, (v8i32) c);
```

## __m256i __lasx_mxvmult_hi_acc_u_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_u_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.u.w2x.b
Builtin: __builtin_lasx_mxvmult_hi_acc_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9048
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = a.u16[0] + widen(b.u8[16]) * widen(c.u8[16]);
dst.u16[1] = a.u16[1] + widen(b.u8[17]) * widen(c.u8[17]);
dst.u16[2] = a.u16[2] + widen(b.u8[18]) * widen(c.u8[18]);
dst.u16[3] = a.u16[3] + widen(b.u8[19]) * widen(c.u8[19]);
dst.u16[4] = a.u16[4] + widen(b.u8[20]) * widen(c.u8[20]);
dst.u16[5] = a.u16[5] + widen(b.u8[21]) * widen(c.u8[21]);
dst.u16[6] = a.u16[6] + widen(b.u8[22]) * widen(c.u8[22]);
dst.u16[7] = a.u16[7] + widen(b.u8[23]) * widen(c.u8[23]);
dst.u16[8] = a.u16[8] + widen(b.u8[24]) * widen(c.u8[24]);
dst.u16[9] = a.u16[9] + widen(b.u8[25]) * widen(c.u8[25]);
dst.u16[10] = a.u16[10] + widen(b.u8[26]) * widen(c.u8[26]);
dst.u16[11] = a.u16[11] + widen(b.u8[27]) * widen(c.u8[27]);
dst.u16[12] = a.u16[12] + widen(b.u8[28]) * widen(c.u8[28]);
dst.u16[13] = a.u16[13] + widen(b.u8[29]) * widen(c.u8[29]);
dst.u16[14] = a.u16[14] + widen(b.u8[30]) * widen(c.u8[30]);
dst.u16[15] = a.u16[15] + widen(b.u8[31]) * widen(c.u8[31]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_acc_u_w2x_b((v16u16) a, (v32u8) b, (v32u8) c);
```

## __m256i __lasx_mxvmult_hi_acc_u_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_u_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.u.w2x.d
Builtin: __builtin_lasx_mxvmult_hi_acc_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9108
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[2]) * widen(c.u64[2]);
dst.u128[1] = a.u128[1] + widen(b.u64[3]) * widen(c.u64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_u_w2x_d((v4u64) a, (v4u64) b, (v4u64) c);
```

## __m256i __lasx_mxvmult_hi_acc_u_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_u_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.u.w2x.h
Builtin: __builtin_lasx_mxvmult_hi_acc_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9068
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[8]) * widen(c.u16[8]);
dst.u32[1] = a.u32[1] + widen(b.u16[9]) * widen(c.u16[9]);
dst.u32[2] = a.u32[2] + widen(b.u16[10]) * widen(c.u16[10]);
dst.u32[3] = a.u32[3] + widen(b.u16[11]) * widen(c.u16[11]);
dst.u32[4] = a.u32[4] + widen(b.u16[12]) * widen(c.u16[12]);
dst.u32[5] = a.u32[5] + widen(b.u16[13]) * widen(c.u16[13]);
dst.u32[6] = a.u32[6] + widen(b.u16[14]) * widen(c.u16[14]);
dst.u32[7] = a.u32[7] + widen(b.u16[15]) * widen(c.u16[15]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_acc_u_w2x_h((v8u32) a, (v16u16) b, (v16u16) c);
```

## __m256i __lasx_mxvmult_hi_acc_u_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_u_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.u.w2x.w
Builtin: __builtin_lasx_mxvmult_hi_acc_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9088
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[4]) * widen(c.u32[4]);
dst.u64[1] = a.u64[1] + widen(b.u32[5]) * widen(c.u32[5]);
dst.u64[2] = a.u64[2] + widen(b.u32[6]) * widen(c.u32[6]);
dst.u64[3] = a.u64[3] + widen(b.u32[7]) * widen(c.u32[7]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_acc_u_w2x_w((v4u64) a, (v8u32) b, (v8u32) c);
```

## __m256i __lasx_mxvmult_hi_acc_us_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_us_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.us.w2x.b
Builtin: __builtin_lasx_mxvmult_hi_acc_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9128
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = a.u16[0] + widen(b.u8[16]) * widen(c.i8[16]);
dst.u16[1] = a.u16[1] + widen(b.u8[17]) * widen(c.i8[17]);
dst.u16[2] = a.u16[2] + widen(b.u8[18]) * widen(c.i8[18]);
dst.u16[3] = a.u16[3] + widen(b.u8[19]) * widen(c.i8[19]);
dst.u16[4] = a.u16[4] + widen(b.u8[20]) * widen(c.i8[20]);
dst.u16[5] = a.u16[5] + widen(b.u8[21]) * widen(c.i8[21]);
dst.u16[6] = a.u16[6] + widen(b.u8[22]) * widen(c.i8[22]);
dst.u16[7] = a.u16[7] + widen(b.u8[23]) * widen(c.i8[23]);
dst.u16[8] = a.u16[8] + widen(b.u8[24]) * widen(c.i8[24]);
dst.u16[9] = a.u16[9] + widen(b.u8[25]) * widen(c.i8[25]);
dst.u16[10] = a.u16[10] + widen(b.u8[26]) * widen(c.i8[26]);
dst.u16[11] = a.u16[11] + widen(b.u8[27]) * widen(c.i8[27]);
dst.u16[12] = a.u16[12] + widen(b.u8[28]) * widen(c.i8[28]);
dst.u16[13] = a.u16[13] + widen(b.u8[29]) * widen(c.i8[29]);
dst.u16[14] = a.u16[14] + widen(b.u8[30]) * widen(c.i8[30]);
dst.u16[15] = a.u16[15] + widen(b.u8[31]) * widen(c.i8[31]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_acc_us_w2x_b((v16u16) a, (v32u8) b, (v32i8) c);
```

## __m256i __lasx_mxvmult_hi_acc_us_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_us_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.us.w2x.d
Builtin: __builtin_lasx_mxvmult_hi_acc_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9188
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[2]) * widen(c.i64[2]);
dst.u128[1] = a.u128[1] + widen(b.u64[3]) * widen(c.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_us_w2x_d((v4u64) a, (v4u64) b, (v4i64) c);
```

## __m256i __lasx_mxvmult_hi_acc_us_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_us_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.us.w2x.h
Builtin: __builtin_lasx_mxvmult_hi_acc_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9148
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[8]) * widen(c.i16[8]);
dst.u32[1] = a.u32[1] + widen(b.u16[9]) * widen(c.i16[9]);
dst.u32[2] = a.u32[2] + widen(b.u16[10]) * widen(c.i16[10]);
dst.u32[3] = a.u32[3] + widen(b.u16[11]) * widen(c.i16[11]);
dst.u32[4] = a.u32[4] + widen(b.u16[12]) * widen(c.i16[12]);
dst.u32[5] = a.u32[5] + widen(b.u16[13]) * widen(c.i16[13]);
dst.u32[6] = a.u32[6] + widen(b.u16[14]) * widen(c.i16[14]);
dst.u32[7] = a.u32[7] + widen(b.u16[15]) * widen(c.i16[15]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_acc_us_w2x_h((v8u32) a, (v16u16) b, (v16i16) c);
```

## __m256i __lasx_mxvmult_hi_acc_us_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_us_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.us.w2x.w
Builtin: __builtin_lasx_mxvmult_hi_acc_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9168
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[4]) * widen(c.i32[4]);
dst.u64[1] = a.u64[1] + widen(b.u32[5]) * widen(c.i32[5]);
dst.u64[2] = a.u64[2] + widen(b.u32[6]) * widen(c.i32[6]);
dst.u64[3] = a.u64[3] + widen(b.u32[7]) * widen(c.i32[7]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_acc_us_w2x_w((v4u64) a, (v8u32) b, (v8i32) c);
```

## __m256i __lasx_mxvmult_hi_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.s.w2x.b
Builtin: __builtin_lasx_mxvmult_hi_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8477
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[16]) * widen(b.i8[16]);
dst.i16[1] = widen(a.i8[17]) * widen(b.i8[17]);
dst.i16[2] = widen(a.i8[18]) * widen(b.i8[18]);
dst.i16[3] = widen(a.i8[19]) * widen(b.i8[19]);
dst.i16[4] = widen(a.i8[20]) * widen(b.i8[20]);
dst.i16[5] = widen(a.i8[21]) * widen(b.i8[21]);
dst.i16[6] = widen(a.i8[22]) * widen(b.i8[22]);
dst.i16[7] = widen(a.i8[23]) * widen(b.i8[23]);
dst.i16[8] = widen(a.i8[24]) * widen(b.i8[24]);
dst.i16[9] = widen(a.i8[25]) * widen(b.i8[25]);
dst.i16[10] = widen(a.i8[26]) * widen(b.i8[26]);
dst.i16[11] = widen(a.i8[27]) * widen(b.i8[27]);
dst.i16[12] = widen(a.i8[28]) * widen(b.i8[28]);
dst.i16[13] = widen(a.i8[29]) * widen(b.i8[29]);
dst.i16[14] = widen(a.i8[30]) * widen(b.i8[30]);
dst.i16[15] = widen(a.i8[31]) * widen(b.i8[31]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_hi_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.s.w2x.d
Builtin: __builtin_lasx_mxvmult_hi_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8540
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[2]) * widen(b.i64[2]);
dst.i128[1] = widen(a.i64[3]) * widen(b.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_hi_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.s.w2x.h
Builtin: __builtin_lasx_mxvmult_hi_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8498
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[8]) * widen(b.i16[8]);
dst.i32[1] = widen(a.i16[9]) * widen(b.i16[9]);
dst.i32[2] = widen(a.i16[10]) * widen(b.i16[10]);
dst.i32[3] = widen(a.i16[11]) * widen(b.i16[11]);
dst.i32[4] = widen(a.i16[12]) * widen(b.i16[12]);
dst.i32[5] = widen(a.i16[13]) * widen(b.i16[13]);
dst.i32[6] = widen(a.i16[14]) * widen(b.i16[14]);
dst.i32[7] = widen(a.i16[15]) * widen(b.i16[15]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_hi_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.s.w2x.w
Builtin: __builtin_lasx_mxvmult_hi_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8519
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[4]) * widen(b.i32[4]);
dst.i64[1] = widen(a.i32[5]) * widen(b.i32[5]);
dst.i64[2] = widen(a.i32[6]) * widen(b.i32[6]);
dst.i64[3] = widen(a.i32[7]) * widen(b.i32[7]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_hi_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.u.w2x.b
Builtin: __builtin_lasx_mxvmult_hi_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8561
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[16]) * widen(b.u8[16]);
dst.u16[1] = widen(a.u8[17]) * widen(b.u8[17]);
dst.u16[2] = widen(a.u8[18]) * widen(b.u8[18]);
dst.u16[3] = widen(a.u8[19]) * widen(b.u8[19]);
dst.u16[4] = widen(a.u8[20]) * widen(b.u8[20]);
dst.u16[5] = widen(a.u8[21]) * widen(b.u8[21]);
dst.u16[6] = widen(a.u8[22]) * widen(b.u8[22]);
dst.u16[7] = widen(a.u8[23]) * widen(b.u8[23]);
dst.u16[8] = widen(a.u8[24]) * widen(b.u8[24]);
dst.u16[9] = widen(a.u8[25]) * widen(b.u8[25]);
dst.u16[10] = widen(a.u8[26]) * widen(b.u8[26]);
dst.u16[11] = widen(a.u8[27]) * widen(b.u8[27]);
dst.u16[12] = widen(a.u8[28]) * widen(b.u8[28]);
dst.u16[13] = widen(a.u8[29]) * widen(b.u8[29]);
dst.u16[14] = widen(a.u8[30]) * widen(b.u8[30]);
dst.u16[15] = widen(a.u8[31]) * widen(b.u8[31]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_hi_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.u.w2x.d
Builtin: __builtin_lasx_mxvmult_hi_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8624
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[2]) * widen(b.u64[2]);
dst.u128[1] = widen(a.u64[3]) * widen(b.u64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_hi_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.u.w2x.h
Builtin: __builtin_lasx_mxvmult_hi_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8582
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[8]) * widen(b.u16[8]);
dst.u32[1] = widen(a.u16[9]) * widen(b.u16[9]);
dst.u32[2] = widen(a.u16[10]) * widen(b.u16[10]);
dst.u32[3] = widen(a.u16[11]) * widen(b.u16[11]);
dst.u32[4] = widen(a.u16[12]) * widen(b.u16[12]);
dst.u32[5] = widen(a.u16[13]) * widen(b.u16[13]);
dst.u32[6] = widen(a.u16[14]) * widen(b.u16[14]);
dst.u32[7] = widen(a.u16[15]) * widen(b.u16[15]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_hi_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.u.w2x.w
Builtin: __builtin_lasx_mxvmult_hi_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8603
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[4]) * widen(b.u32[4]);
dst.u64[1] = widen(a.u32[5]) * widen(b.u32[5]);
dst.u64[2] = widen(a.u32[6]) * widen(b.u32[6]);
dst.u64[3] = widen(a.u32[7]) * widen(b.u32[7]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_hi_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.us.w2x.b
Builtin: __builtin_lasx_mxvmult_hi_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8645
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[16]) * widen(b.i8[16]);
dst.u16[1] = widen(a.u8[17]) * widen(b.i8[17]);
dst.u16[2] = widen(a.u8[18]) * widen(b.i8[18]);
dst.u16[3] = widen(a.u8[19]) * widen(b.i8[19]);
dst.u16[4] = widen(a.u8[20]) * widen(b.i8[20]);
dst.u16[5] = widen(a.u8[21]) * widen(b.i8[21]);
dst.u16[6] = widen(a.u8[22]) * widen(b.i8[22]);
dst.u16[7] = widen(a.u8[23]) * widen(b.i8[23]);
dst.u16[8] = widen(a.u8[24]) * widen(b.i8[24]);
dst.u16[9] = widen(a.u8[25]) * widen(b.i8[25]);
dst.u16[10] = widen(a.u8[26]) * widen(b.i8[26]);
dst.u16[11] = widen(a.u8[27]) * widen(b.i8[27]);
dst.u16[12] = widen(a.u8[28]) * widen(b.i8[28]);
dst.u16[13] = widen(a.u8[29]) * widen(b.i8[29]);
dst.u16[14] = widen(a.u8[30]) * widen(b.i8[30]);
dst.u16[15] = widen(a.u8[31]) * widen(b.i8[31]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_hi_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.us.w2x.d
Builtin: __builtin_lasx_mxvmult_hi_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8708
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[2]) * widen(b.i64[2]);
dst.u128[1] = widen(a.u64[3]) * widen(b.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_hi_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.us.w2x.h
Builtin: __builtin_lasx_mxvmult_hi_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8666
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[8]) * widen(b.i16[8]);
dst.u32[1] = widen(a.u16[9]) * widen(b.i16[9]);
dst.u32[2] = widen(a.u16[10]) * widen(b.i16[10]);
dst.u32[3] = widen(a.u16[11]) * widen(b.i16[11]);
dst.u32[4] = widen(a.u16[12]) * widen(b.i16[12]);
dst.u32[5] = widen(a.u16[13]) * widen(b.i16[13]);
dst.u32[6] = widen(a.u16[14]) * widen(b.i16[14]);
dst.u32[7] = widen(a.u16[15]) * widen(b.i16[15]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_hi_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.us.w2x.w
Builtin: __builtin_lasx_mxvmult_hi_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8687
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[4]) * widen(b.i32[4]);
dst.u64[1] = widen(a.u32[5]) * widen(b.i32[5]);
dst.u64[2] = widen(a.u32[6]) * widen(b.i32[6]);
dst.u64[3] = widen(a.u32[7]) * widen(b.i32[7]);
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
return (__m256i)__builtin_lasx_mxvmult_hi_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_lo_acc_s_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_s_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.s.w2x.b
Builtin: __builtin_lasx_mxvmult_lo_acc_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8728
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = a.i16[0] + widen(b.i8[0]) * widen(c.i8[0]);
dst.i16[1] = a.i16[1] + widen(b.i8[1]) * widen(c.i8[1]);
dst.i16[2] = a.i16[2] + widen(b.i8[2]) * widen(c.i8[2]);
dst.i16[3] = a.i16[3] + widen(b.i8[3]) * widen(c.i8[3]);
dst.i16[4] = a.i16[4] + widen(b.i8[4]) * widen(c.i8[4]);
dst.i16[5] = a.i16[5] + widen(b.i8[5]) * widen(c.i8[5]);
dst.i16[6] = a.i16[6] + widen(b.i8[6]) * widen(c.i8[6]);
dst.i16[7] = a.i16[7] + widen(b.i8[7]) * widen(c.i8[7]);
dst.i16[8] = a.i16[8] + widen(b.i8[8]) * widen(c.i8[8]);
dst.i16[9] = a.i16[9] + widen(b.i8[9]) * widen(c.i8[9]);
dst.i16[10] = a.i16[10] + widen(b.i8[10]) * widen(c.i8[10]);
dst.i16[11] = a.i16[11] + widen(b.i8[11]) * widen(c.i8[11]);
dst.i16[12] = a.i16[12] + widen(b.i8[12]) * widen(c.i8[12]);
dst.i16[13] = a.i16[13] + widen(b.i8[13]) * widen(c.i8[13]);
dst.i16[14] = a.i16[14] + widen(b.i8[14]) * widen(c.i8[14]);
dst.i16[15] = a.i16[15] + widen(b.i8[15]) * widen(c.i8[15]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_acc_s_w2x_b((v16i16) a, (v32i8) b, (v32i8) c);
```

## __m256i __lasx_mxvmult_lo_acc_s_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_s_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.s.w2x.d
Builtin: __builtin_lasx_mxvmult_lo_acc_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8788
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i64[0]) * widen(c.i64[0]);
dst.i128[1] = a.i128[1] + widen(b.i64[1]) * widen(c.i64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_acc_s_w2x_d((v4i64) a, (v4i64) b, (v4i64) c);
```

## __m256i __lasx_mxvmult_lo_acc_s_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_s_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.s.w2x.h
Builtin: __builtin_lasx_mxvmult_lo_acc_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8748
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = a.i32[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[1] = a.i32[1] + widen(b.i16[1]) * widen(c.i16[1]);
dst.i32[2] = a.i32[2] + widen(b.i16[2]) * widen(c.i16[2]);
dst.i32[3] = a.i32[3] + widen(b.i16[3]) * widen(c.i16[3]);
dst.i32[4] = a.i32[4] + widen(b.i16[4]) * widen(c.i16[4]);
dst.i32[5] = a.i32[5] + widen(b.i16[5]) * widen(c.i16[5]);
dst.i32[6] = a.i32[6] + widen(b.i16[6]) * widen(c.i16[6]);
dst.i32[7] = a.i32[7] + widen(b.i16[7]) * widen(c.i16[7]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_acc_s_w2x_h((v8i32) a, (v16i16) b, (v16i16) c);
```

## __m256i __lasx_mxvmult_lo_acc_s_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_s_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.s.w2x.w
Builtin: __builtin_lasx_mxvmult_lo_acc_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8768
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i32[0]) * widen(c.i32[0]);
dst.i64[1] = a.i64[1] + widen(b.i32[1]) * widen(c.i32[1]);
dst.i64[2] = a.i64[2] + widen(b.i32[2]) * widen(c.i32[2]);
dst.i64[3] = a.i64[3] + widen(b.i32[3]) * widen(c.i32[3]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_acc_s_w2x_w((v4i64) a, (v8i32) b, (v8i32) c);
```

## __m256i __lasx_mxvmult_lo_acc_u_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_u_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.u.w2x.b
Builtin: __builtin_lasx_mxvmult_lo_acc_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8808
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = a.u16[0] + widen(b.u8[0]) * widen(c.u8[0]);
dst.u16[1] = a.u16[1] + widen(b.u8[1]) * widen(c.u8[1]);
dst.u16[2] = a.u16[2] + widen(b.u8[2]) * widen(c.u8[2]);
dst.u16[3] = a.u16[3] + widen(b.u8[3]) * widen(c.u8[3]);
dst.u16[4] = a.u16[4] + widen(b.u8[4]) * widen(c.u8[4]);
dst.u16[5] = a.u16[5] + widen(b.u8[5]) * widen(c.u8[5]);
dst.u16[6] = a.u16[6] + widen(b.u8[6]) * widen(c.u8[6]);
dst.u16[7] = a.u16[7] + widen(b.u8[7]) * widen(c.u8[7]);
dst.u16[8] = a.u16[8] + widen(b.u8[8]) * widen(c.u8[8]);
dst.u16[9] = a.u16[9] + widen(b.u8[9]) * widen(c.u8[9]);
dst.u16[10] = a.u16[10] + widen(b.u8[10]) * widen(c.u8[10]);
dst.u16[11] = a.u16[11] + widen(b.u8[11]) * widen(c.u8[11]);
dst.u16[12] = a.u16[12] + widen(b.u8[12]) * widen(c.u8[12]);
dst.u16[13] = a.u16[13] + widen(b.u8[13]) * widen(c.u8[13]);
dst.u16[14] = a.u16[14] + widen(b.u8[14]) * widen(c.u8[14]);
dst.u16[15] = a.u16[15] + widen(b.u8[15]) * widen(c.u8[15]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_acc_u_w2x_b((v16u16) a, (v32u8) b, (v32u8) c);
```

## __m256i __lasx_mxvmult_lo_acc_u_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_u_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.u.w2x.d
Builtin: __builtin_lasx_mxvmult_lo_acc_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8868
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[0]) * widen(c.u64[0]);
dst.u128[1] = a.u128[1] + widen(b.u64[1]) * widen(c.u64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_acc_u_w2x_d((v4u64) a, (v4u64) b, (v4u64) c);
```

## __m256i __lasx_mxvmult_lo_acc_u_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_u_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.u.w2x.h
Builtin: __builtin_lasx_mxvmult_lo_acc_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8828
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[1] = a.u32[1] + widen(b.u16[1]) * widen(c.u16[1]);
dst.u32[2] = a.u32[2] + widen(b.u16[2]) * widen(c.u16[2]);
dst.u32[3] = a.u32[3] + widen(b.u16[3]) * widen(c.u16[3]);
dst.u32[4] = a.u32[4] + widen(b.u16[4]) * widen(c.u16[4]);
dst.u32[5] = a.u32[5] + widen(b.u16[5]) * widen(c.u16[5]);
dst.u32[6] = a.u32[6] + widen(b.u16[6]) * widen(c.u16[6]);
dst.u32[7] = a.u32[7] + widen(b.u16[7]) * widen(c.u16[7]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_acc_u_w2x_h((v8u32) a, (v16u16) b, (v16u16) c);
```

## __m256i __lasx_mxvmult_lo_acc_u_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_u_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.u.w2x.w
Builtin: __builtin_lasx_mxvmult_lo_acc_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8848
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[0]) * widen(c.u32[0]);
dst.u64[1] = a.u64[1] + widen(b.u32[1]) * widen(c.u32[1]);
dst.u64[2] = a.u64[2] + widen(b.u32[2]) * widen(c.u32[2]);
dst.u64[3] = a.u64[3] + widen(b.u32[3]) * widen(c.u32[3]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_acc_u_w2x_w((v4u64) a, (v8u32) b, (v8u32) c);
```

## __m256i __lasx_mxvmult_lo_acc_us_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_us_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.us.w2x.b
Builtin: __builtin_lasx_mxvmult_lo_acc_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8888
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = a.u16[0] + widen(b.u8[0]) * widen(c.i8[0]);
dst.u16[1] = a.u16[1] + widen(b.u8[1]) * widen(c.i8[1]);
dst.u16[2] = a.u16[2] + widen(b.u8[2]) * widen(c.i8[2]);
dst.u16[3] = a.u16[3] + widen(b.u8[3]) * widen(c.i8[3]);
dst.u16[4] = a.u16[4] + widen(b.u8[4]) * widen(c.i8[4]);
dst.u16[5] = a.u16[5] + widen(b.u8[5]) * widen(c.i8[5]);
dst.u16[6] = a.u16[6] + widen(b.u8[6]) * widen(c.i8[6]);
dst.u16[7] = a.u16[7] + widen(b.u8[7]) * widen(c.i8[7]);
dst.u16[8] = a.u16[8] + widen(b.u8[8]) * widen(c.i8[8]);
dst.u16[9] = a.u16[9] + widen(b.u8[9]) * widen(c.i8[9]);
dst.u16[10] = a.u16[10] + widen(b.u8[10]) * widen(c.i8[10]);
dst.u16[11] = a.u16[11] + widen(b.u8[11]) * widen(c.i8[11]);
dst.u16[12] = a.u16[12] + widen(b.u8[12]) * widen(c.i8[12]);
dst.u16[13] = a.u16[13] + widen(b.u8[13]) * widen(c.i8[13]);
dst.u16[14] = a.u16[14] + widen(b.u8[14]) * widen(c.i8[14]);
dst.u16[15] = a.u16[15] + widen(b.u8[15]) * widen(c.i8[15]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_acc_us_w2x_b((v16u16) a, (v32u8) b, (v32i8) c);
```

## __m256i __lasx_mxvmult_lo_acc_us_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_us_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.us.w2x.d
Builtin: __builtin_lasx_mxvmult_lo_acc_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8948
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[0]) * widen(c.i64[0]);
dst.u128[1] = a.u128[1] + widen(b.u64[1]) * widen(c.i64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_acc_us_w2x_d((v4u64) a, (v4u64) b, (v4i64) c);
```

## __m256i __lasx_mxvmult_lo_acc_us_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_us_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.us.w2x.h
Builtin: __builtin_lasx_mxvmult_lo_acc_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8908
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[1] = a.u32[1] + widen(b.u16[1]) * widen(c.i16[1]);
dst.u32[2] = a.u32[2] + widen(b.u16[2]) * widen(c.i16[2]);
dst.u32[3] = a.u32[3] + widen(b.u16[3]) * widen(c.i16[3]);
dst.u32[4] = a.u32[4] + widen(b.u16[4]) * widen(c.i16[4]);
dst.u32[5] = a.u32[5] + widen(b.u16[5]) * widen(c.i16[5]);
dst.u32[6] = a.u32[6] + widen(b.u16[6]) * widen(c.i16[6]);
dst.u32[7] = a.u32[7] + widen(b.u16[7]) * widen(c.i16[7]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_acc_us_w2x_h((v8u32) a, (v16u16) b, (v16i16) c);
```

## __m256i __lasx_mxvmult_lo_acc_us_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_us_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.us.w2x.w
Builtin: __builtin_lasx_mxvmult_lo_acc_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8928
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[0]) * widen(c.i32[0]);
dst.u64[1] = a.u64[1] + widen(b.u32[1]) * widen(c.i32[1]);
dst.u64[2] = a.u64[2] + widen(b.u32[2]) * widen(c.i32[2]);
dst.u64[3] = a.u64[3] + widen(b.u32[3]) * widen(c.i32[3]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_acc_us_w2x_w((v4u64) a, (v8u32) b, (v8i32) c);
```

## __m256i __lasx_mxvmult_lo_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.s.w2x.b
Builtin: __builtin_lasx_mxvmult_lo_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8225
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[0]) * widen(b.i8[0]);
dst.i16[1] = widen(a.i8[1]) * widen(b.i8[1]);
dst.i16[2] = widen(a.i8[2]) * widen(b.i8[2]);
dst.i16[3] = widen(a.i8[3]) * widen(b.i8[3]);
dst.i16[4] = widen(a.i8[4]) * widen(b.i8[4]);
dst.i16[5] = widen(a.i8[5]) * widen(b.i8[5]);
dst.i16[6] = widen(a.i8[6]) * widen(b.i8[6]);
dst.i16[7] = widen(a.i8[7]) * widen(b.i8[7]);
dst.i16[8] = widen(a.i8[8]) * widen(b.i8[8]);
dst.i16[9] = widen(a.i8[9]) * widen(b.i8[9]);
dst.i16[10] = widen(a.i8[10]) * widen(b.i8[10]);
dst.i16[11] = widen(a.i8[11]) * widen(b.i8[11]);
dst.i16[12] = widen(a.i8[12]) * widen(b.i8[12]);
dst.i16[13] = widen(a.i8[13]) * widen(b.i8[13]);
dst.i16[14] = widen(a.i8[14]) * widen(b.i8[14]);
dst.i16[15] = widen(a.i8[15]) * widen(b.i8[15]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_lo_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.s.w2x.d
Builtin: __builtin_lasx_mxvmult_lo_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8288
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) * widen(b.i64[0]);
dst.i128[1] = widen(a.i64[1]) * widen(b.i64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_lo_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.s.w2x.h
Builtin: __builtin_lasx_mxvmult_lo_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8246
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[1] = widen(a.i16[1]) * widen(b.i16[1]);
dst.i32[2] = widen(a.i16[2]) * widen(b.i16[2]);
dst.i32[3] = widen(a.i16[3]) * widen(b.i16[3]);
dst.i32[4] = widen(a.i16[4]) * widen(b.i16[4]);
dst.i32[5] = widen(a.i16[5]) * widen(b.i16[5]);
dst.i32[6] = widen(a.i16[6]) * widen(b.i16[6]);
dst.i32[7] = widen(a.i16[7]) * widen(b.i16[7]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_lo_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.s.w2x.w
Builtin: __builtin_lasx_mxvmult_lo_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8267
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) * widen(b.i32[0]);
dst.i64[1] = widen(a.i32[1]) * widen(b.i32[1]);
dst.i64[2] = widen(a.i32[2]) * widen(b.i32[2]);
dst.i64[3] = widen(a.i32[3]) * widen(b.i32[3]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_lo_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.u.w2x.b
Builtin: __builtin_lasx_mxvmult_lo_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8309
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[0]) * widen(b.u8[0]);
dst.u16[1] = widen(a.u8[1]) * widen(b.u8[1]);
dst.u16[2] = widen(a.u8[2]) * widen(b.u8[2]);
dst.u16[3] = widen(a.u8[3]) * widen(b.u8[3]);
dst.u16[4] = widen(a.u8[4]) * widen(b.u8[4]);
dst.u16[5] = widen(a.u8[5]) * widen(b.u8[5]);
dst.u16[6] = widen(a.u8[6]) * widen(b.u8[6]);
dst.u16[7] = widen(a.u8[7]) * widen(b.u8[7]);
dst.u16[8] = widen(a.u8[8]) * widen(b.u8[8]);
dst.u16[9] = widen(a.u8[9]) * widen(b.u8[9]);
dst.u16[10] = widen(a.u8[10]) * widen(b.u8[10]);
dst.u16[11] = widen(a.u8[11]) * widen(b.u8[11]);
dst.u16[12] = widen(a.u8[12]) * widen(b.u8[12]);
dst.u16[13] = widen(a.u8[13]) * widen(b.u8[13]);
dst.u16[14] = widen(a.u8[14]) * widen(b.u8[14]);
dst.u16[15] = widen(a.u8[15]) * widen(b.u8[15]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_lo_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.u.w2x.d
Builtin: __builtin_lasx_mxvmult_lo_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8372
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) * widen(b.u64[0]);
dst.u128[1] = widen(a.u64[1]) * widen(b.u64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_lo_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.u.w2x.h
Builtin: __builtin_lasx_mxvmult_lo_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8330
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[1] = widen(a.u16[1]) * widen(b.u16[1]);
dst.u32[2] = widen(a.u16[2]) * widen(b.u16[2]);
dst.u32[3] = widen(a.u16[3]) * widen(b.u16[3]);
dst.u32[4] = widen(a.u16[4]) * widen(b.u16[4]);
dst.u32[5] = widen(a.u16[5]) * widen(b.u16[5]);
dst.u32[6] = widen(a.u16[6]) * widen(b.u16[6]);
dst.u32[7] = widen(a.u16[7]) * widen(b.u16[7]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_lo_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.u.w2x.w
Builtin: __builtin_lasx_mxvmult_lo_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8351
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) * widen(b.u32[0]);
dst.u64[1] = widen(a.u32[1]) * widen(b.u32[1]);
dst.u64[2] = widen(a.u32[2]) * widen(b.u32[2]);
dst.u64[3] = widen(a.u32[3]) * widen(b.u32[3]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_lo_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.us.w2x.b
Builtin: __builtin_lasx_mxvmult_lo_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8393
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[0]) * widen(b.i8[0]);
dst.u16[1] = widen(a.u8[1]) * widen(b.i8[1]);
dst.u16[2] = widen(a.u8[2]) * widen(b.i8[2]);
dst.u16[3] = widen(a.u8[3]) * widen(b.i8[3]);
dst.u16[4] = widen(a.u8[4]) * widen(b.i8[4]);
dst.u16[5] = widen(a.u8[5]) * widen(b.i8[5]);
dst.u16[6] = widen(a.u8[6]) * widen(b.i8[6]);
dst.u16[7] = widen(a.u8[7]) * widen(b.i8[7]);
dst.u16[8] = widen(a.u8[8]) * widen(b.i8[8]);
dst.u16[9] = widen(a.u8[9]) * widen(b.i8[9]);
dst.u16[10] = widen(a.u8[10]) * widen(b.i8[10]);
dst.u16[11] = widen(a.u8[11]) * widen(b.i8[11]);
dst.u16[12] = widen(a.u8[12]) * widen(b.i8[12]);
dst.u16[13] = widen(a.u8[13]) * widen(b.i8[13]);
dst.u16[14] = widen(a.u8[14]) * widen(b.i8[14]);
dst.u16[15] = widen(a.u8[15]) * widen(b.i8[15]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_lo_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.us.w2x.d
Builtin: __builtin_lasx_mxvmult_lo_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8456
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) * widen(b.i64[0]);
dst.u128[1] = widen(a.u64[1]) * widen(b.i64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_lo_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.us.w2x.h
Builtin: __builtin_lasx_mxvmult_lo_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8414
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[1] = widen(a.u16[1]) * widen(b.i16[1]);
dst.u32[2] = widen(a.u16[2]) * widen(b.i16[2]);
dst.u32[3] = widen(a.u16[3]) * widen(b.i16[3]);
dst.u32[4] = widen(a.u16[4]) * widen(b.i16[4]);
dst.u32[5] = widen(a.u16[5]) * widen(b.i16[5]);
dst.u32[6] = widen(a.u16[6]) * widen(b.i16[6]);
dst.u32[7] = widen(a.u16[7]) * widen(b.i16[7]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_lo_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.us.w2x.w
Builtin: __builtin_lasx_mxvmult_lo_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8435
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) * widen(b.i32[0]);
dst.u64[1] = widen(a.u32[1]) * widen(b.i32[1]);
dst.u64[2] = widen(a.u32[2]) * widen(b.i32[2]);
dst.u64[3] = widen(a.u32[3]) * widen(b.i32[3]);
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
return (__m256i)__builtin_lasx_mxvmult_lo_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_odd_acc_s_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_s_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.s.w2x.b
Builtin: __builtin_lasx_mxvmult_odd_acc_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7984
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = a.i16[0] + widen(b.i8[1]) * widen(c.i8[1]);
dst.i16[1] = a.i16[1] + widen(b.i8[3]) * widen(c.i8[3]);
dst.i16[2] = a.i16[2] + widen(b.i8[5]) * widen(c.i8[5]);
dst.i16[3] = a.i16[3] + widen(b.i8[7]) * widen(c.i8[7]);
dst.i16[4] = a.i16[4] + widen(b.i8[9]) * widen(c.i8[9]);
dst.i16[5] = a.i16[5] + widen(b.i8[11]) * widen(c.i8[11]);
dst.i16[6] = a.i16[6] + widen(b.i8[13]) * widen(c.i8[13]);
dst.i16[7] = a.i16[7] + widen(b.i8[15]) * widen(c.i8[15]);
dst.i16[8] = a.i16[8] + widen(b.i8[17]) * widen(c.i8[17]);
dst.i16[9] = a.i16[9] + widen(b.i8[19]) * widen(c.i8[19]);
dst.i16[10] = a.i16[10] + widen(b.i8[21]) * widen(c.i8[21]);
dst.i16[11] = a.i16[11] + widen(b.i8[23]) * widen(c.i8[23]);
dst.i16[12] = a.i16[12] + widen(b.i8[25]) * widen(c.i8[25]);
dst.i16[13] = a.i16[13] + widen(b.i8[27]) * widen(c.i8[27]);
dst.i16[14] = a.i16[14] + widen(b.i8[29]) * widen(c.i8[29]);
dst.i16[15] = a.i16[15] + widen(b.i8[31]) * widen(c.i8[31]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_acc_s_w2x_b((v16i16) a, (v32i8) b, (v32i8) c);
```

## __m256i __lasx_mxvmult_odd_acc_s_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_s_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.s.w2x.d
Builtin: __builtin_lasx_mxvmult_odd_acc_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8044
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i64[1]) * widen(c.i64[1]);
dst.i128[1] = a.i128[1] + widen(b.i64[3]) * widen(c.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_s_w2x_d((v4i64) a, (v4i64) b, (v4i64) c);
```

## __m256i __lasx_mxvmult_odd_acc_s_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_s_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.s.w2x.h
Builtin: __builtin_lasx_mxvmult_odd_acc_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8004
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = a.i32[0] + widen(b.i16[1]) * widen(c.i16[1]);
dst.i32[1] = a.i32[1] + widen(b.i16[3]) * widen(c.i16[3]);
dst.i32[2] = a.i32[2] + widen(b.i16[5]) * widen(c.i16[5]);
dst.i32[3] = a.i32[3] + widen(b.i16[7]) * widen(c.i16[7]);
dst.i32[4] = a.i32[4] + widen(b.i16[9]) * widen(c.i16[9]);
dst.i32[5] = a.i32[5] + widen(b.i16[11]) * widen(c.i16[11]);
dst.i32[6] = a.i32[6] + widen(b.i16[13]) * widen(c.i16[13]);
dst.i32[7] = a.i32[7] + widen(b.i16[15]) * widen(c.i16[15]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_acc_s_w2x_h((v8i32) a, (v16i16) b, (v16i16) c);
```

## __m256i __lasx_mxvmult_odd_acc_s_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_s_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.s.w2x.w
Builtin: __builtin_lasx_mxvmult_odd_acc_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8024
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i32[1]) * widen(c.i32[1]);
dst.i64[1] = a.i64[1] + widen(b.i32[3]) * widen(c.i32[3]);
dst.i64[2] = a.i64[2] + widen(b.i32[5]) * widen(c.i32[5]);
dst.i64[3] = a.i64[3] + widen(b.i32[7]) * widen(c.i32[7]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_acc_s_w2x_w((v4i64) a, (v8i32) b, (v8i32) c);
```

## __m256i __lasx_mxvmult_odd_acc_u_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_u_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.u.w2x.b
Builtin: __builtin_lasx_mxvmult_odd_acc_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8064
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = a.u16[0] + widen(b.u8[1]) * widen(c.u8[1]);
dst.u16[1] = a.u16[1] + widen(b.u8[3]) * widen(c.u8[3]);
dst.u16[2] = a.u16[2] + widen(b.u8[5]) * widen(c.u8[5]);
dst.u16[3] = a.u16[3] + widen(b.u8[7]) * widen(c.u8[7]);
dst.u16[4] = a.u16[4] + widen(b.u8[9]) * widen(c.u8[9]);
dst.u16[5] = a.u16[5] + widen(b.u8[11]) * widen(c.u8[11]);
dst.u16[6] = a.u16[6] + widen(b.u8[13]) * widen(c.u8[13]);
dst.u16[7] = a.u16[7] + widen(b.u8[15]) * widen(c.u8[15]);
dst.u16[8] = a.u16[8] + widen(b.u8[17]) * widen(c.u8[17]);
dst.u16[9] = a.u16[9] + widen(b.u8[19]) * widen(c.u8[19]);
dst.u16[10] = a.u16[10] + widen(b.u8[21]) * widen(c.u8[21]);
dst.u16[11] = a.u16[11] + widen(b.u8[23]) * widen(c.u8[23]);
dst.u16[12] = a.u16[12] + widen(b.u8[25]) * widen(c.u8[25]);
dst.u16[13] = a.u16[13] + widen(b.u8[27]) * widen(c.u8[27]);
dst.u16[14] = a.u16[14] + widen(b.u8[29]) * widen(c.u8[29]);
dst.u16[15] = a.u16[15] + widen(b.u8[31]) * widen(c.u8[31]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_acc_u_w2x_b((v16u16) a, (v32u8) b, (v32u8) c);
```

## __m256i __lasx_mxvmult_odd_acc_u_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_u_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.u.w2x.d
Builtin: __builtin_lasx_mxvmult_odd_acc_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8124
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[1]) * widen(c.u64[1]);
dst.u128[1] = a.u128[1] + widen(b.u64[3]) * widen(c.u64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_u_w2x_d((v4u64) a, (v4u64) b, (v4u64) c);
```

## __m256i __lasx_mxvmult_odd_acc_u_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_u_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.u.w2x.h
Builtin: __builtin_lasx_mxvmult_odd_acc_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8084
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[1]) * widen(c.u16[1]);
dst.u32[1] = a.u32[1] + widen(b.u16[3]) * widen(c.u16[3]);
dst.u32[2] = a.u32[2] + widen(b.u16[5]) * widen(c.u16[5]);
dst.u32[3] = a.u32[3] + widen(b.u16[7]) * widen(c.u16[7]);
dst.u32[4] = a.u32[4] + widen(b.u16[9]) * widen(c.u16[9]);
dst.u32[5] = a.u32[5] + widen(b.u16[11]) * widen(c.u16[11]);
dst.u32[6] = a.u32[6] + widen(b.u16[13]) * widen(c.u16[13]);
dst.u32[7] = a.u32[7] + widen(b.u16[15]) * widen(c.u16[15]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_acc_u_w2x_h((v8u32) a, (v16u16) b, (v16u16) c);
```

## __m256i __lasx_mxvmult_odd_acc_u_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_u_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.u.w2x.w
Builtin: __builtin_lasx_mxvmult_odd_acc_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8104
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[1]) * widen(c.u32[1]);
dst.u64[1] = a.u64[1] + widen(b.u32[3]) * widen(c.u32[3]);
dst.u64[2] = a.u64[2] + widen(b.u32[5]) * widen(c.u32[5]);
dst.u64[3] = a.u64[3] + widen(b.u32[7]) * widen(c.u32[7]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_acc_u_w2x_w((v4u64) a, (v8u32) b, (v8u32) c);
```

## __m256i __lasx_mxvmult_odd_acc_us_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_us_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.us.w2x.b
Builtin: __builtin_lasx_mxvmult_odd_acc_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8144
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = a.u16[0] + widen(b.u8[1]) * widen(c.i8[1]);
dst.u16[1] = a.u16[1] + widen(b.u8[3]) * widen(c.i8[3]);
dst.u16[2] = a.u16[2] + widen(b.u8[5]) * widen(c.i8[5]);
dst.u16[3] = a.u16[3] + widen(b.u8[7]) * widen(c.i8[7]);
dst.u16[4] = a.u16[4] + widen(b.u8[9]) * widen(c.i8[9]);
dst.u16[5] = a.u16[5] + widen(b.u8[11]) * widen(c.i8[11]);
dst.u16[6] = a.u16[6] + widen(b.u8[13]) * widen(c.i8[13]);
dst.u16[7] = a.u16[7] + widen(b.u8[15]) * widen(c.i8[15]);
dst.u16[8] = a.u16[8] + widen(b.u8[17]) * widen(c.i8[17]);
dst.u16[9] = a.u16[9] + widen(b.u8[19]) * widen(c.i8[19]);
dst.u16[10] = a.u16[10] + widen(b.u8[21]) * widen(c.i8[21]);
dst.u16[11] = a.u16[11] + widen(b.u8[23]) * widen(c.i8[23]);
dst.u16[12] = a.u16[12] + widen(b.u8[25]) * widen(c.i8[25]);
dst.u16[13] = a.u16[13] + widen(b.u8[27]) * widen(c.i8[27]);
dst.u16[14] = a.u16[14] + widen(b.u8[29]) * widen(c.i8[29]);
dst.u16[15] = a.u16[15] + widen(b.u8[31]) * widen(c.i8[31]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_acc_us_w2x_b((v16u16) a, (v32u8) b, (v32i8) c);
```

## __m256i __lasx_mxvmult_odd_acc_us_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_us_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.us.w2x.d
Builtin: __builtin_lasx_mxvmult_odd_acc_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8204
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[1]) * widen(c.i64[1]);
dst.u128[1] = a.u128[1] + widen(b.u64[3]) * widen(c.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>1.16</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_us_w2x_d((v4u64) a, (v4u64) b, (v4i64) c);
```

## __m256i __lasx_mxvmult_odd_acc_us_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_us_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.us.w2x.h
Builtin: __builtin_lasx_mxvmult_odd_acc_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8164
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[1]) * widen(c.i16[1]);
dst.u32[1] = a.u32[1] + widen(b.u16[3]) * widen(c.i16[3]);
dst.u32[2] = a.u32[2] + widen(b.u16[5]) * widen(c.i16[5]);
dst.u32[3] = a.u32[3] + widen(b.u16[7]) * widen(c.i16[7]);
dst.u32[4] = a.u32[4] + widen(b.u16[9]) * widen(c.i16[9]);
dst.u32[5] = a.u32[5] + widen(b.u16[11]) * widen(c.i16[11]);
dst.u32[6] = a.u32[6] + widen(b.u16[13]) * widen(c.i16[13]);
dst.u32[7] = a.u32[7] + widen(b.u16[15]) * widen(c.i16[15]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_acc_us_w2x_h((v8u32) a, (v16u16) b, (v16i16) c);
```

## __m256i __lasx_mxvmult_odd_acc_us_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_us_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.us.w2x.w
Builtin: __builtin_lasx_mxvmult_odd_acc_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8184
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[1]) * widen(c.i32[1]);
dst.u64[1] = a.u64[1] + widen(b.u32[3]) * widen(c.i32[3]);
dst.u64[2] = a.u64[2] + widen(b.u32[5]) * widen(c.i32[5]);
dst.u64[3] = a.u64[3] + widen(b.u32[7]) * widen(c.i32[7]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_acc_us_w2x_w((v4u64) a, (v8u32) b, (v8i32) c);
```

## __m256i __lasx_mxvmult_odd_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.s.w2x.b
Builtin: __builtin_lasx_mxvmult_odd_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7493
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[1]) * widen(b.i8[1]);
dst.i16[1] = widen(a.i8[3]) * widen(b.i8[3]);
dst.i16[2] = widen(a.i8[5]) * widen(b.i8[5]);
dst.i16[3] = widen(a.i8[7]) * widen(b.i8[7]);
dst.i16[4] = widen(a.i8[9]) * widen(b.i8[9]);
dst.i16[5] = widen(a.i8[11]) * widen(b.i8[11]);
dst.i16[6] = widen(a.i8[13]) * widen(b.i8[13]);
dst.i16[7] = widen(a.i8[15]) * widen(b.i8[15]);
dst.i16[8] = widen(a.i8[17]) * widen(b.i8[17]);
dst.i16[9] = widen(a.i8[19]) * widen(b.i8[19]);
dst.i16[10] = widen(a.i8[21]) * widen(b.i8[21]);
dst.i16[11] = widen(a.i8[23]) * widen(b.i8[23]);
dst.i16[12] = widen(a.i8[25]) * widen(b.i8[25]);
dst.i16[13] = widen(a.i8[27]) * widen(b.i8[27]);
dst.i16[14] = widen(a.i8[29]) * widen(b.i8[29]);
dst.i16[15] = widen(a.i8[31]) * widen(b.i8[31]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_odd_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.s.w2x.d
Builtin: __builtin_lasx_mxvmult_odd_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7556
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[1]) * widen(b.i64[1]);
dst.i128[1] = widen(a.i64[3]) * widen(b.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_odd_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.s.w2x.h
Builtin: __builtin_lasx_mxvmult_odd_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7514
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[1]) * widen(b.i16[1]);
dst.i32[1] = widen(a.i16[3]) * widen(b.i16[3]);
dst.i32[2] = widen(a.i16[5]) * widen(b.i16[5]);
dst.i32[3] = widen(a.i16[7]) * widen(b.i16[7]);
dst.i32[4] = widen(a.i16[9]) * widen(b.i16[9]);
dst.i32[5] = widen(a.i16[11]) * widen(b.i16[11]);
dst.i32[6] = widen(a.i16[13]) * widen(b.i16[13]);
dst.i32[7] = widen(a.i16[15]) * widen(b.i16[15]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_odd_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.s.w2x.w
Builtin: __builtin_lasx_mxvmult_odd_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7535
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[1]) * widen(b.i32[1]);
dst.i64[1] = widen(a.i32[3]) * widen(b.i32[3]);
dst.i64[2] = widen(a.i32[5]) * widen(b.i32[5]);
dst.i64[3] = widen(a.i32[7]) * widen(b.i32[7]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_odd_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.u.w2x.b
Builtin: __builtin_lasx_mxvmult_odd_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7577
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[1]) * widen(b.u8[1]);
dst.u16[1] = widen(a.u8[3]) * widen(b.u8[3]);
dst.u16[2] = widen(a.u8[5]) * widen(b.u8[5]);
dst.u16[3] = widen(a.u8[7]) * widen(b.u8[7]);
dst.u16[4] = widen(a.u8[9]) * widen(b.u8[9]);
dst.u16[5] = widen(a.u8[11]) * widen(b.u8[11]);
dst.u16[6] = widen(a.u8[13]) * widen(b.u8[13]);
dst.u16[7] = widen(a.u8[15]) * widen(b.u8[15]);
dst.u16[8] = widen(a.u8[17]) * widen(b.u8[17]);
dst.u16[9] = widen(a.u8[19]) * widen(b.u8[19]);
dst.u16[10] = widen(a.u8[21]) * widen(b.u8[21]);
dst.u16[11] = widen(a.u8[23]) * widen(b.u8[23]);
dst.u16[12] = widen(a.u8[25]) * widen(b.u8[25]);
dst.u16[13] = widen(a.u8[27]) * widen(b.u8[27]);
dst.u16[14] = widen(a.u8[29]) * widen(b.u8[29]);
dst.u16[15] = widen(a.u8[31]) * widen(b.u8[31]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_odd_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.u.w2x.d
Builtin: __builtin_lasx_mxvmult_odd_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7640
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) * widen(b.u64[1]);
dst.u128[1] = widen(a.u64[3]) * widen(b.u64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_odd_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.u.w2x.h
Builtin: __builtin_lasx_mxvmult_odd_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7598
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[1]) * widen(b.u16[1]);
dst.u32[1] = widen(a.u16[3]) * widen(b.u16[3]);
dst.u32[2] = widen(a.u16[5]) * widen(b.u16[5]);
dst.u32[3] = widen(a.u16[7]) * widen(b.u16[7]);
dst.u32[4] = widen(a.u16[9]) * widen(b.u16[9]);
dst.u32[5] = widen(a.u16[11]) * widen(b.u16[11]);
dst.u32[6] = widen(a.u16[13]) * widen(b.u16[13]);
dst.u32[7] = widen(a.u16[15]) * widen(b.u16[15]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_odd_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.u.w2x.w
Builtin: __builtin_lasx_mxvmult_odd_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7619
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[1]) * widen(b.u32[1]);
dst.u64[1] = widen(a.u32[3]) * widen(b.u32[3]);
dst.u64[2] = widen(a.u32[5]) * widen(b.u32[5]);
dst.u64[3] = widen(a.u32[7]) * widen(b.u32[7]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_odd_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.us.w2x.b
Builtin: __builtin_lasx_mxvmult_odd_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7661
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[1]) * widen(b.i8[1]);
dst.u16[1] = widen(a.u8[3]) * widen(b.i8[3]);
dst.u16[2] = widen(a.u8[5]) * widen(b.i8[5]);
dst.u16[3] = widen(a.u8[7]) * widen(b.i8[7]);
dst.u16[4] = widen(a.u8[9]) * widen(b.i8[9]);
dst.u16[5] = widen(a.u8[11]) * widen(b.i8[11]);
dst.u16[6] = widen(a.u8[13]) * widen(b.i8[13]);
dst.u16[7] = widen(a.u8[15]) * widen(b.i8[15]);
dst.u16[8] = widen(a.u8[17]) * widen(b.i8[17]);
dst.u16[9] = widen(a.u8[19]) * widen(b.i8[19]);
dst.u16[10] = widen(a.u8[21]) * widen(b.i8[21]);
dst.u16[11] = widen(a.u8[23]) * widen(b.i8[23]);
dst.u16[12] = widen(a.u8[25]) * widen(b.i8[25]);
dst.u16[13] = widen(a.u8[27]) * widen(b.i8[27]);
dst.u16[14] = widen(a.u8[29]) * widen(b.i8[29]);
dst.u16[15] = widen(a.u8[31]) * widen(b.i8[31]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_odd_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.us.w2x.d
Builtin: __builtin_lasx_mxvmult_odd_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7724
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) * widen(b.i64[1]);
dst.u128[1] = widen(a.u64[3]) * widen(b.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>7</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_odd_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.us.w2x.h
Builtin: __builtin_lasx_mxvmult_odd_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7682
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[1]) * widen(b.i16[1]);
dst.u32[1] = widen(a.u16[3]) * widen(b.i16[3]);
dst.u32[2] = widen(a.u16[5]) * widen(b.i16[5]);
dst.u32[3] = widen(a.u16[7]) * widen(b.i16[7]);
dst.u32[4] = widen(a.u16[9]) * widen(b.i16[9]);
dst.u32[5] = widen(a.u16[11]) * widen(b.i16[11]);
dst.u32[6] = widen(a.u16[13]) * widen(b.i16[13]);
dst.u32[7] = widen(a.u16[15]) * widen(b.i16[15]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_odd_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.us.w2x.w
Builtin: __builtin_lasx_mxvmult_odd_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7703
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[1]) * widen(b.i32[1]);
dst.u64[1] = widen(a.u32[3]) * widen(b.i32[3]);
dst.u64[2] = widen(a.u32[5]) * widen(b.i32[5]);
dst.u64[3] = widen(a.u32[7]) * widen(b.i32[7]);
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
return (__m256i)__builtin_lasx_mxvmult_odd_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmultc_im_haddc_adjc2_acc_s_w4x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmultc_im_haddc_adjc2_acc_s_w4x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.im.haddc.adjc2.acc.s.w4x.w
Builtin: __builtin_lasx_mxvmultc_im_haddc_adjc2_acc_s_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9229
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i32[0]) * widen(c.i32[0]);
dst.i128[1] = a.i128[1] + widen(b.i32[1]) * widen(c.i32[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">7</td><td title="partial SIGILL">1.16</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_im_haddc_adjc2_acc_s_w4x_w((v4i64) a, (v8i32) b, (v8i32) c);
```

## __m256i __lasx_mxvmultc_im_haddc_adjc2_s_w4x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultc_im_haddc_adjc2_s_w4x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.im.haddc.adjc2.s.w4x.w
Builtin: __builtin_lasx_mxvmultc_im_haddc_adjc2_s_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9209
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i32[0]) * widen(b.i32[0]);
dst.i128[1] = widen(a.i32[1]) * widen(b.i32[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">7</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_im_haddc_adjc2_s_w4x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmultc_im_haddc_adjc4_acc_s_w4x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmultc_im_haddc_adjc4_acc_s_w4x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.im.haddc.adjc4.acc.s.w4x.h
Builtin: __builtin_lasx_mxvmultc_im_haddc_adjc4_acc_s_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9270
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i64[1] = a.i64[1] + widen(b.i16[1]) * widen(c.i16[1]);
dst.i64[2] = a.i64[2] + widen(b.i16[2]) * widen(c.i16[2]);
dst.i64[3] = a.i64[3] + widen(b.i16[3]) * widen(c.i16[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">7</td><td title="partial SIGILL">1.15</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_im_haddc_adjc4_acc_s_w4x_h((v4i64) a, (v16i16) b, (v16i16) c);
```

## __m256i __lasx_mxvmultc_im_haddc_adjc4_s_w4x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultc_im_haddc_adjc4_s_w4x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.im.haddc.adjc4.s.w4x.h
Builtin: __builtin_lasx_mxvmultc_im_haddc_adjc4_s_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9250
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i64[1] = widen(a.i16[1]) * widen(b.i16[1]);
dst.i64[2] = widen(a.i16[2]) * widen(b.i16[2]);
dst.i64[3] = widen(a.i16[3]) * widen(b.i16[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">7</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_im_haddc_adjc4_s_w4x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmultc_re_haddc_adjc2_acc_s_w4x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmultc_re_haddc_adjc2_acc_s_w4x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.re.haddc.adjc2.acc.s.w4x.w
Builtin: __builtin_lasx_mxvmultc_re_haddc_adjc2_acc_s_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9311
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i32[0]) * widen(c.i32[0]);
dst.i128[1] = a.i128[1] + widen(b.i32[1]) * widen(c.i32[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">7</td><td title="partial SIGILL">1.16</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_re_haddc_adjc2_acc_s_w4x_w((v4i64) a, (v8i32) b, (v8i32) c);
```

## __m256i __lasx_mxvmultc_re_haddc_adjc2_s_w4x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultc_re_haddc_adjc2_s_w4x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.re.haddc.adjc2.s.w4x.w
Builtin: __builtin_lasx_mxvmultc_re_haddc_adjc2_s_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9291
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i32[0]) * widen(b.i32[0]);
dst.i128[1] = widen(a.i32[1]) * widen(b.i32[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">7</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_re_haddc_adjc2_s_w4x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmultc_re_haddc_adjc4_acc_s_w4x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmultc_re_haddc_adjc4_acc_s_w4x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.re.haddc.adjc4.acc.s.w4x.h
Builtin: __builtin_lasx_mxvmultc_re_haddc_adjc4_acc_s_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9352
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i64[1] = a.i64[1] + widen(b.i16[1]) * widen(c.i16[1]);
dst.i64[2] = a.i64[2] + widen(b.i16[2]) * widen(c.i16[2]);
dst.i64[3] = a.i64[3] + widen(b.i16[3]) * widen(c.i16[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">7</td><td title="partial SIGILL">1.16</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_re_haddc_adjc4_acc_s_w4x_h((v4i64) a, (v16i16) b, (v16i16) c);
```

## __m256i __lasx_mxvmultc_re_haddc_adjc4_s_w4x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultc_re_haddc_adjc4_s_w4x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.re.haddc.adjc4.s.w4x.h
Builtin: __builtin_lasx_mxvmultc_re_haddc_adjc4_s_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9332
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i64[1] = widen(a.i16[1]) * widen(b.i16[1]);
dst.i64[2] = widen(a.i16[2]) * widen(b.i16[2]);
dst.i64[3] = widen(a.i16[3]) * widen(b.i16[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">7</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_re_haddc_adjc4_s_w4x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmultp_hi_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.w2x.b
Builtin: __builtin_lasx_mxvmultp_hi_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9498
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.i8[16]) * widen(b.i8[16]);
dst.u16[1] = widen(a.i8[17]) * widen(b.i8[17]);
dst.u16[2] = widen(a.i8[18]) * widen(b.i8[18]);
dst.u16[3] = widen(a.i8[19]) * widen(b.i8[19]);
dst.u16[4] = widen(a.i8[20]) * widen(b.i8[20]);
dst.u16[5] = widen(a.i8[21]) * widen(b.i8[21]);
dst.u16[6] = widen(a.i8[22]) * widen(b.i8[22]);
dst.u16[7] = widen(a.i8[23]) * widen(b.i8[23]);
dst.u16[8] = widen(a.i8[24]) * widen(b.i8[24]);
dst.u16[9] = widen(a.i8[25]) * widen(b.i8[25]);
dst.u16[10] = widen(a.i8[26]) * widen(b.i8[26]);
dst.u16[11] = widen(a.i8[27]) * widen(b.i8[27]);
dst.u16[12] = widen(a.i8[28]) * widen(b.i8[28]);
dst.u16[13] = widen(a.i8[29]) * widen(b.i8[29]);
dst.u16[14] = widen(a.i8[30]) * widen(b.i8[30]);
dst.u16[15] = widen(a.i8[31]) * widen(b.i8[31]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">4</td><td title="partial SIGILL">1</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmultp_hi_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.w2x.d
Builtin: __builtin_lasx_mxvmultp_hi_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9561
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.i64[2]) * widen(b.i64[2]);
dst.u128[1] = widen(a.i64[3]) * widen(b.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmultp_hi_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.w2x.h
Builtin: __builtin_lasx_mxvmultp_hi_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9519
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.i16[8]) * widen(b.i16[8]);
dst.u32[1] = widen(a.i16[9]) * widen(b.i16[9]);
dst.u32[2] = widen(a.i16[10]) * widen(b.i16[10]);
dst.u32[3] = widen(a.i16[11]) * widen(b.i16[11]);
dst.u32[4] = widen(a.i16[12]) * widen(b.i16[12]);
dst.u32[5] = widen(a.i16[13]) * widen(b.i16[13]);
dst.u32[6] = widen(a.i16[14]) * widen(b.i16[14]);
dst.u32[7] = widen(a.i16[15]) * widen(b.i16[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">4</td><td title="partial SIGILL">1</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmultp_hi_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.w2x.w
Builtin: __builtin_lasx_mxvmultp_hi_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9540
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.i32[4]) * widen(b.i32[4]);
dst.u64[1] = widen(a.i32[5]) * widen(b.i32[5]);
dst.u64[2] = widen(a.i32[6]) * widen(b.i32[6]);
dst.u64[3] = widen(a.i32[7]) * widen(b.i32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">4</td><td title="partial SIGILL">1</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmultp_hi_xacc_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_xacc_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.xacc.w2x.b
Builtin: __builtin_lasx_mxvmultp_hi_xacc_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9661
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = a.u16[0] + widen(b.i8[16]) * widen(c.i8[16]);
dst.u16[1] = a.u16[1] + widen(b.i8[17]) * widen(c.i8[17]);
dst.u16[2] = a.u16[2] + widen(b.i8[18]) * widen(c.i8[18]);
dst.u16[3] = a.u16[3] + widen(b.i8[19]) * widen(c.i8[19]);
dst.u16[4] = a.u16[4] + widen(b.i8[20]) * widen(c.i8[20]);
dst.u16[5] = a.u16[5] + widen(b.i8[21]) * widen(c.i8[21]);
dst.u16[6] = a.u16[6] + widen(b.i8[22]) * widen(c.i8[22]);
dst.u16[7] = a.u16[7] + widen(b.i8[23]) * widen(c.i8[23]);
dst.u16[8] = a.u16[8] + widen(b.i8[24]) * widen(c.i8[24]);
dst.u16[9] = a.u16[9] + widen(b.i8[25]) * widen(c.i8[25]);
dst.u16[10] = a.u16[10] + widen(b.i8[26]) * widen(c.i8[26]);
dst.u16[11] = a.u16[11] + widen(b.i8[27]) * widen(c.i8[27]);
dst.u16[12] = a.u16[12] + widen(b.i8[28]) * widen(c.i8[28]);
dst.u16[13] = a.u16[13] + widen(b.i8[29]) * widen(c.i8[29]);
dst.u16[14] = a.u16[14] + widen(b.i8[30]) * widen(c.i8[30]);
dst.u16[15] = a.u16[15] + widen(b.i8[31]) * widen(c.i8[31]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">4</td><td title="partial SIGILL">1</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_xacc_w2x_b((v16i16) a, (v32i8) b, (v32i8) c);
```

## __m256i __lasx_mxvmultp_hi_xacc_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_xacc_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.xacc.w2x.d
Builtin: __builtin_lasx_mxvmultp_hi_xacc_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9721
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.i64[2]) * widen(c.i64[2]);
dst.u128[1] = a.u128[1] + widen(b.i64[3]) * widen(c.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_xacc_w2x_d((v4i64) a, (v4i64) b, (v4i64) c);
```

## __m256i __lasx_mxvmultp_hi_xacc_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_xacc_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.xacc.w2x.h
Builtin: __builtin_lasx_mxvmultp_hi_xacc_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9681
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.i16[8]) * widen(c.i16[8]);
dst.u32[1] = a.u32[1] + widen(b.i16[9]) * widen(c.i16[9]);
dst.u32[2] = a.u32[2] + widen(b.i16[10]) * widen(c.i16[10]);
dst.u32[3] = a.u32[3] + widen(b.i16[11]) * widen(c.i16[11]);
dst.u32[4] = a.u32[4] + widen(b.i16[12]) * widen(c.i16[12]);
dst.u32[5] = a.u32[5] + widen(b.i16[13]) * widen(c.i16[13]);
dst.u32[6] = a.u32[6] + widen(b.i16[14]) * widen(c.i16[14]);
dst.u32[7] = a.u32[7] + widen(b.i16[15]) * widen(c.i16[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">4</td><td title="partial SIGILL">1</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_xacc_w2x_h((v8i32) a, (v16i16) b, (v16i16) c);
```

## __m256i __lasx_mxvmultp_hi_xacc_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_xacc_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.xacc.w2x.w
Builtin: __builtin_lasx_mxvmultp_hi_xacc_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9701
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.i32[4]) * widen(c.i32[4]);
dst.u64[1] = a.u64[1] + widen(b.i32[5]) * widen(c.i32[5]);
dst.u64[2] = a.u64[2] + widen(b.i32[6]) * widen(c.i32[6]);
dst.u64[3] = a.u64[3] + widen(b.i32[7]) * widen(c.i32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">4</td><td title="partial SIGILL">1</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_xacc_w2x_w((v4i64) a, (v8i32) b, (v8i32) c);
```

## __m256i __lasx_mxvmultp_hxor_adj2_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hxor_adj2_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hxor.adj2.w2x.d
Builtin: __builtin_lasx_mxvmultp_hxor_adj2_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9373
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.i64[0]) * widen(b.i64[0]);
dst.u128[1] = widen(a.i64[1]) * widen(b.i64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hxor_adj2_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmultp_hxor_adj2_xacc_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmultp_hxor_adj2_xacc_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hxor.adj2.xacc.w2x.d
Builtin: __builtin_lasx_mxvmultp_hxor_adj2_xacc_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9393
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.i64[0]) * widen(c.i64[0]);
dst.u128[1] = a.u128[1] + widen(b.i64[1]) * widen(c.i64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hxor_adj2_xacc_w2x_d((v4i64) a, (v4i64) b, (v4i64) c);
```

## __m256i __lasx_mxvmultp_lo_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.w2x.b
Builtin: __builtin_lasx_mxvmultp_lo_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9414
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.i8[0]) * widen(b.i8[0]);
dst.u16[1] = widen(a.i8[1]) * widen(b.i8[1]);
dst.u16[2] = widen(a.i8[2]) * widen(b.i8[2]);
dst.u16[3] = widen(a.i8[3]) * widen(b.i8[3]);
dst.u16[4] = widen(a.i8[4]) * widen(b.i8[4]);
dst.u16[5] = widen(a.i8[5]) * widen(b.i8[5]);
dst.u16[6] = widen(a.i8[6]) * widen(b.i8[6]);
dst.u16[7] = widen(a.i8[7]) * widen(b.i8[7]);
dst.u16[8] = widen(a.i8[8]) * widen(b.i8[8]);
dst.u16[9] = widen(a.i8[9]) * widen(b.i8[9]);
dst.u16[10] = widen(a.i8[10]) * widen(b.i8[10]);
dst.u16[11] = widen(a.i8[11]) * widen(b.i8[11]);
dst.u16[12] = widen(a.i8[12]) * widen(b.i8[12]);
dst.u16[13] = widen(a.i8[13]) * widen(b.i8[13]);
dst.u16[14] = widen(a.i8[14]) * widen(b.i8[14]);
dst.u16[15] = widen(a.i8[15]) * widen(b.i8[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">4</td><td title="partial SIGILL">1</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmultp_lo_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.w2x.d
Builtin: __builtin_lasx_mxvmultp_lo_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9477
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.i64[0]) * widen(b.i64[0]);
dst.u128[1] = widen(a.i64[1]) * widen(b.i64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmultp_lo_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.w2x.h
Builtin: __builtin_lasx_mxvmultp_lo_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9435
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.u32[1] = widen(a.i16[1]) * widen(b.i16[1]);
dst.u32[2] = widen(a.i16[2]) * widen(b.i16[2]);
dst.u32[3] = widen(a.i16[3]) * widen(b.i16[3]);
dst.u32[4] = widen(a.i16[4]) * widen(b.i16[4]);
dst.u32[5] = widen(a.i16[5]) * widen(b.i16[5]);
dst.u32[6] = widen(a.i16[6]) * widen(b.i16[6]);
dst.u32[7] = widen(a.i16[7]) * widen(b.i16[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">4</td><td title="partial SIGILL">1</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmultp_lo_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.w2x.w
Builtin: __builtin_lasx_mxvmultp_lo_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9456
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.i32[0]) * widen(b.i32[0]);
dst.u64[1] = widen(a.i32[1]) * widen(b.i32[1]);
dst.u64[2] = widen(a.i32[2]) * widen(b.i32[2]);
dst.u64[3] = widen(a.i32[3]) * widen(b.i32[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">4</td><td title="partial SIGILL">1</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmultp_lo_xacc_w2x_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_xacc_w2x_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.xacc.w2x.b
Builtin: __builtin_lasx_mxvmultp_lo_xacc_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9581
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = a.u16[0] + widen(b.i8[0]) * widen(c.i8[0]);
dst.u16[1] = a.u16[1] + widen(b.i8[1]) * widen(c.i8[1]);
dst.u16[2] = a.u16[2] + widen(b.i8[2]) * widen(c.i8[2]);
dst.u16[3] = a.u16[3] + widen(b.i8[3]) * widen(c.i8[3]);
dst.u16[4] = a.u16[4] + widen(b.i8[4]) * widen(c.i8[4]);
dst.u16[5] = a.u16[5] + widen(b.i8[5]) * widen(c.i8[5]);
dst.u16[6] = a.u16[6] + widen(b.i8[6]) * widen(c.i8[6]);
dst.u16[7] = a.u16[7] + widen(b.i8[7]) * widen(c.i8[7]);
dst.u16[8] = a.u16[8] + widen(b.i8[8]) * widen(c.i8[8]);
dst.u16[9] = a.u16[9] + widen(b.i8[9]) * widen(c.i8[9]);
dst.u16[10] = a.u16[10] + widen(b.i8[10]) * widen(c.i8[10]);
dst.u16[11] = a.u16[11] + widen(b.i8[11]) * widen(c.i8[11]);
dst.u16[12] = a.u16[12] + widen(b.i8[12]) * widen(c.i8[12]);
dst.u16[13] = a.u16[13] + widen(b.i8[13]) * widen(c.i8[13]);
dst.u16[14] = a.u16[14] + widen(b.i8[14]) * widen(c.i8[14]);
dst.u16[15] = a.u16[15] + widen(b.i8[15]) * widen(c.i8[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">4</td><td title="partial SIGILL">1</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_xacc_w2x_b((v16i16) a, (v32i8) b, (v32i8) c);
```

## __m256i __lasx_mxvmultp_lo_xacc_w2x_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_xacc_w2x_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.xacc.w2x.d
Builtin: __builtin_lasx_mxvmultp_lo_xacc_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9641
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.i64[0]) * widen(c.i64[0]);
dst.u128[1] = a.u128[1] + widen(b.i64[1]) * widen(c.i64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">3</td><td title="partial SIGILL">2</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_xacc_w2x_d((v4i64) a, (v4i64) b, (v4i64) c);
```

## __m256i __lasx_mxvmultp_lo_xacc_w2x_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_xacc_w2x_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.xacc.w2x.h
Builtin: __builtin_lasx_mxvmultp_lo_xacc_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9601
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.u32[1] = a.u32[1] + widen(b.i16[1]) * widen(c.i16[1]);
dst.u32[2] = a.u32[2] + widen(b.i16[2]) * widen(c.i16[2]);
dst.u32[3] = a.u32[3] + widen(b.i16[3]) * widen(c.i16[3]);
dst.u32[4] = a.u32[4] + widen(b.i16[4]) * widen(c.i16[4]);
dst.u32[5] = a.u32[5] + widen(b.i16[5]) * widen(c.i16[5]);
dst.u32[6] = a.u32[6] + widen(b.i16[6]) * widen(c.i16[6]);
dst.u32[7] = a.u32[7] + widen(b.i16[7]) * widen(c.i16[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">4</td><td title="partial SIGILL">1</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_xacc_w2x_h((v8i32) a, (v16i16) b, (v16i16) c);
```

## __m256i __lasx_mxvmultp_lo_xacc_w2x_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_xacc_w2x_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.xacc.w2x.w
Builtin: __builtin_lasx_mxvmultp_lo_xacc_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9621
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.i32[0]) * widen(c.i32[0]);
dst.u64[1] = a.u64[1] + widen(b.i32[1]) * widen(c.i32[1]);
dst.u64[2] = a.u64[2] + widen(b.i32[2]) * widen(c.i32[2]);
dst.u64[3] = a.u64[3] + widen(b.i32[3]) * widen(c.i32[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td title="partial SIGILL">4</td><td title="partial SIGILL">1</td></tr>
</tbody>
</table>

Notes: 3A4000(GS464V): partial SIGILL.

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_xacc_w2x_w((v4i64) a, (v8i32) b, (v8i32) c);
```

## __m256i __lasx_mxvmulx_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulx_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulx.s.d
Builtin: __builtin_lasx_mxvmulx_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3152
```

### Description

Multiply signed integer lanes of `a` and `b` on 4 x i64 lanes.

### Operation

```c
dst.i64[0] = a.i32[0] * b.i32[0];
dst.i64[1] = a.i32[1] * b.i32[1];
dst.i64[2] = a.i32[2] * b.i32[2];
dst.i64[3] = a.i32[3] * b.i32[3];
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
return (__m256i)__builtin_lasx_mxvmulx_s_d((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxvmulx_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulx_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulx.s.h
Builtin: __builtin_lasx_mxvmulx_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3166
```

### Description

Multiply signed integer lanes of `a` and `b` on 16 x i16 lanes.

### Operation

```c
dst.i16[0] = a.i8[0] * b.i8[0];
dst.i16[1] = a.i8[1] * b.i8[1];
dst.i16[2] = a.i8[2] * b.i8[2];
dst.i16[3] = a.i8[3] * b.i8[3];
dst.i16[4] = a.i8[4] * b.i8[4];
dst.i16[5] = a.i8[5] * b.i8[5];
dst.i16[6] = a.i8[6] * b.i8[6];
dst.i16[7] = a.i8[7] * b.i8[7];
dst.i16[8] = a.i8[8] * b.i8[8];
dst.i16[9] = a.i8[9] * b.i8[9];
dst.i16[10] = a.i8[10] * b.i8[10];
dst.i16[11] = a.i8[11] * b.i8[11];
dst.i16[12] = a.i8[12] * b.i8[12];
dst.i16[13] = a.i8[13] * b.i8[13];
dst.i16[14] = a.i8[14] * b.i8[14];
dst.i16[15] = a.i8[15] * b.i8[15];
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
return (__m256i)__builtin_lasx_mxvmulx_s_h((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxvmulx_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulx_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulx.s.w
Builtin: __builtin_lasx_mxvmulx_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3159
```

### Description

Multiply signed integer lanes of `a` and `b` on 8 x i32 lanes.

### Operation

```c
dst.i32[0] = a.i16[0] * b.i16[0];
dst.i32[1] = a.i16[1] * b.i16[1];
dst.i32[2] = a.i16[2] * b.i16[2];
dst.i32[3] = a.i16[3] * b.i16[3];
dst.i32[4] = a.i16[4] * b.i16[4];
dst.i32[5] = a.i16[5] * b.i16[5];
dst.i32[6] = a.i16[6] * b.i16[6];
dst.i32[7] = a.i16[7] * b.i16[7];
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
return (__m256i)__builtin_lasx_mxvmulx_s_w((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxvmulx_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulx_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulx.u.d
Builtin: __builtin_lasx_mxvmulx_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3173
```

### Description

Multiply unsigned integer lanes of `a` and `b` on 4 x u64 lanes.

### Operation

```c
dst.u64[0] = a.u32[0] * b.u32[0];
dst.u64[1] = a.u32[1] * b.u32[1];
dst.u64[2] = a.u32[2] * b.u32[2];
dst.u64[3] = a.u32[3] * b.u32[3];
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
return (__m256i)__builtin_lasx_mxvmulx_u_d((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxvmulx_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulx_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulx.u.h
Builtin: __builtin_lasx_mxvmulx_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3187
```

### Description

Multiply unsigned integer lanes of `a` and `b` on 16 x u16 lanes.

### Operation

```c
dst.u16[0] = a.u8[0] * b.u8[0];
dst.u16[1] = a.u8[1] * b.u8[1];
dst.u16[2] = a.u8[2] * b.u8[2];
dst.u16[3] = a.u8[3] * b.u8[3];
dst.u16[4] = a.u8[4] * b.u8[4];
dst.u16[5] = a.u8[5] * b.u8[5];
dst.u16[6] = a.u8[6] * b.u8[6];
dst.u16[7] = a.u8[7] * b.u8[7];
dst.u16[8] = a.u8[8] * b.u8[8];
dst.u16[9] = a.u8[9] * b.u8[9];
dst.u16[10] = a.u8[10] * b.u8[10];
dst.u16[11] = a.u8[11] * b.u8[11];
dst.u16[12] = a.u8[12] * b.u8[12];
dst.u16[13] = a.u8[13] * b.u8[13];
dst.u16[14] = a.u8[14] * b.u8[14];
dst.u16[15] = a.u8[15] * b.u8[15];
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
return (__m256i)__builtin_lasx_mxvmulx_u_h((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxvmulx_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulx_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulx.u.w
Builtin: __builtin_lasx_mxvmulx_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3180
```

### Description

Multiply unsigned integer lanes of `a` and `b` on 8 x u32 lanes.

### Operation

```c
dst.u32[0] = a.u16[0] * b.u16[0];
dst.u32[1] = a.u16[1] * b.u16[1];
dst.u32[2] = a.u16[2] * b.u16[2];
dst.u32[3] = a.u16[3] * b.u16[3];
dst.u32[4] = a.u16[4] * b.u16[4];
dst.u32[5] = a.u16[5] * b.u16[5];
dst.u32[6] = a.u16[6] * b.u16[6];
dst.u32[7] = a.u16[7] * b.u16[7];
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
return (__m256i)__builtin_lasx_mxvmulx_u_w((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxvneg_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvneg_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvneg.b
Builtin: __builtin_lasx_mxvneg_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2830
```

### Description

Negate each signed integer lane on 32 x u8 lanes.

### Operation

```c
dst.u8[0] = -a.i8[0];
dst.u8[1] = -a.i8[1];
dst.u8[2] = -a.i8[2];
dst.u8[3] = -a.i8[3];
dst.u8[4] = -a.i8[4];
dst.u8[5] = -a.i8[5];
dst.u8[6] = -a.i8[6];
dst.u8[7] = -a.i8[7];
dst.u8[8] = -a.i8[8];
dst.u8[9] = -a.i8[9];
dst.u8[10] = -a.i8[10];
dst.u8[11] = -a.i8[11];
dst.u8[12] = -a.i8[12];
dst.u8[13] = -a.i8[13];
dst.u8[14] = -a.i8[14];
dst.u8[15] = -a.i8[15];
dst.u8[16] = -a.i8[16];
dst.u8[17] = -a.i8[17];
dst.u8[18] = -a.i8[18];
dst.u8[19] = -a.i8[19];
dst.u8[20] = -a.i8[20];
dst.u8[21] = -a.i8[21];
dst.u8[22] = -a.i8[22];
dst.u8[23] = -a.i8[23];
dst.u8[24] = -a.i8[24];
dst.u8[25] = -a.i8[25];
dst.u8[26] = -a.i8[26];
dst.u8[27] = -a.i8[27];
dst.u8[28] = -a.i8[28];
dst.u8[29] = -a.i8[29];
dst.u8[30] = -a.i8[30];
dst.u8[31] = -a.i8[31];
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
return (__m256i)__builtin_lasx_mxvneg_b((v32i8)a);
```

## __m256i __lasx_mxvneg_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvneg_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvneg.d
Builtin: __builtin_lasx_mxvneg_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2851
```

### Description

Negate each signed integer lane on 4 x u64 lanes.

### Operation

```c
dst.u64[0] = -a.i64[0];
dst.u64[1] = -a.i64[1];
dst.u64[2] = -a.i64[2];
dst.u64[3] = -a.i64[3];
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
return (__m256i)__builtin_lasx_mxvneg_d((v4i64)a);
```

## __m256i __lasx_mxvneg_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvneg_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvneg.h
Builtin: __builtin_lasx_mxvneg_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2837
```

### Description

Negate each signed integer lane on 16 x u16 lanes.

### Operation

```c
dst.u16[0] = -a.i16[0];
dst.u16[1] = -a.i16[1];
dst.u16[2] = -a.i16[2];
dst.u16[3] = -a.i16[3];
dst.u16[4] = -a.i16[4];
dst.u16[5] = -a.i16[5];
dst.u16[6] = -a.i16[6];
dst.u16[7] = -a.i16[7];
dst.u16[8] = -a.i16[8];
dst.u16[9] = -a.i16[9];
dst.u16[10] = -a.i16[10];
dst.u16[11] = -a.i16[11];
dst.u16[12] = -a.i16[12];
dst.u16[13] = -a.i16[13];
dst.u16[14] = -a.i16[14];
dst.u16[15] = -a.i16[15];
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
return (__m256i)__builtin_lasx_mxvneg_h((v16i16)a);
```

## __m256i __lasx_mxvneg_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvneg_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvneg.w
Builtin: __builtin_lasx_mxvneg_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2844
```

### Description

Negate each signed integer lane on 8 x u32 lanes.

### Operation

```c
dst.u32[0] = -a.i32[0];
dst.u32[1] = -a.i32[1];
dst.u32[2] = -a.i32[2];
dst.u32[3] = -a.i32[3];
dst.u32[4] = -a.i32[4];
dst.u32[5] = -a.i32[5];
dst.u32[6] = -a.i32[6];
dst.u32[7] = -a.i32[7];
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
return (__m256i)__builtin_lasx_mxvneg_w((v8i32)a);
```

## __m256i __lasx_mxvsub_el0_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.q
Builtin: __builtin_lasx_mxvsub_el0_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4752
```

### Description

Subtract modular integer lanes of `b` from `a` on 2 x u128 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u128[0] = a.i64[0] - b.i64[0];
dst.u128[1] = a.i64[1] - b.i64[1];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxvsub_el0_q ((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvsub_el0_s_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_s_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.s.wx.d
Builtin: __builtin_lasx_mxvsub_el0_s_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9784
```

### Description

Widen lane 0 source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) - widen(b.i64[0]);
dst.i128[1] = widen(a.i64[0]) - widen(b.i64[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_el0_s_wx_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvsub_el0_s_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_s_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.s.wx.h
Builtin: __builtin_lasx_mxvsub_el0_s_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9742
```

### Description

Widen lane 0 source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[1] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[2] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[3] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[4] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[5] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[6] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[7] = widen(a.i16[0]) - widen(b.i16[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_el0_s_wx_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvsub_el0_s_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_s_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.s.wx.w
Builtin: __builtin_lasx_mxvsub_el0_s_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9763
```

### Description

Widen lane 0 source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) - widen(b.i32[0]);
dst.i64[1] = widen(a.i32[0]) - widen(b.i32[0]);
dst.i64[2] = widen(a.i32[0]) - widen(b.i32[0]);
dst.i64[3] = widen(a.i32[0]) - widen(b.i32[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_el0_s_wx_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvsub_el0_u_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_u_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.u.wx.d
Builtin: __builtin_lasx_mxvsub_el0_u_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9847
```

### Description

Widen lane 0 source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) - widen(b.u64[0]);
dst.u128[1] = widen(a.u64[0]) - widen(b.u64[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_el0_u_wx_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvsub_el0_u_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_u_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.u.wx.h
Builtin: __builtin_lasx_mxvsub_el0_u_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9805
```

### Description

Widen lane 0 source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[1] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[2] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[3] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[4] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[5] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[6] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[7] = widen(a.u16[0]) - widen(b.u16[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_el0_u_wx_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvsub_el0_u_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_u_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.u.wx.w
Builtin: __builtin_lasx_mxvsub_el0_u_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9826
```

### Description

Widen lane 0 source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) - widen(b.u32[0]);
dst.u64[1] = widen(a.u32[0]) - widen(b.u32[0]);
dst.u64[2] = widen(a.u32[0]) - widen(b.u32[0]);
dst.u64[3] = widen(a.u32[0]) - widen(b.u32[0]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_el0_u_wx_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvsub_even_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.s.w2x.b
Builtin: __builtin_lasx_mxvsub_even_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9868
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[0]) - widen(b.i8[0]);
dst.i16[1] = widen(a.i8[2]) - widen(b.i8[2]);
dst.i16[2] = widen(a.i8[4]) - widen(b.i8[4]);
dst.i16[3] = widen(a.i8[6]) - widen(b.i8[6]);
dst.i16[4] = widen(a.i8[8]) - widen(b.i8[8]);
dst.i16[5] = widen(a.i8[10]) - widen(b.i8[10]);
dst.i16[6] = widen(a.i8[12]) - widen(b.i8[12]);
dst.i16[7] = widen(a.i8[14]) - widen(b.i8[14]);
dst.i16[8] = widen(a.i8[16]) - widen(b.i8[16]);
dst.i16[9] = widen(a.i8[18]) - widen(b.i8[18]);
dst.i16[10] = widen(a.i8[20]) - widen(b.i8[20]);
dst.i16[11] = widen(a.i8[22]) - widen(b.i8[22]);
dst.i16[12] = widen(a.i8[24]) - widen(b.i8[24]);
dst.i16[13] = widen(a.i8[26]) - widen(b.i8[26]);
dst.i16[14] = widen(a.i8[28]) - widen(b.i8[28]);
dst.i16[15] = widen(a.i8[30]) - widen(b.i8[30]);
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
return (__m256i)__builtin_lasx_mxvsub_even_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvsub_even_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.s.w2x.d
Builtin: __builtin_lasx_mxvsub_even_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9931
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) - widen(b.i64[0]);
dst.i128[1] = widen(a.i64[2]) - widen(b.i64[2]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_even_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvsub_even_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.s.w2x.h
Builtin: __builtin_lasx_mxvsub_even_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9889
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[1] = widen(a.i16[2]) - widen(b.i16[2]);
dst.i32[2] = widen(a.i16[4]) - widen(b.i16[4]);
dst.i32[3] = widen(a.i16[6]) - widen(b.i16[6]);
dst.i32[4] = widen(a.i16[8]) - widen(b.i16[8]);
dst.i32[5] = widen(a.i16[10]) - widen(b.i16[10]);
dst.i32[6] = widen(a.i16[12]) - widen(b.i16[12]);
dst.i32[7] = widen(a.i16[14]) - widen(b.i16[14]);
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
return (__m256i)__builtin_lasx_mxvsub_even_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvsub_even_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.s.w2x.w
Builtin: __builtin_lasx_mxvsub_even_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9910
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) - widen(b.i32[0]);
dst.i64[1] = widen(a.i32[2]) - widen(b.i32[2]);
dst.i64[2] = widen(a.i32[4]) - widen(b.i32[4]);
dst.i64[3] = widen(a.i32[6]) - widen(b.i32[6]);
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
return (__m256i)__builtin_lasx_mxvsub_even_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvsub_even_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.u.w2x.b
Builtin: __builtin_lasx_mxvsub_even_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9952
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[0]) - widen(b.u8[0]);
dst.u16[1] = widen(a.u8[2]) - widen(b.u8[2]);
dst.u16[2] = widen(a.u8[4]) - widen(b.u8[4]);
dst.u16[3] = widen(a.u8[6]) - widen(b.u8[6]);
dst.u16[4] = widen(a.u8[8]) - widen(b.u8[8]);
dst.u16[5] = widen(a.u8[10]) - widen(b.u8[10]);
dst.u16[6] = widen(a.u8[12]) - widen(b.u8[12]);
dst.u16[7] = widen(a.u8[14]) - widen(b.u8[14]);
dst.u16[8] = widen(a.u8[16]) - widen(b.u8[16]);
dst.u16[9] = widen(a.u8[18]) - widen(b.u8[18]);
dst.u16[10] = widen(a.u8[20]) - widen(b.u8[20]);
dst.u16[11] = widen(a.u8[22]) - widen(b.u8[22]);
dst.u16[12] = widen(a.u8[24]) - widen(b.u8[24]);
dst.u16[13] = widen(a.u8[26]) - widen(b.u8[26]);
dst.u16[14] = widen(a.u8[28]) - widen(b.u8[28]);
dst.u16[15] = widen(a.u8[30]) - widen(b.u8[30]);
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
return (__m256i)__builtin_lasx_mxvsub_even_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvsub_even_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.u.w2x.d
Builtin: __builtin_lasx_mxvsub_even_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10015
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) - widen(b.u64[0]);
dst.u128[1] = widen(a.u64[2]) - widen(b.u64[2]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_even_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvsub_even_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.u.w2x.h
Builtin: __builtin_lasx_mxvsub_even_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9973
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[1] = widen(a.u16[2]) - widen(b.u16[2]);
dst.u32[2] = widen(a.u16[4]) - widen(b.u16[4]);
dst.u32[3] = widen(a.u16[6]) - widen(b.u16[6]);
dst.u32[4] = widen(a.u16[8]) - widen(b.u16[8]);
dst.u32[5] = widen(a.u16[10]) - widen(b.u16[10]);
dst.u32[6] = widen(a.u16[12]) - widen(b.u16[12]);
dst.u32[7] = widen(a.u16[14]) - widen(b.u16[14]);
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
return (__m256i)__builtin_lasx_mxvsub_even_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvsub_even_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.u.w2x.w
Builtin: __builtin_lasx_mxvsub_even_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9994
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) - widen(b.u32[0]);
dst.u64[1] = widen(a.u32[2]) - widen(b.u32[2]);
dst.u64[2] = widen(a.u32[4]) - widen(b.u32[4]);
dst.u64[3] = widen(a.u32[6]) - widen(b.u32[6]);
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
return (__m256i)__builtin_lasx_mxvsub_even_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvsub_hi_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.s.w2x.b
Builtin: __builtin_lasx_mxvsub_hi_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10372
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[16]) - widen(b.i8[16]);
dst.i16[1] = widen(a.i8[17]) - widen(b.i8[17]);
dst.i16[2] = widen(a.i8[18]) - widen(b.i8[18]);
dst.i16[3] = widen(a.i8[19]) - widen(b.i8[19]);
dst.i16[4] = widen(a.i8[20]) - widen(b.i8[20]);
dst.i16[5] = widen(a.i8[21]) - widen(b.i8[21]);
dst.i16[6] = widen(a.i8[22]) - widen(b.i8[22]);
dst.i16[7] = widen(a.i8[23]) - widen(b.i8[23]);
dst.i16[8] = widen(a.i8[24]) - widen(b.i8[24]);
dst.i16[9] = widen(a.i8[25]) - widen(b.i8[25]);
dst.i16[10] = widen(a.i8[26]) - widen(b.i8[26]);
dst.i16[11] = widen(a.i8[27]) - widen(b.i8[27]);
dst.i16[12] = widen(a.i8[28]) - widen(b.i8[28]);
dst.i16[13] = widen(a.i8[29]) - widen(b.i8[29]);
dst.i16[14] = widen(a.i8[30]) - widen(b.i8[30]);
dst.i16[15] = widen(a.i8[31]) - widen(b.i8[31]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvsub_hi_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.s.w2x.d
Builtin: __builtin_lasx_mxvsub_hi_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10435
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[2]) - widen(b.i64[2]);
dst.i128[1] = widen(a.i64[3]) - widen(b.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvsub_hi_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.s.w2x.h
Builtin: __builtin_lasx_mxvsub_hi_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10393
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[8]) - widen(b.i16[8]);
dst.i32[1] = widen(a.i16[9]) - widen(b.i16[9]);
dst.i32[2] = widen(a.i16[10]) - widen(b.i16[10]);
dst.i32[3] = widen(a.i16[11]) - widen(b.i16[11]);
dst.i32[4] = widen(a.i16[12]) - widen(b.i16[12]);
dst.i32[5] = widen(a.i16[13]) - widen(b.i16[13]);
dst.i32[6] = widen(a.i16[14]) - widen(b.i16[14]);
dst.i32[7] = widen(a.i16[15]) - widen(b.i16[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvsub_hi_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.s.w2x.w
Builtin: __builtin_lasx_mxvsub_hi_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10414
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[4]) - widen(b.i32[4]);
dst.i64[1] = widen(a.i32[5]) - widen(b.i32[5]);
dst.i64[2] = widen(a.i32[6]) - widen(b.i32[6]);
dst.i64[3] = widen(a.i32[7]) - widen(b.i32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvsub_hi_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.u.w2x.b
Builtin: __builtin_lasx_mxvsub_hi_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10456
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[16]) - widen(b.u8[16]);
dst.u16[1] = widen(a.u8[17]) - widen(b.u8[17]);
dst.u16[2] = widen(a.u8[18]) - widen(b.u8[18]);
dst.u16[3] = widen(a.u8[19]) - widen(b.u8[19]);
dst.u16[4] = widen(a.u8[20]) - widen(b.u8[20]);
dst.u16[5] = widen(a.u8[21]) - widen(b.u8[21]);
dst.u16[6] = widen(a.u8[22]) - widen(b.u8[22]);
dst.u16[7] = widen(a.u8[23]) - widen(b.u8[23]);
dst.u16[8] = widen(a.u8[24]) - widen(b.u8[24]);
dst.u16[9] = widen(a.u8[25]) - widen(b.u8[25]);
dst.u16[10] = widen(a.u8[26]) - widen(b.u8[26]);
dst.u16[11] = widen(a.u8[27]) - widen(b.u8[27]);
dst.u16[12] = widen(a.u8[28]) - widen(b.u8[28]);
dst.u16[13] = widen(a.u8[29]) - widen(b.u8[29]);
dst.u16[14] = widen(a.u8[30]) - widen(b.u8[30]);
dst.u16[15] = widen(a.u8[31]) - widen(b.u8[31]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvsub_hi_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.u.w2x.d
Builtin: __builtin_lasx_mxvsub_hi_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10519
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[2]) - widen(b.u64[2]);
dst.u128[1] = widen(a.u64[3]) - widen(b.u64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvsub_hi_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.u.w2x.h
Builtin: __builtin_lasx_mxvsub_hi_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10477
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[8]) - widen(b.u16[8]);
dst.u32[1] = widen(a.u16[9]) - widen(b.u16[9]);
dst.u32[2] = widen(a.u16[10]) - widen(b.u16[10]);
dst.u32[3] = widen(a.u16[11]) - widen(b.u16[11]);
dst.u32[4] = widen(a.u16[12]) - widen(b.u16[12]);
dst.u32[5] = widen(a.u16[13]) - widen(b.u16[13]);
dst.u32[6] = widen(a.u16[14]) - widen(b.u16[14]);
dst.u32[7] = widen(a.u16[15]) - widen(b.u16[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvsub_hi_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.u.w2x.w
Builtin: __builtin_lasx_mxvsub_hi_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10498
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[4]) - widen(b.u32[4]);
dst.u64[1] = widen(a.u32[5]) - widen(b.u32[5]);
dst.u64[2] = widen(a.u32[6]) - widen(b.u32[6]);
dst.u64[3] = widen(a.u32[7]) - widen(b.u32[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvsub_lo_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.s.w2x.b
Builtin: __builtin_lasx_mxvsub_lo_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10204
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[0]) - widen(b.i8[0]);
dst.i16[1] = widen(a.i8[1]) - widen(b.i8[1]);
dst.i16[2] = widen(a.i8[2]) - widen(b.i8[2]);
dst.i16[3] = widen(a.i8[3]) - widen(b.i8[3]);
dst.i16[4] = widen(a.i8[4]) - widen(b.i8[4]);
dst.i16[5] = widen(a.i8[5]) - widen(b.i8[5]);
dst.i16[6] = widen(a.i8[6]) - widen(b.i8[6]);
dst.i16[7] = widen(a.i8[7]) - widen(b.i8[7]);
dst.i16[8] = widen(a.i8[8]) - widen(b.i8[8]);
dst.i16[9] = widen(a.i8[9]) - widen(b.i8[9]);
dst.i16[10] = widen(a.i8[10]) - widen(b.i8[10]);
dst.i16[11] = widen(a.i8[11]) - widen(b.i8[11]);
dst.i16[12] = widen(a.i8[12]) - widen(b.i8[12]);
dst.i16[13] = widen(a.i8[13]) - widen(b.i8[13]);
dst.i16[14] = widen(a.i8[14]) - widen(b.i8[14]);
dst.i16[15] = widen(a.i8[15]) - widen(b.i8[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvsub_lo_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.s.w2x.d
Builtin: __builtin_lasx_mxvsub_lo_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10267
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) - widen(b.i64[0]);
dst.i128[1] = widen(a.i64[1]) - widen(b.i64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvsub_lo_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.s.w2x.h
Builtin: __builtin_lasx_mxvsub_lo_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10225
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[1] = widen(a.i16[1]) - widen(b.i16[1]);
dst.i32[2] = widen(a.i16[2]) - widen(b.i16[2]);
dst.i32[3] = widen(a.i16[3]) - widen(b.i16[3]);
dst.i32[4] = widen(a.i16[4]) - widen(b.i16[4]);
dst.i32[5] = widen(a.i16[5]) - widen(b.i16[5]);
dst.i32[6] = widen(a.i16[6]) - widen(b.i16[6]);
dst.i32[7] = widen(a.i16[7]) - widen(b.i16[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvsub_lo_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.s.w2x.w
Builtin: __builtin_lasx_mxvsub_lo_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10246
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) - widen(b.i32[0]);
dst.i64[1] = widen(a.i32[1]) - widen(b.i32[1]);
dst.i64[2] = widen(a.i32[2]) - widen(b.i32[2]);
dst.i64[3] = widen(a.i32[3]) - widen(b.i32[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvsub_lo_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.u.w2x.b
Builtin: __builtin_lasx_mxvsub_lo_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10288
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[0]) - widen(b.u8[0]);
dst.u16[1] = widen(a.u8[1]) - widen(b.u8[1]);
dst.u16[2] = widen(a.u8[2]) - widen(b.u8[2]);
dst.u16[3] = widen(a.u8[3]) - widen(b.u8[3]);
dst.u16[4] = widen(a.u8[4]) - widen(b.u8[4]);
dst.u16[5] = widen(a.u8[5]) - widen(b.u8[5]);
dst.u16[6] = widen(a.u8[6]) - widen(b.u8[6]);
dst.u16[7] = widen(a.u8[7]) - widen(b.u8[7]);
dst.u16[8] = widen(a.u8[8]) - widen(b.u8[8]);
dst.u16[9] = widen(a.u8[9]) - widen(b.u8[9]);
dst.u16[10] = widen(a.u8[10]) - widen(b.u8[10]);
dst.u16[11] = widen(a.u8[11]) - widen(b.u8[11]);
dst.u16[12] = widen(a.u8[12]) - widen(b.u8[12]);
dst.u16[13] = widen(a.u8[13]) - widen(b.u8[13]);
dst.u16[14] = widen(a.u8[14]) - widen(b.u8[14]);
dst.u16[15] = widen(a.u8[15]) - widen(b.u8[15]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvsub_lo_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.u.w2x.d
Builtin: __builtin_lasx_mxvsub_lo_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10351
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) - widen(b.u64[0]);
dst.u128[1] = widen(a.u64[1]) - widen(b.u64[1]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvsub_lo_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.u.w2x.h
Builtin: __builtin_lasx_mxvsub_lo_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10309
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[1] = widen(a.u16[1]) - widen(b.u16[1]);
dst.u32[2] = widen(a.u16[2]) - widen(b.u16[2]);
dst.u32[3] = widen(a.u16[3]) - widen(b.u16[3]);
dst.u32[4] = widen(a.u16[4]) - widen(b.u16[4]);
dst.u32[5] = widen(a.u16[5]) - widen(b.u16[5]);
dst.u32[6] = widen(a.u16[6]) - widen(b.u16[6]);
dst.u32[7] = widen(a.u16[7]) - widen(b.u16[7]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvsub_lo_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.u.w2x.w
Builtin: __builtin_lasx_mxvsub_lo_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10330
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) - widen(b.u32[0]);
dst.u64[1] = widen(a.u32[1]) - widen(b.u32[1]);
dst.u64[2] = widen(a.u32[2]) - widen(b.u32[2]);
dst.u64[3] = widen(a.u32[3]) - widen(b.u32[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvsub_odd_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.s.w2x.b
Builtin: __builtin_lasx_mxvsub_odd_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10036
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[1]) - widen(b.i8[1]);
dst.i16[1] = widen(a.i8[3]) - widen(b.i8[3]);
dst.i16[2] = widen(a.i8[5]) - widen(b.i8[5]);
dst.i16[3] = widen(a.i8[7]) - widen(b.i8[7]);
dst.i16[4] = widen(a.i8[9]) - widen(b.i8[9]);
dst.i16[5] = widen(a.i8[11]) - widen(b.i8[11]);
dst.i16[6] = widen(a.i8[13]) - widen(b.i8[13]);
dst.i16[7] = widen(a.i8[15]) - widen(b.i8[15]);
dst.i16[8] = widen(a.i8[17]) - widen(b.i8[17]);
dst.i16[9] = widen(a.i8[19]) - widen(b.i8[19]);
dst.i16[10] = widen(a.i8[21]) - widen(b.i8[21]);
dst.i16[11] = widen(a.i8[23]) - widen(b.i8[23]);
dst.i16[12] = widen(a.i8[25]) - widen(b.i8[25]);
dst.i16[13] = widen(a.i8[27]) - widen(b.i8[27]);
dst.i16[14] = widen(a.i8[29]) - widen(b.i8[29]);
dst.i16[15] = widen(a.i8[31]) - widen(b.i8[31]);
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
return (__m256i)__builtin_lasx_mxvsub_odd_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvsub_odd_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.s.w2x.d
Builtin: __builtin_lasx_mxvsub_odd_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10099
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[1]) - widen(b.i64[1]);
dst.i128[1] = widen(a.i64[3]) - widen(b.i64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_odd_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvsub_odd_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.s.w2x.h
Builtin: __builtin_lasx_mxvsub_odd_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10057
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[1]) - widen(b.i16[1]);
dst.i32[1] = widen(a.i16[3]) - widen(b.i16[3]);
dst.i32[2] = widen(a.i16[5]) - widen(b.i16[5]);
dst.i32[3] = widen(a.i16[7]) - widen(b.i16[7]);
dst.i32[4] = widen(a.i16[9]) - widen(b.i16[9]);
dst.i32[5] = widen(a.i16[11]) - widen(b.i16[11]);
dst.i32[6] = widen(a.i16[13]) - widen(b.i16[13]);
dst.i32[7] = widen(a.i16[15]) - widen(b.i16[15]);
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
return (__m256i)__builtin_lasx_mxvsub_odd_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvsub_odd_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.s.w2x.w
Builtin: __builtin_lasx_mxvsub_odd_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10078
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[1]) - widen(b.i32[1]);
dst.i64[1] = widen(a.i32[3]) - widen(b.i32[3]);
dst.i64[2] = widen(a.i32[5]) - widen(b.i32[5]);
dst.i64[3] = widen(a.i32[7]) - widen(b.i32[7]);
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
return (__m256i)__builtin_lasx_mxvsub_odd_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvsub_odd_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.u.w2x.b
Builtin: __builtin_lasx_mxvsub_odd_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10120
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[1]) - widen(b.u8[1]);
dst.u16[1] = widen(a.u8[3]) - widen(b.u8[3]);
dst.u16[2] = widen(a.u8[5]) - widen(b.u8[5]);
dst.u16[3] = widen(a.u8[7]) - widen(b.u8[7]);
dst.u16[4] = widen(a.u8[9]) - widen(b.u8[9]);
dst.u16[5] = widen(a.u8[11]) - widen(b.u8[11]);
dst.u16[6] = widen(a.u8[13]) - widen(b.u8[13]);
dst.u16[7] = widen(a.u8[15]) - widen(b.u8[15]);
dst.u16[8] = widen(a.u8[17]) - widen(b.u8[17]);
dst.u16[9] = widen(a.u8[19]) - widen(b.u8[19]);
dst.u16[10] = widen(a.u8[21]) - widen(b.u8[21]);
dst.u16[11] = widen(a.u8[23]) - widen(b.u8[23]);
dst.u16[12] = widen(a.u8[25]) - widen(b.u8[25]);
dst.u16[13] = widen(a.u8[27]) - widen(b.u8[27]);
dst.u16[14] = widen(a.u8[29]) - widen(b.u8[29]);
dst.u16[15] = widen(a.u8[31]) - widen(b.u8[31]);
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
return (__m256i)__builtin_lasx_mxvsub_odd_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvsub_odd_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.u.w2x.d
Builtin: __builtin_lasx_mxvsub_odd_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10183
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) - widen(b.u64[1]);
dst.u128[1] = widen(a.u64[3]) - widen(b.u64[3]);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_odd_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvsub_odd_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.u.w2x.h
Builtin: __builtin_lasx_mxvsub_odd_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10141
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[1]) - widen(b.u16[1]);
dst.u32[1] = widen(a.u16[3]) - widen(b.u16[3]);
dst.u32[2] = widen(a.u16[5]) - widen(b.u16[5]);
dst.u32[3] = widen(a.u16[7]) - widen(b.u16[7]);
dst.u32[4] = widen(a.u16[9]) - widen(b.u16[9]);
dst.u32[5] = widen(a.u16[11]) - widen(b.u16[11]);
dst.u32[6] = widen(a.u16[13]) - widen(b.u16[13]);
dst.u32[7] = widen(a.u16[15]) - widen(b.u16[15]);
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
return (__m256i)__builtin_lasx_mxvsub_odd_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvsub_odd_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.u.w2x.w
Builtin: __builtin_lasx_mxvsub_odd_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10162
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[1]) - widen(b.u32[1]);
dst.u64[1] = widen(a.u32[3]) - widen(b.u32[3]);
dst.u64[2] = widen(a.u32[5]) - widen(b.u32[5]);
dst.u64[3] = widen(a.u32[7]) - widen(b.u32[7]);
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
return (__m256i)__builtin_lasx_mxvsub_odd_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvsubh_s_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubh_s_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.s.b
Builtin: __builtin_lasx_mxvsubh_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3047
```

### Description

Subtract `b` from `a` in 32 x i8 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

### Operation

```c
dst.i8[0] = floor_divide(widen(a.i8[0]) - widen(b.i8[0]), 2);
dst.i8[1] = floor_divide(widen(a.i8[1]) - widen(b.i8[1]), 2);
dst.i8[2] = floor_divide(widen(a.i8[2]) - widen(b.i8[2]), 2);
dst.i8[3] = floor_divide(widen(a.i8[3]) - widen(b.i8[3]), 2);
dst.i8[4] = floor_divide(widen(a.i8[4]) - widen(b.i8[4]), 2);
dst.i8[5] = floor_divide(widen(a.i8[5]) - widen(b.i8[5]), 2);
dst.i8[6] = floor_divide(widen(a.i8[6]) - widen(b.i8[6]), 2);
dst.i8[7] = floor_divide(widen(a.i8[7]) - widen(b.i8[7]), 2);
dst.i8[8] = floor_divide(widen(a.i8[8]) - widen(b.i8[8]), 2);
dst.i8[9] = floor_divide(widen(a.i8[9]) - widen(b.i8[9]), 2);
dst.i8[10] = floor_divide(widen(a.i8[10]) - widen(b.i8[10]), 2);
dst.i8[11] = floor_divide(widen(a.i8[11]) - widen(b.i8[11]), 2);
dst.i8[12] = floor_divide(widen(a.i8[12]) - widen(b.i8[12]), 2);
dst.i8[13] = floor_divide(widen(a.i8[13]) - widen(b.i8[13]), 2);
dst.i8[14] = floor_divide(widen(a.i8[14]) - widen(b.i8[14]), 2);
dst.i8[15] = floor_divide(widen(a.i8[15]) - widen(b.i8[15]), 2);
dst.i8[16] = floor_divide(widen(a.i8[16]) - widen(b.i8[16]), 2);
dst.i8[17] = floor_divide(widen(a.i8[17]) - widen(b.i8[17]), 2);
dst.i8[18] = floor_divide(widen(a.i8[18]) - widen(b.i8[18]), 2);
dst.i8[19] = floor_divide(widen(a.i8[19]) - widen(b.i8[19]), 2);
dst.i8[20] = floor_divide(widen(a.i8[20]) - widen(b.i8[20]), 2);
dst.i8[21] = floor_divide(widen(a.i8[21]) - widen(b.i8[21]), 2);
dst.i8[22] = floor_divide(widen(a.i8[22]) - widen(b.i8[22]), 2);
dst.i8[23] = floor_divide(widen(a.i8[23]) - widen(b.i8[23]), 2);
dst.i8[24] = floor_divide(widen(a.i8[24]) - widen(b.i8[24]), 2);
dst.i8[25] = floor_divide(widen(a.i8[25]) - widen(b.i8[25]), 2);
dst.i8[26] = floor_divide(widen(a.i8[26]) - widen(b.i8[26]), 2);
dst.i8[27] = floor_divide(widen(a.i8[27]) - widen(b.i8[27]), 2);
dst.i8[28] = floor_divide(widen(a.i8[28]) - widen(b.i8[28]), 2);
dst.i8[29] = floor_divide(widen(a.i8[29]) - widen(b.i8[29]), 2);
dst.i8[30] = floor_divide(widen(a.i8[30]) - widen(b.i8[30]), 2);
dst.i8[31] = floor_divide(widen(a.i8[31]) - widen(b.i8[31]), 2);
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
return (__m256i)__builtin_lasx_mxvsubh_s_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxvsubh_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubh_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.s.d
Builtin: __builtin_lasx_mxvsubh_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3026
```

### Description

Subtract `b` from `a` in 4 x i64 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

### Operation

```c
dst.i64[0] = floor_divide(widen(a.i64[0]) - widen(b.i64[0]), 2);
dst.i64[1] = floor_divide(widen(a.i64[1]) - widen(b.i64[1]), 2);
dst.i64[2] = floor_divide(widen(a.i64[2]) - widen(b.i64[2]), 2);
dst.i64[3] = floor_divide(widen(a.i64[3]) - widen(b.i64[3]), 2);
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
return (__m256i)__builtin_lasx_mxvsubh_s_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxvsubh_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubh_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.s.h
Builtin: __builtin_lasx_mxvsubh_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3040
```

### Description

Subtract `b` from `a` in 16 x i16 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

### Operation

```c
dst.i16[0] = floor_divide(widen(a.i16[0]) - widen(b.i16[0]), 2);
dst.i16[1] = floor_divide(widen(a.i16[1]) - widen(b.i16[1]), 2);
dst.i16[2] = floor_divide(widen(a.i16[2]) - widen(b.i16[2]), 2);
dst.i16[3] = floor_divide(widen(a.i16[3]) - widen(b.i16[3]), 2);
dst.i16[4] = floor_divide(widen(a.i16[4]) - widen(b.i16[4]), 2);
dst.i16[5] = floor_divide(widen(a.i16[5]) - widen(b.i16[5]), 2);
dst.i16[6] = floor_divide(widen(a.i16[6]) - widen(b.i16[6]), 2);
dst.i16[7] = floor_divide(widen(a.i16[7]) - widen(b.i16[7]), 2);
dst.i16[8] = floor_divide(widen(a.i16[8]) - widen(b.i16[8]), 2);
dst.i16[9] = floor_divide(widen(a.i16[9]) - widen(b.i16[9]), 2);
dst.i16[10] = floor_divide(widen(a.i16[10]) - widen(b.i16[10]), 2);
dst.i16[11] = floor_divide(widen(a.i16[11]) - widen(b.i16[11]), 2);
dst.i16[12] = floor_divide(widen(a.i16[12]) - widen(b.i16[12]), 2);
dst.i16[13] = floor_divide(widen(a.i16[13]) - widen(b.i16[13]), 2);
dst.i16[14] = floor_divide(widen(a.i16[14]) - widen(b.i16[14]), 2);
dst.i16[15] = floor_divide(widen(a.i16[15]) - widen(b.i16[15]), 2);
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
return (__m256i)__builtin_lasx_mxvsubh_s_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxvsubh_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubh_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.s.w
Builtin: __builtin_lasx_mxvsubh_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3033
```

### Description

Subtract `b` from `a` in 8 x i32 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

### Operation

```c
dst.i32[0] = floor_divide(widen(a.i32[0]) - widen(b.i32[0]), 2);
dst.i32[1] = floor_divide(widen(a.i32[1]) - widen(b.i32[1]), 2);
dst.i32[2] = floor_divide(widen(a.i32[2]) - widen(b.i32[2]), 2);
dst.i32[3] = floor_divide(widen(a.i32[3]) - widen(b.i32[3]), 2);
dst.i32[4] = floor_divide(widen(a.i32[4]) - widen(b.i32[4]), 2);
dst.i32[5] = floor_divide(widen(a.i32[5]) - widen(b.i32[5]), 2);
dst.i32[6] = floor_divide(widen(a.i32[6]) - widen(b.i32[6]), 2);
dst.i32[7] = floor_divide(widen(a.i32[7]) - widen(b.i32[7]), 2);
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
return (__m256i)__builtin_lasx_mxvsubh_s_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxvsubh_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubh_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.u.b
Builtin: __builtin_lasx_mxvsubh_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3075
```

### Description

Subtract `b` from `a` in 32 x u8 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

### Operation

```c
dst.u8[0] = as_u8(floor_divide(widen(a.u8[0]) - widen(b.u8[0]), 2));
dst.u8[1] = as_u8(floor_divide(widen(a.u8[1]) - widen(b.u8[1]), 2));
dst.u8[2] = as_u8(floor_divide(widen(a.u8[2]) - widen(b.u8[2]), 2));
dst.u8[3] = as_u8(floor_divide(widen(a.u8[3]) - widen(b.u8[3]), 2));
dst.u8[4] = as_u8(floor_divide(widen(a.u8[4]) - widen(b.u8[4]), 2));
dst.u8[5] = as_u8(floor_divide(widen(a.u8[5]) - widen(b.u8[5]), 2));
dst.u8[6] = as_u8(floor_divide(widen(a.u8[6]) - widen(b.u8[6]), 2));
dst.u8[7] = as_u8(floor_divide(widen(a.u8[7]) - widen(b.u8[7]), 2));
dst.u8[8] = as_u8(floor_divide(widen(a.u8[8]) - widen(b.u8[8]), 2));
dst.u8[9] = as_u8(floor_divide(widen(a.u8[9]) - widen(b.u8[9]), 2));
dst.u8[10] = as_u8(floor_divide(widen(a.u8[10]) - widen(b.u8[10]), 2));
dst.u8[11] = as_u8(floor_divide(widen(a.u8[11]) - widen(b.u8[11]), 2));
dst.u8[12] = as_u8(floor_divide(widen(a.u8[12]) - widen(b.u8[12]), 2));
dst.u8[13] = as_u8(floor_divide(widen(a.u8[13]) - widen(b.u8[13]), 2));
dst.u8[14] = as_u8(floor_divide(widen(a.u8[14]) - widen(b.u8[14]), 2));
dst.u8[15] = as_u8(floor_divide(widen(a.u8[15]) - widen(b.u8[15]), 2));
dst.u8[16] = as_u8(floor_divide(widen(a.u8[16]) - widen(b.u8[16]), 2));
dst.u8[17] = as_u8(floor_divide(widen(a.u8[17]) - widen(b.u8[17]), 2));
dst.u8[18] = as_u8(floor_divide(widen(a.u8[18]) - widen(b.u8[18]), 2));
dst.u8[19] = as_u8(floor_divide(widen(a.u8[19]) - widen(b.u8[19]), 2));
dst.u8[20] = as_u8(floor_divide(widen(a.u8[20]) - widen(b.u8[20]), 2));
dst.u8[21] = as_u8(floor_divide(widen(a.u8[21]) - widen(b.u8[21]), 2));
dst.u8[22] = as_u8(floor_divide(widen(a.u8[22]) - widen(b.u8[22]), 2));
dst.u8[23] = as_u8(floor_divide(widen(a.u8[23]) - widen(b.u8[23]), 2));
dst.u8[24] = as_u8(floor_divide(widen(a.u8[24]) - widen(b.u8[24]), 2));
dst.u8[25] = as_u8(floor_divide(widen(a.u8[25]) - widen(b.u8[25]), 2));
dst.u8[26] = as_u8(floor_divide(widen(a.u8[26]) - widen(b.u8[26]), 2));
dst.u8[27] = as_u8(floor_divide(widen(a.u8[27]) - widen(b.u8[27]), 2));
dst.u8[28] = as_u8(floor_divide(widen(a.u8[28]) - widen(b.u8[28]), 2));
dst.u8[29] = as_u8(floor_divide(widen(a.u8[29]) - widen(b.u8[29]), 2));
dst.u8[30] = as_u8(floor_divide(widen(a.u8[30]) - widen(b.u8[30]), 2));
dst.u8[31] = as_u8(floor_divide(widen(a.u8[31]) - widen(b.u8[31]), 2));
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
return (__m256i)__builtin_lasx_mxvsubh_u_b((v32u8)a, (v32u8)b);
```

## __m256i __lasx_mxvsubh_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubh_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.u.d
Builtin: __builtin_lasx_mxvsubh_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3054
```

### Description

Subtract `b` from `a` in 4 x u64 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

### Operation

```c
dst.u64[0] = as_u64(floor_divide(widen(a.u64[0]) - widen(b.u64[0]), 2));
dst.u64[1] = as_u64(floor_divide(widen(a.u64[1]) - widen(b.u64[1]), 2));
dst.u64[2] = as_u64(floor_divide(widen(a.u64[2]) - widen(b.u64[2]), 2));
dst.u64[3] = as_u64(floor_divide(widen(a.u64[3]) - widen(b.u64[3]), 2));
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
return (__m256i)__builtin_lasx_mxvsubh_u_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxvsubh_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubh_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.u.h
Builtin: __builtin_lasx_mxvsubh_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3068
```

### Description

Subtract `b` from `a` in 16 x u16 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

### Operation

```c
dst.u16[0] = as_u16(floor_divide(widen(a.u16[0]) - widen(b.u16[0]), 2));
dst.u16[1] = as_u16(floor_divide(widen(a.u16[1]) - widen(b.u16[1]), 2));
dst.u16[2] = as_u16(floor_divide(widen(a.u16[2]) - widen(b.u16[2]), 2));
dst.u16[3] = as_u16(floor_divide(widen(a.u16[3]) - widen(b.u16[3]), 2));
dst.u16[4] = as_u16(floor_divide(widen(a.u16[4]) - widen(b.u16[4]), 2));
dst.u16[5] = as_u16(floor_divide(widen(a.u16[5]) - widen(b.u16[5]), 2));
dst.u16[6] = as_u16(floor_divide(widen(a.u16[6]) - widen(b.u16[6]), 2));
dst.u16[7] = as_u16(floor_divide(widen(a.u16[7]) - widen(b.u16[7]), 2));
dst.u16[8] = as_u16(floor_divide(widen(a.u16[8]) - widen(b.u16[8]), 2));
dst.u16[9] = as_u16(floor_divide(widen(a.u16[9]) - widen(b.u16[9]), 2));
dst.u16[10] = as_u16(floor_divide(widen(a.u16[10]) - widen(b.u16[10]), 2));
dst.u16[11] = as_u16(floor_divide(widen(a.u16[11]) - widen(b.u16[11]), 2));
dst.u16[12] = as_u16(floor_divide(widen(a.u16[12]) - widen(b.u16[12]), 2));
dst.u16[13] = as_u16(floor_divide(widen(a.u16[13]) - widen(b.u16[13]), 2));
dst.u16[14] = as_u16(floor_divide(widen(a.u16[14]) - widen(b.u16[14]), 2));
dst.u16[15] = as_u16(floor_divide(widen(a.u16[15]) - widen(b.u16[15]), 2));
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
return (__m256i)__builtin_lasx_mxvsubh_u_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxvsubh_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubh_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.u.w
Builtin: __builtin_lasx_mxvsubh_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3061
```

### Description

Subtract `b` from `a` in 8 x u32 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

### Operation

```c
dst.u32[0] = as_u32(floor_divide(widen(a.u32[0]) - widen(b.u32[0]), 2));
dst.u32[1] = as_u32(floor_divide(widen(a.u32[1]) - widen(b.u32[1]), 2));
dst.u32[2] = as_u32(floor_divide(widen(a.u32[2]) - widen(b.u32[2]), 2));
dst.u32[3] = as_u32(floor_divide(widen(a.u32[3]) - widen(b.u32[3]), 2));
dst.u32[4] = as_u32(floor_divide(widen(a.u32[4]) - widen(b.u32[4]), 2));
dst.u32[5] = as_u32(floor_divide(widen(a.u32[5]) - widen(b.u32[5]), 2));
dst.u32[6] = as_u32(floor_divide(widen(a.u32[6]) - widen(b.u32[6]), 2));
dst.u32[7] = as_u32(floor_divide(widen(a.u32[7]) - widen(b.u32[7]), 2));
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
return (__m256i)__builtin_lasx_mxvsubh_u_w((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxvsubx_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubx_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubx.s.d
Builtin: __builtin_lasx_mxvsubx_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2900
```

### Description

Treat `a` as 4 x i64 lanes, extend the corresponding narrower i32 lanes from `b`, and subtract them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i64[0] = a.i64[0] - sign_extend(b.i32[0], 64);
dst.i64[1] = a.i64[1] - sign_extend(b.i32[1], 64);
dst.i64[2] = a.i64[2] - sign_extend(b.i32[2], 64);
dst.i64[3] = a.i64[3] - sign_extend(b.i32[3], 64);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubx_s_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxvsubx_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubx_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubx.s.h
Builtin: __builtin_lasx_mxvsubx_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2914
```

### Description

Treat `a` as 16 x i16 lanes, extend the corresponding narrower i8 lanes from `b`, and subtract them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i16[0] = a.i16[0] - sign_extend(b.i8[0], 16);
dst.i16[1] = a.i16[1] - sign_extend(b.i8[1], 16);
dst.i16[2] = a.i16[2] - sign_extend(b.i8[2], 16);
dst.i16[3] = a.i16[3] - sign_extend(b.i8[3], 16);
dst.i16[4] = a.i16[4] - sign_extend(b.i8[4], 16);
dst.i16[5] = a.i16[5] - sign_extend(b.i8[5], 16);
dst.i16[6] = a.i16[6] - sign_extend(b.i8[6], 16);
dst.i16[7] = a.i16[7] - sign_extend(b.i8[7], 16);
dst.i16[8] = a.i16[8] - sign_extend(b.i8[8], 16);
dst.i16[9] = a.i16[9] - sign_extend(b.i8[9], 16);
dst.i16[10] = a.i16[10] - sign_extend(b.i8[10], 16);
dst.i16[11] = a.i16[11] - sign_extend(b.i8[11], 16);
dst.i16[12] = a.i16[12] - sign_extend(b.i8[12], 16);
dst.i16[13] = a.i16[13] - sign_extend(b.i8[13], 16);
dst.i16[14] = a.i16[14] - sign_extend(b.i8[14], 16);
dst.i16[15] = a.i16[15] - sign_extend(b.i8[15], 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubx_s_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxvsubx_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubx_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubx.s.w
Builtin: __builtin_lasx_mxvsubx_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2907
```

### Description

Treat `a` as 8 x i32 lanes, extend the corresponding narrower i16 lanes from `b`, and subtract them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i32[0] = a.i32[0] - sign_extend(b.i16[0], 32);
dst.i32[1] = a.i32[1] - sign_extend(b.i16[1], 32);
dst.i32[2] = a.i32[2] - sign_extend(b.i16[2], 32);
dst.i32[3] = a.i32[3] - sign_extend(b.i16[3], 32);
dst.i32[4] = a.i32[4] - sign_extend(b.i16[4], 32);
dst.i32[5] = a.i32[5] - sign_extend(b.i16[5], 32);
dst.i32[6] = a.i32[6] - sign_extend(b.i16[6], 32);
dst.i32[7] = a.i32[7] - sign_extend(b.i16[7], 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubx_s_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxvsubx_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubx_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubx.u.d
Builtin: __builtin_lasx_mxvsubx_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2921
```

### Description

Treat `a` as 4 x u64 lanes, extend the corresponding narrower u32 lanes from `b`, and subtract them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u64[0] = a.u64[0] - zero_extend(b.u32[0], 64);
dst.u64[1] = a.u64[1] - zero_extend(b.u32[1], 64);
dst.u64[2] = a.u64[2] - zero_extend(b.u32[2], 64);
dst.u64[3] = a.u64[3] - zero_extend(b.u32[3], 64);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubx_u_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxvsubx_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubx_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubx.u.h
Builtin: __builtin_lasx_mxvsubx_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2935
```

### Description

Treat `a` as 16 x u16 lanes, extend the corresponding narrower u8 lanes from `b`, and subtract them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u16[0] = a.u16[0] - zero_extend(b.u8[0], 16);
dst.u16[1] = a.u16[1] - zero_extend(b.u8[1], 16);
dst.u16[2] = a.u16[2] - zero_extend(b.u8[2], 16);
dst.u16[3] = a.u16[3] - zero_extend(b.u8[3], 16);
dst.u16[4] = a.u16[4] - zero_extend(b.u8[4], 16);
dst.u16[5] = a.u16[5] - zero_extend(b.u8[5], 16);
dst.u16[6] = a.u16[6] - zero_extend(b.u8[6], 16);
dst.u16[7] = a.u16[7] - zero_extend(b.u8[7], 16);
dst.u16[8] = a.u16[8] - zero_extend(b.u8[8], 16);
dst.u16[9] = a.u16[9] - zero_extend(b.u8[9], 16);
dst.u16[10] = a.u16[10] - zero_extend(b.u8[10], 16);
dst.u16[11] = a.u16[11] - zero_extend(b.u8[11], 16);
dst.u16[12] = a.u16[12] - zero_extend(b.u8[12], 16);
dst.u16[13] = a.u16[13] - zero_extend(b.u8[13], 16);
dst.u16[14] = a.u16[14] - zero_extend(b.u8[14], 16);
dst.u16[15] = a.u16[15] - zero_extend(b.u8[15], 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubx_u_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxvsubx_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubx_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubx.u.w
Builtin: __builtin_lasx_mxvsubx_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2928
```

### Description

Treat `a` as 8 x u32 lanes, extend the corresponding narrower u16 lanes from `b`, and subtract them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u32[0] = a.u32[0] - zero_extend(b.u16[0], 32);
dst.u32[1] = a.u32[1] - zero_extend(b.u16[1], 32);
dst.u32[2] = a.u32[2] - zero_extend(b.u16[2], 32);
dst.u32[3] = a.u32[3] - zero_extend(b.u16[3], 32);
dst.u32[4] = a.u32[4] - zero_extend(b.u16[4], 32);
dst.u32[5] = a.u32[5] - zero_extend(b.u16[5], 32);
dst.u32[6] = a.u32[6] - zero_extend(b.u16[6], 32);
dst.u32[7] = a.u32[7] - zero_extend(b.u16[7], 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubx_u_w((v8u32)a, (v8u32)b);
```

## __m256i __lasx_mxvsubxs_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubxs_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubxs.s.d
Builtin: __builtin_lasx_mxvsubxs_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2984
```

### Description

Treat `a` as 4 x i64 lanes, extend the corresponding narrower i32 lanes from `b`, and subtract them into the wider lanes with signed saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i64[0] = signed_saturate(a.i64[0] - sign_extend(b.i32[0], 64), 64);
dst.i64[1] = signed_saturate(a.i64[1] - sign_extend(b.i32[1], 64), 64);
dst.i64[2] = signed_saturate(a.i64[2] - sign_extend(b.i32[2], 64), 64);
dst.i64[3] = signed_saturate(a.i64[3] - sign_extend(b.i32[3], 64), 64);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubxs_s_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxvsubxs_s_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubxs_s_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubxs.s.h
Builtin: __builtin_lasx_mxvsubxs_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2998
```

### Description

Treat `a` as 16 x i16 lanes, extend the corresponding narrower i8 lanes from `b`, and subtract them into the wider lanes with signed saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i16[0] = signed_saturate(a.i16[0] - sign_extend(b.i8[0], 16), 16);
dst.i16[1] = signed_saturate(a.i16[1] - sign_extend(b.i8[1], 16), 16);
dst.i16[2] = signed_saturate(a.i16[2] - sign_extend(b.i8[2], 16), 16);
dst.i16[3] = signed_saturate(a.i16[3] - sign_extend(b.i8[3], 16), 16);
dst.i16[4] = signed_saturate(a.i16[4] - sign_extend(b.i8[4], 16), 16);
dst.i16[5] = signed_saturate(a.i16[5] - sign_extend(b.i8[5], 16), 16);
dst.i16[6] = signed_saturate(a.i16[6] - sign_extend(b.i8[6], 16), 16);
dst.i16[7] = signed_saturate(a.i16[7] - sign_extend(b.i8[7], 16), 16);
dst.i16[8] = signed_saturate(a.i16[8] - sign_extend(b.i8[8], 16), 16);
dst.i16[9] = signed_saturate(a.i16[9] - sign_extend(b.i8[9], 16), 16);
dst.i16[10] = signed_saturate(a.i16[10] - sign_extend(b.i8[10], 16), 16);
dst.i16[11] = signed_saturate(a.i16[11] - sign_extend(b.i8[11], 16), 16);
dst.i16[12] = signed_saturate(a.i16[12] - sign_extend(b.i8[12], 16), 16);
dst.i16[13] = signed_saturate(a.i16[13] - sign_extend(b.i8[13], 16), 16);
dst.i16[14] = signed_saturate(a.i16[14] - sign_extend(b.i8[14], 16), 16);
dst.i16[15] = signed_saturate(a.i16[15] - sign_extend(b.i8[15], 16), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubxs_s_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxvsubxs_s_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubxs_s_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubxs.s.w
Builtin: __builtin_lasx_mxvsubxs_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2991
```

### Description

Treat `a` as 8 x i32 lanes, extend the corresponding narrower i16 lanes from `b`, and subtract them into the wider lanes with signed saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i32[0] = signed_saturate(a.i32[0] - sign_extend(b.i16[0], 32), 32);
dst.i32[1] = signed_saturate(a.i32[1] - sign_extend(b.i16[1], 32), 32);
dst.i32[2] = signed_saturate(a.i32[2] - sign_extend(b.i16[2], 32), 32);
dst.i32[3] = signed_saturate(a.i32[3] - sign_extend(b.i16[3], 32), 32);
dst.i32[4] = signed_saturate(a.i32[4] - sign_extend(b.i16[4], 32), 32);
dst.i32[5] = signed_saturate(a.i32[5] - sign_extend(b.i16[5], 32), 32);
dst.i32[6] = signed_saturate(a.i32[6] - sign_extend(b.i16[6], 32), 32);
dst.i32[7] = signed_saturate(a.i32[7] - sign_extend(b.i16[7], 32), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubxs_s_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxvsubxs_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubxs_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubxs.u.d
Builtin: __builtin_lasx_mxvsubxs_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3005
```

### Description

Treat `a` as 4 x u64 lanes, extend the corresponding narrower u32 lanes from `b`, and subtract them into the wider lanes with unsigned saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u64[0] = unsigned_saturate(a.u64[0] - zero_extend(b.u32[0], 64), 64);
dst.u64[1] = unsigned_saturate(a.u64[1] - zero_extend(b.u32[1], 64), 64);
dst.u64[2] = unsigned_saturate(a.u64[2] - zero_extend(b.u32[2], 64), 64);
dst.u64[3] = unsigned_saturate(a.u64[3] - zero_extend(b.u32[3], 64), 64);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubxs_u_d((v4u64)a, (v4u64)b);
```

## __m256i __lasx_mxvsubxs_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubxs_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubxs.u.h
Builtin: __builtin_lasx_mxvsubxs_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3019
```

### Description

Treat `a` as 16 x u16 lanes, extend the corresponding narrower u8 lanes from `b`, and subtract them into the wider lanes with unsigned saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u16[0] = unsigned_saturate(a.u16[0] - zero_extend(b.u8[0], 16), 16);
dst.u16[1] = unsigned_saturate(a.u16[1] - zero_extend(b.u8[1], 16), 16);
dst.u16[2] = unsigned_saturate(a.u16[2] - zero_extend(b.u8[2], 16), 16);
dst.u16[3] = unsigned_saturate(a.u16[3] - zero_extend(b.u8[3], 16), 16);
dst.u16[4] = unsigned_saturate(a.u16[4] - zero_extend(b.u8[4], 16), 16);
dst.u16[5] = unsigned_saturate(a.u16[5] - zero_extend(b.u8[5], 16), 16);
dst.u16[6] = unsigned_saturate(a.u16[6] - zero_extend(b.u8[6], 16), 16);
dst.u16[7] = unsigned_saturate(a.u16[7] - zero_extend(b.u8[7], 16), 16);
dst.u16[8] = unsigned_saturate(a.u16[8] - zero_extend(b.u8[8], 16), 16);
dst.u16[9] = unsigned_saturate(a.u16[9] - zero_extend(b.u8[9], 16), 16);
dst.u16[10] = unsigned_saturate(a.u16[10] - zero_extend(b.u8[10], 16), 16);
dst.u16[11] = unsigned_saturate(a.u16[11] - zero_extend(b.u8[11], 16), 16);
dst.u16[12] = unsigned_saturate(a.u16[12] - zero_extend(b.u8[12], 16), 16);
dst.u16[13] = unsigned_saturate(a.u16[13] - zero_extend(b.u8[13], 16), 16);
dst.u16[14] = unsigned_saturate(a.u16[14] - zero_extend(b.u8[14], 16), 16);
dst.u16[15] = unsigned_saturate(a.u16[15] - zero_extend(b.u8[15], 16), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubxs_u_h((v16u16)a, (v16u16)b);
```

## __m256i __lasx_mxvsubxs_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsubxs_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsubxs.u.w
Builtin: __builtin_lasx_mxvsubxs_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3012
```

### Description

Treat `a` as 8 x u32 lanes, extend the corresponding narrower u16 lanes from `b`, and subtract them into the wider lanes with unsigned saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u32[0] = unsigned_saturate(a.u32[0] - zero_extend(b.u16[0], 32), 32);
dst.u32[1] = unsigned_saturate(a.u32[1] - zero_extend(b.u16[1], 32), 32);
dst.u32[2] = unsigned_saturate(a.u32[2] - zero_extend(b.u16[2], 32), 32);
dst.u32[3] = unsigned_saturate(a.u32[3] - zero_extend(b.u16[3], 32), 32);
dst.u32[4] = unsigned_saturate(a.u32[4] - zero_extend(b.u16[4], 32), 32);
dst.u32[5] = unsigned_saturate(a.u32[5] - zero_extend(b.u16[5], 32), 32);
dst.u32[6] = unsigned_saturate(a.u32[6] - zero_extend(b.u16[6], 32), 32);
dst.u32[7] = unsigned_saturate(a.u32[7] - zero_extend(b.u16[7], 32), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>1/2</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubxs_u_w((v8u32)a, (v8u32)b);
```

