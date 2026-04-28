# Integer Computation

Generated from `include/msa2.h`. This page contains 68 intrinsics.

## __m128i __msa2_dotp_s_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dotp_s_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: dotp.s.q
Builtin: __builtin_msa2_dotp_s_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:56
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dotp.s.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dotp_s_q ((v2i64) a, (v2i64) b);
```

## __m128i __msa2_dotp_u_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dotp_u_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: dotp.u.q
Builtin: __builtin_msa2_dotp_u_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:62
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dotp.u.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dotp_u_q ((v2u64) a, (v2u64) b);
```

## __m128i __msa2_dotp_us_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dotp_us_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: dotp.us.d
Builtin: __builtin_msa2_dotp_us_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:80
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dotp.us.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..0:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dotp_us_d ((v4u32) a, (v4i32) b);
```

## __m128i __msa2_dotp_us_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dotp_us_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: dotp.us.h
Builtin: __builtin_msa2_dotp_us_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:68
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dotp.us.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..3:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dotp_us_h ((v16u8) a, (v16i8) b);
```

## __m128i __msa2_dotp_us_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dotp_us_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: dotp.us.q
Builtin: __builtin_msa2_dotp_us_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:86
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dotp.us.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dotp_us_q ((v2u64) a, (v2i64) b);
```

## __m128i __msa2_dotp_us_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dotp_us_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: dotp.us.w
Builtin: __builtin_msa2_dotp_us_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:74
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dotp.us.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..1:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dotp_us_w ((v8u16) a, (v8i16) b);
```

## __m128i __msa2_dpadd_s_q (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dpadd_s_q (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: dpadd.s.q
Builtin: __builtin_msa2_dpadd_s_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:92
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpadd.s.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
acc = ret;
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dpadd_s_q ((v2i64) ret, (v2i64) a, (v2i64) b);
```

## __m128i __msa2_dpadd_u_q (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dpadd_u_q (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: dpadd.u.q
Builtin: __builtin_msa2_dpadd_u_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:98
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpadd.u.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
acc = ret;
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dpadd_u_q ((v2u64) ret, (v2u64) a, (v2u64) b);
```

## __m128i __msa2_dpadd_us_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dpadd_us_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: dpadd.us.d
Builtin: __builtin_msa2_dpadd_us_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:116
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpadd.us.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
for i in 0..0:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dpadd_us_d ((v2u64) ret, (v4u32) a, (v4i32) b);
```

## __m128i __msa2_dpadd_us_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dpadd_us_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: dpadd.us.h
Builtin: __builtin_msa2_dpadd_us_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:104
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpadd.us.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
for i in 0..3:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dpadd_us_h ((v8u16) ret, (v16u8) a, (v16i8) b);
```

## __m128i __msa2_dpadd_us_q (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dpadd_us_q (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: dpadd.us.q
Builtin: __builtin_msa2_dpadd_us_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:122
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpadd.us.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
acc = ret;
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dpadd_us_q ((v2u64) ret, (v2u64) a, (v2i64) b);
```

## __m128i __msa2_dpadd_us_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dpadd_us_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: dpadd.us.w
Builtin: __builtin_msa2_dpadd_us_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:110
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpadd.us.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
for i in 0..1:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dpadd_us_w ((v4u32) ret, (v8u16) a, (v8i16) b);
```

## __m128i __msa2_dpsub_s_q (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dpsub_s_q (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: dpsub.s.q
Builtin: __builtin_msa2_dpsub_s_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:128
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpsub.s.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
acc = ret;
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dpsub_s_q ((v2i64) ret, (v2i64) a, (v2i64) b);
```

## __m128i __msa2_dpsub_u_q (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_dpsub_u_q (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: dpsub.u.q
Builtin: __builtin_msa2_dpsub_u_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:134
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpsub.u.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
acc = ret;
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_dpsub_u_q ((v2u64) ret, (v2u64) a, (v2u64) b);
```

