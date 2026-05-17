# Logical

Generated from `include/loongson-sxintrin.h`. This page contains 1 intrinsic.

<span id="intrinsic-__lsx_vandn_v"></span>

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

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m128i)__builtin_lsx_vandn_v((v16u8)a, (v16u8)b);
```

