# Integer Computation

Generated from `include/msa2.h`. This page contains 300 intrinsics.

## __m128i __msa2_dotp_s_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dotp_s_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: dotp.s.q
Builtin: __builtin_msa2_dotp_s_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:56
```

### Description

Multiply adjacent pairs of narrower signed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i128[0] = a.i64[0] * b.i64[0] + a.i64[1] * b.i64[1];
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
return (__m128i) __builtin_msa2_dotp_s_q ((v2i64) a, (v2i64) b);
```

## __m128i __msa2_dotp_u_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dotp_u_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: dotp.u.q
Builtin: __builtin_msa2_dotp_u_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:62
```

### Description

Multiply adjacent pairs of narrower unsigned lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.u128[0] = a.u64[0] * b.u64[0] + a.u64[1] * b.u64[1];
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
return (__m128i) __builtin_msa2_dotp_u_q ((v2u64) a, (v2u64) b);
```

## __m128i __msa2_dotp_us_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dotp_us_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: dotp.us.d
Builtin: __builtin_msa2_dotp_us_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:80
```

### Description

Multiply adjacent pairs of narrower unsigned/signed mixed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i64[0] = a.u32[0] * b.i32[0] + a.u32[1] * b.i32[1];
dst.i64[1] = a.u32[2] * b.i32[2] + a.u32[3] * b.i32[3];
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
return (__m128i) __builtin_msa2_dotp_us_d ((v4u32) a, (v4i32) b);
```

## __m128i __msa2_dotp_us_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dotp_us_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: dotp.us.h
Builtin: __builtin_msa2_dotp_us_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:68
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
return (__m128i) __builtin_msa2_dotp_us_h ((v16u8) a, (v16i8) b);
```

## __m128i __msa2_dotp_us_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dotp_us_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: dotp.us.q
Builtin: __builtin_msa2_dotp_us_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:86
```

### Description

Multiply adjacent pairs of narrower unsigned/signed mixed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i128[0] = a.u64[0] * b.i64[0] + a.u64[1] * b.i64[1];
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
return (__m128i) __builtin_msa2_dotp_us_q ((v2u64) a, (v2i64) b);
```

## __m128i __msa2_dotp_us_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dotp_us_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: dotp.us.w
Builtin: __builtin_msa2_dotp_us_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:74
```

### Description

Multiply adjacent pairs of narrower unsigned/signed mixed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i32[0] = a.u16[0] * b.i16[0] + a.u16[1] * b.i16[1];
dst.i32[1] = a.u16[2] * b.i16[2] + a.u16[3] * b.i16[3];
dst.i32[2] = a.u16[4] * b.i16[4] + a.u16[5] * b.i16[5];
dst.i32[3] = a.u16[6] * b.i16[6] + a.u16[7] * b.i16[7];
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
return (__m128i) __builtin_msa2_dotp_us_w ((v8u16) a, (v8i16) b);
```

## __m128i __msa2_dpadd_s_q (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_dpadd_s_q (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: dpadd.s.q
Builtin: __builtin_msa2_dpadd_s_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:92
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i128[0] = a.i128[0] + b.i64[0] * c.i64[0] + b.i64[1] * c.i64[1];
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
return (__m128i) __builtin_msa2_dpadd_s_q ((v2i64) a, (v2i64) b, (v2i64) c);
```

## __m128i __msa2_dpadd_u_q (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_dpadd_u_q (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: dpadd.u.q
Builtin: __builtin_msa2_dpadd_u_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:98
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u128[0] = a.u128[0] + b.u64[0] * c.u64[0] + b.u64[1] * c.u64[1];
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
return (__m128i) __builtin_msa2_dpadd_u_q ((v2u64) a, (v2u64) b, (v2u64) c);
```

## __m128i __msa2_dpadd_us_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_dpadd_us_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: dpadd.us.d
Builtin: __builtin_msa2_dpadd_us_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:116
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i64[0] = a.i64[0] + b.u32[0] * c.i32[0] + b.u32[1] * c.i32[1];
dst.i64[1] = a.i64[1] + b.u32[2] * c.i32[2] + b.u32[3] * c.i32[3];
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
return (__m128i) __builtin_msa2_dpadd_us_d ((v2u64) a, (v4u32) b, (v4i32) c);
```

## __m128i __msa2_dpadd_us_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_dpadd_us_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: dpadd.us.h
Builtin: __builtin_msa2_dpadd_us_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:104
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
return (__m128i) __builtin_msa2_dpadd_us_h ((v8u16) a, (v16u8) b, (v16i8) c);
```

## __m128i __msa2_dpadd_us_q (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_dpadd_us_q (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: dpadd.us.q
Builtin: __builtin_msa2_dpadd_us_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:122
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i128[0] = a.i128[0] + b.u64[0] * c.i64[0] + b.u64[1] * c.i64[1];
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
return (__m128i) __builtin_msa2_dpadd_us_q ((v2u64) a, (v2u64) b, (v2i64) c);
```

## __m128i __msa2_dpadd_us_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_dpadd_us_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: dpadd.us.w
Builtin: __builtin_msa2_dpadd_us_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:110
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i32[0] = a.i32[0] + b.u16[0] * c.i16[0] + b.u16[1] * c.i16[1];
dst.i32[1] = a.i32[1] + b.u16[2] * c.i16[2] + b.u16[3] * c.i16[3];
dst.i32[2] = a.i32[2] + b.u16[4] * c.i16[4] + b.u16[5] * c.i16[5];
dst.i32[3] = a.i32[3] + b.u16[6] * c.i16[6] + b.u16[7] * c.i16[7];
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
return (__m128i) __builtin_msa2_dpadd_us_w ((v4u32) a, (v8u16) b, (v8i16) c);
```

## __m128i __msa2_dpsub_s_q (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_dpsub_s_q (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: dpsub.s.q
Builtin: __builtin_msa2_dpsub_s_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:128
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i128[0] = a.i128[0] - b.i64[0] * c.i64[0] - b.i64[1] * c.i64[1];
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
return (__m128i) __builtin_msa2_dpsub_s_q ((v2i64) a, (v2i64) b, (v2i64) c);
```

## __m128i __msa2_dpsub_u_q (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_dpsub_u_q (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: dpsub.u.q
Builtin: __builtin_msa2_dpsub_u_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:134
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u128[0] = a.u128[0] - b.u64[0] * c.u64[0] - b.u64[1] * c.u64[1];
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
return (__m128i) __builtin_msa2_dpsub_u_q ((v2u64) a, (v2u64) b, (v2u64) c);
```

## __m128i __msa2_hadd_s_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_hadd_s_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: hadd.s.q
Builtin: __builtin_msa2_hadd_s_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:140
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 1 x i128 lanes.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) + widen(b.i64[0]);
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
return (__m128i) __builtin_msa2_hadd_s_q ((v2i64) a, (v2i64) b);
```

## __m128i __msa2_hadd_u_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_hadd_u_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: hadd.u.q
Builtin: __builtin_msa2_hadd_u_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:146
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 1 x u128 lanes.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.u64[0]);
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
return (__m128i) __builtin_msa2_hadd_u_q ((v2u64) a, (v2u64) b);
```

## __m128i __msa2_hsub_s_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_hsub_s_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: hsub.s.q
Builtin: __builtin_msa2_hsub_s_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:152
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 1 x i128 lanes.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) - widen(b.i64[0]);
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
return (__m128i) __builtin_msa2_hsub_s_q ((v2i64) a, (v2i64) b);
```

## __m128i __msa2_hsub_u_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_hsub_u_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: hsub.u.q
Builtin: __builtin_msa2_hsub_u_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:158
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 1 x u128 lanes.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) - widen(b.u64[0]);
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
return (__m128i) __builtin_msa2_hsub_u_q ((v2u64) a, (v2u64) b);
```

## __m128i __msa2_muhv_s_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_muhv_s_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: muhv.s.d
Builtin: __builtin_msa2_muhv_s_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:479
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
return (__m128i)__builtin_msa2_muhv_s_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_muhv_u_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_muhv_u_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: muhv.u.d
Builtin: __builtin_msa2_muhv_u_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:500
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
return (__m128i)__builtin_msa2_muhv_u_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_muhv_us_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_muhv_us_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: muhv.us.d
Builtin: __builtin_msa2_muhv_us_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:521
```

### Description

Multiply unsigned/signed mixed integer lanes and keep the upper half of each product.

### Operation

```c
dst.u64[0] = upper_64_bits(a.u64[0] * b.i64[0]);
dst.u64[1] = upper_64_bits(a.u64[1] * b.i64[1]);
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
return (__m128i)__builtin_msa2_muhv_us_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_sad_adj2_s_acc_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_sad_adj2_s_acc_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: sad.adj2.s.acc.w2x.b
Builtin: __builtin_msa2_sad_adj2_s_acc_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:667
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
return (__m128i)__builtin_msa2_sad_adj2_s_acc_w2x_b((v8i16) a, (v16i8) b, (v16i8) c);
```

## __m128i __msa2_sad_adj2_s_acc_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_sad_adj2_s_acc_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: sad.adj2.s.acc.w2x.h
Builtin: __builtin_msa2_sad_adj2_s_acc_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:687
```

### Description

Compute sums of absolute differences for adjacent signed lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.i32[0] = a.i32[0] + abs(widen(b.i16[0]) - widen(c.i16[0])) + abs(widen(b.i16[1]) - widen(c.i16[1]));
dst.i32[1] = a.i32[1] + abs(widen(b.i16[2]) - widen(c.i16[2])) + abs(widen(b.i16[3]) - widen(c.i16[3]));
dst.i32[2] = a.i32[2] + abs(widen(b.i16[4]) - widen(c.i16[4])) + abs(widen(b.i16[5]) - widen(c.i16[5]));
dst.i32[3] = a.i32[3] + abs(widen(b.i16[6]) - widen(c.i16[6])) + abs(widen(b.i16[7]) - widen(c.i16[7]));
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
return (__m128i)__builtin_msa2_sad_adj2_s_acc_w2x_h((v4i32) a, (v8i16) b, (v8i16) c);
```

## __m128i __msa2_sad_adj2_s_acc_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_sad_adj2_s_acc_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: sad.adj2.s.acc.w2x.w
Builtin: __builtin_msa2_sad_adj2_s_acc_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:707
```

### Description

Compute sums of absolute differences for adjacent signed lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.i64[0] = a.i64[0] + abs(widen(b.i32[0]) - widen(c.i32[0])) + abs(widen(b.i32[1]) - widen(c.i32[1]));
dst.i64[1] = a.i64[1] + abs(widen(b.i32[2]) - widen(c.i32[2])) + abs(widen(b.i32[3]) - widen(c.i32[3]));
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
return (__m128i)__builtin_msa2_sad_adj2_s_acc_w2x_w((v2i64) a, (v4i32) b, (v4i32) c);
```

## __m128i __msa2_sad_adj2_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.s.w2x.b
Builtin: __builtin_msa2_sad_adj2_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:542
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
return (__m128i)__builtin_msa2_sad_adj2_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_sad_adj2_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.s.w2x.h
Builtin: __builtin_msa2_sad_adj2_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:563
```

### Description

Compute sums of absolute differences for adjacent signed lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.i32[0] = abs(widen(a.i16[0]) - widen(b.i16[0])) + abs(widen(a.i16[1]) - widen(b.i16[1]));
dst.i32[1] = abs(widen(a.i16[2]) - widen(b.i16[2])) + abs(widen(a.i16[3]) - widen(b.i16[3]));
dst.i32[2] = abs(widen(a.i16[4]) - widen(b.i16[4])) + abs(widen(a.i16[5]) - widen(b.i16[5]));
dst.i32[3] = abs(widen(a.i16[6]) - widen(b.i16[6])) + abs(widen(a.i16[7]) - widen(b.i16[7]));
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
return (__m128i)__builtin_msa2_sad_adj2_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_sad_adj2_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.s.w2x.w
Builtin: __builtin_msa2_sad_adj2_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:584
```

### Description

Compute sums of absolute differences for adjacent signed lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.i64[0] = abs(widen(a.i32[0]) - widen(b.i32[0])) + abs(widen(a.i32[1]) - widen(b.i32[1]));
dst.i64[1] = abs(widen(a.i32[2]) - widen(b.i32[2])) + abs(widen(a.i32[3]) - widen(b.i32[3]));
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
return (__m128i)__builtin_msa2_sad_adj2_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_sad_adj2_u_acc_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_sad_adj2_u_acc_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: sad.adj2.u.acc.w2x.b
Builtin: __builtin_msa2_sad_adj2_u_acc_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:727
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
return (__m128i)__builtin_msa2_sad_adj2_u_acc_w2x_b((v8u16) a, (v16u8) b, (v16u8) c);
```

## __m128i __msa2_sad_adj2_u_acc_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_sad_adj2_u_acc_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: sad.adj2.u.acc.w2x.h
Builtin: __builtin_msa2_sad_adj2_u_acc_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:747
```

### Description

Compute sums of absolute differences for adjacent unsigned lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.u32[0] = a.u32[0] + abs(widen(b.u16[0]) - widen(c.u16[0])) + abs(widen(b.u16[1]) - widen(c.u16[1]));
dst.u32[1] = a.u32[1] + abs(widen(b.u16[2]) - widen(c.u16[2])) + abs(widen(b.u16[3]) - widen(c.u16[3]));
dst.u32[2] = a.u32[2] + abs(widen(b.u16[4]) - widen(c.u16[4])) + abs(widen(b.u16[5]) - widen(c.u16[5]));
dst.u32[3] = a.u32[3] + abs(widen(b.u16[6]) - widen(c.u16[6])) + abs(widen(b.u16[7]) - widen(c.u16[7]));
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
return (__m128i)__builtin_msa2_sad_adj2_u_acc_w2x_h((v4u32) a, (v8u16) b, (v8u16) c);
```

## __m128i __msa2_sad_adj2_u_acc_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_sad_adj2_u_acc_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: sad.adj2.u.acc.w2x.w
Builtin: __builtin_msa2_sad_adj2_u_acc_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:767
```

### Description

Compute sums of absolute differences for adjacent unsigned lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.u64[0] = a.u64[0] + abs(widen(b.u32[0]) - widen(c.u32[0])) + abs(widen(b.u32[1]) - widen(c.u32[1]));
dst.u64[1] = a.u64[1] + abs(widen(b.u32[2]) - widen(c.u32[2])) + abs(widen(b.u32[3]) - widen(c.u32[3]));
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
return (__m128i)__builtin_msa2_sad_adj2_u_acc_w2x_w((v2u64) a, (v4u32) b, (v4u32) c);
```

## __m128i __msa2_sad_adj2_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.u.w2x.b
Builtin: __builtin_msa2_sad_adj2_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:605
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
return (__m128i)__builtin_msa2_sad_adj2_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_sad_adj2_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.u.w2x.h
Builtin: __builtin_msa2_sad_adj2_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:626
```