## __m128i __msa2_hadd_s_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_hadd_s_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: hadd.s.q
Builtin: __builtin_msa2_hadd_s_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:140
```

### Description

Compute horizontal adjacent add/subtract operations over signed 1 x 128-bit qword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hadd.s.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
for i in 0..0:
  dst.wide_lane[i] = widen(a.qword[2*i]) + widen(a.qword[2*i + 1]);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_hadd_s_q ((v2i64) a, (v2i64) b);
```

## __m128i __msa2_hadd_u_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_hadd_u_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: hadd.u.q
Builtin: __builtin_msa2_hadd_u_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:146
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 1 x 128-bit qword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hadd.u.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
for i in 0..0:
  dst.wide_lane[i] = widen(a.qword[2*i]) + widen(a.qword[2*i + 1]);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_hadd_u_q ((v2u64) a, (v2u64) b);
```

## __m128i __msa2_hsub_s_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_hsub_s_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: hsub.s.q
Builtin: __builtin_msa2_hsub_s_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:152
```

### Description

Compute horizontal adjacent add/subtract operations over signed 1 x 128-bit qword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hsub.s.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
for i in 0..0:
  dst.wide_lane[i] = widen(a.qword[2*i]) - widen(a.qword[2*i + 1]);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_hsub_s_q ((v2i64) a, (v2i64) b);
```

## __m128i __msa2_hsub_u_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_hsub_u_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: hsub.u.q
Builtin: __builtin_msa2_hsub_u_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:158
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 1 x 128-bit qword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hsub.u.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
for i in 0..0:
  dst.wide_lane[i] = widen(a.qword[2*i]) - widen(a.qword[2*i + 1]);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_hsub_u_q ((v2u64) a, (v2u64) b);
```

## __m128i __msa2_muhv_s_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_muhv_s_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: muhv.s.d
Builtin: __builtin_msa2_muhv_s_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:479
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for muhv.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_muhv_s_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_muhv_u_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_muhv_u_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: muhv.u.d
Builtin: __builtin_msa2_muhv_u_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:500
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for muhv.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_muhv_u_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_muhv_us_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_muhv_us_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: muhv.us.d
Builtin: __builtin_msa2_muhv_us_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:521
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for muhv.us.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_muhv_us_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_subssu_u_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_subssu_u_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: subssu.u.b
Builtin: __builtin_msa2_subssu_u_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:362
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subssu.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = unsigned_saturate(signed(a.byte[i]) - unsigned(b.byte[i]), 8);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_subssu_u_b ((v16i8) a, (v16u8) b);
```

## __m128i __msa2_subssu_u_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_subssu_u_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: subssu.u.d
Builtin: __builtin_msa2_subssu_u_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:380
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subssu.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = unsigned_saturate(signed(a.dword[i]) - unsigned(b.dword[i]), 64);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_subssu_u_d ((v2i64) a, (v2u64) b);
```

## __m128i __msa2_subssu_u_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_subssu_u_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: subssu.u.h
Builtin: __builtin_msa2_subssu_u_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:368
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subssu.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = unsigned_saturate(signed(a.half[i]) - unsigned(b.half[i]), 16);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_subssu_u_h ((v8i16) a, (v8u16) b);
```

## __m128i __msa2_subssu_u_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_subssu_u_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: subssu.u.w
Builtin: __builtin_msa2_subssu_u_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:374
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subssu.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = unsigned_saturate(signed(a.word[i]) - unsigned(b.word[i]), 32);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_subssu_u_w ((v4i32) a, (v4u32) b);
```

