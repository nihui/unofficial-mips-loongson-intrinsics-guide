# Permutation

Generated from `include/loongson-asxintrin.h`. This page contains 160 intrinsics.

## __m256i __lasx_mxfill_b (int imm)

### Synopsis

```c
__m256i __lasx_mxfill_b (int imm)
#include <loongson-asxintrin.h>
Instruction: mxfill.b
Builtin: __builtin_lasx_mxfill_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1871
```

### Description

Replicate scalar `imm` into every u8 lane, creating a vector constant.

### Operation

```c
dst.u8[0] = truncate_or_extend(imm, 8);
dst.u8[1] = truncate_or_extend(imm, 8);
dst.u8[2] = truncate_or_extend(imm, 8);
dst.u8[3] = truncate_or_extend(imm, 8);
dst.u8[4] = truncate_or_extend(imm, 8);
dst.u8[5] = truncate_or_extend(imm, 8);
dst.u8[6] = truncate_or_extend(imm, 8);
dst.u8[7] = truncate_or_extend(imm, 8);
dst.u8[8] = truncate_or_extend(imm, 8);
dst.u8[9] = truncate_or_extend(imm, 8);
dst.u8[10] = truncate_or_extend(imm, 8);
dst.u8[11] = truncate_or_extend(imm, 8);
dst.u8[12] = truncate_or_extend(imm, 8);
dst.u8[13] = truncate_or_extend(imm, 8);
dst.u8[14] = truncate_or_extend(imm, 8);
dst.u8[15] = truncate_or_extend(imm, 8);
dst.u8[16] = truncate_or_extend(imm, 8);
dst.u8[17] = truncate_or_extend(imm, 8);
dst.u8[18] = truncate_or_extend(imm, 8);
dst.u8[19] = truncate_or_extend(imm, 8);
dst.u8[20] = truncate_or_extend(imm, 8);
dst.u8[21] = truncate_or_extend(imm, 8);
dst.u8[22] = truncate_or_extend(imm, 8);
dst.u8[23] = truncate_or_extend(imm, 8);
dst.u8[24] = truncate_or_extend(imm, 8);
dst.u8[25] = truncate_or_extend(imm, 8);
dst.u8[26] = truncate_or_extend(imm, 8);
dst.u8[27] = truncate_or_extend(imm, 8);
dst.u8[28] = truncate_or_extend(imm, 8);
dst.u8[29] = truncate_or_extend(imm, 8);
dst.u8[30] = truncate_or_extend(imm, 8);
dst.u8[31] = truncate_or_extend(imm, 8);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxfill_b (imm);
```

## __m256i __lasx_mxfill_d (long int imm)

### Synopsis

```c
__m256i __lasx_mxfill_d (long int imm)
#include <loongson-asxintrin.h>
Instruction: mxfill.d
Builtin: __builtin_lasx_mxfill_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1892
```

### Description

Replicate scalar `imm` into every fp64 lane, creating a vector constant.

### Operation

```c
dst.u64[0] = truncate_or_extend(imm, 64);
dst.u64[1] = truncate_or_extend(imm, 64);
dst.u64[2] = truncate_or_extend(imm, 64);
dst.u64[3] = truncate_or_extend(imm, 64);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxfill_d (imm);
```

## __m256i __lasx_mxfill_h (int imm)

### Synopsis

```c
__m256i __lasx_mxfill_h (int imm)
#include <loongson-asxintrin.h>
Instruction: mxfill.h
Builtin: __builtin_lasx_mxfill_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1878
```

### Description

Replicate scalar `imm` into every fp16 lane, creating a vector constant.

### Operation

```c
dst.u16[0] = truncate_or_extend(imm, 16);
dst.u16[1] = truncate_or_extend(imm, 16);
dst.u16[2] = truncate_or_extend(imm, 16);
dst.u16[3] = truncate_or_extend(imm, 16);
dst.u16[4] = truncate_or_extend(imm, 16);
dst.u16[5] = truncate_or_extend(imm, 16);
dst.u16[6] = truncate_or_extend(imm, 16);
dst.u16[7] = truncate_or_extend(imm, 16);
dst.u16[8] = truncate_or_extend(imm, 16);
dst.u16[9] = truncate_or_extend(imm, 16);
dst.u16[10] = truncate_or_extend(imm, 16);
dst.u16[11] = truncate_or_extend(imm, 16);
dst.u16[12] = truncate_or_extend(imm, 16);
dst.u16[13] = truncate_or_extend(imm, 16);
dst.u16[14] = truncate_or_extend(imm, 16);
dst.u16[15] = truncate_or_extend(imm, 16);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxfill_h (imm);
```

## __m256i __lasx_mxfill_w (int imm)

### Synopsis

```c
__m256i __lasx_mxfill_w (int imm)
#include <loongson-asxintrin.h>
Instruction: mxfill.w
Builtin: __builtin_lasx_mxfill_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1885
```

### Description

Replicate scalar `imm` into every fp32 lane, creating a vector constant.

### Operation

```c
dst.u32[0] = truncate_or_extend(imm, 32);
dst.u32[1] = truncate_or_extend(imm, 32);
dst.u32[2] = truncate_or_extend(imm, 32);
dst.u32[3] = truncate_or_extend(imm, 32);
dst.u32[4] = truncate_or_extend(imm, 32);
dst.u32[5] = truncate_or_extend(imm, 32);
dst.u32[6] = truncate_or_extend(imm, 32);
dst.u32[7] = truncate_or_extend(imm, 32);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxfill_w (imm);
```

## __m256i __lasx_mxilvev_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvev_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvev.b
Builtin: __builtin_lasx_mxilvev_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1728
```

### Description

Take even-numbered u8 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(even u8 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxilvev_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxilvev_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvev_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvev.d
Builtin: __builtin_lasx_mxilvev_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1749
```

### Description

