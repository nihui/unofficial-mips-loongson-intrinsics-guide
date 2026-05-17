# Permutation

Generated from `include/msa.h`. This page contains 72 intrinsics.

## int __msa_copy_s_b (v16i8 a, int imm)

### Synopsis

```c
int __msa_copy_s_b (v16i8 a, int imm)
#include <msa.h>
Instruction: copy.s.b
Builtin: __builtin_msa_copy_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:437
```

### Description

Extract one i8 lane from `a`, sign-extend it if needed, and return the scalar value.

### Operation

```c
return sign_or_zero_extend(a.u8[imm]);
```

### Header Mapping

```c
#define __msa_copy_s_b __builtin_msa_copy_s_b
```

## long long __msa_copy_s_d (v2i64 a, int imm)

### Synopsis

```c
long long __msa_copy_s_d (v2i64 a, int imm)
#include <msa.h>
Instruction: copy.s.d
Builtin: __builtin_msa_copy_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:440
```

### Description

Extract one i64 lane from `a`, sign-extend it if needed, and return the scalar value.

### Operation

```c
return sign_or_zero_extend(a.u64[imm]);
```

### Header Mapping

```c
#define __msa_copy_s_d __builtin_msa_copy_s_d
```

## int __msa_copy_s_h (v8i16 a, int imm)

### Synopsis

```c
int __msa_copy_s_h (v8i16 a, int imm)
#include <msa.h>
Instruction: copy.s.h
Builtin: __builtin_msa_copy_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:438
```

### Description

Extract one i16 lane from `a`, sign-extend it if needed, and return the scalar value.

### Operation

```c
return sign_or_zero_extend(a.u16[imm]);
```

### Header Mapping

```c
#define __msa_copy_s_h __builtin_msa_copy_s_h
```

## int __msa_copy_s_w (v4i32 a, int imm)

### Synopsis

```c
int __msa_copy_s_w (v4i32 a, int imm)
#include <msa.h>
Instruction: copy.s.w
Builtin: __builtin_msa_copy_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:439
```

### Description

Extract one i32 lane from `a`, sign-extend it if needed, and return the scalar value.

### Operation

```c
return sign_or_zero_extend(a.u32[imm]);
```

### Header Mapping

```c
#define __msa_copy_s_w __builtin_msa_copy_s_w
```

## unsigned int __msa_copy_u_b (v16i8 a, int imm)

### Synopsis

```c
unsigned int __msa_copy_u_b (v16i8 a, int imm)
#include <msa.h>
Instruction: copy.u.b
Builtin: __builtin_msa_copy_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:441
```

### Description

Extract one u8 lane from `a`, zero-extend it if needed, and return the scalar value.

### Operation

```c
return sign_or_zero_extend(a.u8[imm]);
```

### Header Mapping

```c
#define __msa_copy_u_b __builtin_msa_copy_u_b
```

## unsigned long long __msa_copy_u_d (v2i64 a, int imm)

### Synopsis

```c
unsigned long long __msa_copy_u_d (v2i64 a, int imm)
#include <msa.h>
Instruction: copy.u.d
Builtin: __builtin_msa_copy_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:444
```

### Description

Extract one u64 lane from `a`, zero-extend it if needed, and return the scalar value.

### Operation

```c
return sign_or_zero_extend(a.u64[imm]);
```

### Header Mapping

```c
#define __msa_copy_u_d __builtin_msa_copy_u_d
```

## unsigned int __msa_copy_u_h (v8i16 a, int imm)

### Synopsis

```c
unsigned int __msa_copy_u_h (v8i16 a, int imm)
#include <msa.h>
Instruction: copy.u.h
Builtin: __builtin_msa_copy_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:442
```

### Description

Extract one u16 lane from `a`, zero-extend it if needed, and return the scalar value.

### Operation

```c
return sign_or_zero_extend(a.u16[imm]);
```

### Header Mapping

```c
#define __msa_copy_u_h __builtin_msa_copy_u_h
```

## unsigned int __msa_copy_u_w (v4i32 a, int imm)

### Synopsis

```c
unsigned int __msa_copy_u_w (v4i32 a, int imm)
#include <msa.h>
Instruction: copy.u.w
Builtin: __builtin_msa_copy_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:443
```