## __m128i __msa2_vadd_el0_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.q
Builtin: __builtin_msa2_vadd_el0_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:386
```

### Description

Compute lane-wise modular integer arithmetic on 1 x 128-bit qword lanes over selected source lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.el0.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
for i in 0..0:
  dst.qword[i] = a.qword[i] + b.qword[i];
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_vadd_el0_q ((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vadd_el0_s_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_s_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.s.wx.d
Builtin: __builtin_msa2_vadd_el0_s_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:830
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.el0.s.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_el0_s_wx_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vadd_el0_s_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_s_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.s.wx.h
Builtin: __builtin_msa2_vadd_el0_s_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:788
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.el0.s.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_el0_s_wx_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vadd_el0_s_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_s_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.s.wx.w
Builtin: __builtin_msa2_vadd_el0_s_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:809
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.el0.s.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_el0_s_wx_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vadd_el0_u_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_u_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.u.wx.d
Builtin: __builtin_msa2_vadd_el0_u_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:893
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.el0.u.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_el0_u_wx_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vadd_el0_u_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_u_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.u.wx.h
Builtin: __builtin_msa2_vadd_el0_u_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:851
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.el0.u.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_el0_u_wx_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vadd_el0_u_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_u_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.u.wx.w
Builtin: __builtin_msa2_vadd_el0_u_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:872
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.el0.u.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_el0_u_wx_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vadd_el0_us_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_us_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.us.wx.d
Builtin: __builtin_msa2_vadd_el0_us_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:956
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.el0.us.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_el0_us_wx_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vadd_el0_us_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_us_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.us.wx.h
Builtin: __builtin_msa2_vadd_el0_us_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:914
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.el0.us.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_el0_us_wx_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vadd_el0_us_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_el0_us_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.el0.us.wx.w
Builtin: __builtin_msa2_vadd_el0_us_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:935
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.el0.us.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_el0_us_wx_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmuhp_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmuhp_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmuhp.d
Builtin: __builtin_msa2_vmuhp_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2006
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmuhp.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmuhp_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmuhp_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmuhp_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmuhp.w
Builtin: __builtin_msa2_vmuhp_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1985
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmuhp.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = high_half(a.word[i] * b.word[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmuhp_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmuhp_xacc_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmuhp_xacc_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmuhp.xacc.d
Builtin: __builtin_msa2_vmuhp_xacc_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2088
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes over accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmuhp.xacc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
for i in 0..1:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmuhp_xacc_d((v2i64) ret, (v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmuhp_xacc_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmuhp_xacc_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmuhp.xacc.w
Builtin: __builtin_msa2_vmuhp_xacc_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2068
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes over accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmuhp.xacc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
for i in 0..3:
  dst.word[i] = high_half(a.word[i] * b.word[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmuhp_xacc_w((v4i32) ret, (v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmulp_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmulp_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmulp.d
Builtin: __builtin_msa2_vmulp_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2048
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulp.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = a.dword[i] * b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmulp_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmulp_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmulp_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmulp.w
Builtin: __builtin_msa2_vmulp_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2027
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulp.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmulp_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmulp_xacc_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmulp_xacc_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmulp.xacc.d
Builtin: __builtin_msa2_vmulp_xacc_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2128
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes over accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulp.xacc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
for i in 0..1:
  dst.dword[i] = a.dword[i] * b.dword[i];
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmulp_xacc_d((v2i64) ret, (v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmulp_xacc_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmulp_xacc_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmulp.xacc.w
Builtin: __builtin_msa2_vmulp_xacc_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2108
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes over accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmulp.xacc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
for i in 0..3:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmulp_xacc_w((v4i32) ret, (v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_el0_acc_s_wx_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_s_wx_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.acc.s.wx.d
Builtin: __builtin_msa2_vmult_el0_acc_s_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2377
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.acc.s.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_acc_s_wx_d((v2i64) ret, (v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_el0_acc_s_wx_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_s_wx_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.acc.s.wx.h
Builtin: __builtin_msa2_vmult_el0_acc_s_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2337
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.acc.s.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_acc_s_wx_h((v2i64) ret, (v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_el0_acc_s_wx_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_s_wx_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.acc.s.wx.w
Builtin: __builtin_msa2_vmult_el0_acc_s_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2357
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.acc.s.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_acc_s_wx_w((v2i64) ret, (v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_el0_acc_u_wx_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_u_wx_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.acc.u.wx.d
Builtin: __builtin_msa2_vmult_el0_acc_u_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2437
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.acc.u.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_acc_u_wx_d((v2u64) ret, (v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_el0_acc_u_wx_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_u_wx_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.acc.u.wx.h
Builtin: __builtin_msa2_vmult_el0_acc_u_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2397
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.acc.u.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_acc_u_wx_h((v2u64) ret, (v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_el0_acc_u_wx_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_u_wx_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.acc.u.wx.w
Builtin: __builtin_msa2_vmult_el0_acc_u_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2417
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.acc.u.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_acc_u_wx_w((v2u64) ret, (v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_el0_acc_us_wx_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_us_wx_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.acc.us.wx.d
Builtin: __builtin_msa2_vmult_el0_acc_us_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2497
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.acc.us.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_acc_us_wx_d((v2u64) ret, (v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_el0_acc_us_wx_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_us_wx_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.acc.us.wx.h
Builtin: __builtin_msa2_vmult_el0_acc_us_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2457
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.acc.us.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_acc_us_wx_h((v2u64) ret, (v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_el0_acc_us_wx_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_acc_us_wx_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.acc.us.wx.w
Builtin: __builtin_msa2_vmult_el0_acc_us_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2477
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.acc.us.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_acc_us_wx_w((v2u64) ret, (v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_el0_s_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_s_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.s.wx.d
Builtin: __builtin_msa2_vmult_el0_s_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2191
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.s.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_s_wx_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_el0_s_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_s_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.s.wx.h
Builtin: __builtin_msa2_vmult_el0_s_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2149
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.s.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_s_wx_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_el0_s_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_s_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.s.wx.w
Builtin: __builtin_msa2_vmult_el0_s_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2170
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.s.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_s_wx_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_el0_u_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_u_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.u.wx.d
Builtin: __builtin_msa2_vmult_el0_u_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2254
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.u.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_u_wx_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_el0_u_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_u_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.u.wx.h
Builtin: __builtin_msa2_vmult_el0_u_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2212
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.u.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_u_wx_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_el0_u_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_u_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.u.wx.w
Builtin: __builtin_msa2_vmult_el0_u_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2233
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.u.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_u_wx_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_el0_us_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_us_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.us.wx.d
Builtin: __builtin_msa2_vmult_el0_us_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2317
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.us.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_us_wx_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_el0_us_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_us_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.us.wx.h
Builtin: __builtin_msa2_vmult_el0_us_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2275
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.us.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_us_wx_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_el0_us_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_el0_us_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.el0.us.wx.w
Builtin: __builtin_msa2_vmult_el0_us_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2296
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.el0.us.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_el0_us_wx_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vsub_el0_q (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_q (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.q
Builtin: __builtin_msa2_vsub_el0_q
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:398
```

