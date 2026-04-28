# Integer Comparison

Generated from `include/msa.h`. This page contains 80 intrinsics.

## v16i8 __msa_ceq_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_ceq_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: ceq.b
Builtin: __builtin_msa_ceq_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:188
```

### Description

Compare modular 16 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ceq.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = (a.byte[i] == b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_ceq_b __builtin_msa_ceq_b
```

## v2i64 __msa_ceq_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_ceq_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: ceq.d
Builtin: __builtin_msa_ceq_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:191
```

### Description

Compare modular 2 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ceq.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = (a.dword[i] == b.dword[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_ceq_d __builtin_msa_ceq_d
```

## v8i16 __msa_ceq_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_ceq_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: ceq.h
Builtin: __builtin_msa_ceq_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:189
```

### Description

Compare modular 8 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ceq.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = (a.half[i] == b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_ceq_h __builtin_msa_ceq_h
```

## v4i32 __msa_ceq_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_ceq_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: ceq.w
Builtin: __builtin_msa_ceq_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:190
```

### Description

Compare modular 4 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ceq.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = (a.word[i] == b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_ceq_w __builtin_msa_ceq_w
```

## v16i8 __msa_ceqi_b (v16i8 a, int imm_n16_15)

### Synopsis

```c
v16i8 __msa_ceqi_b (v16i8 a, int imm_n16_15)
#include <msa.h>
Instruction: ceqi.b
Builtin: __builtin_msa_ceqi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:192
```

### Description

