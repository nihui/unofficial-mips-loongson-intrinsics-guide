# Integer Computation

Generated from `include/msa.h`. This page contains 150 intrinsics.

## v16i8 __msa_add_a_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_add_a_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: add.a.b
Builtin: __builtin_msa_add_a_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:244
```

### Description

Add modular integer lanes of `a` and `b` on 16 x u8 lanes; immediate forms add the scalar immediate to each lane.

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
#define __msa_add_a_b __builtin_msa_add_a_b
```

## v2i64 __msa_add_a_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_add_a_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: add.a.d
Builtin: __builtin_msa_add_a_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:247
```

### Description

Add modular integer lanes of `a` and `b` on 2 x u64 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u64[0] = abs(a.i64[0]) + abs(b.i64[0]);
dst.u64[1] = abs(a.i64[1]) + abs(b.i64[1]);
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
#define __msa_add_a_d __builtin_msa_add_a_d
```

## v8i16 __msa_add_a_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_add_a_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: add.a.h
Builtin: __builtin_msa_add_a_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:245
```

### Description

Add modular integer lanes of `a` and `b` on 8 x u16 lanes; immediate forms add the scalar immediate to each lane.

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
#define __msa_add_a_h __builtin_msa_add_a_h
```

## v4i32 __msa_add_a_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_add_a_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: add.a.w
Builtin: __builtin_msa_add_a_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:246
```

### Description

Add modular integer lanes of `a` and `b` on 4 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u32[0] = abs(a.i32[0]) + abs(b.i32[0]);
dst.u32[1] = abs(a.i32[1]) + abs(b.i32[1]);
dst.u32[2] = abs(a.i32[2]) + abs(b.i32[2]);
dst.u32[3] = abs(a.i32[3]) + abs(b.i32[3]);
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
#define __msa_add_a_w __builtin_msa_add_a_w
```

## v16i8 __msa_adds_a_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_adds_a_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: adds.a.b
Builtin: __builtin_msa_adds_a_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:248
```

### Description

Perform lane-wise modular saturating integer arithmetic on 16 x u8 lanes, clamping overflow instead of wrapping.

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
#define __msa_adds_a_b __builtin_msa_adds_a_b
```

## v2i64 __msa_adds_a_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_adds_a_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: adds.a.d
Builtin: __builtin_msa_adds_a_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:251
```

### Description

Perform lane-wise modular saturating integer arithmetic on 2 x u64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u64[0] = saturate(a.i64[0] + b.i64[0], 64, signedness);
dst.u64[1] = saturate(a.i64[1] + b.i64[1], 64, signedness);
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
#define __msa_adds_a_d __builtin_msa_adds_a_d
```

## v8i16 __msa_adds_a_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_adds_a_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: adds.a.h
Builtin: __builtin_msa_adds_a_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:249
```

### Description

Perform lane-wise modular saturating integer arithmetic on 8 x u16 lanes, clamping overflow instead of wrapping.

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
#define __msa_adds_a_h __builtin_msa_adds_a_h
```

## v4i32 __msa_adds_a_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_adds_a_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: adds.a.w
Builtin: __builtin_msa_adds_a_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:250
```

### Description

Perform lane-wise modular saturating integer arithmetic on 4 x u32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u32[0] = saturate(a.i32[0] + b.i32[0], 32, signedness);
dst.u32[1] = saturate(a.i32[1] + b.i32[1], 32, signedness);
dst.u32[2] = saturate(a.i32[2] + b.i32[2], 32, signedness);
dst.u32[3] = saturate(a.i32[3] + b.i32[3], 32, signedness);
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
#define __msa_adds_a_w __builtin_msa_adds_a_w
```

## v16i8 __msa_adds_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_adds_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: adds.s.b
Builtin: __builtin_msa_adds_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:252
```

### Description

Perform lane-wise signed saturating integer arithmetic on 16 x i8 lanes, clamping overflow instead of wrapping.

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
#define __msa_adds_s_b __builtin_msa_adds_s_b
```

## v2i64 __msa_adds_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_adds_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: adds.s.d
Builtin: __builtin_msa_adds_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:255
```

### Description

Perform lane-wise signed saturating integer arithmetic on 2 x i64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i64[0] = saturate(a.i64[0] + b.i64[0], 64, signedness);
dst.i64[1] = saturate(a.i64[1] + b.i64[1], 64, signedness);
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
#define __msa_adds_s_d __builtin_msa_adds_s_d
```

## v8i16 __msa_adds_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_adds_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: adds.s.h
Builtin: __builtin_msa_adds_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:253
```

### Description

Perform lane-wise signed saturating integer arithmetic on 8 x i16 lanes, clamping overflow instead of wrapping.

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
#define __msa_adds_s_h __builtin_msa_adds_s_h
```

## v4i32 __msa_adds_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_adds_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: adds.s.w
Builtin: __builtin_msa_adds_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:254
```

### Description

Perform lane-wise signed saturating integer arithmetic on 4 x i32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i32[0] = saturate(a.i32[0] + b.i32[0], 32, signedness);
dst.i32[1] = saturate(a.i32[1] + b.i32[1], 32, signedness);
dst.i32[2] = saturate(a.i32[2] + b.i32[2], 32, signedness);
dst.i32[3] = saturate(a.i32[3] + b.i32[3], 32, signedness);
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
#define __msa_adds_s_w __builtin_msa_adds_s_w
```

## v16u8 __msa_adds_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_adds_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: adds.u.b
Builtin: __builtin_msa_adds_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:256
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 16 x u8 lanes, clamping overflow instead of wrapping.

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
#define __msa_adds_u_b __builtin_msa_adds_u_b
```

## v2u64 __msa_adds_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_adds_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: adds.u.d
Builtin: __builtin_msa_adds_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:259
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 2 x u64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u64[0] = saturate(a.u64[0] + b.u64[0], 64, signedness);
dst.u64[1] = saturate(a.u64[1] + b.u64[1], 64, signedness);
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
#define __msa_adds_u_d __builtin_msa_adds_u_d
```

## v8u16 __msa_adds_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_adds_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: adds.u.h
Builtin: __builtin_msa_adds_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:257
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 8 x u16 lanes, clamping overflow instead of wrapping.

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
#define __msa_adds_u_h __builtin_msa_adds_u_h
```

## v4u32 __msa_adds_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_adds_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: adds.u.w
Builtin: __builtin_msa_adds_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:258
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 4 x u32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u32[0] = saturate(a.u32[0] + b.u32[0], 32, signedness);
dst.u32[1] = saturate(a.u32[1] + b.u32[1], 32, signedness);
dst.u32[2] = saturate(a.u32[2] + b.u32[2], 32, signedness);
dst.u32[3] = saturate(a.u32[3] + b.u32[3], 32, signedness);
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
#define __msa_adds_u_w __builtin_msa_adds_u_w
```

## v16i8 __msa_addv_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_addv_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: addv.b
Builtin: __builtin_msa_addv_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:132
```

### Description

Add modular integer lanes of `a` and `b` on 16 x u8 lanes; immediate forms add the scalar immediate to each lane.

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
#define __msa_addv_b __builtin_msa_addv_b
```

## v2i64 __msa_addv_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_addv_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: addv.d
Builtin: __builtin_msa_addv_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:135
```

### Description

Add modular integer lanes of `a` and `b` on 2 x u64 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u64[0] = a.i64[0] + b.i64[0];
dst.u64[1] = a.i64[1] + b.i64[1];
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
#define __msa_addv_d __builtin_msa_addv_d
```

## v8i16 __msa_addv_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_addv_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: addv.h
Builtin: __builtin_msa_addv_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:133
```

### Description

Add modular integer lanes of `a` and `b` on 8 x u16 lanes; immediate forms add the scalar immediate to each lane.

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
#define __msa_addv_h __builtin_msa_addv_h
```

## v4i32 __msa_addv_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_addv_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: addv.w
Builtin: __builtin_msa_addv_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:134
```

### Description

Add modular integer lanes of `a` and `b` on 4 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u32[0] = a.i32[0] + b.i32[0];
dst.u32[1] = a.i32[1] + b.i32[1];
dst.u32[2] = a.i32[2] + b.i32[2];
dst.u32[3] = a.i32[3] + b.i32[3];
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
#define __msa_addv_w __builtin_msa_addv_w
```

## v16i8 __msa_addvi_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_addvi_b (v16i8 a, int imm)
#include <msa.h>
Instruction: addvi.b
Builtin: __builtin_msa_addvi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:136
```

### Description

Add modular integer lanes of `a` and `b` on 16 x u8 lanes; immediate forms add the scalar immediate to each lane.

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
#define __msa_addvi_b __builtin_msa_addvi_b
```

