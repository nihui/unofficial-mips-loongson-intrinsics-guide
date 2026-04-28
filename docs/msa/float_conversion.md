# Float Conversion

Generated from `include/msa.h`. This page contains 24 intrinsics.

## v2i64 __msa_fclass_d (v2f64 a)

### Synopsis

```c
v2i64 __msa_fclass_d (v2f64 a)
#include <msa.h>
Instruction: fclass.d
Builtin: __builtin_msa_fclass_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:548
```

### Description

Classify floating-point values lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fclass.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = classify_fp(a.fp64[i]);
```

### Header Mapping

```c
#define __msa_fclass_d __builtin_msa_fclass_d
```

## v4i32 __msa_fclass_w (v4f32 a)

### Synopsis

```c
v4i32 __msa_fclass_w (v4f32 a)
#include <msa.h>
Instruction: fclass.w
Builtin: __builtin_msa_fclass_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:547
```

### Description

Classify floating-point values lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fclass.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = classify_fp(a.fp32[i]);
```

### Header Mapping

```c
#define __msa_fclass_w __builtin_msa_fclass_w
```

## v8i16 __msa_fexdo_h (v4f32 a, v4f32 b)

### Synopsis

```c
v8i16 __msa_fexdo_h (v4f32 a, v4f32 b)
#include <msa.h>
Instruction: fexdo.h
Builtin: __builtin_msa_fexdo_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:523
```

### Description

Extract and convert paired floating-point data lane-wise for 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fexdo.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
combined = interleave_or_pair_fp_sources(a, b);
for each destination lane i:
  dst.lane[i] = extract_odd_or_double_format_element(combined, i);
```

### Header Mapping

```c
#define __msa_fexdo_h __builtin_msa_fexdo_h
```

## v4f32 __msa_fexdo_w (v2f64 a, v2f64 b)

### Synopsis

```c
v4f32 __msa_fexdo_w (v2f64 a, v2f64 b)
#include <msa.h>
Instruction: fexdo.w
Builtin: __builtin_msa_fexdo_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:524
```

### Description

Extract and convert paired floating-point data lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fexdo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
combined = interleave_or_pair_fp_sources(a, b);
for each destination lane i:
  dst.lane[i] = extract_odd_or_double_format_element(combined, i);
```

### Header Mapping

```c
#define __msa_fexdo_w __builtin_msa_fexdo_w
```

## v2f64 __msa_fexp2_d (v2f64 a, v2i64 b)

### Synopsis

```c
v2f64 __msa_fexp2_d (v2f64 a, v2i64 b)
#include <msa.h>
Instruction: fexp2.d
Builtin: __builtin_msa_fexp2_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:522
```

### Description

Compute base-2 exponential lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fexp2.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = exp2(a.fp64[i]);
```

### Header Mapping

```c
#define __msa_fexp2_d __builtin_msa_fexp2_d
```

## v4f32 __msa_fexp2_w (v4f32 a, v4i32 b)

### Synopsis

```c
v4f32 __msa_fexp2_w (v4f32 a, v4i32 b)
#include <msa.h>
Instruction: fexp2.w
Builtin: __builtin_msa_fexp2_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:521
```

### Description

Compute base-2 exponential lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fexp2.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = exp2(a.fp32[i]);
```

### Header Mapping

```c
#define __msa_fexp2_w __builtin_msa_fexp2_w
```

## v2f64 __msa_fexupl_d (v4f32 a)

### Synopsis

```c
v2f64 __msa_fexupl_d (v4f32 a)
#include <msa.h>
Instruction: fexupl.d
Builtin: __builtin_msa_fexupl_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:560
```

### Description

Extend lower floating-point or fixed-point lanes lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fexupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for each lower source lane i:
  dst.fp_lane[i] = widen_integer_or_float_to_next_fp_width(a, i);