### Description

Extract one u32 lane from `a`, zero-extend it if needed, and return the scalar value.

### Operation

```c
return sign_or_zero_extend(a.u32[imm]);
```

### Header Mapping

```c
#define __msa_copy_u_w __builtin_msa_copy_u_w
```

## v16i8 __msa_fill_b (int imm)

### Synopsis

```c
v16i8 __msa_fill_b (int imm)
#include <msa.h>
Instruction: fill.b
Builtin: __builtin_msa_fill_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:421
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
#define __msa_fill_b __builtin_msa_fill_b
```

## v2i64 __msa_fill_d (long long imm)

### Synopsis

```c
v2i64 __msa_fill_d (long long imm)
#include <msa.h>
Instruction: fill.d
Builtin: __builtin_msa_fill_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:424
```

### Description

Replicate scalar `imm` into every fp64 lane, creating a vector constant.

### Operation

```c
dst.u64[0] = truncate_or_extend(imm, 64);
dst.u64[1] = truncate_or_extend(imm, 64);
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
#define __msa_fill_d __builtin_msa_fill_d
```

## v8i16 __msa_fill_h (int imm)

### Synopsis

```c
v8i16 __msa_fill_h (int imm)
#include <msa.h>
Instruction: fill.h
Builtin: __builtin_msa_fill_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:422
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
#define __msa_fill_h __builtin_msa_fill_h
```

## v4i32 __msa_fill_w (int imm)

### Synopsis

```c
v4i32 __msa_fill_w (int imm)
#include <msa.h>
Instruction: fill.w
Builtin: __builtin_msa_fill_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:423
```

### Description

Replicate scalar `imm` into every fp32 lane, creating a vector constant.

### Operation

```c
dst.u32[0] = truncate_or_extend(imm, 32);
dst.u32[1] = truncate_or_extend(imm, 32);
dst.u32[2] = truncate_or_extend(imm, 32);
dst.u32[3] = truncate_or_extend(imm, 32);
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
#define __msa_fill_w __builtin_msa_fill_w
```

## v16i8 __msa_ilvev_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_ilvev_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: ilvev.b
Builtin: __builtin_msa_ilvev_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:390
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
#define __msa_ilvev_b __builtin_msa_ilvev_b
```

## v2i64 __msa_ilvev_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_ilvev_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: ilvev.d
Builtin: __builtin_msa_ilvev_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:393
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
#define __msa_ilvev_d __builtin_msa_ilvev_d
```

## v8i16 __msa_ilvev_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_ilvev_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: ilvev.h
Builtin: __builtin_msa_ilvev_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:391
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
#define __msa_ilvev_h __builtin_msa_ilvev_h
```

## v4i32 __msa_ilvev_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_ilvev_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: ilvev.w
Builtin: __builtin_msa_ilvev_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:392
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
#define __msa_ilvev_w __builtin_msa_ilvev_w
```

## v16i8 __msa_ilvl_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_ilvl_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: ilvl.b
Builtin: __builtin_msa_ilvl_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:382
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
#define __msa_ilvl_b __builtin_msa_ilvl_b
```

## v2i64 __msa_ilvl_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_ilvl_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: ilvl.d
Builtin: __builtin_msa_ilvl_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:385
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
#define __msa_ilvl_d __builtin_msa_ilvl_d
```

## v8i16 __msa_ilvl_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_ilvl_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: ilvl.h
Builtin: __builtin_msa_ilvl_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:383
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
#define __msa_ilvl_h __builtin_msa_ilvl_h
```

## v4i32 __msa_ilvl_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_ilvl_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: ilvl.w
Builtin: __builtin_msa_ilvl_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:384
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
#define __msa_ilvl_w __builtin_msa_ilvl_w
```

## v16i8 __msa_ilvod_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_ilvod_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: ilvod.b
Builtin: __builtin_msa_ilvod_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:394
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
#define __msa_ilvod_b __builtin_msa_ilvod_b
```

## v2i64 __msa_ilvod_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_ilvod_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: ilvod.d
Builtin: __builtin_msa_ilvod_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:397
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
#define __msa_ilvod_d __builtin_msa_ilvod_d
```