## v2i64 __msa_addvi_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_addvi_d (v2i64 a, int imm)
#include <msa.h>
Instruction: addvi.d
Builtin: __builtin_msa_addvi_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:139
```

### Description

Add modular integer lanes of `a` and `b` on 2 x u64 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u64[0] = a.i64[0] + imm;
dst.u64[1] = a.i64[1] + imm;
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
#define __msa_addvi_d __builtin_msa_addvi_d
```

## v8i16 __msa_addvi_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_addvi_h (v8i16 a, int imm)
#include <msa.h>
Instruction: addvi.h
Builtin: __builtin_msa_addvi_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:137
```

### Description

Add modular integer lanes of `a` and `b` on 8 x u16 lanes; immediate forms add the scalar immediate to each lane.

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
#define __msa_addvi_h __builtin_msa_addvi_h
```

## v4i32 __msa_addvi_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_addvi_w (v4i32 a, int imm)
#include <msa.h>
Instruction: addvi.w
Builtin: __builtin_msa_addvi_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:138
```

### Description

Add modular integer lanes of `a` and `b` on 4 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u32[0] = a.i32[0] + imm;
dst.u32[1] = a.i32[1] + imm;
dst.u32[2] = a.i32[2] + imm;
dst.u32[3] = a.i32[3] + imm;
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
#define __msa_addvi_w __builtin_msa_addvi_w
```

## v16i8 __msa_asub_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_asub_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: asub.s.b
Builtin: __builtin_msa_asub_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:292
```

### Description

Subtract signed integer lanes of `b` from `a` on 16 x i8 lanes; immediate forms subtract the scalar immediate.

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
#define __msa_asub_s_b __builtin_msa_asub_s_b
```

## v2i64 __msa_asub_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_asub_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: asub.s.d
Builtin: __builtin_msa_asub_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:295
```

### Description

Subtract signed integer lanes of `b` from `a` on 2 x i64 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i64[0] = abs(a.i64[0] - b.i64[0]);
dst.i64[1] = abs(a.i64[1] - b.i64[1]);
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
#define __msa_asub_s_d __builtin_msa_asub_s_d
```

## v8i16 __msa_asub_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_asub_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: asub.s.h
Builtin: __builtin_msa_asub_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:293
```

### Description

Subtract signed integer lanes of `b` from `a` on 8 x i16 lanes; immediate forms subtract the scalar immediate.

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
#define __msa_asub_s_h __builtin_msa_asub_s_h
```

## v4i32 __msa_asub_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_asub_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: asub.s.w
Builtin: __builtin_msa_asub_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:294
```

### Description

Subtract signed integer lanes of `b` from `a` on 4 x i32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i32[0] = abs(a.i32[0] - b.i32[0]);
dst.i32[1] = abs(a.i32[1] - b.i32[1]);
dst.i32[2] = abs(a.i32[2] - b.i32[2]);
dst.i32[3] = abs(a.i32[3] - b.i32[3]);
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
#define __msa_asub_s_w __builtin_msa_asub_s_w
```

## v16u8 __msa_asub_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_asub_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: asub.u.b
Builtin: __builtin_msa_asub_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:296
```

### Description

Subtract unsigned integer lanes of `b` from `a` on 16 x u8 lanes; immediate forms subtract the scalar immediate.

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
#define __msa_asub_u_b __builtin_msa_asub_u_b
```

## v2u64 __msa_asub_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_asub_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: asub.u.d
Builtin: __builtin_msa_asub_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:299
```

### Description

Subtract unsigned integer lanes of `b` from `a` on 2 x u64 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u64[0] = abs(a.u64[0] - b.u64[0]);
dst.u64[1] = abs(a.u64[1] - b.u64[1]);
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
#define __msa_asub_u_d __builtin_msa_asub_u_d
```

## v8u16 __msa_asub_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_asub_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: asub.u.h
Builtin: __builtin_msa_asub_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:297
```

### Description

Subtract unsigned integer lanes of `b` from `a` on 8 x u16 lanes; immediate forms subtract the scalar immediate.

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
#define __msa_asub_u_h __builtin_msa_asub_u_h
```

## v4u32 __msa_asub_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_asub_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: asub.u.w
Builtin: __builtin_msa_asub_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:298
```

### Description

Subtract unsigned integer lanes of `b` from `a` on 4 x u32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u32[0] = abs(a.u32[0] - b.u32[0]);
dst.u32[1] = abs(a.u32[1] - b.u32[1]);
dst.u32[2] = abs(a.u32[2] - b.u32[2]);
dst.u32[3] = abs(a.u32[3] - b.u32[3]);
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
#define __msa_asub_u_w __builtin_msa_asub_u_w
```

## v16i8 __msa_ave_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_ave_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: ave.s.b
Builtin: __builtin_msa_ave_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:260
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
#define __msa_ave_s_b __builtin_msa_ave_s_b
```

## v2i64 __msa_ave_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_ave_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: ave.s.d
Builtin: __builtin_msa_ave_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:263
```

### Description

Compute the lane-wise floor average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.i64[0] = floor_average(a.i64[0], b.i64[0]);
dst.i64[1] = floor_average(a.i64[1], b.i64[1]);
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
#define __msa_ave_s_d __builtin_msa_ave_s_d
```

## v8i16 __msa_ave_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_ave_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: ave.s.h
Builtin: __builtin_msa_ave_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:261
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
#define __msa_ave_s_h __builtin_msa_ave_s_h
```

## v4i32 __msa_ave_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_ave_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: ave.s.w
Builtin: __builtin_msa_ave_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:262
```

### Description

Compute the lane-wise floor average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.i32[0] = floor_average(a.i32[0], b.i32[0]);
dst.i32[1] = floor_average(a.i32[1], b.i32[1]);
dst.i32[2] = floor_average(a.i32[2], b.i32[2]);
dst.i32[3] = floor_average(a.i32[3], b.i32[3]);
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
#define __msa_ave_s_w __builtin_msa_ave_s_w
```

## v16u8 __msa_ave_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_ave_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: ave.u.b
Builtin: __builtin_msa_ave_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:264
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
#define __msa_ave_u_b __builtin_msa_ave_u_b
```

## v2u64 __msa_ave_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_ave_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: ave.u.d
Builtin: __builtin_msa_ave_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:267
```

### Description

Compute the lane-wise floor average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.u64[0] = floor_average(a.u64[0], b.u64[0]);
dst.u64[1] = floor_average(a.u64[1], b.u64[1]);
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
#define __msa_ave_u_d __builtin_msa_ave_u_d
```

## v8u16 __msa_ave_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_ave_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: ave.u.h
Builtin: __builtin_msa_ave_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:265
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
#define __msa_ave_u_h __builtin_msa_ave_u_h
```

## v4u32 __msa_ave_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_ave_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: ave.u.w
Builtin: __builtin_msa_ave_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:266
```

### Description

Compute the lane-wise floor average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.u32[0] = floor_average(a.u32[0], b.u32[0]);
dst.u32[1] = floor_average(a.u32[1], b.u32[1]);
dst.u32[2] = floor_average(a.u32[2], b.u32[2]);
dst.u32[3] = floor_average(a.u32[3], b.u32[3]);
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
#define __msa_ave_u_w __builtin_msa_ave_u_w
```

## v16i8 __msa_aver_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_aver_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: aver.s.b
Builtin: __builtin_msa_aver_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:268
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
#define __msa_aver_s_b __builtin_msa_aver_s_b
```

## v2i64 __msa_aver_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_aver_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: aver.s.d
Builtin: __builtin_msa_aver_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:271
```

### Description

Compute the lane-wise rounded-up average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.i64[0] = ceil_average(a.i64[0], b.i64[0]);
dst.i64[1] = ceil_average(a.i64[1], b.i64[1]);
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
#define __msa_aver_s_d __builtin_msa_aver_s_d
```

## v8i16 __msa_aver_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_aver_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: aver.s.h
Builtin: __builtin_msa_aver_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:269
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
#define __msa_aver_s_h __builtin_msa_aver_s_h
```

## v4i32 __msa_aver_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_aver_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: aver.s.w
Builtin: __builtin_msa_aver_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:270
```

### Description

Compute the lane-wise rounded-up average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.i32[0] = ceil_average(a.i32[0], b.i32[0]);
dst.i32[1] = ceil_average(a.i32[1], b.i32[1]);
dst.i32[2] = ceil_average(a.i32[2], b.i32[2]);
dst.i32[3] = ceil_average(a.i32[3], b.i32[3]);
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
#define __msa_aver_s_w __builtin_msa_aver_s_w
```