```

### Header Mapping

```c
#define __msa_fexupl_d __builtin_msa_fexupl_d
```

## v4f32 __msa_fexupl_w (v8i16 a)

### Synopsis

```c
v4f32 __msa_fexupl_w (v8i16 a)
#include <msa.h>
Instruction: fexupl.w
Builtin: __builtin_msa_fexupl_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:559
```

### Description

Extend lower floating-point or fixed-point lanes lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fexupl.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for each lower source lane i:
  dst.fp_lane[i] = widen_integer_or_float_to_next_fp_width(a, i);
```

### Header Mapping

```c
#define __msa_fexupl_w __builtin_msa_fexupl_w
```

## v2f64 __msa_fexupr_d (v4f32 a)

### Synopsis

```c
v2f64 __msa_fexupr_d (v4f32 a)
#include <msa.h>
Instruction: fexupr.d
Builtin: __builtin_msa_fexupr_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:562
```

### Description

Extend upper floating-point or fixed-point lanes lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fexupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for each upper source lane i:
  dst.fp_lane[i] = widen_integer_or_float_to_next_fp_width(a, i);
```

### Header Mapping

```c
#define __msa_fexupr_d __builtin_msa_fexupr_d
```

## v4f32 __msa_fexupr_w (v8i16 a)

### Synopsis

```c
v4f32 __msa_fexupr_w (v8i16 a)
#include <msa.h>
Instruction: fexupr.w
Builtin: __builtin_msa_fexupr_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:561
```

### Description

Extend upper floating-point or fixed-point lanes lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fexupr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for each upper source lane i:
  dst.fp_lane[i] = widen_integer_or_float_to_next_fp_width(a, i);
```

### Header Mapping

```c
#define __msa_fexupr_w __builtin_msa_fexupr_w
```

## v2f64 __msa_ffint_s_d (v2i64 a)

### Synopsis

```c
v2f64 __msa_ffint_s_d (v2i64 a)
#include <msa.h>
Instruction: ffint.s.d
Builtin: __builtin_msa_ffint_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:576
```

### Description

Convert integer to floating point lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ffint.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
#define __msa_ffint_s_d __builtin_msa_ffint_s_d
```

## v4f32 __msa_ffint_s_w (v4i32 a)

### Synopsis

```c
v4f32 __msa_ffint_s_w (v4i32 a)
#include <msa.h>
Instruction: ffint.s.w
Builtin: __builtin_msa_ffint_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:575
```

### Description

Convert integer to floating point lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ffint.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
#define __msa_ffint_s_w __builtin_msa_ffint_s_w
```

## v2f64 __msa_ffint_u_d (v2u64 a)

### Synopsis

```c
v2f64 __msa_ffint_u_d (v2u64 a)
#include <msa.h>
Instruction: ffint.u.d
Builtin: __builtin_msa_ffint_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:578
```

### Description

Convert integer to floating point lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ffint.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
#define __msa_ffint_u_d __builtin_msa_ffint_u_d
```

## v4f32 __msa_ffint_u_w (v4u32 a)

### Synopsis

```c
v4f32 __msa_ffint_u_w (v4u32 a)
#include <msa.h>
Instruction: ffint.u.w
Builtin: __builtin_msa_ffint_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:577
```

### Description

Convert integer to floating point lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ffint.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
#define __msa_ffint_u_w __builtin_msa_ffint_u_w
```

## v2f64 __msa_frint_d (v2f64 a)

### Synopsis

```c
v2f64 __msa_frint_d (v2f64 a)
#include <msa.h>
Instruction: frint.d
Builtin: __builtin_msa_frint_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:554
```

### Description