### Description

Compute lane-wise modular integer arithmetic on 1 x 128-bit qword lanes over selected source lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.el0.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 128-bit elements.
for i in 0..0:
  dst.qword[i] = a.qword[i] - b.qword[i];
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_vsub_el0_q ((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vsub_el0_s_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_s_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.s.wx.d
Builtin: __builtin_msa2_vsub_el0_s_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5430
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.el0.s.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_el0_s_wx_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vsub_el0_s_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_s_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.s.wx.h
Builtin: __builtin_msa2_vsub_el0_s_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5388
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.el0.s.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_el0_s_wx_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vsub_el0_s_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_s_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.s.wx.w
Builtin: __builtin_msa2_vsub_el0_s_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5409
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.el0.s.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_el0_s_wx_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vsub_el0_u_wx_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_u_wx_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.u.wx.d
Builtin: __builtin_msa2_vsub_el0_u_wx_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5493
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.el0.u.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_el0_u_wx_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vsub_el0_u_wx_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_u_wx_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.u.wx.h
Builtin: __builtin_msa2_vsub_el0_u_wx_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5451
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.el0.u.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_el0_u_wx_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vsub_el0_u_wx_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_el0_u_wx_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.el0.u.wx.w
Builtin: __builtin_msa2_vsub_el0_u_wx_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5472
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.el0.u.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_el0_u_wx_w((v4u32) a, (v4u32) b);
```