### Description

Compute sums of absolute differences for adjacent unsigned lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.u32[0] = abs(widen(a.u16[0]) - widen(b.u16[0])) + abs(widen(a.u16[1]) - widen(b.u16[1]));
dst.u32[1] = abs(widen(a.u16[2]) - widen(b.u16[2])) + abs(widen(a.u16[3]) - widen(b.u16[3]));
dst.u32[2] = abs(widen(a.u16[4]) - widen(b.u16[4])) + abs(widen(a.u16[5]) - widen(b.u16[5]));
dst.u32[3] = abs(widen(a.u16[6]) - widen(b.u16[6])) + abs(widen(a.u16[7]) - widen(b.u16[7]));
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
return (__m128i)__builtin_msa2_sad_adj2_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_sad_adj2_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.u.w2x.w
Builtin: __builtin_msa2_sad_adj2_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:647
```

### Description

Compute sums of absolute differences for adjacent unsigned lanes and write widened results. This is commonly used in image/video matching and distance calculations.

### Operation

```c
dst.u64[0] = abs(widen(a.u32[0]) - widen(b.u32[0])) + abs(widen(a.u32[1]) - widen(b.u32[1]));
dst.u64[1] = abs(widen(a.u32[2]) - widen(b.u32[2])) + abs(widen(a.u32[3]) - widen(b.u32[3]));
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
return (__m128i)__builtin_msa2_sad_adj2_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_subssu_u_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_subssu_u_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: subssu.u.b
Builtin: __builtin_msa2_subssu_u_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:362
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 16 x u8 lanes, clamping overflow instead of wrapping.

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
return (__m128i) __builtin_msa2_subssu_u_b ((v16i8) a, (v16u8) b);
```

## __m128i __msa2_subssu_u_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_subssu_u_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: subssu.u.d
Builtin: __builtin_msa2_subssu_u_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:380
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 2 x u64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u64[0] = unsigned_saturate(a.i64[0] - b.u64[0], 64);
dst.u64[1] = unsigned_saturate(a.i64[1] - b.u64[1], 64);
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
return (__m128i) __builtin_msa2_subssu_u_d ((v2i64) a, (v2u64) b);
```

## __m128i __msa2_subssu_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_subssu_u_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: subssu.u.h
Builtin: __builtin_msa2_subssu_u_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:368
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 8 x u16 lanes, clamping overflow instead of wrapping.

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
return (__m128i) __builtin_msa2_subssu_u_h ((v8i16) a, (v8u16) b);
```

## __m128i __msa2_subssu_u_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_subssu_u_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: subssu.u.w
Builtin: __builtin_msa2_subssu_u_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:374
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 4 x u32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u32[0] = unsigned_saturate(a.i32[0] - b.u32[0], 32);
dst.u32[1] = unsigned_saturate(a.i32[1] - b.u32[1], 32);
dst.u32[2] = unsigned_saturate(a.i32[2] - b.u32[2], 32);
dst.u32[3] = unsigned_saturate(a.i32[3] - b.u32[3], 32);
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
return (__m128i) __builtin_msa2_subssu_u_w ((v4i32) a, (v4u32) b);
```

## __m128i __msa2_vadd_el0_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.q
Builtin: __builtin_msa2_vadd_el0_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:386
```

### Description

Add modular integer lanes of `a` and `b` on 1 x u128 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u128[0] = a.i64[0] + b.i64[0];
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
return (__m128i) __builtin_msa2_vadd_el0_q ((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vadd_el0_s_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_s_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.s.wx.d
Builtin: __builtin_msa2_vadd_el0_s_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:830
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) + widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vadd_el0_s_wx_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vadd_el0_s_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_s_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.s.wx.h
Builtin: __builtin_msa2_vadd_el0_s_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:788
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[1] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[2] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[3] = widen(a.i16[0]) + widen(b.i16[0]);
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
return (__m128i)__builtin_msa2_vadd_el0_s_wx_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vadd_el0_s_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_s_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.s.wx.w
Builtin: __builtin_msa2_vadd_el0_s_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:809
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) + widen(b.i32[0]);
dst.i64[1] = widen(a.i32[0]) + widen(b.i32[0]);
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
return (__m128i)__builtin_msa2_vadd_el0_s_wx_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vadd_el0_u_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_u_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.u.wx.d
Builtin: __builtin_msa2_vadd_el0_u_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:893
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.u64[0]);
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
return (__m128i)__builtin_msa2_vadd_el0_u_wx_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vadd_el0_u_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_u_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.u.wx.h
Builtin: __builtin_msa2_vadd_el0_u_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:851
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[1] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[2] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[3] = widen(a.u16[0]) + widen(b.u16[0]);
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
return (__m128i)__builtin_msa2_vadd_el0_u_wx_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vadd_el0_u_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_u_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.u.wx.w
Builtin: __builtin_msa2_vadd_el0_u_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:872
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) + widen(b.u32[0]);
dst.u64[1] = widen(a.u32[0]) + widen(b.u32[0]);
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
return (__m128i)__builtin_msa2_vadd_el0_u_wx_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vadd_el0_us_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_us_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.us.wx.d
Builtin: __builtin_msa2_vadd_el0_us_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:956
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vadd_el0_us_wx_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vadd_el0_us_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_us_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.us.wx.h
Builtin: __builtin_msa2_vadd_el0_us_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:914
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[1] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[2] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[3] = widen(a.u16[0]) + widen(b.i16[0]);
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
return (__m128i)__builtin_msa2_vadd_el0_us_wx_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vadd_el0_us_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_us_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.us.wx.w
Builtin: __builtin_msa2_vadd_el0_us_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:935
```

### Description

Widen lane 0 source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) + widen(b.i32[0]);
dst.u64[1] = widen(a.u32[0]) + widen(b.i32[0]);
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
return (__m128i)__builtin_msa2_vadd_el0_us_wx_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vadd_even_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.s.w2x.b
Builtin: __builtin_msa2_vadd_even_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:977
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
return (__m128i)__builtin_msa2_vadd_even_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vadd_even_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.s.w2x.d
Builtin: __builtin_msa2_vadd_even_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1040
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) + widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vadd_even_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vadd_even_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.s.w2x.h
Builtin: __builtin_msa2_vadd_even_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:998
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[1] = widen(a.i16[2]) + widen(b.i16[2]);
dst.i32[2] = widen(a.i16[4]) + widen(b.i16[4]);
dst.i32[3] = widen(a.i16[6]) + widen(b.i16[6]);
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
return (__m128i)__builtin_msa2_vadd_even_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vadd_even_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.s.w2x.w
Builtin: __builtin_msa2_vadd_even_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1019
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) + widen(b.i32[0]);
dst.i64[1] = widen(a.i32[2]) + widen(b.i32[2]);
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
return (__m128i)__builtin_msa2_vadd_even_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vadd_even_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.u.w2x.b
Builtin: __builtin_msa2_vadd_even_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1061
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
return (__m128i)__builtin_msa2_vadd_even_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vadd_even_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.u.w2x.d
Builtin: __builtin_msa2_vadd_even_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1124
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.u64[0]);
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
return (__m128i)__builtin_msa2_vadd_even_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vadd_even_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.u.w2x.h
Builtin: __builtin_msa2_vadd_even_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1082
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[1] = widen(a.u16[2]) + widen(b.u16[2]);
dst.u32[2] = widen(a.u16[4]) + widen(b.u16[4]);
dst.u32[3] = widen(a.u16[6]) + widen(b.u16[6]);
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
return (__m128i)__builtin_msa2_vadd_even_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vadd_even_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.u.w2x.w
Builtin: __builtin_msa2_vadd_even_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1103
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) + widen(b.u32[0]);
dst.u64[1] = widen(a.u32[2]) + widen(b.u32[2]);
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
return (__m128i)__builtin_msa2_vadd_even_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vadd_even_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.us.w2x.b
Builtin: __builtin_msa2_vadd_even_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1145
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
return (__m128i)__builtin_msa2_vadd_even_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vadd_even_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.us.w2x.d
Builtin: __builtin_msa2_vadd_even_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1208
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vadd_even_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vadd_even_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.us.w2x.h
Builtin: __builtin_msa2_vadd_even_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1166
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[1] = widen(a.u16[2]) + widen(b.i16[2]);
dst.u32[2] = widen(a.u16[4]) + widen(b.i16[4]);
dst.u32[3] = widen(a.u16[6]) + widen(b.i16[6]);
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
return (__m128i)__builtin_msa2_vadd_even_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vadd_even_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.us.w2x.w
Builtin: __builtin_msa2_vadd_even_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1187
```

### Description

Widen even-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) + widen(b.i32[0]);
dst.u64[1] = widen(a.u32[2]) + widen(b.i32[2]);
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
return (__m128i)__builtin_msa2_vadd_even_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vadd_hi_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.s.w2x.b
Builtin: __builtin_msa2_vadd_hi_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1733
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[8]) + widen(b.i8[8]);
dst.i16[1] = widen(a.i8[9]) + widen(b.i8[9]);
dst.i16[2] = widen(a.i8[10]) + widen(b.i8[10]);
dst.i16[3] = widen(a.i8[11]) + widen(b.i8[11]);
dst.i16[4] = widen(a.i8[12]) + widen(b.i8[12]);
dst.i16[5] = widen(a.i8[13]) + widen(b.i8[13]);
dst.i16[6] = widen(a.i8[14]) + widen(b.i8[14]);
dst.i16[7] = widen(a.i8[15]) + widen(b.i8[15]);
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
return (__m128i)__builtin_msa2_vadd_hi_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vadd_hi_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.s.w2x.d
Builtin: __builtin_msa2_vadd_hi_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1796
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[1]) + widen(b.i64[1]);
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
return (__m128i)__builtin_msa2_vadd_hi_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vadd_hi_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.s.w2x.h
Builtin: __builtin_msa2_vadd_hi_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1754
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[4]) + widen(b.i16[4]);
dst.i32[1] = widen(a.i16[5]) + widen(b.i16[5]);
dst.i32[2] = widen(a.i16[6]) + widen(b.i16[6]);
dst.i32[3] = widen(a.i16[7]) + widen(b.i16[7]);
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
return (__m128i)__builtin_msa2_vadd_hi_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vadd_hi_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.s.w2x.w
Builtin: __builtin_msa2_vadd_hi_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1775
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[2]) + widen(b.i32[2]);
dst.i64[1] = widen(a.i32[3]) + widen(b.i32[3]);
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
return (__m128i)__builtin_msa2_vadd_hi_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vadd_hi_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.u.w2x.b
Builtin: __builtin_msa2_vadd_hi_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1817
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[8]) + widen(b.u8[8]);
dst.u16[1] = widen(a.u8[9]) + widen(b.u8[9]);
dst.u16[2] = widen(a.u8[10]) + widen(b.u8[10]);
dst.u16[3] = widen(a.u8[11]) + widen(b.u8[11]);
dst.u16[4] = widen(a.u8[12]) + widen(b.u8[12]);
dst.u16[5] = widen(a.u8[13]) + widen(b.u8[13]);
dst.u16[6] = widen(a.u8[14]) + widen(b.u8[14]);
dst.u16[7] = widen(a.u8[15]) + widen(b.u8[15]);
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
return (__m128i)__builtin_msa2_vadd_hi_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vadd_hi_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.u.w2x.d
Builtin: __builtin_msa2_vadd_hi_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1880
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) + widen(b.u64[1]);
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
return (__m128i)__builtin_msa2_vadd_hi_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vadd_hi_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.u.w2x.h
Builtin: __builtin_msa2_vadd_hi_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1838
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[4]) + widen(b.u16[4]);
dst.u32[1] = widen(a.u16[5]) + widen(b.u16[5]);
dst.u32[2] = widen(a.u16[6]) + widen(b.u16[6]);
dst.u32[3] = widen(a.u16[7]) + widen(b.u16[7]);
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
return (__m128i)__builtin_msa2_vadd_hi_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vadd_hi_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.u.w2x.w
Builtin: __builtin_msa2_vadd_hi_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1859
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[2]) + widen(b.u32[2]);
dst.u64[1] = widen(a.u32[3]) + widen(b.u32[3]);
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
return (__m128i)__builtin_msa2_vadd_hi_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vadd_hi_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.us.w2x.b
Builtin: __builtin_msa2_vadd_hi_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1901
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[8]) + widen(b.i8[8]);
dst.u16[1] = widen(a.u8[9]) + widen(b.i8[9]);
dst.u16[2] = widen(a.u8[10]) + widen(b.i8[10]);
dst.u16[3] = widen(a.u8[11]) + widen(b.i8[11]);
dst.u16[4] = widen(a.u8[12]) + widen(b.i8[12]);
dst.u16[5] = widen(a.u8[13]) + widen(b.i8[13]);
dst.u16[6] = widen(a.u8[14]) + widen(b.i8[14]);
dst.u16[7] = widen(a.u8[15]) + widen(b.i8[15]);
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
return (__m128i)__builtin_msa2_vadd_hi_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vadd_hi_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.us.w2x.d
Builtin: __builtin_msa2_vadd_hi_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1964
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) + widen(b.i64[1]);
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
return (__m128i)__builtin_msa2_vadd_hi_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vadd_hi_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.us.w2x.h
Builtin: __builtin_msa2_vadd_hi_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1922
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[4]) + widen(b.i16[4]);
dst.u32[1] = widen(a.u16[5]) + widen(b.i16[5]);
dst.u32[2] = widen(a.u16[6]) + widen(b.i16[6]);
dst.u32[3] = widen(a.u16[7]) + widen(b.i16[7]);
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
return (__m128i)__builtin_msa2_vadd_hi_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vadd_hi_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.us.w2x.w
Builtin: __builtin_msa2_vadd_hi_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1943
```

### Description

