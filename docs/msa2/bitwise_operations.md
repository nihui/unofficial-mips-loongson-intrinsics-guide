# Bitwise Operations

Generated from `include/msa2.h`. This page contains 5 intrinsics.

## __m128i __msa2_nxbits_any_b (__m128i a)

### Synopsis

```c
__m128i __msa2_nxbits_any_b (__m128i a)
#include <msa2.h>
Instruction: nxbits.any.b
Builtin: __builtin_msa2_nxbits_any_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:308
```

### Description

Pack the non-zero predicate of each input byte into low-order mask bytes. This compresses byte-lane tests into a compact bit mask for string and scanning code.

### Operation

```c
dst.u8[0] = 0;
dst.u8[0] |= (a.u8[0] != 0 ? 1 : 0) << 0;
dst.u8[0] |= (a.u8[1] != 0 ? 1 : 0) << 1;
dst.u8[0] |= (a.u8[2] != 0 ? 1 : 0) << 2;
dst.u8[0] |= (a.u8[3] != 0 ? 1 : 0) << 3;
dst.u8[0] |= (a.u8[4] != 0 ? 1 : 0) << 4;
dst.u8[0] |= (a.u8[5] != 0 ? 1 : 0) << 5;
dst.u8[0] |= (a.u8[6] != 0 ? 1 : 0) << 6;
dst.u8[0] |= (a.u8[7] != 0 ? 1 : 0) << 7;
dst.u8[1] = 0;
dst.u8[1] |= (a.u8[8] != 0 ? 1 : 0) << 0;
dst.u8[1] |= (a.u8[9] != 0 ? 1 : 0) << 1;
dst.u8[1] |= (a.u8[10] != 0 ? 1 : 0) << 2;
dst.u8[1] |= (a.u8[11] != 0 ? 1 : 0) << 3;
dst.u8[1] |= (a.u8[12] != 0 ? 1 : 0) << 4;
dst.u8[1] |= (a.u8[13] != 0 ? 1 : 0) << 5;
dst.u8[1] |= (a.u8[14] != 0 ? 1 : 0) << 6;
dst.u8[1] |= (a.u8[15] != 0 ? 1 : 0) << 7;
dst.u8[2] = 0;
dst.u8[3] = 0;
dst.u8[4] = 0;
dst.u8[5] = 0;
dst.u8[6] = 0;
dst.u8[7] = 0;
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
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
return (__m128i) __builtin_msa2_nxbits_any_b ((v16i8) a);
```

## __m128i __msa2_nxbits_ge0_b (__m128i a)

### Synopsis

```c
__m128i __msa2_nxbits_ge0_b (__m128i a)
#include <msa2.h>
Instruction: nxbits.ge0.b
Builtin: __builtin_msa2_nxbits_ge0_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:314
```

### Description

Pack the non-negative predicate of each input byte into low-order mask bytes. This compresses byte-lane tests into a compact bit mask for string and scanning code.

### Operation

```c
dst.u8[0] = 0;
dst.u8[0] |= (a.i8[0] >= 0 ? 1 : 0) << 0;
dst.u8[0] |= (a.i8[1] >= 0 ? 1 : 0) << 1;
dst.u8[0] |= (a.i8[2] >= 0 ? 1 : 0) << 2;
dst.u8[0] |= (a.i8[3] >= 0 ? 1 : 0) << 3;
dst.u8[0] |= (a.i8[4] >= 0 ? 1 : 0) << 4;
dst.u8[0] |= (a.i8[5] >= 0 ? 1 : 0) << 5;
dst.u8[0] |= (a.i8[6] >= 0 ? 1 : 0) << 6;
dst.u8[0] |= (a.i8[7] >= 0 ? 1 : 0) << 7;
dst.u8[1] = 0;
dst.u8[1] |= (a.i8[8] >= 0 ? 1 : 0) << 0;
dst.u8[1] |= (a.i8[9] >= 0 ? 1 : 0) << 1;
dst.u8[1] |= (a.i8[10] >= 0 ? 1 : 0) << 2;
dst.u8[1] |= (a.i8[11] >= 0 ? 1 : 0) << 3;
dst.u8[1] |= (a.i8[12] >= 0 ? 1 : 0) << 4;
dst.u8[1] |= (a.i8[13] >= 0 ? 1 : 0) << 5;
dst.u8[1] |= (a.i8[14] >= 0 ? 1 : 0) << 6;
dst.u8[1] |= (a.i8[15] >= 0 ? 1 : 0) << 7;
dst.u8[2] = 0;
dst.u8[3] = 0;
dst.u8[4] = 0;
dst.u8[5] = 0;
dst.u8[6] = 0;
dst.u8[7] = 0;
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
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
return (__m128i) __builtin_msa2_nxbits_ge0_b ((v16i8) a);
```

