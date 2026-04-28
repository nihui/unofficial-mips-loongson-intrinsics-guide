# Float Computation

Generated from `include/msa.h`. This page contains 34 intrinsics.

## v2f64 __msa_fadd_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fadd_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fadd.d
Builtin: __builtin_msa_fadd_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:510
```

### Description

Add lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fadd.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = a.fp64[i] + b.fp64[i];
```

### Header Mapping

```c
#define __msa_fadd_d __builtin_msa_fadd_d
```

## v4f32 __msa_fadd_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fadd_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fadd.w
Builtin: __builtin_msa_fadd_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:509
```

### Description

Add lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fadd.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = a.fp32[i] + b.fp32[i];
```

### Header Mapping

```c
#define __msa_fadd_w __builtin_msa_fadd_w
```

## v2f64 __msa_fdiv_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fdiv_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fdiv.d
Builtin: __builtin_msa_fdiv_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:516
```

### Description

Divide lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fdiv.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = a.fp64[i] / b.fp64[i];
```

### Header Mapping

```c
#define __msa_fdiv_d __builtin_msa_fdiv_d
```

## v4f32 __msa_fdiv_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fdiv_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fdiv.w
Builtin: __builtin_msa_fdiv_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:515
```

### Description

Divide lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fdiv.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = a.fp32[i] / b.fp32[i];
```

### Header Mapping

```c
#define __msa_fdiv_w __builtin_msa_fdiv_w
```

## v2f64 __msa_ffql_d (v4i32 a)

### Synopsis

```c
v2f64 __msa_ffql_d (v4i32 a)
#include <msa.h>
Instruction: ffql.d
Builtin: __builtin_msa_ffql_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:564
```

### Description

Convert lower fixed-point q-format lanes to floating point lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ffql.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for each left/lower fixed-point source lane i:
  dst.fp_lane[i] = fixed_point_q_to_float(a, i);
```

### Header Mapping

```c
#define __msa_ffql_d __builtin_msa_ffql_d
```

## v4f32 __msa_ffql_w (v8i16 a)

### Synopsis

```c
v4f32 __msa_ffql_w (v8i16 a)
#include <msa.h>
Instruction: ffql.w
Builtin: __builtin_msa_ffql_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:563
```

### Description

Convert lower fixed-point q-format lanes to floating point lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ffql.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for each left/lower fixed-point source lane i:
  dst.fp_lane[i] = fixed_point_q_to_float(a, i);
```

### Header Mapping

```c
#define __msa_ffql_w __builtin_msa_ffql_w
```

## v2f64 __msa_ffqr_d (v4i32 a)

### Synopsis

```c
v2f64 __msa_ffqr_d (v4i32 a)
#include <msa.h>
Instruction: ffqr.d
Builtin: __builtin_msa_ffqr_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:566
```

### Description

Convert upper fixed-point q-format lanes to floating point lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ffqr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for each right/upper fixed-point source lane i:
  dst.fp_lane[i] = fixed_point_q_to_float(a, i);
```

### Header Mapping

```c
#define __msa_ffqr_d __builtin_msa_ffqr_d
```

## v4f32 __msa_ffqr_w (v8i16 a)

### Synopsis

```c
v4f32 __msa_ffqr_w (v8i16 a)
#include <msa.h>
Instruction: ffqr.w
Builtin: __builtin_msa_ffqr_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:565
```

### Description

Convert upper fixed-point q-format lanes to floating point lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ffqr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for each right/upper fixed-point source lane i:
  dst.fp_lane[i] = fixed_point_q_to_float(a, i);
```

### Header Mapping

```c
#define __msa_ffqr_w __builtin_msa_ffqr_w
```

## v2f64 __msa_flog2_d (v2f64 a)

### Synopsis

```c
v2f64 __msa_flog2_d (v2f64 a)
#include <msa.h>
Instruction: flog2.d
Builtin: __builtin_msa_flog2_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:558
```

### Description

Compute base-2 logarithm lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for flog2.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = log2(a.fp64[i]);
```

### Header Mapping

```c
#define __msa_flog2_d __builtin_msa_flog2_d
```

## v4f32 __msa_flog2_w (v4f32 a)

### Synopsis

```c
v4f32 __msa_flog2_w (v4f32 a)
#include <msa.h>
Instruction: flog2.w
Builtin: __builtin_msa_flog2_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:557
```

### Description

Compute base-2 logarithm lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for flog2.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = log2(a.fp32[i]);
```

### Header Mapping

```c
#define __msa_flog2_w __builtin_msa_flog2_w
```

## v2f64 __msa_fmadd_d (v2f64 a, v2f64 b, v2f64 c)

### Synopsis

```c
v2f64 __msa_fmadd_d (v2f64 a, v2f64 b, v2f64 c)
#include <msa.h>
Instruction: fmadd.d
Builtin: __builtin_msa_fmadd_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:518
```

### Description