Widen upper-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[2]) + widen(b.i32[2]);
dst.u64[1] = widen(a.u32[3]) + widen(b.i32[3]);
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
return (__m128i)__builtin_msa2_vadd_hi_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vadd_lo_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.s.w2x.b
Builtin: __builtin_msa2_vadd_lo_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1481
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
return (__m128i)__builtin_msa2_vadd_lo_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vadd_lo_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.s.w2x.d
Builtin: __builtin_msa2_vadd_lo_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1544
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) + widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vadd_lo_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vadd_lo_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.s.w2x.h
Builtin: __builtin_msa2_vadd_lo_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1502
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) + widen(b.i16[0]);
dst.i32[1] = widen(a.i16[1]) + widen(b.i16[1]);
dst.i32[2] = widen(a.i16[2]) + widen(b.i16[2]);
dst.i32[3] = widen(a.i16[3]) + widen(b.i16[3]);
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
return (__m128i)__builtin_msa2_vadd_lo_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vadd_lo_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.s.w2x.w
Builtin: __builtin_msa2_vadd_lo_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1523
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) + widen(b.i32[0]);
dst.i64[1] = widen(a.i32[1]) + widen(b.i32[1]);
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
return (__m128i)__builtin_msa2_vadd_lo_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vadd_lo_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.u.w2x.b
Builtin: __builtin_msa2_vadd_lo_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1565
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
return (__m128i)__builtin_msa2_vadd_lo_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vadd_lo_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.u.w2x.d
Builtin: __builtin_msa2_vadd_lo_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1628
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.u64[0]);
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
return (__m128i)__builtin_msa2_vadd_lo_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vadd_lo_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.u.w2x.h
Builtin: __builtin_msa2_vadd_lo_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1586
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) + widen(b.u16[0]);
dst.u32[1] = widen(a.u16[1]) + widen(b.u16[1]);
dst.u32[2] = widen(a.u16[2]) + widen(b.u16[2]);
dst.u32[3] = widen(a.u16[3]) + widen(b.u16[3]);
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
return (__m128i)__builtin_msa2_vadd_lo_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vadd_lo_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.u.w2x.w
Builtin: __builtin_msa2_vadd_lo_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1607
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) + widen(b.u32[0]);
dst.u64[1] = widen(a.u32[1]) + widen(b.u32[1]);
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
return (__m128i)__builtin_msa2_vadd_lo_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vadd_lo_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.us.w2x.b
Builtin: __builtin_msa2_vadd_lo_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1649
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
return (__m128i)__builtin_msa2_vadd_lo_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vadd_lo_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.us.w2x.d
Builtin: __builtin_msa2_vadd_lo_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1712
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) + widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vadd_lo_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vadd_lo_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.us.w2x.h
Builtin: __builtin_msa2_vadd_lo_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1670
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) + widen(b.i16[0]);
dst.u32[1] = widen(a.u16[1]) + widen(b.i16[1]);
dst.u32[2] = widen(a.u16[2]) + widen(b.i16[2]);
dst.u32[3] = widen(a.u16[3]) + widen(b.i16[3]);
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
return (__m128i)__builtin_msa2_vadd_lo_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vadd_lo_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.us.w2x.w
Builtin: __builtin_msa2_vadd_lo_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1691
```

### Description

Widen lower-half source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) + widen(b.i32[0]);
dst.u64[1] = widen(a.u32[1]) + widen(b.i32[1]);
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
return (__m128i)__builtin_msa2_vadd_lo_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vadd_odd_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.s.w2x.b
Builtin: __builtin_msa2_vadd_odd_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1229
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
return (__m128i)__builtin_msa2_vadd_odd_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vadd_odd_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.s.w2x.d
Builtin: __builtin_msa2_vadd_odd_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1292
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[1]) + widen(b.i64[1]);
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
return (__m128i)__builtin_msa2_vadd_odd_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vadd_odd_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.s.w2x.h
Builtin: __builtin_msa2_vadd_odd_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1250
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[1]) + widen(b.i16[1]);
dst.i32[1] = widen(a.i16[3]) + widen(b.i16[3]);
dst.i32[2] = widen(a.i16[5]) + widen(b.i16[5]);
dst.i32[3] = widen(a.i16[7]) + widen(b.i16[7]);
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
return (__m128i)__builtin_msa2_vadd_odd_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vadd_odd_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.s.w2x.w
Builtin: __builtin_msa2_vadd_odd_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1271
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[1]) + widen(b.i32[1]);
dst.i64[1] = widen(a.i32[3]) + widen(b.i32[3]);
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
return (__m128i)__builtin_msa2_vadd_odd_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vadd_odd_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.u.w2x.b
Builtin: __builtin_msa2_vadd_odd_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1313
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
return (__m128i)__builtin_msa2_vadd_odd_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vadd_odd_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.u.w2x.d
Builtin: __builtin_msa2_vadd_odd_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1376
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) + widen(b.u64[1]);
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
return (__m128i)__builtin_msa2_vadd_odd_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vadd_odd_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.u.w2x.h
Builtin: __builtin_msa2_vadd_odd_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1334
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[1]) + widen(b.u16[1]);
dst.u32[1] = widen(a.u16[3]) + widen(b.u16[3]);
dst.u32[2] = widen(a.u16[5]) + widen(b.u16[5]);
dst.u32[3] = widen(a.u16[7]) + widen(b.u16[7]);
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
return (__m128i)__builtin_msa2_vadd_odd_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vadd_odd_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.u.w2x.w
Builtin: __builtin_msa2_vadd_odd_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1355
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[1]) + widen(b.u32[1]);
dst.u64[1] = widen(a.u32[3]) + widen(b.u32[3]);
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
return (__m128i)__builtin_msa2_vadd_odd_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vadd_odd_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.us.w2x.b
Builtin: __builtin_msa2_vadd_odd_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1397
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
return (__m128i)__builtin_msa2_vadd_odd_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vadd_odd_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.us.w2x.d
Builtin: __builtin_msa2_vadd_odd_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1460
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) + widen(b.i64[1]);
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
return (__m128i)__builtin_msa2_vadd_odd_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vadd_odd_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.us.w2x.h
Builtin: __builtin_msa2_vadd_odd_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1418
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[1]) + widen(b.i16[1]);
dst.u32[1] = widen(a.u16[3]) + widen(b.i16[3]);
dst.u32[2] = widen(a.u16[5]) + widen(b.i16[5]);
dst.u32[3] = widen(a.u16[7]) + widen(b.i16[7]);
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
return (__m128i)__builtin_msa2_vadd_odd_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vadd_odd_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.us.w2x.w
Builtin: __builtin_msa2_vadd_odd_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1439
```

### Description

Widen odd-numbered source lanes, add them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[1]) + widen(b.i32[1]);
dst.u64[1] = widen(a.u32[3]) + widen(b.i32[3]);
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
return (__m128i)__builtin_msa2_vadd_odd_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmuhp_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmuhp_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmuhp.d
Builtin: __builtin_msa2_vmuhp_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2006
```

### Description

Multiply modular integer lanes and keep the upper half of each product.

### Operation

```c
dst.u64[0] = high_part(vmuhp_lane(a.u64[0], b.u64[0]));
dst.u64[1] = high_part(vmuhp_lane(a.u64[1], b.u64[1]));
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
return (__m128i)__builtin_msa2_vmuhp_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmuhp_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmuhp_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmuhp.w
Builtin: __builtin_msa2_vmuhp_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1985
```

### Description

Multiply modular integer lanes and keep the upper half of each product.

### Operation

```c
dst.u32[0] = high_part(vmuhp_lane(a.u32[0], b.u32[0]));
dst.u32[1] = high_part(vmuhp_lane(a.u32[1], b.u32[1]));
dst.u32[2] = high_part(vmuhp_lane(a.u32[2], b.u32[2]));
dst.u32[3] = high_part(vmuhp_lane(a.u32[3], b.u32[3]));
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
return (__m128i)__builtin_msa2_vmuhp_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmuhp_xacc_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmuhp_xacc_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmuhp.xacc.d
Builtin: __builtin_msa2_vmuhp_xacc_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2088
```

### Description

Compute the Loongson MSA2 high-part packed multiply and combine the result with accumulator `a`. This supports multiply-accumulate style integer kernels.

### Operation

```c
dst.u64[0] = a.u64[0] + high_part(vmuhp_lane(b.u64[0], c.u64[0]));
dst.u64[1] = a.u64[1] + high_part(vmuhp_lane(b.u64[1], c.u64[1]));
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
return (__m128i)__builtin_msa2_vmuhp_xacc_d((v2i64) a, (v2i64) b, (v2i64) c);
```

## __m128i __msa2_vmuhp_xacc_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmuhp_xacc_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmuhp.xacc.w
Builtin: __builtin_msa2_vmuhp_xacc_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2068
```

### Description

Compute the Loongson MSA2 high-part packed multiply and combine the result with accumulator `a`. This supports multiply-accumulate style integer kernels.

### Operation

```c
dst.u32[0] = a.u32[0] + high_part(vmuhp_lane(b.u32[0], c.u32[0]));
dst.u32[1] = a.u32[1] + high_part(vmuhp_lane(b.u32[1], c.u32[1]));
dst.u32[2] = a.u32[2] + high_part(vmuhp_lane(b.u32[2], c.u32[2]));
dst.u32[3] = a.u32[3] + high_part(vmuhp_lane(b.u32[3], c.u32[3]));
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
return (__m128i)__builtin_msa2_vmuhp_xacc_w((v4i32) a, (v4i32) b, (v4i32) c);
```

## __m128i __msa2_vmulp_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmulp_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmulp.d
Builtin: __builtin_msa2_vmulp_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2048
```

### Description

Compute the Loongson MSA2 packed multiply. This supports multiply-accumulate style integer kernels.

### Operation

```c
dst.u64[0] = vmulp_lane(a.u64[0], b.u64[0]);
dst.u64[1] = vmulp_lane(a.u64[1], b.u64[1]);
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
return (__m128i)__builtin_msa2_vmulp_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmulp_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmulp_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmulp.w
Builtin: __builtin_msa2_vmulp_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2027
```

### Description

Compute the Loongson MSA2 packed multiply. This supports multiply-accumulate style integer kernels.

### Operation

```c
dst.u32[0] = vmulp_lane(a.u32[0], b.u32[0]);
dst.u32[1] = vmulp_lane(a.u32[1], b.u32[1]);
dst.u32[2] = vmulp_lane(a.u32[2], b.u32[2]);
dst.u32[3] = vmulp_lane(a.u32[3], b.u32[3]);
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
return (__m128i)__builtin_msa2_vmulp_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmulp_xacc_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmulp_xacc_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmulp.xacc.d
Builtin: __builtin_msa2_vmulp_xacc_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2128
```

### Description

Compute the Loongson MSA2 packed multiply and combine the result with accumulator `a`. This supports multiply-accumulate style integer kernels.

### Operation

```c
dst.u64[0] = a.u64[0] + vmulp_lane(b.u64[0], c.u64[0]);
dst.u64[1] = a.u64[1] + vmulp_lane(b.u64[1], c.u64[1]);
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
return (__m128i)__builtin_msa2_vmulp_xacc_d((v2i64) a, (v2i64) b, (v2i64) c);
```

## __m128i __msa2_vmulp_xacc_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmulp_xacc_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmulp.xacc.w
Builtin: __builtin_msa2_vmulp_xacc_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2108
```

### Description

Compute the Loongson MSA2 packed multiply and combine the result with accumulator `a`. This supports multiply-accumulate style integer kernels.

### Operation

```c
dst.u32[0] = a.u32[0] + vmulp_lane(b.u32[0], c.u32[0]);
dst.u32[1] = a.u32[1] + vmulp_lane(b.u32[1], c.u32[1]);
dst.u32[2] = a.u32[2] + vmulp_lane(b.u32[2], c.u32[2]);
dst.u32[3] = a.u32[3] + vmulp_lane(b.u32[3], c.u32[3]);
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
return (__m128i)__builtin_msa2_vmulp_xacc_w((v4i32) a, (v4i32) b, (v4i32) c);
```

