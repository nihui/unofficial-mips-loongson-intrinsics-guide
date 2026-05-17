# Miscellaneous

Generated from `include/loongson-sxintrin.h`. This page contains 19 intrinsics.

## __m128i __lsx_vclrstri_v (__m128i a, unsigned char imm)

### Synopsis

```c
__m128i __lsx_vclrstri_v (__m128i a, unsigned char imm)
#include <loongson-sxintrin.h>
Instruction: vclrstri.v
Builtin: __builtin_lsx_vclrstri_v
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:867
```

### Description

Preserve bytes before the string-limit position selected by the immediate operand and clear the rest. This is intended for vectorized string routines that need to zero bytes after a terminator or match boundary.

### Operation

```c
dst.u8[0] = (0 >= string_clear_limit_from(imm)) ? 0 : a.u8[0];
dst.u8[1] = (1 >= string_clear_limit_from(imm)) ? 0 : a.u8[1];
dst.u8[2] = (2 >= string_clear_limit_from(imm)) ? 0 : a.u8[2];
dst.u8[3] = (3 >= string_clear_limit_from(imm)) ? 0 : a.u8[3];
dst.u8[4] = (4 >= string_clear_limit_from(imm)) ? 0 : a.u8[4];
dst.u8[5] = (5 >= string_clear_limit_from(imm)) ? 0 : a.u8[5];
dst.u8[6] = (6 >= string_clear_limit_from(imm)) ? 0 : a.u8[6];
dst.u8[7] = (7 >= string_clear_limit_from(imm)) ? 0 : a.u8[7];
dst.u8[8] = (8 >= string_clear_limit_from(imm)) ? 0 : a.u8[8];
dst.u8[9] = (9 >= string_clear_limit_from(imm)) ? 0 : a.u8[9];
dst.u8[10] = (10 >= string_clear_limit_from(imm)) ? 0 : a.u8[10];
dst.u8[11] = (11 >= string_clear_limit_from(imm)) ? 0 : a.u8[11];
dst.u8[12] = (12 >= string_clear_limit_from(imm)) ? 0 : a.u8[12];
dst.u8[13] = (13 >= string_clear_limit_from(imm)) ? 0 : a.u8[13];
dst.u8[14] = (14 >= string_clear_limit_from(imm)) ? 0 : a.u8[14];
dst.u8[15] = (15 >= string_clear_limit_from(imm)) ? 0 : a.u8[15];
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
#define __lsx_vclrstri_v(a, imm) ((__m128i)__builtin_lsx_vclrstri_v((v16i8)(a), (imm)))
```

## __m128i __lsx_vclrstrr_v (__m128i a, long int imm)

### Synopsis

```c
__m128i __lsx_vclrstrr_v (__m128i a, long int imm)
#include <loongson-sxintrin.h>
Instruction: vclrstrr.v
Builtin: __builtin_lsx_vclrstrr_v
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:875
```

### Description

Preserve bytes before the string-limit position selected by the scalar register operand and clear the rest. This is intended for vectorized string routines that need to zero bytes after a terminator or match boundary.

### Operation

```c
dst.u8[0] = (0 >= string_clear_limit_from(imm)) ? 0 : a.u8[0];
dst.u8[1] = (1 >= string_clear_limit_from(imm)) ? 0 : a.u8[1];
dst.u8[2] = (2 >= string_clear_limit_from(imm)) ? 0 : a.u8[2];
dst.u8[3] = (3 >= string_clear_limit_from(imm)) ? 0 : a.u8[3];
dst.u8[4] = (4 >= string_clear_limit_from(imm)) ? 0 : a.u8[4];
dst.u8[5] = (5 >= string_clear_limit_from(imm)) ? 0 : a.u8[5];
dst.u8[6] = (6 >= string_clear_limit_from(imm)) ? 0 : a.u8[6];
dst.u8[7] = (7 >= string_clear_limit_from(imm)) ? 0 : a.u8[7];
dst.u8[8] = (8 >= string_clear_limit_from(imm)) ? 0 : a.u8[8];
dst.u8[9] = (9 >= string_clear_limit_from(imm)) ? 0 : a.u8[9];
dst.u8[10] = (10 >= string_clear_limit_from(imm)) ? 0 : a.u8[10];
dst.u8[11] = (11 >= string_clear_limit_from(imm)) ? 0 : a.u8[11];
dst.u8[12] = (12 >= string_clear_limit_from(imm)) ? 0 : a.u8[12];
dst.u8[13] = (13 >= string_clear_limit_from(imm)) ? 0 : a.u8[13];
dst.u8[14] = (14 >= string_clear_limit_from(imm)) ? 0 : a.u8[14];
dst.u8[15] = (15 >= string_clear_limit_from(imm)) ? 0 : a.u8[15];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vclrstrr_v((v16i8)a, imm);
```

