# Integer Computation

Generated from `include/loongson-sxintrin.h`. This page contains 59 intrinsics.

## __m128i __lsx_vabs_b (__m128i _1)

### Synopsis

```c
__m128i __lsx_vabs_b (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vabs.b
Builtin: __builtin_lsx_vabs_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:63
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vabs.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
for i in 0..15:
  dst.byte[i] = abs(a.byte[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vabs_b((v16i8)_1);
```

## __m128i __lsx_vabs_d (__m128i _1)

### Synopsis

```c
__m128i __lsx_vabs_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vabs.d
Builtin: __builtin_lsx_vabs_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:84
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vabs.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.dword[i] = abs(a.dword[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vabs_d((v2i64)_1);
```

## __m128i __lsx_vabs_h (__m128i _1)

### Synopsis

```c
__m128i __lsx_vabs_h (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vabs.h
Builtin: __builtin_lsx_vabs_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:70
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vabs.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
for i in 0..7:
  dst.half[i] = abs(a.half[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vabs_h((v8i16)_1);
```

## __m128i __lsx_vabs_w (__m128i _1)

### Synopsis

```c
__m128i __lsx_vabs_w (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vabs.w
Builtin: __builtin_lsx_vabs_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:77
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vabs.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.word[i] = abs(a.word[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vabs_w((v4i32)_1);
```

## __m128i __lsx_vacc4b_u_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vacc4b_u_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vacc4b.u.h
Builtin: __builtin_lsx_vacc4b_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:343
```

### Description

Accumulate groups of 4 byte elements into wider unsigned destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vacc4b.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..3:
  sum = 0;
  for j in 0..3:
    sum += unsigned(a.byte[i * group + j]);
  dst.wide_lane[i] = sum;
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vacc4b_u_h((v16u8)_1, (v16u8)_2);
```

## __m128i __lsx_vacc8b_u_d (__m128i _1)

### Synopsis

```c
__m128i __lsx_vacc8b_u_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vacc8b.u.d
Builtin: __builtin_lsx_vacc8b_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:350
```

### Description

Accumulate groups of 8 byte elements into wider unsigned destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vacc8b.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  sum = 0;
  for j in 0..7:
    sum += unsigned(a.byte[i * group + j]);
  dst.wide_lane[i] = sum;
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vacc8b_u_d((v16u8)_1);
```

## __m128i __lsx_vaddx_s_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vaddx_s_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vaddx.s.d
Builtin: __builtin_lsx_vaddx_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:119
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vaddx.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] + b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vaddx_s_d((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vaddx_s_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vaddx_s_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vaddx.s.h
Builtin: __builtin_lsx_vaddx_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:133
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vaddx.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vaddx_s_h((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vaddx_s_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vaddx_s_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vaddx.s.w
Builtin: __builtin_lsx_vaddx_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:126
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vaddx.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vaddx_s_w((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vaddx_u_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vaddx_u_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vaddx.u.d
Builtin: __builtin_lsx_vaddx_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:140
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vaddx.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] + b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vaddx_u_d((v2u64)_1, (v2u64)_2);
```

## __m128i __lsx_vaddx_u_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vaddx_u_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vaddx.u.h
Builtin: __builtin_lsx_vaddx_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:154
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vaddx.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vaddx_u_h((v8u16)_1, (v8u16)_2);
```

## __m128i __lsx_vaddx_u_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vaddx_u_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vaddx.u.w
Builtin: __builtin_lsx_vaddx_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:147
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vaddx.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vaddx_u_w((v4u32)_1, (v4u32)_2);
```