## __m128i __msa2_vmult_el0_acc_s_wx_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_s_wx_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.el0.acc.s.wx.d
Builtin: __builtin_msa2_vmult_el0_acc_s_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2377
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i64[0]) * widen(c.i64[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_acc_s_wx_d((v2i64) a, (v2i64) b, (v2i64) c);
```

## __m128i __msa2_vmult_el0_acc_s_wx_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_s_wx_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.el0.acc.s.wx.h
Builtin: __builtin_msa2_vmult_el0_acc_s_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2337
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = a.i32[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[1] = a.i32[1] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[2] = a.i32[2] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[3] = a.i32[3] + widen(b.i16[0]) * widen(c.i16[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_acc_s_wx_h((v2i64) a, (v8i16) b, (v8i16) c);
```

## __m128i __msa2_vmult_el0_acc_s_wx_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_s_wx_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.el0.acc.s.wx.w
Builtin: __builtin_msa2_vmult_el0_acc_s_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2357
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i32[0]) * widen(c.i32[0]);
dst.i64[1] = a.i64[1] + widen(b.i32[0]) * widen(c.i32[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_acc_s_wx_w((v2i64) a, (v4i32) b, (v4i32) c);
```

## __m128i __msa2_vmult_el0_acc_u_wx_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_u_wx_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.el0.acc.u.wx.d
Builtin: __builtin_msa2_vmult_el0_acc_u_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2437
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[0]) * widen(c.u64[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_acc_u_wx_d((v2u64) a, (v2u64) b, (v2u64) c);
```

## __m128i __msa2_vmult_el0_acc_u_wx_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_u_wx_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.el0.acc.u.wx.h
Builtin: __builtin_msa2_vmult_el0_acc_u_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2397
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[1] = a.u32[1] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[2] = a.u32[2] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[3] = a.u32[3] + widen(b.u16[0]) * widen(c.u16[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_acc_u_wx_h((v2u64) a, (v8u16) b, (v8u16) c);
```

## __m128i __msa2_vmult_el0_acc_u_wx_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_u_wx_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.el0.acc.u.wx.w
Builtin: __builtin_msa2_vmult_el0_acc_u_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2417
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[0]) * widen(c.u32[0]);
dst.u64[1] = a.u64[1] + widen(b.u32[0]) * widen(c.u32[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_acc_u_wx_w((v2u64) a, (v4u32) b, (v4u32) c);
```

## __m128i __msa2_vmult_el0_acc_us_wx_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_us_wx_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.el0.acc.us.wx.d
Builtin: __builtin_msa2_vmult_el0_acc_us_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2497
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[0]) * widen(c.i64[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_acc_us_wx_d((v2u64) a, (v2u64) b, (v2i64) c);
```

## __m128i __msa2_vmult_el0_acc_us_wx_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_us_wx_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.el0.acc.us.wx.h
Builtin: __builtin_msa2_vmult_el0_acc_us_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2457
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[1] = a.u32[1] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[2] = a.u32[2] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[3] = a.u32[3] + widen(b.u16[0]) * widen(c.i16[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_acc_us_wx_h((v2u64) a, (v8u16) b, (v8i16) c);
```

## __m128i __msa2_vmult_el0_acc_us_wx_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_us_wx_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.el0.acc.us.wx.w
Builtin: __builtin_msa2_vmult_el0_acc_us_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2477
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[0]) * widen(c.i32[0]);
dst.u64[1] = a.u64[1] + widen(b.u32[0]) * widen(c.i32[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_acc_us_wx_w((v2u64) a, (v4u32) b, (v4i32) c);
```

## __m128i __msa2_vmult_el0_s_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_s_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.s.wx.d
Builtin: __builtin_msa2_vmult_el0_s_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2191
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) * widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_s_wx_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_el0_s_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_s_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.s.wx.h
Builtin: __builtin_msa2_vmult_el0_s_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2149
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[1] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[2] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[3] = widen(a.i16[0]) * widen(b.i16[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_s_wx_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_el0_s_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_s_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.s.wx.w
Builtin: __builtin_msa2_vmult_el0_s_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2170
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) * widen(b.i32[0]);
dst.i64[1] = widen(a.i32[0]) * widen(b.i32[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_s_wx_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_el0_u_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_u_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.u.wx.d
Builtin: __builtin_msa2_vmult_el0_u_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2254
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) * widen(b.u64[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_u_wx_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_el0_u_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_u_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.u.wx.h
Builtin: __builtin_msa2_vmult_el0_u_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2212
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[1] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[2] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[3] = widen(a.u16[0]) * widen(b.u16[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_u_wx_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_el0_u_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_u_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.u.wx.w
Builtin: __builtin_msa2_vmult_el0_u_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2233
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) * widen(b.u32[0]);
dst.u64[1] = widen(a.u32[0]) * widen(b.u32[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_u_wx_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_el0_us_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_us_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.us.wx.d
Builtin: __builtin_msa2_vmult_el0_us_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2317
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) * widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_us_wx_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_el0_us_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_us_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.us.wx.h
Builtin: __builtin_msa2_vmult_el0_us_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2275
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[1] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[2] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[3] = widen(a.u16[0]) * widen(b.i16[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_us_wx_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_el0_us_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_us_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.us.wx.w
Builtin: __builtin_msa2_vmult_el0_us_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2296
```

### Description

Widen lane 0 source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) * widen(b.i32[0]);
dst.u64[1] = widen(a.u32[0]) * widen(b.i32[0]);
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
return (__m128i)__builtin_msa2_vmult_el0_us_wx_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_even_acc_s_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_s_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.even.acc.s.w2x.b
Builtin: __builtin_msa2_vmult_even_acc_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3390
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
return (__m128i)__builtin_msa2_vmult_even_acc_s_w2x_b((v8i16) a, (v16i8) b, (v16i8) c);
```

## __m128i __msa2_vmult_even_acc_s_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_s_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.even.acc.s.w2x.d
Builtin: __builtin_msa2_vmult_even_acc_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3450
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i64[0]) * widen(c.i64[0]);
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
return (__m128i)__builtin_msa2_vmult_even_acc_s_w2x_d((v2i64) a, (v2i64) b, (v2i64) c);
```

## __m128i __msa2_vmult_even_acc_s_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_s_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.even.acc.s.w2x.h
Builtin: __builtin_msa2_vmult_even_acc_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3410
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = a.i32[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[1] = a.i32[1] + widen(b.i16[2]) * widen(c.i16[2]);
dst.i32[2] = a.i32[2] + widen(b.i16[4]) * widen(c.i16[4]);
dst.i32[3] = a.i32[3] + widen(b.i16[6]) * widen(c.i16[6]);
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
return (__m128i)__builtin_msa2_vmult_even_acc_s_w2x_h((v4i32) a, (v8i16) b, (v8i16) c);
```

## __m128i __msa2_vmult_even_acc_s_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_s_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.even.acc.s.w2x.w
Builtin: __builtin_msa2_vmult_even_acc_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3430
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i32[0]) * widen(c.i32[0]);
dst.i64[1] = a.i64[1] + widen(b.i32[2]) * widen(c.i32[2]);
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
return (__m128i)__builtin_msa2_vmult_even_acc_s_w2x_w((v2i64) a, (v4i32) b, (v4i32) c);
```

## __m128i __msa2_vmult_even_acc_u_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_u_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.even.acc.u.w2x.b
Builtin: __builtin_msa2_vmult_even_acc_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3470
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
return (__m128i)__builtin_msa2_vmult_even_acc_u_w2x_b((v8u16) a, (v16u8) b, (v16u8) c);
```

## __m128i __msa2_vmult_even_acc_u_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_u_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.even.acc.u.w2x.d
Builtin: __builtin_msa2_vmult_even_acc_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3530
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[0]) * widen(c.u64[0]);
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
return (__m128i)__builtin_msa2_vmult_even_acc_u_w2x_d((v2u64) a, (v2u64) b, (v2u64) c);
```

## __m128i __msa2_vmult_even_acc_u_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_u_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.even.acc.u.w2x.h
Builtin: __builtin_msa2_vmult_even_acc_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3490
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[1] = a.u32[1] + widen(b.u16[2]) * widen(c.u16[2]);
dst.u32[2] = a.u32[2] + widen(b.u16[4]) * widen(c.u16[4]);
dst.u32[3] = a.u32[3] + widen(b.u16[6]) * widen(c.u16[6]);
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
return (__m128i)__builtin_msa2_vmult_even_acc_u_w2x_h((v4u32) a, (v8u16) b, (v8u16) c);
```

## __m128i __msa2_vmult_even_acc_u_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_u_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.even.acc.u.w2x.w
Builtin: __builtin_msa2_vmult_even_acc_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3510
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[0]) * widen(c.u32[0]);
dst.u64[1] = a.u64[1] + widen(b.u32[2]) * widen(c.u32[2]);
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
return (__m128i)__builtin_msa2_vmult_even_acc_u_w2x_w((v2u64) a, (v4u32) b, (v4u32) c);
```

## __m128i __msa2_vmult_even_acc_us_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_us_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.even.acc.us.w2x.b
Builtin: __builtin_msa2_vmult_even_acc_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3550
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
return (__m128i)__builtin_msa2_vmult_even_acc_us_w2x_b((v8u16) a, (v16u8) b, (v16i8) c);
```

## __m128i __msa2_vmult_even_acc_us_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_us_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.even.acc.us.w2x.d
Builtin: __builtin_msa2_vmult_even_acc_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3610
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[0]) * widen(c.i64[0]);
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
return (__m128i)__builtin_msa2_vmult_even_acc_us_w2x_d((v2u64) a, (v2u64) b, (v2i64) c);
```

## __m128i __msa2_vmult_even_acc_us_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_us_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.even.acc.us.w2x.h
Builtin: __builtin_msa2_vmult_even_acc_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3570
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[1] = a.u32[1] + widen(b.u16[2]) * widen(c.i16[2]);
dst.u32[2] = a.u32[2] + widen(b.u16[4]) * widen(c.i16[4]);
dst.u32[3] = a.u32[3] + widen(b.u16[6]) * widen(c.i16[6]);
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
return (__m128i)__builtin_msa2_vmult_even_acc_us_w2x_h((v4u32) a, (v8u16) b, (v8i16) c);
```

## __m128i __msa2_vmult_even_acc_us_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_us_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.even.acc.us.w2x.w
Builtin: __builtin_msa2_vmult_even_acc_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3590
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[0]) * widen(c.i32[0]);
dst.u64[1] = a.u64[1] + widen(b.u32[2]) * widen(c.i32[2]);
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
return (__m128i)__builtin_msa2_vmult_even_acc_us_w2x_w((v2u64) a, (v4u32) b, (v4i32) c);
```

## __m128i __msa2_vmult_even_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.s.w2x.b
Builtin: __builtin_msa2_vmult_even_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2887
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
return (__m128i)__builtin_msa2_vmult_even_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_even_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.s.w2x.d
Builtin: __builtin_msa2_vmult_even_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2950
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) * widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vmult_even_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_even_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.s.w2x.h
Builtin: __builtin_msa2_vmult_even_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2908
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[1] = widen(a.i16[2]) * widen(b.i16[2]);
dst.i32[2] = widen(a.i16[4]) * widen(b.i16[4]);
dst.i32[3] = widen(a.i16[6]) * widen(b.i16[6]);
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
return (__m128i)__builtin_msa2_vmult_even_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_even_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.s.w2x.w
Builtin: __builtin_msa2_vmult_even_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2929
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) * widen(b.i32[0]);
dst.i64[1] = widen(a.i32[2]) * widen(b.i32[2]);
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
return (__m128i)__builtin_msa2_vmult_even_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_even_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.u.w2x.b
Builtin: __builtin_msa2_vmult_even_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2971
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
return (__m128i)__builtin_msa2_vmult_even_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_even_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.u.w2x.d
Builtin: __builtin_msa2_vmult_even_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3034
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) * widen(b.u64[0]);
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
return (__m128i)__builtin_msa2_vmult_even_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_even_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.u.w2x.h
Builtin: __builtin_msa2_vmult_even_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2992
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[1] = widen(a.u16[2]) * widen(b.u16[2]);
dst.u32[2] = widen(a.u16[4]) * widen(b.u16[4]);
dst.u32[3] = widen(a.u16[6]) * widen(b.u16[6]);
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
return (__m128i)__builtin_msa2_vmult_even_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_even_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.u.w2x.w
Builtin: __builtin_msa2_vmult_even_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3013
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) * widen(b.u32[0]);
dst.u64[1] = widen(a.u32[2]) * widen(b.u32[2]);
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
return (__m128i)__builtin_msa2_vmult_even_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_even_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.us.w2x.b
Builtin: __builtin_msa2_vmult_even_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3055
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
return (__m128i)__builtin_msa2_vmult_even_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_even_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.us.w2x.d
Builtin: __builtin_msa2_vmult_even_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3118
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) * widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vmult_even_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_even_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.us.w2x.h
Builtin: __builtin_msa2_vmult_even_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3076
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[1] = widen(a.u16[2]) * widen(b.i16[2]);
dst.u32[2] = widen(a.u16[4]) * widen(b.i16[4]);
dst.u32[3] = widen(a.u16[6]) * widen(b.i16[6]);
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
return (__m128i)__builtin_msa2_vmult_even_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_even_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.us.w2x.w
Builtin: __builtin_msa2_vmult_even_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3097
```

### Description

Widen even-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) * widen(b.i32[0]);
dst.u64[1] = widen(a.u32[2]) * widen(b.i32[2]);
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
return (__m128i)__builtin_msa2_vmult_even_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_hadd_adj4_acc_s_w4x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_s_w4x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.s.w4x.b
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_s_w4x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2706
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = a.i32[0] + widen(b.i8[0]) * widen(c.i8[0]);
dst.i32[1] = a.i32[1] + widen(b.i8[1]) * widen(c.i8[1]);
dst.i32[2] = a.i32[2] + widen(b.i8[2]) * widen(c.i8[2]);
dst.i32[3] = a.i32[3] + widen(b.i8[3]) * widen(c.i8[3]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_s_w4x_b((v4i32) a, (v16i8) b, (v16i8) c);
```

## __m128i __msa2_vmult_hadd_adj4_acc_s_w4x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_s_w4x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.s.w4x.h
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_s_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2726
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i64[1] = a.i64[1] + widen(b.i16[1]) * widen(c.i16[1]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_s_w4x_h((v2i64) a, (v8i16) b, (v8i16) c);
```

## __m128i __msa2_vmult_hadd_adj4_acc_s_w4x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_s_w4x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.s.w4x.w
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_s_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2746
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i32[0]) * widen(c.i32[0]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_s_w4x_w((v2i64) a, (v4i32) b, (v4i32) c);
```

## __m128i __msa2_vmult_hadd_adj4_acc_u_w4x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_u_w4x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.u.w4x.b
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_u_w4x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2766
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u8[0]) * widen(c.u8[0]);
dst.u32[1] = a.u32[1] + widen(b.u8[1]) * widen(c.u8[1]);
dst.u32[2] = a.u32[2] + widen(b.u8[2]) * widen(c.u8[2]);
dst.u32[3] = a.u32[3] + widen(b.u8[3]) * widen(c.u8[3]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_u_w4x_b((v4u32) a, (v16u8) b, (v16u8) c);
```

## __m128i __msa2_vmult_hadd_adj4_acc_u_w4x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_u_w4x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.u.w4x.h
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_u_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2786
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u64[1] = a.u64[1] + widen(b.u16[1]) * widen(c.u16[1]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_u_w4x_h((v2u64) a, (v8u16) b, (v8u16) c);
```

## __m128i __msa2_vmult_hadd_adj4_acc_u_w4x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_u_w4x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.u.w4x.w
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_u_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2806
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u32[0]) * widen(c.u32[0]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_u_w4x_w((v2u64) a, (v4u32) b, (v4u32) c);
```

## __m128i __msa2_vmult_hadd_adj4_acc_us_w4x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_us_w4x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.us.w4x.b
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_us_w4x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2826
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u8[0]) * widen(c.i8[0]);
dst.u32[1] = a.u32[1] + widen(b.u8[1]) * widen(c.i8[1]);
dst.u32[2] = a.u32[2] + widen(b.u8[2]) * widen(c.i8[2]);
dst.u32[3] = a.u32[3] + widen(b.u8[3]) * widen(c.i8[3]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_us_w4x_b((v4u32) a, (v16u8) b, (v16i8) c);
```

## __m128i __msa2_vmult_hadd_adj4_acc_us_w4x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_us_w4x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.us.w4x.h
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_us_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2846
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u64[1] = a.u64[1] + widen(b.u16[1]) * widen(c.i16[1]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_us_w4x_h((v2u64) a, (v8u16) b, (v8i16) c);
```

## __m128i __msa2_vmult_hadd_adj4_acc_us_w4x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_us_w4x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.us.w4x.w
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_us_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2866
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u32[0]) * widen(c.i32[0]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_us_w4x_w((v2u64) a, (v4u32) b, (v4i32) c);
```

## __m128i __msa2_vmult_hadd_adj4_s_w4x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_s_w4x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.s.w4x.b
Builtin: __builtin_msa2_vmult_hadd_adj4_s_w4x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2518
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i8[0]) * widen(b.i8[0]);
dst.i32[1] = widen(a.i8[1]) * widen(b.i8[1]);
dst.i32[2] = widen(a.i8[2]) * widen(b.i8[2]);
dst.i32[3] = widen(a.i8[3]) * widen(b.i8[3]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_s_w4x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_hadd_adj4_s_w4x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_s_w4x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.s.w4x.h
Builtin: __builtin_msa2_vmult_hadd_adj4_s_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2539
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i64[1] = widen(a.i16[1]) * widen(b.i16[1]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_s_w4x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_hadd_adj4_s_w4x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_s_w4x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.s.w4x.w
Builtin: __builtin_msa2_vmult_hadd_adj4_s_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2560
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i32[0]) * widen(b.i32[0]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_s_w4x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_hadd_adj4_u_w4x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_u_w4x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.u.w4x.b
Builtin: __builtin_msa2_vmult_hadd_adj4_u_w4x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2581
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u8[0]) * widen(b.u8[0]);
dst.u32[1] = widen(a.u8[1]) * widen(b.u8[1]);
dst.u32[2] = widen(a.u8[2]) * widen(b.u8[2]);
dst.u32[3] = widen(a.u8[3]) * widen(b.u8[3]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_u_w4x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_hadd_adj4_u_w4x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_u_w4x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.u.w4x.h
Builtin: __builtin_msa2_vmult_hadd_adj4_u_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2602
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u64[1] = widen(a.u16[1]) * widen(b.u16[1]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_u_w4x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_hadd_adj4_u_w4x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_u_w4x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.u.w4x.w
Builtin: __builtin_msa2_vmult_hadd_adj4_u_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2623
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u32[0]) * widen(b.u32[0]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_u_w4x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_hadd_adj4_us_w4x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_us_w4x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.us.w4x.b
Builtin: __builtin_msa2_vmult_hadd_adj4_us_w4x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2644
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u8[0]) * widen(b.i8[0]);
dst.u32[1] = widen(a.u8[1]) * widen(b.i8[1]);
dst.u32[2] = widen(a.u8[2]) * widen(b.i8[2]);
dst.u32[3] = widen(a.u8[3]) * widen(b.i8[3]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_us_w4x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_hadd_adj4_us_w4x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_us_w4x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.us.w4x.h
Builtin: __builtin_msa2_vmult_hadd_adj4_us_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2665
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u64[1] = widen(a.u16[1]) * widen(b.i16[1]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_us_w4x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_hadd_adj4_us_w4x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_us_w4x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.us.w4x.w
Builtin: __builtin_msa2_vmult_hadd_adj4_us_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2686
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u32[0]) * widen(b.i32[0]);
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
return (__m128i)__builtin_msa2_vmult_hadd_adj4_us_w4x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_hi_acc_s_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_s_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hi.acc.s.w2x.b
Builtin: __builtin_msa2_vmult_hi_acc_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4614
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = a.i16[0] + widen(b.i8[8]) * widen(c.i8[8]);
dst.i16[1] = a.i16[1] + widen(b.i8[9]) * widen(c.i8[9]);
dst.i16[2] = a.i16[2] + widen(b.i8[10]) * widen(c.i8[10]);
dst.i16[3] = a.i16[3] + widen(b.i8[11]) * widen(c.i8[11]);
dst.i16[4] = a.i16[4] + widen(b.i8[12]) * widen(c.i8[12]);
dst.i16[5] = a.i16[5] + widen(b.i8[13]) * widen(c.i8[13]);
dst.i16[6] = a.i16[6] + widen(b.i8[14]) * widen(c.i8[14]);
dst.i16[7] = a.i16[7] + widen(b.i8[15]) * widen(c.i8[15]);
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
return (__m128i)__builtin_msa2_vmult_hi_acc_s_w2x_b((v8i16) a, (v16i8) b, (v16i8) c);
```

## __m128i __msa2_vmult_hi_acc_s_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_s_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hi.acc.s.w2x.d
Builtin: __builtin_msa2_vmult_hi_acc_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4674
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i64[1]) * widen(c.i64[1]);
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
return (__m128i)__builtin_msa2_vmult_hi_acc_s_w2x_d((v2i64) a, (v2i64) b, (v2i64) c);
```

## __m128i __msa2_vmult_hi_acc_s_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_s_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hi.acc.s.w2x.h
Builtin: __builtin_msa2_vmult_hi_acc_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4634
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = a.i32[0] + widen(b.i16[4]) * widen(c.i16[4]);
dst.i32[1] = a.i32[1] + widen(b.i16[5]) * widen(c.i16[5]);
dst.i32[2] = a.i32[2] + widen(b.i16[6]) * widen(c.i16[6]);
dst.i32[3] = a.i32[3] + widen(b.i16[7]) * widen(c.i16[7]);
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
return (__m128i)__builtin_msa2_vmult_hi_acc_s_w2x_h((v4i32) a, (v8i16) b, (v8i16) c);
```

## __m128i __msa2_vmult_hi_acc_s_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_s_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hi.acc.s.w2x.w
Builtin: __builtin_msa2_vmult_hi_acc_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4654
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i32[2]) * widen(c.i32[2]);
dst.i64[1] = a.i64[1] + widen(b.i32[3]) * widen(c.i32[3]);
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
return (__m128i)__builtin_msa2_vmult_hi_acc_s_w2x_w((v2i64) a, (v4i32) b, (v4i32) c);
```

## __m128i __msa2_vmult_hi_acc_u_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_u_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hi.acc.u.w2x.b
Builtin: __builtin_msa2_vmult_hi_acc_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4694
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = a.u16[0] + widen(b.u8[8]) * widen(c.u8[8]);
dst.u16[1] = a.u16[1] + widen(b.u8[9]) * widen(c.u8[9]);
dst.u16[2] = a.u16[2] + widen(b.u8[10]) * widen(c.u8[10]);
dst.u16[3] = a.u16[3] + widen(b.u8[11]) * widen(c.u8[11]);
dst.u16[4] = a.u16[4] + widen(b.u8[12]) * widen(c.u8[12]);
dst.u16[5] = a.u16[5] + widen(b.u8[13]) * widen(c.u8[13]);
dst.u16[6] = a.u16[6] + widen(b.u8[14]) * widen(c.u8[14]);
dst.u16[7] = a.u16[7] + widen(b.u8[15]) * widen(c.u8[15]);
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
return (__m128i)__builtin_msa2_vmult_hi_acc_u_w2x_b((v8u16) a, (v16u8) b, (v16u8) c);
```

## __m128i __msa2_vmult_hi_acc_u_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_u_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hi.acc.u.w2x.d
Builtin: __builtin_msa2_vmult_hi_acc_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4754
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[1]) * widen(c.u64[1]);
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
return (__m128i)__builtin_msa2_vmult_hi_acc_u_w2x_d((v2u64) a, (v2u64) b, (v2u64) c);
```

## __m128i __msa2_vmult_hi_acc_u_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_u_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hi.acc.u.w2x.h
Builtin: __builtin_msa2_vmult_hi_acc_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4714
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[4]) * widen(c.u16[4]);
dst.u32[1] = a.u32[1] + widen(b.u16[5]) * widen(c.u16[5]);
dst.u32[2] = a.u32[2] + widen(b.u16[6]) * widen(c.u16[6]);
dst.u32[3] = a.u32[3] + widen(b.u16[7]) * widen(c.u16[7]);
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
return (__m128i)__builtin_msa2_vmult_hi_acc_u_w2x_h((v4u32) a, (v8u16) b, (v8u16) c);
```

## __m128i __msa2_vmult_hi_acc_u_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_u_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hi.acc.u.w2x.w
Builtin: __builtin_msa2_vmult_hi_acc_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4734
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[2]) * widen(c.u32[2]);
dst.u64[1] = a.u64[1] + widen(b.u32[3]) * widen(c.u32[3]);
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
return (__m128i)__builtin_msa2_vmult_hi_acc_u_w2x_w((v2u64) a, (v4u32) b, (v4u32) c);
```

## __m128i __msa2_vmult_hi_acc_us_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_us_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hi.acc.us.w2x.b
Builtin: __builtin_msa2_vmult_hi_acc_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4774
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = a.u16[0] + widen(b.u8[8]) * widen(c.i8[8]);
dst.u16[1] = a.u16[1] + widen(b.u8[9]) * widen(c.i8[9]);
dst.u16[2] = a.u16[2] + widen(b.u8[10]) * widen(c.i8[10]);
dst.u16[3] = a.u16[3] + widen(b.u8[11]) * widen(c.i8[11]);
dst.u16[4] = a.u16[4] + widen(b.u8[12]) * widen(c.i8[12]);
dst.u16[5] = a.u16[5] + widen(b.u8[13]) * widen(c.i8[13]);
dst.u16[6] = a.u16[6] + widen(b.u8[14]) * widen(c.i8[14]);
dst.u16[7] = a.u16[7] + widen(b.u8[15]) * widen(c.i8[15]);
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
return (__m128i)__builtin_msa2_vmult_hi_acc_us_w2x_b((v8u16) a, (v16u8) b, (v16i8) c);
```

## __m128i __msa2_vmult_hi_acc_us_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_us_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hi.acc.us.w2x.d
Builtin: __builtin_msa2_vmult_hi_acc_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4834
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[1]) * widen(c.i64[1]);
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
return (__m128i)__builtin_msa2_vmult_hi_acc_us_w2x_d((v2u64) a, (v2u64) b, (v2i64) c);
```

## __m128i __msa2_vmult_hi_acc_us_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_us_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hi.acc.us.w2x.h
Builtin: __builtin_msa2_vmult_hi_acc_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4794
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[4]) * widen(c.i16[4]);
dst.u32[1] = a.u32[1] + widen(b.u16[5]) * widen(c.i16[5]);
dst.u32[2] = a.u32[2] + widen(b.u16[6]) * widen(c.i16[6]);
dst.u32[3] = a.u32[3] + widen(b.u16[7]) * widen(c.i16[7]);
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
return (__m128i)__builtin_msa2_vmult_hi_acc_us_w2x_h((v4u32) a, (v8u16) b, (v8i16) c);
```

## __m128i __msa2_vmult_hi_acc_us_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_us_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.hi.acc.us.w2x.w
Builtin: __builtin_msa2_vmult_hi_acc_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4814
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[2]) * widen(c.i32[2]);
dst.u64[1] = a.u64[1] + widen(b.u32[3]) * widen(c.i32[3]);
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
return (__m128i)__builtin_msa2_vmult_hi_acc_us_w2x_w((v2u64) a, (v4u32) b, (v4i32) c);
```

## __m128i __msa2_vmult_hi_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.s.w2x.b
Builtin: __builtin_msa2_vmult_hi_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4123
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[8]) * widen(b.i8[8]);
dst.i16[1] = widen(a.i8[9]) * widen(b.i8[9]);
dst.i16[2] = widen(a.i8[10]) * widen(b.i8[10]);
dst.i16[3] = widen(a.i8[11]) * widen(b.i8[11]);
dst.i16[4] = widen(a.i8[12]) * widen(b.i8[12]);
dst.i16[5] = widen(a.i8[13]) * widen(b.i8[13]);
dst.i16[6] = widen(a.i8[14]) * widen(b.i8[14]);
dst.i16[7] = widen(a.i8[15]) * widen(b.i8[15]);
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
return (__m128i)__builtin_msa2_vmult_hi_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_hi_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.s.w2x.d
Builtin: __builtin_msa2_vmult_hi_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4186
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[1]) * widen(b.i64[1]);
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
return (__m128i)__builtin_msa2_vmult_hi_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_hi_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.s.w2x.h
Builtin: __builtin_msa2_vmult_hi_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4144
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[4]) * widen(b.i16[4]);
dst.i32[1] = widen(a.i16[5]) * widen(b.i16[5]);
dst.i32[2] = widen(a.i16[6]) * widen(b.i16[6]);
dst.i32[3] = widen(a.i16[7]) * widen(b.i16[7]);
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
return (__m128i)__builtin_msa2_vmult_hi_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_hi_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.s.w2x.w
Builtin: __builtin_msa2_vmult_hi_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4165
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[2]) * widen(b.i32[2]);
dst.i64[1] = widen(a.i32[3]) * widen(b.i32[3]);
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
return (__m128i)__builtin_msa2_vmult_hi_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_hi_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.u.w2x.b
Builtin: __builtin_msa2_vmult_hi_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4207
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[8]) * widen(b.u8[8]);
dst.u16[1] = widen(a.u8[9]) * widen(b.u8[9]);
dst.u16[2] = widen(a.u8[10]) * widen(b.u8[10]);
dst.u16[3] = widen(a.u8[11]) * widen(b.u8[11]);
dst.u16[4] = widen(a.u8[12]) * widen(b.u8[12]);
dst.u16[5] = widen(a.u8[13]) * widen(b.u8[13]);
dst.u16[6] = widen(a.u8[14]) * widen(b.u8[14]);
dst.u16[7] = widen(a.u8[15]) * widen(b.u8[15]);
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
return (__m128i)__builtin_msa2_vmult_hi_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_hi_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.u.w2x.d
Builtin: __builtin_msa2_vmult_hi_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4270
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) * widen(b.u64[1]);
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
return (__m128i)__builtin_msa2_vmult_hi_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_hi_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.u.w2x.h
Builtin: __builtin_msa2_vmult_hi_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4228
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[4]) * widen(b.u16[4]);
dst.u32[1] = widen(a.u16[5]) * widen(b.u16[5]);
dst.u32[2] = widen(a.u16[6]) * widen(b.u16[6]);
dst.u32[3] = widen(a.u16[7]) * widen(b.u16[7]);
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
return (__m128i)__builtin_msa2_vmult_hi_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_hi_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.u.w2x.w
Builtin: __builtin_msa2_vmult_hi_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4249
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[2]) * widen(b.u32[2]);
dst.u64[1] = widen(a.u32[3]) * widen(b.u32[3]);
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
return (__m128i)__builtin_msa2_vmult_hi_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_hi_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.us.w2x.b
Builtin: __builtin_msa2_vmult_hi_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4291
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[8]) * widen(b.i8[8]);
dst.u16[1] = widen(a.u8[9]) * widen(b.i8[9]);
dst.u16[2] = widen(a.u8[10]) * widen(b.i8[10]);
dst.u16[3] = widen(a.u8[11]) * widen(b.i8[11]);
dst.u16[4] = widen(a.u8[12]) * widen(b.i8[12]);
dst.u16[5] = widen(a.u8[13]) * widen(b.i8[13]);
dst.u16[6] = widen(a.u8[14]) * widen(b.i8[14]);
dst.u16[7] = widen(a.u8[15]) * widen(b.i8[15]);
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
return (__m128i)__builtin_msa2_vmult_hi_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_hi_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.us.w2x.d
Builtin: __builtin_msa2_vmult_hi_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4354
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) * widen(b.i64[1]);
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
return (__m128i)__builtin_msa2_vmult_hi_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_hi_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.us.w2x.h
Builtin: __builtin_msa2_vmult_hi_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4312
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[4]) * widen(b.i16[4]);
dst.u32[1] = widen(a.u16[5]) * widen(b.i16[5]);
dst.u32[2] = widen(a.u16[6]) * widen(b.i16[6]);
dst.u32[3] = widen(a.u16[7]) * widen(b.i16[7]);
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
return (__m128i)__builtin_msa2_vmult_hi_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_hi_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.us.w2x.w
Builtin: __builtin_msa2_vmult_hi_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4333
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[2]) * widen(b.i32[2]);
dst.u64[1] = widen(a.u32[3]) * widen(b.i32[3]);
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
return (__m128i)__builtin_msa2_vmult_hi_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_lo_acc_s_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_s_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.lo.acc.s.w2x.b
Builtin: __builtin_msa2_vmult_lo_acc_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4374
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
return (__m128i)__builtin_msa2_vmult_lo_acc_s_w2x_b((v8i16) a, (v16i8) b, (v16i8) c);
```

## __m128i __msa2_vmult_lo_acc_s_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_s_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.lo.acc.s.w2x.d
Builtin: __builtin_msa2_vmult_lo_acc_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4434
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i64[0]) * widen(c.i64[0]);
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
return (__m128i)__builtin_msa2_vmult_lo_acc_s_w2x_d((v2i64) a, (v2i64) b, (v2i64) c);
```