Take even-numbered u64 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(even u64 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxilvev_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxilvev_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvev_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvev.h
Builtin: __builtin_lasx_mxilvev_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1735
```

### Description

Take even-numbered u16 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(even u16 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxilvev_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxilvev_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvev_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvev.w
Builtin: __builtin_lasx_mxilvev_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1742
```

### Description

Take even-numbered u32 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(even u32 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxilvev_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxilvl_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvl_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvl.b
Builtin: __builtin_lasx_mxilvl_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1672
```

### Description

Interleave lower-half u8 lanes from `a` and `b`, useful when expanding two packed streams.

### Operation

```c
dst = interleave_lower_u8_lanes(a, b);
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
return (__m256i)__builtin_lasx_mxilvl_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxilvl_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvl_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvl.d
Builtin: __builtin_lasx_mxilvl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1693
```

### Description

Interleave lower-half u64 lanes from `a` and `b`, useful when expanding two packed streams.

### Operation

```c
dst = interleave_lower_u64_lanes(a, b);
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
return (__m256i)__builtin_lasx_mxilvl_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxilvl_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvl_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvl.h
Builtin: __builtin_lasx_mxilvl_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1679
```

### Description

Interleave lower-half u16 lanes from `a` and `b`, useful when expanding two packed streams.

### Operation

```c
dst = interleave_lower_u16_lanes(a, b);
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
return (__m256i)__builtin_lasx_mxilvl_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxilvl_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvl_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvl.w
Builtin: __builtin_lasx_mxilvl_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1686
```

### Description

Interleave lower-half u32 lanes from `a` and `b`, useful when expanding two packed streams.

### Operation

```c
dst = interleave_lower_u32_lanes(a, b);
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
return (__m256i)__builtin_lasx_mxilvl_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxilvod_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvod_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvod.b
Builtin: __builtin_lasx_mxilvod_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1756
```

### Description

Take odd-numbered u8 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(odd u8 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxilvod_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxilvod_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvod_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvod.d
Builtin: __builtin_lasx_mxilvod_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1777
```

### Description

Take odd-numbered u64 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(odd u64 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxilvod_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxilvod_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvod_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvod.h
Builtin: __builtin_lasx_mxilvod_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1763
```

### Description

Take odd-numbered u16 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(odd u16 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxilvod_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxilvod_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvod_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvod.w
Builtin: __builtin_lasx_mxilvod_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1770
```

### Description

Take odd-numbered u32 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(odd u32 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxilvod_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxilvr_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvr_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvr.b
Builtin: __builtin_lasx_mxilvr_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1700
```

### Description

Interleave upper-half u8 lanes from `a` and `b`, useful when expanding two packed streams.

### Operation

```c
dst = interleave_upper_u8_lanes(a, b);
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
return (__m256i)__builtin_lasx_mxilvr_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxilvr_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvr_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvr.d
Builtin: __builtin_lasx_mxilvr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1721
```

### Description

Interleave upper-half u64 lanes from `a` and `b`, useful when expanding two packed streams.

### Operation

```c
dst = interleave_upper_u64_lanes(a, b);
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
return (__m256i)__builtin_lasx_mxilvr_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxilvr_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvr_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvr.h
Builtin: __builtin_lasx_mxilvr_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1707
```

### Description

Interleave upper-half u16 lanes from `a` and `b`, useful when expanding two packed streams.

### Operation

```c
dst = interleave_upper_u16_lanes(a, b);
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
return (__m256i)__builtin_lasx_mxilvr_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxilvr_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxilvr_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxilvr.w
Builtin: __builtin_lasx_mxilvr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1714
```

### Description

Interleave upper-half u32 lanes from `a` and `b`, useful when expanding two packed streams.

### Operation

```c
dst = interleave_upper_u32_lanes(a, b);
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
return (__m256i)__builtin_lasx_mxilvr_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxinsve_b (__m256i a, unsigned char imm, __m256i b)

### Synopsis

```c
__m256i __lasx_mxinsve_b (__m256i a, unsigned char imm, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxinsve.b
Builtin: __builtin_lasx_mxinsve_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1981
```

### Description

Start from `a` and replace the selected u8 lane in each 128-bit half with lane 0 from the matching half of `b`.

### Operation

```c
dst = a;
dst.u8[imm] = b.u8[0];
dst.u8[imm + 16] = b.u8[16];
```

### Header Mapping

```c
#define __lasx_mxinsve_b(a, imm, b) ((__m256i)__builtin_lasx_mxinsve_b((v32i8)(a), (imm), (v32i8)(b)))
```

## __m256i __lasx_mxinsve_d (__m256i a, unsigned char imm, __m256i b)

### Synopsis

```c
__m256i __lasx_mxinsve_d (__m256i a, unsigned char imm, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxinsve.d
Builtin: __builtin_lasx_mxinsve_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1984
```

### Description

Start from `a` and replace the selected u64 lane in each 128-bit half with lane 0 from the matching half of `b`.

### Operation

```c
dst = a;
dst.u64[imm] = b.u64[0];
dst.u64[imm + 2] = b.u64[2];
```

### Header Mapping

```c
#define __lasx_mxinsve_d(a, imm, b) ((__m256i)__builtin_lasx_mxinsve_d((v4i64)(a), (imm), (v4i64)(b)))
```

## __m256i __lasx_mxinsve_h (__m256i a, unsigned char imm, __m256i b)

### Synopsis

```c
__m256i __lasx_mxinsve_h (__m256i a, unsigned char imm, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxinsve.h
Builtin: __builtin_lasx_mxinsve_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1982
```

### Description

Start from `a` and replace the selected u16 lane in each 128-bit half with lane 0 from the matching half of `b`.

### Operation

```c
dst = a;
dst.u16[imm] = b.u16[0];
dst.u16[imm + 8] = b.u16[8];
```

### Header Mapping

```c
#define __lasx_mxinsve_h(a, imm, b) ((__m256i)__builtin_lasx_mxinsve_h((v16i16)(a), (imm), (v16i16)(b)))
```

## __m256i __lasx_mxinsve_w (__m256i a, unsigned char imm, __m256i b)

### Synopsis

```c
__m256i __lasx_mxinsve_w (__m256i a, unsigned char imm, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxinsve.w
Builtin: __builtin_lasx_mxinsve_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1983
```

### Description

Start from `a` and replace the selected u32 lane in each 128-bit half with lane 0 from the matching half of `b`.

### Operation

```c
dst = a;
dst.u32[imm] = b.u32[0];
dst.u32[imm + 4] = b.u32[4];
```

### Header Mapping

```c
#define __lasx_mxinsve_w(a, imm, b) ((__m256i)__builtin_lasx_mxinsve_w((v8i32)(a), (imm), (v8i32)(b)))
```

## __m256i __lasx_mxldi_b (short int imm)

### Synopsis

```c
__m256i __lasx_mxldi_b (short int imm)
#include <loongson-asxintrin.h>
Instruction: mxldi.b
Builtin: __builtin_lasx_mxldi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1985
```

### Description

Fill every u8 lane from a sign- or zero-extended immediate constant.

### Operation

```c
dst.u8[0] = sign_extend_or_zero_extend(imm, 8);
dst.u8[1] = sign_extend_or_zero_extend(imm, 8);
dst.u8[2] = sign_extend_or_zero_extend(imm, 8);
dst.u8[3] = sign_extend_or_zero_extend(imm, 8);
dst.u8[4] = sign_extend_or_zero_extend(imm, 8);
dst.u8[5] = sign_extend_or_zero_extend(imm, 8);
dst.u8[6] = sign_extend_or_zero_extend(imm, 8);
dst.u8[7] = sign_extend_or_zero_extend(imm, 8);
dst.u8[8] = sign_extend_or_zero_extend(imm, 8);
dst.u8[9] = sign_extend_or_zero_extend(imm, 8);
dst.u8[10] = sign_extend_or_zero_extend(imm, 8);
dst.u8[11] = sign_extend_or_zero_extend(imm, 8);
dst.u8[12] = sign_extend_or_zero_extend(imm, 8);
dst.u8[13] = sign_extend_or_zero_extend(imm, 8);
dst.u8[14] = sign_extend_or_zero_extend(imm, 8);
dst.u8[15] = sign_extend_or_zero_extend(imm, 8);
dst.u8[16] = sign_extend_or_zero_extend(imm, 8);
dst.u8[17] = sign_extend_or_zero_extend(imm, 8);
dst.u8[18] = sign_extend_or_zero_extend(imm, 8);
dst.u8[19] = sign_extend_or_zero_extend(imm, 8);
dst.u8[20] = sign_extend_or_zero_extend(imm, 8);
dst.u8[21] = sign_extend_or_zero_extend(imm, 8);
dst.u8[22] = sign_extend_or_zero_extend(imm, 8);
dst.u8[23] = sign_extend_or_zero_extend(imm, 8);
dst.u8[24] = sign_extend_or_zero_extend(imm, 8);
dst.u8[25] = sign_extend_or_zero_extend(imm, 8);
dst.u8[26] = sign_extend_or_zero_extend(imm, 8);
dst.u8[27] = sign_extend_or_zero_extend(imm, 8);
dst.u8[28] = sign_extend_or_zero_extend(imm, 8);
dst.u8[29] = sign_extend_or_zero_extend(imm, 8);
dst.u8[30] = sign_extend_or_zero_extend(imm, 8);
dst.u8[31] = sign_extend_or_zero_extend(imm, 8);
```

### Header Mapping

```c
#define __lasx_mxldi_b(imm) ((__m256i)__builtin_lasx_mxldi_b((imm)))
```

## __m256i __lasx_mxldi_d (short int imm)

### Synopsis

```c
__m256i __lasx_mxldi_d (short int imm)
#include <loongson-asxintrin.h>
Instruction: mxldi.d
Builtin: __builtin_lasx_mxldi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1988
```

### Description

Fill every u64 lane from a sign- or zero-extended immediate constant.

### Operation

```c
dst.u64[0] = sign_extend_or_zero_extend(imm, 64);
dst.u64[1] = sign_extend_or_zero_extend(imm, 64);
dst.u64[2] = sign_extend_or_zero_extend(imm, 64);
dst.u64[3] = sign_extend_or_zero_extend(imm, 64);
```

### Header Mapping

```c
#define __lasx_mxldi_d(imm) ((__m256i)__builtin_lasx_mxldi_d((imm)))
```

## __m256i __lasx_mxldi_h (short int imm)

### Synopsis

```c
__m256i __lasx_mxldi_h (short int imm)
#include <loongson-asxintrin.h>
Instruction: mxldi.h
Builtin: __builtin_lasx_mxldi_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1986
```

### Description

Fill every u16 lane from a sign- or zero-extended immediate constant.

### Operation

```c
dst.u16[0] = sign_extend_or_zero_extend(imm, 16);
dst.u16[1] = sign_extend_or_zero_extend(imm, 16);
dst.u16[2] = sign_extend_or_zero_extend(imm, 16);
dst.u16[3] = sign_extend_or_zero_extend(imm, 16);
dst.u16[4] = sign_extend_or_zero_extend(imm, 16);
dst.u16[5] = sign_extend_or_zero_extend(imm, 16);
dst.u16[6] = sign_extend_or_zero_extend(imm, 16);
dst.u16[7] = sign_extend_or_zero_extend(imm, 16);
dst.u16[8] = sign_extend_or_zero_extend(imm, 16);
dst.u16[9] = sign_extend_or_zero_extend(imm, 16);
dst.u16[10] = sign_extend_or_zero_extend(imm, 16);
dst.u16[11] = sign_extend_or_zero_extend(imm, 16);
dst.u16[12] = sign_extend_or_zero_extend(imm, 16);
dst.u16[13] = sign_extend_or_zero_extend(imm, 16);
dst.u16[14] = sign_extend_or_zero_extend(imm, 16);
dst.u16[15] = sign_extend_or_zero_extend(imm, 16);
```

### Header Mapping

```c
#define __lasx_mxldi_h(imm) ((__m256i)__builtin_lasx_mxldi_h((imm)))
```

## __m256i __lasx_mxldi_w (short int imm)

### Synopsis

```c
__m256i __lasx_mxldi_w (short int imm)
#include <loongson-asxintrin.h>
Instruction: mxldi.w
Builtin: __builtin_lasx_mxldi_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1987
```

### Description

Fill every u32 lane from a sign- or zero-extended immediate constant.

### Operation

```c
dst.u32[0] = sign_extend_or_zero_extend(imm, 32);
dst.u32[1] = sign_extend_or_zero_extend(imm, 32);
dst.u32[2] = sign_extend_or_zero_extend(imm, 32);
dst.u32[3] = sign_extend_or_zero_extend(imm, 32);
dst.u32[4] = sign_extend_or_zero_extend(imm, 32);
dst.u32[5] = sign_extend_or_zero_extend(imm, 32);
dst.u32[6] = sign_extend_or_zero_extend(imm, 32);
dst.u32[7] = sign_extend_or_zero_extend(imm, 32);
```

### Header Mapping

```c
#define __lasx_mxldi_w(imm) ((__m256i)__builtin_lasx_mxldi_w((imm)))
```

## __m256i __lasx_mxmove_v (__m256i a)

### Synopsis

```c
__m256i __lasx_mxmove_v (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxmove.v
Builtin: __builtin_lasx_mxmove_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2788
```

### Description

Return the source vector unchanged; this wrapper exposes the move/copy builtin form.

### Operation

```c
dst = a;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmove_v((v32i8)a);
```

## __m256i __lasx_mxn2x_rnd_sx_nc_b (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_nc_b (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.nc.b
Builtin: __builtin_lasx_mxn2x_rnd_sx_nc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4614
```

### Description

Narrow u16 elements into u8 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = truncate(rounding_shift(a.i16[0], imm), 8);
dst.u8[1] = truncate(rounding_shift(a.i16[1], imm), 8);
dst.u8[2] = truncate(rounding_shift(a.i16[2], imm), 8);
dst.u8[3] = truncate(rounding_shift(a.i16[3], imm), 8);
dst.u8[4] = truncate(rounding_shift(a.i16[4], imm), 8);
dst.u8[5] = truncate(rounding_shift(a.i16[5], imm), 8);
dst.u8[6] = truncate(rounding_shift(a.i16[6], imm), 8);
dst.u8[7] = truncate(rounding_shift(a.i16[7], imm), 8);
dst.u8[8] = truncate(rounding_shift(a.i16[8], imm), 8);
dst.u8[9] = truncate(rounding_shift(a.i16[9], imm), 8);
dst.u8[10] = truncate(rounding_shift(a.i16[10], imm), 8);
dst.u8[11] = truncate(rounding_shift(a.i16[11], imm), 8);
dst.u8[12] = truncate(rounding_shift(a.i16[12], imm), 8);
dst.u8[13] = truncate(rounding_shift(a.i16[13], imm), 8);
dst.u8[14] = truncate(rounding_shift(a.i16[14], imm), 8);
dst.u8[15] = truncate(rounding_shift(a.i16[15], imm), 8);
dst.u8[16] = truncate(rounding_shift(a.i16[16], imm), 8);
dst.u8[17] = truncate(rounding_shift(a.i16[17], imm), 8);
dst.u8[18] = truncate(rounding_shift(a.i16[18], imm), 8);
dst.u8[19] = truncate(rounding_shift(a.i16[19], imm), 8);
dst.u8[20] = truncate(rounding_shift(a.i16[20], imm), 8);
dst.u8[21] = truncate(rounding_shift(a.i16[21], imm), 8);
dst.u8[22] = truncate(rounding_shift(a.i16[22], imm), 8);
dst.u8[23] = truncate(rounding_shift(a.i16[23], imm), 8);
dst.u8[24] = truncate(rounding_shift(a.i16[24], imm), 8);
dst.u8[25] = truncate(rounding_shift(a.i16[25], imm), 8);
dst.u8[26] = truncate(rounding_shift(a.i16[26], imm), 8);
dst.u8[27] = truncate(rounding_shift(a.i16[27], imm), 8);
dst.u8[28] = truncate(rounding_shift(a.i16[28], imm), 8);
dst.u8[29] = truncate(rounding_shift(a.i16[29], imm), 8);
dst.u8[30] = truncate(rounding_shift(a.i16[30], imm), 8);
dst.u8[31] = truncate(rounding_shift(a.i16[31], imm), 8);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_nc_b(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_sx_nc_b ((v32i8) a, imm);
```

## __m256i __lasx_mxn2x_rnd_sx_nc_d (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_nc_d (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.nc.d
Builtin: __builtin_lasx_mxn2x_rnd_sx_nc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4623
```

### Description

Narrow u128 elements into u64 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = truncate(rounding_shift(a.i128[0], imm), 64);
dst.u64[1] = truncate(rounding_shift(a.i128[1], imm), 64);
dst.u64[2] = truncate(rounding_shift(a.i128[2], imm), 64);
dst.u64[3] = truncate(rounding_shift(a.i128[3], imm), 64);
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
#define __lasx_mxn2x_rnd_sx_nc_d(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_sx_nc_d ((v4i64) a, imm);
```

## __m256i __lasx_mxn2x_rnd_sx_nc_h (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_nc_h (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.nc.h
Builtin: __builtin_lasx_mxn2x_rnd_sx_nc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4617
```

### Description

Narrow u32 elements into u16 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = truncate(rounding_shift(a.i32[0], imm), 16);
dst.u16[1] = truncate(rounding_shift(a.i32[1], imm), 16);
dst.u16[2] = truncate(rounding_shift(a.i32[2], imm), 16);
dst.u16[3] = truncate(rounding_shift(a.i32[3], imm), 16);
dst.u16[4] = truncate(rounding_shift(a.i32[4], imm), 16);
dst.u16[5] = truncate(rounding_shift(a.i32[5], imm), 16);
dst.u16[6] = truncate(rounding_shift(a.i32[6], imm), 16);
dst.u16[7] = truncate(rounding_shift(a.i32[7], imm), 16);
dst.u16[8] = truncate(rounding_shift(a.i32[8], imm), 16);
dst.u16[9] = truncate(rounding_shift(a.i32[9], imm), 16);
dst.u16[10] = truncate(rounding_shift(a.i32[10], imm), 16);
dst.u16[11] = truncate(rounding_shift(a.i32[11], imm), 16);
dst.u16[12] = truncate(rounding_shift(a.i32[12], imm), 16);
dst.u16[13] = truncate(rounding_shift(a.i32[13], imm), 16);
dst.u16[14] = truncate(rounding_shift(a.i32[14], imm), 16);
dst.u16[15] = truncate(rounding_shift(a.i32[15], imm), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_nc_h(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_sx_nc_h ((v16i16) a, imm);
```

## __m256i __lasx_mxn2x_rnd_sx_nc_w (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_nc_w (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.nc.w
Builtin: __builtin_lasx_mxn2x_rnd_sx_nc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4620
```

### Description

Narrow u64 elements into u32 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = truncate(rounding_shift(a.i64[0], imm), 32);
dst.u32[1] = truncate(rounding_shift(a.i64[1], imm), 32);
dst.u32[2] = truncate(rounding_shift(a.i64[2], imm), 32);
dst.u32[3] = truncate(rounding_shift(a.i64[3], imm), 32);
dst.u32[4] = truncate(rounding_shift(a.i64[4], imm), 32);
dst.u32[5] = truncate(rounding_shift(a.i64[5], imm), 32);
dst.u32[6] = truncate(rounding_shift(a.i64[6], imm), 32);
dst.u32[7] = truncate(rounding_shift(a.i64[7], imm), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_nc_w(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_sx_nc_w ((v8i32) a, imm);
```

## __m256i __lasx_mxn2x_rnd_sx_sc_b (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_sc_b (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.sc.b
Builtin: __builtin_lasx_mxn2x_rnd_sx_sc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4590
```

### Description

Narrow u16 elements into u8 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = signed_saturate(rounding_shift(a.i16[0], imm), 8);
dst.u8[1] = signed_saturate(rounding_shift(a.i16[1], imm), 8);
dst.u8[2] = signed_saturate(rounding_shift(a.i16[2], imm), 8);
dst.u8[3] = signed_saturate(rounding_shift(a.i16[3], imm), 8);
dst.u8[4] = signed_saturate(rounding_shift(a.i16[4], imm), 8);
dst.u8[5] = signed_saturate(rounding_shift(a.i16[5], imm), 8);
dst.u8[6] = signed_saturate(rounding_shift(a.i16[6], imm), 8);
dst.u8[7] = signed_saturate(rounding_shift(a.i16[7], imm), 8);
dst.u8[8] = signed_saturate(rounding_shift(a.i16[8], imm), 8);
dst.u8[9] = signed_saturate(rounding_shift(a.i16[9], imm), 8);
dst.u8[10] = signed_saturate(rounding_shift(a.i16[10], imm), 8);
dst.u8[11] = signed_saturate(rounding_shift(a.i16[11], imm), 8);
dst.u8[12] = signed_saturate(rounding_shift(a.i16[12], imm), 8);
dst.u8[13] = signed_saturate(rounding_shift(a.i16[13], imm), 8);
dst.u8[14] = signed_saturate(rounding_shift(a.i16[14], imm), 8);
dst.u8[15] = signed_saturate(rounding_shift(a.i16[15], imm), 8);
dst.u8[16] = signed_saturate(rounding_shift(a.i16[16], imm), 8);
dst.u8[17] = signed_saturate(rounding_shift(a.i16[17], imm), 8);
dst.u8[18] = signed_saturate(rounding_shift(a.i16[18], imm), 8);
dst.u8[19] = signed_saturate(rounding_shift(a.i16[19], imm), 8);
dst.u8[20] = signed_saturate(rounding_shift(a.i16[20], imm), 8);
dst.u8[21] = signed_saturate(rounding_shift(a.i16[21], imm), 8);
dst.u8[22] = signed_saturate(rounding_shift(a.i16[22], imm), 8);
dst.u8[23] = signed_saturate(rounding_shift(a.i16[23], imm), 8);
dst.u8[24] = signed_saturate(rounding_shift(a.i16[24], imm), 8);
dst.u8[25] = signed_saturate(rounding_shift(a.i16[25], imm), 8);
dst.u8[26] = signed_saturate(rounding_shift(a.i16[26], imm), 8);
dst.u8[27] = signed_saturate(rounding_shift(a.i16[27], imm), 8);
dst.u8[28] = signed_saturate(rounding_shift(a.i16[28], imm), 8);
dst.u8[29] = signed_saturate(rounding_shift(a.i16[29], imm), 8);
dst.u8[30] = signed_saturate(rounding_shift(a.i16[30], imm), 8);
dst.u8[31] = signed_saturate(rounding_shift(a.i16[31], imm), 8);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_sc_b(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_sx_sc_b ((v32i8) a, imm);
```

## __m256i __lasx_mxn2x_rnd_sx_sc_d (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_sc_d (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.sc.d
Builtin: __builtin_lasx_mxn2x_rnd_sx_sc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4599
```

### Description

Narrow u128 elements into u64 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = signed_saturate(rounding_shift(a.i128[0], imm), 64);
dst.u64[1] = signed_saturate(rounding_shift(a.i128[1], imm), 64);
dst.u64[2] = signed_saturate(rounding_shift(a.i128[2], imm), 64);
dst.u64[3] = signed_saturate(rounding_shift(a.i128[3], imm), 64);
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
#define __lasx_mxn2x_rnd_sx_sc_d(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_sx_sc_d ((v4i64) a, imm);
```

## __m256i __lasx_mxn2x_rnd_sx_sc_h (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_sc_h (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.sc.h
Builtin: __builtin_lasx_mxn2x_rnd_sx_sc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4593
```

### Description

Narrow u32 elements into u16 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = signed_saturate(rounding_shift(a.i32[0], imm), 16);
dst.u16[1] = signed_saturate(rounding_shift(a.i32[1], imm), 16);
dst.u16[2] = signed_saturate(rounding_shift(a.i32[2], imm), 16);
dst.u16[3] = signed_saturate(rounding_shift(a.i32[3], imm), 16);
dst.u16[4] = signed_saturate(rounding_shift(a.i32[4], imm), 16);
dst.u16[5] = signed_saturate(rounding_shift(a.i32[5], imm), 16);
dst.u16[6] = signed_saturate(rounding_shift(a.i32[6], imm), 16);
dst.u16[7] = signed_saturate(rounding_shift(a.i32[7], imm), 16);
dst.u16[8] = signed_saturate(rounding_shift(a.i32[8], imm), 16);
dst.u16[9] = signed_saturate(rounding_shift(a.i32[9], imm), 16);
dst.u16[10] = signed_saturate(rounding_shift(a.i32[10], imm), 16);
dst.u16[11] = signed_saturate(rounding_shift(a.i32[11], imm), 16);
dst.u16[12] = signed_saturate(rounding_shift(a.i32[12], imm), 16);
dst.u16[13] = signed_saturate(rounding_shift(a.i32[13], imm), 16);
dst.u16[14] = signed_saturate(rounding_shift(a.i32[14], imm), 16);
dst.u16[15] = signed_saturate(rounding_shift(a.i32[15], imm), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_sc_h(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_sx_sc_h ((v16i16) a, imm);
```

## __m256i __lasx_mxn2x_rnd_sx_sc_w (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_sc_w (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.sc.w
Builtin: __builtin_lasx_mxn2x_rnd_sx_sc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4596
```

### Description

Narrow u64 elements into u32 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = signed_saturate(rounding_shift(a.i64[0], imm), 32);
dst.u32[1] = signed_saturate(rounding_shift(a.i64[1], imm), 32);
dst.u32[2] = signed_saturate(rounding_shift(a.i64[2], imm), 32);
dst.u32[3] = signed_saturate(rounding_shift(a.i64[3], imm), 32);
dst.u32[4] = signed_saturate(rounding_shift(a.i64[4], imm), 32);
dst.u32[5] = signed_saturate(rounding_shift(a.i64[5], imm), 32);
dst.u32[6] = signed_saturate(rounding_shift(a.i64[6], imm), 32);
dst.u32[7] = signed_saturate(rounding_shift(a.i64[7], imm), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_sc_w(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_sx_sc_w ((v8i32) a, imm);
```

## __m256i __lasx_mxn2x_rnd_sx_uc_b (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_uc_b (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.uc.b
Builtin: __builtin_lasx_mxn2x_rnd_sx_uc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4602
```

### Description

Narrow u16 elements into u8 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = unsigned_saturate(rounding_shift(a.i16[0], imm), 8);
dst.u8[1] = unsigned_saturate(rounding_shift(a.i16[1], imm), 8);
dst.u8[2] = unsigned_saturate(rounding_shift(a.i16[2], imm), 8);
dst.u8[3] = unsigned_saturate(rounding_shift(a.i16[3], imm), 8);
dst.u8[4] = unsigned_saturate(rounding_shift(a.i16[4], imm), 8);
dst.u8[5] = unsigned_saturate(rounding_shift(a.i16[5], imm), 8);
dst.u8[6] = unsigned_saturate(rounding_shift(a.i16[6], imm), 8);
dst.u8[7] = unsigned_saturate(rounding_shift(a.i16[7], imm), 8);
dst.u8[8] = unsigned_saturate(rounding_shift(a.i16[8], imm), 8);
dst.u8[9] = unsigned_saturate(rounding_shift(a.i16[9], imm), 8);
dst.u8[10] = unsigned_saturate(rounding_shift(a.i16[10], imm), 8);
dst.u8[11] = unsigned_saturate(rounding_shift(a.i16[11], imm), 8);
dst.u8[12] = unsigned_saturate(rounding_shift(a.i16[12], imm), 8);
dst.u8[13] = unsigned_saturate(rounding_shift(a.i16[13], imm), 8);
dst.u8[14] = unsigned_saturate(rounding_shift(a.i16[14], imm), 8);
dst.u8[15] = unsigned_saturate(rounding_shift(a.i16[15], imm), 8);
dst.u8[16] = unsigned_saturate(rounding_shift(a.i16[16], imm), 8);
dst.u8[17] = unsigned_saturate(rounding_shift(a.i16[17], imm), 8);
dst.u8[18] = unsigned_saturate(rounding_shift(a.i16[18], imm), 8);
dst.u8[19] = unsigned_saturate(rounding_shift(a.i16[19], imm), 8);
dst.u8[20] = unsigned_saturate(rounding_shift(a.i16[20], imm), 8);
dst.u8[21] = unsigned_saturate(rounding_shift(a.i16[21], imm), 8);
dst.u8[22] = unsigned_saturate(rounding_shift(a.i16[22], imm), 8);
dst.u8[23] = unsigned_saturate(rounding_shift(a.i16[23], imm), 8);
dst.u8[24] = unsigned_saturate(rounding_shift(a.i16[24], imm), 8);
dst.u8[25] = unsigned_saturate(rounding_shift(a.i16[25], imm), 8);
dst.u8[26] = unsigned_saturate(rounding_shift(a.i16[26], imm), 8);
dst.u8[27] = unsigned_saturate(rounding_shift(a.i16[27], imm), 8);
dst.u8[28] = unsigned_saturate(rounding_shift(a.i16[28], imm), 8);
dst.u8[29] = unsigned_saturate(rounding_shift(a.i16[29], imm), 8);
dst.u8[30] = unsigned_saturate(rounding_shift(a.i16[30], imm), 8);
dst.u8[31] = unsigned_saturate(rounding_shift(a.i16[31], imm), 8);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_uc_b(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_sx_uc_b ((v32i8) a, imm);
```

## __m256i __lasx_mxn2x_rnd_sx_uc_d (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_uc_d (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.uc.d
Builtin: __builtin_lasx_mxn2x_rnd_sx_uc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4611
```

### Description

Narrow u128 elements into u64 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = unsigned_saturate(rounding_shift(a.i128[0], imm), 64);
dst.u64[1] = unsigned_saturate(rounding_shift(a.i128[1], imm), 64);
dst.u64[2] = unsigned_saturate(rounding_shift(a.i128[2], imm), 64);
dst.u64[3] = unsigned_saturate(rounding_shift(a.i128[3], imm), 64);
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
#define __lasx_mxn2x_rnd_sx_uc_d(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_sx_uc_d ((v4i64) a, imm);
```

## __m256i __lasx_mxn2x_rnd_sx_uc_h (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_uc_h (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.uc.h
Builtin: __builtin_lasx_mxn2x_rnd_sx_uc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4605
```

### Description

Narrow u32 elements into u16 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = unsigned_saturate(rounding_shift(a.i32[0], imm), 16);
dst.u16[1] = unsigned_saturate(rounding_shift(a.i32[1], imm), 16);
dst.u16[2] = unsigned_saturate(rounding_shift(a.i32[2], imm), 16);
dst.u16[3] = unsigned_saturate(rounding_shift(a.i32[3], imm), 16);
dst.u16[4] = unsigned_saturate(rounding_shift(a.i32[4], imm), 16);
dst.u16[5] = unsigned_saturate(rounding_shift(a.i32[5], imm), 16);
dst.u16[6] = unsigned_saturate(rounding_shift(a.i32[6], imm), 16);
dst.u16[7] = unsigned_saturate(rounding_shift(a.i32[7], imm), 16);
dst.u16[8] = unsigned_saturate(rounding_shift(a.i32[8], imm), 16);
dst.u16[9] = unsigned_saturate(rounding_shift(a.i32[9], imm), 16);
dst.u16[10] = unsigned_saturate(rounding_shift(a.i32[10], imm), 16);
dst.u16[11] = unsigned_saturate(rounding_shift(a.i32[11], imm), 16);
dst.u16[12] = unsigned_saturate(rounding_shift(a.i32[12], imm), 16);
dst.u16[13] = unsigned_saturate(rounding_shift(a.i32[13], imm), 16);
dst.u16[14] = unsigned_saturate(rounding_shift(a.i32[14], imm), 16);
dst.u16[15] = unsigned_saturate(rounding_shift(a.i32[15], imm), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_uc_h(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_sx_uc_h ((v16i16) a, imm);
```

## __m256i __lasx_mxn2x_rnd_sx_uc_w (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_uc_w (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.uc.w
Builtin: __builtin_lasx_mxn2x_rnd_sx_uc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4608
```

### Description

Narrow u64 elements into u32 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = unsigned_saturate(rounding_shift(a.i64[0], imm), 32);
dst.u32[1] = unsigned_saturate(rounding_shift(a.i64[1], imm), 32);
dst.u32[2] = unsigned_saturate(rounding_shift(a.i64[2], imm), 32);
dst.u32[3] = unsigned_saturate(rounding_shift(a.i64[3], imm), 32);
dst.u32[4] = unsigned_saturate(rounding_shift(a.i64[4], imm), 32);
dst.u32[5] = unsigned_saturate(rounding_shift(a.i64[5], imm), 32);
dst.u32[6] = unsigned_saturate(rounding_shift(a.i64[6], imm), 32);
dst.u32[7] = unsigned_saturate(rounding_shift(a.i64[7], imm), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_uc_w(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_sx_uc_w ((v8i32) a, imm);
```

## __m256i __lasx_mxn2x_rnd_ux_nc_b (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_nc_b (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.nc.b
Builtin: __builtin_lasx_mxn2x_rnd_ux_nc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4650
```

### Description

Narrow u16 elements into u8 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = truncate(rounding_shift(a.u16[0], imm), 8);
dst.u8[1] = truncate(rounding_shift(a.u16[1], imm), 8);
dst.u8[2] = truncate(rounding_shift(a.u16[2], imm), 8);
dst.u8[3] = truncate(rounding_shift(a.u16[3], imm), 8);
dst.u8[4] = truncate(rounding_shift(a.u16[4], imm), 8);
dst.u8[5] = truncate(rounding_shift(a.u16[5], imm), 8);
dst.u8[6] = truncate(rounding_shift(a.u16[6], imm), 8);
dst.u8[7] = truncate(rounding_shift(a.u16[7], imm), 8);
dst.u8[8] = truncate(rounding_shift(a.u16[8], imm), 8);
dst.u8[9] = truncate(rounding_shift(a.u16[9], imm), 8);
dst.u8[10] = truncate(rounding_shift(a.u16[10], imm), 8);
dst.u8[11] = truncate(rounding_shift(a.u16[11], imm), 8);
dst.u8[12] = truncate(rounding_shift(a.u16[12], imm), 8);
dst.u8[13] = truncate(rounding_shift(a.u16[13], imm), 8);
dst.u8[14] = truncate(rounding_shift(a.u16[14], imm), 8);
dst.u8[15] = truncate(rounding_shift(a.u16[15], imm), 8);
dst.u8[16] = truncate(rounding_shift(a.u16[16], imm), 8);
dst.u8[17] = truncate(rounding_shift(a.u16[17], imm), 8);
dst.u8[18] = truncate(rounding_shift(a.u16[18], imm), 8);
dst.u8[19] = truncate(rounding_shift(a.u16[19], imm), 8);
dst.u8[20] = truncate(rounding_shift(a.u16[20], imm), 8);
dst.u8[21] = truncate(rounding_shift(a.u16[21], imm), 8);
dst.u8[22] = truncate(rounding_shift(a.u16[22], imm), 8);
dst.u8[23] = truncate(rounding_shift(a.u16[23], imm), 8);
dst.u8[24] = truncate(rounding_shift(a.u16[24], imm), 8);
dst.u8[25] = truncate(rounding_shift(a.u16[25], imm), 8);
dst.u8[26] = truncate(rounding_shift(a.u16[26], imm), 8);
dst.u8[27] = truncate(rounding_shift(a.u16[27], imm), 8);
dst.u8[28] = truncate(rounding_shift(a.u16[28], imm), 8);
dst.u8[29] = truncate(rounding_shift(a.u16[29], imm), 8);
dst.u8[30] = truncate(rounding_shift(a.u16[30], imm), 8);
dst.u8[31] = truncate(rounding_shift(a.u16[31], imm), 8);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_nc_b(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_ux_nc_b ((v32i8) a, imm);
```

## __m256i __lasx_mxn2x_rnd_ux_nc_d (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_nc_d (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.nc.d
Builtin: __builtin_lasx_mxn2x_rnd_ux_nc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4659
```

### Description

Narrow u128 elements into u64 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = truncate(rounding_shift(a.u128[0], imm), 64);
dst.u64[1] = truncate(rounding_shift(a.u128[1], imm), 64);
dst.u64[2] = truncate(rounding_shift(a.u128[2], imm), 64);
dst.u64[3] = truncate(rounding_shift(a.u128[3], imm), 64);
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
#define __lasx_mxn2x_rnd_ux_nc_d(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_ux_nc_d ((v4i64) a, imm);
```

## __m256i __lasx_mxn2x_rnd_ux_nc_h (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_nc_h (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.nc.h
Builtin: __builtin_lasx_mxn2x_rnd_ux_nc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4653
```

### Description

Narrow u32 elements into u16 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = truncate(rounding_shift(a.u32[0], imm), 16);
dst.u16[1] = truncate(rounding_shift(a.u32[1], imm), 16);
dst.u16[2] = truncate(rounding_shift(a.u32[2], imm), 16);
dst.u16[3] = truncate(rounding_shift(a.u32[3], imm), 16);
dst.u16[4] = truncate(rounding_shift(a.u32[4], imm), 16);
dst.u16[5] = truncate(rounding_shift(a.u32[5], imm), 16);
dst.u16[6] = truncate(rounding_shift(a.u32[6], imm), 16);
dst.u16[7] = truncate(rounding_shift(a.u32[7], imm), 16);
dst.u16[8] = truncate(rounding_shift(a.u32[8], imm), 16);
dst.u16[9] = truncate(rounding_shift(a.u32[9], imm), 16);
dst.u16[10] = truncate(rounding_shift(a.u32[10], imm), 16);
dst.u16[11] = truncate(rounding_shift(a.u32[11], imm), 16);
dst.u16[12] = truncate(rounding_shift(a.u32[12], imm), 16);
dst.u16[13] = truncate(rounding_shift(a.u32[13], imm), 16);
dst.u16[14] = truncate(rounding_shift(a.u32[14], imm), 16);
dst.u16[15] = truncate(rounding_shift(a.u32[15], imm), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_nc_h(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_ux_nc_h ((v16i16) a, imm);
```

## __m256i __lasx_mxn2x_rnd_ux_nc_w (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_nc_w (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.nc.w
Builtin: __builtin_lasx_mxn2x_rnd_ux_nc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4656
```

### Description

Narrow u64 elements into u32 elements using rounding, conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = truncate(rounding_shift(a.u64[0], imm), 32);
dst.u32[1] = truncate(rounding_shift(a.u64[1], imm), 32);
dst.u32[2] = truncate(rounding_shift(a.u64[2], imm), 32);
dst.u32[3] = truncate(rounding_shift(a.u64[3], imm), 32);
dst.u32[4] = truncate(rounding_shift(a.u64[4], imm), 32);
dst.u32[5] = truncate(rounding_shift(a.u64[5], imm), 32);
dst.u32[6] = truncate(rounding_shift(a.u64[6], imm), 32);
dst.u32[7] = truncate(rounding_shift(a.u64[7], imm), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_nc_w(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_ux_nc_w ((v8i32) a, imm);
```

## __m256i __lasx_mxn2x_rnd_ux_sc_b (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_sc_b (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.sc.b
Builtin: __builtin_lasx_mxn2x_rnd_ux_sc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4626
```

### Description

Narrow u16 elements into u8 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = signed_saturate(rounding_shift(a.u16[0], imm), 8);
dst.u8[1] = signed_saturate(rounding_shift(a.u16[1], imm), 8);
dst.u8[2] = signed_saturate(rounding_shift(a.u16[2], imm), 8);
dst.u8[3] = signed_saturate(rounding_shift(a.u16[3], imm), 8);
dst.u8[4] = signed_saturate(rounding_shift(a.u16[4], imm), 8);
dst.u8[5] = signed_saturate(rounding_shift(a.u16[5], imm), 8);
dst.u8[6] = signed_saturate(rounding_shift(a.u16[6], imm), 8);
dst.u8[7] = signed_saturate(rounding_shift(a.u16[7], imm), 8);
dst.u8[8] = signed_saturate(rounding_shift(a.u16[8], imm), 8);
dst.u8[9] = signed_saturate(rounding_shift(a.u16[9], imm), 8);
dst.u8[10] = signed_saturate(rounding_shift(a.u16[10], imm), 8);
dst.u8[11] = signed_saturate(rounding_shift(a.u16[11], imm), 8);
dst.u8[12] = signed_saturate(rounding_shift(a.u16[12], imm), 8);
dst.u8[13] = signed_saturate(rounding_shift(a.u16[13], imm), 8);
dst.u8[14] = signed_saturate(rounding_shift(a.u16[14], imm), 8);
dst.u8[15] = signed_saturate(rounding_shift(a.u16[15], imm), 8);
dst.u8[16] = signed_saturate(rounding_shift(a.u16[16], imm), 8);
dst.u8[17] = signed_saturate(rounding_shift(a.u16[17], imm), 8);
dst.u8[18] = signed_saturate(rounding_shift(a.u16[18], imm), 8);
dst.u8[19] = signed_saturate(rounding_shift(a.u16[19], imm), 8);
dst.u8[20] = signed_saturate(rounding_shift(a.u16[20], imm), 8);
dst.u8[21] = signed_saturate(rounding_shift(a.u16[21], imm), 8);
dst.u8[22] = signed_saturate(rounding_shift(a.u16[22], imm), 8);
dst.u8[23] = signed_saturate(rounding_shift(a.u16[23], imm), 8);
dst.u8[24] = signed_saturate(rounding_shift(a.u16[24], imm), 8);
dst.u8[25] = signed_saturate(rounding_shift(a.u16[25], imm), 8);
dst.u8[26] = signed_saturate(rounding_shift(a.u16[26], imm), 8);
dst.u8[27] = signed_saturate(rounding_shift(a.u16[27], imm), 8);
dst.u8[28] = signed_saturate(rounding_shift(a.u16[28], imm), 8);
dst.u8[29] = signed_saturate(rounding_shift(a.u16[29], imm), 8);
dst.u8[30] = signed_saturate(rounding_shift(a.u16[30], imm), 8);
dst.u8[31] = signed_saturate(rounding_shift(a.u16[31], imm), 8);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_sc_b(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_ux_sc_b ((v32i8) a, imm);
```

## __m256i __lasx_mxn2x_rnd_ux_sc_d (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_sc_d (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.sc.d
Builtin: __builtin_lasx_mxn2x_rnd_ux_sc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4635
```

### Description

Narrow u128 elements into u64 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = signed_saturate(rounding_shift(a.u128[0], imm), 64);
dst.u64[1] = signed_saturate(rounding_shift(a.u128[1], imm), 64);
dst.u64[2] = signed_saturate(rounding_shift(a.u128[2], imm), 64);
dst.u64[3] = signed_saturate(rounding_shift(a.u128[3], imm), 64);
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
#define __lasx_mxn2x_rnd_ux_sc_d(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_ux_sc_d ((v4i64) a, imm);
```

## __m256i __lasx_mxn2x_rnd_ux_sc_h (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_sc_h (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.sc.h
Builtin: __builtin_lasx_mxn2x_rnd_ux_sc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4629
```

### Description

Narrow u32 elements into u16 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = signed_saturate(rounding_shift(a.u32[0], imm), 16);
dst.u16[1] = signed_saturate(rounding_shift(a.u32[1], imm), 16);
dst.u16[2] = signed_saturate(rounding_shift(a.u32[2], imm), 16);
dst.u16[3] = signed_saturate(rounding_shift(a.u32[3], imm), 16);
dst.u16[4] = signed_saturate(rounding_shift(a.u32[4], imm), 16);
dst.u16[5] = signed_saturate(rounding_shift(a.u32[5], imm), 16);
dst.u16[6] = signed_saturate(rounding_shift(a.u32[6], imm), 16);
dst.u16[7] = signed_saturate(rounding_shift(a.u32[7], imm), 16);
dst.u16[8] = signed_saturate(rounding_shift(a.u32[8], imm), 16);
dst.u16[9] = signed_saturate(rounding_shift(a.u32[9], imm), 16);
dst.u16[10] = signed_saturate(rounding_shift(a.u32[10], imm), 16);
dst.u16[11] = signed_saturate(rounding_shift(a.u32[11], imm), 16);
dst.u16[12] = signed_saturate(rounding_shift(a.u32[12], imm), 16);
dst.u16[13] = signed_saturate(rounding_shift(a.u32[13], imm), 16);
dst.u16[14] = signed_saturate(rounding_shift(a.u32[14], imm), 16);
dst.u16[15] = signed_saturate(rounding_shift(a.u32[15], imm), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_sc_h(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_ux_sc_h ((v16i16) a, imm);
```

## __m256i __lasx_mxn2x_rnd_ux_sc_w (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_sc_w (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.sc.w
Builtin: __builtin_lasx_mxn2x_rnd_ux_sc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4632
```

### Description

Narrow u64 elements into u32 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = signed_saturate(rounding_shift(a.u64[0], imm), 32);
dst.u32[1] = signed_saturate(rounding_shift(a.u64[1], imm), 32);
dst.u32[2] = signed_saturate(rounding_shift(a.u64[2], imm), 32);
dst.u32[3] = signed_saturate(rounding_shift(a.u64[3], imm), 32);
dst.u32[4] = signed_saturate(rounding_shift(a.u64[4], imm), 32);
dst.u32[5] = signed_saturate(rounding_shift(a.u64[5], imm), 32);
dst.u32[6] = signed_saturate(rounding_shift(a.u64[6], imm), 32);
dst.u32[7] = signed_saturate(rounding_shift(a.u64[7], imm), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_sc_w(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_ux_sc_w ((v8i32) a, imm);
```

## __m256i __lasx_mxn2x_rnd_ux_uc_b (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_uc_b (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.uc.b
Builtin: __builtin_lasx_mxn2x_rnd_ux_uc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4638
```

### Description

Narrow u16 elements into u8 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = unsigned_saturate(rounding_shift(a.u16[0], imm), 8);
dst.u8[1] = unsigned_saturate(rounding_shift(a.u16[1], imm), 8);
dst.u8[2] = unsigned_saturate(rounding_shift(a.u16[2], imm), 8);
dst.u8[3] = unsigned_saturate(rounding_shift(a.u16[3], imm), 8);
dst.u8[4] = unsigned_saturate(rounding_shift(a.u16[4], imm), 8);
dst.u8[5] = unsigned_saturate(rounding_shift(a.u16[5], imm), 8);
dst.u8[6] = unsigned_saturate(rounding_shift(a.u16[6], imm), 8);
dst.u8[7] = unsigned_saturate(rounding_shift(a.u16[7], imm), 8);
dst.u8[8] = unsigned_saturate(rounding_shift(a.u16[8], imm), 8);
dst.u8[9] = unsigned_saturate(rounding_shift(a.u16[9], imm), 8);
dst.u8[10] = unsigned_saturate(rounding_shift(a.u16[10], imm), 8);
dst.u8[11] = unsigned_saturate(rounding_shift(a.u16[11], imm), 8);
dst.u8[12] = unsigned_saturate(rounding_shift(a.u16[12], imm), 8);
dst.u8[13] = unsigned_saturate(rounding_shift(a.u16[13], imm), 8);
dst.u8[14] = unsigned_saturate(rounding_shift(a.u16[14], imm), 8);
dst.u8[15] = unsigned_saturate(rounding_shift(a.u16[15], imm), 8);
dst.u8[16] = unsigned_saturate(rounding_shift(a.u16[16], imm), 8);
dst.u8[17] = unsigned_saturate(rounding_shift(a.u16[17], imm), 8);
dst.u8[18] = unsigned_saturate(rounding_shift(a.u16[18], imm), 8);
dst.u8[19] = unsigned_saturate(rounding_shift(a.u16[19], imm), 8);
dst.u8[20] = unsigned_saturate(rounding_shift(a.u16[20], imm), 8);
dst.u8[21] = unsigned_saturate(rounding_shift(a.u16[21], imm), 8);
dst.u8[22] = unsigned_saturate(rounding_shift(a.u16[22], imm), 8);
dst.u8[23] = unsigned_saturate(rounding_shift(a.u16[23], imm), 8);
dst.u8[24] = unsigned_saturate(rounding_shift(a.u16[24], imm), 8);
dst.u8[25] = unsigned_saturate(rounding_shift(a.u16[25], imm), 8);
dst.u8[26] = unsigned_saturate(rounding_shift(a.u16[26], imm), 8);
dst.u8[27] = unsigned_saturate(rounding_shift(a.u16[27], imm), 8);
dst.u8[28] = unsigned_saturate(rounding_shift(a.u16[28], imm), 8);
dst.u8[29] = unsigned_saturate(rounding_shift(a.u16[29], imm), 8);
dst.u8[30] = unsigned_saturate(rounding_shift(a.u16[30], imm), 8);
dst.u8[31] = unsigned_saturate(rounding_shift(a.u16[31], imm), 8);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_uc_b(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_ux_uc_b ((v32i8) a, imm);
```

## __m256i __lasx_mxn2x_rnd_ux_uc_d (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_uc_d (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.uc.d
Builtin: __builtin_lasx_mxn2x_rnd_ux_uc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4647
```

### Description

Narrow u128 elements into u64 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = unsigned_saturate(rounding_shift(a.u128[0], imm), 64);
dst.u64[1] = unsigned_saturate(rounding_shift(a.u128[1], imm), 64);
dst.u64[2] = unsigned_saturate(rounding_shift(a.u128[2], imm), 64);
dst.u64[3] = unsigned_saturate(rounding_shift(a.u128[3], imm), 64);
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
#define __lasx_mxn2x_rnd_ux_uc_d(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_ux_uc_d ((v4i64) a, imm);
```

## __m256i __lasx_mxn2x_rnd_ux_uc_h (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_uc_h (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.uc.h
Builtin: __builtin_lasx_mxn2x_rnd_ux_uc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4641
```

### Description

Narrow u32 elements into u16 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = unsigned_saturate(rounding_shift(a.u32[0], imm), 16);
dst.u16[1] = unsigned_saturate(rounding_shift(a.u32[1], imm), 16);
dst.u16[2] = unsigned_saturate(rounding_shift(a.u32[2], imm), 16);
dst.u16[3] = unsigned_saturate(rounding_shift(a.u32[3], imm), 16);
dst.u16[4] = unsigned_saturate(rounding_shift(a.u32[4], imm), 16);
dst.u16[5] = unsigned_saturate(rounding_shift(a.u32[5], imm), 16);
dst.u16[6] = unsigned_saturate(rounding_shift(a.u32[6], imm), 16);
dst.u16[7] = unsigned_saturate(rounding_shift(a.u32[7], imm), 16);
dst.u16[8] = unsigned_saturate(rounding_shift(a.u32[8], imm), 16);
dst.u16[9] = unsigned_saturate(rounding_shift(a.u32[9], imm), 16);
dst.u16[10] = unsigned_saturate(rounding_shift(a.u32[10], imm), 16);
dst.u16[11] = unsigned_saturate(rounding_shift(a.u32[11], imm), 16);
dst.u16[12] = unsigned_saturate(rounding_shift(a.u32[12], imm), 16);
dst.u16[13] = unsigned_saturate(rounding_shift(a.u32[13], imm), 16);
dst.u16[14] = unsigned_saturate(rounding_shift(a.u32[14], imm), 16);
dst.u16[15] = unsigned_saturate(rounding_shift(a.u32[15], imm), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_uc_h(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_ux_uc_h ((v16i16) a, imm);
```

## __m256i __lasx_mxn2x_rnd_ux_uc_w (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_uc_w (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.uc.w
Builtin: __builtin_lasx_mxn2x_rnd_ux_uc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4644
```

### Description

Narrow u64 elements into u32 elements using rounding, saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = unsigned_saturate(rounding_shift(a.u64[0], imm), 32);
dst.u32[1] = unsigned_saturate(rounding_shift(a.u64[1], imm), 32);
dst.u32[2] = unsigned_saturate(rounding_shift(a.u64[2], imm), 32);
dst.u32[3] = unsigned_saturate(rounding_shift(a.u64[3], imm), 32);
dst.u32[4] = unsigned_saturate(rounding_shift(a.u64[4], imm), 32);
dst.u32[5] = unsigned_saturate(rounding_shift(a.u64[5], imm), 32);
dst.u32[6] = unsigned_saturate(rounding_shift(a.u64[6], imm), 32);
dst.u32[7] = unsigned_saturate(rounding_shift(a.u64[7], imm), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_uc_w(a, imm) (__m256i) __builtin_lasx_mxn2x_rnd_ux_uc_w ((v8i32) a, imm);
```

## __m256i __lasx_mxn2x_sx_nc_b (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_nc_b (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.nc.b
Builtin: __builtin_lasx_mxn2x_sx_nc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4542
```

### Description

Narrow u16 elements into u8 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = truncate(shift(a.i16[0], imm), 8);
dst.u8[1] = truncate(shift(a.i16[1], imm), 8);
dst.u8[2] = truncate(shift(a.i16[2], imm), 8);
dst.u8[3] = truncate(shift(a.i16[3], imm), 8);
dst.u8[4] = truncate(shift(a.i16[4], imm), 8);
dst.u8[5] = truncate(shift(a.i16[5], imm), 8);
dst.u8[6] = truncate(shift(a.i16[6], imm), 8);
dst.u8[7] = truncate(shift(a.i16[7], imm), 8);
dst.u8[8] = truncate(shift(a.i16[8], imm), 8);
dst.u8[9] = truncate(shift(a.i16[9], imm), 8);
dst.u8[10] = truncate(shift(a.i16[10], imm), 8);
dst.u8[11] = truncate(shift(a.i16[11], imm), 8);
dst.u8[12] = truncate(shift(a.i16[12], imm), 8);
dst.u8[13] = truncate(shift(a.i16[13], imm), 8);
dst.u8[14] = truncate(shift(a.i16[14], imm), 8);
dst.u8[15] = truncate(shift(a.i16[15], imm), 8);
dst.u8[16] = truncate(shift(a.i16[16], imm), 8);
dst.u8[17] = truncate(shift(a.i16[17], imm), 8);
dst.u8[18] = truncate(shift(a.i16[18], imm), 8);
dst.u8[19] = truncate(shift(a.i16[19], imm), 8);
dst.u8[20] = truncate(shift(a.i16[20], imm), 8);
dst.u8[21] = truncate(shift(a.i16[21], imm), 8);
dst.u8[22] = truncate(shift(a.i16[22], imm), 8);
dst.u8[23] = truncate(shift(a.i16[23], imm), 8);
dst.u8[24] = truncate(shift(a.i16[24], imm), 8);
dst.u8[25] = truncate(shift(a.i16[25], imm), 8);
dst.u8[26] = truncate(shift(a.i16[26], imm), 8);
dst.u8[27] = truncate(shift(a.i16[27], imm), 8);
dst.u8[28] = truncate(shift(a.i16[28], imm), 8);
dst.u8[29] = truncate(shift(a.i16[29], imm), 8);
dst.u8[30] = truncate(shift(a.i16[30], imm), 8);
dst.u8[31] = truncate(shift(a.i16[31], imm), 8);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_sx_nc_b(a, imm) (__m256i) __builtin_lasx_mxn2x_sx_nc_b ((v32i8) a, imm);
```

## __m256i __lasx_mxn2x_sx_nc_d (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_nc_d (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.nc.d
Builtin: __builtin_lasx_mxn2x_sx_nc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4551
```

### Description

Narrow u128 elements into u64 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = truncate(shift(a.i128[0], imm), 64);
dst.u64[1] = truncate(shift(a.i128[1], imm), 64);
dst.u64[2] = truncate(shift(a.i128[2], imm), 64);
dst.u64[3] = truncate(shift(a.i128[3], imm), 64);
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
#define __lasx_mxn2x_sx_nc_d(a, imm) (__m256i) __builtin_lasx_mxn2x_sx_nc_d ((v4i64) a, imm);
```

## __m256i __lasx_mxn2x_sx_nc_h (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_nc_h (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.nc.h
Builtin: __builtin_lasx_mxn2x_sx_nc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4545
```

### Description

Narrow u32 elements into u16 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = truncate(shift(a.i32[0], imm), 16);
dst.u16[1] = truncate(shift(a.i32[1], imm), 16);
dst.u16[2] = truncate(shift(a.i32[2], imm), 16);
dst.u16[3] = truncate(shift(a.i32[3], imm), 16);
dst.u16[4] = truncate(shift(a.i32[4], imm), 16);
dst.u16[5] = truncate(shift(a.i32[5], imm), 16);
dst.u16[6] = truncate(shift(a.i32[6], imm), 16);
dst.u16[7] = truncate(shift(a.i32[7], imm), 16);
dst.u16[8] = truncate(shift(a.i32[8], imm), 16);
dst.u16[9] = truncate(shift(a.i32[9], imm), 16);
dst.u16[10] = truncate(shift(a.i32[10], imm), 16);
dst.u16[11] = truncate(shift(a.i32[11], imm), 16);
dst.u16[12] = truncate(shift(a.i32[12], imm), 16);
dst.u16[13] = truncate(shift(a.i32[13], imm), 16);
dst.u16[14] = truncate(shift(a.i32[14], imm), 16);
dst.u16[15] = truncate(shift(a.i32[15], imm), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_sx_nc_h(a, imm) (__m256i) __builtin_lasx_mxn2x_sx_nc_h ((v16i16) a, imm);
```

## __m256i __lasx_mxn2x_sx_nc_w (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_nc_w (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.nc.w
Builtin: __builtin_lasx_mxn2x_sx_nc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4548
```

### Description

Narrow u64 elements into u32 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = truncate(shift(a.i64[0], imm), 32);
dst.u32[1] = truncate(shift(a.i64[1], imm), 32);
dst.u32[2] = truncate(shift(a.i64[2], imm), 32);
dst.u32[3] = truncate(shift(a.i64[3], imm), 32);
dst.u32[4] = truncate(shift(a.i64[4], imm), 32);
dst.u32[5] = truncate(shift(a.i64[5], imm), 32);
dst.u32[6] = truncate(shift(a.i64[6], imm), 32);
dst.u32[7] = truncate(shift(a.i64[7], imm), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_sx_nc_w(a, imm) (__m256i) __builtin_lasx_mxn2x_sx_nc_w ((v8i32) a, imm);
```

## __m256i __lasx_mxn2x_sx_sc_b (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_sc_b (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.sc.b
Builtin: __builtin_lasx_mxn2x_sx_sc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4518
```

### Description

Narrow u16 elements into u8 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = signed_saturate(shift(a.i16[0], imm), 8);
dst.u8[1] = signed_saturate(shift(a.i16[1], imm), 8);
dst.u8[2] = signed_saturate(shift(a.i16[2], imm), 8);
dst.u8[3] = signed_saturate(shift(a.i16[3], imm), 8);
dst.u8[4] = signed_saturate(shift(a.i16[4], imm), 8);
dst.u8[5] = signed_saturate(shift(a.i16[5], imm), 8);
dst.u8[6] = signed_saturate(shift(a.i16[6], imm), 8);
dst.u8[7] = signed_saturate(shift(a.i16[7], imm), 8);
dst.u8[8] = signed_saturate(shift(a.i16[8], imm), 8);
dst.u8[9] = signed_saturate(shift(a.i16[9], imm), 8);
dst.u8[10] = signed_saturate(shift(a.i16[10], imm), 8);
dst.u8[11] = signed_saturate(shift(a.i16[11], imm), 8);
dst.u8[12] = signed_saturate(shift(a.i16[12], imm), 8);
dst.u8[13] = signed_saturate(shift(a.i16[13], imm), 8);
dst.u8[14] = signed_saturate(shift(a.i16[14], imm), 8);
dst.u8[15] = signed_saturate(shift(a.i16[15], imm), 8);
dst.u8[16] = signed_saturate(shift(a.i16[16], imm), 8);
dst.u8[17] = signed_saturate(shift(a.i16[17], imm), 8);
dst.u8[18] = signed_saturate(shift(a.i16[18], imm), 8);
dst.u8[19] = signed_saturate(shift(a.i16[19], imm), 8);
dst.u8[20] = signed_saturate(shift(a.i16[20], imm), 8);
dst.u8[21] = signed_saturate(shift(a.i16[21], imm), 8);
dst.u8[22] = signed_saturate(shift(a.i16[22], imm), 8);
dst.u8[23] = signed_saturate(shift(a.i16[23], imm), 8);
dst.u8[24] = signed_saturate(shift(a.i16[24], imm), 8);
dst.u8[25] = signed_saturate(shift(a.i16[25], imm), 8);
dst.u8[26] = signed_saturate(shift(a.i16[26], imm), 8);
dst.u8[27] = signed_saturate(shift(a.i16[27], imm), 8);
dst.u8[28] = signed_saturate(shift(a.i16[28], imm), 8);
dst.u8[29] = signed_saturate(shift(a.i16[29], imm), 8);
dst.u8[30] = signed_saturate(shift(a.i16[30], imm), 8);
dst.u8[31] = signed_saturate(shift(a.i16[31], imm), 8);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_sx_sc_b(a, imm) (__m256i) __builtin_lasx_mxn2x_sx_sc_b ((v32i8) a, imm);
```

## __m256i __lasx_mxn2x_sx_sc_d (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_sc_d (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.sc.d
Builtin: __builtin_lasx_mxn2x_sx_sc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4527
```

### Description

Narrow u128 elements into u64 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = signed_saturate(shift(a.i128[0], imm), 64);
dst.u64[1] = signed_saturate(shift(a.i128[1], imm), 64);
dst.u64[2] = signed_saturate(shift(a.i128[2], imm), 64);
dst.u64[3] = signed_saturate(shift(a.i128[3], imm), 64);
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
#define __lasx_mxn2x_sx_sc_d(a, imm) (__m256i) __builtin_lasx_mxn2x_sx_sc_d ((v4i64) a, imm);
```

## __m256i __lasx_mxn2x_sx_sc_h (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_sc_h (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.sc.h
Builtin: __builtin_lasx_mxn2x_sx_sc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4521
```

### Description

Narrow u32 elements into u16 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = signed_saturate(shift(a.i32[0], imm), 16);
dst.u16[1] = signed_saturate(shift(a.i32[1], imm), 16);
dst.u16[2] = signed_saturate(shift(a.i32[2], imm), 16);
dst.u16[3] = signed_saturate(shift(a.i32[3], imm), 16);
dst.u16[4] = signed_saturate(shift(a.i32[4], imm), 16);
dst.u16[5] = signed_saturate(shift(a.i32[5], imm), 16);
dst.u16[6] = signed_saturate(shift(a.i32[6], imm), 16);
dst.u16[7] = signed_saturate(shift(a.i32[7], imm), 16);
dst.u16[8] = signed_saturate(shift(a.i32[8], imm), 16);
dst.u16[9] = signed_saturate(shift(a.i32[9], imm), 16);
dst.u16[10] = signed_saturate(shift(a.i32[10], imm), 16);
dst.u16[11] = signed_saturate(shift(a.i32[11], imm), 16);
dst.u16[12] = signed_saturate(shift(a.i32[12], imm), 16);
dst.u16[13] = signed_saturate(shift(a.i32[13], imm), 16);
dst.u16[14] = signed_saturate(shift(a.i32[14], imm), 16);
dst.u16[15] = signed_saturate(shift(a.i32[15], imm), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_sx_sc_h(a, imm) (__m256i) __builtin_lasx_mxn2x_sx_sc_h ((v16i16) a, imm);
```

## __m256i __lasx_mxn2x_sx_sc_w (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_sc_w (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.sc.w
Builtin: __builtin_lasx_mxn2x_sx_sc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4524
```

### Description

Narrow u64 elements into u32 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = signed_saturate(shift(a.i64[0], imm), 32);
dst.u32[1] = signed_saturate(shift(a.i64[1], imm), 32);
dst.u32[2] = signed_saturate(shift(a.i64[2], imm), 32);
dst.u32[3] = signed_saturate(shift(a.i64[3], imm), 32);
dst.u32[4] = signed_saturate(shift(a.i64[4], imm), 32);
dst.u32[5] = signed_saturate(shift(a.i64[5], imm), 32);
dst.u32[6] = signed_saturate(shift(a.i64[6], imm), 32);
dst.u32[7] = signed_saturate(shift(a.i64[7], imm), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_sx_sc_w(a, imm) (__m256i) __builtin_lasx_mxn2x_sx_sc_w ((v8i32) a, imm);
```

## __m256i __lasx_mxn2x_sx_uc_b (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_uc_b (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.uc.b
Builtin: __builtin_lasx_mxn2x_sx_uc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4530
```

### Description

Narrow u16 elements into u8 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = unsigned_saturate(shift(a.i16[0], imm), 8);
dst.u8[1] = unsigned_saturate(shift(a.i16[1], imm), 8);
dst.u8[2] = unsigned_saturate(shift(a.i16[2], imm), 8);
dst.u8[3] = unsigned_saturate(shift(a.i16[3], imm), 8);
dst.u8[4] = unsigned_saturate(shift(a.i16[4], imm), 8);
dst.u8[5] = unsigned_saturate(shift(a.i16[5], imm), 8);
dst.u8[6] = unsigned_saturate(shift(a.i16[6], imm), 8);
dst.u8[7] = unsigned_saturate(shift(a.i16[7], imm), 8);
dst.u8[8] = unsigned_saturate(shift(a.i16[8], imm), 8);
dst.u8[9] = unsigned_saturate(shift(a.i16[9], imm), 8);
dst.u8[10] = unsigned_saturate(shift(a.i16[10], imm), 8);
dst.u8[11] = unsigned_saturate(shift(a.i16[11], imm), 8);
dst.u8[12] = unsigned_saturate(shift(a.i16[12], imm), 8);
dst.u8[13] = unsigned_saturate(shift(a.i16[13], imm), 8);
dst.u8[14] = unsigned_saturate(shift(a.i16[14], imm), 8);
dst.u8[15] = unsigned_saturate(shift(a.i16[15], imm), 8);
dst.u8[16] = unsigned_saturate(shift(a.i16[16], imm), 8);
dst.u8[17] = unsigned_saturate(shift(a.i16[17], imm), 8);
dst.u8[18] = unsigned_saturate(shift(a.i16[18], imm), 8);
dst.u8[19] = unsigned_saturate(shift(a.i16[19], imm), 8);
dst.u8[20] = unsigned_saturate(shift(a.i16[20], imm), 8);
dst.u8[21] = unsigned_saturate(shift(a.i16[21], imm), 8);
dst.u8[22] = unsigned_saturate(shift(a.i16[22], imm), 8);
dst.u8[23] = unsigned_saturate(shift(a.i16[23], imm), 8);
dst.u8[24] = unsigned_saturate(shift(a.i16[24], imm), 8);
dst.u8[25] = unsigned_saturate(shift(a.i16[25], imm), 8);
dst.u8[26] = unsigned_saturate(shift(a.i16[26], imm), 8);
dst.u8[27] = unsigned_saturate(shift(a.i16[27], imm), 8);
dst.u8[28] = unsigned_saturate(shift(a.i16[28], imm), 8);
dst.u8[29] = unsigned_saturate(shift(a.i16[29], imm), 8);
dst.u8[30] = unsigned_saturate(shift(a.i16[30], imm), 8);
dst.u8[31] = unsigned_saturate(shift(a.i16[31], imm), 8);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_sx_uc_b(a, imm) (__m256i) __builtin_lasx_mxn2x_sx_uc_b ((v32i8) a, imm);
```

## __m256i __lasx_mxn2x_sx_uc_d (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_uc_d (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.uc.d
Builtin: __builtin_lasx_mxn2x_sx_uc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4539
```

### Description

Narrow u128 elements into u64 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = unsigned_saturate(shift(a.i128[0], imm), 64);
dst.u64[1] = unsigned_saturate(shift(a.i128[1], imm), 64);
dst.u64[2] = unsigned_saturate(shift(a.i128[2], imm), 64);
dst.u64[3] = unsigned_saturate(shift(a.i128[3], imm), 64);
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
#define __lasx_mxn2x_sx_uc_d(a, imm) (__m256i) __builtin_lasx_mxn2x_sx_uc_d ((v4i64) a, imm);
```

## __m256i __lasx_mxn2x_sx_uc_h (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_uc_h (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.uc.h
Builtin: __builtin_lasx_mxn2x_sx_uc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4533
```

### Description

Narrow u32 elements into u16 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = unsigned_saturate(shift(a.i32[0], imm), 16);
dst.u16[1] = unsigned_saturate(shift(a.i32[1], imm), 16);
dst.u16[2] = unsigned_saturate(shift(a.i32[2], imm), 16);
dst.u16[3] = unsigned_saturate(shift(a.i32[3], imm), 16);
dst.u16[4] = unsigned_saturate(shift(a.i32[4], imm), 16);
dst.u16[5] = unsigned_saturate(shift(a.i32[5], imm), 16);
dst.u16[6] = unsigned_saturate(shift(a.i32[6], imm), 16);
dst.u16[7] = unsigned_saturate(shift(a.i32[7], imm), 16);
dst.u16[8] = unsigned_saturate(shift(a.i32[8], imm), 16);
dst.u16[9] = unsigned_saturate(shift(a.i32[9], imm), 16);
dst.u16[10] = unsigned_saturate(shift(a.i32[10], imm), 16);
dst.u16[11] = unsigned_saturate(shift(a.i32[11], imm), 16);
dst.u16[12] = unsigned_saturate(shift(a.i32[12], imm), 16);
dst.u16[13] = unsigned_saturate(shift(a.i32[13], imm), 16);
dst.u16[14] = unsigned_saturate(shift(a.i32[14], imm), 16);
dst.u16[15] = unsigned_saturate(shift(a.i32[15], imm), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_sx_uc_h(a, imm) (__m256i) __builtin_lasx_mxn2x_sx_uc_h ((v16i16) a, imm);
```

## __m256i __lasx_mxn2x_sx_uc_w (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_uc_w (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.uc.w
Builtin: __builtin_lasx_mxn2x_sx_uc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4536
```

### Description

Narrow u64 elements into u32 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = unsigned_saturate(shift(a.i64[0], imm), 32);
dst.u32[1] = unsigned_saturate(shift(a.i64[1], imm), 32);
dst.u32[2] = unsigned_saturate(shift(a.i64[2], imm), 32);
dst.u32[3] = unsigned_saturate(shift(a.i64[3], imm), 32);
dst.u32[4] = unsigned_saturate(shift(a.i64[4], imm), 32);
dst.u32[5] = unsigned_saturate(shift(a.i64[5], imm), 32);
dst.u32[6] = unsigned_saturate(shift(a.i64[6], imm), 32);
dst.u32[7] = unsigned_saturate(shift(a.i64[7], imm), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_sx_uc_w(a, imm) (__m256i) __builtin_lasx_mxn2x_sx_uc_w ((v8i32) a, imm);
```

## __m256i __lasx_mxn2x_ux_nc_b (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_nc_b (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.nc.b
Builtin: __builtin_lasx_mxn2x_ux_nc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4578
```

### Description

Narrow u16 elements into u8 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = truncate(shift(a.u16[0], imm), 8);
dst.u8[1] = truncate(shift(a.u16[1], imm), 8);
dst.u8[2] = truncate(shift(a.u16[2], imm), 8);
dst.u8[3] = truncate(shift(a.u16[3], imm), 8);
dst.u8[4] = truncate(shift(a.u16[4], imm), 8);
dst.u8[5] = truncate(shift(a.u16[5], imm), 8);
dst.u8[6] = truncate(shift(a.u16[6], imm), 8);
dst.u8[7] = truncate(shift(a.u16[7], imm), 8);
dst.u8[8] = truncate(shift(a.u16[8], imm), 8);
dst.u8[9] = truncate(shift(a.u16[9], imm), 8);
dst.u8[10] = truncate(shift(a.u16[10], imm), 8);
dst.u8[11] = truncate(shift(a.u16[11], imm), 8);
dst.u8[12] = truncate(shift(a.u16[12], imm), 8);
dst.u8[13] = truncate(shift(a.u16[13], imm), 8);
dst.u8[14] = truncate(shift(a.u16[14], imm), 8);
dst.u8[15] = truncate(shift(a.u16[15], imm), 8);
dst.u8[16] = truncate(shift(a.u16[16], imm), 8);
dst.u8[17] = truncate(shift(a.u16[17], imm), 8);
dst.u8[18] = truncate(shift(a.u16[18], imm), 8);
dst.u8[19] = truncate(shift(a.u16[19], imm), 8);
dst.u8[20] = truncate(shift(a.u16[20], imm), 8);
dst.u8[21] = truncate(shift(a.u16[21], imm), 8);
dst.u8[22] = truncate(shift(a.u16[22], imm), 8);
dst.u8[23] = truncate(shift(a.u16[23], imm), 8);
dst.u8[24] = truncate(shift(a.u16[24], imm), 8);
dst.u8[25] = truncate(shift(a.u16[25], imm), 8);
dst.u8[26] = truncate(shift(a.u16[26], imm), 8);
dst.u8[27] = truncate(shift(a.u16[27], imm), 8);
dst.u8[28] = truncate(shift(a.u16[28], imm), 8);
dst.u8[29] = truncate(shift(a.u16[29], imm), 8);
dst.u8[30] = truncate(shift(a.u16[30], imm), 8);
dst.u8[31] = truncate(shift(a.u16[31], imm), 8);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_ux_nc_b(a, imm) (__m256i) __builtin_lasx_mxn2x_ux_nc_b ((v32i8) a, imm);
```

## __m256i __lasx_mxn2x_ux_nc_d (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_nc_d (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.nc.d
Builtin: __builtin_lasx_mxn2x_ux_nc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4587
```

### Description

Narrow u128 elements into u64 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = truncate(shift(a.u128[0], imm), 64);
dst.u64[1] = truncate(shift(a.u128[1], imm), 64);
dst.u64[2] = truncate(shift(a.u128[2], imm), 64);
dst.u64[3] = truncate(shift(a.u128[3], imm), 64);
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
#define __lasx_mxn2x_ux_nc_d(a, imm) (__m256i) __builtin_lasx_mxn2x_ux_nc_d ((v4i64) a, imm);
```

## __m256i __lasx_mxn2x_ux_nc_h (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_nc_h (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.nc.h
Builtin: __builtin_lasx_mxn2x_ux_nc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4581
```

### Description

Narrow u32 elements into u16 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = truncate(shift(a.u32[0], imm), 16);
dst.u16[1] = truncate(shift(a.u32[1], imm), 16);
dst.u16[2] = truncate(shift(a.u32[2], imm), 16);
dst.u16[3] = truncate(shift(a.u32[3], imm), 16);
dst.u16[4] = truncate(shift(a.u32[4], imm), 16);
dst.u16[5] = truncate(shift(a.u32[5], imm), 16);
dst.u16[6] = truncate(shift(a.u32[6], imm), 16);
dst.u16[7] = truncate(shift(a.u32[7], imm), 16);
dst.u16[8] = truncate(shift(a.u32[8], imm), 16);
dst.u16[9] = truncate(shift(a.u32[9], imm), 16);
dst.u16[10] = truncate(shift(a.u32[10], imm), 16);
dst.u16[11] = truncate(shift(a.u32[11], imm), 16);
dst.u16[12] = truncate(shift(a.u32[12], imm), 16);
dst.u16[13] = truncate(shift(a.u32[13], imm), 16);
dst.u16[14] = truncate(shift(a.u32[14], imm), 16);
dst.u16[15] = truncate(shift(a.u32[15], imm), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_ux_nc_h(a, imm) (__m256i) __builtin_lasx_mxn2x_ux_nc_h ((v16i16) a, imm);
```

## __m256i __lasx_mxn2x_ux_nc_w (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_nc_w (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.nc.w
Builtin: __builtin_lasx_mxn2x_ux_nc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4584
```

### Description

Narrow u64 elements into u32 elements using conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = truncate(shift(a.u64[0], imm), 32);
dst.u32[1] = truncate(shift(a.u64[1], imm), 32);
dst.u32[2] = truncate(shift(a.u64[2], imm), 32);
dst.u32[3] = truncate(shift(a.u64[3], imm), 32);
dst.u32[4] = truncate(shift(a.u64[4], imm), 32);
dst.u32[5] = truncate(shift(a.u64[5], imm), 32);
dst.u32[6] = truncate(shift(a.u64[6], imm), 32);
dst.u32[7] = truncate(shift(a.u64[7], imm), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_ux_nc_w(a, imm) (__m256i) __builtin_lasx_mxn2x_ux_nc_w ((v8i32) a, imm);
```

## __m256i __lasx_mxn2x_ux_sc_b (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_sc_b (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.sc.b
Builtin: __builtin_lasx_mxn2x_ux_sc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4554
```

### Description

Narrow u16 elements into u8 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = signed_saturate(shift(a.u16[0], imm), 8);
dst.u8[1] = signed_saturate(shift(a.u16[1], imm), 8);
dst.u8[2] = signed_saturate(shift(a.u16[2], imm), 8);
dst.u8[3] = signed_saturate(shift(a.u16[3], imm), 8);
dst.u8[4] = signed_saturate(shift(a.u16[4], imm), 8);
dst.u8[5] = signed_saturate(shift(a.u16[5], imm), 8);
dst.u8[6] = signed_saturate(shift(a.u16[6], imm), 8);
dst.u8[7] = signed_saturate(shift(a.u16[7], imm), 8);
dst.u8[8] = signed_saturate(shift(a.u16[8], imm), 8);
dst.u8[9] = signed_saturate(shift(a.u16[9], imm), 8);
dst.u8[10] = signed_saturate(shift(a.u16[10], imm), 8);
dst.u8[11] = signed_saturate(shift(a.u16[11], imm), 8);
dst.u8[12] = signed_saturate(shift(a.u16[12], imm), 8);
dst.u8[13] = signed_saturate(shift(a.u16[13], imm), 8);
dst.u8[14] = signed_saturate(shift(a.u16[14], imm), 8);
dst.u8[15] = signed_saturate(shift(a.u16[15], imm), 8);
dst.u8[16] = signed_saturate(shift(a.u16[16], imm), 8);
dst.u8[17] = signed_saturate(shift(a.u16[17], imm), 8);
dst.u8[18] = signed_saturate(shift(a.u16[18], imm), 8);
dst.u8[19] = signed_saturate(shift(a.u16[19], imm), 8);
dst.u8[20] = signed_saturate(shift(a.u16[20], imm), 8);
dst.u8[21] = signed_saturate(shift(a.u16[21], imm), 8);
dst.u8[22] = signed_saturate(shift(a.u16[22], imm), 8);
dst.u8[23] = signed_saturate(shift(a.u16[23], imm), 8);
dst.u8[24] = signed_saturate(shift(a.u16[24], imm), 8);
dst.u8[25] = signed_saturate(shift(a.u16[25], imm), 8);
dst.u8[26] = signed_saturate(shift(a.u16[26], imm), 8);
dst.u8[27] = signed_saturate(shift(a.u16[27], imm), 8);
dst.u8[28] = signed_saturate(shift(a.u16[28], imm), 8);
dst.u8[29] = signed_saturate(shift(a.u16[29], imm), 8);
dst.u8[30] = signed_saturate(shift(a.u16[30], imm), 8);
dst.u8[31] = signed_saturate(shift(a.u16[31], imm), 8);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_ux_sc_b(a, imm) (__m256i) __builtin_lasx_mxn2x_ux_sc_b ((v32i8) a, imm);
```

## __m256i __lasx_mxn2x_ux_sc_d (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_sc_d (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.sc.d
Builtin: __builtin_lasx_mxn2x_ux_sc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4563
```

### Description

Narrow u128 elements into u64 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = signed_saturate(shift(a.u128[0], imm), 64);
dst.u64[1] = signed_saturate(shift(a.u128[1], imm), 64);
dst.u64[2] = signed_saturate(shift(a.u128[2], imm), 64);
dst.u64[3] = signed_saturate(shift(a.u128[3], imm), 64);
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
#define __lasx_mxn2x_ux_sc_d(a, imm) (__m256i) __builtin_lasx_mxn2x_ux_sc_d ((v4i64) a, imm);
```

## __m256i __lasx_mxn2x_ux_sc_h (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_sc_h (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.sc.h
Builtin: __builtin_lasx_mxn2x_ux_sc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4557
```

### Description

Narrow u32 elements into u16 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = signed_saturate(shift(a.u32[0], imm), 16);
dst.u16[1] = signed_saturate(shift(a.u32[1], imm), 16);
dst.u16[2] = signed_saturate(shift(a.u32[2], imm), 16);
dst.u16[3] = signed_saturate(shift(a.u32[3], imm), 16);
dst.u16[4] = signed_saturate(shift(a.u32[4], imm), 16);
dst.u16[5] = signed_saturate(shift(a.u32[5], imm), 16);
dst.u16[6] = signed_saturate(shift(a.u32[6], imm), 16);
dst.u16[7] = signed_saturate(shift(a.u32[7], imm), 16);
dst.u16[8] = signed_saturate(shift(a.u32[8], imm), 16);
dst.u16[9] = signed_saturate(shift(a.u32[9], imm), 16);
dst.u16[10] = signed_saturate(shift(a.u32[10], imm), 16);
dst.u16[11] = signed_saturate(shift(a.u32[11], imm), 16);
dst.u16[12] = signed_saturate(shift(a.u32[12], imm), 16);
dst.u16[13] = signed_saturate(shift(a.u32[13], imm), 16);
dst.u16[14] = signed_saturate(shift(a.u32[14], imm), 16);
dst.u16[15] = signed_saturate(shift(a.u32[15], imm), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_ux_sc_h(a, imm) (__m256i) __builtin_lasx_mxn2x_ux_sc_h ((v16i16) a, imm);
```

## __m256i __lasx_mxn2x_ux_sc_w (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_sc_w (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.sc.w
Builtin: __builtin_lasx_mxn2x_ux_sc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4560
```

### Description

Narrow u64 elements into u32 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = signed_saturate(shift(a.u64[0], imm), 32);
dst.u32[1] = signed_saturate(shift(a.u64[1], imm), 32);
dst.u32[2] = signed_saturate(shift(a.u64[2], imm), 32);
dst.u32[3] = signed_saturate(shift(a.u64[3], imm), 32);
dst.u32[4] = signed_saturate(shift(a.u64[4], imm), 32);
dst.u32[5] = signed_saturate(shift(a.u64[5], imm), 32);
dst.u32[6] = signed_saturate(shift(a.u64[6], imm), 32);
dst.u32[7] = signed_saturate(shift(a.u64[7], imm), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_ux_sc_w(a, imm) (__m256i) __builtin_lasx_mxn2x_ux_sc_w ((v8i32) a, imm);
```

## __m256i __lasx_mxn2x_ux_uc_b (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_uc_b (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.uc.b
Builtin: __builtin_lasx_mxn2x_ux_uc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4566
```

### Description

Narrow u16 elements into u8 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u8[0] = unsigned_saturate(shift(a.u16[0], imm), 8);
dst.u8[1] = unsigned_saturate(shift(a.u16[1], imm), 8);
dst.u8[2] = unsigned_saturate(shift(a.u16[2], imm), 8);
dst.u8[3] = unsigned_saturate(shift(a.u16[3], imm), 8);
dst.u8[4] = unsigned_saturate(shift(a.u16[4], imm), 8);
dst.u8[5] = unsigned_saturate(shift(a.u16[5], imm), 8);
dst.u8[6] = unsigned_saturate(shift(a.u16[6], imm), 8);
dst.u8[7] = unsigned_saturate(shift(a.u16[7], imm), 8);
dst.u8[8] = unsigned_saturate(shift(a.u16[8], imm), 8);
dst.u8[9] = unsigned_saturate(shift(a.u16[9], imm), 8);
dst.u8[10] = unsigned_saturate(shift(a.u16[10], imm), 8);
dst.u8[11] = unsigned_saturate(shift(a.u16[11], imm), 8);
dst.u8[12] = unsigned_saturate(shift(a.u16[12], imm), 8);
dst.u8[13] = unsigned_saturate(shift(a.u16[13], imm), 8);
dst.u8[14] = unsigned_saturate(shift(a.u16[14], imm), 8);
dst.u8[15] = unsigned_saturate(shift(a.u16[15], imm), 8);
dst.u8[16] = unsigned_saturate(shift(a.u16[16], imm), 8);
dst.u8[17] = unsigned_saturate(shift(a.u16[17], imm), 8);
dst.u8[18] = unsigned_saturate(shift(a.u16[18], imm), 8);
dst.u8[19] = unsigned_saturate(shift(a.u16[19], imm), 8);
dst.u8[20] = unsigned_saturate(shift(a.u16[20], imm), 8);
dst.u8[21] = unsigned_saturate(shift(a.u16[21], imm), 8);
dst.u8[22] = unsigned_saturate(shift(a.u16[22], imm), 8);
dst.u8[23] = unsigned_saturate(shift(a.u16[23], imm), 8);
dst.u8[24] = unsigned_saturate(shift(a.u16[24], imm), 8);
dst.u8[25] = unsigned_saturate(shift(a.u16[25], imm), 8);
dst.u8[26] = unsigned_saturate(shift(a.u16[26], imm), 8);
dst.u8[27] = unsigned_saturate(shift(a.u16[27], imm), 8);
dst.u8[28] = unsigned_saturate(shift(a.u16[28], imm), 8);
dst.u8[29] = unsigned_saturate(shift(a.u16[29], imm), 8);
dst.u8[30] = unsigned_saturate(shift(a.u16[30], imm), 8);
dst.u8[31] = unsigned_saturate(shift(a.u16[31], imm), 8);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_ux_uc_b(a, imm) (__m256i) __builtin_lasx_mxn2x_ux_uc_b ((v32i8) a, imm);
```

## __m256i __lasx_mxn2x_ux_uc_d (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_uc_d (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.uc.d
Builtin: __builtin_lasx_mxn2x_ux_uc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4575
```

### Description

Narrow u128 elements into u64 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u64[0] = unsigned_saturate(shift(a.u128[0], imm), 64);
dst.u64[1] = unsigned_saturate(shift(a.u128[1], imm), 64);
dst.u64[2] = unsigned_saturate(shift(a.u128[2], imm), 64);
dst.u64[3] = unsigned_saturate(shift(a.u128[3], imm), 64);
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
#define __lasx_mxn2x_ux_uc_d(a, imm) (__m256i) __builtin_lasx_mxn2x_ux_uc_d ((v4i64) a, imm);
```

## __m256i __lasx_mxn2x_ux_uc_h (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_uc_h (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.uc.h
Builtin: __builtin_lasx_mxn2x_ux_uc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4569
```

### Description

Narrow u32 elements into u16 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u16[0] = unsigned_saturate(shift(a.u32[0], imm), 16);
dst.u16[1] = unsigned_saturate(shift(a.u32[1], imm), 16);
dst.u16[2] = unsigned_saturate(shift(a.u32[2], imm), 16);
dst.u16[3] = unsigned_saturate(shift(a.u32[3], imm), 16);
dst.u16[4] = unsigned_saturate(shift(a.u32[4], imm), 16);
dst.u16[5] = unsigned_saturate(shift(a.u32[5], imm), 16);
dst.u16[6] = unsigned_saturate(shift(a.u32[6], imm), 16);
dst.u16[7] = unsigned_saturate(shift(a.u32[7], imm), 16);
dst.u16[8] = unsigned_saturate(shift(a.u32[8], imm), 16);
dst.u16[9] = unsigned_saturate(shift(a.u32[9], imm), 16);
dst.u16[10] = unsigned_saturate(shift(a.u32[10], imm), 16);
dst.u16[11] = unsigned_saturate(shift(a.u32[11], imm), 16);
dst.u16[12] = unsigned_saturate(shift(a.u32[12], imm), 16);
dst.u16[13] = unsigned_saturate(shift(a.u32[13], imm), 16);
dst.u16[14] = unsigned_saturate(shift(a.u32[14], imm), 16);
dst.u16[15] = unsigned_saturate(shift(a.u32[15], imm), 16);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_ux_uc_h(a, imm) (__m256i) __builtin_lasx_mxn2x_ux_uc_h ((v16i16) a, imm);
```

## __m256i __lasx_mxn2x_ux_uc_w (__m256i a, int imm)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_uc_w (__m256i a, int imm)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.uc.w
Builtin: __builtin_lasx_mxn2x_ux_uc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4572
```

### Description

Narrow u64 elements into u32 elements using saturating conversion. This is the usual final step after wider intermediate arithmetic.

### Operation

```c
dst.u32[0] = unsigned_saturate(shift(a.u64[0], imm), 32);
dst.u32[1] = unsigned_saturate(shift(a.u64[1], imm), 32);
dst.u32[2] = unsigned_saturate(shift(a.u64[2], imm), 32);
dst.u32[3] = unsigned_saturate(shift(a.u64[3], imm), 32);
dst.u32[4] = unsigned_saturate(shift(a.u64[4], imm), 32);
dst.u32[5] = unsigned_saturate(shift(a.u64[5], imm), 32);
dst.u32[6] = unsigned_saturate(shift(a.u64[6], imm), 32);
dst.u32[7] = unsigned_saturate(shift(a.u64[7], imm), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>4</td><td>1</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_mxn2x_ux_uc_w(a, imm) (__m256i) __builtin_lasx_mxn2x_ux_uc_w ((v8i32) a, imm);
```

## __m256i __lasx_mxpckev_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxpckev_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxpckev.b
Builtin: __builtin_lasx_mxpckev_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1616
```

### Description

Take even-numbered u8 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(even u8 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxpckev_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxpckev_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxpckev_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxpckev.d
Builtin: __builtin_lasx_mxpckev_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1637
```

### Description

Take even-numbered u64 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(even u64 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxpckev_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxpckev_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxpckev_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxpckev.h
Builtin: __builtin_lasx_mxpckev_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1623
```

### Description

Take even-numbered u16 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(even u16 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxpckev_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxpckev_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxpckev_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxpckev.w
Builtin: __builtin_lasx_mxpckev_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1630
```

### Description

Take even-numbered u32 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(even u32 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxpckev_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxpckod_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxpckod_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxpckod.b
Builtin: __builtin_lasx_mxpckod_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1644
```

### Description

Take odd-numbered u8 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(odd u8 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxpckod_b((v32i8)a, (v32i8)b);
```

## __m256i __lasx_mxpckod_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxpckod_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxpckod.d
Builtin: __builtin_lasx_mxpckod_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1665
```

### Description

Take odd-numbered u64 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(odd u64 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxpckod_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxpckod_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxpckod_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxpckod.h
Builtin: __builtin_lasx_mxpckod_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1651
```

### Description

Take odd-numbered u16 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(odd u16 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxpckod_h((v16i16)a, (v16i16)b);
```

## __m256i __lasx_mxpckod_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxpckod_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxpckod.w
Builtin: __builtin_lasx_mxpckod_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1658
```

### Description

Take odd-numbered u32 lanes from the two sources and interleave or pack them into the destination.

### Operation

```c
dst = interleave_or_pack(odd u32 lanes from a and b);
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
return (__m256i)__builtin_lasx_mxpckod_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxshf_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxshf_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxshf.b
Builtin: __builtin_lasx_mxshf_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1867
```

### Description

Use two-bit fields from the immediate to reorder each four-lane u8 group of `a`.

### Operation

```c
dst.u8[0] = a.u8[((imm >> 0) & 3)];
dst.u8[1] = a.u8[((imm >> 2) & 3)];
dst.u8[2] = a.u8[((imm >> 4) & 3)];
dst.u8[3] = a.u8[((imm >> 6) & 3)];
dst.u8[4] = a.u8[4 + ((imm >> 0) & 3)];
dst.u8[5] = a.u8[4 + ((imm >> 2) & 3)];
dst.u8[6] = a.u8[4 + ((imm >> 4) & 3)];
dst.u8[7] = a.u8[4 + ((imm >> 6) & 3)];
dst.u8[8] = a.u8[8 + ((imm >> 0) & 3)];
dst.u8[9] = a.u8[8 + ((imm >> 2) & 3)];
dst.u8[10] = a.u8[8 + ((imm >> 4) & 3)];
dst.u8[11] = a.u8[8 + ((imm >> 6) & 3)];
dst.u8[12] = a.u8[12 + ((imm >> 0) & 3)];
dst.u8[13] = a.u8[12 + ((imm >> 2) & 3)];
dst.u8[14] = a.u8[12 + ((imm >> 4) & 3)];
dst.u8[15] = a.u8[12 + ((imm >> 6) & 3)];
dst.u8[16] = a.u8[16 + ((imm >> 0) & 3)];
dst.u8[17] = a.u8[16 + ((imm >> 2) & 3)];
dst.u8[18] = a.u8[16 + ((imm >> 4) & 3)];
dst.u8[19] = a.u8[16 + ((imm >> 6) & 3)];
dst.u8[20] = a.u8[20 + ((imm >> 0) & 3)];
dst.u8[21] = a.u8[20 + ((imm >> 2) & 3)];
dst.u8[22] = a.u8[20 + ((imm >> 4) & 3)];
dst.u8[23] = a.u8[20 + ((imm >> 6) & 3)];
dst.u8[24] = a.u8[24 + ((imm >> 0) & 3)];
dst.u8[25] = a.u8[24 + ((imm >> 2) & 3)];
dst.u8[26] = a.u8[24 + ((imm >> 4) & 3)];
dst.u8[27] = a.u8[24 + ((imm >> 6) & 3)];
dst.u8[28] = a.u8[28 + ((imm >> 0) & 3)];
dst.u8[29] = a.u8[28 + ((imm >> 2) & 3)];
dst.u8[30] = a.u8[28 + ((imm >> 4) & 3)];
dst.u8[31] = a.u8[28 + ((imm >> 6) & 3)];
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
#define __lasx_mxshf_b(a, imm) ((__m256i)__builtin_lasx_mxshf_b((v32i8)(a), (imm)))
```

## __m256i __lasx_mxshf_d (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_mxshf_d (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: mxshf.d
Builtin: __builtin_lasx_mxshf_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3633
```

### Description

Use two-bit fields from the immediate to select u64 lanes from the concatenated `a`/`b` inputs inside each 128-bit half.

### Operation

```c
dst.u64[0] = (((imm >> 0) & 3) < 2) ? a.u64[((imm >> 0) & 3)] : b.u64[((imm >> 0) & 3) - 2];
dst.u64[1] = (((imm >> 2) & 3) < 2) ? a.u64[((imm >> 2) & 3)] : b.u64[((imm >> 2) & 3) - 2];
dst.u64[2] = (((imm >> 0) & 3) < 2) ? a.u64[2 + ((imm >> 0) & 3)] : b.u64[2 + ((imm >> 0) & 3) - 2];
dst.u64[3] = (((imm >> 2) & 3) < 2) ? a.u64[2 + ((imm >> 2) & 3)] : b.u64[2 + ((imm >> 2) & 3) - 2];
```

### Header Mapping

```c
#define __lasx_mxshf_d(a, b, imm) ((__m256i)__builtin_lasx_mxshf_d((v4i64)(a), (v4i64)(b), (imm)))
```

## __m256i __lasx_mxshf_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxshf_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxshf.h
Builtin: __builtin_lasx_mxshf_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1868
```

### Description

Use two-bit fields from the immediate to reorder each four-lane u16 group of `a`.

### Operation

```c
dst.u16[0] = a.u16[((imm >> 0) & 3)];
dst.u16[1] = a.u16[((imm >> 2) & 3)];
dst.u16[2] = a.u16[((imm >> 4) & 3)];
dst.u16[3] = a.u16[((imm >> 6) & 3)];
dst.u16[4] = a.u16[4 + ((imm >> 0) & 3)];
dst.u16[5] = a.u16[4 + ((imm >> 2) & 3)];
dst.u16[6] = a.u16[4 + ((imm >> 4) & 3)];
dst.u16[7] = a.u16[4 + ((imm >> 6) & 3)];
dst.u16[8] = a.u16[8 + ((imm >> 0) & 3)];
dst.u16[9] = a.u16[8 + ((imm >> 2) & 3)];
dst.u16[10] = a.u16[8 + ((imm >> 4) & 3)];
dst.u16[11] = a.u16[8 + ((imm >> 6) & 3)];
dst.u16[12] = a.u16[12 + ((imm >> 0) & 3)];
dst.u16[13] = a.u16[12 + ((imm >> 2) & 3)];
dst.u16[14] = a.u16[12 + ((imm >> 4) & 3)];
dst.u16[15] = a.u16[12 + ((imm >> 6) & 3)];
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
#define __lasx_mxshf_h(a, imm) ((__m256i)__builtin_lasx_mxshf_h((v16i16)(a), (imm)))
```

## __m256i __lasx_mxshf_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxshf_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxshf.w
Builtin: __builtin_lasx_mxshf_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1869
```

### Description

Use two-bit fields from the immediate to reorder each four-lane u32 group of `a`.

### Operation

```c
dst.u32[0] = a.u32[((imm >> 0) & 3)];
dst.u32[1] = a.u32[((imm >> 2) & 3)];
dst.u32[2] = a.u32[((imm >> 4) & 3)];
dst.u32[3] = a.u32[((imm >> 6) & 3)];
dst.u32[4] = a.u32[4 + ((imm >> 0) & 3)];
dst.u32[5] = a.u32[4 + ((imm >> 2) & 3)];
dst.u32[6] = a.u32[4 + ((imm >> 4) & 3)];
dst.u32[7] = a.u32[4 + ((imm >> 6) & 3)];
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
#define __lasx_mxshf_w(a, imm) ((__m256i)__builtin_lasx_mxshf_w((v8i32)(a), (imm)))
```

## __m256i __lasx_mxsldi_b (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsldi_b (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsldi.b
Builtin: __builtin_lasx_mxsldi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1607
```

### Description

Slide a lane window across the concatenation of `b` and `a`, controlled by the immediate offset.

### Operation

```c
dst = slide_lanes(concatenate(b, a), imm);
```

### Header Mapping

```c
#define __lasx_mxsldi_b(a, b, imm) ((__m256i)__builtin_lasx_mxsldi_b((v32i8)(a), (v32i8)(b), (imm)))
```

## __m256i __lasx_mxsldi_d (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsldi_d (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsldi.d
Builtin: __builtin_lasx_mxsldi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1610
```

### Description

Slide a lane window across the concatenation of `b` and `a`, controlled by the immediate offset.

### Operation

```c
dst = slide_lanes(concatenate(b, a), imm);
```

### Header Mapping

```c
#define __lasx_mxsldi_d(a, b, imm) ((__m256i)__builtin_lasx_mxsldi_d((v4i64)(a), (v4i64)(b), (imm)))
```

## __m256i __lasx_mxsldi_h (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsldi_h (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsldi.h
Builtin: __builtin_lasx_mxsldi_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1608
```

### Description

Slide a lane window across the concatenation of `b` and `a`, controlled by the immediate offset.

### Operation

```c
dst = slide_lanes(concatenate(b, a), imm);
```

### Header Mapping

```c
#define __lasx_mxsldi_h(a, b, imm) ((__m256i)__builtin_lasx_mxsldi_h((v16i16)(a), (v16i16)(b), (imm)))
```

## __m256i __lasx_mxsldi_w (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsldi_w (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsldi.w
Builtin: __builtin_lasx_mxsldi_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1609
```

### Description

Slide a lane window across the concatenation of `b` and `a`, controlled by the immediate offset.

### Operation

```c
dst = slide_lanes(concatenate(b, a), imm);
```

### Header Mapping

```c
#define __lasx_mxsldi_w(a, b, imm) ((__m256i)__builtin_lasx_mxsldi_w((v8i32)(a), (v8i32)(b), (imm)))
```

## __m256i __lasx_mxsplati_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsplati_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsplati.b
Builtin: __builtin_lasx_mxsplati_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1611
```

### Description

Broadcast one selected u8 lane from `a` into every destination lane.

### Operation

```c
dst.u8[0] = a.u8[imm];
dst.u8[1] = a.u8[imm];
dst.u8[2] = a.u8[imm];
dst.u8[3] = a.u8[imm];
dst.u8[4] = a.u8[imm];
dst.u8[5] = a.u8[imm];
dst.u8[6] = a.u8[imm];
dst.u8[7] = a.u8[imm];
dst.u8[8] = a.u8[imm];
dst.u8[9] = a.u8[imm];
dst.u8[10] = a.u8[imm];
dst.u8[11] = a.u8[imm];
dst.u8[12] = a.u8[imm];
dst.u8[13] = a.u8[imm];
dst.u8[14] = a.u8[imm];
dst.u8[15] = a.u8[imm];
dst.u8[16] = a.u8[imm];
dst.u8[17] = a.u8[imm];
dst.u8[18] = a.u8[imm];
dst.u8[19] = a.u8[imm];
dst.u8[20] = a.u8[imm];
dst.u8[21] = a.u8[imm];
dst.u8[22] = a.u8[imm];
dst.u8[23] = a.u8[imm];
dst.u8[24] = a.u8[imm];
dst.u8[25] = a.u8[imm];
dst.u8[26] = a.u8[imm];
dst.u8[27] = a.u8[imm];
dst.u8[28] = a.u8[imm];
dst.u8[29] = a.u8[imm];
dst.u8[30] = a.u8[imm];
dst.u8[31] = a.u8[imm];
```

### Header Mapping

```c
#define __lasx_mxsplati_b(a, imm) ((__m256i)__builtin_lasx_mxsplati_b((v32i8)(a), (imm)))
```

## __m256i __lasx_mxsplati_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsplati_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsplati.d
Builtin: __builtin_lasx_mxsplati_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1614
```

### Description

Broadcast one selected u64 lane from `a` into every destination lane.

### Operation

```c
dst.u64[0] = a.u64[imm];
dst.u64[1] = a.u64[imm];
dst.u64[2] = a.u64[imm];
dst.u64[3] = a.u64[imm];
```

### Header Mapping

```c
#define __lasx_mxsplati_d(a, imm) ((__m256i)__builtin_lasx_mxsplati_d((v4i64)(a), (imm)))
```

## __m256i __lasx_mxsplati_h (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsplati_h (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsplati.h
Builtin: __builtin_lasx_mxsplati_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1612
```

### Description

Broadcast one selected u16 lane from `a` into every destination lane.

### Operation

```c
dst.u16[0] = a.u16[imm];
dst.u16[1] = a.u16[imm];
dst.u16[2] = a.u16[imm];
dst.u16[3] = a.u16[imm];
dst.u16[4] = a.u16[imm];
dst.u16[5] = a.u16[imm];
dst.u16[6] = a.u16[imm];
dst.u16[7] = a.u16[imm];
dst.u16[8] = a.u16[imm];
dst.u16[9] = a.u16[imm];
dst.u16[10] = a.u16[imm];
dst.u16[11] = a.u16[imm];
dst.u16[12] = a.u16[imm];
dst.u16[13] = a.u16[imm];
dst.u16[14] = a.u16[imm];
dst.u16[15] = a.u16[imm];
```

### Header Mapping

```c
#define __lasx_mxsplati_h(a, imm) ((__m256i)__builtin_lasx_mxsplati_h((v16i16)(a), (imm)))
```

## __m256i __lasx_mxsplati_w (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxsplati_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxsplati.w
Builtin: __builtin_lasx_mxsplati_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1613
```

### Description

Broadcast one selected u32 lane from `a` into every destination lane.

### Operation

```c
dst.u32[0] = a.u32[imm];
dst.u32[1] = a.u32[imm];
dst.u32[2] = a.u32[imm];
dst.u32[3] = a.u32[imm];
dst.u32[4] = a.u32[imm];
dst.u32[5] = a.u32[imm];
dst.u32[6] = a.u32[imm];
dst.u32[7] = a.u32[imm];
```

### Header Mapping

```c
#define __lasx_mxsplati_w(a, imm) ((__m256i)__builtin_lasx_mxsplati_w((v8i32)(a), (imm)))
```

## __m256i __lasx_mxvextr_v (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvextr_v (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvextr.v
Builtin: __builtin_lasx_mxvextr_v
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3647
```

### Description

For each 128-bit half, concatenate `b` followed by `a` and extract a byte window starting at `imm`.

### Operation

```c
dst.u8[0] = (imm < 16) ? b.u8[imm] : a.u8[imm - 16];
dst.u8[1] = (imm + 1 < 16) ? b.u8[imm + 1] : a.u8[imm + 1 - 16];
dst.u8[2] = (imm + 2 < 16) ? b.u8[imm + 2] : a.u8[imm + 2 - 16];
dst.u8[3] = (imm + 3 < 16) ? b.u8[imm + 3] : a.u8[imm + 3 - 16];
dst.u8[4] = (imm + 4 < 16) ? b.u8[imm + 4] : a.u8[imm + 4 - 16];
dst.u8[5] = (imm + 5 < 16) ? b.u8[imm + 5] : a.u8[imm + 5 - 16];
dst.u8[6] = (imm + 6 < 16) ? b.u8[imm + 6] : a.u8[imm + 6 - 16];
dst.u8[7] = (imm + 7 < 16) ? b.u8[imm + 7] : a.u8[imm + 7 - 16];
dst.u8[8] = (imm + 8 < 16) ? b.u8[imm + 8] : a.u8[imm + 8 - 16];
dst.u8[9] = (imm + 9 < 16) ? b.u8[imm + 9] : a.u8[imm + 9 - 16];
dst.u8[10] = (imm + 10 < 16) ? b.u8[imm + 10] : a.u8[imm + 10 - 16];
dst.u8[11] = (imm + 11 < 16) ? b.u8[imm + 11] : a.u8[imm + 11 - 16];
dst.u8[12] = (imm + 12 < 16) ? b.u8[imm + 12] : a.u8[imm + 12 - 16];
dst.u8[13] = (imm + 13 < 16) ? b.u8[imm + 13] : a.u8[imm + 13 - 16];
dst.u8[14] = (imm + 14 < 16) ? b.u8[imm + 14] : a.u8[imm + 14 - 16];
dst.u8[15] = (imm + 15 < 16) ? b.u8[imm + 15] : a.u8[imm + 15 - 16];
dst.u8[16] = (imm < 16) ? b.u8[16 + imm] : a.u8[16 + imm - 16];
dst.u8[17] = (imm + 1 < 16) ? b.u8[16 + imm + 1] : a.u8[16 + imm + 1 - 16];
dst.u8[18] = (imm + 2 < 16) ? b.u8[16 + imm + 2] : a.u8[16 + imm + 2 - 16];
dst.u8[19] = (imm + 3 < 16) ? b.u8[16 + imm + 3] : a.u8[16 + imm + 3 - 16];
dst.u8[20] = (imm + 4 < 16) ? b.u8[16 + imm + 4] : a.u8[16 + imm + 4 - 16];
dst.u8[21] = (imm + 5 < 16) ? b.u8[16 + imm + 5] : a.u8[16 + imm + 5 - 16];
dst.u8[22] = (imm + 6 < 16) ? b.u8[16 + imm + 6] : a.u8[16 + imm + 6 - 16];
dst.u8[23] = (imm + 7 < 16) ? b.u8[16 + imm + 7] : a.u8[16 + imm + 7 - 16];
dst.u8[24] = (imm + 8 < 16) ? b.u8[16 + imm + 8] : a.u8[16 + imm + 8 - 16];
dst.u8[25] = (imm + 9 < 16) ? b.u8[16 + imm + 9] : a.u8[16 + imm + 9 - 16];
dst.u8[26] = (imm + 10 < 16) ? b.u8[16 + imm + 10] : a.u8[16 + imm + 10 - 16];
dst.u8[27] = (imm + 11 < 16) ? b.u8[16 + imm + 11] : a.u8[16 + imm + 11 - 16];
dst.u8[28] = (imm + 12 < 16) ? b.u8[16 + imm + 12] : a.u8[16 + imm + 12 - 16];
dst.u8[29] = (imm + 13 < 16) ? b.u8[16 + imm + 13] : a.u8[16 + imm + 13 - 16];
dst.u8[30] = (imm + 14 < 16) ? b.u8[16 + imm + 14] : a.u8[16 + imm + 14 - 16];
dst.u8[31] = (imm + 15 < 16) ? b.u8[16 + imm + 15] : a.u8[16 + imm + 15 - 16];
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
#define __lasx_mxvextr_v(a, b, imm) ((__m256i)__builtin_lasx_mxvextr_v((v32i8)(a), (v32i8)(b), (imm)))
```

## __m256i __lasx_mxvextrins_b (__m256i a, __m256i b, unsigned char dst_lane, unsigned char src_lane)

### Synopsis

```c
__m256i __lasx_mxvextrins_b (__m256i a, __m256i b, unsigned char dst_lane, unsigned char src_lane)
#include <loongson-asxintrin.h>
Instruction: mxvextrins.b
Builtin: __builtin_lasx_mxvextrins_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3646
```

### Description

Copy the selected source u8 lane into the selected destination lane in each 128-bit half.

### Operation

```c
dst = a;
dst.u8[dst_lane] = b.u8[src_lane];
dst.u8[dst_lane + 16] = b.u8[src_lane + 16];
```

### Header Mapping

```c
#define __lasx_mxvextrins_b(a, b, dst_lane, src_lane) ((__m256i)__builtin_lasx_mxvextrins_b((v32i8)(a), (v32i8)(b), (dst_lane), (src_lane)))
```

## __m256i __lasx_mxvextrins_d (__m256i a, __m256i b, unsigned char dst_lane, unsigned char src_lane)

### Synopsis

```c
__m256i __lasx_mxvextrins_d (__m256i a, __m256i b, unsigned char dst_lane, unsigned char src_lane)
#include <loongson-asxintrin.h>
Instruction: mxvextrins.d
Builtin: __builtin_lasx_mxvextrins_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3643
```

### Description

Copy the selected source u64 lane into the selected destination lane in each 128-bit half.

### Operation

```c
dst = a;
dst.u64[dst_lane] = b.u64[src_lane];
dst.u64[dst_lane + 2] = b.u64[src_lane + 2];
```

### Header Mapping

```c
#define __lasx_mxvextrins_d(a, b, dst_lane, src_lane) ((__m256i)__builtin_lasx_mxvextrins_d((v4i64)(a), (v4i64)(b), (dst_lane), (src_lane)))
```

## __m256i __lasx_mxvextrins_h (__m256i a, __m256i b, unsigned char dst_lane, unsigned char src_lane)

### Synopsis

```c
__m256i __lasx_mxvextrins_h (__m256i a, __m256i b, unsigned char dst_lane, unsigned char src_lane)
#include <loongson-asxintrin.h>
Instruction: mxvextrins.h
Builtin: __builtin_lasx_mxvextrins_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3645
```

### Description

Copy the selected source u16 lane into the selected destination lane in each 128-bit half.

### Operation

```c
dst = a;
dst.u16[dst_lane] = b.u16[src_lane];
dst.u16[dst_lane + 8] = b.u16[src_lane + 8];
```

### Header Mapping

```c
#define __lasx_mxvextrins_h(a, b, dst_lane, src_lane) ((__m256i)__builtin_lasx_mxvextrins_h((v16i16)(a), (v16i16)(b), (dst_lane), (src_lane)))
```

## __m256i __lasx_mxvextrins_w (__m256i a, __m256i b, unsigned char dst_lane, unsigned char src_lane)

### Synopsis

```c
__m256i __lasx_mxvextrins_w (__m256i a, __m256i b, unsigned char dst_lane, unsigned char src_lane)
#include <loongson-asxintrin.h>
Instruction: mxvextrins.w
Builtin: __builtin_lasx_mxvextrins_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3644
```

### Description

Copy the selected source u32 lane into the selected destination lane in each 128-bit half.

### Operation

```c
dst = a;
dst.u32[dst_lane] = b.u32[src_lane];
dst.u32[dst_lane + 4] = b.u32[src_lane + 4];
```

### Header Mapping

```c
#define __lasx_mxvextrins_w(a, b, dst_lane, src_lane) ((__m256i)__builtin_lasx_mxvextrins_w((v8i32)(a), (v8i32)(b), (dst_lane), (src_lane)))
```

## __m256i __lasx_mxvperm_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvperm_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvperm.b
Builtin: __builtin_lasx_mxvperm_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4746
```

### Description

Use byte selectors from `c` to choose bytes from `a` or `b`, with selector values in the zero range producing 0.

### Operation

```c
dst.u8[0] = (c.u8[0] & 0x40) ? 0 : ((c.u8[0] & 0x10) ? a.u8[(c.u8[0] & 15)] : b.u8[(c.u8[0] & 15)]);
dst.u8[1] = (c.u8[1] & 0x40) ? 0 : ((c.u8[1] & 0x10) ? a.u8[(c.u8[1] & 15)] : b.u8[(c.u8[1] & 15)]);
dst.u8[2] = (c.u8[2] & 0x40) ? 0 : ((c.u8[2] & 0x10) ? a.u8[(c.u8[2] & 15)] : b.u8[(c.u8[2] & 15)]);
dst.u8[3] = (c.u8[3] & 0x40) ? 0 : ((c.u8[3] & 0x10) ? a.u8[(c.u8[3] & 15)] : b.u8[(c.u8[3] & 15)]);
dst.u8[4] = (c.u8[4] & 0x40) ? 0 : ((c.u8[4] & 0x10) ? a.u8[(c.u8[4] & 15)] : b.u8[(c.u8[4] & 15)]);
dst.u8[5] = (c.u8[5] & 0x40) ? 0 : ((c.u8[5] & 0x10) ? a.u8[(c.u8[5] & 15)] : b.u8[(c.u8[5] & 15)]);
dst.u8[6] = (c.u8[6] & 0x40) ? 0 : ((c.u8[6] & 0x10) ? a.u8[(c.u8[6] & 15)] : b.u8[(c.u8[6] & 15)]);
dst.u8[7] = (c.u8[7] & 0x40) ? 0 : ((c.u8[7] & 0x10) ? a.u8[(c.u8[7] & 15)] : b.u8[(c.u8[7] & 15)]);
dst.u8[8] = (c.u8[8] & 0x40) ? 0 : ((c.u8[8] & 0x10) ? a.u8[(c.u8[8] & 15)] : b.u8[(c.u8[8] & 15)]);
dst.u8[9] = (c.u8[9] & 0x40) ? 0 : ((c.u8[9] & 0x10) ? a.u8[(c.u8[9] & 15)] : b.u8[(c.u8[9] & 15)]);
dst.u8[10] = (c.u8[10] & 0x40) ? 0 : ((c.u8[10] & 0x10) ? a.u8[(c.u8[10] & 15)] : b.u8[(c.u8[10] & 15)]);
dst.u8[11] = (c.u8[11] & 0x40) ? 0 : ((c.u8[11] & 0x10) ? a.u8[(c.u8[11] & 15)] : b.u8[(c.u8[11] & 15)]);
dst.u8[12] = (c.u8[12] & 0x40) ? 0 : ((c.u8[12] & 0x10) ? a.u8[(c.u8[12] & 15)] : b.u8[(c.u8[12] & 15)]);
dst.u8[13] = (c.u8[13] & 0x40) ? 0 : ((c.u8[13] & 0x10) ? a.u8[(c.u8[13] & 15)] : b.u8[(c.u8[13] & 15)]);
dst.u8[14] = (c.u8[14] & 0x40) ? 0 : ((c.u8[14] & 0x10) ? a.u8[(c.u8[14] & 15)] : b.u8[(c.u8[14] & 15)]);
dst.u8[15] = (c.u8[15] & 0x40) ? 0 : ((c.u8[15] & 0x10) ? a.u8[(c.u8[15] & 15)] : b.u8[(c.u8[15] & 15)]);
dst.u8[16] = (c.u8[16] & 0x40) ? 0 : ((c.u8[16] & 0x10) ? a.u8[16 + (c.u8[16] & 15)] : b.u8[16 + (c.u8[16] & 15)]);
dst.u8[17] = (c.u8[17] & 0x40) ? 0 : ((c.u8[17] & 0x10) ? a.u8[16 + (c.u8[17] & 15)] : b.u8[16 + (c.u8[17] & 15)]);
dst.u8[18] = (c.u8[18] & 0x40) ? 0 : ((c.u8[18] & 0x10) ? a.u8[16 + (c.u8[18] & 15)] : b.u8[16 + (c.u8[18] & 15)]);
dst.u8[19] = (c.u8[19] & 0x40) ? 0 : ((c.u8[19] & 0x10) ? a.u8[16 + (c.u8[19] & 15)] : b.u8[16 + (c.u8[19] & 15)]);
dst.u8[20] = (c.u8[20] & 0x40) ? 0 : ((c.u8[20] & 0x10) ? a.u8[16 + (c.u8[20] & 15)] : b.u8[16 + (c.u8[20] & 15)]);
dst.u8[21] = (c.u8[21] & 0x40) ? 0 : ((c.u8[21] & 0x10) ? a.u8[16 + (c.u8[21] & 15)] : b.u8[16 + (c.u8[21] & 15)]);
dst.u8[22] = (c.u8[22] & 0x40) ? 0 : ((c.u8[22] & 0x10) ? a.u8[16 + (c.u8[22] & 15)] : b.u8[16 + (c.u8[22] & 15)]);
dst.u8[23] = (c.u8[23] & 0x40) ? 0 : ((c.u8[23] & 0x10) ? a.u8[16 + (c.u8[23] & 15)] : b.u8[16 + (c.u8[23] & 15)]);
dst.u8[24] = (c.u8[24] & 0x40) ? 0 : ((c.u8[24] & 0x10) ? a.u8[16 + (c.u8[24] & 15)] : b.u8[16 + (c.u8[24] & 15)]);
dst.u8[25] = (c.u8[25] & 0x40) ? 0 : ((c.u8[25] & 0x10) ? a.u8[16 + (c.u8[25] & 15)] : b.u8[16 + (c.u8[25] & 15)]);
dst.u8[26] = (c.u8[26] & 0x40) ? 0 : ((c.u8[26] & 0x10) ? a.u8[16 + (c.u8[26] & 15)] : b.u8[16 + (c.u8[26] & 15)]);
dst.u8[27] = (c.u8[27] & 0x40) ? 0 : ((c.u8[27] & 0x10) ? a.u8[16 + (c.u8[27] & 15)] : b.u8[16 + (c.u8[27] & 15)]);
dst.u8[28] = (c.u8[28] & 0x40) ? 0 : ((c.u8[28] & 0x10) ? a.u8[16 + (c.u8[28] & 15)] : b.u8[16 + (c.u8[28] & 15)]);
dst.u8[29] = (c.u8[29] & 0x40) ? 0 : ((c.u8[29] & 0x10) ? a.u8[16 + (c.u8[29] & 15)] : b.u8[16 + (c.u8[29] & 15)]);
dst.u8[30] = (c.u8[30] & 0x40) ? 0 : ((c.u8[30] & 0x10) ? a.u8[16 + (c.u8[30] & 15)] : b.u8[16 + (c.u8[30] & 15)]);
dst.u8[31] = (c.u8[31] & 0x40) ? 0 : ((c.u8[31] & 0x10) ? a.u8[16 + (c.u8[31] & 15)] : b.u8[16 + (c.u8[31] & 15)]);
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
return (__m256i) __builtin_lasx_mxvperm_b ((v32i8) a, (v32i8) b, (v32i8) c);
```

## __m256i __lasx_mxvperml_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvperml_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvperml.d
Builtin: __builtin_lasx_mxvperml_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4136
```

### Description

Use the low control bits in `b` to select u64 lanes from `a` within each 128-bit half.

### Operation

```c
dst.u64[0] = a.u64[(b.u64[0] & 1)];
dst.u64[1] = a.u64[(b.u64[1] & 1)];
dst.u64[2] = a.u64[2 + (b.u64[2] & 1)];
dst.u64[3] = a.u64[2 + (b.u64[3] & 1)];
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
return (__m256i)__builtin_lasx_mxvperml_d((v4i64)a, (v4i64)b);
```

## __m256i __lasx_mxvperml_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvperml_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvperml.w
Builtin: __builtin_lasx_mxvperml_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4143
```

### Description

Use the low control bits in `b` to select u32 lanes from `a` within each 128-bit half.

### Operation

```c
dst.u32[0] = a.u32[(b.u32[0] & 3)];
dst.u32[1] = a.u32[(b.u32[1] & 3)];
dst.u32[2] = a.u32[(b.u32[2] & 3)];
dst.u32[3] = a.u32[(b.u32[3] & 3)];
dst.u32[4] = a.u32[4 + (b.u32[4] & 3)];
dst.u32[5] = a.u32[4 + (b.u32[5] & 3)];
dst.u32[6] = a.u32[4 + (b.u32[6] & 3)];
dst.u32[7] = a.u32[4 + (b.u32[7] & 3)];
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
return (__m256i)__builtin_lasx_mxvperml_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_mxvsel_d (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_mxvsel_d (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: mxvsel.d
Builtin: __builtin_lasx_mxvsel_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3648
```

### Description

Use one immediate bit per u64 lane: a 0 bit chooses `a`, and a 1 bit chooses `b`.

### Operation

```c
dst.u64[0] = ((imm >> 0) & 1) ? b.u64[0] : a.u64[0];
dst.u64[1] = ((imm >> 1) & 1) ? b.u64[1] : a.u64[1];
dst.u64[2] = ((imm >> 2) & 1) ? b.u64[2] : a.u64[2];
dst.u64[3] = ((imm >> 3) & 1) ? b.u64[3] : a.u64[3];
```

### Header Mapping

```c
#define __lasx_mxvsel_d(a, b, imm) ((__m256i)__builtin_lasx_mxvsel_d((v4i64)(a), (v4i64)(b), (imm)))
```

## __m256i __lasx_mxvsel_h (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_mxvsel_h (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: mxvsel.h
Builtin: __builtin_lasx_mxvsel_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3650
```

### Description

Use one immediate bit per u16 lane: a 0 bit chooses `a`, and a 1 bit chooses `b`.

### Operation

```c
dst.u16[0] = ((imm >> 0) & 1) ? b.u16[0] : a.u16[0];
dst.u16[1] = ((imm >> 1) & 1) ? b.u16[1] : a.u16[1];
dst.u16[2] = ((imm >> 2) & 1) ? b.u16[2] : a.u16[2];
dst.u16[3] = ((imm >> 3) & 1) ? b.u16[3] : a.u16[3];
dst.u16[4] = ((imm >> 4) & 1) ? b.u16[4] : a.u16[4];
dst.u16[5] = ((imm >> 5) & 1) ? b.u16[5] : a.u16[5];
dst.u16[6] = ((imm >> 6) & 1) ? b.u16[6] : a.u16[6];
dst.u16[7] = ((imm >> 7) & 1) ? b.u16[7] : a.u16[7];
dst.u16[8] = ((imm >> 8) & 1) ? b.u16[8] : a.u16[8];
dst.u16[9] = ((imm >> 9) & 1) ? b.u16[9] : a.u16[9];
dst.u16[10] = ((imm >> 10) & 1) ? b.u16[10] : a.u16[10];
dst.u16[11] = ((imm >> 11) & 1) ? b.u16[11] : a.u16[11];
dst.u16[12] = ((imm >> 12) & 1) ? b.u16[12] : a.u16[12];
dst.u16[13] = ((imm >> 13) & 1) ? b.u16[13] : a.u16[13];
dst.u16[14] = ((imm >> 14) & 1) ? b.u16[14] : a.u16[14];
dst.u16[15] = ((imm >> 15) & 1) ? b.u16[15] : a.u16[15];
```

### Header Mapping

```c
#define __lasx_mxvsel_h(a, b, imm) ((__m256i)__builtin_lasx_mxvsel_h((v16i16)(a), (v16i16)(b), (imm)))
```

## __m256i __lasx_mxvsel_w (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_mxvsel_w (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: mxvsel.w
Builtin: __builtin_lasx_mxvsel_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3649
```

### Description

Use one immediate bit per u32 lane: a 0 bit chooses `a`, and a 1 bit chooses `b`.

### Operation

```c
dst.u32[0] = ((imm >> 0) & 1) ? b.u32[0] : a.u32[0];
dst.u32[1] = ((imm >> 1) & 1) ? b.u32[1] : a.u32[1];
dst.u32[2] = ((imm >> 2) & 1) ? b.u32[2] : a.u32[2];
dst.u32[3] = ((imm >> 3) & 1) ? b.u32[3] : a.u32[3];
dst.u32[4] = ((imm >> 4) & 1) ? b.u32[4] : a.u32[4];
dst.u32[5] = ((imm >> 5) & 1) ? b.u32[5] : a.u32[5];
dst.u32[6] = ((imm >> 6) & 1) ? b.u32[6] : a.u32[6];
dst.u32[7] = ((imm >> 7) & 1) ? b.u32[7] : a.u32[7];
```

### Header Mapping

```c
#define __lasx_mxvsel_w(a, b, imm) ((__m256i)__builtin_lasx_mxvsel_w((v8i32)(a), (v8i32)(b), (imm)))
```

## __m256i __lasx_mxvselr_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvselr_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvselr.d
Builtin: __builtin_lasx_mxvselr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4122
```

### Description

Use the sign bit of each lane in `a` as the selector: non-negative chooses `b`, negative chooses `c`.

### Operation

```c
dst.i64[0] = (a.i64[0] < 0) ? c.i64[0] : b.i64[0];
dst.i64[1] = (a.i64[1] < 0) ? c.i64[1] : b.i64[1];
dst.i64[2] = (a.i64[2] < 0) ? c.i64[2] : b.i64[2];
dst.i64[3] = (a.i64[3] < 0) ? c.i64[3] : b.i64[3];
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
return (__m256i)__builtin_lasx_mxvselr_d((v4i64)a, (v4i64)b, (v4i64)c);
```

## __m256i __lasx_mxvselr_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvselr_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvselr.w
Builtin: __builtin_lasx_mxvselr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4129
```

### Description

Use the sign bit of each lane in `a` as the selector: non-negative chooses `b`, negative chooses `c`.

### Operation

```c
dst.i32[0] = (a.i32[0] < 0) ? c.i32[0] : b.i32[0];
dst.i32[1] = (a.i32[1] < 0) ? c.i32[1] : b.i32[1];
dst.i32[2] = (a.i32[2] < 0) ? c.i32[2] : b.i32[2];
dst.i32[3] = (a.i32[3] < 0) ? c.i32[3] : b.i32[3];
dst.i32[4] = (a.i32[4] < 0) ? c.i32[4] : b.i32[4];
dst.i32[5] = (a.i32[5] < 0) ? c.i32[5] : b.i32[5];
dst.i32[6] = (a.i32[6] < 0) ? c.i32[6] : b.i32[6];
dst.i32[7] = (a.i32[7] < 0) ? c.i32[7] : b.i32[7];
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
return (__m256i)__builtin_lasx_mxvselr_w((v8i32)a, (v8i32)b, (v8i32)c);
```

## __m256i __lasx_mxvshf_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvshf_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvshf.b
Builtin: __builtin_lasx_mxvshf_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1784
```

### Description

Use each control u8 lane from `a` to choose a u8 lane from `b` or `c`; control values with the zero bit set produce zero. This is a byte-style table lookup within each 128-bit half.

### Operation

```c
dst.u8[0] = (a.u8[0] & 0x40) ? 0 : ((a.u8[0] & 0x10) ? b.u8[(a.u8[0] & 15)] : c.u8[(a.u8[0] & 15)]);
dst.u8[1] = (a.u8[1] & 0x40) ? 0 : ((a.u8[1] & 0x10) ? b.u8[(a.u8[1] & 15)] : c.u8[(a.u8[1] & 15)]);
dst.u8[2] = (a.u8[2] & 0x40) ? 0 : ((a.u8[2] & 0x10) ? b.u8[(a.u8[2] & 15)] : c.u8[(a.u8[2] & 15)]);
dst.u8[3] = (a.u8[3] & 0x40) ? 0 : ((a.u8[3] & 0x10) ? b.u8[(a.u8[3] & 15)] : c.u8[(a.u8[3] & 15)]);
dst.u8[4] = (a.u8[4] & 0x40) ? 0 : ((a.u8[4] & 0x10) ? b.u8[(a.u8[4] & 15)] : c.u8[(a.u8[4] & 15)]);
dst.u8[5] = (a.u8[5] & 0x40) ? 0 : ((a.u8[5] & 0x10) ? b.u8[(a.u8[5] & 15)] : c.u8[(a.u8[5] & 15)]);
dst.u8[6] = (a.u8[6] & 0x40) ? 0 : ((a.u8[6] & 0x10) ? b.u8[(a.u8[6] & 15)] : c.u8[(a.u8[6] & 15)]);
dst.u8[7] = (a.u8[7] & 0x40) ? 0 : ((a.u8[7] & 0x10) ? b.u8[(a.u8[7] & 15)] : c.u8[(a.u8[7] & 15)]);
dst.u8[8] = (a.u8[8] & 0x40) ? 0 : ((a.u8[8] & 0x10) ? b.u8[(a.u8[8] & 15)] : c.u8[(a.u8[8] & 15)]);
dst.u8[9] = (a.u8[9] & 0x40) ? 0 : ((a.u8[9] & 0x10) ? b.u8[(a.u8[9] & 15)] : c.u8[(a.u8[9] & 15)]);
dst.u8[10] = (a.u8[10] & 0x40) ? 0 : ((a.u8[10] & 0x10) ? b.u8[(a.u8[10] & 15)] : c.u8[(a.u8[10] & 15)]);
dst.u8[11] = (a.u8[11] & 0x40) ? 0 : ((a.u8[11] & 0x10) ? b.u8[(a.u8[11] & 15)] : c.u8[(a.u8[11] & 15)]);
dst.u8[12] = (a.u8[12] & 0x40) ? 0 : ((a.u8[12] & 0x10) ? b.u8[(a.u8[12] & 15)] : c.u8[(a.u8[12] & 15)]);
dst.u8[13] = (a.u8[13] & 0x40) ? 0 : ((a.u8[13] & 0x10) ? b.u8[(a.u8[13] & 15)] : c.u8[(a.u8[13] & 15)]);
dst.u8[14] = (a.u8[14] & 0x40) ? 0 : ((a.u8[14] & 0x10) ? b.u8[(a.u8[14] & 15)] : c.u8[(a.u8[14] & 15)]);
dst.u8[15] = (a.u8[15] & 0x40) ? 0 : ((a.u8[15] & 0x10) ? b.u8[(a.u8[15] & 15)] : c.u8[(a.u8[15] & 15)]);
dst.u8[16] = (a.u8[16] & 0x40) ? 0 : ((a.u8[16] & 0x10) ? b.u8[16 + (a.u8[16] & 15)] : c.u8[16 + (a.u8[16] & 15)]);
dst.u8[17] = (a.u8[17] & 0x40) ? 0 : ((a.u8[17] & 0x10) ? b.u8[16 + (a.u8[17] & 15)] : c.u8[16 + (a.u8[17] & 15)]);
dst.u8[18] = (a.u8[18] & 0x40) ? 0 : ((a.u8[18] & 0x10) ? b.u8[16 + (a.u8[18] & 15)] : c.u8[16 + (a.u8[18] & 15)]);
dst.u8[19] = (a.u8[19] & 0x40) ? 0 : ((a.u8[19] & 0x10) ? b.u8[16 + (a.u8[19] & 15)] : c.u8[16 + (a.u8[19] & 15)]);
dst.u8[20] = (a.u8[20] & 0x40) ? 0 : ((a.u8[20] & 0x10) ? b.u8[16 + (a.u8[20] & 15)] : c.u8[16 + (a.u8[20] & 15)]);
dst.u8[21] = (a.u8[21] & 0x40) ? 0 : ((a.u8[21] & 0x10) ? b.u8[16 + (a.u8[21] & 15)] : c.u8[16 + (a.u8[21] & 15)]);
dst.u8[22] = (a.u8[22] & 0x40) ? 0 : ((a.u8[22] & 0x10) ? b.u8[16 + (a.u8[22] & 15)] : c.u8[16 + (a.u8[22] & 15)]);
dst.u8[23] = (a.u8[23] & 0x40) ? 0 : ((a.u8[23] & 0x10) ? b.u8[16 + (a.u8[23] & 15)] : c.u8[16 + (a.u8[23] & 15)]);
dst.u8[24] = (a.u8[24] & 0x40) ? 0 : ((a.u8[24] & 0x10) ? b.u8[16 + (a.u8[24] & 15)] : c.u8[16 + (a.u8[24] & 15)]);
dst.u8[25] = (a.u8[25] & 0x40) ? 0 : ((a.u8[25] & 0x10) ? b.u8[16 + (a.u8[25] & 15)] : c.u8[16 + (a.u8[25] & 15)]);
dst.u8[26] = (a.u8[26] & 0x40) ? 0 : ((a.u8[26] & 0x10) ? b.u8[16 + (a.u8[26] & 15)] : c.u8[16 + (a.u8[26] & 15)]);
dst.u8[27] = (a.u8[27] & 0x40) ? 0 : ((a.u8[27] & 0x10) ? b.u8[16 + (a.u8[27] & 15)] : c.u8[16 + (a.u8[27] & 15)]);
dst.u8[28] = (a.u8[28] & 0x40) ? 0 : ((a.u8[28] & 0x10) ? b.u8[16 + (a.u8[28] & 15)] : c.u8[16 + (a.u8[28] & 15)]);
dst.u8[29] = (a.u8[29] & 0x40) ? 0 : ((a.u8[29] & 0x10) ? b.u8[16 + (a.u8[29] & 15)] : c.u8[16 + (a.u8[29] & 15)]);
dst.u8[30] = (a.u8[30] & 0x40) ? 0 : ((a.u8[30] & 0x10) ? b.u8[16 + (a.u8[30] & 15)] : c.u8[16 + (a.u8[30] & 15)]);
dst.u8[31] = (a.u8[31] & 0x40) ? 0 : ((a.u8[31] & 0x10) ? b.u8[16 + (a.u8[31] & 15)] : c.u8[16 + (a.u8[31] & 15)]);
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
return (__m256i)__builtin_lasx_mxvshf_b((v32i8)a, (v32i8)b, (v32i8)c);
```

## __m256i __lasx_mxvshf_d (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvshf_d (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvshf.d
Builtin: __builtin_lasx_mxvshf_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1805
```

### Description

Use each control u64 lane from `a` to choose a u64 lane from `b` or `c`; control values with the zero bit set produce zero. This is a byte-style table lookup within each 128-bit half.

### Operation

```c
dst.u64[0] = (a.u64[0] & 0x8) ? 0 : ((a.u64[0] & 0x2) ? b.u64[(a.u64[0] & 1)] : c.u64[(a.u64[0] & 1)]);
dst.u64[1] = (a.u64[1] & 0x8) ? 0 : ((a.u64[1] & 0x2) ? b.u64[(a.u64[1] & 1)] : c.u64[(a.u64[1] & 1)]);
dst.u64[2] = (a.u64[2] & 0x8) ? 0 : ((a.u64[2] & 0x2) ? b.u64[2 + (a.u64[2] & 1)] : c.u64[2 + (a.u64[2] & 1)]);
dst.u64[3] = (a.u64[3] & 0x8) ? 0 : ((a.u64[3] & 0x2) ? b.u64[2 + (a.u64[3] & 1)] : c.u64[2 + (a.u64[3] & 1)]);
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
return (__m256i)__builtin_lasx_mxvshf_d((v4i64)a, (v4i64)b, (v4i64)c);
```

## __m256i __lasx_mxvshf_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvshf_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvshf.h
Builtin: __builtin_lasx_mxvshf_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1791
```

### Description

Use each control u16 lane from `a` to choose a u16 lane from `b` or `c`; control values with the zero bit set produce zero. This is a byte-style table lookup within each 128-bit half.

### Operation

```c
dst.u16[0] = (a.u16[0] & 0x20) ? 0 : ((a.u16[0] & 0x8) ? b.u16[(a.u16[0] & 7)] : c.u16[(a.u16[0] & 7)]);
dst.u16[1] = (a.u16[1] & 0x20) ? 0 : ((a.u16[1] & 0x8) ? b.u16[(a.u16[1] & 7)] : c.u16[(a.u16[1] & 7)]);
dst.u16[2] = (a.u16[2] & 0x20) ? 0 : ((a.u16[2] & 0x8) ? b.u16[(a.u16[2] & 7)] : c.u16[(a.u16[2] & 7)]);
dst.u16[3] = (a.u16[3] & 0x20) ? 0 : ((a.u16[3] & 0x8) ? b.u16[(a.u16[3] & 7)] : c.u16[(a.u16[3] & 7)]);
dst.u16[4] = (a.u16[4] & 0x20) ? 0 : ((a.u16[4] & 0x8) ? b.u16[(a.u16[4] & 7)] : c.u16[(a.u16[4] & 7)]);
dst.u16[5] = (a.u16[5] & 0x20) ? 0 : ((a.u16[5] & 0x8) ? b.u16[(a.u16[5] & 7)] : c.u16[(a.u16[5] & 7)]);
dst.u16[6] = (a.u16[6] & 0x20) ? 0 : ((a.u16[6] & 0x8) ? b.u16[(a.u16[6] & 7)] : c.u16[(a.u16[6] & 7)]);
dst.u16[7] = (a.u16[7] & 0x20) ? 0 : ((a.u16[7] & 0x8) ? b.u16[(a.u16[7] & 7)] : c.u16[(a.u16[7] & 7)]);
dst.u16[8] = (a.u16[8] & 0x20) ? 0 : ((a.u16[8] & 0x8) ? b.u16[8 + (a.u16[8] & 7)] : c.u16[8 + (a.u16[8] & 7)]);
dst.u16[9] = (a.u16[9] & 0x20) ? 0 : ((a.u16[9] & 0x8) ? b.u16[8 + (a.u16[9] & 7)] : c.u16[8 + (a.u16[9] & 7)]);
dst.u16[10] = (a.u16[10] & 0x20) ? 0 : ((a.u16[10] & 0x8) ? b.u16[8 + (a.u16[10] & 7)] : c.u16[8 + (a.u16[10] & 7)]);
dst.u16[11] = (a.u16[11] & 0x20) ? 0 : ((a.u16[11] & 0x8) ? b.u16[8 + (a.u16[11] & 7)] : c.u16[8 + (a.u16[11] & 7)]);
dst.u16[12] = (a.u16[12] & 0x20) ? 0 : ((a.u16[12] & 0x8) ? b.u16[8 + (a.u16[12] & 7)] : c.u16[8 + (a.u16[12] & 7)]);
dst.u16[13] = (a.u16[13] & 0x20) ? 0 : ((a.u16[13] & 0x8) ? b.u16[8 + (a.u16[13] & 7)] : c.u16[8 + (a.u16[13] & 7)]);
dst.u16[14] = (a.u16[14] & 0x20) ? 0 : ((a.u16[14] & 0x8) ? b.u16[8 + (a.u16[14] & 7)] : c.u16[8 + (a.u16[14] & 7)]);
dst.u16[15] = (a.u16[15] & 0x20) ? 0 : ((a.u16[15] & 0x8) ? b.u16[8 + (a.u16[15] & 7)] : c.u16[8 + (a.u16[15] & 7)]);
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
return (__m256i)__builtin_lasx_mxvshf_h((v16i16)a, (v16i16)b, (v16i16)c);
```

## __m256i __lasx_mxvshf_w (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvshf_w (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvshf.w
Builtin: __builtin_lasx_mxvshf_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1798
```

### Description

Use each control u32 lane from `a` to choose a u32 lane from `b` or `c`; control values with the zero bit set produce zero. This is a byte-style table lookup within each 128-bit half.

### Operation

```c
dst.u32[0] = (a.u32[0] & 0x10) ? 0 : ((a.u32[0] & 0x4) ? b.u32[(a.u32[0] & 3)] : c.u32[(a.u32[0] & 3)]);
dst.u32[1] = (a.u32[1] & 0x10) ? 0 : ((a.u32[1] & 0x4) ? b.u32[(a.u32[1] & 3)] : c.u32[(a.u32[1] & 3)]);
dst.u32[2] = (a.u32[2] & 0x10) ? 0 : ((a.u32[2] & 0x4) ? b.u32[(a.u32[2] & 3)] : c.u32[(a.u32[2] & 3)]);
dst.u32[3] = (a.u32[3] & 0x10) ? 0 : ((a.u32[3] & 0x4) ? b.u32[(a.u32[3] & 3)] : c.u32[(a.u32[3] & 3)]);
dst.u32[4] = (a.u32[4] & 0x10) ? 0 : ((a.u32[4] & 0x4) ? b.u32[4 + (a.u32[4] & 3)] : c.u32[4 + (a.u32[4] & 3)]);
dst.u32[5] = (a.u32[5] & 0x10) ? 0 : ((a.u32[5] & 0x4) ? b.u32[4 + (a.u32[5] & 3)] : c.u32[4 + (a.u32[5] & 3)]);
dst.u32[6] = (a.u32[6] & 0x10) ? 0 : ((a.u32[6] & 0x4) ? b.u32[4 + (a.u32[6] & 3)] : c.u32[4 + (a.u32[6] & 3)]);
dst.u32[7] = (a.u32[7] & 0x10) ? 0 : ((a.u32[7] & 0x4) ? b.u32[4 + (a.u32[7] & 3)] : c.u32[4 + (a.u32[7] & 3)]);
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
return (__m256i)__builtin_lasx_mxvshf_w((v8i32)a, (v8i32)b, (v8i32)c);
```

## __m256i __lasx_mxvshufil_h (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_mxvshufil_h (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: mxvshufil.h
Builtin: __builtin_lasx_mxvshufil_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3639
```

### Description

Start from `a` and replace one fixed u16 lane group with an immediate shuffle of the matching group from `b`. This is useful for small in-place table rearrangements inside a 128-bit half.

### Operation

```c
dst = a;
dst.u16[4] = b.u16[4 + ((imm >> 0) & 3)];
dst.u16[5] = b.u16[4 + ((imm >> 2) & 3)];
dst.u16[6] = b.u16[4 + ((imm >> 4) & 3)];
dst.u16[7] = b.u16[4 + ((imm >> 6) & 3)];
dst.u16[12] = b.u16[12 + ((imm >> 0) & 3)];
dst.u16[13] = b.u16[12 + ((imm >> 2) & 3)];
dst.u16[14] = b.u16[12 + ((imm >> 4) & 3)];
dst.u16[15] = b.u16[12 + ((imm >> 6) & 3)];
```

### Header Mapping

```c
#define __lasx_mxvshufil_h(a, b, imm) ((__m256i)__builtin_lasx_mxvshufil_h((v16i16)(a), (v16i16)(b), (imm)))
```

## __m256i __lasx_mxvshufill_b (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_mxvshufill_b (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: mxvshufill.b
Builtin: __builtin_lasx_mxvshufill_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3637
```

### Description

Broadcast one selected u8 lane from `a` into every destination lane.

### Operation

```c
dst = a;
dst.u8[12] = b.u8[12 + ((imm >> 0) & 3)];
dst.u8[13] = b.u8[12 + ((imm >> 2) & 3)];
dst.u8[14] = b.u8[12 + ((imm >> 4) & 3)];
dst.u8[15] = b.u8[12 + ((imm >> 6) & 3)];
dst.u8[28] = b.u8[28 + ((imm >> 0) & 3)];
dst.u8[29] = b.u8[28 + ((imm >> 2) & 3)];
dst.u8[30] = b.u8[28 + ((imm >> 4) & 3)];
dst.u8[31] = b.u8[28 + ((imm >> 6) & 3)];
```

### Header Mapping

```c
#define __lasx_mxvshufill_b(a, b, imm) ((__m256i)__builtin_lasx_mxvshufill_b((v32i8)(a), (v32i8)(b), (imm)))
```

## __m256i __lasx_mxvshufilr_b (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_mxvshufilr_b (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: mxvshufilr.b
Builtin: __builtin_lasx_mxvshufilr_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3636
```

### Description

Start from `a` and replace one fixed u8 lane group with an immediate shuffle of the matching group from `b`. This is useful for small in-place table rearrangements inside a 128-bit half.

### Operation

```c
dst = a;
dst.u8[8] = b.u8[8 + ((imm >> 0) & 3)];
dst.u8[9] = b.u8[8 + ((imm >> 2) & 3)];
dst.u8[10] = b.u8[8 + ((imm >> 4) & 3)];
dst.u8[11] = b.u8[8 + ((imm >> 6) & 3)];
dst.u8[24] = b.u8[24 + ((imm >> 0) & 3)];
dst.u8[25] = b.u8[24 + ((imm >> 2) & 3)];
dst.u8[26] = b.u8[24 + ((imm >> 4) & 3)];
dst.u8[27] = b.u8[24 + ((imm >> 6) & 3)];
```

### Header Mapping

```c
#define __lasx_mxvshufilr_b(a, b, imm) ((__m256i)__builtin_lasx_mxvshufilr_b((v32i8)(a), (v32i8)(b), (imm)))
```

## __m256i __lasx_mxvshufir_h (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_mxvshufir_h (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: mxvshufir.h
Builtin: __builtin_lasx_mxvshufir_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3638
```

### Description

Start from `a` and replace one fixed u16 lane group with an immediate shuffle of the matching group from `b`. This is useful for small in-place table rearrangements inside a 128-bit half.

### Operation

```c
dst = a;
dst.u16[0] = b.u16[0 + ((imm >> 0) & 3)];
dst.u16[1] = b.u16[0 + ((imm >> 2) & 3)];
dst.u16[2] = b.u16[0 + ((imm >> 4) & 3)];
dst.u16[3] = b.u16[0 + ((imm >> 6) & 3)];
dst.u16[8] = b.u16[8 + ((imm >> 0) & 3)];
dst.u16[9] = b.u16[8 + ((imm >> 2) & 3)];
dst.u16[10] = b.u16[8 + ((imm >> 4) & 3)];
dst.u16[11] = b.u16[8 + ((imm >> 6) & 3)];
```

### Header Mapping

```c
#define __lasx_mxvshufir_h(a, b, imm) ((__m256i)__builtin_lasx_mxvshufir_h((v16i16)(a), (v16i16)(b), (imm)))
```

## __m256i __lasx_mxvshufirl_b (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_mxvshufirl_b (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: mxvshufirl.b
Builtin: __builtin_lasx_mxvshufirl_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3635
```

### Description

Start from `a` and replace one fixed u8 lane group with an immediate shuffle of the matching group from `b`. This is useful for small in-place table rearrangements inside a 128-bit half.

### Operation

```c
dst = a;
dst.u8[4] = b.u8[4 + ((imm >> 0) & 3)];
dst.u8[5] = b.u8[4 + ((imm >> 2) & 3)];
dst.u8[6] = b.u8[4 + ((imm >> 4) & 3)];
dst.u8[7] = b.u8[4 + ((imm >> 6) & 3)];
dst.u8[20] = b.u8[20 + ((imm >> 0) & 3)];
dst.u8[21] = b.u8[20 + ((imm >> 2) & 3)];
dst.u8[22] = b.u8[20 + ((imm >> 4) & 3)];
dst.u8[23] = b.u8[20 + ((imm >> 6) & 3)];
```

### Header Mapping

```c
#define __lasx_mxvshufirl_b(a, b, imm) ((__m256i)__builtin_lasx_mxvshufirl_b((v32i8)(a), (v32i8)(b), (imm)))
```

## __m256i __lasx_mxvshufirr_b (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_mxvshufirr_b (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: mxvshufirr.b
Builtin: __builtin_lasx_mxvshufirr_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3634
```

### Description

Start from `a` and replace one fixed u8 lane group with an immediate shuffle of the matching group from `b`. This is useful for small in-place table rearrangements inside a 128-bit half.

### Operation

```c
dst = a;
dst.u8[0] = b.u8[0 + ((imm >> 0) & 3)];
dst.u8[1] = b.u8[0 + ((imm >> 2) & 3)];
dst.u8[2] = b.u8[0 + ((imm >> 4) & 3)];
dst.u8[3] = b.u8[0 + ((imm >> 6) & 3)];
dst.u8[16] = b.u8[16 + ((imm >> 0) & 3)];
dst.u8[17] = b.u8[16 + ((imm >> 2) & 3)];
dst.u8[18] = b.u8[16 + ((imm >> 4) & 3)];
dst.u8[19] = b.u8[16 + ((imm >> 6) & 3)];
```

### Header Mapping

```c
#define __lasx_mxvshufirr_b(a, b, imm) ((__m256i)__builtin_lasx_mxvshufirr_b((v32i8)(a), (v32i8)(b), (imm)))
```

## __m256i __lasx_mxw2x_hi_s_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_hi_s_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.hi.s.b
Builtin: __builtin_lasx_mxw2x_hi_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4782
```

### Description

Take upper-half i8 lanes, sign- or zero-extend each one into i16 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i16[0] = sign_or_zero_extend(a.u8[16], 2 * 8);
dst.i16[1] = sign_or_zero_extend(a.u8[17], 2 * 8);
dst.i16[2] = sign_or_zero_extend(a.u8[18], 2 * 8);
dst.i16[3] = sign_or_zero_extend(a.u8[19], 2 * 8);
dst.i16[4] = sign_or_zero_extend(a.u8[20], 2 * 8);
dst.i16[5] = sign_or_zero_extend(a.u8[21], 2 * 8);
dst.i16[6] = sign_or_zero_extend(a.u8[22], 2 * 8);
dst.i16[7] = sign_or_zero_extend(a.u8[23], 2 * 8);
dst.i16[8] = sign_or_zero_extend(a.u8[24], 2 * 8);
dst.i16[9] = sign_or_zero_extend(a.u8[25], 2 * 8);
dst.i16[10] = sign_or_zero_extend(a.u8[26], 2 * 8);
dst.i16[11] = sign_or_zero_extend(a.u8[27], 2 * 8);
dst.i16[12] = sign_or_zero_extend(a.u8[28], 2 * 8);
dst.i16[13] = sign_or_zero_extend(a.u8[29], 2 * 8);
dst.i16[14] = sign_or_zero_extend(a.u8[30], 2 * 8);
dst.i16[15] = sign_or_zero_extend(a.u8[31], 2 * 8);
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
return (__m256i) __builtin_lasx_mxw2x_hi_s_b ((v32i8) a);
```

## __m256i __lasx_mxw2x_hi_s_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_hi_s_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.hi.s.d
Builtin: __builtin_lasx_mxw2x_hi_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4800
```

### Description

Take upper-half i64 lanes, sign- or zero-extend each one into i128 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i128[0] = sign_or_zero_extend(a.u64[2], 2 * 64);
dst.i128[1] = sign_or_zero_extend(a.u64[3], 2 * 64);
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
return (__m256i) __builtin_lasx_mxw2x_hi_s_d ((v4i64) a);
```

## __m256i __lasx_mxw2x_hi_s_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_hi_s_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.hi.s.h
Builtin: __builtin_lasx_mxw2x_hi_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4788
```

### Description

Take upper-half i16 lanes, sign- or zero-extend each one into i32 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i32[0] = sign_or_zero_extend(a.u16[8], 2 * 16);
dst.i32[1] = sign_or_zero_extend(a.u16[9], 2 * 16);
dst.i32[2] = sign_or_zero_extend(a.u16[10], 2 * 16);
dst.i32[3] = sign_or_zero_extend(a.u16[11], 2 * 16);
dst.i32[4] = sign_or_zero_extend(a.u16[12], 2 * 16);
dst.i32[5] = sign_or_zero_extend(a.u16[13], 2 * 16);
dst.i32[6] = sign_or_zero_extend(a.u16[14], 2 * 16);
dst.i32[7] = sign_or_zero_extend(a.u16[15], 2 * 16);
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
return (__m256i) __builtin_lasx_mxw2x_hi_s_h ((v16i16) a);
```

## __m256i __lasx_mxw2x_hi_s_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_hi_s_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.hi.s.w
Builtin: __builtin_lasx_mxw2x_hi_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4794
```

### Description

Take upper-half i32 lanes, sign- or zero-extend each one into i64 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i64[0] = sign_or_zero_extend(a.u32[4], 2 * 32);
dst.i64[1] = sign_or_zero_extend(a.u32[5], 2 * 32);
dst.i64[2] = sign_or_zero_extend(a.u32[6], 2 * 32);
dst.i64[3] = sign_or_zero_extend(a.u32[7], 2 * 32);
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
return (__m256i) __builtin_lasx_mxw2x_hi_s_w ((v8i32) a);
```

## __m256i __lasx_mxw2x_lo_s_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_lo_s_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.lo.s.b
Builtin: __builtin_lasx_mxw2x_lo_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4758
```

### Description

Take lower-half i8 lanes, sign- or zero-extend each one into i16 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i16[0] = sign_or_zero_extend(a.u8[0], 2 * 8);
dst.i16[1] = sign_or_zero_extend(a.u8[1], 2 * 8);
dst.i16[2] = sign_or_zero_extend(a.u8[2], 2 * 8);
dst.i16[3] = sign_or_zero_extend(a.u8[3], 2 * 8);
dst.i16[4] = sign_or_zero_extend(a.u8[4], 2 * 8);
dst.i16[5] = sign_or_zero_extend(a.u8[5], 2 * 8);
dst.i16[6] = sign_or_zero_extend(a.u8[6], 2 * 8);
dst.i16[7] = sign_or_zero_extend(a.u8[7], 2 * 8);
dst.i16[8] = sign_or_zero_extend(a.u8[8], 2 * 8);
dst.i16[9] = sign_or_zero_extend(a.u8[9], 2 * 8);
dst.i16[10] = sign_or_zero_extend(a.u8[10], 2 * 8);
dst.i16[11] = sign_or_zero_extend(a.u8[11], 2 * 8);
dst.i16[12] = sign_or_zero_extend(a.u8[12], 2 * 8);
dst.i16[13] = sign_or_zero_extend(a.u8[13], 2 * 8);
dst.i16[14] = sign_or_zero_extend(a.u8[14], 2 * 8);
dst.i16[15] = sign_or_zero_extend(a.u8[15], 2 * 8);
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
return (__m256i) __builtin_lasx_mxw2x_lo_s_b ((v32i8) a);
```

## __m256i __lasx_mxw2x_lo_s_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_lo_s_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.lo.s.d
Builtin: __builtin_lasx_mxw2x_lo_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4776
```

### Description

Take lower-half i64 lanes, sign- or zero-extend each one into i128 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i128[0] = sign_or_zero_extend(a.u64[0], 2 * 64);
dst.i128[1] = sign_or_zero_extend(a.u64[1], 2 * 64);
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
return (__m256i) __builtin_lasx_mxw2x_lo_s_d ((v4i64) a);
```

## __m256i __lasx_mxw2x_lo_s_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_lo_s_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.lo.s.h
Builtin: __builtin_lasx_mxw2x_lo_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4764
```

### Description

Take lower-half i16 lanes, sign- or zero-extend each one into i32 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i32[0] = sign_or_zero_extend(a.u16[0], 2 * 16);
dst.i32[1] = sign_or_zero_extend(a.u16[1], 2 * 16);
dst.i32[2] = sign_or_zero_extend(a.u16[2], 2 * 16);
dst.i32[3] = sign_or_zero_extend(a.u16[3], 2 * 16);
dst.i32[4] = sign_or_zero_extend(a.u16[4], 2 * 16);
dst.i32[5] = sign_or_zero_extend(a.u16[5], 2 * 16);
dst.i32[6] = sign_or_zero_extend(a.u16[6], 2 * 16);
dst.i32[7] = sign_or_zero_extend(a.u16[7], 2 * 16);
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
return (__m256i) __builtin_lasx_mxw2x_lo_s_h ((v16i16) a);
```

## __m256i __lasx_mxw2x_lo_s_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_lo_s_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.lo.s.w
Builtin: __builtin_lasx_mxw2x_lo_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4770
```

### Description

Take lower-half i32 lanes, sign- or zero-extend each one into i64 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i64[0] = sign_or_zero_extend(a.u32[0], 2 * 32);
dst.i64[1] = sign_or_zero_extend(a.u32[1], 2 * 32);
dst.i64[2] = sign_or_zero_extend(a.u32[2], 2 * 32);
dst.i64[3] = sign_or_zero_extend(a.u32[3], 2 * 32);
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
return (__m256i) __builtin_lasx_mxw2x_lo_s_w ((v8i32) a);
```

## long int __lasx_xcopy_s_d (__m256i a, unsigned char imm)

### Synopsis

```c
long int __lasx_xcopy_s_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: xcopy.s.d
Builtin: __builtin_lasx_xcopy_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4158
```

### Description

Extract one i64 lane from `a`, sign-extend it if needed, and return the scalar value.

### Operation

```c
return sign_or_zero_extend(a.u64[imm]);
```

### Header Mapping

```c
#define __lasx_xcopy_s_d(a, imm) ((long int)__builtin_lasx_xcopy_s_d((v4i64)(a), (imm)))
```

## int __lasx_xcopy_s_w (__m256i a, unsigned char imm)

### Synopsis

```c
int __lasx_xcopy_s_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: xcopy.s.w
Builtin: __builtin_lasx_xcopy_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4156
```

### Description

Extract one i32 lane from `a`, sign-extend it if needed, and return the scalar value.

### Operation

```c
return sign_or_zero_extend(a.u32[imm]);
```

### Header Mapping

```c
#define __lasx_xcopy_s_w(a, imm) ((int)__builtin_lasx_xcopy_s_w((v8i32)(a), (imm)))
```

## int __lasx_xcopy_u_w (__m256i a, unsigned char imm)

### Synopsis

```c
int __lasx_xcopy_u_w (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: xcopy.u.w
Builtin: __builtin_lasx_xcopy_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4157
```

### Description

Extract one u32 lane from `a`, zero-extend it if needed, and return the scalar value.

### Operation

```c
return sign_or_zero_extend(a.u32[imm]);
```

### Header Mapping

```c
#define __lasx_xcopy_u_w(a, imm) ((int)__builtin_lasx_xcopy_u_w((v8i32)(a), (imm)))
```

## __m256i __lasx_xinsert_d (__m256i a, unsigned char imm, long int imm1)

### Synopsis

```c
__m256i __lasx_xinsert_d (__m256i a, unsigned char imm, long int imm1)
#include <loongson-asxintrin.h>
Instruction: xinsert.d
Builtin: __builtin_lasx_xinsert_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4160
```

### Description

Start from `a` and replace the selected u64 lane with the scalar value argument.

### Operation

```c
dst = a;
dst.u64[imm] = imm1;
```

### Header Mapping

```c
#define __lasx_xinsert_d(a, imm, imm1) ((__m256i)__builtin_lasx_xinsert_d((v4i64)(a), (imm), (imm1)))
```

## __m256i __lasx_xinsert_w (__m256i a, unsigned char imm, int imm1)

### Synopsis

```c
__m256i __lasx_xinsert_w (__m256i a, unsigned char imm, int imm1)
#include <loongson-asxintrin.h>
Instruction: xinsert.w
Builtin: __builtin_lasx_xinsert_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4159
```

### Description

Start from `a` and replace the selected u32 lane with the scalar value argument.

### Operation

```c
dst = a;
dst.u32[imm] = imm1;
```

### Header Mapping

```c
#define __lasx_xinsert_w(a, imm, imm1) ((__m256i)__builtin_lasx_xinsert_w((v8i32)(a), (imm), (imm1)))
```

## __m256i __lasx_xshuf_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_xshuf_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: xshuf.w
Builtin: __builtin_lasx_xshuf_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4311
```

### Description

Use the low bits of each `b` lane to select a u32 lane from `a`.

### Operation

```c
dst.u32[0] = a.u32[b.u32[0] & 7];
dst.u32[1] = a.u32[b.u32[1] & 7];
dst.u32[2] = a.u32[b.u32[2] & 7];
dst.u32[3] = a.u32[b.u32[3] & 7];
dst.u32[4] = a.u32[b.u32[4] & 7];
dst.u32[5] = a.u32[b.u32[5] & 7];
dst.u32[6] = a.u32[b.u32[6] & 7];
dst.u32[7] = a.u32[b.u32[7] & 7];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.50/3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
return (__m256i)__builtin_lasx_xshuf_w((v8i32)a, (v8i32)b);
```

## __m256i __lasx_xshufi_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_xshufi_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: xshufi.d
Builtin: __builtin_lasx_xshufi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4309
```

### Description

Use immediate bit fields to select each destination u64 lane from `a`.

### Operation

```c
dst.u64[0] = a.u64[((imm >> 0) & 3)];
dst.u64[1] = a.u64[((imm >> 2) & 3)];
dst.u64[2] = a.u64[((imm >> 4) & 3)];
dst.u64[3] = a.u64[((imm >> 6) & 3)];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>0.50/3</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lasx_xshufi_d(a, imm) ((__m256i)__builtin_lasx_xshufi_d((v4i64)(a), (imm)))
```

## __m256i __lasx_xvbroadcast_b (__m256i a)

### Synopsis

```c
__m256i __lasx_xvbroadcast_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xvbroadcast.b
Builtin: __builtin_lasx_xvbroadcast_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4162
```

### Description

Broadcast u8 lane 0 from `a` into every destination lane.

### Operation

```c
dst.u8[0] = a.u8[0];
dst.u8[1] = a.u8[0];
dst.u8[2] = a.u8[0];
dst.u8[3] = a.u8[0];
dst.u8[4] = a.u8[0];
dst.u8[5] = a.u8[0];
dst.u8[6] = a.u8[0];
dst.u8[7] = a.u8[0];
dst.u8[8] = a.u8[0];
dst.u8[9] = a.u8[0];
dst.u8[10] = a.u8[0];
dst.u8[11] = a.u8[0];
dst.u8[12] = a.u8[0];
dst.u8[13] = a.u8[0];
dst.u8[14] = a.u8[0];
dst.u8[15] = a.u8[0];
dst.u8[16] = a.u8[0];
dst.u8[17] = a.u8[0];
dst.u8[18] = a.u8[0];
dst.u8[19] = a.u8[0];
dst.u8[20] = a.u8[0];
dst.u8[21] = a.u8[0];
dst.u8[22] = a.u8[0];
dst.u8[23] = a.u8[0];
dst.u8[24] = a.u8[0];
dst.u8[25] = a.u8[0];
dst.u8[26] = a.u8[0];
dst.u8[27] = a.u8[0];
dst.u8[28] = a.u8[0];
dst.u8[29] = a.u8[0];
dst.u8[30] = a.u8[0];
dst.u8[31] = a.u8[0];
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
return (__m256i)__builtin_lasx_xvbroadcast_b((v32i8)a);
```

## __m256i __lasx_xvbroadcast_d (__m256i a)

### Synopsis

```c
__m256i __lasx_xvbroadcast_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xvbroadcast.d
Builtin: __builtin_lasx_xvbroadcast_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4183
```

### Description

Broadcast u64 lane 0 from `a` into every destination lane.

### Operation

```c
dst.u64[0] = a.u64[0];
dst.u64[1] = a.u64[0];
dst.u64[2] = a.u64[0];
dst.u64[3] = a.u64[0];
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
return (__m256i)__builtin_lasx_xvbroadcast_d((v4i64)a);
```

## __m256i __lasx_xvbroadcast_h (__m256i a)

### Synopsis

```c
__m256i __lasx_xvbroadcast_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xvbroadcast.h
Builtin: __builtin_lasx_xvbroadcast_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4169
```

### Description

Broadcast u16 lane 0 from `a` into every destination lane.

### Operation

```c
dst.u16[0] = a.u16[0];
dst.u16[1] = a.u16[0];
dst.u16[2] = a.u16[0];
dst.u16[3] = a.u16[0];
dst.u16[4] = a.u16[0];
dst.u16[5] = a.u16[0];
dst.u16[6] = a.u16[0];
dst.u16[7] = a.u16[0];
dst.u16[8] = a.u16[0];
dst.u16[9] = a.u16[0];
dst.u16[10] = a.u16[0];
dst.u16[11] = a.u16[0];
dst.u16[12] = a.u16[0];
dst.u16[13] = a.u16[0];
dst.u16[14] = a.u16[0];
dst.u16[15] = a.u16[0];
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
return (__m256i)__builtin_lasx_xvbroadcast_h((v16i16)a);
```

## __m256i __lasx_xvbroadcast_q (__m256i a)

### Synopsis

```c
__m256i __lasx_xvbroadcast_q (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xvbroadcast.q
Builtin: __builtin_lasx_xvbroadcast_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4190
```

### Description

Broadcast u128 lane 0 from `a` into every destination lane.

### Operation

```c
dst.u128[0] = a.u128[0];
dst.u128[1] = a.u128[0];
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
return (__m256i)__builtin_lasx_xvbroadcast_q((v32i8)a);
```

## __m256i __lasx_xvbroadcast_w (__m256i a)

### Synopsis

```c
__m256i __lasx_xvbroadcast_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xvbroadcast.w
Builtin: __builtin_lasx_xvbroadcast_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4176
```

### Description

Broadcast u32 lane 0 from `a` into every destination lane.

### Operation

```c
dst.u32[0] = a.u32[0];
dst.u32[1] = a.u32[0];
dst.u32[2] = a.u32[0];
dst.u32[3] = a.u32[0];
dst.u32[4] = a.u32[0];
dst.u32[5] = a.u32[0];
dst.u32[6] = a.u32[0];
dst.u32[7] = a.u32[0];
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
return (__m256i)__builtin_lasx_xvbroadcast_w((v8i32)a);
```

## __m256i __lasx_xvextract_q (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_xvextract_q (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: xvextract.q
Builtin: __builtin_lasx_xvextract_q
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4317
```

### Description

Extract the 128-bit lane selected by `imm` from `a` into the low half of the result and clear the high half.

### Operation

```c
dst.u128[0] = a.u128[imm & 1];
dst.u128[1] = 0;
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
#define __lasx_xvextract_q(a, imm) ((__m256i)__builtin_lasx_xvextract_q((v32i8)(a), (imm)))
```

## __m256i __lasx_xvinsert_q (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_xvinsert_q (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: xvinsert.q
Builtin: __builtin_lasx_xvinsert_q
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4318
```

### Description

Start from `a` and replace the 128-bit lane selected by `imm` with the low 128-bit lane from `b`.

### Operation

```c
dst = a;
dst.u128[imm & 1] = b.u128[0];
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
#define __lasx_xvinsert_q(a, b, imm) ((__m256i)__builtin_lasx_xvinsert_q((v32i8)(a), (v32i8)(b), (imm)))
```

## __m256i __lasx_xvpermi_d (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_xvpermi_d (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: xvpermi.d
Builtin: __builtin_lasx_xvpermi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4323
```

### Description

Use one immediate bit per destination u64 lane to choose between the two u64 lanes in the same 128-bit half of `a`.

### Operation

```c
dst.u64[0] = a.u64[0 + ((imm >> 0) & 1)];
dst.u64[1] = a.u64[0 + ((imm >> 1) & 1)];
dst.u64[2] = a.u64[2 + ((imm >> 2) & 1)];
dst.u64[3] = a.u64[2 + ((imm >> 3) & 1)];
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
#define __lasx_xvpermi_d(a, imm) ((__m256i)__builtin_lasx_xvpermi_d((v4i64)(a), (imm)))
```

## __m256i __lasx_xvsel128i_d (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_xvsel128i_d (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: xvsel128i.d
Builtin: __builtin_lasx_xvsel128i_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4322
```

### Description

Use immediate fields to build each 128-bit half from selected u64 lanes of `b` and `a`.

### Operation

```c
dst.u64[0] = b.u64[0 + ((imm >> 0) & 1)];
dst.u64[1] = a.u64[0 + ((imm >> 1) & 1)];
dst.u64[2] = b.u64[2 + ((imm >> 2) & 1)];
dst.u64[3] = a.u64[2 + ((imm >> 3) & 1)];
```

### Header Mapping

```c
#define __lasx_xvsel128i_d(a, b, imm) ((__m256i)__builtin_lasx_xvsel128i_d((v4i64)(a), (v4i64)(b), (imm)))
```

## __m256i __lasx_xvsel128i_w (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_xvsel128i_w (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: xvsel128i.w
Builtin: __builtin_lasx_xvsel128i_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4321
```

### Description

Use immediate fields to build each 128-bit half from selected u32 lanes of `b` and `a`.

### Operation

```c
dst.u32[0] = b.u32[0 + ((imm >> 0) & 3)];
dst.u32[1] = b.u32[0 + ((imm >> 2) & 3)];
dst.u32[2] = a.u32[0 + ((imm >> 4) & 3)];
dst.u32[3] = a.u32[0 + ((imm >> 6) & 3)];
dst.u32[4] = b.u32[4 + ((imm >> 0) & 3)];
dst.u32[5] = b.u32[4 + ((imm >> 2) & 3)];
dst.u32[6] = a.u32[4 + ((imm >> 4) & 3)];
dst.u32[7] = a.u32[4 + ((imm >> 6) & 3)];
```

### Header Mapping

```c
#define __lasx_xvsel128i_w(a, b, imm) ((__m256i)__builtin_lasx_xvsel128i_w((v8i32)(a), (v8i32)(b), (imm)))
```

## __m256i __lasx_xvseli_d (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_xvseli_d (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: xvseli.d
Builtin: __builtin_lasx_xvseli_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4320
```

### Description

Use one immediate bit per u64 lane: a 0 bit chooses `a`, and a 1 bit chooses `b`.

### Operation

```c
dst.u64[0] = ((imm >> 0) & 1) ? b.u64[0] : a.u64[0];
dst.u64[1] = ((imm >> 1) & 1) ? b.u64[1] : a.u64[1];
dst.u64[2] = ((imm >> 2) & 1) ? b.u64[2] : a.u64[2];
dst.u64[3] = ((imm >> 3) & 1) ? b.u64[3] : a.u64[3];
```

### Header Mapping

```c
#define __lasx_xvseli_d(a, b, imm) ((__m256i)__builtin_lasx_xvseli_d((v4i64)(a), (v4i64)(b), (imm)))
```

## __m256i __lasx_xvseli_w (__m256i a, __m256i b, unsigned int imm)

### Synopsis

```c
__m256i __lasx_xvseli_w (__m256i a, __m256i b, unsigned int imm)
#include <loongson-asxintrin.h>
Instruction: xvseli.w
Builtin: __builtin_lasx_xvseli_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4319
```

### Description

Use one immediate bit per u32 lane: a 0 bit chooses `a`, and a 1 bit chooses `b`.

### Operation

```c
dst.u32[0] = ((imm >> 0) & 1) ? b.u32[0] : a.u32[0];
dst.u32[1] = ((imm >> 1) & 1) ? b.u32[1] : a.u32[1];
dst.u32[2] = ((imm >> 2) & 1) ? b.u32[2] : a.u32[2];
dst.u32[3] = ((imm >> 3) & 1) ? b.u32[3] : a.u32[3];
dst.u32[4] = ((imm >> 4) & 1) ? b.u32[4] : a.u32[4];
dst.u32[5] = ((imm >> 5) & 1) ? b.u32[5] : a.u32[5];
dst.u32[6] = ((imm >> 6) & 1) ? b.u32[6] : a.u32[6];
dst.u32[7] = ((imm >> 7) & 1) ? b.u32[7] : a.u32[7];
```

### Header Mapping

```c
#define __lasx_xvseli_w(a, b, imm) ((__m256i)__builtin_lasx_xvseli_w((v8i32)(a), (v8i32)(b), (imm)))
```

## __m256i __lasx_xvshufi_q (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_xvshufi_q (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: xvshufi.q
Builtin: __builtin_lasx_xvshufi_q
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4308
```

### Description

Start from `a` and replace one fixed u128 lane group with an immediate shuffle of the matching group from `b`. This is useful for small in-place table rearrangements inside a 128-bit half.

### Operation

```c
dst.u128[0] = ((imm >> 0) & 1) ? b.u128[1] : b.u128[0];
dst.u128[1] = ((imm >> 2) & 1) ? b.u128[1] : b.u128[0];
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
#define __lasx_xvshufi_q(a, b, imm) ((__m256i)__builtin_lasx_xvshufi_q((v32i8)(a), (v32i8)(b), (imm)))
```

## __m256i __lasx_xw2x_s_lo_b (__m256i a)

### Synopsis

```c
__m256i __lasx_xw2x_s_lo_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xw2x.s.lo.b
Builtin: __builtin_lasx_xw2x_s_lo_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4239
```

### Description

Take lower-half i8 lanes, sign- or zero-extend each one into i16 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i16[0] = sign_or_zero_extend(a.u8[0], 2 * 8);
dst.i16[1] = sign_or_zero_extend(a.u8[1], 2 * 8);
dst.i16[2] = sign_or_zero_extend(a.u8[2], 2 * 8);
dst.i16[3] = sign_or_zero_extend(a.u8[3], 2 * 8);
dst.i16[4] = sign_or_zero_extend(a.u8[4], 2 * 8);
dst.i16[5] = sign_or_zero_extend(a.u8[5], 2 * 8);
dst.i16[6] = sign_or_zero_extend(a.u8[6], 2 * 8);
dst.i16[7] = sign_or_zero_extend(a.u8[7], 2 * 8);
dst.i16[8] = sign_or_zero_extend(a.u8[8], 2 * 8);
dst.i16[9] = sign_or_zero_extend(a.u8[9], 2 * 8);
dst.i16[10] = sign_or_zero_extend(a.u8[10], 2 * 8);
dst.i16[11] = sign_or_zero_extend(a.u8[11], 2 * 8);
dst.i16[12] = sign_or_zero_extend(a.u8[12], 2 * 8);
dst.i16[13] = sign_or_zero_extend(a.u8[13], 2 * 8);
dst.i16[14] = sign_or_zero_extend(a.u8[14], 2 * 8);
dst.i16[15] = sign_or_zero_extend(a.u8[15], 2 * 8);
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
return (__m256i)__builtin_lasx_xw2x_s_lo_b((v32i8)a);
```

## __m256i __lasx_xw2x_s_lo_h (__m256i a)

### Synopsis

```c
__m256i __lasx_xw2x_s_lo_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xw2x.s.lo.h
Builtin: __builtin_lasx_xw2x_s_lo_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4246
```

### Description

Take lower-half i16 lanes, sign- or zero-extend each one into i32 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i32[0] = sign_or_zero_extend(a.u16[0], 2 * 16);
dst.i32[1] = sign_or_zero_extend(a.u16[1], 2 * 16);
dst.i32[2] = sign_or_zero_extend(a.u16[2], 2 * 16);
dst.i32[3] = sign_or_zero_extend(a.u16[3], 2 * 16);
dst.i32[4] = sign_or_zero_extend(a.u16[4], 2 * 16);
dst.i32[5] = sign_or_zero_extend(a.u16[5], 2 * 16);
dst.i32[6] = sign_or_zero_extend(a.u16[6], 2 * 16);
dst.i32[7] = sign_or_zero_extend(a.u16[7], 2 * 16);
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
return (__m256i)__builtin_lasx_xw2x_s_lo_h((v16i16)a);
```

## __m256i __lasx_xw2x_s_lo_w (__m256i a)

### Synopsis

```c
__m256i __lasx_xw2x_s_lo_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xw2x.s.lo.w
Builtin: __builtin_lasx_xw2x_s_lo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4253
```

### Description

Take lower-half i32 lanes, sign- or zero-extend each one into i64 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i64[0] = sign_or_zero_extend(a.u32[0], 2 * 32);
dst.i64[1] = sign_or_zero_extend(a.u32[1], 2 * 32);
dst.i64[2] = sign_or_zero_extend(a.u32[2], 2 * 32);
dst.i64[3] = sign_or_zero_extend(a.u32[3], 2 * 32);
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
return (__m256i)__builtin_lasx_xw2x_s_lo_w((v8i32)a);
```

## __m256i __lasx_xw2x_u_lo_b (__m256i a)

### Synopsis

```c
__m256i __lasx_xw2x_u_lo_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xw2x.u.lo.b
Builtin: __builtin_lasx_xw2x_u_lo_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4197
```

### Description

Take lower-half u8 lanes, sign- or zero-extend each one into u16 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.u16[0] = sign_or_zero_extend(a.u8[0], 2 * 8);
dst.u16[1] = sign_or_zero_extend(a.u8[1], 2 * 8);
dst.u16[2] = sign_or_zero_extend(a.u8[2], 2 * 8);
dst.u16[3] = sign_or_zero_extend(a.u8[3], 2 * 8);
dst.u16[4] = sign_or_zero_extend(a.u8[4], 2 * 8);
dst.u16[5] = sign_or_zero_extend(a.u8[5], 2 * 8);
dst.u16[6] = sign_or_zero_extend(a.u8[6], 2 * 8);
dst.u16[7] = sign_or_zero_extend(a.u8[7], 2 * 8);
dst.u16[8] = sign_or_zero_extend(a.u8[8], 2 * 8);
dst.u16[9] = sign_or_zero_extend(a.u8[9], 2 * 8);
dst.u16[10] = sign_or_zero_extend(a.u8[10], 2 * 8);
dst.u16[11] = sign_or_zero_extend(a.u8[11], 2 * 8);
dst.u16[12] = sign_or_zero_extend(a.u8[12], 2 * 8);
dst.u16[13] = sign_or_zero_extend(a.u8[13], 2 * 8);
dst.u16[14] = sign_or_zero_extend(a.u8[14], 2 * 8);
dst.u16[15] = sign_or_zero_extend(a.u8[15], 2 * 8);
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
return (__m256i)__builtin_lasx_xw2x_u_lo_b((v32i8)a);
```

## __m256i __lasx_xw2x_u_lo_h (__m256i a)

### Synopsis

```c
__m256i __lasx_xw2x_u_lo_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xw2x.u.lo.h
Builtin: __builtin_lasx_xw2x_u_lo_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4204
```

### Description

Take lower-half u16 lanes, sign- or zero-extend each one into u32 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.u32[0] = sign_or_zero_extend(a.u16[0], 2 * 16);
dst.u32[1] = sign_or_zero_extend(a.u16[1], 2 * 16);
dst.u32[2] = sign_or_zero_extend(a.u16[2], 2 * 16);
dst.u32[3] = sign_or_zero_extend(a.u16[3], 2 * 16);
dst.u32[4] = sign_or_zero_extend(a.u16[4], 2 * 16);
dst.u32[5] = sign_or_zero_extend(a.u16[5], 2 * 16);
dst.u32[6] = sign_or_zero_extend(a.u16[6], 2 * 16);
dst.u32[7] = sign_or_zero_extend(a.u16[7], 2 * 16);
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
return (__m256i)__builtin_lasx_xw2x_u_lo_h((v16i16)a);
```

## __m256i __lasx_xw2x_u_lo_w (__m256i a)

### Synopsis

```c
__m256i __lasx_xw2x_u_lo_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xw2x.u.lo.w
Builtin: __builtin_lasx_xw2x_u_lo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4211
```

### Description

Take lower-half u32 lanes, sign- or zero-extend each one into u64 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.u64[0] = sign_or_zero_extend(a.u32[0], 2 * 32);
dst.u64[1] = sign_or_zero_extend(a.u32[1], 2 * 32);
dst.u64[2] = sign_or_zero_extend(a.u32[2], 2 * 32);
dst.u64[3] = sign_or_zero_extend(a.u32[3], 2 * 32);
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
return (__m256i)__builtin_lasx_xw2x_u_lo_w((v8i32)a);
```

## __m256i __lasx_xw4x_s_lo_b (__m256i a)

### Synopsis

```c
__m256i __lasx_xw4x_s_lo_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xw4x.s.lo.b
Builtin: __builtin_lasx_xw4x_s_lo_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4260
```

### Description

Take lower-half i8 lanes, sign- or zero-extend each one into i32 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i32[0] = sign_or_zero_extend(a.u8[0], 4 * 8);
dst.i32[1] = sign_or_zero_extend(a.u8[1], 4 * 8);
dst.i32[2] = sign_or_zero_extend(a.u8[2], 4 * 8);
dst.i32[3] = sign_or_zero_extend(a.u8[3], 4 * 8);
dst.i32[4] = sign_or_zero_extend(a.u8[4], 4 * 8);
dst.i32[5] = sign_or_zero_extend(a.u8[5], 4 * 8);
dst.i32[6] = sign_or_zero_extend(a.u8[6], 4 * 8);
dst.i32[7] = sign_or_zero_extend(a.u8[7], 4 * 8);
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
return (__m256i)__builtin_lasx_xw4x_s_lo_b((v32i8)a);
```

## __m256i __lasx_xw4x_s_lo_h (__m256i a)

### Synopsis

```c
__m256i __lasx_xw4x_s_lo_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xw4x.s.lo.h
Builtin: __builtin_lasx_xw4x_s_lo_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4267
```

### Description

Take lower-half i16 lanes, sign- or zero-extend each one into i64 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i64[0] = sign_or_zero_extend(a.u16[0], 4 * 16);
dst.i64[1] = sign_or_zero_extend(a.u16[1], 4 * 16);
dst.i64[2] = sign_or_zero_extend(a.u16[2], 4 * 16);
dst.i64[3] = sign_or_zero_extend(a.u16[3], 4 * 16);
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
return (__m256i)__builtin_lasx_xw4x_s_lo_h((v16i16)a);
```

## __m256i __lasx_xw4x_u_lo_b (__m256i a)

### Synopsis

```c
__m256i __lasx_xw4x_u_lo_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xw4x.u.lo.b
Builtin: __builtin_lasx_xw4x_u_lo_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4218
```

### Description

Take lower-half u8 lanes, sign- or zero-extend each one into u32 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.u32[0] = sign_or_zero_extend(a.u8[0], 4 * 8);
dst.u32[1] = sign_or_zero_extend(a.u8[1], 4 * 8);
dst.u32[2] = sign_or_zero_extend(a.u8[2], 4 * 8);
dst.u32[3] = sign_or_zero_extend(a.u8[3], 4 * 8);
dst.u32[4] = sign_or_zero_extend(a.u8[4], 4 * 8);
dst.u32[5] = sign_or_zero_extend(a.u8[5], 4 * 8);
dst.u32[6] = sign_or_zero_extend(a.u8[6], 4 * 8);
dst.u32[7] = sign_or_zero_extend(a.u8[7], 4 * 8);
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
return (__m256i)__builtin_lasx_xw4x_u_lo_b((v32i8)a);
```

## __m256i __lasx_xw4x_u_lo_h (__m256i a)

### Synopsis

```c
__m256i __lasx_xw4x_u_lo_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xw4x.u.lo.h
Builtin: __builtin_lasx_xw4x_u_lo_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4225
```

### Description

Take lower-half u16 lanes, sign- or zero-extend each one into u64 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.u64[0] = sign_or_zero_extend(a.u16[0], 4 * 16);
dst.u64[1] = sign_or_zero_extend(a.u16[1], 4 * 16);
dst.u64[2] = sign_or_zero_extend(a.u16[2], 4 * 16);
dst.u64[3] = sign_or_zero_extend(a.u16[3], 4 * 16);
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
return (__m256i)__builtin_lasx_xw4x_u_lo_h((v16i16)a);
```

## __m256i __lasx_xw8x_s_lo_b (__m256i a)

### Synopsis

```c
__m256i __lasx_xw8x_s_lo_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xw8x.s.lo.b
Builtin: __builtin_lasx_xw8x_s_lo_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4274
```

### Description

Take lower-half i8 lanes, sign- or zero-extend each one into i64 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.i64[0] = sign_or_zero_extend(a.u8[0], 8 * 8);
dst.i64[1] = sign_or_zero_extend(a.u8[1], 8 * 8);
dst.i64[2] = sign_or_zero_extend(a.u8[2], 8 * 8);
dst.i64[3] = sign_or_zero_extend(a.u8[3], 8 * 8);
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
return (__m256i)__builtin_lasx_xw8x_s_lo_b((v32i8)a);
```

## __m256i __lasx_xw8x_u_lo_b (__m256i a)

### Synopsis

```c
__m256i __lasx_xw8x_u_lo_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xw8x.u.lo.b
Builtin: __builtin_lasx_xw8x_u_lo_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4232
```

### Description

Take lower-half u8 lanes, sign- or zero-extend each one into u64 lanes, and write the widened vector. This prepares narrow data for wider arithmetic without losing sign information.

### Operation

```c
dst.u64[0] = sign_or_zero_extend(a.u8[0], 8 * 8);
dst.u64[1] = sign_or_zero_extend(a.u8[1], 8 * 8);
dst.u64[2] = sign_or_zero_extend(a.u8[2], 8 * 8);
dst.u64[3] = sign_or_zero_extend(a.u8[3], 8 * 8);
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
return (__m256i)__builtin_lasx_xw8x_u_lo_b((v32i8)a);
```

