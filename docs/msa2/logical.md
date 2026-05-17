# Logical

Generated from `include/msa2.h`. This page contains 1 intrinsic.

<span id="intrinsic-__msa2_bsel"></span>

## __m128i __msa2_bsel (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_bsel (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: bsel
Builtin: __builtin_msa2_bsel
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:50
```

### Description

Use `a` as a bit mask: choose bits from `c` where the mask bit is one, otherwise from `b`.

### Operation

```c
dst.bits = (a.bits & c.bits) | (~a.bits & b.bits);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_bsel ((v16i8) a, (v16i8) b, (v16i8) c);
```