## __m128i __msa2_vmult_lo_acc_s_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_s_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.lo.acc.s.w2x.h
Builtin: __builtin_msa2_vmult_lo_acc_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4394
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = a.i32[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i32[1] = a.i32[1] + widen(b.i16[1]) * widen(c.i16[1]);
dst.i32[2] = a.i32[2] + widen(b.i16[2]) * widen(c.i16[2]);
dst.i32[3] = a.i32[3] + widen(b.i16[3]) * widen(c.i16[3]);
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
return (__m128i)__builtin_msa2_vmult_lo_acc_s_w2x_h((v4i32) a, (v8i16) b, (v8i16) c);
```

## __m128i __msa2_vmult_lo_acc_s_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_s_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.lo.acc.s.w2x.w
Builtin: __builtin_msa2_vmult_lo_acc_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4414
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i32[0]) * widen(c.i32[0]);
dst.i64[1] = a.i64[1] + widen(b.i32[1]) * widen(c.i32[1]);
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
return (__m128i)__builtin_msa2_vmult_lo_acc_s_w2x_w((v2i64) a, (v4i32) b, (v4i32) c);
```

## __m128i __msa2_vmult_lo_acc_u_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_u_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.lo.acc.u.w2x.b
Builtin: __builtin_msa2_vmult_lo_acc_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4454
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
return (__m128i)__builtin_msa2_vmult_lo_acc_u_w2x_b((v8u16) a, (v16u8) b, (v16u8) c);
```

## __m128i __msa2_vmult_lo_acc_u_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_u_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.lo.acc.u.w2x.d
Builtin: __builtin_msa2_vmult_lo_acc_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4514
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[0]) * widen(c.u64[0]);
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
return (__m128i)__builtin_msa2_vmult_lo_acc_u_w2x_d((v2u64) a, (v2u64) b, (v2u64) c);
```

## __m128i __msa2_vmult_lo_acc_u_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_u_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.lo.acc.u.w2x.h
Builtin: __builtin_msa2_vmult_lo_acc_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4474
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[0]) * widen(c.u16[0]);
dst.u32[1] = a.u32[1] + widen(b.u16[1]) * widen(c.u16[1]);
dst.u32[2] = a.u32[2] + widen(b.u16[2]) * widen(c.u16[2]);
dst.u32[3] = a.u32[3] + widen(b.u16[3]) * widen(c.u16[3]);
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
return (__m128i)__builtin_msa2_vmult_lo_acc_u_w2x_h((v4u32) a, (v8u16) b, (v8u16) c);
```

## __m128i __msa2_vmult_lo_acc_u_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_u_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.lo.acc.u.w2x.w
Builtin: __builtin_msa2_vmult_lo_acc_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4494
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[0]) * widen(c.u32[0]);
dst.u64[1] = a.u64[1] + widen(b.u32[1]) * widen(c.u32[1]);
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
return (__m128i)__builtin_msa2_vmult_lo_acc_u_w2x_w((v2u64) a, (v4u32) b, (v4u32) c);
```