## __m128i __msa2_nxbits_lt0_b (__m128i a)

### Synopsis

```c
__m128i __msa2_nxbits_lt0_b (__m128i a)
#include <msa2.h>
Instruction: nxbits.lt0.b
Builtin: __builtin_msa2_nxbits_lt0_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:320
```

### Description

Pack the negative predicate of each input byte into low-order mask bytes. This compresses byte-lane tests into a compact bit mask for string and scanning code.

### Operation

```c
dst.u8[0] = 0;
dst.u8[0] |= (a.i8[0] < 0 ? 1 : 0) << 0;
dst.u8[0] |= (a.i8[1] < 0 ? 1 : 0) << 1;
dst.u8[0] |= (a.i8[2] < 0 ? 1 : 0) << 2;
dst.u8[0] |= (a.i8[3] < 0 ? 1 : 0) << 3;
dst.u8[0] |= (a.i8[4] < 0 ? 1 : 0) << 4;
dst.u8[0] |= (a.i8[5] < 0 ? 1 : 0) << 5;
dst.u8[0] |= (a.i8[6] < 0 ? 1 : 0) << 6;
dst.u8[0] |= (a.i8[7] < 0 ? 1 : 0) << 7;
dst.u8[1] = 0;
dst.u8[1] |= (a.i8[8] < 0 ? 1 : 0) << 0;
dst.u8[1] |= (a.i8[9] < 0 ? 1 : 0) << 1;
dst.u8[1] |= (a.i8[10] < 0 ? 1 : 0) << 2;
dst.u8[1] |= (a.i8[11] < 0 ? 1 : 0) << 3;
dst.u8[1] |= (a.i8[12] < 0 ? 1 : 0) << 4;
dst.u8[1] |= (a.i8[13] < 0 ? 1 : 0) << 5;
dst.u8[1] |= (a.i8[14] < 0 ? 1 : 0) << 6;
dst.u8[1] |= (a.i8[15] < 0 ? 1 : 0) << 7;
dst.u8[2] = 0;
dst.u8[3] = 0;
dst.u8[4] = 0;
dst.u8[5] = 0;
dst.u8[6] = 0;
dst.u8[7] = 0;
dst.u8[8] = 0;
dst.u8[9] = 0;
dst.u8[10] = 0;
dst.u8[11] = 0;
dst.u8[12] = 0;
dst.u8[13] = 0;
dst.u8[14] = 0;
dst.u8[15] = 0;
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
return (__m128i) __builtin_msa2_nxbits_lt0_b ((v16i8) a);
```

## __m128i __msa2_wxbits_01_b (__m128i a)

### Synopsis

```c
__m128i __msa2_wxbits_01_b (__m128i a)
#include <msa2.h>
Instruction: wxbits.01.b
Builtin: __builtin_msa2_wxbits_01_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:452
```

### Description

Expand packed bits from the low input bytes into `0x01`/`0x00` bytes, one output byte per source bit. This turns a compact predicate mask back into byte-lane masks.

### Operation