## v16u8 __msa_aver_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_aver_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: aver.u.b
Builtin: __builtin_msa_aver_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:272
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
#define __msa_aver_u_b __builtin_msa_aver_u_b
```

## v2u64 __msa_aver_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_aver_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: aver.u.d
Builtin: __builtin_msa_aver_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:275
```

### Description

Compute the lane-wise rounded-up average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.u64[0] = ceil_average(a.u64[0], b.u64[0]);
dst.u64[1] = ceil_average(a.u64[1], b.u64[1]);
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
#define __msa_aver_u_d __builtin_msa_aver_u_d
```

## v8u16 __msa_aver_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_aver_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: aver.u.h
Builtin: __builtin_msa_aver_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:273
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
#define __msa_aver_u_h __builtin_msa_aver_u_h
```

## v4u32 __msa_aver_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_aver_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: aver.u.w
Builtin: __builtin_msa_aver_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:274
```

### Description

Compute the lane-wise rounded-up average of `a` and `b`, useful for blending packed integer samples.

### Operation

```c
dst.u32[0] = ceil_average(a.u32[0], b.u32[0]);
dst.u32[1] = ceil_average(a.u32[1], b.u32[1]);
dst.u32[2] = ceil_average(a.u32[2], b.u32[2]);
dst.u32[3] = ceil_average(a.u32[3], b.u32[3]);
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
#define __msa_aver_u_w __builtin_msa_aver_u_w
```

## v16i8 __msa_div_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_div_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: div.s.b
Builtin: __builtin_msa_div_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:312
```

### Description

Divide signed integer lanes of `a` by `b` on 16 x i8 lanes.

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
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>29/52</td><td>0.05(1/21)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_div_s_b __builtin_msa_div_s_b
```

## v2i64 __msa_div_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_div_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: div.s.d
Builtin: __builtin_msa_div_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:315
```

### Description

Divide signed integer lanes of `a` by `b` on 2 x i64 lanes.

### Operation

```c
dst.i64[0] = a.i64[0] / b.i64[0];
dst.i64[1] = a.i64[1] / b.i64[1];
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
#define __msa_div_s_d __builtin_msa_div_s_d
```

## v8i16 __msa_div_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_div_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: div.s.h
Builtin: __builtin_msa_div_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:313
```

### Description

Divide signed integer lanes of `a` by `b` on 8 x i16 lanes.

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
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>17/30</td><td>0.08(1/13)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_div_s_h __builtin_msa_div_s_h
```

## v4i32 __msa_div_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_div_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: div.s.w
Builtin: __builtin_msa_div_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:314
```

### Description

Divide signed integer lanes of `a` by `b` on 4 x i32 lanes.

### Operation

```c
dst.i32[0] = a.i32[0] / b.i32[0];
dst.i32[1] = a.i32[1] / b.i32[1];
dst.i32[2] = a.i32[2] / b.i32[2];
dst.i32[3] = a.i32[3] / b.i32[3];
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
#define __msa_div_s_w __builtin_msa_div_s_w
```

## v16u8 __msa_div_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_div_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: div.u.b
Builtin: __builtin_msa_div_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:316
```

### Description

Divide unsigned integer lanes of `a` by `b` on 16 x u8 lanes.

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
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>29/39</td><td>0.05(1/21)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_div_u_b __builtin_msa_div_u_b
```

## v2u64 __msa_div_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_div_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: div.u.d
Builtin: __builtin_msa_div_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:319
```

### Description

Divide unsigned integer lanes of `a` by `b` on 2 x u64 lanes.

### Operation

```c
dst.u64[0] = a.u64[0] / b.u64[0];
dst.u64[1] = a.u64[1] / b.u64[1];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>8/18</td><td>0.16(1/6.14)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_div_u_d __builtin_msa_div_u_d
```

## v8u16 __msa_div_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_div_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: div.u.h
Builtin: __builtin_msa_div_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:317
```

### Description

Divide unsigned integer lanes of `a` by `b` on 8 x u16 lanes.

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
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>17</td><td>0.08(1/12)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_div_u_h __builtin_msa_div_u_h
```