## __m128i __msa2_vmult_lo_acc_us_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_us_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.lo.acc.us.w2x.b
Builtin: __builtin_msa2_vmult_lo_acc_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4534
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
return (__m128i)__builtin_msa2_vmult_lo_acc_us_w2x_b((v8u16) a, (v16u8) b, (v16i8) c);
```

## __m128i __msa2_vmult_lo_acc_us_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_us_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.lo.acc.us.w2x.d
Builtin: __builtin_msa2_vmult_lo_acc_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4594
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[0]) * widen(c.i64[0]);
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
return (__m128i)__builtin_msa2_vmult_lo_acc_us_w2x_d((v2u64) a, (v2u64) b, (v2i64) c);
```

## __m128i __msa2_vmult_lo_acc_us_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_us_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.lo.acc.us.w2x.h
Builtin: __builtin_msa2_vmult_lo_acc_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4554
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[0]) * widen(c.i16[0]);
dst.u32[1] = a.u32[1] + widen(b.u16[1]) * widen(c.i16[1]);
dst.u32[2] = a.u32[2] + widen(b.u16[2]) * widen(c.i16[2]);
dst.u32[3] = a.u32[3] + widen(b.u16[3]) * widen(c.i16[3]);
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
return (__m128i)__builtin_msa2_vmult_lo_acc_us_w2x_h((v4u32) a, (v8u16) b, (v8i16) c);
```

## __m128i __msa2_vmult_lo_acc_us_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_us_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.lo.acc.us.w2x.w
Builtin: __builtin_msa2_vmult_lo_acc_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4574
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[0]) * widen(c.i32[0]);
dst.u64[1] = a.u64[1] + widen(b.u32[1]) * widen(c.i32[1]);
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
return (__m128i)__builtin_msa2_vmult_lo_acc_us_w2x_w((v2u64) a, (v4u32) b, (v4i32) c);
```

## __m128i __msa2_vmult_lo_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.s.w2x.b
Builtin: __builtin_msa2_vmult_lo_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3871
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
return (__m128i)__builtin_msa2_vmult_lo_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_lo_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.s.w2x.d
Builtin: __builtin_msa2_vmult_lo_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3934
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) * widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vmult_lo_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_lo_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.s.w2x.h
Builtin: __builtin_msa2_vmult_lo_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3892
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i32[1] = widen(a.i16[1]) * widen(b.i16[1]);
dst.i32[2] = widen(a.i16[2]) * widen(b.i16[2]);
dst.i32[3] = widen(a.i16[3]) * widen(b.i16[3]);
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
return (__m128i)__builtin_msa2_vmult_lo_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_lo_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.s.w2x.w
Builtin: __builtin_msa2_vmult_lo_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3913
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) * widen(b.i32[0]);
dst.i64[1] = widen(a.i32[1]) * widen(b.i32[1]);
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
return (__m128i)__builtin_msa2_vmult_lo_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_lo_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.u.w2x.b
Builtin: __builtin_msa2_vmult_lo_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3955
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
return (__m128i)__builtin_msa2_vmult_lo_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_lo_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.u.w2x.d
Builtin: __builtin_msa2_vmult_lo_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4018
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) * widen(b.u64[0]);
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
return (__m128i)__builtin_msa2_vmult_lo_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_lo_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.u.w2x.h
Builtin: __builtin_msa2_vmult_lo_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3976
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) * widen(b.u16[0]);
dst.u32[1] = widen(a.u16[1]) * widen(b.u16[1]);
dst.u32[2] = widen(a.u16[2]) * widen(b.u16[2]);
dst.u32[3] = widen(a.u16[3]) * widen(b.u16[3]);
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
return (__m128i)__builtin_msa2_vmult_lo_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_lo_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.u.w2x.w
Builtin: __builtin_msa2_vmult_lo_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3997
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) * widen(b.u32[0]);
dst.u64[1] = widen(a.u32[1]) * widen(b.u32[1]);
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
return (__m128i)__builtin_msa2_vmult_lo_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_lo_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.us.w2x.b
Builtin: __builtin_msa2_vmult_lo_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4039
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
return (__m128i)__builtin_msa2_vmult_lo_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_lo_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.us.w2x.d
Builtin: __builtin_msa2_vmult_lo_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4102
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) * widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vmult_lo_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_lo_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.us.w2x.h
Builtin: __builtin_msa2_vmult_lo_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4060
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) * widen(b.i16[0]);
dst.u32[1] = widen(a.u16[1]) * widen(b.i16[1]);
dst.u32[2] = widen(a.u16[2]) * widen(b.i16[2]);
dst.u32[3] = widen(a.u16[3]) * widen(b.i16[3]);
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
return (__m128i)__builtin_msa2_vmult_lo_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_lo_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.us.w2x.w
Builtin: __builtin_msa2_vmult_lo_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4081
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) * widen(b.i32[0]);
dst.u64[1] = widen(a.u32[1]) * widen(b.i32[1]);
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
return (__m128i)__builtin_msa2_vmult_lo_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_odd_acc_s_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_s_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.odd.acc.s.w2x.b
Builtin: __builtin_msa2_vmult_odd_acc_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3630
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
return (__m128i)__builtin_msa2_vmult_odd_acc_s_w2x_b((v8i16) a, (v16i8) b, (v16i8) c);
```

## __m128i __msa2_vmult_odd_acc_s_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_s_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.odd.acc.s.w2x.d
Builtin: __builtin_msa2_vmult_odd_acc_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3690
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i64[1]) * widen(c.i64[1]);
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
return (__m128i)__builtin_msa2_vmult_odd_acc_s_w2x_d((v2i64) a, (v2i64) b, (v2i64) c);
```

## __m128i __msa2_vmult_odd_acc_s_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_s_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.odd.acc.s.w2x.h
Builtin: __builtin_msa2_vmult_odd_acc_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3650
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = a.i32[0] + widen(b.i16[1]) * widen(c.i16[1]);
dst.i32[1] = a.i32[1] + widen(b.i16[3]) * widen(c.i16[3]);
dst.i32[2] = a.i32[2] + widen(b.i16[5]) * widen(c.i16[5]);
dst.i32[3] = a.i32[3] + widen(b.i16[7]) * widen(c.i16[7]);
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
return (__m128i)__builtin_msa2_vmult_odd_acc_s_w2x_h((v4i32) a, (v8i16) b, (v8i16) c);
```

## __m128i __msa2_vmult_odd_acc_s_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_s_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.odd.acc.s.w2x.w
Builtin: __builtin_msa2_vmult_odd_acc_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3670
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i32[1]) * widen(c.i32[1]);
dst.i64[1] = a.i64[1] + widen(b.i32[3]) * widen(c.i32[3]);
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
return (__m128i)__builtin_msa2_vmult_odd_acc_s_w2x_w((v2i64) a, (v4i32) b, (v4i32) c);
```

## __m128i __msa2_vmult_odd_acc_u_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_u_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.odd.acc.u.w2x.b
Builtin: __builtin_msa2_vmult_odd_acc_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3710
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
return (__m128i)__builtin_msa2_vmult_odd_acc_u_w2x_b((v8u16) a, (v16u8) b, (v16u8) c);
```

## __m128i __msa2_vmult_odd_acc_u_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_u_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.odd.acc.u.w2x.d
Builtin: __builtin_msa2_vmult_odd_acc_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3770
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[1]) * widen(c.u64[1]);
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
return (__m128i)__builtin_msa2_vmult_odd_acc_u_w2x_d((v2u64) a, (v2u64) b, (v2u64) c);
```

## __m128i __msa2_vmult_odd_acc_u_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_u_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.odd.acc.u.w2x.h
Builtin: __builtin_msa2_vmult_odd_acc_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3730
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[1]) * widen(c.u16[1]);
dst.u32[1] = a.u32[1] + widen(b.u16[3]) * widen(c.u16[3]);
dst.u32[2] = a.u32[2] + widen(b.u16[5]) * widen(c.u16[5]);
dst.u32[3] = a.u32[3] + widen(b.u16[7]) * widen(c.u16[7]);
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
return (__m128i)__builtin_msa2_vmult_odd_acc_u_w2x_h((v4u32) a, (v8u16) b, (v8u16) c);
```

## __m128i __msa2_vmult_odd_acc_u_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_u_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.odd.acc.u.w2x.w
Builtin: __builtin_msa2_vmult_odd_acc_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3750
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[1]) * widen(c.u32[1]);
dst.u64[1] = a.u64[1] + widen(b.u32[3]) * widen(c.u32[3]);
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
return (__m128i)__builtin_msa2_vmult_odd_acc_u_w2x_w((v2u64) a, (v4u32) b, (v4u32) c);
```

## __m128i __msa2_vmult_odd_acc_us_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_us_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.odd.acc.us.w2x.b
Builtin: __builtin_msa2_vmult_odd_acc_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3790
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
return (__m128i)__builtin_msa2_vmult_odd_acc_us_w2x_b((v8u16) a, (v16u8) b, (v16i8) c);
```

## __m128i __msa2_vmult_odd_acc_us_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_us_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.odd.acc.us.w2x.d
Builtin: __builtin_msa2_vmult_odd_acc_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3850
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.u64[1]) * widen(c.i64[1]);
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
return (__m128i)__builtin_msa2_vmult_odd_acc_us_w2x_d((v2u64) a, (v2u64) b, (v2i64) c);
```

## __m128i __msa2_vmult_odd_acc_us_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_us_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.odd.acc.us.w2x.h
Builtin: __builtin_msa2_vmult_odd_acc_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3810
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.u16[1]) * widen(c.i16[1]);
dst.u32[1] = a.u32[1] + widen(b.u16[3]) * widen(c.i16[3]);
dst.u32[2] = a.u32[2] + widen(b.u16[5]) * widen(c.i16[5]);
dst.u32[3] = a.u32[3] + widen(b.u16[7]) * widen(c.i16[7]);
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
return (__m128i)__builtin_msa2_vmult_odd_acc_us_w2x_h((v4u32) a, (v8u16) b, (v8i16) c);
```

## __m128i __msa2_vmult_odd_acc_us_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_us_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmult.odd.acc.us.w2x.w
Builtin: __builtin_msa2_vmult_odd_acc_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3830
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.u32[1]) * widen(c.i32[1]);
dst.u64[1] = a.u64[1] + widen(b.u32[3]) * widen(c.i32[3]);
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
return (__m128i)__builtin_msa2_vmult_odd_acc_us_w2x_w((v2u64) a, (v4u32) b, (v4i32) c);
```