## v8i16 __msa_ilvod_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_ilvod_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: ilvod.h
Builtin: __builtin_msa_ilvod_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:395
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
#define __msa_ilvod_h __builtin_msa_ilvod_h
```

## v4i32 __msa_ilvod_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_ilvod_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: ilvod.w
Builtin: __builtin_msa_ilvod_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:396
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
#define __msa_ilvod_w __builtin_msa_ilvod_w
```

## v16i8 __msa_ilvr_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_ilvr_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: ilvr.b
Builtin: __builtin_msa_ilvr_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:386
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
#define __msa_ilvr_b __builtin_msa_ilvr_b
```

## v2i64 __msa_ilvr_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_ilvr_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: ilvr.d
Builtin: __builtin_msa_ilvr_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:389
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
#define __msa_ilvr_d __builtin_msa_ilvr_d
```

## v8i16 __msa_ilvr_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_ilvr_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: ilvr.h
Builtin: __builtin_msa_ilvr_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:387
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
#define __msa_ilvr_h __builtin_msa_ilvr_h
```

## v4i32 __msa_ilvr_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_ilvr_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: ilvr.w
Builtin: __builtin_msa_ilvr_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:388
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
#define __msa_ilvr_w __builtin_msa_ilvr_w
```

## v16i8 __msa_insert_b (v16i8 a, int imm, int imm1)

### Synopsis

```c
v16i8 __msa_insert_b (v16i8 a, int imm, int imm1)
#include <msa.h>
Instruction: insert.b
Builtin: __builtin_msa_insert_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:445
```

### Description

Start from `a` and replace the selected u8 lane with the scalar value argument.

### Operation

```c
dst = a;
dst.u8[imm] = imm1;
```

### Header Mapping

```c
#define __msa_insert_b __builtin_msa_insert_b
```

## v2i64 __msa_insert_d (v2i64 a, int imm, long long imm1)

### Synopsis

```c
v2i64 __msa_insert_d (v2i64 a, int imm, long long imm1)
#include <msa.h>
Instruction: insert.d
Builtin: __builtin_msa_insert_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:448
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
#define __msa_insert_d __builtin_msa_insert_d
```

## v8i16 __msa_insert_h (v8i16 a, int imm, int imm1)

### Synopsis

```c
v8i16 __msa_insert_h (v8i16 a, int imm, int imm1)
#include <msa.h>
Instruction: insert.h
Builtin: __builtin_msa_insert_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:446
```

### Description

Start from `a` and replace the selected u16 lane with the scalar value argument.

### Operation

```c
dst = a;
dst.u16[imm] = imm1;
```

### Header Mapping

```c
#define __msa_insert_h __builtin_msa_insert_h
```

## v4i32 __msa_insert_w (v4i32 a, int imm, int imm1)

### Synopsis

```c
v4i32 __msa_insert_w (v4i32 a, int imm, int imm1)
#include <msa.h>
Instruction: insert.w
Builtin: __builtin_msa_insert_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:447
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
#define __msa_insert_w __builtin_msa_insert_w
```

## v16i8 __msa_insve_b (v16i8 a, int imm, v16i8 b)

### Synopsis

```c
v16i8 __msa_insve_b (v16i8 a, int imm, v16i8 b)
#include <msa.h>
Instruction: insve.b
Builtin: __builtin_msa_insve_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:449
```

### Description

Start from `a` and replace the selected u8 lane with lane 0 from `b`.

### Operation

```c
dst = a;
dst.u8[imm] = b.u8[0];
```

### Header Mapping

```c
#define __msa_insve_b __builtin_msa_insve_b
```

## v2i64 __msa_insve_d (v2i64 a, int imm, v2i64 b)

### Synopsis

```c
v2i64 __msa_insve_d (v2i64 a, int imm, v2i64 b)
#include <msa.h>
Instruction: insve.d
Builtin: __builtin_msa_insve_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:452
```

### Description

Start from `a` and replace the selected u64 lane with lane 0 from `b`.

### Operation

```c
dst = a;
dst.u64[imm] = b.u64[0];
```

### Header Mapping

```c
#define __msa_insve_d __builtin_msa_insve_d
```

## v8i16 __msa_insve_h (v8i16 a, int imm, v8i16 b)