Round to an integral floating-point value lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for frint.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = round_to_integral_float(a.fp64[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
#define __msa_frint_d __builtin_msa_frint_d
```

## v4f32 __msa_frint_w (v4f32 a)

### Synopsis

```c
v4f32 __msa_frint_w (v4f32 a)
#include <msa.h>
Instruction: frint.w
Builtin: __builtin_msa_frint_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:553
```

### Description

Round to an integral floating-point value lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for frint.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = round_to_integral_float(a.fp32[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
#define __msa_frint_w __builtin_msa_frint_w
```

## v2i64 __msa_ftint_s_d (v2f64 a)

### Synopsis

```c
v2i64 __msa_ftint_s_d (v2f64 a)
#include <msa.h>
Instruction: ftint.s.d
Builtin: __builtin_msa_ftint_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:568
```

### Description

Convert floating point to integer lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ftint.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = integer_convert_with_current_rounding(a.fp64[i]);
```

### Header Mapping

```c
#define __msa_ftint_s_d __builtin_msa_ftint_s_d
```

## v4i32 __msa_ftint_s_w (v4f32 a)

### Synopsis

```c
v4i32 __msa_ftint_s_w (v4f32 a)
#include <msa.h>
Instruction: ftint.s.w
Builtin: __builtin_msa_ftint_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:567
```

### Description

Convert floating point to integer lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ftint.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = integer_convert_with_current_rounding(a.fp32[i]);
```

### Header Mapping

```c
#define __msa_ftint_s_w __builtin_msa_ftint_s_w
```

## v2u64 __msa_ftint_u_d (v2f64 a)

### Synopsis

```c
v2u64 __msa_ftint_u_d (v2f64 a)
#include <msa.h>
Instruction: ftint.u.d
Builtin: __builtin_msa_ftint_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:570
```

### Description

Convert floating point to integer lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ftint.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = integer_convert_with_current_rounding(a.fp64[i]);
```

### Header Mapping

```c
#define __msa_ftint_u_d __builtin_msa_ftint_u_d
```

## v4u32 __msa_ftint_u_w (v4f32 a)

### Synopsis

```c
v4u32 __msa_ftint_u_w (v4f32 a)
#include <msa.h>
Instruction: ftint.u.w
Builtin: __builtin_msa_ftint_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:569
```

### Description

Convert floating point to integer lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ftint.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = integer_convert_with_current_rounding(a.fp32[i]);
```

### Header Mapping

```c
#define __msa_ftint_u_w __builtin_msa_ftint_u_w
```

## v2i64 __msa_ftrunc_s_d (v2f64 a)

### Synopsis

```c
v2i64 __msa_ftrunc_s_d (v2f64 a)
#include <msa.h>
Instruction: ftrunc.s.d
Builtin: __builtin_msa_ftrunc_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:572
```

### Description

Truncate floating point to integer lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ftrunc.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = integer_truncate_toward_zero(a.fp64[i]);
```

### Header Mapping

```c
#define __msa_ftrunc_s_d __builtin_msa_ftrunc_s_d
```

## v4i32 __msa_ftrunc_s_w (v4f32 a)

### Synopsis

```c
v4i32 __msa_ftrunc_s_w (v4f32 a)
#include <msa.h>
Instruction: ftrunc.s.w
Builtin: __builtin_msa_ftrunc_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:571
```

### Description

Truncate floating point to integer lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ftrunc.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = integer_truncate_toward_zero(a.fp32[i]);
```

### Header Mapping

```c
#define __msa_ftrunc_s_w __builtin_msa_ftrunc_s_w
```

## v2u64 __msa_ftrunc_u_d (v2f64 a)

### Synopsis

```c
v2u64 __msa_ftrunc_u_d (v2f64 a)
#include <msa.h>
Instruction: ftrunc.u.d
Builtin: __builtin_msa_ftrunc_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:574
```

### Description

Truncate floating point to integer lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ftrunc.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.fp64[i] = integer_truncate_toward_zero(a.fp64[i]);
```

### Header Mapping

```c
#define __msa_ftrunc_u_d __builtin_msa_ftrunc_u_d
```

## v4u32 __msa_ftrunc_u_w (v4f32 a)

### Synopsis

```c
v4u32 __msa_ftrunc_u_w (v4f32 a)
#include <msa.h>
Instruction: ftrunc.u.w
Builtin: __builtin_msa_ftrunc_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:573
```

### Description

Truncate floating point to integer lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ftrunc.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.fp32[i] = integer_truncate_toward_zero(a.fp32[i]);
```

### Header Mapping

```c
#define __msa_ftrunc_u_w __builtin_msa_ftrunc_u_w
```

