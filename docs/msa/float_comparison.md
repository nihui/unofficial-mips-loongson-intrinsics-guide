# Float Comparison

Generated from `include/msa.h`. This page contains 44 intrinsics.

## v2i64 __msa_fcaf_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fcaf_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fcaf.d
Builtin: __builtin_msa_fcaf_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:466
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcaf.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_af(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcaf_d __builtin_msa_fcaf_d
```

## v4i32 __msa_fcaf_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fcaf_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fcaf.w
Builtin: __builtin_msa_fcaf_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:465
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcaf.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_af(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcaf_w __builtin_msa_fcaf_w
```

## v2i64 __msa_fceq_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fceq_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fceq.d
Builtin: __builtin_msa_fceq_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:476
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fceq.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_eq(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fceq_d __builtin_msa_fceq_d
```

## v4i32 __msa_fceq_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fceq_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fceq.w
Builtin: __builtin_msa_fceq_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:475
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fceq.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_eq(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fceq_w __builtin_msa_fceq_w
```

## v2i64 __msa_fcle_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fcle_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fcle.d
Builtin: __builtin_msa_fcle_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:484
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcle.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_le(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcle_d __builtin_msa_fcle_d
```

## v4i32 __msa_fcle_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fcle_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fcle.w
Builtin: __builtin_msa_fcle_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:483
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcle.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_le(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcle_w __builtin_msa_fcle_w
```

## v2i64 __msa_fclt_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fclt_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fclt.d
Builtin: __builtin_msa_fclt_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:480
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fclt.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_lt(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fclt_d __builtin_msa_fclt_d
```

## v4i32 __msa_fclt_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fclt_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fclt.w
Builtin: __builtin_msa_fclt_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:479
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fclt.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_lt(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fclt_w __builtin_msa_fclt_w
```

## v2i64 __msa_fcne_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fcne_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fcne.d
Builtin: __builtin_msa_fcne_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:478
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcne.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_ne(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcne_d __builtin_msa_fcne_d
```

## v4i32 __msa_fcne_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fcne_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fcne.w
Builtin: __builtin_msa_fcne_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:477
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcne.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_ne(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcne_w __builtin_msa_fcne_w
```

## v2i64 __msa_fcor_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fcor_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fcor.d
Builtin: __builtin_msa_fcor_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:468
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcor.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_or(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcor_d __builtin_msa_fcor_d
```

## v4i32 __msa_fcor_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fcor_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fcor.w
Builtin: __builtin_msa_fcor_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:467
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcor.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_or(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcor_w __builtin_msa_fcor_w
```

## v2i64 __msa_fcueq_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fcueq_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fcueq.d
Builtin: __builtin_msa_fcueq_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:474
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcueq.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_ueq(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcueq_d __builtin_msa_fcueq_d
```

## v4i32 __msa_fcueq_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fcueq_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fcueq.w
Builtin: __builtin_msa_fcueq_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:473
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcueq.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_ueq(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcueq_w __builtin_msa_fcueq_w
```

## v2i64 __msa_fcule_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fcule_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fcule.d
Builtin: __builtin_msa_fcule_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:486
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcule.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_ule(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcule_d __builtin_msa_fcule_d
```

## v4i32 __msa_fcule_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fcule_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fcule.w
Builtin: __builtin_msa_fcule_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:485
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcule.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_ule(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcule_w __builtin_msa_fcule_w
```

## v2i64 __msa_fcult_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fcult_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fcult.d
Builtin: __builtin_msa_fcult_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:482
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcult.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_ult(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcult_d __builtin_msa_fcult_d
```

## v4i32 __msa_fcult_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fcult_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fcult.w
Builtin: __builtin_msa_fcult_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:481
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcult.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_ult(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcult_w __builtin_msa_fcult_w
```

## v2i64 __msa_fcun_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fcun_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fcun.d
Builtin: __builtin_msa_fcun_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:470
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcun.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_un(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcun_d __builtin_msa_fcun_d
```

## v4i32 __msa_fcun_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fcun_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fcun.w
Builtin: __builtin_msa_fcun_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:469
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcun.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_un(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcun_w __builtin_msa_fcun_w
```

## v2i64 __msa_fcune_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fcune_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fcune.d
Builtin: __builtin_msa_fcune_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:472
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcune.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_une(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcune_d __builtin_msa_fcune_d
```

## v4i32 __msa_fcune_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fcune_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fcune.w
Builtin: __builtin_msa_fcune_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:471
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fcune.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_une(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fcune_w __builtin_msa_fcune_w
```

## v2i64 __msa_fsaf_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fsaf_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fsaf.d
Builtin: __builtin_msa_fsaf_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:488
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsaf.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_fsaf(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsaf_d __builtin_msa_fsaf_d
```

## v4i32 __msa_fsaf_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fsaf_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fsaf.w
Builtin: __builtin_msa_fsaf_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:487
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsaf.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_fsaf(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsaf_w __builtin_msa_fsaf_w
```

## v2i64 __msa_fseq_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fseq_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fseq.d
Builtin: __builtin_msa_fseq_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:498
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fseq.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_fseq(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fseq_d __builtin_msa_fseq_d
```

## v4i32 __msa_fseq_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fseq_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fseq.w
Builtin: __builtin_msa_fseq_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:497
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fseq.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_fseq(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fseq_w __builtin_msa_fseq_w
```

## v2i64 __msa_fsle_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fsle_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fsle.d
Builtin: __builtin_msa_fsle_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:506
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsle.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_fsle(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsle_d __builtin_msa_fsle_d
```

## v4i32 __msa_fsle_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fsle_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fsle.w
Builtin: __builtin_msa_fsle_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:505
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsle.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_fsle(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsle_w __builtin_msa_fsle_w
```

## v2i64 __msa_fslt_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fslt_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fslt.d
Builtin: __builtin_msa_fslt_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:502
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fslt.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_fslt(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fslt_d __builtin_msa_fslt_d
```

## v4i32 __msa_fslt_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fslt_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fslt.w
Builtin: __builtin_msa_fslt_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:501
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fslt.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_fslt(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fslt_w __builtin_msa_fslt_w
```

## v2i64 __msa_fsne_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fsne_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fsne.d
Builtin: __builtin_msa_fsne_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:500
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsne.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_fsne(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsne_d __builtin_msa_fsne_d
```

## v4i32 __msa_fsne_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fsne_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fsne.w
Builtin: __builtin_msa_fsne_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:499
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsne.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_fsne(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsne_w __builtin_msa_fsne_w
```

## v2i64 __msa_fsor_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fsor_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fsor.d
Builtin: __builtin_msa_fsor_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:490
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsor.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_fsor(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsor_d __builtin_msa_fsor_d
```

## v4i32 __msa_fsor_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fsor_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fsor.w
Builtin: __builtin_msa_fsor_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:489
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsor.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_fsor(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsor_w __builtin_msa_fsor_w
```

## v2i64 __msa_fsueq_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fsueq_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fsueq.d
Builtin: __builtin_msa_fsueq_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:496
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsueq.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_fsueq(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsueq_d __builtin_msa_fsueq_d
```

## v4i32 __msa_fsueq_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fsueq_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fsueq.w
Builtin: __builtin_msa_fsueq_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:495
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsueq.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_fsueq(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsueq_w __builtin_msa_fsueq_w
```

## v2i64 __msa_fsule_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fsule_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fsule.d
Builtin: __builtin_msa_fsule_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:508
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsule.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_fsule(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsule_d __builtin_msa_fsule_d
```

## v4i32 __msa_fsule_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fsule_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fsule.w
Builtin: __builtin_msa_fsule_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:507
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsule.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_fsule(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsule_w __builtin_msa_fsule_w
```

## v2i64 __msa_fsult_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fsult_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fsult.d
Builtin: __builtin_msa_fsult_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:504
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsult.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_fsult(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsult_d __builtin_msa_fsult_d
```

## v4i32 __msa_fsult_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fsult_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fsult.w
Builtin: __builtin_msa_fsult_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:503
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsult.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_fsult(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsult_w __builtin_msa_fsult_w
```

## v2i64 __msa_fsun_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fsun_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fsun.d
Builtin: __builtin_msa_fsun_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:492
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsun.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_fsun(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsun_d __builtin_msa_fsun_d
```

## v4i32 __msa_fsun_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fsun_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fsun.w
Builtin: __builtin_msa_fsun_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:491
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsun.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_fsun(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsun_w __builtin_msa_fsun_w
```

## v2i64 __msa_fsune_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2i64 __msa_fsune_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fsune.d
Builtin: __builtin_msa_fsune_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:494
```

### Description

Compare floating-point 2 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsune.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.mask[i] = fp_compare_fsune(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsune_d __builtin_msa_fsune_d
```

## v4i32 __msa_fsune_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4i32 __msa_fsune_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fsune.w
Builtin: __builtin_msa_fsune_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:493
```

### Description

Compare floating-point 4 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsune.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.mask[i] = fp_compare_fsune(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
#define __msa_fsune_w __builtin_msa_fsune_w
```