### Synopsis

```c
v8i16 __msa_insve_h (v8i16 a, int imm, v8i16 b)
#include <msa.h>
Instruction: insve.h
Builtin: __builtin_msa_insve_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:450
```

### Description

Start from `a` and replace the selected u16 lane with lane 0 from `b`.

### Operation

```c
dst = a;
dst.u16[imm] = b.u16[0];
```

### Header Mapping

```c
#define __msa_insve_h __builtin_msa_insve_h
```

## v4i32 __msa_insve_w (v4i32 a, int imm, v4i32 b)

### Synopsis

```c
v4i32 __msa_insve_w (v4i32 a, int imm, v4i32 b)
#include <msa.h>
Instruction: insve.w
Builtin: __builtin_msa_insve_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:451
```

### Description

Start from `a` and replace the selected u32 lane with lane 0 from `b`.

### Operation

```c
dst = a;
dst.u32[imm] = b.u32[0];
```

### Header Mapping

```c
#define __msa_insve_w __builtin_msa_insve_w
```

## v16i8 __msa_ldi_b (int imm)

### Synopsis

```c
v16i8 __msa_ldi_b (int imm)
#include <msa.h>
Instruction: ldi.b
Builtin: __builtin_msa_ldi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:461
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
```

### Header Mapping

```c
#define __msa_ldi_b __builtin_msa_ldi_b
```

## v2i64 __msa_ldi_d (int imm)

### Synopsis

```c
v2i64 __msa_ldi_d (int imm)
#include <msa.h>
Instruction: ldi.d
Builtin: __builtin_msa_ldi_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:464
```

### Description

Fill every u64 lane from a sign- or zero-extended immediate constant.

### Operation

```c
dst.u64[0] = sign_extend_or_zero_extend(imm, 64);
dst.u64[1] = sign_extend_or_zero_extend(imm, 64);
```

### Header Mapping

```c
#define __msa_ldi_d __builtin_msa_ldi_d
```

## v8i16 __msa_ldi_h (int imm)

### Synopsis

```c
v8i16 __msa_ldi_h (int imm)
#include <msa.h>
Instruction: ldi.h
Builtin: __builtin_msa_ldi_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:462
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
```

### Header Mapping

```c
#define __msa_ldi_h __builtin_msa_ldi_h
```

## v4i32 __msa_ldi_w (int imm)

### Synopsis

```c
v4i32 __msa_ldi_w (int imm)
#include <msa.h>
Instruction: ldi.w
Builtin: __builtin_msa_ldi_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:463
```

### Description

Fill every u32 lane from a sign- or zero-extended immediate constant.

### Operation

```c
dst.u32[0] = sign_extend_or_zero_extend(imm, 32);
dst.u32[1] = sign_extend_or_zero_extend(imm, 32);
dst.u32[2] = sign_extend_or_zero_extend(imm, 32);
dst.u32[3] = sign_extend_or_zero_extend(imm, 32);
```

### Header Mapping

```c
#define __msa_ldi_w __builtin_msa_ldi_w
```

## v16i8 __msa_move_v (v16i8 a)

### Synopsis

```c
v16i8 __msa_move_v (v16i8 a)
#include <msa.h>
Instruction: move.v
Builtin: __builtin_msa_move_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:580
```

### Description

Return the source vector unchanged; this wrapper exposes the move/copy builtin form.

### Operation

```c
dst = a;
```

### Header Mapping

```c
#define __msa_move_v __builtin_msa_move_v
```

## v16i8 __msa_pckev_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_pckev_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: pckev.b
Builtin: __builtin_msa_pckev_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:374
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
#define __msa_pckev_b __builtin_msa_pckev_b
```

## v2i64 __msa_pckev_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_pckev_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: pckev.d
Builtin: __builtin_msa_pckev_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:377
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
#define __msa_pckev_d __builtin_msa_pckev_d
```

## v8i16 __msa_pckev_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_pckev_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: pckev.h
Builtin: __builtin_msa_pckev_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:375
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
#define __msa_pckev_h __builtin_msa_pckev_h
```

## v4i32 __msa_pckev_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_pckev_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: pckev.w
Builtin: __builtin_msa_pckev_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:376
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
#define __msa_pckev_w __builtin_msa_pckev_w
```

