# Logical

Generated from `include/loongson-sxintrin.h`. This page contains 1 intrinsic.

## __m128i __lsx_vandn_v (__m128i a, __m128i b)

### Synopsis

```c
__m128i __lsx_vandn_v (__m128i a, __m128i b)
#include <loongson-sxintrin.h>
Instruction: vandn.v
Builtin: __builtin_lsx_vandn_v
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:56
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
return (__m128i)__builtin_lsx_vandn_v((v16u8)a, (v16u8)b);
```

