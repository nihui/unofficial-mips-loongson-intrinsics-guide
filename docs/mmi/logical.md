# Logical

Generated from `include/loongson-mmiintrin.h`. This page contains 8 intrinsics.

## int8x8_t pandn_sb (int8x8_t a, int8x8_t b)

### Synopsis

```c
int8x8_t pandn_sb (int8x8_t a, int8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.sb
Builtin: __builtin_loongson_pandn_sb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:195
```

### Description

Clear bits from `b` wherever `a` has one bits, i.e. compute `b & ~a` across the whole vector.

### Operation

```c
dst.bits = b.bits & ~a.bits;
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
return __builtin_loongson_pandn_sb (a, b);
```

## int64_t pandn_sd (int64_t a, int64_t b)

### Synopsis

```c
int64_t pandn_sd (int64_t a, int64_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.sd
Builtin: __builtin_loongson_pandn_sd
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:177
```

### Description

Clear bits from `b` wherever `a` has one bits, i.e. compute `b & ~a` across the whole vector.

### Operation

```c
dst.bits = b.bits & ~a.bits;
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
return __builtin_loongson_pandn_sd (a, b);
```

## int16x4_t pandn_sh (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t pandn_sh (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.sh
Builtin: __builtin_loongson_pandn_sh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:189
```

### Description

Clear bits from `b` wherever `a` has one bits, i.e. compute `b & ~a` across the whole vector.

### Operation

```c
dst.bits = b.bits & ~a.bits;
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
return __builtin_loongson_pandn_sh (a, b);
```

## int32x2_t pandn_sw (int32x2_t a, int32x2_t b)

### Synopsis

```c
int32x2_t pandn_sw (int32x2_t a, int32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.sw
Builtin: __builtin_loongson_pandn_sw
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:183
```

### Description

Clear bits from `b` wherever `a` has one bits, i.e. compute `b & ~a` across the whole vector.

### Operation

```c
dst.bits = b.bits & ~a.bits;
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
return __builtin_loongson_pandn_sw (a, b);
```

## uint8x8_t pandn_ub (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t pandn_ub (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.ub
Builtin: __builtin_loongson_pandn_ub
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:171
```

### Description

Clear bits from `b` wherever `a` has one bits, i.e. compute `b & ~a` across the whole vector.

### Operation

```c
dst.bits = b.bits & ~a.bits;
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
return __builtin_loongson_pandn_ub (a, b);
```

## uint64_t pandn_ud (uint64_t a, uint64_t b)

### Synopsis

```c
uint64_t pandn_ud (uint64_t a, uint64_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.ud
Builtin: __builtin_loongson_pandn_ud
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:153
```

### Description

Clear bits from `b` wherever `a` has one bits, i.e. compute `b & ~a` across the whole vector.

### Operation

```c
dst.bits = b.bits & ~a.bits;
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
return __builtin_loongson_pandn_ud (a, b);
```

## uint16x4_t pandn_uh (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t pandn_uh (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.uh
Builtin: __builtin_loongson_pandn_uh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:165
```

### Description

Clear bits from `b` wherever `a` has one bits, i.e. compute `b & ~a` across the whole vector.

### Operation

```c
dst.bits = b.bits & ~a.bits;
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
return __builtin_loongson_pandn_uh (a, b);
```

## uint32x2_t pandn_uw (uint32x2_t a, uint32x2_t b)

### Synopsis

```c
uint32x2_t pandn_uw (uint32x2_t a, uint32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.uw
Builtin: __builtin_loongson_pandn_uw
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:159
```

### Description

Clear bits from `b` wherever `a` has one bits, i.e. compute `b & ~a` across the whole vector.

### Operation

```c
dst.bits = b.bits & ~a.bits;
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
return __builtin_loongson_pandn_uw (a, b);
```