## v16i8 __msa_pckod_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_pckod_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: pckod.b
Builtin: __builtin_msa_pckod_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:378
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
#define __msa_pckod_b __builtin_msa_pckod_b
```

## v2i64 __msa_pckod_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_pckod_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: pckod.d
Builtin: __builtin_msa_pckod_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:381
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
#define __msa_pckod_d __builtin_msa_pckod_d
```

## v8i16 __msa_pckod_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_pckod_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: pckod.h
Builtin: __builtin_msa_pckod_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:379
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
#define __msa_pckod_h __builtin_msa_pckod_h
```

## v4i32 __msa_pckod_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_pckod_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: pckod.w
Builtin: __builtin_msa_pckod_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:380
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
#define __msa_pckod_w __builtin_msa_pckod_w
```

## v16i8 __msa_shf_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_shf_b (v16i8 a, int imm)
#include <msa.h>
Instruction: shf.b
Builtin: __builtin_msa_shf_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:416
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
#define __msa_shf_b __builtin_msa_shf_b
```

## v8i16 __msa_shf_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_shf_h (v8i16 a, int imm)
#include <msa.h>
Instruction: shf.h
Builtin: __builtin_msa_shf_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:417
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
#define __msa_shf_h __builtin_msa_shf_h
```

## v4i32 __msa_shf_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_shf_w (v4i32 a, int imm)
#include <msa.h>
Instruction: shf.w
Builtin: __builtin_msa_shf_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:418
```

### Description

Use two-bit fields from the immediate to reorder each four-lane u32 group of `a`.

### Operation

```c
dst.u32[0] = a.u32[((imm >> 0) & 3)];
dst.u32[1] = a.u32[((imm >> 2) & 3)];
dst.u32[2] = a.u32[((imm >> 4) & 3)];
dst.u32[3] = a.u32[((imm >> 6) & 3)];
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
#define __msa_shf_w __builtin_msa_shf_w
```

## v16i8 __msa_sld_b (v16i8 a, v16i8 b, int imm)

### Synopsis

```c
v16i8 __msa_sld_b (v16i8 a, v16i8 b, int imm)
#include <msa.h>
Instruction: sld.b
Builtin: __builtin_msa_sld_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:358
```

### Description

Slide elements from the concatenation of two source vectors into 16 x u8 lanes using an immediate offset.

### Operation

```c
dst = slide_lanes(concatenate(b, a), imm);
```

### Header Mapping

```c
#define __msa_sld_b __builtin_msa_sld_b
```

## v2i64 __msa_sld_d (v2i64 a, v2i64 b, int imm)

### Synopsis

```c
v2i64 __msa_sld_d (v2i64 a, v2i64 b, int imm)
#include <msa.h>
Instruction: sld.d
Builtin: __builtin_msa_sld_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:361
```

### Description

Slide elements from the concatenation of two source vectors into 2 x u64 lanes using an immediate offset.

### Operation

```c
dst = slide_lanes(concatenate(b, a), imm);
```

### Header Mapping

```c
#define __msa_sld_d __builtin_msa_sld_d
```

## v8i16 __msa_sld_h (v8i16 a, v8i16 b, int imm)

### Synopsis

```c
v8i16 __msa_sld_h (v8i16 a, v8i16 b, int imm)
#include <msa.h>
Instruction: sld.h
Builtin: __builtin_msa_sld_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:359
```

### Description

Slide elements from the concatenation of two source vectors into 8 x u16 lanes using an immediate offset.

### Operation

```c
dst = slide_lanes(concatenate(b, a), imm);
```

### Header Mapping

```c
#define __msa_sld_h __builtin_msa_sld_h
```

## v4i32 __msa_sld_w (v4i32 a, v4i32 b, int imm)

### Synopsis

```c
v4i32 __msa_sld_w (v4i32 a, v4i32 b, int imm)
#include <msa.h>
Instruction: sld.w
Builtin: __builtin_msa_sld_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:360
```

### Description

Slide elements from the concatenation of two source vectors into 4 x u32 lanes using an immediate offset.

### Operation

```c
dst = slide_lanes(concatenate(b, a), imm);
```

### Header Mapping

```c
#define __msa_sld_w __builtin_msa_sld_w
```

## v16i8 __msa_sldi_b (v16i8 a, v16i8 b, int imm)

### Synopsis

```c
v16i8 __msa_sldi_b (v16i8 a, v16i8 b, int imm)
#include <msa.h>
Instruction: sldi.b
Builtin: __builtin_msa_sldi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:362
```

### Description

Slide a lane window across the concatenation of `b` and `a`, controlled by the immediate offset.

### Operation

```c
dst = slide_lanes(concatenate(b, a), imm);
```

### Header Mapping

```c
#define __msa_sldi_b __builtin_msa_sldi_b
```

## v2i64 __msa_sldi_d (v2i64 a, v2i64 b, int imm)

### Synopsis

```c
v2i64 __msa_sldi_d (v2i64 a, v2i64 b, int imm)
#include <msa.h>
Instruction: sldi.d
Builtin: __builtin_msa_sldi_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:365
```

### Description

Slide a lane window across the concatenation of `b` and `a`, controlled by the immediate offset.

### Operation

```c
dst = slide_lanes(concatenate(b, a), imm);
```

### Header Mapping

```c
#define __msa_sldi_d __builtin_msa_sldi_d
```

## v8i16 __msa_sldi_h (v8i16 a, v8i16 b, int imm)

### Synopsis

```c
v8i16 __msa_sldi_h (v8i16 a, v8i16 b, int imm)
#include <msa.h>
Instruction: sldi.h
Builtin: __builtin_msa_sldi_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:363
```

### Description

Slide a lane window across the concatenation of `b` and `a`, controlled by the immediate offset.

### Operation

```c
dst = slide_lanes(concatenate(b, a), imm);
```

### Header Mapping

```c
#define __msa_sldi_h __builtin_msa_sldi_h
```

## v4i32 __msa_sldi_w (v4i32 a, v4i32 b, int imm)

### Synopsis

```c
v4i32 __msa_sldi_w (v4i32 a, v4i32 b, int imm)
#include <msa.h>
Instruction: sldi.w
Builtin: __builtin_msa_sldi_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:364
```

### Description

Slide a lane window across the concatenation of `b` and `a`, controlled by the immediate offset.

### Operation

```c
dst = slide_lanes(concatenate(b, a), imm);
```

### Header Mapping

```c
#define __msa_sldi_w __builtin_msa_sldi_w
```

## v16i8 __msa_splat_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_splat_b (v16i8 a, int imm)
#include <msa.h>
Instruction: splat.b
Builtin: __builtin_msa_splat_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:366
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
```