## __m128i __lsx_vclrstrv_v (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vclrstrv_v (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vclrstrv.v
Builtin: __builtin_lsx_vclrstrv_v
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:869
```

### Description

Preserve bytes before the string-limit position selected by the vector operand and clear the rest. This is intended for vectorized string routines that need to zero bytes after a terminator or match boundary.

### Operation

```c
dst.u8[0] = (0 >= string_clear_limit_from(b)) ? 0 : a.u8[0];
dst.u8[1] = (1 >= string_clear_limit_from(b)) ? 0 : a.u8[1];
dst.u8[2] = (2 >= string_clear_limit_from(b)) ? 0 : a.u8[2];
dst.u8[3] = (3 >= string_clear_limit_from(b)) ? 0 : a.u8[3];
dst.u8[4] = (4 >= string_clear_limit_from(b)) ? 0 : a.u8[4];
dst.u8[5] = (5 >= string_clear_limit_from(b)) ? 0 : a.u8[5];
dst.u8[6] = (6 >= string_clear_limit_from(b)) ? 0 : a.u8[6];
dst.u8[7] = (7 >= string_clear_limit_from(b)) ? 0 : a.u8[7];
dst.u8[8] = (8 >= string_clear_limit_from(b)) ? 0 : a.u8[8];
dst.u8[9] = (9 >= string_clear_limit_from(b)) ? 0 : a.u8[9];
dst.u8[10] = (10 >= string_clear_limit_from(b)) ? 0 : a.u8[10];
dst.u8[11] = (11 >= string_clear_limit_from(b)) ? 0 : a.u8[11];
dst.u8[12] = (12 >= string_clear_limit_from(b)) ? 0 : a.u8[12];
dst.u8[13] = (13 >= string_clear_limit_from(b)) ? 0 : a.u8[13];
dst.u8[14] = (14 >= string_clear_limit_from(b)) ? 0 : a.u8[14];
dst.u8[15] = (15 >= string_clear_limit_from(b)) ? 0 : a.u8[15];
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
return (__m128i)__builtin_lsx_vclrstrv_v((v16i8)a, (v16i8)b);
```

## __m128i __lsx_vclrtail_b (__m128i a)

### Synopsis

```c
__m128i __lsx_vclrtail_b (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vclrtail.b
Builtin: __builtin_lsx_vclrtail_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:888
```

### Description

Preserve leading u8 lanes and clear lanes at or after the tail position found in `a`. This is useful after vector string scanning to mask bytes beyond the valid tail.

### Operation

```c
dst.u8[0] = (0 >= first_tail_lane) ? 0 : a.u8[0];
dst.u8[1] = (1 >= first_tail_lane) ? 0 : a.u8[1];
dst.u8[2] = (2 >= first_tail_lane) ? 0 : a.u8[2];
dst.u8[3] = (3 >= first_tail_lane) ? 0 : a.u8[3];
dst.u8[4] = (4 >= first_tail_lane) ? 0 : a.u8[4];
dst.u8[5] = (5 >= first_tail_lane) ? 0 : a.u8[5];
dst.u8[6] = (6 >= first_tail_lane) ? 0 : a.u8[6];
dst.u8[7] = (7 >= first_tail_lane) ? 0 : a.u8[7];
dst.u8[8] = (8 >= first_tail_lane) ? 0 : a.u8[8];
dst.u8[9] = (9 >= first_tail_lane) ? 0 : a.u8[9];
dst.u8[10] = (10 >= first_tail_lane) ? 0 : a.u8[10];
dst.u8[11] = (11 >= first_tail_lane) ? 0 : a.u8[11];
dst.u8[12] = (12 >= first_tail_lane) ? 0 : a.u8[12];
dst.u8[13] = (13 >= first_tail_lane) ? 0 : a.u8[13];
dst.u8[14] = (14 >= first_tail_lane) ? 0 : a.u8[14];
dst.u8[15] = (15 >= first_tail_lane) ? 0 : a.u8[15];
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
return (__m128i)__builtin_lsx_vclrtail_b((v16i8)a);
```

## __m128i __lsx_vclrtail_h (__m128i a)

### Synopsis

```c
__m128i __lsx_vclrtail_h (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vclrtail.h
Builtin: __builtin_lsx_vclrtail_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:881
```

### Description

Preserve leading u16 lanes and clear lanes at or after the tail position found in `a`. This is useful after vector string scanning to mask bytes beyond the valid tail.

### Operation

```c
dst.u16[0] = (0 >= first_tail_lane) ? 0 : a.u16[0];
dst.u16[1] = (1 >= first_tail_lane) ? 0 : a.u16[1];
dst.u16[2] = (2 >= first_tail_lane) ? 0 : a.u16[2];
dst.u16[3] = (3 >= first_tail_lane) ? 0 : a.u16[3];
dst.u16[4] = (4 >= first_tail_lane) ? 0 : a.u16[4];
dst.u16[5] = (5 >= first_tail_lane) ? 0 : a.u16[5];
dst.u16[6] = (6 >= first_tail_lane) ? 0 : a.u16[6];
dst.u16[7] = (7 >= first_tail_lane) ? 0 : a.u16[7];
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
return (__m128i)__builtin_lsx_vclrtail_h((v8i16)a);
```

## __m128i __lsx_vextb_s_d (__m128i a)

### Synopsis

```c
__m128i __lsx_vextb_s_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vextb.s.d
Builtin: __builtin_lsx_vextb_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:455
```

### Description

Sign-extend or zero-extend smaller integer elements into 2 x i64 lanes destination lanes.

### Operation

```c
dst.i64[0] = sign_extend(a.i8[0], 64);
dst.i64[1] = sign_extend(a.i8[1], 64);
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
return (__m128i)__builtin_lsx_vextb_s_d((v16i8)a);
```

## __m128i __lsx_vextb_s_h (__m128i a)

### Synopsis

```c
__m128i __lsx_vextb_s_h (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vextb.s.h
Builtin: __builtin_lsx_vextb_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:469
```

### Description

Sign-extend or zero-extend smaller integer elements into 8 x i16 lanes destination lanes.

### Operation

```c
dst.i16[0] = sign_extend(a.i8[0], 16);
dst.i16[1] = sign_extend(a.i8[1], 16);
dst.i16[2] = sign_extend(a.i8[2], 16);
dst.i16[3] = sign_extend(a.i8[3], 16);
dst.i16[4] = sign_extend(a.i8[4], 16);
dst.i16[5] = sign_extend(a.i8[5], 16);
dst.i16[6] = sign_extend(a.i8[6], 16);
dst.i16[7] = sign_extend(a.i8[7], 16);
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
return (__m128i)__builtin_lsx_vextb_s_h((v16i8)a);
```

## __m128i __lsx_vextb_s_w (__m128i a)

### Synopsis

```c
__m128i __lsx_vextb_s_w (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vextb.s.w
Builtin: __builtin_lsx_vextb_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:462
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x i32 lanes destination lanes.

### Operation

```c
dst.i32[0] = sign_extend(a.i8[0], 32);
dst.i32[1] = sign_extend(a.i8[1], 32);
dst.i32[2] = sign_extend(a.i8[2], 32);
dst.i32[3] = sign_extend(a.i8[3], 32);
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
return (__m128i)__builtin_lsx_vextb_s_w((v16i8)a);
```

## __m128i __lsx_vextb_u_d (__m128i a)

### Synopsis

```c
__m128i __lsx_vextb_u_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vextb.u.d
Builtin: __builtin_lsx_vextb_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:497
```

### Description

Sign-extend or zero-extend smaller integer elements into 2 x u64 lanes destination lanes.

### Operation

```c
dst.u64[0] = zero_extend(a.u8[0], 64);
dst.u64[1] = zero_extend(a.u8[1], 64);
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
return (__m128i)__builtin_lsx_vextb_u_d((v16i8)a);
```

## __m128i __lsx_vextb_u_h (__m128i a)

### Synopsis

```c
__m128i __lsx_vextb_u_h (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vextb.u.h
Builtin: __builtin_lsx_vextb_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:511
```

### Description

Sign-extend or zero-extend smaller integer elements into 8 x u16 lanes destination lanes.

### Operation

```c
dst.u16[0] = zero_extend(a.u8[0], 16);
dst.u16[1] = zero_extend(a.u8[1], 16);
dst.u16[2] = zero_extend(a.u8[2], 16);
dst.u16[3] = zero_extend(a.u8[3], 16);
dst.u16[4] = zero_extend(a.u8[4], 16);
dst.u16[5] = zero_extend(a.u8[5], 16);
dst.u16[6] = zero_extend(a.u8[6], 16);
dst.u16[7] = zero_extend(a.u8[7], 16);
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
return (__m128i)__builtin_lsx_vextb_u_h((v16i8)a);
```

## __m128i __lsx_vextb_u_w (__m128i a)

### Synopsis

```c
__m128i __lsx_vextb_u_w (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vextb.u.w
Builtin: __builtin_lsx_vextb_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:504
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x u32 lanes destination lanes.

### Operation

```c
dst.u32[0] = zero_extend(a.u8[0], 32);
dst.u32[1] = zero_extend(a.u8[1], 32);
dst.u32[2] = zero_extend(a.u8[2], 32);
dst.u32[3] = zero_extend(a.u8[3], 32);
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
return (__m128i)__builtin_lsx_vextb_u_w((v16i8)a);
```

## __m128i __lsx_vexth_s_d (__m128i a)

### Synopsis

```c
__m128i __lsx_vexth_s_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vexth.s.d
Builtin: __builtin_lsx_vexth_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:476
```

### Description

Sign-extend or zero-extend smaller integer elements into 2 x i64 lanes destination lanes.

### Operation

```c
dst.i64[0] = sign_extend(a.i16[0], 64);
dst.i64[1] = sign_extend(a.i16[1], 64);
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
return (__m128i)__builtin_lsx_vexth_s_d((v8i16)a);
```

## __m128i __lsx_vexth_s_w (__m128i a)

### Synopsis

```c
__m128i __lsx_vexth_s_w (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vexth.s.w
Builtin: __builtin_lsx_vexth_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:483
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x i32 lanes destination lanes.

### Operation

```c
dst.i32[0] = sign_extend(a.i16[0], 32);
dst.i32[1] = sign_extend(a.i16[1], 32);
dst.i32[2] = sign_extend(a.i16[2], 32);
dst.i32[3] = sign_extend(a.i16[3], 32);
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
return (__m128i)__builtin_lsx_vexth_s_w((v8i16)a);
```

## __m128i __lsx_vexth_u_d (__m128i a)

### Synopsis

```c
__m128i __lsx_vexth_u_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vexth.u.d
Builtin: __builtin_lsx_vexth_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:518
```

### Description

Sign-extend or zero-extend smaller integer elements into 2 x u64 lanes destination lanes.

### Operation

```c
dst.u64[0] = zero_extend(a.u16[0], 64);
dst.u64[1] = zero_extend(a.u16[1], 64);
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
return (__m128i)__builtin_lsx_vexth_u_d((v8i16)a);
```

## __m128i __lsx_vexth_u_w (__m128i a)

### Synopsis

```c
__m128i __lsx_vexth_u_w (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vexth.u.w
Builtin: __builtin_lsx_vexth_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:525
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x u32 lanes destination lanes.

### Operation

```c
dst.u32[0] = zero_extend(a.u16[0], 32);
dst.u32[1] = zero_extend(a.u16[1], 32);
dst.u32[2] = zero_extend(a.u16[2], 32);
dst.u32[3] = zero_extend(a.u16[3], 32);
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
return (__m128i)__builtin_lsx_vexth_u_w((v8i16)a);
```

## __m128i __lsx_vextw_s_d (__m128i a)

### Synopsis

```c
__m128i __lsx_vextw_s_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vextw.s.d
Builtin: __builtin_lsx_vextw_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:490
```

### Description

Sign-extend or zero-extend smaller integer elements into 2 x i64 lanes destination lanes.

### Operation

```c
dst.i64[0] = sign_extend(a.i32[0], 64);
dst.i64[1] = sign_extend(a.i32[1], 64);
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
return (__m128i)__builtin_lsx_vextw_s_d((v4i32)a);
```

## __m128i __lsx_vextw_u_d (__m128i a)

### Synopsis

```c
__m128i __lsx_vextw_u_d (__m128i a)
#include <loongson-sxintrin.h>
Instruction: vextw.u.d
Builtin: __builtin_lsx_vextw_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:532
```

### Description

Sign-extend or zero-extend smaller integer elements into 2 x u64 lanes destination lanes.

### Operation

```c
dst.u64[0] = zero_extend(a.u32[0], 64);
dst.u64[1] = zero_extend(a.u32[1], 64);
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
return (__m128i)__builtin_lsx_vextw_u_d((v4i32)a);
```

## __m128i __lsx_vmepatmsk_v (unsigned char imm, unsigned char imm1)

### Synopsis

```c
__m128i __lsx_vmepatmsk_v (unsigned char imm, unsigned char imm1)
#include <loongson-sxintrin.h>
Instruction: vmepatmsk.v
Builtin: __builtin_lsx_vmepatmsk_v
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:901
```

### Description

Build a byte mask from the two immediate pattern bytes: matching byte positions become `0xff`, and non-matching positions become `0x00`. This provides a delimiter/pattern mask for string and parser code.

### Operation

```c
dst.u8[0] = (build_repeated_u8_pattern(imm0, imm1) matches lane 0) ? 0xff : 0x00;
dst.u8[1] = (build_repeated_u8_pattern(imm0, imm1) matches lane 1) ? 0xff : 0x00;
dst.u8[2] = (build_repeated_u8_pattern(imm0, imm1) matches lane 2) ? 0xff : 0x00;
dst.u8[3] = (build_repeated_u8_pattern(imm0, imm1) matches lane 3) ? 0xff : 0x00;
dst.u8[4] = (build_repeated_u8_pattern(imm0, imm1) matches lane 4) ? 0xff : 0x00;
dst.u8[5] = (build_repeated_u8_pattern(imm0, imm1) matches lane 5) ? 0xff : 0x00;
dst.u8[6] = (build_repeated_u8_pattern(imm0, imm1) matches lane 6) ? 0xff : 0x00;
dst.u8[7] = (build_repeated_u8_pattern(imm0, imm1) matches lane 7) ? 0xff : 0x00;
dst.u8[8] = (build_repeated_u8_pattern(imm0, imm1) matches lane 8) ? 0xff : 0x00;
dst.u8[9] = (build_repeated_u8_pattern(imm0, imm1) matches lane 9) ? 0xff : 0x00;
dst.u8[10] = (build_repeated_u8_pattern(imm0, imm1) matches lane 10) ? 0xff : 0x00;
dst.u8[11] = (build_repeated_u8_pattern(imm0, imm1) matches lane 11) ? 0xff : 0x00;
dst.u8[12] = (build_repeated_u8_pattern(imm0, imm1) matches lane 12) ? 0xff : 0x00;
dst.u8[13] = (build_repeated_u8_pattern(imm0, imm1) matches lane 13) ? 0xff : 0x00;
dst.u8[14] = (build_repeated_u8_pattern(imm0, imm1) matches lane 14) ? 0xff : 0x00;
dst.u8[15] = (build_repeated_u8_pattern(imm0, imm1) matches lane 15) ? 0xff : 0x00;
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td></td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __lsx_vmepatmsk_v(imm, imm1) ((__m128i)__builtin_lsx_vmepatmsk_v((imm), (imm1)))
```

## __m128i __lsx_vseti_d (unsigned char imm, unsigned int imm1)

### Synopsis

```c
__m128i __lsx_vseti_d (unsigned char imm, unsigned int imm1)
#include <loongson-sxintrin.h>
Instruction: vseti.d
Builtin: __builtin_lsx_vseti_d
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1360
```

### Description

Create a mostly zero vector and place the immediate value in one selected 64-bit lane. This is a compact way to materialize sparse vector constants or masks.

### Operation

```c
dst = zero_vector();
dst.u64[index_from_imm0] = zero_extend(imm1, 64);
```

### Header Mapping

```c
#define __lsx_vseti_d(imm, imm1) ((__m128i)__builtin_lsx_vseti_d((imm), (imm1)))
```

