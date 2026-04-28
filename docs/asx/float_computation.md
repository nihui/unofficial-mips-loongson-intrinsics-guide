# Float Computation

Generated from `include/loongson-asxintrin.h`. This page contains 54 intrinsics.

## __m256d __lasx_xfadd_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256d __lasx_xfadd_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfadd.d
Builtin: __builtin_lasx_xfadd_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2305
```

### Description

Add lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfadd.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp64[i] = a.fp64[i] + b.fp64[i];
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfadd_d((v4f64)_1, (v4f64)_2);
```

## __m256 __lasx_xfadd_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256 __lasx_xfadd_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfadd.w
Builtin: __builtin_lasx_xfadd_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2298
```

### Description

Add lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfadd.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = a.fp32[i] + b.fp32[i];
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfadd_w((v8f32)_1, (v8f32)_2);
```

## __m256d __lasx_xfdiv_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256d __lasx_xfdiv_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfdiv.d
Builtin: __builtin_lasx_xfdiv_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2347
```

### Description

Divide lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfdiv.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp64[i] = a.fp64[i] / b.fp64[i];
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfdiv_d((v4f64)_1, (v4f64)_2);
```

## __m256 __lasx_xfdiv_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256 __lasx_xfdiv_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfdiv.w
Builtin: __builtin_lasx_xfdiv_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2340
```

### Description

Divide lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfdiv.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = a.fp32[i] / b.fp32[i];
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfdiv_w((v8f32)_1, (v8f32)_2);
```

## __m256d __lasx_xffql_d (__m256i _1)

### Synopsis

```c
__m256d __lasx_xffql_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xffql.d
Builtin: __builtin_lasx_xffql_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2683
```

### Description

Convert lower fixed-point q-format lanes to floating point lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xffql.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for each left/lower fixed-point source lane i:
  dst.fp_lane[i] = fixed_point_q_to_float(a, i);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xffql_d((v8i32)_1);
```

## __m256 __lasx_xffql_w (__m256i _1)

### Synopsis

```c
__m256 __lasx_xffql_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xffql.w
Builtin: __builtin_lasx_xffql_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2676
```

### Description

Convert lower fixed-point q-format lanes to floating point lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xffql.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for each left/lower fixed-point source lane i:
  dst.fp_lane[i] = fixed_point_q_to_float(a, i);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xffql_w((v16i16)_1);
```

## __m256d __lasx_xffqr_d (__m256i _1)

### Synopsis

```c
__m256d __lasx_xffqr_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xffqr.d
Builtin: __builtin_lasx_xffqr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2697
```

### Description

Convert upper fixed-point q-format lanes to floating point lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xffqr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for each right/upper fixed-point source lane i:
  dst.fp_lane[i] = fixed_point_q_to_float(a, i);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xffqr_d((v8i32)_1);
```

## __m256 __lasx_xffqr_w (__m256i _1)

### Synopsis

```c
__m256 __lasx_xffqr_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xffqr.w
Builtin: __builtin_lasx_xffqr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2690
```

### Description

Convert upper fixed-point q-format lanes to floating point lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xffqr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for each right/upper fixed-point source lane i:
  dst.fp_lane[i] = fixed_point_q_to_float(a, i);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xffqr_w((v16i16)_1);
```

## __m256d __lasx_xflog2_d (__m256d _1)

### Synopsis

```c
__m256d __lasx_xflog2_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xflog2.d
Builtin: __builtin_lasx_xflog2_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2641
```

### Description