### Header Mapping

```c
#define __msa_splat_b __builtin_msa_splat_b
```

## v2i64 __msa_splat_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_splat_d (v2i64 a, int imm)
#include <msa.h>
Instruction: splat.d
Builtin: __builtin_msa_splat_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:369
```

### Description

Broadcast one selected u64 lane from `a` into every destination lane.

### Operation

```c
dst.u64[0] = a.u64[imm];
dst.u64[1] = a.u64[imm];
```

### Header Mapping

```c
#define __msa_splat_d __builtin_msa_splat_d
```

## v8i16 __msa_splat_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_splat_h (v8i16 a, int imm)
#include <msa.h>
Instruction: splat.h
Builtin: __builtin_msa_splat_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:367
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
```

### Header Mapping

```c
#define __msa_splat_h __builtin_msa_splat_h
```

## v4i32 __msa_splat_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_splat_w (v4i32 a, int imm)
#include <msa.h>
Instruction: splat.w
Builtin: __builtin_msa_splat_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:368
```

### Description

Broadcast one selected u32 lane from `a` into every destination lane.

### Operation

```c
dst.u32[0] = a.u32[imm];
dst.u32[1] = a.u32[imm];
dst.u32[2] = a.u32[imm];
dst.u32[3] = a.u32[imm];
```

### Header Mapping

```c
#define __msa_splat_w __builtin_msa_splat_w
```

## v16i8 __msa_splati_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_splati_b (v16i8 a, int imm)
#include <msa.h>
Instruction: splati.b
Builtin: __builtin_msa_splati_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:370
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
```

### Header Mapping