## __m128i __msa2_vmult_odd_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.s.w2x.b
Builtin: __builtin_msa2_vmult_odd_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3139
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
return (__m128i)__builtin_msa2_vmult_odd_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_odd_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.s.w2x.d
Builtin: __builtin_msa2_vmult_odd_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3202
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[1]) * widen(b.i64[1]);
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
return (__m128i)__builtin_msa2_vmult_odd_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_odd_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.s.w2x.h
Builtin: __builtin_msa2_vmult_odd_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3160
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[1]) * widen(b.i16[1]);
dst.i32[1] = widen(a.i16[3]) * widen(b.i16[3]);
dst.i32[2] = widen(a.i16[5]) * widen(b.i16[5]);
dst.i32[3] = widen(a.i16[7]) * widen(b.i16[7]);
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
return (__m128i)__builtin_msa2_vmult_odd_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_odd_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.s.w2x.w
Builtin: __builtin_msa2_vmult_odd_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3181
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[1]) * widen(b.i32[1]);
dst.i64[1] = widen(a.i32[3]) * widen(b.i32[3]);
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
return (__m128i)__builtin_msa2_vmult_odd_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_odd_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.u.w2x.b
Builtin: __builtin_msa2_vmult_odd_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3223
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
return (__m128i)__builtin_msa2_vmult_odd_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_odd_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.u.w2x.d
Builtin: __builtin_msa2_vmult_odd_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3286
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) * widen(b.u64[1]);
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
return (__m128i)__builtin_msa2_vmult_odd_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_odd_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.u.w2x.h
Builtin: __builtin_msa2_vmult_odd_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3244
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[1]) * widen(b.u16[1]);
dst.u32[1] = widen(a.u16[3]) * widen(b.u16[3]);
dst.u32[2] = widen(a.u16[5]) * widen(b.u16[5]);
dst.u32[3] = widen(a.u16[7]) * widen(b.u16[7]);
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
return (__m128i)__builtin_msa2_vmult_odd_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_odd_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.u.w2x.w
Builtin: __builtin_msa2_vmult_odd_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3265
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[1]) * widen(b.u32[1]);
dst.u64[1] = widen(a.u32[3]) * widen(b.u32[3]);
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
return (__m128i)__builtin_msa2_vmult_odd_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_odd_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.us.w2x.b
Builtin: __builtin_msa2_vmult_odd_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3307
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
return (__m128i)__builtin_msa2_vmult_odd_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_odd_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.us.w2x.d
Builtin: __builtin_msa2_vmult_odd_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3370
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) * widen(b.i64[1]);
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
return (__m128i)__builtin_msa2_vmult_odd_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_odd_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.us.w2x.h
Builtin: __builtin_msa2_vmult_odd_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3328
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[1]) * widen(b.i16[1]);
dst.u32[1] = widen(a.u16[3]) * widen(b.i16[3]);
dst.u32[2] = widen(a.u16[5]) * widen(b.i16[5]);
dst.u32[3] = widen(a.u16[7]) * widen(b.i16[7]);
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
return (__m128i)__builtin_msa2_vmult_odd_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_odd_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.us.w2x.w
Builtin: __builtin_msa2_vmult_odd_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3349
```

### Description

Widen odd-numbered source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[1]) * widen(b.i32[1]);
dst.u64[1] = widen(a.u32[3]) * widen(b.i32[3]);
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
return (__m128i)__builtin_msa2_vmult_odd_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmultc_im_haddc_adjc2_acc_s_w4x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmultc_im_haddc_adjc2_acc_s_w4x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmultc.im.haddc.adjc2.acc.s.w4x.w
Builtin: __builtin_msa2_vmultc_im_haddc_adjc2_acc_s_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4875
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i32[0]) * widen(c.i32[0]);
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
return (__m128i)__builtin_msa2_vmultc_im_haddc_adjc2_acc_s_w4x_w((v2i64) a, (v4i32) b, (v4i32) c);
```

## __m128i __msa2_vmultc_im_haddc_adjc2_s_w4x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultc_im_haddc_adjc2_s_w4x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultc.im.haddc.adjc2.s.w4x.w
Builtin: __builtin_msa2_vmultc_im_haddc_adjc2_s_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4855
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i32[0]) * widen(b.i32[0]);
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
return (__m128i)__builtin_msa2_vmultc_im_haddc_adjc2_s_w4x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmultc_im_haddc_adjc4_acc_s_w4x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmultc_im_haddc_adjc4_acc_s_w4x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmultc.im.haddc.adjc4.acc.s.w4x.h
Builtin: __builtin_msa2_vmultc_im_haddc_adjc4_acc_s_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4916
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i64[1] = a.i64[1] + widen(b.i16[1]) * widen(c.i16[1]);
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
return (__m128i)__builtin_msa2_vmultc_im_haddc_adjc4_acc_s_w4x_h((v2i64) a, (v8i16) b, (v8i16) c);
```

## __m128i __msa2_vmultc_im_haddc_adjc4_s_w4x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultc_im_haddc_adjc4_s_w4x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultc.im.haddc.adjc4.s.w4x.h
Builtin: __builtin_msa2_vmultc_im_haddc_adjc4_s_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4896
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i64[1] = widen(a.i16[1]) * widen(b.i16[1]);
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
return (__m128i)__builtin_msa2_vmultc_im_haddc_adjc4_s_w4x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmultc_re_haddc_adjc2_acc_s_w4x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmultc_re_haddc_adjc2_acc_s_w4x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmultc.re.haddc.adjc2.acc.s.w4x.w
Builtin: __builtin_msa2_vmultc_re_haddc_adjc2_acc_s_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4957
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = a.i128[0] + widen(b.i32[0]) * widen(c.i32[0]);
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
return (__m128i)__builtin_msa2_vmultc_re_haddc_adjc2_acc_s_w4x_w((v2i64) a, (v4i32) b, (v4i32) c);
```

## __m128i __msa2_vmultc_re_haddc_adjc2_s_w4x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultc_re_haddc_adjc2_s_w4x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultc.re.haddc.adjc2.s.w4x.w
Builtin: __builtin_msa2_vmultc_re_haddc_adjc2_s_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4937
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i32[0]) * widen(b.i32[0]);
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
return (__m128i)__builtin_msa2_vmultc_re_haddc_adjc2_s_w4x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmultc_re_haddc_adjc4_acc_s_w4x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmultc_re_haddc_adjc4_acc_s_w4x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmultc.re.haddc.adjc4.acc.s.w4x.h
Builtin: __builtin_msa2_vmultc_re_haddc_adjc4_acc_s_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4998
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = a.i64[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.i64[1] = a.i64[1] + widen(b.i16[1]) * widen(c.i16[1]);
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
return (__m128i)__builtin_msa2_vmultc_re_haddc_adjc4_acc_s_w4x_h((v2i64) a, (v8i16) b, (v8i16) c);
```

## __m128i __msa2_vmultc_re_haddc_adjc4_s_w4x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultc_re_haddc_adjc4_s_w4x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultc.re.haddc.adjc4.s.w4x.h
Builtin: __builtin_msa2_vmultc_re_haddc_adjc4_s_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4978
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.i64[1] = widen(a.i16[1]) * widen(b.i16[1]);
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
return (__m128i)__builtin_msa2_vmultc_re_haddc_adjc4_s_w4x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmultp_hi_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hi_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hi.w2x.b
Builtin: __builtin_msa2_vmultp_hi_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5144
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.i8[8]) * widen(b.i8[8]);
dst.u16[1] = widen(a.i8[9]) * widen(b.i8[9]);
dst.u16[2] = widen(a.i8[10]) * widen(b.i8[10]);
dst.u16[3] = widen(a.i8[11]) * widen(b.i8[11]);
dst.u16[4] = widen(a.i8[12]) * widen(b.i8[12]);
dst.u16[5] = widen(a.i8[13]) * widen(b.i8[13]);
dst.u16[6] = widen(a.i8[14]) * widen(b.i8[14]);
dst.u16[7] = widen(a.i8[15]) * widen(b.i8[15]);
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
return (__m128i)__builtin_msa2_vmultp_hi_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmultp_hi_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hi_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hi.w2x.d
Builtin: __builtin_msa2_vmultp_hi_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5207
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.i64[1]) * widen(b.i64[1]);
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
return (__m128i)__builtin_msa2_vmultp_hi_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmultp_hi_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hi_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hi.w2x.h
Builtin: __builtin_msa2_vmultp_hi_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5165
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.i16[4]) * widen(b.i16[4]);
dst.u32[1] = widen(a.i16[5]) * widen(b.i16[5]);
dst.u32[2] = widen(a.i16[6]) * widen(b.i16[6]);
dst.u32[3] = widen(a.i16[7]) * widen(b.i16[7]);
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
return (__m128i)__builtin_msa2_vmultp_hi_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmultp_hi_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hi_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hi.w2x.w
Builtin: __builtin_msa2_vmultp_hi_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5186
```

### Description

Widen upper-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.i32[2]) * widen(b.i32[2]);
dst.u64[1] = widen(a.i32[3]) * widen(b.i32[3]);
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
return (__m128i)__builtin_msa2_vmultp_hi_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmultp_hi_xacc_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmultp_hi_xacc_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmultp.hi.xacc.w2x.b
Builtin: __builtin_msa2_vmultp_hi_xacc_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5307
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = a.u16[0] + widen(b.i8[8]) * widen(c.i8[8]);
dst.u16[1] = a.u16[1] + widen(b.i8[9]) * widen(c.i8[9]);
dst.u16[2] = a.u16[2] + widen(b.i8[10]) * widen(c.i8[10]);
dst.u16[3] = a.u16[3] + widen(b.i8[11]) * widen(c.i8[11]);
dst.u16[4] = a.u16[4] + widen(b.i8[12]) * widen(c.i8[12]);
dst.u16[5] = a.u16[5] + widen(b.i8[13]) * widen(c.i8[13]);
dst.u16[6] = a.u16[6] + widen(b.i8[14]) * widen(c.i8[14]);
dst.u16[7] = a.u16[7] + widen(b.i8[15]) * widen(c.i8[15]);
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
return (__m128i)__builtin_msa2_vmultp_hi_xacc_w2x_b((v8i16) a, (v16i8) b, (v16i8) c);
```

## __m128i __msa2_vmultp_hi_xacc_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmultp_hi_xacc_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmultp.hi.xacc.w2x.d
Builtin: __builtin_msa2_vmultp_hi_xacc_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5367
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.i64[1]) * widen(c.i64[1]);
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
return (__m128i)__builtin_msa2_vmultp_hi_xacc_w2x_d((v2i64) a, (v2i64) b, (v2i64) c);
```

## __m128i __msa2_vmultp_hi_xacc_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmultp_hi_xacc_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmultp.hi.xacc.w2x.h
Builtin: __builtin_msa2_vmultp_hi_xacc_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5327
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.i16[4]) * widen(c.i16[4]);
dst.u32[1] = a.u32[1] + widen(b.i16[5]) * widen(c.i16[5]);
dst.u32[2] = a.u32[2] + widen(b.i16[6]) * widen(c.i16[6]);
dst.u32[3] = a.u32[3] + widen(b.i16[7]) * widen(c.i16[7]);
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
return (__m128i)__builtin_msa2_vmultp_hi_xacc_w2x_h((v4i32) a, (v8i16) b, (v8i16) c);
```

## __m128i __msa2_vmultp_hi_xacc_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmultp_hi_xacc_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmultp.hi.xacc.w2x.w
Builtin: __builtin_msa2_vmultp_hi_xacc_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5347
```

### Description

Widen upper-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.i32[2]) * widen(c.i32[2]);
dst.u64[1] = a.u64[1] + widen(b.i32[3]) * widen(c.i32[3]);
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
return (__m128i)__builtin_msa2_vmultp_hi_xacc_w2x_w((v2i64) a, (v4i32) b, (v4i32) c);
```

## __m128i __msa2_vmultp_hxor_adj2_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hxor_adj2_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hxor.adj2.w2x.d
Builtin: __builtin_msa2_vmultp_hxor_adj2_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5019
```

### Description

Widen corresponding source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.i64[0]) * widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vmultp_hxor_adj2_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmultp_hxor_adj2_xacc_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmultp_hxor_adj2_xacc_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmultp.hxor.adj2.xacc.w2x.d
Builtin: __builtin_msa2_vmultp_hxor_adj2_xacc_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5039
```

### Description

Widen corresponding source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.i64[0]) * widen(c.i64[0]);
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
return (__m128i)__builtin_msa2_vmultp_hxor_adj2_xacc_w2x_d((v2i64) a, (v2i64) b, (v2i64) c);
```

## __m128i __msa2_vmultp_lo_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_lo_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.lo.w2x.b
Builtin: __builtin_msa2_vmultp_lo_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5060
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
return (__m128i)__builtin_msa2_vmultp_lo_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmultp_lo_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_lo_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.lo.w2x.d
Builtin: __builtin_msa2_vmultp_lo_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5123
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.i64[0]) * widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vmultp_lo_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmultp_lo_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_lo_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.lo.w2x.h
Builtin: __builtin_msa2_vmultp_lo_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5081
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.i16[0]) * widen(b.i16[0]);
dst.u32[1] = widen(a.i16[1]) * widen(b.i16[1]);
dst.u32[2] = widen(a.i16[2]) * widen(b.i16[2]);
dst.u32[3] = widen(a.i16[3]) * widen(b.i16[3]);
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
return (__m128i)__builtin_msa2_vmultp_lo_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmultp_lo_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_lo_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.lo.w2x.w
Builtin: __builtin_msa2_vmultp_lo_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5102
```

### Description

Widen lower-half source lanes, multiply them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.i32[0]) * widen(b.i32[0]);
dst.u64[1] = widen(a.i32[1]) * widen(b.i32[1]);
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
return (__m128i)__builtin_msa2_vmultp_lo_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmultp_lo_xacc_w2x_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmultp_lo_xacc_w2x_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmultp.lo.xacc.w2x.b
Builtin: __builtin_msa2_vmultp_lo_xacc_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5227
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
return (__m128i)__builtin_msa2_vmultp_lo_xacc_w2x_b((v8i16) a, (v16i8) b, (v16i8) c);
```

