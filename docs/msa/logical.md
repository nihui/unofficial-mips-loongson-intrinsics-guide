# Logical

Generated from `include/msa.h`. This page contains 14 intrinsics.

## v16u8 __msa_and_v (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_and_v (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: and.v
Builtin: __builtin_msa_and_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:402
```

### Description

Compute bitwise AND across the whole vector; immediate forms AND each byte with the immediate mask.

### Operation

```c
dst.bits = a.bits & (imm_or_b);
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
#define __msa_and_v __builtin_msa_and_v
```

## v16u8 __msa_andi_b (v16u8 a, int imm)

### Synopsis

```c
v16u8 __msa_andi_b (v16u8 a, int imm)
#include <msa.h>
Instruction: andi.b
Builtin: __builtin_msa_andi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:403
```

### Description

Compute bitwise AND across the whole vector; immediate forms AND each byte with the immediate mask.

### Operation

```c
dst.bits = a.bits & (imm_or_b);
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
#define __msa_andi_b __builtin_msa_andi_b
```

## v16u8 __msa_bmnz_v (v16u8 a, v16u8 b, v16u8 c)

### Synopsis

```c
v16u8 __msa_bmnz_v (v16u8 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: bmnz.v
Builtin: __builtin_msa_bmnz_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:410
```

### Description

Use `a` as a bit mask and keep bits from `b` only where the mask bit is one; other bits become zero.

### Operation

```c
dst.bits = select_bits(mask=a, true_value=b, false_value=0);
```

### Header Mapping

```c
#define __msa_bmnz_v __builtin_msa_bmnz_v
```

## v16u8 __msa_bmnzi_b (v16u8 a, v16u8 b, int imm)

### Synopsis

```c
v16u8 __msa_bmnzi_b (v16u8 a, v16u8 b, int imm)
#include <msa.h>
Instruction: bmnzi.b
Builtin: __builtin_msa_bmnzi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:411
```

### Description

Use `a` as a bit mask and keep bits from `b` only where the mask bit is one; other bits become zero.

### Operation

```c
dst.bits = select_bits(mask=a, true_value=b, false_value=0);
```

### Header Mapping

```c
#define __msa_bmnzi_b __builtin_msa_bmnzi_b
```

## v16u8 __msa_bmz_v (v16u8 a, v16u8 b, v16u8 c)

### Synopsis

```c
v16u8 __msa_bmz_v (v16u8 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: bmz.v
Builtin: __builtin_msa_bmz_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:412
```

### Description

Use `a` as a bit mask and keep bits from `b` only where the mask bit is zero; masked bits become zero.

### Operation

```c
dst.bits = select_bits(mask=a, true_value=0, false_value=b);
```

### Header Mapping

```c
#define __msa_bmz_v __builtin_msa_bmz_v
```

## v16u8 __msa_bmzi_b (v16u8 a, v16u8 b, int imm)

### Synopsis

```c
v16u8 __msa_bmzi_b (v16u8 a, v16u8 b, int imm)
#include <msa.h>
Instruction: bmzi.b
Builtin: __builtin_msa_bmzi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:413
```

### Description

Use `a` as a bit mask and keep bits from `b` only where the mask bit is zero; masked bits become zero.

### Operation

```c
dst.bits = select_bits(mask=a, true_value=0, false_value=b);
```

### Header Mapping

```c
#define __msa_bmzi_b __builtin_msa_bmzi_b
```

## v16u8 __msa_bsel_v (v16u8 a, v16u8 b, v16u8 c)

### Synopsis

```c
v16u8 __msa_bsel_v (v16u8 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: bsel.v
Builtin: __builtin_msa_bsel_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:414
```

### Description

Use `a` as a bit mask: choose bits from `c` where the mask bit is one, otherwise from `b`.

### Operation

```c
dst.bits = (a.bits & c.bits) | (~a.bits & b.bits);
```

### Header Mapping

```c
#define __msa_bsel_v __builtin_msa_bsel_v
```

## v16u8 __msa_bseli_b (v16u8 a, v16u8 b, int imm)

### Synopsis

```c
v16u8 __msa_bseli_b (v16u8 a, v16u8 b, int imm)
#include <msa.h>
Instruction: bseli.b
Builtin: __builtin_msa_bseli_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:415
```

### Description

Use `a` as a bit mask: choose bits from `c` where the mask bit is one, otherwise from `b`.

### Operation

```c
dst.bits = (a.bits & c.bits) | (~a.bits & b.bits);
```

### Header Mapping

```c
#define __msa_bseli_b __builtin_msa_bseli_b
```

## v16u8 __msa_nor_v (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_nor_v (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: nor.v
Builtin: __builtin_msa_nor_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:406
```

### Description

Compute bitwise NOR across the whole vector, producing the inverse of OR.

### Operation

```c
dst.bits = ~(a.bits | imm_or_b);
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
#define __msa_nor_v __builtin_msa_nor_v
```

## v16u8 __msa_nori_b (v16u8 a, int imm)

### Synopsis

```c
v16u8 __msa_nori_b (v16u8 a, int imm)
#include <msa.h>
Instruction: nori.b
Builtin: __builtin_msa_nori_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:407
```

### Description

Compute bitwise NOR across the whole vector, producing the inverse of OR.

### Operation

```c
dst.bits = ~(a.bits | imm_or_b);
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
#define __msa_nori_b __builtin_msa_nori_b
```

## v16u8 __msa_or_v (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_or_v (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: or.v
Builtin: __builtin_msa_or_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:404
```

### Description

Compute bitwise OR across the whole vector; immediate forms OR each byte with the immediate mask.

### Operation

```c
dst.bits = a.bits | (imm_or_b);
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
#define __msa_or_v __builtin_msa_or_v
```

## v16u8 __msa_ori_b (v16u8 a, int imm)

### Synopsis

```c
v16u8 __msa_ori_b (v16u8 a, int imm)
#include <msa.h>
Instruction: ori.b
Builtin: __builtin_msa_ori_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:405
```

### Description

Compute bitwise OR across the whole vector; immediate forms OR each byte with the immediate mask.

### Operation

```c
dst.bits = a.bits | (imm_or_b);
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
#define __msa_ori_b __builtin_msa_ori_b
```

## v16u8 __msa_xor_v (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_xor_v (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: xor.v
Builtin: __builtin_msa_xor_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:408
```

### Description

Compute bitwise XOR across the whole vector; immediate forms XOR each byte with the immediate mask.

### Operation

```c
dst.bits = a.bits ^ (imm_or_b);
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
#define __msa_xor_v __builtin_msa_xor_v
```

## v16u8 __msa_xori_b (v16u8 a, int imm)

### Synopsis

```c
v16u8 __msa_xori_b (v16u8 a, int imm)
#include <msa.h>
Instruction: xori.b
Builtin: __builtin_msa_xori_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:409
```

### Description

Compute bitwise XOR across the whole vector; immediate forms XOR each byte with the immediate mask.

### Operation

```c
dst.bits = a.bits ^ (imm_or_b);
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
#define __msa_xori_b __builtin_msa_xori_b
```

