# Integer Comparison

Generated from `include/loongson-sxintrin.h`. This page contains 3 intrinsics.

## __m128i __lsx_vhminposh_u_d (__m128i _1)

### Synopsis

```c
__m128i __lsx_vhminposh_u_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vhminposh.u.d
Builtin: __builtin_lsx_vhminposh_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:785
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vhminposh.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.dword[i] = min(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vhminposh_u_d((v8i16)_1);
```

## __m128i __lsx_vhminposh_u_q (__m128i _1)

### Synopsis

```c
__m128i __lsx_vhminposh_u_q (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vhminposh.u.q
Builtin: __builtin_lsx_vhminposh_u_q
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:799
```

### Description

Compute lane-wise unsigned integer arithmetic on 1 x 128-bit qword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vhminposh.u.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
a = _1;
for i in 0..0:
  dst.qword[i] = min(a.qword[i], b.qword[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vhminposh_u_q((v8i16)_1);
```

## __m128i __lsx_vhminposh_u_w (__m128i _1)

### Synopsis

```c
__m128i __lsx_vhminposh_u_w (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vhminposh.u.w
Builtin: __builtin_lsx_vhminposh_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:792
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vhminposh.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.word[i] = min(a.word[i], b.word[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vhminposh_u_w((v8i16)_1);
```