## __m128i __msa2_vmultp_lo_xacc_w2x_d (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmultp_lo_xacc_w2x_d (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmultp.lo.xacc.w2x.d
Builtin: __builtin_msa2_vmultp_lo_xacc_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5287
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = a.u128[0] + widen(b.i64[0]) * widen(c.i64[0]);
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
return (__m128i)__builtin_msa2_vmultp_lo_xacc_w2x_d((v2i64) a, (v2i64) b, (v2i64) c);
```

## __m128i __msa2_vmultp_lo_xacc_w2x_h (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmultp_lo_xacc_w2x_h (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmultp.lo.xacc.w2x.h
Builtin: __builtin_msa2_vmultp_lo_xacc_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5247
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = a.u32[0] + widen(b.i16[0]) * widen(c.i16[0]);
dst.u32[1] = a.u32[1] + widen(b.i16[1]) * widen(c.i16[1]);
dst.u32[2] = a.u32[2] + widen(b.i16[2]) * widen(c.i16[2]);
dst.u32[3] = a.u32[3] + widen(b.i16[3]) * widen(c.i16[3]);
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
return (__m128i)__builtin_msa2_vmultp_lo_xacc_w2x_h((v4i32) a, (v8i16) b, (v8i16) c);
```

## __m128i __msa2_vmultp_lo_xacc_w2x_w (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vmultp_lo_xacc_w2x_w (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vmultp.lo.xacc.w2x.w
Builtin: __builtin_msa2_vmultp_lo_xacc_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5267
```

### Description

Widen lower-half source lanes, multiply them in wider lanes and accumulate into `a`. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = a.u64[0] + widen(b.i32[0]) * widen(c.i32[0]);
dst.u64[1] = a.u64[1] + widen(b.i32[1]) * widen(c.i32[1]);
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
return (__m128i)__builtin_msa2_vmultp_lo_xacc_w2x_w((v2i64) a, (v4i32) b, (v4i32) c);
```

## __m128i __msa2_vsub_el0_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.q
Builtin: __builtin_msa2_vsub_el0_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:398
```

### Description

Subtract modular integer lanes of `b` from `a` on 1 x u128 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u128[0] = a.i64[0] - b.i64[0];
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
return (__m128i) __builtin_msa2_vsub_el0_q ((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vsub_el0_s_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_s_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.s.wx.d
Builtin: __builtin_msa2_vsub_el0_s_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5430
```

### Description

Widen lane 0 source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) - widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vsub_el0_s_wx_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vsub_el0_s_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_s_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.s.wx.h
Builtin: __builtin_msa2_vsub_el0_s_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5388
```

### Description

Widen lane 0 source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[1] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[2] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[3] = widen(a.i16[0]) - widen(b.i16[0]);
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
return (__m128i)__builtin_msa2_vsub_el0_s_wx_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vsub_el0_s_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_s_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.s.wx.w
Builtin: __builtin_msa2_vsub_el0_s_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5409
```

### Description

Widen lane 0 source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) - widen(b.i32[0]);
dst.i64[1] = widen(a.i32[0]) - widen(b.i32[0]);
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
return (__m128i)__builtin_msa2_vsub_el0_s_wx_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vsub_el0_u_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_u_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.u.wx.d
Builtin: __builtin_msa2_vsub_el0_u_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5493
```

### Description

Widen lane 0 source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) - widen(b.u64[0]);
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
return (__m128i)__builtin_msa2_vsub_el0_u_wx_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vsub_el0_u_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_u_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.u.wx.h
Builtin: __builtin_msa2_vsub_el0_u_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5451
```

### Description

Widen lane 0 source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[1] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[2] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[3] = widen(a.u16[0]) - widen(b.u16[0]);
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
return (__m128i)__builtin_msa2_vsub_el0_u_wx_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vsub_el0_u_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_u_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.u.wx.w
Builtin: __builtin_msa2_vsub_el0_u_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5472
```

### Description

Widen lane 0 source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) - widen(b.u32[0]);
dst.u64[1] = widen(a.u32[0]) - widen(b.u32[0]);
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
return (__m128i)__builtin_msa2_vsub_el0_u_wx_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vsub_even_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.s.w2x.b
Builtin: __builtin_msa2_vsub_even_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5514
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
return (__m128i)__builtin_msa2_vsub_even_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vsub_even_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.s.w2x.d
Builtin: __builtin_msa2_vsub_even_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5577
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) - widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vsub_even_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vsub_even_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.s.w2x.h
Builtin: __builtin_msa2_vsub_even_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5535
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[1] = widen(a.i16[2]) - widen(b.i16[2]);
dst.i32[2] = widen(a.i16[4]) - widen(b.i16[4]);
dst.i32[3] = widen(a.i16[6]) - widen(b.i16[6]);
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
return (__m128i)__builtin_msa2_vsub_even_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vsub_even_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.s.w2x.w
Builtin: __builtin_msa2_vsub_even_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5556
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) - widen(b.i32[0]);
dst.i64[1] = widen(a.i32[2]) - widen(b.i32[2]);
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
return (__m128i)__builtin_msa2_vsub_even_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vsub_even_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.u.w2x.b
Builtin: __builtin_msa2_vsub_even_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5598
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
return (__m128i)__builtin_msa2_vsub_even_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vsub_even_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.u.w2x.d
Builtin: __builtin_msa2_vsub_even_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5661
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) - widen(b.u64[0]);
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
return (__m128i)__builtin_msa2_vsub_even_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vsub_even_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.u.w2x.h
Builtin: __builtin_msa2_vsub_even_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5619
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[1] = widen(a.u16[2]) - widen(b.u16[2]);
dst.u32[2] = widen(a.u16[4]) - widen(b.u16[4]);
dst.u32[3] = widen(a.u16[6]) - widen(b.u16[6]);
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
return (__m128i)__builtin_msa2_vsub_even_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vsub_even_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.u.w2x.w
Builtin: __builtin_msa2_vsub_even_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5640
```

### Description

Widen even-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) - widen(b.u32[0]);
dst.u64[1] = widen(a.u32[2]) - widen(b.u32[2]);
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
return (__m128i)__builtin_msa2_vsub_even_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vsub_hi_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.s.w2x.b
Builtin: __builtin_msa2_vsub_hi_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6018
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i16[0] = widen(a.i8[8]) - widen(b.i8[8]);
dst.i16[1] = widen(a.i8[9]) - widen(b.i8[9]);
dst.i16[2] = widen(a.i8[10]) - widen(b.i8[10]);
dst.i16[3] = widen(a.i8[11]) - widen(b.i8[11]);
dst.i16[4] = widen(a.i8[12]) - widen(b.i8[12]);
dst.i16[5] = widen(a.i8[13]) - widen(b.i8[13]);
dst.i16[6] = widen(a.i8[14]) - widen(b.i8[14]);
dst.i16[7] = widen(a.i8[15]) - widen(b.i8[15]);
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
return (__m128i)__builtin_msa2_vsub_hi_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vsub_hi_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.s.w2x.d
Builtin: __builtin_msa2_vsub_hi_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6081
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[1]) - widen(b.i64[1]);
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
return (__m128i)__builtin_msa2_vsub_hi_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vsub_hi_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.s.w2x.h
Builtin: __builtin_msa2_vsub_hi_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6039
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[4]) - widen(b.i16[4]);
dst.i32[1] = widen(a.i16[5]) - widen(b.i16[5]);
dst.i32[2] = widen(a.i16[6]) - widen(b.i16[6]);
dst.i32[3] = widen(a.i16[7]) - widen(b.i16[7]);
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
return (__m128i)__builtin_msa2_vsub_hi_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vsub_hi_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.s.w2x.w
Builtin: __builtin_msa2_vsub_hi_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6060
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[2]) - widen(b.i32[2]);
dst.i64[1] = widen(a.i32[3]) - widen(b.i32[3]);
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
return (__m128i)__builtin_msa2_vsub_hi_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vsub_hi_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.u.w2x.b
Builtin: __builtin_msa2_vsub_hi_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6102
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u16[0] = widen(a.u8[8]) - widen(b.u8[8]);
dst.u16[1] = widen(a.u8[9]) - widen(b.u8[9]);
dst.u16[2] = widen(a.u8[10]) - widen(b.u8[10]);
dst.u16[3] = widen(a.u8[11]) - widen(b.u8[11]);
dst.u16[4] = widen(a.u8[12]) - widen(b.u8[12]);
dst.u16[5] = widen(a.u8[13]) - widen(b.u8[13]);
dst.u16[6] = widen(a.u8[14]) - widen(b.u8[14]);
dst.u16[7] = widen(a.u8[15]) - widen(b.u8[15]);
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
return (__m128i)__builtin_msa2_vsub_hi_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vsub_hi_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.u.w2x.d
Builtin: __builtin_msa2_vsub_hi_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6165
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) - widen(b.u64[1]);
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
return (__m128i)__builtin_msa2_vsub_hi_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vsub_hi_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.u.w2x.h
Builtin: __builtin_msa2_vsub_hi_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6123
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[4]) - widen(b.u16[4]);
dst.u32[1] = widen(a.u16[5]) - widen(b.u16[5]);
dst.u32[2] = widen(a.u16[6]) - widen(b.u16[6]);
dst.u32[3] = widen(a.u16[7]) - widen(b.u16[7]);
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
return (__m128i)__builtin_msa2_vsub_hi_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vsub_hi_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.u.w2x.w
Builtin: __builtin_msa2_vsub_hi_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6144
```

### Description

Widen upper-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[2]) - widen(b.u32[2]);
dst.u64[1] = widen(a.u32[3]) - widen(b.u32[3]);
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
return (__m128i)__builtin_msa2_vsub_hi_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vsub_lo_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.s.w2x.b
Builtin: __builtin_msa2_vsub_lo_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5850
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
return (__m128i)__builtin_msa2_vsub_lo_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vsub_lo_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.s.w2x.d
Builtin: __builtin_msa2_vsub_lo_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5913
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[0]) - widen(b.i64[0]);
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
return (__m128i)__builtin_msa2_vsub_lo_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vsub_lo_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.s.w2x.h
Builtin: __builtin_msa2_vsub_lo_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5871
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[0]) - widen(b.i16[0]);
dst.i32[1] = widen(a.i16[1]) - widen(b.i16[1]);
dst.i32[2] = widen(a.i16[2]) - widen(b.i16[2]);
dst.i32[3] = widen(a.i16[3]) - widen(b.i16[3]);
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
return (__m128i)__builtin_msa2_vsub_lo_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vsub_lo_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.s.w2x.w
Builtin: __builtin_msa2_vsub_lo_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5892
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[0]) - widen(b.i32[0]);
dst.i64[1] = widen(a.i32[1]) - widen(b.i32[1]);
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
return (__m128i)__builtin_msa2_vsub_lo_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vsub_lo_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.u.w2x.b
Builtin: __builtin_msa2_vsub_lo_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5934
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
return (__m128i)__builtin_msa2_vsub_lo_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vsub_lo_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.u.w2x.d
Builtin: __builtin_msa2_vsub_lo_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5997
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[0]) - widen(b.u64[0]);
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
return (__m128i)__builtin_msa2_vsub_lo_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vsub_lo_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.u.w2x.h
Builtin: __builtin_msa2_vsub_lo_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5955
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[0]) - widen(b.u16[0]);
dst.u32[1] = widen(a.u16[1]) - widen(b.u16[1]);
dst.u32[2] = widen(a.u16[2]) - widen(b.u16[2]);
dst.u32[3] = widen(a.u16[3]) - widen(b.u16[3]);
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
return (__m128i)__builtin_msa2_vsub_lo_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vsub_lo_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.u.w2x.w
Builtin: __builtin_msa2_vsub_lo_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5976
```

### Description

Widen lower-half source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[0]) - widen(b.u32[0]);
dst.u64[1] = widen(a.u32[1]) - widen(b.u32[1]);
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
return (__m128i)__builtin_msa2_vsub_lo_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vsub_odd_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.s.w2x.b
Builtin: __builtin_msa2_vsub_odd_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5682
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
return (__m128i)__builtin_msa2_vsub_odd_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vsub_odd_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.s.w2x.d
Builtin: __builtin_msa2_vsub_odd_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5745
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i128[0] = widen(a.i64[1]) - widen(b.i64[1]);
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
return (__m128i)__builtin_msa2_vsub_odd_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vsub_odd_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.s.w2x.h
Builtin: __builtin_msa2_vsub_odd_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5703
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i32[0] = widen(a.i16[1]) - widen(b.i16[1]);
dst.i32[1] = widen(a.i16[3]) - widen(b.i16[3]);
dst.i32[2] = widen(a.i16[5]) - widen(b.i16[5]);
dst.i32[3] = widen(a.i16[7]) - widen(b.i16[7]);
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
return (__m128i)__builtin_msa2_vsub_odd_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vsub_odd_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.s.w2x.w
Builtin: __builtin_msa2_vsub_odd_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5724
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.i64[0] = widen(a.i32[1]) - widen(b.i32[1]);
dst.i64[1] = widen(a.i32[3]) - widen(b.i32[3]);
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
return (__m128i)__builtin_msa2_vsub_odd_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vsub_odd_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.u.w2x.b
Builtin: __builtin_msa2_vsub_odd_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5766
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
return (__m128i)__builtin_msa2_vsub_odd_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vsub_odd_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.u.w2x.d
Builtin: __builtin_msa2_vsub_odd_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5829
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u128[0] = widen(a.u64[1]) - widen(b.u64[1]);
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
return (__m128i)__builtin_msa2_vsub_odd_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vsub_odd_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.u.w2x.h
Builtin: __builtin_msa2_vsub_odd_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5787
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u32[0] = widen(a.u16[1]) - widen(b.u16[1]);
dst.u32[1] = widen(a.u16[3]) - widen(b.u16[3]);
dst.u32[2] = widen(a.u16[5]) - widen(b.u16[5]);
dst.u32[3] = widen(a.u16[7]) - widen(b.u16[7]);
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
return (__m128i)__builtin_msa2_vsub_odd_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vsub_odd_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.u.w2x.w
Builtin: __builtin_msa2_vsub_odd_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5808
```

### Description

Widen odd-numbered source lanes, subtract them in wider lanes. This avoids overflow from narrow intermediates.

### Operation

```c
dst.u64[0] = widen(a.u32[1]) - widen(b.u32[1]);
dst.u64[1] = widen(a.u32[3]) - widen(b.u32[3]);
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
return (__m128i)__builtin_msa2_vsub_odd_u_w2x_w((v4u32) a, (v4u32) b);
```