```c
dst.u8[0] = ((a.u8[0] >> 0) & 1) ? 0x01 : 0x00;
dst.u8[1] = ((a.u8[0] >> 1) & 1) ? 0x01 : 0x00;
dst.u8[2] = ((a.u8[0] >> 2) & 1) ? 0x01 : 0x00;
dst.u8[3] = ((a.u8[0] >> 3) & 1) ? 0x01 : 0x00;
dst.u8[4] = ((a.u8[0] >> 4) & 1) ? 0x01 : 0x00;
dst.u8[5] = ((a.u8[0] >> 5) & 1) ? 0x01 : 0x00;
dst.u8[6] = ((a.u8[0] >> 6) & 1) ? 0x01 : 0x00;
dst.u8[7] = ((a.u8[0] >> 7) & 1) ? 0x01 : 0x00;
dst.u8[8] = ((a.u8[1] >> 0) & 1) ? 0x01 : 0x00;
dst.u8[9] = ((a.u8[1] >> 1) & 1) ? 0x01 : 0x00;
dst.u8[10] = ((a.u8[1] >> 2) & 1) ? 0x01 : 0x00;
dst.u8[11] = ((a.u8[1] >> 3) & 1) ? 0x01 : 0x00;
dst.u8[12] = ((a.u8[1] >> 4) & 1) ? 0x01 : 0x00;
dst.u8[13] = ((a.u8[1] >> 5) & 1) ? 0x01 : 0x00;
dst.u8[14] = ((a.u8[1] >> 6) & 1) ? 0x01 : 0x00;
dst.u8[15] = ((a.u8[1] >> 7) & 1) ? 0x01 : 0x00;
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
return (__m128i) __builtin_msa2_wxbits_01_b ((v16i8) a);
```

## __m128i __msa2_wxbits_mask_b (__m128i a)

### Synopsis

```c
__m128i __msa2_wxbits_mask_b (__m128i a)
#include <msa2.h>
Instruction: wxbits.mask.b
Builtin: __builtin_msa2_wxbits_mask_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:458
```

### Description

Expand packed bits from the low input bytes into `0xff`/`0x00` mask bytes, one output byte per source bit. This turns a compact predicate mask back into byte-lane masks.

### Operation

```c
dst.u8[0] = ((a.u8[0] >> 0) & 1) ? 0xff : 0x00;
dst.u8[1] = ((a.u8[0] >> 1) & 1) ? 0xff : 0x00;
dst.u8[2] = ((a.u8[0] >> 2) & 1) ? 0xff : 0x00;
dst.u8[3] = ((a.u8[0] >> 3) & 1) ? 0xff : 0x00;
dst.u8[4] = ((a.u8[0] >> 4) & 1) ? 0xff : 0x00;
dst.u8[5] = ((a.u8[0] >> 5) & 1) ? 0xff : 0x00;
dst.u8[6] = ((a.u8[0] >> 6) & 1) ? 0xff : 0x00;
dst.u8[7] = ((a.u8[0] >> 7) & 1) ? 0xff : 0x00;
dst.u8[8] = ((a.u8[1] >> 0) & 1) ? 0xff : 0x00;
dst.u8[9] = ((a.u8[1] >> 1) & 1) ? 0xff : 0x00;
dst.u8[10] = ((a.u8[1] >> 2) & 1) ? 0xff : 0x00;
dst.u8[11] = ((a.u8[1] >> 3) & 1) ? 0xff : 0x00;
dst.u8[12] = ((a.u8[1] >> 4) & 1) ? 0xff : 0x00;
dst.u8[13] = ((a.u8[1] >> 5) & 1) ? 0xff : 0x00;
dst.u8[14] = ((a.u8[1] >> 6) & 1) ? 0xff : 0x00;
dst.u8[15] = ((a.u8[1] >> 7) & 1) ? 0xff : 0x00;
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
return (__m128i) __builtin_msa2_wxbits_mask_b ((v16i8) a);
```

