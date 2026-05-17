# Integer Comparison

Generated from `include/loongson-sxintrin.h`. This page contains 3 intrinsics.

## __m128i __lsx_vhminposh_u_d (__m128i a)

### Synopsis

```c
__m128i __lsx_vhminposh_u_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vhminposh.u.d
Builtin: __builtin_lsx_vhminposh_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:785
```

### Description

Select the lane-wise minimum of unsigned integer operands on 2 x u64 lanes.

### Operation

```c
dst.u64[0] = min(a.i16[0], b.u64[0]);
dst.u64[1] = min(a.i16[1], b.u64[1]);
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
return (__m128i)__builtin_lsx_vhminposh_u_d((v8i16)a);
```

## __m128i __lsx_vhminposh_u_q (__m128i a)

### Synopsis

```c
__m128i __lsx_vhminposh_u_q (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vhminposh.u.q
Builtin: __builtin_lsx_vhminposh_u_q
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:799
```

### Description

Select the lane-wise minimum of unsigned integer operands on 1 x u128 lanes.

### Operation

```c
dst.u128[0] = min(a.i16[0], b.u128[0]);
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
return (__m128i)__builtin_lsx_vhminposh_u_q((v8i16)a);
```

## __m128i __lsx_vhminposh_u_w (__m128i a)

### Synopsis

```c
__m128i __lsx_vhminposh_u_w (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vhminposh.u.w
Builtin: __builtin_lsx_vhminposh_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:792
```

### Description

Select the lane-wise minimum of unsigned integer operands on 4 x u32 lanes.

### Operation

```c
dst.u32[0] = min(a.i16[0], b.u32[0]);
dst.u32[1] = min(a.i16[1], b.u32[1]);
dst.u32[2] = min(a.i16[2], b.u32[2]);
dst.u32[3] = min(a.i16[3], b.u32[3]);
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
return (__m128i)__builtin_lsx_vhminposh_u_w((v8i16)a);
```