```c
#define __msa_splati_b __builtin_msa_splati_b
```

## v2i64 __msa_splati_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_splati_d (v2i64 a, int imm)
#include <msa.h>
Instruction: splati.d
Builtin: __builtin_msa_splati_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:373
```

### Description

Broadcast one selected u64 lane from `a` into every destination lane.

### Operation

```c
dst.u64[0] = a.u64[imm];
dst.u64[1] = a.u64[imm];
```

### Header Mapping

```c
#define __msa_splati_d __builtin_msa_splati_d
```

## v8i16 __msa_splati_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_splati_h (v8i16 a, int imm)
#include <msa.h>
Instruction: splati.h
Builtin: __builtin_msa_splati_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:371
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
```

### Header Mapping

```c
#define __msa_splati_h __builtin_msa_splati_h
```

## v4i32 __msa_splati_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_splati_w (v4i32 a, int imm)
#include <msa.h>
Instruction: splati.w
Builtin: __builtin_msa_splati_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:372
```

### Description

Broadcast one selected u32 lane from `a` into every destination lane.

### Operation

```c
dst.u32[0] = a.u32[imm];
dst.u32[1] = a.u32[imm];
dst.u32[2] = a.u32[imm];
dst.u32[3] = a.u32[imm];
```

### Header Mapping

```c
#define __msa_splati_w __builtin_msa_splati_w
```

## v16i8 __msa_vshf_b (v16i8 a, v16i8 b, v16i8 c)

### Synopsis

```c
v16i8 __msa_vshf_b (v16i8 a, v16i8 b, v16i8 c)
#include <msa.h>
Instruction: vshf.b
Builtin: __builtin_msa_vshf_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:398
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
#define __msa_vshf_b __builtin_msa_vshf_b
```

## v2i64 __msa_vshf_d (v2i64 a, v2i64 b, v2i64 c)

### Synopsis

```c
v2i64 __msa_vshf_d (v2i64 a, v2i64 b, v2i64 c)
#include <msa.h>
Instruction: vshf.d
Builtin: __builtin_msa_vshf_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:401
```

### Description

Use each control u64 lane from `a` to choose a u64 lane from `b` or `c`; control values with the zero bit set produce zero. This is a byte-style table lookup within each 128-bit half.

### Operation

```c
dst.u64[0] = (a.u64[0] & 0x8) ? 0 : ((a.u64[0] & 0x2) ? b.u64[(a.u64[0] & 1)] : c.u64[(a.u64[0] & 1)]);
dst.u64[1] = (a.u64[1] & 0x8) ? 0 : ((a.u64[1] & 0x2) ? b.u64[(a.u64[1] & 1)] : c.u64[(a.u64[1] & 1)]);
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
#define __msa_vshf_d __builtin_msa_vshf_d
```

## v8i16 __msa_vshf_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_vshf_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: vshf.h
Builtin: __builtin_msa_vshf_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:399
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
#define __msa_vshf_h __builtin_msa_vshf_h
```

## v4i32 __msa_vshf_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_vshf_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: vshf.w
Builtin: __builtin_msa_vshf_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:400
```

### Description

Use each control u32 lane from `a` to choose a u32 lane from `b` or `c`; control values with the zero bit set produce zero. This is a byte-style table lookup within each 128-bit half.

### Operation

```c
dst.u32[0] = (a.u32[0] & 0x10) ? 0 : ((a.u32[0] & 0x4) ? b.u32[(a.u32[0] & 3)] : c.u32[(a.u32[0] & 3)]);
dst.u32[1] = (a.u32[1] & 0x10) ? 0 : ((a.u32[1] & 0x4) ? b.u32[(a.u32[1] & 3)] : c.u32[(a.u32[1] & 3)]);
dst.u32[2] = (a.u32[2] & 0x10) ? 0 : ((a.u32[2] & 0x4) ? b.u32[(a.u32[2] & 3)] : c.u32[(a.u32[2] & 3)]);
dst.u32[3] = (a.u32[3] & 0x10) ? 0 : ((a.u32[3] & 0x4) ? b.u32[(a.u32[3] & 3)] : c.u32[(a.u32[3] & 3)]);
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
#define __msa_vshf_w __builtin_msa_vshf_w
```