Fused multiply-add lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmadd.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = fma(a.fp64[i], b.fp64[i], c.fp64[i]);
```

### Header Mapping

```c
#define __msa_fmadd_d __builtin_msa_fmadd_d
```

## v4f32 __msa_fmadd_w (v4f32 a, v4f32 b, v4f32 c)

### Synopsis

```c
v4f32 __msa_fmadd_w (v4f32 a, v4f32 b, v4f32 c)
#include <msa.h>
Instruction: fmadd.w
Builtin: __builtin_msa_fmadd_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:517
```

### Description

Fused multiply-add lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmadd.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = fma(a.fp32[i], b.fp32[i], c.fp32[i]);
```

### Header Mapping

```c
#define __msa_fmadd_w __builtin_msa_fmadd_w
```

## v2f64 __msa_fmax_a_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fmax_a_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fmax.a.d
Builtin: __builtin_msa_fmax_a_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:534
```

### Description

Compute maximum lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmax.a.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = fp_max(a.fp64[i], b.fp64[i]);
```

### Header Mapping

```c
#define __msa_fmax_a_d __builtin_msa_fmax_a_d
```

## v4f32 __msa_fmax_a_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fmax_a_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fmax.a.w
Builtin: __builtin_msa_fmax_a_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:533
```

### Description

Compute maximum lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmax.a.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = fp_max(a.fp32[i], b.fp32[i]);
```

### Header Mapping

```c
#define __msa_fmax_a_w __builtin_msa_fmax_a_w
```

## v2f64 __msa_fmax_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fmax_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fmax.d
Builtin: __builtin_msa_fmax_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:532
```

### Description

Compute maximum lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmax.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = fp_max(a.fp64[i], b.fp64[i]);
```

### Header Mapping

```c
#define __msa_fmax_d __builtin_msa_fmax_d
```

## v4f32 __msa_fmax_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fmax_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fmax.w
Builtin: __builtin_msa_fmax_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:531
```

### Description

Compute maximum lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmax.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = fp_max(a.fp32[i], b.fp32[i]);
```

### Header Mapping

```c
#define __msa_fmax_w __builtin_msa_fmax_w
```

## v2f64 __msa_fmin_a_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fmin_a_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fmin.a.d
Builtin: __builtin_msa_fmin_a_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:530
```

### Description

Compute minimum lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmin.a.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = fp_min(a.fp64[i], b.fp64[i]);
```

### Header Mapping

```c
#define __msa_fmin_a_d __builtin_msa_fmin_a_d
```

## v4f32 __msa_fmin_a_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fmin_a_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fmin.a.w
Builtin: __builtin_msa_fmin_a_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:529
```

### Description

Compute minimum lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmin.a.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = fp_min(a.fp32[i], b.fp32[i]);
```

### Header Mapping

```c
#define __msa_fmin_a_w __builtin_msa_fmin_a_w
```

## v2f64 __msa_fmin_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fmin_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fmin.d
Builtin: __builtin_msa_fmin_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:528
```

### Description

Compute minimum lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmin.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = fp_min(a.fp64[i], b.fp64[i]);
```

### Header Mapping

```c
#define __msa_fmin_d __builtin_msa_fmin_d
```

## v4f32 __msa_fmin_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fmin_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fmin.w
Builtin: __builtin_msa_fmin_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:527
```

### Description

Compute minimum lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmin.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = fp_min(a.fp32[i], b.fp32[i]);
```

### Header Mapping

```c
#define __msa_fmin_w __builtin_msa_fmin_w
```

## v2f64 __msa_fmsub_d (v2f64 a, v2f64 b, v2f64 c)

### Synopsis

```c
v2f64 __msa_fmsub_d (v2f64 a, v2f64 b, v2f64 c)
#include <msa.h>
Instruction: fmsub.d
Builtin: __builtin_msa_fmsub_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:520
```

### Description

Fused multiply-subtract lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmsub.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = fms(a.fp64[i], b.fp64[i], c.fp64[i]);
```

### Header Mapping

```c
#define __msa_fmsub_d __builtin_msa_fmsub_d
```

## v4f32 __msa_fmsub_w (v4f32 a, v4f32 b, v4f32 c)

### Synopsis

```c
v4f32 __msa_fmsub_w (v4f32 a, v4f32 b, v4f32 c)
#include <msa.h>
Instruction: fmsub.w
Builtin: __builtin_msa_fmsub_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:519
```

### Description

Fused multiply-subtract lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmsub.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = fms(a.fp32[i], b.fp32[i], c.fp32[i]);
```

### Header Mapping

```c
#define __msa_fmsub_w __builtin_msa_fmsub_w
```

## v2f64 __msa_fmul_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fmul_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fmul.d
Builtin: __builtin_msa_fmul_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:514
```

### Description

Multiply lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmul.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = a.fp64[i] * b.fp64[i];
```

### Header Mapping

```c
#define __msa_fmul_d __builtin_msa_fmul_d
```