## __m128i __lsx_vaddxs_s_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vaddxs_s_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vaddxs.s.d
Builtin: __builtin_lsx_vaddxs_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:203
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vaddxs.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] + b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vaddxs_s_d((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vaddxs_s_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vaddxs_s_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vaddxs.s.h
Builtin: __builtin_lsx_vaddxs_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:217
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vaddxs.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vaddxs_s_h((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vaddxs_s_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vaddxs_s_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vaddxs.s.w
Builtin: __builtin_lsx_vaddxs_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:210
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vaddxs.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vaddxs_s_w((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vaddxs_u_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vaddxs_u_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vaddxs.u.d
Builtin: __builtin_lsx_vaddxs_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:224
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vaddxs.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] + b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vaddxs_u_d((v2u64)_1, (v2u64)_2);
```

## __m128i __lsx_vaddxs_u_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vaddxs_u_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vaddxs.u.h
Builtin: __builtin_lsx_vaddxs_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:238
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vaddxs.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vaddxs_u_h((v8u16)_1, (v8u16)_2);
```

## __m128i __lsx_vaddxs_u_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vaddxs_u_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vaddxs.u.w
Builtin: __builtin_lsx_vaddxs_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:231
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vaddxs.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vaddxs_u_w((v4u32)_1, (v4u32)_2);
```

## __m128i __lsx_vmulhi_s_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulhi_s_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulhi.s.b
Builtin: __builtin_lsx_vmulhi_s_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:378
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulhi.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = high_half(a.byte[i] * b.byte[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulhi_s_b((v16i8)_1, (v16i8)_2);
```

## __m128i __lsx_vmulhi_s_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulhi_s_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulhi.s.d
Builtin: __builtin_lsx_vmulhi_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:357
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulhi.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulhi_s_d((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vmulhi_s_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulhi_s_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulhi.s.h
Builtin: __builtin_lsx_vmulhi_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:371
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulhi.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = high_half(a.half[i] * b.half[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulhi_s_h((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vmulhi_s_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulhi_s_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulhi.s.w
Builtin: __builtin_lsx_vmulhi_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:364
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulhi.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = high_half(a.word[i] * b.word[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulhi_s_w((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vmulhi_u_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulhi_u_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulhi.u.b
Builtin: __builtin_lsx_vmulhi_u_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:406
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulhi.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = high_half(a.byte[i] * b.byte[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulhi_u_b((v16u8)_1, (v16u8)_2);
```

## __m128i __lsx_vmulhi_u_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulhi_u_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulhi.u.d
Builtin: __builtin_lsx_vmulhi_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:385
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulhi.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulhi_u_d((v2u64)_1, (v2u64)_2);
```

## __m128i __lsx_vmulhi_u_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulhi_u_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulhi.u.h
Builtin: __builtin_lsx_vmulhi_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:399
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulhi.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = high_half(a.half[i] * b.half[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulhi_u_h((v8u16)_1, (v8u16)_2);
```

## __m128i __lsx_vmulhi_u_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulhi_u_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulhi.u.w
Builtin: __builtin_lsx_vmulhi_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:392
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulhi.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = high_half(a.word[i] * b.word[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulhi_u_w((v4u32)_1, (v4u32)_2);
```

## __m128i __lsx_vmulhi_us_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulhi_us_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulhi.us.b
Builtin: __builtin_lsx_vmulhi_us_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1376
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulhi.us.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = high_half(a.byte[i] * b.byte[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulhi_us_b((v16i8)_1, (v16i8)_2);
```

## __m128i __lsx_vmulhi_us_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulhi_us_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulhi.us.h
Builtin: __builtin_lsx_vmulhi_us_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1369
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulhi.us.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = high_half(a.half[i] * b.half[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulhi_us_h((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vmulhi_us_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulhi_us_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulhi.us.w
Builtin: __builtin_lsx_vmulhi_us_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1362
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulhi.us.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = high_half(a.word[i] * b.word[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulhi_us_w((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vmulx_s_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulx_s_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulx.s.d
Builtin: __builtin_lsx_vmulx_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:413
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulx.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] * b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulx_s_d((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vmulx_s_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulx_s_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulx.s.h
Builtin: __builtin_lsx_vmulx_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:427
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulx.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = a.half[i] * b.half[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulx_s_h((v16i8)_1, (v16i8)_2);
```

## __m128i __lsx_vmulx_s_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulx_s_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulx.s.w
Builtin: __builtin_lsx_vmulx_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:420
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulx.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulx_s_w((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vmulx_u_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulx_u_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulx.u.d
Builtin: __builtin_lsx_vmulx_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:434
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulx.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] * b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulx_u_d((v4u32)_1, (v4u32)_2);
```

## __m128i __lsx_vmulx_u_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulx_u_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulx.u.h
Builtin: __builtin_lsx_vmulx_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:448
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulx.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = a.half[i] * b.half[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulx_u_h((v16u8)_1, (v16u8)_2);
```

## __m128i __lsx_vmulx_u_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vmulx_u_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vmulx.u.w
Builtin: __builtin_lsx_vmulx_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:441
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulx.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vmulx_u_w((v8u16)_1, (v8u16)_2);
```

## __m128i __lsx_vneg_b (__m128i _1)

### Synopsis

```c
__m128i __lsx_vneg_b (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vneg.b
Builtin: __builtin_lsx_vneg_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:91
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vneg.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
for i in 0..15:
  dst.byte[i] = -a.byte[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vneg_b((v16i8)_1);
```

## __m128i __lsx_vneg_d (__m128i _1)

### Synopsis

```c
__m128i __lsx_vneg_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vneg.d
Builtin: __builtin_lsx_vneg_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:112
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vneg.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.dword[i] = -a.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vneg_d((v2i64)_1);
```

## __m128i __lsx_vneg_h (__m128i _1)

### Synopsis

```c
__m128i __lsx_vneg_h (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vneg.h
Builtin: __builtin_lsx_vneg_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:98
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vneg.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
for i in 0..7:
  dst.half[i] = -a.half[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vneg_h((v8i16)_1);
```

## __m128i __lsx_vneg_w (__m128i _1)

### Synopsis

```c
__m128i __lsx_vneg_w (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vneg.w
Builtin: __builtin_lsx_vneg_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:105
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vneg.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.word[i] = -a.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vneg_w((v4i32)_1);
```

## __m128i __lsx_vsubh_s_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubh_s_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubh.s.b
Builtin: __builtin_lsx_vsubh_s_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:308
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubh.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = a.byte[i] - b.byte[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubh_s_b((v16i8)_1, (v16i8)_2);
```

## __m128i __lsx_vsubh_s_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubh_s_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubh.s.d
Builtin: __builtin_lsx_vsubh_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:287
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubh.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubh_s_d((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vsubh_s_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubh_s_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubh.s.h
Builtin: __builtin_lsx_vsubh_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:301
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubh.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubh_s_h((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vsubh_s_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubh_s_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubh.s.w
Builtin: __builtin_lsx_vsubh_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:294
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubh.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubh_s_w((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vsubh_u_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubh_u_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubh.u.b
Builtin: __builtin_lsx_vsubh_u_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:336
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubh.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = a.byte[i] - b.byte[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubh_u_b((v16u8)_1, (v16u8)_2);
```

## __m128i __lsx_vsubh_u_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubh_u_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubh.u.d
Builtin: __builtin_lsx_vsubh_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:315
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubh.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubh_u_d((v2u64)_1, (v2u64)_2);
```

## __m128i __lsx_vsubh_u_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubh_u_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubh.u.h
Builtin: __builtin_lsx_vsubh_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:329
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubh.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubh_u_h((v8u16)_1, (v8u16)_2);
```

## __m128i __lsx_vsubh_u_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubh_u_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubh.u.w
Builtin: __builtin_lsx_vsubh_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:322
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubh.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubh_u_w((v4u32)_1, (v4u32)_2);
```

## __m128i __lsx_vsubx_s_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubx_s_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubx.s.d
Builtin: __builtin_lsx_vsubx_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:161
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubx.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubx_s_d((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vsubx_s_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubx_s_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubx.s.h
Builtin: __builtin_lsx_vsubx_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:175
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubx.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubx_s_h((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vsubx_s_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubx_s_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubx.s.w
Builtin: __builtin_lsx_vsubx_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:168
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubx.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubx_s_w((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vsubx_u_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubx_u_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubx.u.d
Builtin: __builtin_lsx_vsubx_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:182
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubx.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubx_u_d((v2u64)_1, (v2u64)_2);
```

## __m128i __lsx_vsubx_u_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubx_u_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubx.u.h
Builtin: __builtin_lsx_vsubx_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:196
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubx.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubx_u_h((v8u16)_1, (v8u16)_2);
```

## __m128i __lsx_vsubx_u_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubx_u_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubx.u.w
Builtin: __builtin_lsx_vsubx_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:189
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubx.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubx_u_w((v4u32)_1, (v4u32)_2);
```

## __m128i __lsx_vsubxs_s_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubxs_s_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubxs.s.d
Builtin: __builtin_lsx_vsubxs_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:245
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubxs.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubxs_s_d((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vsubxs_s_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubxs_s_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubxs.s.h
Builtin: __builtin_lsx_vsubxs_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:259
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubxs.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubxs_s_h((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vsubxs_s_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubxs_s_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubxs.s.w
Builtin: __builtin_lsx_vsubxs_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:252
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubxs.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubxs_s_w((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vsubxs_u_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubxs_u_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubxs.u.d
Builtin: __builtin_lsx_vsubxs_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:266
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubxs.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubxs_u_d((v2u64)_1, (v2u64)_2);
```

## __m128i __lsx_vsubxs_u_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubxs_u_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubxs.u.h
Builtin: __builtin_lsx_vsubxs_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:280
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubxs.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubxs_u_h((v8u16)_1, (v8u16)_2);
```

## __m128i __lsx_vsubxs_u_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsubxs_u_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsubxs.u.w
Builtin: __builtin_lsx_vsubxs_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:273
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsubxs.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsubxs_u_w((v4u32)_1, (v4u32)_2);
```