Compare modular 16 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ceqi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm_n16_15;
for i in 0..15:
  dst.byte[i] = (a.byte[i] == imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_ceqi_b __builtin_msa_ceqi_b
```

## v2i64 __msa_ceqi_d (v2i64 a, int imm_n16_15)

### Synopsis

```c
v2i64 __msa_ceqi_d (v2i64 a, int imm_n16_15)
#include <msa.h>
Instruction: ceqi.d
Builtin: __builtin_msa_ceqi_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:195
```

### Description

Compare modular 2 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ceqi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm_n16_15;
for i in 0..1:
  dst.dword[i] = (a.dword[i] == imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_ceqi_d __builtin_msa_ceqi_d
```

## v8i16 __msa_ceqi_h (v8i16 a, int imm_n16_15)

### Synopsis

```c
v8i16 __msa_ceqi_h (v8i16 a, int imm_n16_15)
#include <msa.h>
Instruction: ceqi.h
Builtin: __builtin_msa_ceqi_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:193
```

### Description

Compare modular 8 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ceqi.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm_n16_15;
for i in 0..7:
  dst.half[i] = (a.half[i] == imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_ceqi_h __builtin_msa_ceqi_h
```

## v4i32 __msa_ceqi_w (v4i32 a, int imm_n16_15)

### Synopsis

```c
v4i32 __msa_ceqi_w (v4i32 a, int imm_n16_15)
#include <msa.h>
Instruction: ceqi.w
Builtin: __builtin_msa_ceqi_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:194
```

### Description

Compare modular 4 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ceqi.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm_n16_15;
for i in 0..3:
  dst.word[i] = (a.word[i] == imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_ceqi_w __builtin_msa_ceqi_w
```

## v16i8 __msa_cle_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_cle_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: cle.s.b
Builtin: __builtin_msa_cle_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:212
```

### Description

Compare signed 16 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for cle.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = (a.byte[i] <= b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_cle_s_b __builtin_msa_cle_s_b
```

## v2i64 __msa_cle_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_cle_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: cle.s.d
Builtin: __builtin_msa_cle_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:215
```

### Description

Compare signed 2 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for cle.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = (a.dword[i] <= b.dword[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_cle_s_d __builtin_msa_cle_s_d
```

## v8i16 __msa_cle_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_cle_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: cle.s.h
Builtin: __builtin_msa_cle_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:213
```

### Description

Compare signed 8 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for cle.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = (a.half[i] <= b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_cle_s_h __builtin_msa_cle_s_h
```

## v4i32 __msa_cle_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_cle_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: cle.s.w
Builtin: __builtin_msa_cle_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:214
```

### Description

Compare signed 4 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for cle.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = (a.word[i] <= b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_cle_s_w __builtin_msa_cle_s_w
```

## v16i8 __msa_cle_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16i8 __msa_cle_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: cle.u.b
Builtin: __builtin_msa_cle_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:220
```

### Description

Compare unsigned 16 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for cle.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = (a.byte[i] <= b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_cle_u_b __builtin_msa_cle_u_b
```

## v2i64 __msa_cle_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2i64 __msa_cle_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: cle.u.d
Builtin: __builtin_msa_cle_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:223
```

### Description

Compare unsigned 2 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for cle.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = (a.dword[i] <= b.dword[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_cle_u_d __builtin_msa_cle_u_d
```

## v8i16 __msa_cle_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8i16 __msa_cle_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: cle.u.h
Builtin: __builtin_msa_cle_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:221
```

### Description

Compare unsigned 8 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for cle.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = (a.half[i] <= b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_cle_u_h __builtin_msa_cle_u_h
```

## v4i32 __msa_cle_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4i32 __msa_cle_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: cle.u.w
Builtin: __builtin_msa_cle_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:222
```

### Description

Compare unsigned 4 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for cle.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = (a.word[i] <= b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_cle_u_w __builtin_msa_cle_u_w
```

## v16i8 __msa_clei_s_b (v16i8 a, int imm_n16_15)

### Synopsis

```c
v16i8 __msa_clei_s_b (v16i8 a, int imm_n16_15)
#include <msa.h>
Instruction: clei.s.b
Builtin: __builtin_msa_clei_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:216
```

### Description

Compare signed 16 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clei.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm_n16_15;
for i in 0..15:
  dst.byte[i] = (a.byte[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clei_s_b __builtin_msa_clei_s_b
```

## v2i64 __msa_clei_s_d (v2i64 a, int imm_n16_15)

### Synopsis

```c
v2i64 __msa_clei_s_d (v2i64 a, int imm_n16_15)
#include <msa.h>
Instruction: clei.s.d
Builtin: __builtin_msa_clei_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:219
```

### Description

Compare signed 2 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clei.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm_n16_15;
for i in 0..1:
  dst.dword[i] = (a.dword[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clei_s_d __builtin_msa_clei_s_d
```

## v8i16 __msa_clei_s_h (v8i16 a, int imm_n16_15)

### Synopsis

```c
v8i16 __msa_clei_s_h (v8i16 a, int imm_n16_15)
#include <msa.h>
Instruction: clei.s.h
Builtin: __builtin_msa_clei_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:217
```

### Description

Compare signed 8 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clei.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm_n16_15;
for i in 0..7:
  dst.half[i] = (a.half[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clei_s_h __builtin_msa_clei_s_h
```

## v4i32 __msa_clei_s_w (v4i32 a, int imm_n16_15)

### Synopsis

```c
v4i32 __msa_clei_s_w (v4i32 a, int imm_n16_15)
#include <msa.h>
Instruction: clei.s.w
Builtin: __builtin_msa_clei_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:218
```

### Description

Compare signed 4 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clei.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm_n16_15;
for i in 0..3:
  dst.word[i] = (a.word[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clei_s_w __builtin_msa_clei_s_w
```

## v16i8 __msa_clei_u_b (v16u8 a, int imm0_31)

### Synopsis

```c
v16i8 __msa_clei_u_b (v16u8 a, int imm0_31)
#include <msa.h>
Instruction: clei.u.b
Builtin: __builtin_msa_clei_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:224
```

### Description

Compare unsigned 16 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clei.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_31;
for i in 0..15:
  dst.byte[i] = (a.byte[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clei_u_b __builtin_msa_clei_u_b
```

## v2i64 __msa_clei_u_d (v2u64 a, int imm0_31)

### Synopsis

```c
v2i64 __msa_clei_u_d (v2u64 a, int imm0_31)
#include <msa.h>
Instruction: clei.u.d
Builtin: __builtin_msa_clei_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:227
```

### Description

Compare unsigned 2 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clei.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_31;
for i in 0..1:
  dst.dword[i] = (a.dword[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clei_u_d __builtin_msa_clei_u_d
```

## v8i16 __msa_clei_u_h (v8u16 a, int imm0_31)

### Synopsis

```c
v8i16 __msa_clei_u_h (v8u16 a, int imm0_31)
#include <msa.h>
Instruction: clei.u.h
Builtin: __builtin_msa_clei_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:225
```

### Description

Compare unsigned 8 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clei.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_31;
for i in 0..7:
  dst.half[i] = (a.half[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clei_u_h __builtin_msa_clei_u_h
```

## v4i32 __msa_clei_u_w (v4u32 a, int imm0_31)

### Synopsis

```c
v4i32 __msa_clei_u_w (v4u32 a, int imm0_31)
#include <msa.h>
Instruction: clei.u.w
Builtin: __builtin_msa_clei_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:226
```

### Description

Compare unsigned 4 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clei.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = (a.word[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clei_u_w __builtin_msa_clei_u_w
```

## v16i8 __msa_clt_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_clt_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: clt.s.b
Builtin: __builtin_msa_clt_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:196
```

### Description

Compare signed 16 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clt.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = (a.byte[i] < b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clt_s_b __builtin_msa_clt_s_b
```

## v2i64 __msa_clt_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_clt_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: clt.s.d
Builtin: __builtin_msa_clt_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:199
```

### Description

Compare signed 2 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clt.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = (a.dword[i] < b.dword[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clt_s_d __builtin_msa_clt_s_d
```

## v8i16 __msa_clt_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_clt_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: clt.s.h
Builtin: __builtin_msa_clt_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:197
```

### Description

Compare signed 8 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clt.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = (a.half[i] < b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clt_s_h __builtin_msa_clt_s_h
```

## v4i32 __msa_clt_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_clt_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: clt.s.w
Builtin: __builtin_msa_clt_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:198
```

### Description

Compare signed 4 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clt.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = (a.word[i] < b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clt_s_w __builtin_msa_clt_s_w
```

## v16i8 __msa_clt_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16i8 __msa_clt_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: clt.u.b
Builtin: __builtin_msa_clt_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:204
```

### Description

Compare unsigned 16 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clt.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = (a.byte[i] < b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clt_u_b __builtin_msa_clt_u_b
```

## v2i64 __msa_clt_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2i64 __msa_clt_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: clt.u.d
Builtin: __builtin_msa_clt_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:207
```

### Description

Compare unsigned 2 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clt.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = (a.dword[i] < b.dword[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clt_u_d __builtin_msa_clt_u_d
```

## v8i16 __msa_clt_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8i16 __msa_clt_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: clt.u.h
Builtin: __builtin_msa_clt_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:205
```

### Description

Compare unsigned 8 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clt.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = (a.half[i] < b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clt_u_h __builtin_msa_clt_u_h
```

## v4i32 __msa_clt_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4i32 __msa_clt_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: clt.u.w
Builtin: __builtin_msa_clt_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:206
```

### Description

Compare unsigned 4 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clt.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = (a.word[i] < b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clt_u_w __builtin_msa_clt_u_w
```

## v16i8 __msa_clti_s_b (v16i8 a, int imm_n16_15)

### Synopsis

```c
v16i8 __msa_clti_s_b (v16i8 a, int imm_n16_15)
#include <msa.h>
Instruction: clti.s.b
Builtin: __builtin_msa_clti_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:200
```

### Description

Compare signed 16 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clti.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm_n16_15;
for i in 0..15:
  dst.byte[i] = (a.byte[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clti_s_b __builtin_msa_clti_s_b
```

## v2i64 __msa_clti_s_d (v2i64 a, int imm_n16_15)

### Synopsis

```c
v2i64 __msa_clti_s_d (v2i64 a, int imm_n16_15)
#include <msa.h>
Instruction: clti.s.d
Builtin: __builtin_msa_clti_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:203
```

### Description

Compare signed 2 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clti.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm_n16_15;
for i in 0..1:
  dst.dword[i] = (a.dword[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clti_s_d __builtin_msa_clti_s_d
```

## v8i16 __msa_clti_s_h (v8i16 a, int imm_n16_15)

### Synopsis

```c
v8i16 __msa_clti_s_h (v8i16 a, int imm_n16_15)
#include <msa.h>
Instruction: clti.s.h
Builtin: __builtin_msa_clti_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:201
```

### Description

Compare signed 8 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clti.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm_n16_15;
for i in 0..7:
  dst.half[i] = (a.half[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clti_s_h __builtin_msa_clti_s_h
```

## v4i32 __msa_clti_s_w (v4i32 a, int imm_n16_15)

### Synopsis

```c
v4i32 __msa_clti_s_w (v4i32 a, int imm_n16_15)
#include <msa.h>
Instruction: clti.s.w
Builtin: __builtin_msa_clti_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:202
```

### Description

Compare signed 4 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clti.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm_n16_15;
for i in 0..3:
  dst.word[i] = (a.word[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clti_s_w __builtin_msa_clti_s_w
```

## v16i8 __msa_clti_u_b (v16u8 a, int imm0_31)

### Synopsis

```c
v16i8 __msa_clti_u_b (v16u8 a, int imm0_31)
#include <msa.h>
Instruction: clti.u.b
Builtin: __builtin_msa_clti_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:208
```

### Description

Compare unsigned 16 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clti.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_31;
for i in 0..15:
  dst.byte[i] = (a.byte[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clti_u_b __builtin_msa_clti_u_b
```

## v2i64 __msa_clti_u_d (v2u64 a, int imm0_31)

### Synopsis

```c
v2i64 __msa_clti_u_d (v2u64 a, int imm0_31)
#include <msa.h>
Instruction: clti.u.d
Builtin: __builtin_msa_clti_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:211
```

### Description

Compare unsigned 2 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clti.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_31;
for i in 0..1:
  dst.dword[i] = (a.dword[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clti_u_d __builtin_msa_clti_u_d
```

## v8i16 __msa_clti_u_h (v8u16 a, int imm0_31)

### Synopsis

```c
v8i16 __msa_clti_u_h (v8u16 a, int imm0_31)
#include <msa.h>
Instruction: clti.u.h
Builtin: __builtin_msa_clti_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:209
```

### Description

Compare unsigned 8 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clti.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_31;
for i in 0..7:
  dst.half[i] = (a.half[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clti_u_h __builtin_msa_clti_u_h
```

## v4i32 __msa_clti_u_w (v4u32 a, int imm0_31)

### Synopsis

```c
v4i32 __msa_clti_u_w (v4u32 a, int imm0_31)
#include <msa.h>
Instruction: clti.u.w
Builtin: __builtin_msa_clti_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:210
```

### Description

Compare unsigned 4 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for clti.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = (a.word[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_clti_u_w __builtin_msa_clti_u_w
```

## v16i8 __msa_max_a_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_max_a_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: max.a.b
Builtin: __builtin_msa_max_a_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:180
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for max.a.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = max(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
#define __msa_max_a_b __builtin_msa_max_a_b
```

## v2i64 __msa_max_a_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_max_a_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: max.a.d
Builtin: __builtin_msa_max_a_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:183
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for max.a.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = max(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
#define __msa_max_a_d __builtin_msa_max_a_d
```

## v8i16 __msa_max_a_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_max_a_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: max.a.h
Builtin: __builtin_msa_max_a_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:181
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for max.a.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = max(a.half[i], b.half[i]);
```

### Header Mapping

```c
#define __msa_max_a_h __builtin_msa_max_a_h
```

## v4i32 __msa_max_a_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_max_a_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: max.a.w
Builtin: __builtin_msa_max_a_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:182
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for max.a.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = max(a.word[i], b.word[i]);
```

### Header Mapping

```c
#define __msa_max_a_w __builtin_msa_max_a_w
```

## v16i8 __msa_max_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_max_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: max.s.b
Builtin: __builtin_msa_max_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:148
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for max.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = max(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
#define __msa_max_s_b __builtin_msa_max_s_b
```

## v2i64 __msa_max_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_max_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: max.s.d
Builtin: __builtin_msa_max_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:151
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for max.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = max(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
#define __msa_max_s_d __builtin_msa_max_s_d
```

## v8i16 __msa_max_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_max_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: max.s.h
Builtin: __builtin_msa_max_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:149
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for max.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = max(a.half[i], b.half[i]);
```

### Header Mapping

```c
#define __msa_max_s_h __builtin_msa_max_s_h
```

## v4i32 __msa_max_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_max_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: max.s.w
Builtin: __builtin_msa_max_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:150
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for max.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = max(a.word[i], b.word[i]);
```

### Header Mapping

```c
#define __msa_max_s_w __builtin_msa_max_s_w
```

## v16u8 __msa_max_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_max_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: max.u.b
Builtin: __builtin_msa_max_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:156
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for max.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = max(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
#define __msa_max_u_b __builtin_msa_max_u_b
```

## v2u64 __msa_max_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_max_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: max.u.d
Builtin: __builtin_msa_max_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:159
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for max.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = max(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
#define __msa_max_u_d __builtin_msa_max_u_d
```

## v8u16 __msa_max_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_max_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: max.u.h
Builtin: __builtin_msa_max_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:157
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for max.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = max(a.half[i], b.half[i]);
```

### Header Mapping

```c
#define __msa_max_u_h __builtin_msa_max_u_h
```

## v4u32 __msa_max_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_max_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: max.u.w
Builtin: __builtin_msa_max_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:158
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for max.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = max(a.word[i], b.word[i]);
```

### Header Mapping

```c
#define __msa_max_u_w __builtin_msa_max_u_w
```

## v16i8 __msa_maxi_s_b (v16i8 a, int imm_n16_15)

### Synopsis

```c
v16i8 __msa_maxi_s_b (v16i8 a, int imm_n16_15)
#include <msa.h>
Instruction: maxi.s.b
Builtin: __builtin_msa_maxi_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:152
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maxi.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm_n16_15;
for i in 0..15:
  dst.byte[i] = max(a.byte[i], imm);
```

### Header Mapping

```c
#define __msa_maxi_s_b __builtin_msa_maxi_s_b
```

## v2i64 __msa_maxi_s_d (v2i64 a, int imm_n16_15)

### Synopsis

```c
v2i64 __msa_maxi_s_d (v2i64 a, int imm_n16_15)
#include <msa.h>
Instruction: maxi.s.d
Builtin: __builtin_msa_maxi_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:155
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maxi.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm_n16_15;
for i in 0..1:
  dst.dword[i] = max(a.dword[i], imm);
```

### Header Mapping

```c
#define __msa_maxi_s_d __builtin_msa_maxi_s_d
```

## v8i16 __msa_maxi_s_h (v8i16 a, int imm_n16_15)

### Synopsis

```c
v8i16 __msa_maxi_s_h (v8i16 a, int imm_n16_15)
#include <msa.h>
Instruction: maxi.s.h
Builtin: __builtin_msa_maxi_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:153
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maxi.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm_n16_15;
for i in 0..7:
  dst.half[i] = max(a.half[i], imm);
```

### Header Mapping

```c
#define __msa_maxi_s_h __builtin_msa_maxi_s_h
```

## v4i32 __msa_maxi_s_w (v4i32 a, int imm_n16_15)

### Synopsis

```c
v4i32 __msa_maxi_s_w (v4i32 a, int imm_n16_15)
#include <msa.h>
Instruction: maxi.s.w
Builtin: __builtin_msa_maxi_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:154
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maxi.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm_n16_15;
for i in 0..3:
  dst.word[i] = max(a.word[i], imm);
```

### Header Mapping

```c
#define __msa_maxi_s_w __builtin_msa_maxi_s_w
```

## v16u8 __msa_maxi_u_b (v16u8 a, int imm0_31)

### Synopsis

```c
v16u8 __msa_maxi_u_b (v16u8 a, int imm0_31)
#include <msa.h>
Instruction: maxi.u.b
Builtin: __builtin_msa_maxi_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:160
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maxi.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_31;
for i in 0..15:
  dst.byte[i] = max(a.byte[i], imm);
```

### Header Mapping

```c
#define __msa_maxi_u_b __builtin_msa_maxi_u_b
```

## v2u64 __msa_maxi_u_d (v2u64 a, int imm0_31)

### Synopsis

```c
v2u64 __msa_maxi_u_d (v2u64 a, int imm0_31)
#include <msa.h>
Instruction: maxi.u.d
Builtin: __builtin_msa_maxi_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:163
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maxi.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_31;
for i in 0..1:
  dst.dword[i] = max(a.dword[i], imm);
```

### Header Mapping

```c
#define __msa_maxi_u_d __builtin_msa_maxi_u_d
```

## v8u16 __msa_maxi_u_h (v8u16 a, int imm0_31)

### Synopsis

```c
v8u16 __msa_maxi_u_h (v8u16 a, int imm0_31)
#include <msa.h>
Instruction: maxi.u.h
Builtin: __builtin_msa_maxi_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:161
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maxi.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_31;
for i in 0..7:
  dst.half[i] = max(a.half[i], imm);
```

### Header Mapping

```c
#define __msa_maxi_u_h __builtin_msa_maxi_u_h
```

## v4u32 __msa_maxi_u_w (v4u32 a, int imm0_31)

### Synopsis

```c
v4u32 __msa_maxi_u_w (v4u32 a, int imm0_31)
#include <msa.h>
Instruction: maxi.u.w
Builtin: __builtin_msa_maxi_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:162
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maxi.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = max(a.word[i], imm);
```

### Header Mapping

```c
#define __msa_maxi_u_w __builtin_msa_maxi_u_w
```

## v16i8 __msa_min_a_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_min_a_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: min.a.b
Builtin: __builtin_msa_min_a_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:184
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for min.a.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = min(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
#define __msa_min_a_b __builtin_msa_min_a_b
```

## v2i64 __msa_min_a_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_min_a_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: min.a.d
Builtin: __builtin_msa_min_a_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:187
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for min.a.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = min(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
#define __msa_min_a_d __builtin_msa_min_a_d
```

## v8i16 __msa_min_a_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_min_a_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: min.a.h
Builtin: __builtin_msa_min_a_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:185
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for min.a.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = min(a.half[i], b.half[i]);
```

### Header Mapping

```c
#define __msa_min_a_h __builtin_msa_min_a_h
```

## v4i32 __msa_min_a_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_min_a_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: min.a.w
Builtin: __builtin_msa_min_a_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:186
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for min.a.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = min(a.word[i], b.word[i]);
```

### Header Mapping

```c
#define __msa_min_a_w __builtin_msa_min_a_w
```

## v16i8 __msa_min_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_min_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: min.s.b
Builtin: __builtin_msa_min_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:164
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for min.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = min(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
#define __msa_min_s_b __builtin_msa_min_s_b
```

## v2i64 __msa_min_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_min_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: min.s.d
Builtin: __builtin_msa_min_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:167
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for min.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = min(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
#define __msa_min_s_d __builtin_msa_min_s_d
```

## v8i16 __msa_min_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_min_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: min.s.h
Builtin: __builtin_msa_min_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:165
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for min.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = min(a.half[i], b.half[i]);
```

### Header Mapping

```c
#define __msa_min_s_h __builtin_msa_min_s_h
```

## v4i32 __msa_min_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_min_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: min.s.w
Builtin: __builtin_msa_min_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:166
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for min.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = min(a.word[i], b.word[i]);
```

### Header Mapping

```c
#define __msa_min_s_w __builtin_msa_min_s_w
```

## v16u8 __msa_min_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_min_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: min.u.b
Builtin: __builtin_msa_min_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:172
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for min.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = min(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
#define __msa_min_u_b __builtin_msa_min_u_b
```

## v2u64 __msa_min_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_min_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: min.u.d
Builtin: __builtin_msa_min_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:175
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for min.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = min(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
#define __msa_min_u_d __builtin_msa_min_u_d
```

## v8u16 __msa_min_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_min_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: min.u.h
Builtin: __builtin_msa_min_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:173
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for min.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = min(a.half[i], b.half[i]);
```

### Header Mapping

```c
#define __msa_min_u_h __builtin_msa_min_u_h
```

## v4u32 __msa_min_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_min_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: min.u.w
Builtin: __builtin_msa_min_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:174
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for min.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = min(a.word[i], b.word[i]);
```

### Header Mapping

```c
#define __msa_min_u_w __builtin_msa_min_u_w
```

## v16i8 __msa_mini_s_b (v16i8 a, int imm_n16_15)

### Synopsis

```c
v16i8 __msa_mini_s_b (v16i8 a, int imm_n16_15)
#include <msa.h>
Instruction: mini.s.b
Builtin: __builtin_msa_mini_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:168
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mini.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm_n16_15;
for i in 0..15:
  dst.byte[i] = min(a.byte[i], imm);
```

### Header Mapping

```c
#define __msa_mini_s_b __builtin_msa_mini_s_b
```

## v2i64 __msa_mini_s_d (v2i64 a, int imm_n16_15)

### Synopsis

```c
v2i64 __msa_mini_s_d (v2i64 a, int imm_n16_15)
#include <msa.h>
Instruction: mini.s.d
Builtin: __builtin_msa_mini_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:171
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mini.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm_n16_15;
for i in 0..1:
  dst.dword[i] = min(a.dword[i], imm);
```

### Header Mapping

```c
#define __msa_mini_s_d __builtin_msa_mini_s_d
```

## v8i16 __msa_mini_s_h (v8i16 a, int imm_n16_15)

### Synopsis

```c
v8i16 __msa_mini_s_h (v8i16 a, int imm_n16_15)
#include <msa.h>
Instruction: mini.s.h
Builtin: __builtin_msa_mini_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:169
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mini.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm_n16_15;
for i in 0..7:
  dst.half[i] = min(a.half[i], imm);
```

### Header Mapping

```c
#define __msa_mini_s_h __builtin_msa_mini_s_h
```

## v4i32 __msa_mini_s_w (v4i32 a, int imm_n16_15)

### Synopsis

```c
v4i32 __msa_mini_s_w (v4i32 a, int imm_n16_15)
#include <msa.h>
Instruction: mini.s.w
Builtin: __builtin_msa_mini_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:170
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mini.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm_n16_15;
for i in 0..3:
  dst.word[i] = min(a.word[i], imm);
```

### Header Mapping

```c
#define __msa_mini_s_w __builtin_msa_mini_s_w
```

## v16u8 __msa_mini_u_b (v16u8 a, int imm0_31)

### Synopsis

```c
v16u8 __msa_mini_u_b (v16u8 a, int imm0_31)
#include <msa.h>
Instruction: mini.u.b
Builtin: __builtin_msa_mini_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:176
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mini.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_31;
for i in 0..15:
  dst.byte[i] = min(a.byte[i], imm);
```

### Header Mapping

```c
#define __msa_mini_u_b __builtin_msa_mini_u_b
```

## v2u64 __msa_mini_u_d (v2u64 a, int imm0_31)

### Synopsis

```c
v2u64 __msa_mini_u_d (v2u64 a, int imm0_31)
#include <msa.h>
Instruction: mini.u.d
Builtin: __builtin_msa_mini_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:179
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mini.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_31;
for i in 0..1:
  dst.dword[i] = min(a.dword[i], imm);
```

### Header Mapping

```c
#define __msa_mini_u_d __builtin_msa_mini_u_d
```

## v8u16 __msa_mini_u_h (v8u16 a, int imm0_31)

### Synopsis

```c
v8u16 __msa_mini_u_h (v8u16 a, int imm0_31)
#include <msa.h>
Instruction: mini.u.h
Builtin: __builtin_msa_mini_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:177
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mini.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_31;
for i in 0..7:
  dst.half[i] = min(a.half[i], imm);
```

### Header Mapping

```c
#define __msa_mini_u_h __builtin_msa_mini_u_h
```

## v4u32 __msa_mini_u_w (v4u32 a, int imm0_31)

### Synopsis

```c
v4u32 __msa_mini_u_w (v4u32 a, int imm0_31)
#include <msa.h>
Instruction: mini.u.w
Builtin: __builtin_msa_mini_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:178
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mini.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = min(a.word[i], imm);
```

### Header Mapping

```c
#define __msa_mini_u_w __builtin_msa_mini_u_w
```