## v4u32 __msa_div_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_div_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: div.u.w
Builtin: __builtin_msa_div_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:318
```

### Description

Divide unsigned integer lanes of `a` by `b` on 4 x u32 lanes.

### Operation

```c
dst.u32[0] = a.u32[0] / b.u32[0];
dst.u32[1] = a.u32[1] / b.u32[1];
dst.u32[2] = a.u32[2] / b.u32[2];
dst.u32[3] = a.u32[3] / b.u32[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>11/24</td><td>0.14(1/7.37)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_div_u_w __builtin_msa_div_u_w
```

## v2i64 __msa_dotp_s_d (v4i32 a, v4i32 b)

### Synopsis

```c
v2i64 __msa_dotp_s_d (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: dotp.s.d
Builtin: __builtin_msa_dotp_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:342
```

### Description

Multiply adjacent pairs of narrower signed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i64[0] = a.i32[0] * b.i32[0] + a.i32[1] * b.i32[1];
dst.i64[1] = a.i32[2] * b.i32[2] + a.i32[3] * b.i32[3];
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
#define __msa_dotp_s_d __builtin_msa_dotp_s_d
```

## v8i16 __msa_dotp_s_h (v16i8 a, v16i8 b)

### Synopsis

```c
v8i16 __msa_dotp_s_h (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: dotp.s.h
Builtin: __builtin_msa_dotp_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:340
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
#define __msa_dotp_s_h __builtin_msa_dotp_s_h
```

## v4i32 __msa_dotp_s_w (v8i16 a, v8i16 b)

### Synopsis

```c
v4i32 __msa_dotp_s_w (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: dotp.s.w
Builtin: __builtin_msa_dotp_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:341
```

### Description

Multiply adjacent pairs of narrower signed lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.i32[0] = a.i16[0] * b.i16[0] + a.i16[1] * b.i16[1];
dst.i32[1] = a.i16[2] * b.i16[2] + a.i16[3] * b.i16[3];
dst.i32[2] = a.i16[4] * b.i16[4] + a.i16[5] * b.i16[5];
dst.i32[3] = a.i16[6] * b.i16[6] + a.i16[7] * b.i16[7];
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
#define __msa_dotp_s_w __builtin_msa_dotp_s_w
```

## v2u64 __msa_dotp_u_d (v4u32 a, v4u32 b)

### Synopsis

```c
v2u64 __msa_dotp_u_d (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: dotp.u.d
Builtin: __builtin_msa_dotp_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:345
```

### Description

Multiply adjacent pairs of narrower unsigned lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.u64[0] = a.u32[0] * b.u32[0] + a.u32[1] * b.u32[1];
dst.u64[1] = a.u32[2] * b.u32[2] + a.u32[3] * b.u32[3];
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
#define __msa_dotp_u_d __builtin_msa_dotp_u_d
```

## v8u16 __msa_dotp_u_h (v16u8 a, v16u8 b)

### Synopsis

```c
v8u16 __msa_dotp_u_h (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: dotp.u.h
Builtin: __builtin_msa_dotp_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:343
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
#define __msa_dotp_u_h __builtin_msa_dotp_u_h
```

## v4u32 __msa_dotp_u_w (v8u16 a, v8u16 b)

### Synopsis

```c
v4u32 __msa_dotp_u_w (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: dotp.u.w
Builtin: __builtin_msa_dotp_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:344
```

### Description

Multiply adjacent pairs of narrower unsigned lanes, add each pair, and write widened dot-product lanes. This is useful for packed filters, matrix kernels, and sum-of-products code.

### Operation

```c
dst.u32[0] = a.u16[0] * b.u16[0] + a.u16[1] * b.u16[1];
dst.u32[1] = a.u16[2] * b.u16[2] + a.u16[3] * b.u16[3];
dst.u32[2] = a.u16[4] * b.u16[4] + a.u16[5] * b.u16[5];
dst.u32[3] = a.u16[6] * b.u16[6] + a.u16[7] * b.u16[7];
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
#define __msa_dotp_u_w __builtin_msa_dotp_u_w
```

## v2i64 __msa_dpadd_s_d (v2i64 a, v4i32 b, v4i32 c)

### Synopsis

```c
v2i64 __msa_dpadd_s_d (v2i64 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: dpadd.s.d
Builtin: __builtin_msa_dpadd_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:348
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i64[0] = a.i64[0] + b.i32[0] * c.i32[0] + b.i32[1] * c.i32[1];
dst.i64[1] = a.i64[1] + b.i32[2] * c.i32[2] + b.i32[3] * c.i32[3];
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
#define __msa_dpadd_s_d __builtin_msa_dpadd_s_d
```

## v8i16 __msa_dpadd_s_h (v8i16 a, v16i8 b, v16i8 c)

### Synopsis

```c
v8i16 __msa_dpadd_s_h (v8i16 a, v16i8 b, v16i8 c)
#include <msa.h>
Instruction: dpadd.s.h
Builtin: __builtin_msa_dpadd_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:346
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
#define __msa_dpadd_s_h __builtin_msa_dpadd_s_h
```

## v4i32 __msa_dpadd_s_w (v4i32 a, v8i16 b, v8i16 c)

### Synopsis

```c
v4i32 __msa_dpadd_s_w (v4i32 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: dpadd.s.w
Builtin: __builtin_msa_dpadd_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:347
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i32[0] = a.i32[0] + b.i16[0] * c.i16[0] + b.i16[1] * c.i16[1];
dst.i32[1] = a.i32[1] + b.i16[2] * c.i16[2] + b.i16[3] * c.i16[3];
dst.i32[2] = a.i32[2] + b.i16[4] * c.i16[4] + b.i16[5] * c.i16[5];
dst.i32[3] = a.i32[3] + b.i16[6] * c.i16[6] + b.i16[7] * c.i16[7];
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
#define __msa_dpadd_s_w __builtin_msa_dpadd_s_w
```

## v2u64 __msa_dpadd_u_d (v2u64 a, v4u32 b, v4u32 c)

### Synopsis

```c
v2u64 __msa_dpadd_u_d (v2u64 a, v4u32 b, v4u32 c)
#include <msa.h>
Instruction: dpadd.u.d
Builtin: __builtin_msa_dpadd_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:351
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u64[0] = a.u64[0] + b.u32[0] * c.u32[0] + b.u32[1] * c.u32[1];
dst.u64[1] = a.u64[1] + b.u32[2] * c.u32[2] + b.u32[3] * c.u32[3];
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
#define __msa_dpadd_u_d __builtin_msa_dpadd_u_d
```

## v8u16 __msa_dpadd_u_h (v8u16 a, v16u8 b, v16u8 c)

### Synopsis

```c
v8u16 __msa_dpadd_u_h (v8u16 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: dpadd.u.h
Builtin: __builtin_msa_dpadd_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:349
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
#define __msa_dpadd_u_h __builtin_msa_dpadd_u_h
```

## v4u32 __msa_dpadd_u_w (v4u32 a, v8u16 b, v8u16 c)

### Synopsis

```c
v4u32 __msa_dpadd_u_w (v4u32 a, v8u16 b, v8u16 c)
#include <msa.h>
Instruction: dpadd.u.w
Builtin: __builtin_msa_dpadd_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:350
```

### Description

Compute adjacent-pair dot products and add to the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u32[0] = a.u32[0] + b.u16[0] * c.u16[0] + b.u16[1] * c.u16[1];
dst.u32[1] = a.u32[1] + b.u16[2] * c.u16[2] + b.u16[3] * c.u16[3];
dst.u32[2] = a.u32[2] + b.u16[4] * c.u16[4] + b.u16[5] * c.u16[5];
dst.u32[3] = a.u32[3] + b.u16[6] * c.u16[6] + b.u16[7] * c.u16[7];
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
#define __msa_dpadd_u_w __builtin_msa_dpadd_u_w
```

## v2i64 __msa_dpsub_s_d (v2i64 a, v4i32 b, v4i32 c)

### Synopsis

```c
v2i64 __msa_dpsub_s_d (v2i64 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: dpsub.s.d
Builtin: __builtin_msa_dpsub_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:354
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i64[0] = a.i64[0] - b.i32[0] * c.i32[0] - b.i32[1] * c.i32[1];
dst.i64[1] = a.i64[1] - b.i32[2] * c.i32[2] - b.i32[3] * c.i32[3];
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
#define __msa_dpsub_s_d __builtin_msa_dpsub_s_d
```

## v8i16 __msa_dpsub_s_h (v8i16 a, v16i8 b, v16i8 c)

### Synopsis

```c
v8i16 __msa_dpsub_s_h (v8i16 a, v16i8 b, v16i8 c)
#include <msa.h>
Instruction: dpsub.s.h
Builtin: __builtin_msa_dpsub_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:352
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
#define __msa_dpsub_s_h __builtin_msa_dpsub_s_h
```

## v4i32 __msa_dpsub_s_w (v4i32 a, v8i16 b, v8i16 c)

### Synopsis

```c
v4i32 __msa_dpsub_s_w (v4i32 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: dpsub.s.w
Builtin: __builtin_msa_dpsub_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:353
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.i32[0] = a.i32[0] - b.i16[0] * c.i16[0] - b.i16[1] * c.i16[1];
dst.i32[1] = a.i32[1] - b.i16[2] * c.i16[2] - b.i16[3] * c.i16[3];
dst.i32[2] = a.i32[2] - b.i16[4] * c.i16[4] - b.i16[5] * c.i16[5];
dst.i32[3] = a.i32[3] - b.i16[6] * c.i16[6] - b.i16[7] * c.i16[7];
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
#define __msa_dpsub_s_w __builtin_msa_dpsub_s_w
```

## v2i64 __msa_dpsub_u_d (v2i64 a, v4u32 b, v4u32 c)

### Synopsis

```c
v2i64 __msa_dpsub_u_d (v2i64 a, v4u32 b, v4u32 c)
#include <msa.h>
Instruction: dpsub.u.d
Builtin: __builtin_msa_dpsub_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:357
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u64[0] = a.u64[0] - b.u32[0] * c.u32[0] - b.u32[1] * c.u32[1];
dst.u64[1] = a.u64[1] - b.u32[2] * c.u32[2] - b.u32[3] * c.u32[3];
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
#define __msa_dpsub_u_d __builtin_msa_dpsub_u_d
```

## v8i16 __msa_dpsub_u_h (v8i16 a, v16u8 b, v16u8 c)

### Synopsis

```c
v8i16 __msa_dpsub_u_h (v8i16 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: dpsub.u.h
Builtin: __builtin_msa_dpsub_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:355
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
#define __msa_dpsub_u_h __builtin_msa_dpsub_u_h
```

## v4i32 __msa_dpsub_u_w (v4i32 a, v8u16 b, v8u16 c)

### Synopsis

```c
v4i32 __msa_dpsub_u_w (v4i32 a, v8u16 b, v8u16 c)
#include <msa.h>
Instruction: dpsub.u.w
Builtin: __builtin_msa_dpsub_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:356
```

### Description

Compute adjacent-pair dot products and subtract from the accumulator operand in widened lanes. This is a packed multiply-accumulate primitive.

### Operation

```c
dst.u32[0] = a.u32[0] - b.u16[0] * c.u16[0] - b.u16[1] * c.u16[1];
dst.u32[1] = a.u32[1] - b.u16[2] * c.u16[2] - b.u16[3] * c.u16[3];
dst.u32[2] = a.u32[2] - b.u16[4] * c.u16[4] - b.u16[5] * c.u16[5];
dst.u32[3] = a.u32[3] - b.u16[6] * c.u16[6] - b.u16[7] * c.u16[7];
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
#define __msa_dpsub_u_w __builtin_msa_dpsub_u_w
```

## v2i64 __msa_hadd_s_d (v4i32 a, v4i32 b)

### Synopsis

```c
v2i64 __msa_hadd_s_d (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: hadd.s.d
Builtin: __builtin_msa_hadd_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:322
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 2 x i64 lanes.

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
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_hadd_s_d __builtin_msa_hadd_s_d
```

## v8i16 __msa_hadd_s_h (v16i8 a, v16i8 b)

### Synopsis

```c
v8i16 __msa_hadd_s_h (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: hadd.s.h
Builtin: __builtin_msa_hadd_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:320
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 8 x i16 lanes.

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
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_hadd_s_h __builtin_msa_hadd_s_h
```

## v4i32 __msa_hadd_s_w (v8i16 a, v8i16 b)

### Synopsis

```c
v4i32 __msa_hadd_s_w (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: hadd.s.w
Builtin: __builtin_msa_hadd_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:321
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 4 x i32 lanes.

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
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_hadd_s_w __builtin_msa_hadd_s_w
```

## v2u64 __msa_hadd_u_d (v4u32 a, v4u32 b)

### Synopsis

```c
v2u64 __msa_hadd_u_d (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: hadd.u.d
Builtin: __builtin_msa_hadd_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:325
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 2 x u64 lanes.

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
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_hadd_u_d __builtin_msa_hadd_u_d
```

## v8u16 __msa_hadd_u_h (v16u8 a, v16u8 b)

### Synopsis

```c
v8u16 __msa_hadd_u_h (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: hadd.u.h
Builtin: __builtin_msa_hadd_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:323
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 8 x u16 lanes.

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
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_hadd_u_h __builtin_msa_hadd_u_h
```

## v4u32 __msa_hadd_u_w (v8u16 a, v8u16 b)

### Synopsis

```c
v4u32 __msa_hadd_u_w (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: hadd.u.w
Builtin: __builtin_msa_hadd_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:324
```

### Description

Widen corresponding narrower source lanes and add them pairwise into 4 x u32 lanes.

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
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_hadd_u_w __builtin_msa_hadd_u_w
```

## v2i64 __msa_hsub_s_d (v4i32 a, v4i32 b)

### Synopsis

```c
v2i64 __msa_hsub_s_d (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: hsub.s.d
Builtin: __builtin_msa_hsub_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:328
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 2 x i64 lanes.

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
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_hsub_s_d __builtin_msa_hsub_s_d
```

## v8i16 __msa_hsub_s_h (v16i8 a, v16i8 b)

### Synopsis

```c
v8i16 __msa_hsub_s_h (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: hsub.s.h
Builtin: __builtin_msa_hsub_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:326
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 8 x i16 lanes.

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
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_hsub_s_h __builtin_msa_hsub_s_h
```

## v4i32 __msa_hsub_s_w (v8i16 a, v8i16 b)

### Synopsis

```c
v4i32 __msa_hsub_s_w (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: hsub.s.w
Builtin: __builtin_msa_hsub_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:327
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 4 x i32 lanes.

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
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_hsub_s_w __builtin_msa_hsub_s_w
```

## v2i64 __msa_hsub_u_d (v4u32 a, v4u32 b)

### Synopsis

```c
v2i64 __msa_hsub_u_d (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: hsub.u.d
Builtin: __builtin_msa_hsub_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:331
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 2 x u64 lanes.

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
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_hsub_u_d __builtin_msa_hsub_u_d
```

## v8i16 __msa_hsub_u_h (v16u8 a, v16u8 b)

### Synopsis

```c
v8i16 __msa_hsub_u_h (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: hsub.u.h
Builtin: __builtin_msa_hsub_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:329
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 8 x u16 lanes.

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
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_hsub_u_h __builtin_msa_hsub_u_h
```

## v4i32 __msa_hsub_u_w (v8u16 a, v8u16 b)

### Synopsis

```c
v4i32 __msa_hsub_u_w (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: hsub.u.w
Builtin: __builtin_msa_hsub_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:330
```

### Description

Widen corresponding narrower source lanes and subtract them pairwise into 4 x u32 lanes.

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
<tr><td>2</td><td>2</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_hsub_u_w __builtin_msa_hsub_u_w
```

## v8i16 __msa_madd_q_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_madd_q_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: madd.q.h
Builtin: __builtin_msa_madd_q_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:539
```

### Description

Add modular integer lanes of `a` and `b` on 8 x u16 lanes; immediate forms add the scalar immediate to each lane.

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
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.63</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_madd_q_h __builtin_msa_madd_q_h
```

## v4i32 __msa_madd_q_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_madd_q_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: madd.q.w
Builtin: __builtin_msa_madd_q_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:540
```

### Description

Add modular integer lanes of `a` and `b` on 4 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.i32[0] = signed_saturate(a.i32[0] + signed_saturate(q_format_shift(b.i32[0] * c.i32[0], 32 - 1), 32), 32);
dst.i32[1] = signed_saturate(a.i32[1] + signed_saturate(q_format_shift(b.i32[1] * c.i32[1], 32 - 1), 32), 32);
dst.i32[2] = signed_saturate(a.i32[2] + signed_saturate(q_format_shift(b.i32[2] * c.i32[2], 32 - 1), 32), 32);
dst.i32[3] = signed_saturate(a.i32[3] + signed_saturate(q_format_shift(b.i32[3] * c.i32[3], 32 - 1), 32), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.63</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_madd_q_w __builtin_msa_madd_q_w
```

## v8i16 __msa_maddr_q_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_maddr_q_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: maddr.q.h
Builtin: __builtin_msa_maddr_q_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:541
```

### Description

Add modular integer lanes of `a` and `b` on 8 x u16 lanes; immediate forms add the scalar immediate to each lane.

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
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.63</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_maddr_q_h __builtin_msa_maddr_q_h
```

## v4i32 __msa_maddr_q_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_maddr_q_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: maddr.q.w
Builtin: __builtin_msa_maddr_q_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:542
```

### Description

Add modular integer lanes of `a` and `b` on 4 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.i32[0] = signed_saturate(a.i32[0] + signed_saturate(rounding_q_format_shift(b.i32[0] * c.i32[0], 32 - 1), 32), 32);
dst.i32[1] = signed_saturate(a.i32[1] + signed_saturate(rounding_q_format_shift(b.i32[1] * c.i32[1], 32 - 1), 32), 32);
dst.i32[2] = signed_saturate(a.i32[2] + signed_saturate(rounding_q_format_shift(b.i32[2] * c.i32[2], 32 - 1), 32), 32);
dst.i32[3] = signed_saturate(a.i32[3] + signed_saturate(rounding_q_format_shift(b.i32[3] * c.i32[3], 32 - 1), 32), 32);
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
#define __msa_maddr_q_w __builtin_msa_maddr_q_w
```

## v16i8 __msa_maddv_b (v16i8 a, v16i8 b, v16i8 c)

### Synopsis

```c
v16i8 __msa_maddv_b (v16i8 a, v16i8 b, v16i8 c)
#include <msa.h>
Instruction: maddv.b
Builtin: __builtin_msa_maddv_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:304
```

### Description

Add modular integer lanes of `a` and `b` on 16 x u8 lanes; immediate forms add the scalar immediate to each lane.

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
#define __msa_maddv_b __builtin_msa_maddv_b
```

## v2i64 __msa_maddv_d (v2i64 a, v2i64 b, v2i64 c)

### Synopsis

```c
v2i64 __msa_maddv_d (v2i64 a, v2i64 b, v2i64 c)
#include <msa.h>
Instruction: maddv.d
Builtin: __builtin_msa_maddv_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:307
```

### Description

Add modular integer lanes of `a` and `b` on 2 x u64 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u64[0] = a.u64[0] + b.u64[0] * c.u64[0];
dst.u64[1] = a.u64[1] + b.u64[1] * c.u64[1];
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
#define __msa_maddv_d __builtin_msa_maddv_d
```

## v8i16 __msa_maddv_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_maddv_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: maddv.h
Builtin: __builtin_msa_maddv_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:305
```

### Description

Add modular integer lanes of `a` and `b` on 8 x u16 lanes; immediate forms add the scalar immediate to each lane.

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
#define __msa_maddv_h __builtin_msa_maddv_h
```

## v4i32 __msa_maddv_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_maddv_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: maddv.w
Builtin: __builtin_msa_maddv_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:306
```

### Description

Add modular integer lanes of `a` and `b` on 4 x u32 lanes; immediate forms add the scalar immediate to each lane.

### Operation

```c
dst.u32[0] = a.u32[0] + b.u32[0] * c.u32[0];
dst.u32[1] = a.u32[1] + b.u32[1] * c.u32[1];
dst.u32[2] = a.u32[2] + b.u32[2] * c.u32[2];
dst.u32[3] = a.u32[3] + b.u32[3] * c.u32[3];
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
#define __msa_maddv_w __builtin_msa_maddv_w
```

## v16i8 __msa_mod_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_mod_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: mod.s.b
Builtin: __builtin_msa_mod_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:332
```

### Description

Compute the lane-wise signed remainder of `a` divided by `b` on 16 x i8 lanes.

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
#define __msa_mod_s_b __builtin_msa_mod_s_b
```

## v2i64 __msa_mod_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_mod_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: mod.s.d
Builtin: __builtin_msa_mod_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:335
```

### Description

Compute the lane-wise signed remainder of `a` divided by `b` on 2 x i64 lanes.

### Operation

```c
dst.i64[0] = a.i64[0] % b.i64[0];
dst.i64[1] = a.i64[1] % b.i64[1];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>8/10</td><td>0.11(1/9.22)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_mod_s_d __builtin_msa_mod_s_d
```

## v8i16 __msa_mod_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_mod_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: mod.s.h
Builtin: __builtin_msa_mod_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:333
```

### Description

Compute the lane-wise signed remainder of `a` divided by `b` on 8 x i16 lanes.

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
#define __msa_mod_s_h __builtin_msa_mod_s_h
```

## v4i32 __msa_mod_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_mod_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: mod.s.w
Builtin: __builtin_msa_mod_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:334
```

### Description

Compute the lane-wise signed remainder of `a` divided by `b` on 4 x i32 lanes.

### Operation

```c
dst.i32[0] = a.i32[0] % b.i32[0];
dst.i32[1] = a.i32[1] % b.i32[1];
dst.i32[2] = a.i32[2] % b.i32[2];
dst.i32[3] = a.i32[3] % b.i32[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>11/15</td><td>0.09(1/11.43)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_mod_s_w __builtin_msa_mod_s_w
```

## v16u8 __msa_mod_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_mod_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: mod.u.b
Builtin: __builtin_msa_mod_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:336
```

### Description

Compute the lane-wise unsigned remainder of `a` divided by `b` on 16 x u8 lanes.

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
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>29/44</td><td>0.05(1/22)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_mod_u_b __builtin_msa_mod_u_b
```

## v2u64 __msa_mod_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_mod_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: mod.u.d
Builtin: __builtin_msa_mod_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:339
```

### Description

Compute the lane-wise unsigned remainder of `a` divided by `b` on 2 x u64 lanes.

### Operation

```c
dst.u64[0] = a.u64[0] % b.u64[0];
dst.u64[1] = a.u64[1] % b.u64[1];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>8/10</td><td>0.12(1/8.23)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_mod_u_d __builtin_msa_mod_u_d
```

## v8u16 __msa_mod_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_mod_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: mod.u.h
Builtin: __builtin_msa_mod_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:337
```

### Description

Compute the lane-wise unsigned remainder of `a` divided by `b` on 8 x u16 lanes.

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
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>17/25</td><td>0.07(1/14.50)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_mod_u_h __builtin_msa_mod_u_h
```

## v4u32 __msa_mod_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_mod_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: mod.u.w
Builtin: __builtin_msa_mod_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:338
```

### Description

Compute the lane-wise unsigned remainder of `a` divided by `b` on 4 x u32 lanes.

### Operation

```c
dst.u32[0] = a.u32[0] % b.u32[0];
dst.u32[1] = a.u32[1] % b.u32[1];
dst.u32[2] = a.u32[2] % b.u32[2];
dst.u32[3] = a.u32[3] % b.u32[3];
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>11/15</td><td>0.08(1/12)</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_mod_u_w __builtin_msa_mod_u_w
```

## v8i16 __msa_msub_q_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_msub_q_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: msub.q.h
Builtin: __builtin_msa_msub_q_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:543
```

### Description

Subtract modular integer lanes of `b` from `a` on 8 x u16 lanes; immediate forms subtract the scalar immediate.

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
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.63</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_msub_q_h __builtin_msa_msub_q_h
```

## v4i32 __msa_msub_q_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_msub_q_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: msub.q.w
Builtin: __builtin_msa_msub_q_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:544
```

### Description

Subtract modular integer lanes of `b` from `a` on 4 x u32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i32[0] = signed_saturate(a.i32[0] - signed_saturate(q_format_shift(b.i32[0] * c.i32[0], 32 - 1), 32), 32);
dst.i32[1] = signed_saturate(a.i32[1] - signed_saturate(q_format_shift(b.i32[1] * c.i32[1], 32 - 1), 32), 32);
dst.i32[2] = signed_saturate(a.i32[2] - signed_saturate(q_format_shift(b.i32[2] * c.i32[2], 32 - 1), 32), 32);
dst.i32[3] = signed_saturate(a.i32[3] - signed_saturate(q_format_shift(b.i32[3] * c.i32[3], 32 - 1), 32), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.63</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_msub_q_w __builtin_msa_msub_q_w
```

## v8i16 __msa_msubr_q_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_msubr_q_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: msubr.q.h
Builtin: __builtin_msa_msubr_q_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:545
```

### Description

Subtract modular integer lanes of `b` from `a` on 8 x u16 lanes; immediate forms subtract the scalar immediate.

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
#define __msa_msubr_q_h __builtin_msa_msubr_q_h
```

## v4i32 __msa_msubr_q_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_msubr_q_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: msubr.q.w
Builtin: __builtin_msa_msubr_q_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:546
```

### Description

Subtract modular integer lanes of `b` from `a` on 4 x u32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.i32[0] = signed_saturate(a.i32[0] - signed_saturate(rounding_q_format_shift(b.i32[0] * c.i32[0], 32 - 1), 32), 32);
dst.i32[1] = signed_saturate(a.i32[1] - signed_saturate(rounding_q_format_shift(b.i32[1] * c.i32[1], 32 - 1), 32), 32);
dst.i32[2] = signed_saturate(a.i32[2] - signed_saturate(rounding_q_format_shift(b.i32[2] * c.i32[2], 32 - 1), 32), 32);
dst.i32[3] = signed_saturate(a.i32[3] - signed_saturate(rounding_q_format_shift(b.i32[3] * c.i32[3], 32 - 1), 32), 32);
```

### Latency and Throughput

<table>
<thead>
<tr><th colspan="2">3A4000(GS464V)</th></tr>
<tr><th>Latency</th><th>Throughput (IPC)</th></tr>
</thead>
<tbody>
<tr><td>5</td><td>1.63</td></tr>
</tbody>
</table>

### Header Mapping

```c
#define __msa_msubr_q_w __builtin_msa_msubr_q_w
```

## v16i8 __msa_msubv_b (v16i8 a, v16i8 b, v16i8 c)

### Synopsis

```c
v16i8 __msa_msubv_b (v16i8 a, v16i8 b, v16i8 c)
#include <msa.h>
Instruction: msubv.b
Builtin: __builtin_msa_msubv_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:308
```

### Description

Subtract modular integer lanes of `b` from `a` on 16 x u8 lanes; immediate forms subtract the scalar immediate.

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
#define __msa_msubv_b __builtin_msa_msubv_b
```

## v2i64 __msa_msubv_d (v2i64 a, v2i64 b, v2i64 c)

### Synopsis

```c
v2i64 __msa_msubv_d (v2i64 a, v2i64 b, v2i64 c)
#include <msa.h>
Instruction: msubv.d
Builtin: __builtin_msa_msubv_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:311
```

### Description

Subtract modular integer lanes of `b` from `a` on 2 x u64 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u64[0] = a.u64[0] - b.u64[0] * c.u64[0];
dst.u64[1] = a.u64[1] - b.u64[1] * c.u64[1];
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
#define __msa_msubv_d __builtin_msa_msubv_d
```

## v8i16 __msa_msubv_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_msubv_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: msubv.h
Builtin: __builtin_msa_msubv_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:309
```

### Description

Subtract modular integer lanes of `b` from `a` on 8 x u16 lanes; immediate forms subtract the scalar immediate.

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
#define __msa_msubv_h __builtin_msa_msubv_h
```

## v4i32 __msa_msubv_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_msubv_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: msubv.w
Builtin: __builtin_msa_msubv_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:310
```

### Description

Subtract modular integer lanes of `b` from `a` on 4 x u32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u32[0] = a.u32[0] - b.u32[0] * c.u32[0];
dst.u32[1] = a.u32[1] - b.u32[1] * c.u32[1];
dst.u32[2] = a.u32[2] - b.u32[2] * c.u32[2];
dst.u32[3] = a.u32[3] - b.u32[3] * c.u32[3];
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
#define __msa_msubv_w __builtin_msa_msubv_w
```

## v8i16 __msa_mul_q_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_mul_q_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: mul.q.h
Builtin: __builtin_msa_mul_q_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:535
```

### Description

Multiply modular integer lanes of `a` and `b` on 8 x u16 lanes.

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
#define __msa_mul_q_h __builtin_msa_mul_q_h
```

## v4i32 __msa_mul_q_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_mul_q_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: mul.q.w
Builtin: __builtin_msa_mul_q_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:536
```

### Description

Multiply modular integer lanes of `a` and `b` on 4 x u32 lanes.

### Operation

```c
dst.i32[0] = signed_saturate(q_format_shift(a.i32[0] * b.i32[0], 32 - 1), 32);
dst.i32[1] = signed_saturate(q_format_shift(a.i32[1] * b.i32[1], 32 - 1), 32);
dst.i32[2] = signed_saturate(q_format_shift(a.i32[2] * b.i32[2], 32 - 1), 32);
dst.i32[3] = signed_saturate(q_format_shift(a.i32[3] * b.i32[3], 32 - 1), 32);
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
#define __msa_mul_q_w __builtin_msa_mul_q_w
```

## v8i16 __msa_mulr_q_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_mulr_q_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: mulr.q.h
Builtin: __builtin_msa_mulr_q_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:537
```

### Description

Multiply modular integer lanes of `a` and `b` on 8 x u16 lanes.

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
#define __msa_mulr_q_h __builtin_msa_mulr_q_h
```

## v4i32 __msa_mulr_q_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_mulr_q_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: mulr.q.w
Builtin: __builtin_msa_mulr_q_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:538
```

### Description

Multiply modular integer lanes of `a` and `b` on 4 x u32 lanes.

### Operation

```c
dst.i32[0] = signed_saturate(rounding_q_format_shift(a.i32[0] * b.i32[0], 32 - 1), 32);
dst.i32[1] = signed_saturate(rounding_q_format_shift(a.i32[1] * b.i32[1], 32 - 1), 32);
dst.i32[2] = signed_saturate(rounding_q_format_shift(a.i32[2] * b.i32[2], 32 - 1), 32);
dst.i32[3] = signed_saturate(rounding_q_format_shift(a.i32[3] * b.i32[3], 32 - 1), 32);
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
#define __msa_mulr_q_w __builtin_msa_mulr_q_w
```

## v16i8 __msa_mulv_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_mulv_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: mulv.b
Builtin: __builtin_msa_mulv_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:300
```

### Description

Multiply modular integer lanes of `a` and `b` on 16 x u8 lanes.

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
#define __msa_mulv_b __builtin_msa_mulv_b
```

## v2i64 __msa_mulv_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_mulv_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: mulv.d
Builtin: __builtin_msa_mulv_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:303
```

### Description

Multiply modular integer lanes of `a` and `b` on 2 x u64 lanes.

### Operation

```c
dst.u64[0] = a.i64[0] * b.i64[0];
dst.u64[1] = a.i64[1] * b.i64[1];
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
#define __msa_mulv_d __builtin_msa_mulv_d
```

## v8i16 __msa_mulv_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_mulv_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: mulv.h
Builtin: __builtin_msa_mulv_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:301
```

### Description

Multiply modular integer lanes of `a` and `b` on 8 x u16 lanes.

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
#define __msa_mulv_h __builtin_msa_mulv_h
```

## v4i32 __msa_mulv_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_mulv_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: mulv.w
Builtin: __builtin_msa_mulv_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:302
```

### Description

Multiply modular integer lanes of `a` and `b` on 4 x u32 lanes.

### Operation

```c
dst.u32[0] = a.i32[0] * b.i32[0];
dst.u32[1] = a.i32[1] * b.i32[1];
dst.u32[2] = a.i32[2] * b.i32[2];
dst.u32[3] = a.i32[3] * b.i32[3];
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
#define __msa_mulv_w __builtin_msa_mulv_w
```

## v16i8 __msa_sat_s_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_sat_s_b (v16i8 a, int imm)
#include <msa.h>
Instruction: sat.s.b
Builtin: __builtin_msa_sat_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:236
```

### Description

Perform lane-wise signed saturating integer arithmetic on 16 x i8 lanes, clamping overflow instead of wrapping.

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
#define __msa_sat_s_b __builtin_msa_sat_s_b
```

## v2i64 __msa_sat_s_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_sat_s_d (v2i64 a, int imm)
#include <msa.h>
Instruction: sat.s.d
Builtin: __builtin_msa_sat_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:239
```

### Description

Perform lane-wise signed saturating integer arithmetic on 2 x i64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i64[0] = saturate(a.i64[0], range_selected_by_imm, signedness);
dst.i64[1] = saturate(a.i64[1], range_selected_by_imm, signedness);
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
#define __msa_sat_s_d __builtin_msa_sat_s_d
```

## v8i16 __msa_sat_s_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_sat_s_h (v8i16 a, int imm)
#include <msa.h>
Instruction: sat.s.h
Builtin: __builtin_msa_sat_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:237
```

### Description

Perform lane-wise signed saturating integer arithmetic on 8 x i16 lanes, clamping overflow instead of wrapping.

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
#define __msa_sat_s_h __builtin_msa_sat_s_h
```

## v4i32 __msa_sat_s_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_sat_s_w (v4i32 a, int imm)
#include <msa.h>
Instruction: sat.s.w
Builtin: __builtin_msa_sat_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:238
```

### Description

Perform lane-wise signed saturating integer arithmetic on 4 x i32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i32[0] = saturate(a.i32[0], range_selected_by_imm, signedness);
dst.i32[1] = saturate(a.i32[1], range_selected_by_imm, signedness);
dst.i32[2] = saturate(a.i32[2], range_selected_by_imm, signedness);
dst.i32[3] = saturate(a.i32[3], range_selected_by_imm, signedness);
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
#define __msa_sat_s_w __builtin_msa_sat_s_w
```

## v16u8 __msa_sat_u_b (v16u8 a, int imm)

### Synopsis

```c
v16u8 __msa_sat_u_b (v16u8 a, int imm)
#include <msa.h>
Instruction: sat.u.b
Builtin: __builtin_msa_sat_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:240
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 16 x u8 lanes, clamping overflow instead of wrapping.

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
#define __msa_sat_u_b __builtin_msa_sat_u_b
```

## v2u64 __msa_sat_u_d (v2u64 a, int imm)

### Synopsis

```c
v2u64 __msa_sat_u_d (v2u64 a, int imm)
#include <msa.h>
Instruction: sat.u.d
Builtin: __builtin_msa_sat_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:243
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 2 x u64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u64[0] = saturate(a.u64[0], range_selected_by_imm, signedness);
dst.u64[1] = saturate(a.u64[1], range_selected_by_imm, signedness);
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
#define __msa_sat_u_d __builtin_msa_sat_u_d
```

## v8u16 __msa_sat_u_h (v8u16 a, int imm)

### Synopsis

```c
v8u16 __msa_sat_u_h (v8u16 a, int imm)
#include <msa.h>
Instruction: sat.u.h
Builtin: __builtin_msa_sat_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:241
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 8 x u16 lanes, clamping overflow instead of wrapping.

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
#define __msa_sat_u_h __builtin_msa_sat_u_h
```

## v4u32 __msa_sat_u_w (v4u32 a, int imm)

### Synopsis

```c
v4u32 __msa_sat_u_w (v4u32 a, int imm)
#include <msa.h>
Instruction: sat.u.w
Builtin: __builtin_msa_sat_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:242
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 4 x u32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u32[0] = saturate(a.u32[0], range_selected_by_imm, signedness);
dst.u32[1] = saturate(a.u32[1], range_selected_by_imm, signedness);
dst.u32[2] = saturate(a.u32[2], range_selected_by_imm, signedness);
dst.u32[3] = saturate(a.u32[3], range_selected_by_imm, signedness);
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
#define __msa_sat_u_w __builtin_msa_sat_u_w
```

## v16i8 __msa_subs_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_subs_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: subs.s.b
Builtin: __builtin_msa_subs_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:276
```

### Description

Perform lane-wise signed saturating integer arithmetic on 16 x i8 lanes, clamping overflow instead of wrapping.

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
#define __msa_subs_s_b __builtin_msa_subs_s_b
```

## v2i64 __msa_subs_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_subs_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: subs.s.d
Builtin: __builtin_msa_subs_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:279
```

### Description

Perform lane-wise signed saturating integer arithmetic on 2 x i64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i64[0] = saturate(a.i64[0] - b.i64[0], 64, signedness);
dst.i64[1] = saturate(a.i64[1] - b.i64[1], 64, signedness);
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
#define __msa_subs_s_d __builtin_msa_subs_s_d
```

## v8i16 __msa_subs_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_subs_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: subs.s.h
Builtin: __builtin_msa_subs_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:277
```

### Description

Perform lane-wise signed saturating integer arithmetic on 8 x i16 lanes, clamping overflow instead of wrapping.

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
#define __msa_subs_s_h __builtin_msa_subs_s_h
```

## v4i32 __msa_subs_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_subs_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: subs.s.w
Builtin: __builtin_msa_subs_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:278
```

### Description

Perform lane-wise signed saturating integer arithmetic on 4 x i32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i32[0] = saturate(a.i32[0] - b.i32[0], 32, signedness);
dst.i32[1] = saturate(a.i32[1] - b.i32[1], 32, signedness);
dst.i32[2] = saturate(a.i32[2] - b.i32[2], 32, signedness);
dst.i32[3] = saturate(a.i32[3] - b.i32[3], 32, signedness);
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
#define __msa_subs_s_w __builtin_msa_subs_s_w
```

## v16u8 __msa_subs_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_subs_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: subs.u.b
Builtin: __builtin_msa_subs_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:280
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 16 x u8 lanes, clamping overflow instead of wrapping.

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
#define __msa_subs_u_b __builtin_msa_subs_u_b
```

## v2u64 __msa_subs_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_subs_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: subs.u.d
Builtin: __builtin_msa_subs_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:283
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 2 x u64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u64[0] = saturate(a.u64[0] - b.u64[0], 64, signedness);
dst.u64[1] = saturate(a.u64[1] - b.u64[1], 64, signedness);
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
#define __msa_subs_u_d __builtin_msa_subs_u_d
```

## v8u16 __msa_subs_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_subs_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: subs.u.h
Builtin: __builtin_msa_subs_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:281
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 8 x u16 lanes, clamping overflow instead of wrapping.

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
#define __msa_subs_u_h __builtin_msa_subs_u_h
```

## v4u32 __msa_subs_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_subs_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: subs.u.w
Builtin: __builtin_msa_subs_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:282
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 4 x u32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u32[0] = saturate(a.u32[0] - b.u32[0], 32, signedness);
dst.u32[1] = saturate(a.u32[1] - b.u32[1], 32, signedness);
dst.u32[2] = saturate(a.u32[2] - b.u32[2], 32, signedness);
dst.u32[3] = saturate(a.u32[3] - b.u32[3], 32, signedness);
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
#define __msa_subs_u_w __builtin_msa_subs_u_w
```

## v16u8 __msa_subsus_u_b (v16u8 a, v16i8 b)

### Synopsis

```c
v16u8 __msa_subsus_u_b (v16u8 a, v16i8 b)
#include <msa.h>
Instruction: subsus.u.b
Builtin: __builtin_msa_subsus_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:288
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 16 x u8 lanes, clamping overflow instead of wrapping.

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
#define __msa_subsus_u_b __builtin_msa_subsus_u_b
```

## v2u64 __msa_subsus_u_d (v2u64 a, v2i64 b)

### Synopsis

```c
v2u64 __msa_subsus_u_d (v2u64 a, v2i64 b)
#include <msa.h>
Instruction: subsus.u.d
Builtin: __builtin_msa_subsus_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:291
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 2 x u64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u64[0] = unsigned_saturate(a.u64[0] - b.i64[0], 64);
dst.u64[1] = unsigned_saturate(a.u64[1] - b.i64[1], 64);
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
#define __msa_subsus_u_d __builtin_msa_subsus_u_d
```

## v8u16 __msa_subsus_u_h (v8u16 a, v8i16 b)

### Synopsis

```c
v8u16 __msa_subsus_u_h (v8u16 a, v8i16 b)
#include <msa.h>
Instruction: subsus.u.h
Builtin: __builtin_msa_subsus_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:289
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 8 x u16 lanes, clamping overflow instead of wrapping.

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
#define __msa_subsus_u_h __builtin_msa_subsus_u_h
```

## v4u32 __msa_subsus_u_w (v4u32 a, v4i32 b)

### Synopsis

```c
v4u32 __msa_subsus_u_w (v4u32 a, v4i32 b)
#include <msa.h>
Instruction: subsus.u.w
Builtin: __builtin_msa_subsus_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:290
```

### Description

Perform lane-wise unsigned saturating integer arithmetic on 4 x u32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.u32[0] = unsigned_saturate(a.u32[0] - b.i32[0], 32);
dst.u32[1] = unsigned_saturate(a.u32[1] - b.i32[1], 32);
dst.u32[2] = unsigned_saturate(a.u32[2] - b.i32[2], 32);
dst.u32[3] = unsigned_saturate(a.u32[3] - b.i32[3], 32);
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
#define __msa_subsus_u_w __builtin_msa_subsus_u_w
```

## v16i8 __msa_subsuu_s_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16i8 __msa_subsuu_s_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: subsuu.s.b
Builtin: __builtin_msa_subsuu_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:284
```

### Description

Perform lane-wise signed saturating integer arithmetic on 16 x i8 lanes, clamping overflow instead of wrapping.

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
#define __msa_subsuu_s_b __builtin_msa_subsuu_s_b
```

## v2i64 __msa_subsuu_s_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2i64 __msa_subsuu_s_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: subsuu.s.d
Builtin: __builtin_msa_subsuu_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:287
```

### Description

Perform lane-wise signed saturating integer arithmetic on 2 x i64 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i64[0] = signed_saturate(a.u64[0] - b.u64[0], 64);
dst.i64[1] = signed_saturate(a.u64[1] - b.u64[1], 64);
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
#define __msa_subsuu_s_d __builtin_msa_subsuu_s_d
```

## v8i16 __msa_subsuu_s_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8i16 __msa_subsuu_s_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: subsuu.s.h
Builtin: __builtin_msa_subsuu_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:285
```

### Description

Perform lane-wise signed saturating integer arithmetic on 8 x i16 lanes, clamping overflow instead of wrapping.

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
#define __msa_subsuu_s_h __builtin_msa_subsuu_s_h
```

## v4i32 __msa_subsuu_s_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4i32 __msa_subsuu_s_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: subsuu.s.w
Builtin: __builtin_msa_subsuu_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:286
```

### Description

Perform lane-wise signed saturating integer arithmetic on 4 x i32 lanes, clamping overflow instead of wrapping.

### Operation

```c
dst.i32[0] = signed_saturate(a.u32[0] - b.u32[0], 32);
dst.i32[1] = signed_saturate(a.u32[1] - b.u32[1], 32);
dst.i32[2] = signed_saturate(a.u32[2] - b.u32[2], 32);
dst.i32[3] = signed_saturate(a.u32[3] - b.u32[3], 32);
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
#define __msa_subsuu_s_w __builtin_msa_subsuu_s_w
```

## v16i8 __msa_subv_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_subv_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: subv.b
Builtin: __builtin_msa_subv_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:140
```

### Description

Subtract modular integer lanes of `b` from `a` on 16 x u8 lanes; immediate forms subtract the scalar immediate.

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
#define __msa_subv_b __builtin_msa_subv_b
```

## v2i64 __msa_subv_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_subv_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: subv.d
Builtin: __builtin_msa_subv_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:143
```

### Description

Subtract modular integer lanes of `b` from `a` on 2 x u64 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u64[0] = a.i64[0] - b.i64[0];
dst.u64[1] = a.i64[1] - b.i64[1];
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
#define __msa_subv_d __builtin_msa_subv_d
```

## v8i16 __msa_subv_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_subv_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: subv.h
Builtin: __builtin_msa_subv_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:141
```

### Description

Subtract modular integer lanes of `b` from `a` on 8 x u16 lanes; immediate forms subtract the scalar immediate.

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
#define __msa_subv_h __builtin_msa_subv_h
```

## v4i32 __msa_subv_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_subv_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: subv.w
Builtin: __builtin_msa_subv_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:142
```

### Description

Subtract modular integer lanes of `b` from `a` on 4 x u32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u32[0] = a.i32[0] - b.i32[0];
dst.u32[1] = a.i32[1] - b.i32[1];
dst.u32[2] = a.i32[2] - b.i32[2];
dst.u32[3] = a.i32[3] - b.i32[3];
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
#define __msa_subv_w __builtin_msa_subv_w
```

## v16i8 __msa_subvi_b (v16i8 a, int imm)

### Synopsis

```c
v16i8 __msa_subvi_b (v16i8 a, int imm)
#include <msa.h>
Instruction: subvi.b
Builtin: __builtin_msa_subvi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:144
```

### Description

Subtract modular integer lanes of `b` from `a` on 16 x u8 lanes; immediate forms subtract the scalar immediate.

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
#define __msa_subvi_b __builtin_msa_subvi_b
```

## v2i64 __msa_subvi_d (v2i64 a, int imm)

### Synopsis

```c
v2i64 __msa_subvi_d (v2i64 a, int imm)
#include <msa.h>
Instruction: subvi.d
Builtin: __builtin_msa_subvi_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:147
```

### Description

Subtract modular integer lanes of `b` from `a` on 2 x u64 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u64[0] = a.i64[0] - imm;
dst.u64[1] = a.i64[1] - imm;
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
#define __msa_subvi_d __builtin_msa_subvi_d
```

## v8i16 __msa_subvi_h (v8i16 a, int imm)

### Synopsis

```c
v8i16 __msa_subvi_h (v8i16 a, int imm)
#include <msa.h>
Instruction: subvi.h
Builtin: __builtin_msa_subvi_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:145
```

### Description

Subtract modular integer lanes of `b` from `a` on 8 x u16 lanes; immediate forms subtract the scalar immediate.

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
#define __msa_subvi_h __builtin_msa_subvi_h
```

## v4i32 __msa_subvi_w (v4i32 a, int imm)

### Synopsis

```c
v4i32 __msa_subvi_w (v4i32 a, int imm)
#include <msa.h>
Instruction: subvi.w
Builtin: __builtin_msa_subvi_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:146
```

### Description

Subtract modular integer lanes of `b` from `a` on 4 x u32 lanes; immediate forms subtract the scalar immediate.

### Operation

```c
dst.u32[0] = a.i32[0] - imm;
dst.u32[1] = a.i32[1] - imm;
dst.u32[2] = a.i32[2] - imm;
dst.u32[3] = a.i32[3] - imm;
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
#define __msa_subvi_w __builtin_msa_subvi_w
```

