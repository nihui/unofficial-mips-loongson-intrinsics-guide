# Integer Computation

Generated from `include/loongson-sxintrin.h`. This page contains 59 intrinsics.

## __m128i __lsx_vabs_b (__m128i a)

### Synopsis

```c
__m128i __lsx_vabs_b (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vabs.b
Builtin: __builtin_lsx_vabs_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:63
```

### Description

Take the absolute value of each signed integer lane on 16 x u8 lanes.

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
return (__m128i)__builtin_lsx_vabs_b((v16i8)a);
```

## __m128i __lsx_vabs_d (__m128i a)

### Synopsis

```c
__m128i __lsx_vabs_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vabs.d
Builtin: __builtin_lsx_vabs_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:84
```

### Description

Take the absolute value of each signed integer lane on 2 x u64 lanes.

### Operation

```c
dst.u64[0] = abs(a.i64[0]);
dst.u64[1] = abs(a.i64[1]);
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
return (__m128i)__builtin_lsx_vabs_d((v2i64)a);
```

## __m128i __lsx_vabs_h (__m128i a)

### Synopsis

```c
__m128i __lsx_vabs_h (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vabs.h
Builtin: __builtin_lsx_vabs_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:70
```

### Description

Take the absolute value of each signed integer lane on 8 x u16 lanes.

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
return (__m128i)__builtin_lsx_vabs_h((v8i16)a);
```

## __m128i __lsx_vabs_w (__m128i a)

### Synopsis

```c
__m128i __lsx_vabs_w (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vabs.w
Builtin: __builtin_lsx_vabs_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:77
```

### Description

Take the absolute value of each signed integer lane on 4 x u32 lanes.

### Operation

```c
dst.u32[0] = abs(a.i32[0]);
dst.u32[1] = abs(a.i32[1]);
dst.u32[2] = abs(a.i32[2]);
dst.u32[3] = abs(a.i32[3]);
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
return (__m128i)__builtin_lsx_vabs_w((v4i32)a);
```

## __m128i __lsx_vacc4b_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vacc4b_u_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vacc4b.u.h
Builtin: __builtin_lsx_vacc4b_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:343
```

### Description

Sum groups of 4 unsigned bytes into wider lanes, reducing packed byte data into partial sums.

### Operation

```c
dst.u32[0] = a.u8[0] + a.u8[1] + a.u8[2] + a.u8[3];
dst.u32[1] = a.u8[4] + a.u8[5] + a.u8[6] + a.u8[7];
dst.u32[2] = a.u8[8] + a.u8[9] + a.u8[10] + a.u8[11];
dst.u32[3] = a.u8[12] + a.u8[13] + a.u8[14] + a.u8[15];
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
return (__m128i)__builtin_lsx_vacc4b_u_h((v16u8)a, (v16u8)b);
```

## __m128i __lsx_vacc8b_u_d (__m128i a)

### Synopsis

```c
__m128i __lsx_vacc8b_u_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vacc8b.u.d
Builtin: __builtin_lsx_vacc8b_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:350
```

### Description

Sum groups of 8 unsigned bytes into wider lanes, reducing packed byte data into partial sums.

### Operation

```c
dst.u64[0] = a.u8[0] + a.u8[1] + a.u8[2] + a.u8[3] + a.u8[4] + a.u8[5] + a.u8[6] + a.u8[7];
dst.u64[1] = a.u8[8] + a.u8[9] + a.u8[10] + a.u8[11] + a.u8[12] + a.u8[13] + a.u8[14] + a.u8[15];
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
return (__m128i)__builtin_lsx_vacc8b_u_d((v16u8)a);
```

## __m128i __lsx_vaddx_s_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vaddx_s_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vaddx.s.d
Builtin: __builtin_lsx_vaddx_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:119
```

### Description

Treat `a` as 2 x i64 lanes, extend the corresponding narrower i32 lanes from `b`, and add them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i64[0] = a.i64[0] + sign_extend(b.i32[0], 64);
dst.i64[1] = a.i64[1] + sign_extend(b.i32[1], 64);
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
return (__m128i)__builtin_lsx_vaddx_s_d((v2i64)a, (v2i64)b);
```

## __m128i __lsx_vaddx_s_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vaddx_s_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vaddx.s.h
Builtin: __builtin_lsx_vaddx_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:133
```

### Description

Treat `a` as 8 x i16 lanes, extend the corresponding narrower i8 lanes from `b`, and add them into the wider lanes. This is for accumulating narrow samples into a wider running value.

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
return (__m128i)__builtin_lsx_vaddx_s_h((v8i16)a, (v8i16)b);
```

## __m128i __lsx_vaddx_s_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vaddx_s_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vaddx.s.w
Builtin: __builtin_lsx_vaddx_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:126
```

### Description

Treat `a` as 4 x i32 lanes, extend the corresponding narrower i16 lanes from `b`, and add them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i32[0] = a.i32[0] + sign_extend(b.i16[0], 32);
dst.i32[1] = a.i32[1] + sign_extend(b.i16[1], 32);
dst.i32[2] = a.i32[2] + sign_extend(b.i16[2], 32);
dst.i32[3] = a.i32[3] + sign_extend(b.i16[3], 32);
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
return (__m128i)__builtin_lsx_vaddx_s_w((v4i32)a, (v4i32)b);
```

## __m128i __lsx_vaddx_u_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vaddx_u_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vaddx.u.d
Builtin: __builtin_lsx_vaddx_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:140
```

### Description

Treat `a` as 2 x u64 lanes, extend the corresponding narrower u32 lanes from `b`, and add them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u64[0] = a.u64[0] + zero_extend(b.u32[0], 64);
dst.u64[1] = a.u64[1] + zero_extend(b.u32[1], 64);
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
return (__m128i)__builtin_lsx_vaddx_u_d((v2u64)a, (v2u64)b);
```

## __m128i __lsx_vaddx_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vaddx_u_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vaddx.u.h
Builtin: __builtin_lsx_vaddx_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:154
```

### Description

Treat `a` as 8 x u16 lanes, extend the corresponding narrower u8 lanes from `b`, and add them into the wider lanes. This is for accumulating narrow samples into a wider running value.

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
return (__m128i)__builtin_lsx_vaddx_u_h((v8u16)a, (v8u16)b);
```

## __m128i __lsx_vaddx_u_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vaddx_u_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vaddx.u.w
Builtin: __builtin_lsx_vaddx_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:147
```

### Description

Treat `a` as 4 x u32 lanes, extend the corresponding narrower u16 lanes from `b`, and add them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u32[0] = a.u32[0] + zero_extend(b.u16[0], 32);
dst.u32[1] = a.u32[1] + zero_extend(b.u16[1], 32);
dst.u32[2] = a.u32[2] + zero_extend(b.u16[2], 32);
dst.u32[3] = a.u32[3] + zero_extend(b.u16[3], 32);
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
return (__m128i)__builtin_lsx_vaddx_u_w((v4u32)a, (v4u32)b);
```

## __m128i __lsx_vaddxs_s_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vaddxs_s_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vaddxs.s.d
Builtin: __builtin_lsx_vaddxs_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:203
```

### Description

Treat `a` as 2 x i64 lanes, extend the corresponding narrower i32 lanes from `b`, and add them into the wider lanes with signed saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i64[0] = signed_saturate(a.i64[0] + sign_extend(b.i32[0], 64), 64);
dst.i64[1] = signed_saturate(a.i64[1] + sign_extend(b.i32[1], 64), 64);
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
return (__m128i)__builtin_lsx_vaddxs_s_d((v2i64)a, (v2i64)b);
```

## __m128i __lsx_vaddxs_s_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vaddxs_s_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vaddxs.s.h
Builtin: __builtin_lsx_vaddxs_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:217
```

### Description

Treat `a` as 8 x i16 lanes, extend the corresponding narrower i8 lanes from `b`, and add them into the wider lanes with signed saturation. This is for accumulating narrow samples into a wider running value.

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
return (__m128i)__builtin_lsx_vaddxs_s_h((v8i16)a, (v8i16)b);
```

## __m128i __lsx_vaddxs_s_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vaddxs_s_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vaddxs.s.w
Builtin: __builtin_lsx_vaddxs_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:210
```

### Description

Treat `a` as 4 x i32 lanes, extend the corresponding narrower i16 lanes from `b`, and add them into the wider lanes with signed saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i32[0] = signed_saturate(a.i32[0] + sign_extend(b.i16[0], 32), 32);
dst.i32[1] = signed_saturate(a.i32[1] + sign_extend(b.i16[1], 32), 32);
dst.i32[2] = signed_saturate(a.i32[2] + sign_extend(b.i16[2], 32), 32);
dst.i32[3] = signed_saturate(a.i32[3] + sign_extend(b.i16[3], 32), 32);
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
return (__m128i)__builtin_lsx_vaddxs_s_w((v4i32)a, (v4i32)b);
```

## __m128i __lsx_vaddxs_u_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vaddxs_u_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vaddxs.u.d
Builtin: __builtin_lsx_vaddxs_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:224
```

### Description

Treat `a` as 2 x u64 lanes, extend the corresponding narrower u32 lanes from `b`, and add them into the wider lanes with unsigned saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u64[0] = unsigned_saturate(a.u64[0] + zero_extend(b.u32[0], 64), 64);
dst.u64[1] = unsigned_saturate(a.u64[1] + zero_extend(b.u32[1], 64), 64);
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
return (__m128i)__builtin_lsx_vaddxs_u_d((v2u64)a, (v2u64)b);
```

## __m128i __lsx_vaddxs_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vaddxs_u_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vaddxs.u.h
Builtin: __builtin_lsx_vaddxs_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:238
```

### Description

Treat `a` as 8 x u16 lanes, extend the corresponding narrower u8 lanes from `b`, and add them into the wider lanes with unsigned saturation. This is for accumulating narrow samples into a wider running value.

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
return (__m128i)__builtin_lsx_vaddxs_u_h((v8u16)a, (v8u16)b);
```

## __m128i __lsx_vaddxs_u_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vaddxs_u_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vaddxs.u.w
Builtin: __builtin_lsx_vaddxs_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:231
```

### Description

Treat `a` as 4 x u32 lanes, extend the corresponding narrower u16 lanes from `b`, and add them into the wider lanes with unsigned saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u32[0] = unsigned_saturate(a.u32[0] + zero_extend(b.u16[0], 32), 32);
dst.u32[1] = unsigned_saturate(a.u32[1] + zero_extend(b.u16[1], 32), 32);
dst.u32[2] = unsigned_saturate(a.u32[2] + zero_extend(b.u16[2], 32), 32);
dst.u32[3] = unsigned_saturate(a.u32[3] + zero_extend(b.u16[3], 32), 32);
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
return (__m128i)__builtin_lsx_vaddxs_u_w((v4u32)a, (v4u32)b);
```

## __m128i __lsx_vmulhi_s_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulhi_s_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulhi.s.b
Builtin: __builtin_lsx_vmulhi_s_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:378
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
return (__m128i)__builtin_lsx_vmulhi_s_b((v16i8)a, (v16i8)b);
```

## __m128i __lsx_vmulhi_s_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulhi_s_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulhi.s.d
Builtin: __builtin_lsx_vmulhi_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:357
```

### Description

Multiply signed integer lanes and keep the upper half of each product.

### Operation

```c
dst.i64[0] = upper_64_bits(a.i64[0] * b.i64[0]);
dst.i64[1] = upper_64_bits(a.i64[1] * b.i64[1]);
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
return (__m128i)__builtin_lsx_vmulhi_s_d((v2i64)a, (v2i64)b);
```

## __m128i __lsx_vmulhi_s_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulhi_s_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulhi.s.h
Builtin: __builtin_lsx_vmulhi_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:371
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
return (__m128i)__builtin_lsx_vmulhi_s_h((v8i16)a, (v8i16)b);
```

## __m128i __lsx_vmulhi_s_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulhi_s_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulhi.s.w
Builtin: __builtin_lsx_vmulhi_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:364
```

### Description

Multiply signed integer lanes and keep the upper half of each product.

### Operation

```c
dst.i32[0] = upper_32_bits(a.i32[0] * b.i32[0]);
dst.i32[1] = upper_32_bits(a.i32[1] * b.i32[1]);
dst.i32[2] = upper_32_bits(a.i32[2] * b.i32[2]);
dst.i32[3] = upper_32_bits(a.i32[3] * b.i32[3]);
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
return (__m128i)__builtin_lsx_vmulhi_s_w((v4i32)a, (v4i32)b);
```

## __m128i __lsx_vmulhi_u_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulhi_u_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulhi.u.b
Builtin: __builtin_lsx_vmulhi_u_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:406
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
return (__m128i)__builtin_lsx_vmulhi_u_b((v16u8)a, (v16u8)b);
```

## __m128i __lsx_vmulhi_u_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulhi_u_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulhi.u.d
Builtin: __builtin_lsx_vmulhi_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:385
```

### Description

Multiply unsigned integer lanes and keep the upper half of each product.

### Operation

```c
dst.u64[0] = upper_64_bits(a.u64[0] * b.u64[0]);
dst.u64[1] = upper_64_bits(a.u64[1] * b.u64[1]);
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
return (__m128i)__builtin_lsx_vmulhi_u_d((v2u64)a, (v2u64)b);
```

## __m128i __lsx_vmulhi_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulhi_u_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulhi.u.h
Builtin: __builtin_lsx_vmulhi_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:399
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
return (__m128i)__builtin_lsx_vmulhi_u_h((v8u16)a, (v8u16)b);
```

## __m128i __lsx_vmulhi_u_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulhi_u_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulhi.u.w
Builtin: __builtin_lsx_vmulhi_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:392
```

### Description

Multiply unsigned integer lanes and keep the upper half of each product.

### Operation

```c
dst.u32[0] = upper_32_bits(a.u32[0] * b.u32[0]);
dst.u32[1] = upper_32_bits(a.u32[1] * b.u32[1]);
dst.u32[2] = upper_32_bits(a.u32[2] * b.u32[2]);
dst.u32[3] = upper_32_bits(a.u32[3] * b.u32[3]);
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
return (__m128i)__builtin_lsx_vmulhi_u_w((v4u32)a, (v4u32)b);
```

## __m128i __lsx_vmulhi_us_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulhi_us_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulhi.us.b
Builtin: __builtin_lsx_vmulhi_us_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1376
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
return (__m128i)__builtin_lsx_vmulhi_us_b((v16i8)a, (v16i8)b);
```

## __m128i __lsx_vmulhi_us_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulhi_us_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulhi.us.h
Builtin: __builtin_lsx_vmulhi_us_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1369
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
return (__m128i)__builtin_lsx_vmulhi_us_h((v8i16)a, (v8i16)b);
```

## __m128i __lsx_vmulhi_us_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulhi_us_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulhi.us.w
Builtin: __builtin_lsx_vmulhi_us_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1362
```

### Description

Multiply unsigned/signed mixed integer lanes and keep the upper half of each product.

### Operation

```c
dst.u32[0] = upper_32_bits(a.i32[0] * b.i32[0]);
dst.u32[1] = upper_32_bits(a.i32[1] * b.i32[1]);
dst.u32[2] = upper_32_bits(a.i32[2] * b.i32[2]);
dst.u32[3] = upper_32_bits(a.i32[3] * b.i32[3]);
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
return (__m128i)__builtin_lsx_vmulhi_us_w((v4i32)a, (v4i32)b);
```

## __m128i __lsx_vmulx_s_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulx_s_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulx.s.d
Builtin: __builtin_lsx_vmulx_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:413
```

### Description

Multiply signed integer lanes of `a` and `b` on 2 x i64 lanes.

### Operation

```c
dst.i64[0] = a.i32[0] * b.i32[0];
dst.i64[1] = a.i32[1] * b.i32[1];
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
return (__m128i)__builtin_lsx_vmulx_s_d((v4i32)a, (v4i32)b);
```

## __m128i __lsx_vmulx_s_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulx_s_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulx.s.h
Builtin: __builtin_lsx_vmulx_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:427
```

### Description

Multiply signed integer lanes of `a` and `b` on 8 x i16 lanes.

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
return (__m128i)__builtin_lsx_vmulx_s_h((v16i8)a, (v16i8)b);
```

## __m128i __lsx_vmulx_s_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulx_s_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulx.s.w
Builtin: __builtin_lsx_vmulx_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:420
```

### Description

Multiply signed integer lanes of `a` and `b` on 4 x i32 lanes.

### Operation

```c
dst.i32[0] = a.i16[0] * b.i16[0];
dst.i32[1] = a.i16[1] * b.i16[1];
dst.i32[2] = a.i16[2] * b.i16[2];
dst.i32[3] = a.i16[3] * b.i16[3];
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
return (__m128i)__builtin_lsx_vmulx_s_w((v8i16)a, (v8i16)b);
```

## __m128i __lsx_vmulx_u_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulx_u_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulx.u.d
Builtin: __builtin_lsx_vmulx_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:434
```

### Description

Multiply unsigned integer lanes of `a` and `b` on 2 x u64 lanes.

### Operation

```c
dst.u64[0] = a.u32[0] * b.u32[0];
dst.u64[1] = a.u32[1] * b.u32[1];
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
return (__m128i)__builtin_lsx_vmulx_u_d((v4u32)a, (v4u32)b);
```

## __m128i __lsx_vmulx_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulx_u_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulx.u.h
Builtin: __builtin_lsx_vmulx_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:448
```

### Description

Multiply unsigned integer lanes of `a` and `b` on 8 x u16 lanes.

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
return (__m128i)__builtin_lsx_vmulx_u_h((v16u8)a, (v16u8)b);
```

## __m128i __lsx_vmulx_u_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vmulx_u_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vmulx.u.w
Builtin: __builtin_lsx_vmulx_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:441
```

### Description

Multiply unsigned integer lanes of `a` and `b` on 4 x u32 lanes.

### Operation

```c
dst.u32[0] = a.u16[0] * b.u16[0];
dst.u32[1] = a.u16[1] * b.u16[1];
dst.u32[2] = a.u16[2] * b.u16[2];
dst.u32[3] = a.u16[3] * b.u16[3];
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
return (__m128i)__builtin_lsx_vmulx_u_w((v8u16)a, (v8u16)b);
```

## __m128i __lsx_vneg_b (__m128i a)

### Synopsis

```c
__m128i __lsx_vneg_b (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vneg.b
Builtin: __builtin_lsx_vneg_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:91
```

### Description

Negate each signed integer lane on 16 x u8 lanes.

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
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vneg_b((v16i8)a);
```

## __m128i __lsx_vneg_d (__m128i a)

### Synopsis

```c
__m128i __lsx_vneg_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vneg.d
Builtin: __builtin_lsx_vneg_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:112
```

### Description

Negate each signed integer lane on 2 x u64 lanes.

### Operation

```c
dst.u64[0] = -a.i64[0];
dst.u64[1] = -a.i64[1];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vneg_d((v2i64)a);
```

## __m128i __lsx_vneg_h (__m128i a)

### Synopsis

```c
__m128i __lsx_vneg_h (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vneg.h
Builtin: __builtin_lsx_vneg_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:98
```

### Description

Negate each signed integer lane on 8 x u16 lanes.

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
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vneg_h((v8i16)a);
```

## __m128i __lsx_vneg_w (__m128i a)

### Synopsis

```c
__m128i __lsx_vneg_w (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vneg.w
Builtin: __builtin_lsx_vneg_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:105
```

### Description

Negate each signed integer lane on 4 x u32 lanes.

### Operation

```c
dst.u32[0] = -a.i32[0];
dst.u32[1] = -a.i32[1];
dst.u32[2] = -a.i32[2];
dst.u32[3] = -a.i32[3];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vneg_w((v4i32)a);
```

## __m128i __lsx_vsubh_s_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubh_s_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubh.s.b
Builtin: __builtin_lsx_vsubh_s_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:308
```

### Description

Subtract `b` from `a` in 16 x i8 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

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
return (__m128i)__builtin_lsx_vsubh_s_b((v16i8)a, (v16i8)b);
```

## __m128i __lsx_vsubh_s_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubh_s_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubh.s.d
Builtin: __builtin_lsx_vsubh_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:287
```

### Description

Subtract `b` from `a` in 2 x i64 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

### Operation

```c
dst.i64[0] = floor_divide(widen(a.i64[0]) - widen(b.i64[0]), 2);
dst.i64[1] = floor_divide(widen(a.i64[1]) - widen(b.i64[1]), 2);
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
return (__m128i)__builtin_lsx_vsubh_s_d((v2i64)a, (v2i64)b);
```

## __m128i __lsx_vsubh_s_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubh_s_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubh.s.h
Builtin: __builtin_lsx_vsubh_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:301
```

### Description

Subtract `b` from `a` in 8 x i16 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

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
return (__m128i)__builtin_lsx_vsubh_s_h((v8i16)a, (v8i16)b);
```

## __m128i __lsx_vsubh_s_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubh_s_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubh.s.w
Builtin: __builtin_lsx_vsubh_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:294
```

### Description

Subtract `b` from `a` in 4 x i32 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

### Operation

```c
dst.i32[0] = floor_divide(widen(a.i32[0]) - widen(b.i32[0]), 2);
dst.i32[1] = floor_divide(widen(a.i32[1]) - widen(b.i32[1]), 2);
dst.i32[2] = floor_divide(widen(a.i32[2]) - widen(b.i32[2]), 2);
dst.i32[3] = floor_divide(widen(a.i32[3]) - widen(b.i32[3]), 2);
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
return (__m128i)__builtin_lsx_vsubh_s_w((v4i32)a, (v4i32)b);
```

## __m128i __lsx_vsubh_u_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubh_u_b (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubh.u.b
Builtin: __builtin_lsx_vsubh_u_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:336
```

### Description

Subtract `b` from `a` in 16 x u8 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

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
return (__m128i)__builtin_lsx_vsubh_u_b((v16u8)a, (v16u8)b);
```

## __m128i __lsx_vsubh_u_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubh_u_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubh.u.d
Builtin: __builtin_lsx_vsubh_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:315
```

### Description

Subtract `b` from `a` in 2 x u64 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

### Operation

```c
dst.u64[0] = as_u64(floor_divide(widen(a.u64[0]) - widen(b.u64[0]), 2));
dst.u64[1] = as_u64(floor_divide(widen(a.u64[1]) - widen(b.u64[1]), 2));
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
return (__m128i)__builtin_lsx_vsubh_u_d((v2u64)a, (v2u64)b);
```

## __m128i __lsx_vsubh_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubh_u_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubh.u.h
Builtin: __builtin_lsx_vsubh_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:329
```

### Description

Subtract `b` from `a` in 8 x u16 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

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
return (__m128i)__builtin_lsx_vsubh_u_h((v8u16)a, (v8u16)b);
```

## __m128i __lsx_vsubh_u_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubh_u_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubh.u.w
Builtin: __builtin_lsx_vsubh_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:322
```

### Description

Subtract `b` from `a` in 4 x u32 lanes and divide the extended difference by two. This halving subtract keeps one extra bit of headroom for average/difference filters.

### Operation

```c
dst.u32[0] = as_u32(floor_divide(widen(a.u32[0]) - widen(b.u32[0]), 2));
dst.u32[1] = as_u32(floor_divide(widen(a.u32[1]) - widen(b.u32[1]), 2));
dst.u32[2] = as_u32(floor_divide(widen(a.u32[2]) - widen(b.u32[2]), 2));
dst.u32[3] = as_u32(floor_divide(widen(a.u32[3]) - widen(b.u32[3]), 2));
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
return (__m128i)__builtin_lsx_vsubh_u_w((v4u32)a, (v4u32)b);
```

## __m128i __lsx_vsubx_s_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubx_s_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubx.s.d
Builtin: __builtin_lsx_vsubx_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:161
```

### Description

Treat `a` as 2 x i64 lanes, extend the corresponding narrower i32 lanes from `b`, and subtract them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i64[0] = a.i64[0] - sign_extend(b.i32[0], 64);
dst.i64[1] = a.i64[1] - sign_extend(b.i32[1], 64);
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
return (__m128i)__builtin_lsx_vsubx_s_d((v2i64)a, (v2i64)b);
```

## __m128i __lsx_vsubx_s_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubx_s_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubx.s.h
Builtin: __builtin_lsx_vsubx_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:175
```

### Description

Treat `a` as 8 x i16 lanes, extend the corresponding narrower i8 lanes from `b`, and subtract them into the wider lanes. This is for accumulating narrow samples into a wider running value.

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
return (__m128i)__builtin_lsx_vsubx_s_h((v8i16)a, (v8i16)b);
```

## __m128i __lsx_vsubx_s_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubx_s_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubx.s.w
Builtin: __builtin_lsx_vsubx_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:168
```

### Description

Treat `a` as 4 x i32 lanes, extend the corresponding narrower i16 lanes from `b`, and subtract them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i32[0] = a.i32[0] - sign_extend(b.i16[0], 32);
dst.i32[1] = a.i32[1] - sign_extend(b.i16[1], 32);
dst.i32[2] = a.i32[2] - sign_extend(b.i16[2], 32);
dst.i32[3] = a.i32[3] - sign_extend(b.i16[3], 32);
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
return (__m128i)__builtin_lsx_vsubx_s_w((v4i32)a, (v4i32)b);
```

## __m128i __lsx_vsubx_u_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubx_u_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubx.u.d
Builtin: __builtin_lsx_vsubx_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:182
```

### Description

Treat `a` as 2 x u64 lanes, extend the corresponding narrower u32 lanes from `b`, and subtract them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u64[0] = a.u64[0] - zero_extend(b.u32[0], 64);
dst.u64[1] = a.u64[1] - zero_extend(b.u32[1], 64);
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
return (__m128i)__builtin_lsx_vsubx_u_d((v2u64)a, (v2u64)b);
```

## __m128i __lsx_vsubx_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubx_u_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubx.u.h
Builtin: __builtin_lsx_vsubx_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:196
```

### Description

Treat `a` as 8 x u16 lanes, extend the corresponding narrower u8 lanes from `b`, and subtract them into the wider lanes. This is for accumulating narrow samples into a wider running value.

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
return (__m128i)__builtin_lsx_vsubx_u_h((v8u16)a, (v8u16)b);
```

## __m128i __lsx_vsubx_u_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubx_u_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubx.u.w
Builtin: __builtin_lsx_vsubx_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:189
```

### Description

Treat `a` as 4 x u32 lanes, extend the corresponding narrower u16 lanes from `b`, and subtract them into the wider lanes. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u32[0] = a.u32[0] - zero_extend(b.u16[0], 32);
dst.u32[1] = a.u32[1] - zero_extend(b.u16[1], 32);
dst.u32[2] = a.u32[2] - zero_extend(b.u16[2], 32);
dst.u32[3] = a.u32[3] - zero_extend(b.u16[3], 32);
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
return (__m128i)__builtin_lsx_vsubx_u_w((v4u32)a, (v4u32)b);
```

## __m128i __lsx_vsubxs_s_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubxs_s_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubxs.s.d
Builtin: __builtin_lsx_vsubxs_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:245
```

### Description

Treat `a` as 2 x i64 lanes, extend the corresponding narrower i32 lanes from `b`, and subtract them into the wider lanes with signed saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i64[0] = signed_saturate(a.i64[0] - sign_extend(b.i32[0], 64), 64);
dst.i64[1] = signed_saturate(a.i64[1] - sign_extend(b.i32[1], 64), 64);
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
return (__m128i)__builtin_lsx_vsubxs_s_d((v2i64)a, (v2i64)b);
```

## __m128i __lsx_vsubxs_s_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubxs_s_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubxs.s.h
Builtin: __builtin_lsx_vsubxs_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:259
```

### Description

Treat `a` as 8 x i16 lanes, extend the corresponding narrower i8 lanes from `b`, and subtract them into the wider lanes with signed saturation. This is for accumulating narrow samples into a wider running value.

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
return (__m128i)__builtin_lsx_vsubxs_s_h((v8i16)a, (v8i16)b);
```

## __m128i __lsx_vsubxs_s_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubxs_s_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubxs.s.w
Builtin: __builtin_lsx_vsubxs_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:252
```

### Description

Treat `a` as 4 x i32 lanes, extend the corresponding narrower i16 lanes from `b`, and subtract them into the wider lanes with signed saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.i32[0] = signed_saturate(a.i32[0] - sign_extend(b.i16[0], 32), 32);
dst.i32[1] = signed_saturate(a.i32[1] - sign_extend(b.i16[1], 32), 32);
dst.i32[2] = signed_saturate(a.i32[2] - sign_extend(b.i16[2], 32), 32);
dst.i32[3] = signed_saturate(a.i32[3] - sign_extend(b.i16[3], 32), 32);
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
return (__m128i)__builtin_lsx_vsubxs_s_w((v4i32)a, (v4i32)b);
```

## __m128i __lsx_vsubxs_u_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubxs_u_d (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubxs.u.d
Builtin: __builtin_lsx_vsubxs_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:266
```

### Description

Treat `a` as 2 x u64 lanes, extend the corresponding narrower u32 lanes from `b`, and subtract them into the wider lanes with unsigned saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u64[0] = unsigned_saturate(a.u64[0] - zero_extend(b.u32[0], 64), 64);
dst.u64[1] = unsigned_saturate(a.u64[1] - zero_extend(b.u32[1], 64), 64);
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
return (__m128i)__builtin_lsx_vsubxs_u_d((v2u64)a, (v2u64)b);
```

## __m128i __lsx_vsubxs_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubxs_u_h (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubxs.u.h
Builtin: __builtin_lsx_vsubxs_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:280
```

### Description

Treat `a` as 8 x u16 lanes, extend the corresponding narrower u8 lanes from `b`, and subtract them into the wider lanes with unsigned saturation. This is for accumulating narrow samples into a wider running value.

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
return (__m128i)__builtin_lsx_vsubxs_u_h((v8u16)a, (v8u16)b);
```

## __m128i __lsx_vsubxs_u_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vsubxs_u_w (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vsubxs.u.w
Builtin: __builtin_lsx_vsubxs_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:273
```

### Description

Treat `a` as 4 x u32 lanes, extend the corresponding narrower u16 lanes from `b`, and subtract them into the wider lanes with unsigned saturation. This is for accumulating narrow samples into a wider running value.

### Operation

```c
dst.u32[0] = unsigned_saturate(a.u32[0] - zero_extend(b.u16[0], 32), 32);
dst.u32[1] = unsigned_saturate(a.u32[1] - zero_extend(b.u16[1], 32), 32);
dst.u32[2] = unsigned_saturate(a.u32[2] - zero_extend(b.u16[2], 32), 32);
dst.u32[3] = unsigned_saturate(a.u32[3] - zero_extend(b.u16[3], 32), 32);
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
return (__m128i)__builtin_lsx_vsubxs_u_w((v4u32)a, (v4u32)b);
```