## v4f32 __msa_fmul_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fmul_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fmul.w
Builtin: __builtin_msa_fmul_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:513
```

### Description

Multiply lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fmul.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = a.fp32[i] * b.fp32[i];
```

### Header Mapping

```c
#define __msa_fmul_w __builtin_msa_fmul_w
```

## v2f64 __msa_frcp_d (v2f64 a)

### Synopsis

```c
v2f64 __msa_frcp_d (v2f64 a)
#include <msa.h>
Instruction: frcp.d
Builtin: __builtin_msa_frcp_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:552
```

### Description

Compute reciprocal estimate lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for frcp.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = 1.0 / a.fp64[i];
```

### Header Mapping

```c
#define __msa_frcp_d __builtin_msa_frcp_d
```

## v4f32 __msa_frcp_w (v4f32 a)

### Synopsis

```c
v4f32 __msa_frcp_w (v4f32 a)
#include <msa.h>
Instruction: frcp.w
Builtin: __builtin_msa_frcp_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:551
```

### Description

Compute reciprocal estimate lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for frcp.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = 1.0 / a.fp32[i];
```

### Header Mapping

```c
#define __msa_frcp_w __builtin_msa_frcp_w
```

## v2f64 __msa_frsqrt_d (v2f64 a)

### Synopsis

```c
v2f64 __msa_frsqrt_d (v2f64 a)
#include <msa.h>
Instruction: frsqrt.d
Builtin: __builtin_msa_frsqrt_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:556
```

### Description

Compute reciprocal square-root estimate lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for frsqrt.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = 1.0 / sqrt(a.fp64[i]);
```

### Header Mapping

```c
#define __msa_frsqrt_d __builtin_msa_frsqrt_d
```

## v4f32 __msa_frsqrt_w (v4f32 a)

### Synopsis

```c
v4f32 __msa_frsqrt_w (v4f32 a)
#include <msa.h>
Instruction: frsqrt.w
Builtin: __builtin_msa_frsqrt_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:555
```

### Description

Compute reciprocal square-root estimate lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for frsqrt.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = 1.0 / sqrt(a.fp32[i]);
```

### Header Mapping

```c
#define __msa_frsqrt_w __builtin_msa_frsqrt_w
```

## v2f64 __msa_fsqrt_d (v2f64 a)

### Synopsis

```c
v2f64 __msa_fsqrt_d (v2f64 a)
#include <msa.h>
Instruction: fsqrt.d
Builtin: __builtin_msa_fsqrt_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:550
```

### Description

Compute square root lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsqrt.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = sqrt(a.fp64[i]);
```

### Header Mapping

```c
#define __msa_fsqrt_d __builtin_msa_fsqrt_d
```

## v4f32 __msa_fsqrt_w (v4f32 a)

### Synopsis

```c
v4f32 __msa_fsqrt_w (v4f32 a)
#include <msa.h>
Instruction: fsqrt.w
Builtin: __builtin_msa_fsqrt_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:549
```

### Description

Compute square root lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsqrt.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = sqrt(a.fp32[i]);
```

### Header Mapping

```c
#define __msa_fsqrt_w __builtin_msa_fsqrt_w
```

## v2f64 __msa_fsub_d (v2f64 a, v2f64 b)

### Synopsis

```c
v2f64 __msa_fsub_d (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fsub.d
Builtin: __builtin_msa_fsub_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:512
```

### Description

Subtract lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsub.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = a.fp64[i] - b.fp64[i];
```

### Header Mapping

```c
#define __msa_fsub_d __builtin_msa_fsub_d
```

## v4f32 __msa_fsub_w (v4f32 a, v4f32 b)

### Synopsis

```c
v4f32 __msa_fsub_w (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fsub.w
Builtin: __builtin_msa_fsub_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:511
```

### Description

Subtract lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fsub.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = a.fp32[i] - b.fp32[i];
```

### Header Mapping

```c
#define __msa_fsub_w __builtin_msa_fsub_w
```

## v8i16 __msa_ftq_h (v4f32 a, v4f32 b)

### Synopsis

```c
v8i16 __msa_ftq_h (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: ftq.h
Builtin: __builtin_msa_ftq_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:525
```

### Description

Convert floating-point lanes to fixed-point q-format lane-wise for 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ftq.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for each paired floating-point source lane i:
  dst.fixed_lane[i] = float_to_fixed_point_q(a, b, i);
```

### Header Mapping

```c
#define __msa_ftq_h __builtin_msa_ftq_h
```

## v4i32 __msa_ftq_w (v2f64 a, v2f64 b)

### Synopsis

```c
v4i32 __msa_ftq_w (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: ftq.w
Builtin: __builtin_msa_ftq_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:526
```

### Description

Convert floating-point lanes to fixed-point q-format lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ftq.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for each paired floating-point source lane i:
  dst.fixed_lane[i] = float_to_fixed_point_q(a, b, i);
```

### Header Mapping

```c
#define __msa_ftq_w __builtin_msa_ftq_w
```

