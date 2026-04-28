# Logical

Generated from `include/msa2.h`. This page contains 3 intrinsics.

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

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bsel.
// Operand order follows the intrinsic arguments in the header.
dst.bits = (a.bits & b.bits) | (~a.bits & c.bits);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_bsel ((v16i8) a, (v16i8) b, (v16i8) c);
```

## __m128i __msa2_vmultp_hxor_adj2_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hxor_adj2_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hxor.adj2.w2x.d
Builtin: __builtin_msa2_vmultp_hxor_adj2_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5019
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.hxor.adj2.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_hxor_adj2_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmultp_hxor_adj2_xacc_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hxor_adj2_xacc_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hxor.adj2.xacc.w2x.d
Builtin: __builtin_msa2_vmultp_hxor_adj2_xacc_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5039
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.hxor.adj2.xacc.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_hxor_adj2_xacc_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
```