Compute base-2 logarithm lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xflog2.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = log2(a.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xflog2_d((v4f64)_1);
```

## __m256 __lasx_xflog2_w (__m256 _1)

### Synopsis

```c
__m256 __lasx_xflog2_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xflog2.w
Builtin: __builtin_lasx_xflog2_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2634
```

### Description

Compute base-2 logarithm lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xflog2.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = log2(a.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xflog2_w((v8f32)_1);
```

## __m256d __lasx_xfmadd_d (__m256d _1, __m256d _2, __m256d _3)

### Synopsis

```c
__m256d __lasx_xfmadd_d (__m256d _1, __m256d _2, __m256d _3)
#include <loongson-asxintrin.h>
Instruction: xfmadd.d
Builtin: __builtin_lasx_xfmadd_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2361
```

### Description

Fused multiply-add lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmadd.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.fp64[i] = fma(a.fp64[i], b.fp64[i], c.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmadd_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
```

## __m256 __lasx_xfmadd_w (__m256 _1, __m256 _2, __m256 _3)

### Synopsis

```c
__m256 __lasx_xfmadd_w (__m256 _1, __m256 _2, __m256 _3)
#include <loongson-asxintrin.h>
Instruction: xfmadd.w
Builtin: __builtin_lasx_xfmadd_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2354
```

### Description

Fused multiply-add lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmadd.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  dst.fp32[i] = fma(a.fp32[i], b.fp32[i], c.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmadd_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
```

## __m256d __lasx_xfmax_a_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256d __lasx_xfmax_a_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfmax.a.d
Builtin: __builtin_lasx_xfmax_a_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2473
```

### Description

Compute maximum lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmax.a.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp64[i] = fp_max(a.fp64[i], b.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmax_a_d((v4f64)_1, (v4f64)_2);
```

## __m256 __lasx_xfmax_a_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256 __lasx_xfmax_a_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfmax.a.w
Builtin: __builtin_lasx_xfmax_a_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2466
```

### Description

Compute maximum lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmax.a.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = fp_max(a.fp32[i], b.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmax_a_w((v8f32)_1, (v8f32)_2);
```

## __m256d __lasx_xfmax_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256d __lasx_xfmax_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfmax.d
Builtin: __builtin_lasx_xfmax_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2459
```

### Description

Compute maximum lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmax.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp64[i] = fp_max(a.fp64[i], b.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmax_d((v4f64)_1, (v4f64)_2);
```

## __m256 __lasx_xfmax_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256 __lasx_xfmax_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfmax.w
Builtin: __builtin_lasx_xfmax_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2452
```

### Description

Compute maximum lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmax.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = fp_max(a.fp32[i], b.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmax_w((v8f32)_1, (v8f32)_2);
```

## __m256d __lasx_xfmin_a_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256d __lasx_xfmin_a_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfmin.a.d
Builtin: __builtin_lasx_xfmin_a_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2445
```

### Description

Compute minimum lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmin.a.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp64[i] = fp_min(a.fp64[i], b.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmin_a_d((v4f64)_1, (v4f64)_2);
```

## __m256 __lasx_xfmin_a_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256 __lasx_xfmin_a_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfmin.a.w
Builtin: __builtin_lasx_xfmin_a_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2438
```

### Description

Compute minimum lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmin.a.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = fp_min(a.fp32[i], b.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmin_a_w((v8f32)_1, (v8f32)_2);
```

## __m256d __lasx_xfmin_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256d __lasx_xfmin_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfmin.d
Builtin: __builtin_lasx_xfmin_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2431
```

### Description

Compute minimum lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmin.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp64[i] = fp_min(a.fp64[i], b.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmin_d((v4f64)_1, (v4f64)_2);
```

## __m256 __lasx_xfmin_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256 __lasx_xfmin_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfmin.w
Builtin: __builtin_lasx_xfmin_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2424
```

### Description

Compute minimum lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmin.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = fp_min(a.fp32[i], b.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmin_w((v8f32)_1, (v8f32)_2);
```

## __m256d __lasx_xfmsub_d (__m256d _1, __m256d _2, __m256d _3)

### Synopsis

```c
__m256d __lasx_xfmsub_d (__m256d _1, __m256d _2, __m256d _3)
#include <loongson-asxintrin.h>
Instruction: xfmsub.d
Builtin: __builtin_lasx_xfmsub_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2375
```

### Description

Fused multiply-subtract lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmsub.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.fp64[i] = fms(a.fp64[i], b.fp64[i], c.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmsub_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
```

## __m256 __lasx_xfmsub_w (__m256 _1, __m256 _2, __m256 _3)

### Synopsis

```c
__m256 __lasx_xfmsub_w (__m256 _1, __m256 _2, __m256 _3)
#include <loongson-asxintrin.h>
Instruction: xfmsub.w
Builtin: __builtin_lasx_xfmsub_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2368
```

### Description

Fused multiply-subtract lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmsub.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  dst.fp32[i] = fms(a.fp32[i], b.fp32[i], c.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmsub_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
```

## __m256d __lasx_xfmul_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256d __lasx_xfmul_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfmul.d
Builtin: __builtin_lasx_xfmul_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2333
```

### Description

Multiply lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmul.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp64[i] = a.fp64[i] * b.fp64[i];
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfmul_d((v4f64)_1, (v4f64)_2);
```

## __m256 __lasx_xfmul_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256 __lasx_xfmul_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfmul.w
Builtin: __builtin_lasx_xfmul_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2326
```

### Description

Multiply lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfmul.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = a.fp32[i] * b.fp32[i];
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfmul_w((v8f32)_1, (v8f32)_2);
```

## __m256d __lasx_xfrcp_d (__m256d _1)

### Synopsis

```c
__m256d __lasx_xfrcp_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xfrcp.d
Builtin: __builtin_lasx_xfrcp_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2599
```

### Description

Compute reciprocal estimate lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfrcp.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = 1.0 / a.fp64[i];
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfrcp_d((v4f64)_1);
```

## __m256 __lasx_xfrcp_w (__m256 _1)

### Synopsis

```c
__m256 __lasx_xfrcp_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xfrcp.w
Builtin: __builtin_lasx_xfrcp_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2592
```

### Description

Compute reciprocal estimate lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfrcp.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = 1.0 / a.fp32[i];
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfrcp_w((v8f32)_1);
```

## __m256d __lasx_xfrsqrt_d (__m256d _1)

### Synopsis

```c
__m256d __lasx_xfrsqrt_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xfrsqrt.d
Builtin: __builtin_lasx_xfrsqrt_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2627
```

### Description

Compute reciprocal square-root estimate lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfrsqrt.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = 1.0 / sqrt(a.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfrsqrt_d((v4f64)_1);
```

## __m256 __lasx_xfrsqrt_w (__m256 _1)

### Synopsis

```c
__m256 __lasx_xfrsqrt_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xfrsqrt.w
Builtin: __builtin_lasx_xfrsqrt_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2620
```

### Description

Compute reciprocal square-root estimate lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfrsqrt.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = 1.0 / sqrt(a.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfrsqrt_w((v8f32)_1);
```

## __m256d __lasx_xfsqrt_d (__m256d _1)

### Synopsis

```c
__m256d __lasx_xfsqrt_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xfsqrt.d
Builtin: __builtin_lasx_xfsqrt_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2585
```

### Description

Compute square root lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsqrt.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = sqrt(a.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfsqrt_d((v4f64)_1);
```

## __m256 __lasx_xfsqrt_w (__m256 _1)

### Synopsis

```c
__m256 __lasx_xfsqrt_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xfsqrt.w
Builtin: __builtin_lasx_xfsqrt_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2578
```

### Description

Compute square root lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsqrt.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = sqrt(a.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfsqrt_w((v8f32)_1);
```

## __m256d __lasx_xfsub_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256d __lasx_xfsub_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfsub.d
Builtin: __builtin_lasx_xfsub_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2319
```

### Description

Subtract lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsub.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp64[i] = a.fp64[i] - b.fp64[i];
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfsub_d((v4f64)_1, (v4f64)_2);
```

## __m256 __lasx_xfsub_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256 __lasx_xfsub_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfsub.w
Builtin: __builtin_lasx_xfsub_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2312
```

### Description

Subtract lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsub.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = a.fp32[i] - b.fp32[i];
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfsub_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xftq_h (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xftq_h (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xftq.h
Builtin: __builtin_lasx_xftq_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2410
```

### Description

Convert floating-point lanes to fixed-point q-format lane-wise for 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xftq.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for each paired floating-point source lane i:
  dst.fixed_lane[i] = float_to_fixed_point_q(a, b, i);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftq_h((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xftq_w (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xftq_w (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xftq.w
Builtin: __builtin_lasx_xftq_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2417
```

### Description

Convert floating-point lanes to fixed-point q-format lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xftq.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for each paired floating-point source lane i:
  dst.fixed_lane[i] = float_to_fixed_point_q(a, b, i);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftq_w((v4f64)_1, (v4f64)_2);
```

## __m256d __lasx_xvfabs_d (__m256d _1)

### Synopsis

```c
__m256d __lasx_xvfabs_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xvfabs.d
Builtin: __builtin_lasx_xvfabs_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3743
```

### Description

Compute absolute value lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfabs.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = abs(a.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfabs_d((v4f64)_1);
```

## __m256 __lasx_xvfabs_w (__m256 _1)

### Synopsis

```c
__m256 __lasx_xvfabs_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvfabs.w
Builtin: __builtin_lasx_xvfabs_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3736
```

### Description

Compute absolute value lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfabs.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = abs(a.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfabs_w((v8f32)_1);
```

## __m256d __lasx_xvfaddsub_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256d __lasx_xvfaddsub_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xvfaddsub.d
Builtin: __builtin_lasx_xvfaddsub_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3764
```

### Description

Alternately add and subtract floating-point 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfaddsub.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp64[i] = a.fp64[i] + b.fp64[i];
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfaddsub_d((v4f64)_1, (v4f64)_2);
```

## __m256 __lasx_xvfaddsub_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256 __lasx_xvfaddsub_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xvfaddsub.w
Builtin: __builtin_lasx_xvfaddsub_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3771
```

### Description

Alternately add and subtract floating-point 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfaddsub.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = a.fp32[i] + b.fp32[i];
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfaddsub_w((v8f32)_1, (v8f32)_2);
```

## __m256d __lasx_xvfmadd_d (__m256d _1, __m256d _2, __m256d _3)

### Synopsis

```c
__m256d __lasx_xvfmadd_d (__m256d _1, __m256d _2, __m256d _3)
#include <loongson-asxintrin.h>
Instruction: xvfmadd.d
Builtin: __builtin_lasx_xvfmadd_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3778
```

### Description

Fused multiply-add lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfmadd.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.fp64[i] = fma(a.fp64[i], b.fp64[i], c.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfmadd_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
```

## __m256 __lasx_xvfmadd_w (__m256 _1, __m256 _2, __m256 _3)

### Synopsis

```c
__m256 __lasx_xvfmadd_w (__m256 _1, __m256 _2, __m256 _3)
#include <loongson-asxintrin.h>
Instruction: xvfmadd.w
Builtin: __builtin_lasx_xvfmadd_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3785
```

### Description

Fused multiply-add lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfmadd.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  dst.fp32[i] = fma(a.fp32[i], b.fp32[i], c.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfmadd_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
```

## __m256d __lasx_xvfmaddsub_d (__m256d _1, __m256d _2, __m256d _3)

### Synopsis

```c
__m256d __lasx_xvfmaddsub_d (__m256d _1, __m256d _2, __m256d _3)
#include <loongson-asxintrin.h>
Instruction: xvfmaddsub.d
Builtin: __builtin_lasx_xvfmaddsub_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3848
```

### Description

Fused multiply-add lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfmaddsub.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  tmp = fused_multiply_add(a.fp64[i], b.fp64[i], c.fp64[i]);
  dst.lane[i] = (i % 2 == 0) ? tmp : fused_multiply_sub(a.lane[i], b.lane[i], c.lane[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfmaddsub_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
```

## __m256 __lasx_xvfmaddsub_w (__m256 _1, __m256 _2, __m256 _3)

### Synopsis

```c
__m256 __lasx_xvfmaddsub_w (__m256 _1, __m256 _2, __m256 _3)
#include <loongson-asxintrin.h>
Instruction: xvfmaddsub.w
Builtin: __builtin_lasx_xvfmaddsub_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3855
```

### Description

Fused multiply-add lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfmaddsub.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  tmp = fused_multiply_add(a.fp32[i], b.fp32[i], c.fp32[i]);
  dst.lane[i] = (i % 2 == 0) ? tmp : fused_multiply_sub(a.lane[i], b.lane[i], c.lane[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfmaddsub_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
```

## __m256d __lasx_xvfmsub_d (__m256d _1, __m256d _2, __m256d _3)

### Synopsis

```c
__m256d __lasx_xvfmsub_d (__m256d _1, __m256d _2, __m256d _3)
#include <loongson-asxintrin.h>
Instruction: xvfmsub.d
Builtin: __builtin_lasx_xvfmsub_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3792
```

### Description

Fused multiply-subtract lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfmsub.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.fp64[i] = fms(a.fp64[i], b.fp64[i], c.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfmsub_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
```

## __m256 __lasx_xvfmsub_w (__m256 _1, __m256 _2, __m256 _3)

### Synopsis

```c
__m256 __lasx_xvfmsub_w (__m256 _1, __m256 _2, __m256 _3)
#include <loongson-asxintrin.h>
Instruction: xvfmsub.w
Builtin: __builtin_lasx_xvfmsub_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3799
```

### Description

Fused multiply-subtract lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfmsub.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  dst.fp32[i] = fms(a.fp32[i], b.fp32[i], c.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfmsub_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
```

## __m256d __lasx_xvfmsubadd_d (__m256d _1, __m256d _2, __m256d _3)

### Synopsis

```c
__m256d __lasx_xvfmsubadd_d (__m256d _1, __m256d _2, __m256d _3)
#include <loongson-asxintrin.h>
Instruction: xvfmsubadd.d
Builtin: __builtin_lasx_xvfmsubadd_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3862
```

### Description

Fused multiply-subtract lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfmsubadd.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.lane[i] = (i % 2 == 0) ? (a.lane[i] - b.lane[i]) : (a.lane[i] + b.lane[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfmsubadd_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
```

## __m256 __lasx_xvfmsubadd_w (__m256 _1, __m256 _2, __m256 _3)

### Synopsis

```c
__m256 __lasx_xvfmsubadd_w (__m256 _1, __m256 _2, __m256 _3)
#include <loongson-asxintrin.h>
Instruction: xvfmsubadd.w
Builtin: __builtin_lasx_xvfmsubadd_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3869
```

### Description

Fused multiply-subtract lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfmsubadd.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  dst.lane[i] = (i % 2 == 0) ? (a.lane[i] - b.lane[i]) : (a.lane[i] + b.lane[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfmsubadd_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
```

## __m256d __lasx_xvfneg_d (__m256d _1)

### Synopsis

```c
__m256d __lasx_xvfneg_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xvfneg.d
Builtin: __builtin_lasx_xvfneg_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3757
```

### Description

Negate lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfneg.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = -a.fp64[i];
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfneg_d((v4f64)_1);
```

## __m256 __lasx_xvfneg_w (__m256 _1)

### Synopsis

```c
__m256 __lasx_xvfneg_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvfneg.w
Builtin: __builtin_lasx_xvfneg_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3750
```

### Description

Negate lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfneg.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = -a.fp32[i];
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfneg_w((v8f32)_1);
```

## __m256d __lasx_xvfnmadd_d (__m256d _1, __m256d _2, __m256d _3)

### Synopsis

```c
__m256d __lasx_xvfnmadd_d (__m256d _1, __m256d _2, __m256d _3)
#include <loongson-asxintrin.h>
Instruction: xvfnmadd.d
Builtin: __builtin_lasx_xvfnmadd_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3806
```

### Description

Negated fused multiply-add lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfnmadd.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.fp64[i] = -fma(a.fp64[i], b.fp64[i], c.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfnmadd_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
```

## __m256 __lasx_xvfnmadd_w (__m256 _1, __m256 _2, __m256 _3)

### Synopsis

```c
__m256 __lasx_xvfnmadd_w (__m256 _1, __m256 _2, __m256 _3)
#include <loongson-asxintrin.h>
Instruction: xvfnmadd.w
Builtin: __builtin_lasx_xvfnmadd_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3813
```

### Description

Negated fused multiply-add lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfnmadd.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  dst.fp32[i] = -fma(a.fp32[i], b.fp32[i], c.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfnmadd_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
```

## __m256d __lasx_xvfnmsub_d (__m256d _1, __m256d _2, __m256d _3)

### Synopsis

```c
__m256d __lasx_xvfnmsub_d (__m256d _1, __m256d _2, __m256d _3)
#include <loongson-asxintrin.h>
Instruction: xvfnmsub.d
Builtin: __builtin_lasx_xvfnmsub_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3820
```

### Description

Negated fused multiply-subtract lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfnmsub.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.fp64[i] = -fms(a.fp64[i], b.fp64[i], c.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfnmsub_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
```

## __m256 __lasx_xvfnmsub_w (__m256 _1, __m256 _2, __m256 _3)

### Synopsis

```c
__m256 __lasx_xvfnmsub_w (__m256 _1, __m256 _2, __m256 _3)
#include <loongson-asxintrin.h>
Instruction: xvfnmsub.w
Builtin: __builtin_lasx_xvfnmsub_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3827
```

### Description

Negated fused multiply-subtract lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfnmsub.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  dst.fp32[i] = -fms(a.fp32[i], b.fp32[i], c.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfnmsub_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
```

## __m256d __lasx_xvfsubadd_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256d __lasx_xvfsubadd_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xvfsubadd.d
Builtin: __builtin_lasx_xvfsubadd_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3834
```

### Description

Alternately add and subtract floating-point 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfsubadd.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.lane[i] = (i % 2 == 0) ? (a.lane[i] - b.lane[i]) : (a.lane[i] + b.lane[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvfsubadd_d((v4f64)_1, (v4f64)_2);
```

## __m256 __lasx_xvfsubadd_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256 __lasx_xvfsubadd_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xvfsubadd.w
Builtin: __builtin_lasx_xvfsubadd_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3841
```

### Description

Alternately add and subtract floating-point 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfsubadd.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.lane[i] = (i % 2 == 0) ? (a.lane[i] - b.lane[i]) : (a.lane[i] + b.lane[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xvfsubadd_w((v8f32)_1, (v8f32)_2);
```

