# Float Conversion

Generated from `include/loongson-asxintrin.h`. This page contains 56 intrinsics.

## __m256i __lasx_xfclass_d (__m256d _1)

### Synopsis

```c
__m256i __lasx_xfclass_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xfclass.d
Builtin: __builtin_lasx_xfclass_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2571
```

### Description

Classify floating-point values lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfclass.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = classify_fp(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfclass_d((v4f64)_1);
```

## __m256i __lasx_xfclass_w (__m256 _1)

### Synopsis

```c
__m256i __lasx_xfclass_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xfclass.w
Builtin: __builtin_lasx_xfclass_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2564
```

### Description

Classify floating-point values lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfclass.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = classify_fp(a.fp32[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfclass_w((v8f32)_1);
```

## __m256i __lasx_xfexdo_h (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfexdo_h (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfexdo.h
Builtin: __builtin_lasx_xfexdo_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2396
```

### Description

Extract and convert paired floating-point data lane-wise for 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfexdo.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
combined = interleave_or_pair_fp_sources(a, b);
for each destination lane i:
  dst.lane[i] = extract_odd_or_double_format_element(combined, i);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfexdo_h((v8f32)_1, (v8f32)_2);
```

## __m256 __lasx_xfexdo_w (__m256d _1, __m256d _2)

### Synopsis

```c
__m256 __lasx_xfexdo_w (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfexdo.w
Builtin: __builtin_lasx_xfexdo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2403
```

### Description

Extract and convert paired floating-point data lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfexdo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
combined = interleave_or_pair_fp_sources(a, b);
for each destination lane i:
  dst.lane[i] = extract_odd_or_double_format_element(combined, i);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfexdo_w((v4f64)_1, (v4f64)_2);
```

## __m256d __lasx_xfexp2_d (__m256d _1, __m256i _2)

### Synopsis

```c
__m256d __lasx_xfexp2_d (__m256d _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: xfexp2.d
Builtin: __builtin_lasx_xfexp2_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2389
```

### Description

Compute base-2 exponential lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfexp2.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp64[i] = exp2(a.fp64[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfexp2_d((v4f64)_1, (v4i64)_2);
```

## __m256 __lasx_xfexp2_w (__m256 _1, __m256i _2)

### Synopsis

```c
__m256 __lasx_xfexp2_w (__m256 _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: xfexp2.w
Builtin: __builtin_lasx_xfexp2_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2382
```

### Description

Compute base-2 exponential lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfexp2.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = exp2(a.fp32[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfexp2_w((v8f32)_1, (v8i32)_2);
```

## __m256d __lasx_xfexupl_d (__m256 _1)

### Synopsis

```c
__m256d __lasx_xfexupl_d (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xfexupl.d
Builtin: __builtin_lasx_xfexupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2655
```

### Description

Extend lower floating-point or fixed-point lanes lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfexupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for each lower source lane i:
  dst.fp_lane[i] = widen_integer_or_float_to_next_fp_width(a, i);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfexupl_d((v8f32)_1);
```

## __m256 __lasx_xfexupl_w (__m256i _1)

### Synopsis

```c
__m256 __lasx_xfexupl_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xfexupl.w
Builtin: __builtin_lasx_xfexupl_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2648
```

### Description

Extend lower floating-point or fixed-point lanes lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfexupl.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for each lower source lane i:
  dst.fp_lane[i] = widen_integer_or_float_to_next_fp_width(a, i);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfexupl_w((v16i16)_1);
```

## __m256d __lasx_xfexupr_d (__m256 _1)

### Synopsis

```c
__m256d __lasx_xfexupr_d (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xfexupr.d
Builtin: __builtin_lasx_xfexupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2669
```

### Description

Extend upper floating-point or fixed-point lanes lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfexupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for each upper source lane i:
  dst.fp_lane[i] = widen_integer_or_float_to_next_fp_width(a, i);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfexupr_d((v8f32)_1);
```

## __m256 __lasx_xfexupr_w (__m256i _1)

### Synopsis

```c
__m256 __lasx_xfexupr_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xfexupr.w
Builtin: __builtin_lasx_xfexupr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2662
```

### Description

Extend upper floating-point or fixed-point lanes lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfexupr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for each upper source lane i:
  dst.fp_lane[i] = widen_integer_or_float_to_next_fp_width(a, i);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfexupr_w((v16i16)_1);
```

## __m256d __lasx_xffint_s_d (__m256i _1)

### Synopsis

```c
__m256d __lasx_xffint_s_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xffint.s.d
Builtin: __builtin_lasx_xffint_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2767
```

### Description

Convert integer to floating point lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xffint.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xffint_s_d((v4i64)_1);
```

## __m256 __lasx_xffint_s_w (__m256i _1)

### Synopsis

```c
__m256 __lasx_xffint_s_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xffint.s.w
Builtin: __builtin_lasx_xffint_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2760
```

### Description

Convert integer to floating point lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xffint.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xffint_s_w((v8i32)_1);
```

## __m256d __lasx_xffint_u_d (__m256i _1)

### Synopsis

```c
__m256d __lasx_xffint_u_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xffint.u.d
Builtin: __builtin_lasx_xffint_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2781
```

### Description

Convert integer to floating point lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xffint.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xffint_u_d((v4u64)_1);
```

## __m256 __lasx_xffint_u_w (__m256i _1)

### Synopsis

```c
__m256 __lasx_xffint_u_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xffint.u.w
Builtin: __builtin_lasx_xffint_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2774
```

### Description

Convert integer to floating point lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xffint.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xffint_u_w((v8u32)_1);
```

## __m256d __lasx_xfrint_d (__m256d _1)

### Synopsis

```c
__m256d __lasx_xfrint_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xfrint.d
Builtin: __builtin_lasx_xfrint_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2613
```

### Description

Round to an integral floating-point value lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfrint.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = round_to_integral_float(a.fp64[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xfrint_d((v4f64)_1);
```

## __m256 __lasx_xfrint_w (__m256 _1)

### Synopsis

```c
__m256 __lasx_xfrint_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xfrint.w
Builtin: __builtin_lasx_xfrint_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2606
```

### Description

Round to an integral floating-point value lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfrint.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = round_to_integral_float(a.fp32[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xfrint_w((v8f32)_1);
```

## __m256i __lasx_xftint_s_d (__m256d _1)

### Synopsis

```c
__m256i __lasx_xftint_s_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xftint.s.d
Builtin: __builtin_lasx_xftint_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2711
```

### Description

Convert floating point to integer lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xftint.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_convert_with_current_rounding(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftint_s_d((v4f64)_1);
```

## __m256i __lasx_xftint_s_w (__m256 _1)

### Synopsis

```c
__m256i __lasx_xftint_s_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xftint.s.w
Builtin: __builtin_lasx_xftint_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2704
```

### Description

Convert floating point to integer lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xftint.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = integer_convert_with_current_rounding(a.fp32[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftint_s_w((v8f32)_1);
```

## __m256i __lasx_xftint_u_d (__m256d _1)

### Synopsis

```c
__m256i __lasx_xftint_u_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xftint.u.d
Builtin: __builtin_lasx_xftint_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2725
```

### Description

Convert floating point to integer lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xftint.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_convert_with_current_rounding(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftint_u_d((v4f64)_1);
```

## __m256i __lasx_xftint_u_w (__m256 _1)

### Synopsis

```c
__m256i __lasx_xftint_u_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xftint.u.w
Builtin: __builtin_lasx_xftint_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2718
```

### Description

Convert floating point to integer lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xftint.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = integer_convert_with_current_rounding(a.fp32[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftint_u_w((v8f32)_1);
```

## __m256i __lasx_xftrunc_s_d (__m256d _1)

### Synopsis

```c
__m256i __lasx_xftrunc_s_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xftrunc.s.d
Builtin: __builtin_lasx_xftrunc_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2739
```

### Description

Truncate floating point to integer lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xftrunc.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_truncate_toward_zero(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftrunc_s_d((v4f64)_1);
```

## __m256i __lasx_xftrunc_s_w (__m256 _1)

### Synopsis

```c
__m256i __lasx_xftrunc_s_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xftrunc.s.w
Builtin: __builtin_lasx_xftrunc_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2732
```

### Description

Truncate floating point to integer lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xftrunc.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = integer_truncate_toward_zero(a.fp32[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftrunc_s_w((v8f32)_1);
```

## __m256i __lasx_xftrunc_u_d (__m256d _1)

### Synopsis

```c
__m256i __lasx_xftrunc_u_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xftrunc.u.d
Builtin: __builtin_lasx_xftrunc_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2753
```

### Description

Truncate floating point to integer lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xftrunc.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_truncate_toward_zero(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftrunc_u_d((v4f64)_1);
```

## __m256i __lasx_xftrunc_u_w (__m256 _1)

### Synopsis

```c
__m256i __lasx_xftrunc_u_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xftrunc.u.w
Builtin: __builtin_lasx_xftrunc_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2746
```

### Description

Truncate floating point to integer lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xftrunc.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = integer_truncate_toward_zero(a.fp32[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xftrunc_u_w((v8f32)_1);
```

## __m256i __lasx_xvfceil_d (__m256d _1)

### Synopsis

```c
__m256i __lasx_xvfceil_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xvfceil.d
Builtin: __builtin_lasx_xvfceil_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3897
```

### Description

Round toward positive infinity and convert lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfceil.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_ceil(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfceil_d((v4f64)_1);
```

## __m256i __lasx_xvfceil_w (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvfceil_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvfceil.w
Builtin: __builtin_lasx_xvfceil_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3890
```

### Description

Round toward positive infinity and convert lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfceil.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = integer_ceil(a.fp32[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfceil_w((v8f32)_1);
```

## __m256i __lasx_xvfceildo_w (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xvfceildo_w (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xvfceildo.w
Builtin: __builtin_lasx_xvfceildo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3939
```

### Description

Round toward positive infinity and convert lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfceildo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = integer_ceil(a.fp32[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfceildo_w((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xvfceilupl_d (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvfceilupl_d (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvfceilupl.d
Builtin: __builtin_lasx_xvfceilupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4002
```

### Description

Round toward positive infinity and convert lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfceilupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_ceil(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfceilupl_d((v8f32)_1);
```

## __m256i __lasx_xvfceilupr_d (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvfceilupr_d (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvfceilupr.d
Builtin: __builtin_lasx_xvfceilupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4009
```

### Description

Round toward positive infinity and convert lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfceilupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_ceil(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfceilupr_d((v8f32)_1);
```

## __m256 __lasx_xvffintdo_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256 __lasx_xvffintdo_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: xvffintdo.w
Builtin: __builtin_lasx_xvffintdo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3925
```

### Description

Convert integer to floating point lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvffintdo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
return (__m256)__builtin_lasx_xvffintdo_w((v4i64)_1, (v4i64)_2);
```

## __m256d __lasx_xvffintupl_d (__m256i _1)

### Synopsis

```c
__m256d __lasx_xvffintupl_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xvffintupl.d
Builtin: __builtin_lasx_xvffintupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3974
```

### Description

Convert integer to floating point lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvffintupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvffintupl_d((v8i32)_1);
```

## __m256d __lasx_xvffintupr_d (__m256i _1)

### Synopsis

```c
__m256d __lasx_xvffintupr_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xvffintupr.d
Builtin: __builtin_lasx_xvffintupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3981
```

### Description

Convert integer to floating point lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvffintupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
return (__m256d)__builtin_lasx_xvffintupr_d((v8i32)_1);
```

## __m256i __lasx_xvffloor_d (__m256d _1)

### Synopsis

```c
__m256i __lasx_xvffloor_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xvffloor.d
Builtin: __builtin_lasx_xvffloor_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3911
```

### Description

Round toward negative infinity and convert lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvffloor.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_floor(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvffloor_d((v4f64)_1);
```

## __m256i __lasx_xvffloor_w (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvffloor_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvffloor.w
Builtin: __builtin_lasx_xvffloor_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3904
```

### Description

Round toward negative infinity and convert lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvffloor.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = integer_floor(a.fp32[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvffloor_w((v8f32)_1);
```

## __m256i __lasx_xvffloordo_w (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xvffloordo_w (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xvffloordo.w
Builtin: __builtin_lasx_xvffloordo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3946
```

### Description

Round toward negative infinity and convert lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvffloordo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = integer_floor(a.fp32[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvffloordo_w((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xvffloorupl_d (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvffloorupl_d (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvffloorupl.d
Builtin: __builtin_lasx_xvffloorupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4016
```

### Description

Round toward negative infinity and convert lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvffloorupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_floor(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvffloorupl_d((v8f32)_1);
```

## __m256i __lasx_xvffloorupr_d (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvffloorupr_d (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvffloorupr.d
Builtin: __builtin_lasx_xvffloorupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4023
```

### Description

Round toward negative infinity and convert lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvffloorupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_floor(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvffloorupr_d((v8f32)_1);
```

## __m256i __lasx_xvfrint_rm00_d (__m256d _1)

### Synopsis

```c
__m256i __lasx_xvfrint_rm00_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm00.d
Builtin: __builtin_lasx_xvfrint_rm00_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4051
```

### Description

Round to an integral floating-point value lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfrint.rm00.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = round_to_integral_float(a.fp64[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm00_d((v4f64)_1);
```

## __m256i __lasx_xvfrint_rm00_w (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvfrint_rm00_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm00.w
Builtin: __builtin_lasx_xvfrint_rm00_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4044
```

### Description

Round to an integral floating-point value lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfrint.rm00.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = round_to_integral_float(a.fp32[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm00_w((v8f32)_1);
```

## __m256i __lasx_xvfrint_rm01_d (__m256d _1)

### Synopsis

```c
__m256i __lasx_xvfrint_rm01_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm01.d
Builtin: __builtin_lasx_xvfrint_rm01_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4065
```

### Description

Round to an integral floating-point value lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfrint.rm01.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = round_to_integral_float(a.fp64[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm01_d((v4f64)_1);
```

## __m256i __lasx_xvfrint_rm01_w (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvfrint_rm01_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm01.w
Builtin: __builtin_lasx_xvfrint_rm01_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4058
```

### Description

Round to an integral floating-point value lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfrint.rm01.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = round_to_integral_float(a.fp32[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm01_w((v8f32)_1);
```

## __m256i __lasx_xvfrint_rm10_d (__m256d _1)

### Synopsis

```c
__m256i __lasx_xvfrint_rm10_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm10.d
Builtin: __builtin_lasx_xvfrint_rm10_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4079
```

### Description

Round to an integral floating-point value lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfrint.rm10.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = round_to_integral_float(a.fp64[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm10_d((v4f64)_1);
```

## __m256i __lasx_xvfrint_rm10_w (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvfrint_rm10_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm10.w
Builtin: __builtin_lasx_xvfrint_rm10_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4072
```

### Description

Round to an integral floating-point value lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfrint.rm10.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = round_to_integral_float(a.fp32[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm10_w((v8f32)_1);
```

## __m256i __lasx_xvfrint_rm11_d (__m256d _1)

### Synopsis

```c
__m256i __lasx_xvfrint_rm11_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm11.d
Builtin: __builtin_lasx_xvfrint_rm11_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4093
```

### Description

Round to an integral floating-point value lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfrint.rm11.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = round_to_integral_float(a.fp64[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm11_d((v4f64)_1);
```

## __m256i __lasx_xvfrint_rm11_w (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvfrint_rm11_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvfrint.rm11.w
Builtin: __builtin_lasx_xvfrint_rm11_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4086
```

### Description

Round to an integral floating-point value lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfrint.rm11.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = round_to_integral_float(a.fp32[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrint_rm11_w((v8f32)_1);
```

## __m256i __lasx_xvfround_d (__m256d _1)

### Synopsis

```c
__m256i __lasx_xvfround_d (__m256d _1)
#include <loongson-asxintrin.h>
Instruction: xvfround.d
Builtin: __builtin_lasx_xvfround_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3883
```

### Description

Round to nearest and convert lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfround.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_round_nearest(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfround_d((v4f64)_1);
```

## __m256i __lasx_xvfround_w (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvfround_w (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvfround.w
Builtin: __builtin_lasx_xvfround_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3876
```

### Description

Round to nearest and convert lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfround.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.fp32[i] = integer_round_nearest(a.fp32[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfround_w((v8f32)_1);
```

## __m256i __lasx_xvfrounddo_w (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xvfrounddo_w (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xvfrounddo.w
Builtin: __builtin_lasx_xvfrounddo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3953
```

### Description

Round to nearest and convert lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfrounddo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = integer_round_nearest(a.fp32[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfrounddo_w((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xvfroundupl_d (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvfroundupl_d (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvfroundupl.d
Builtin: __builtin_lasx_xvfroundupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4030
```

### Description

Round to nearest and convert lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfroundupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_round_nearest(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfroundupl_d((v8f32)_1);
```

## __m256i __lasx_xvfroundupr_d (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvfroundupr_d (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvfroundupr.d
Builtin: __builtin_lasx_xvfroundupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4037
```

### Description

Round to nearest and convert lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvfroundupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_round_nearest(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvfroundupr_d((v8f32)_1);
```

## __m256i __lasx_xvftintdo_w (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xvftintdo_w (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xvftintdo.w
Builtin: __builtin_lasx_xvftintdo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3918
```

### Description

Convert floating point to integer lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvftintdo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = integer_convert_with_current_rounding(a.fp32[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvftintdo_w((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xvftintupl_d (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvftintupl_d (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvftintupl.d
Builtin: __builtin_lasx_xvftintupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3960
```

### Description

Convert floating point to integer lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvftintupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_convert_with_current_rounding(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvftintupl_d((v8f32)_1);
```

## __m256i __lasx_xvftintupr_d (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvftintupr_d (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvftintupr.d
Builtin: __builtin_lasx_xvftintupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3967
```

### Description

Convert floating point to integer lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvftintupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_convert_with_current_rounding(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvftintupr_d((v8f32)_1);
```

## __m256i __lasx_xvftruncdo_w (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xvftruncdo_w (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xvftruncdo.w
Builtin: __builtin_lasx_xvftruncdo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3932
```

### Description

Truncate floating point to integer lane-wise for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvftruncdo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.fp32[i] = integer_truncate_toward_zero(a.fp32[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvftruncdo_w((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xvftruncupl_d (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvftruncupl_d (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvftruncupl.d
Builtin: __builtin_lasx_xvftruncupl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3988
```

### Description

Truncate floating point to integer lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvftruncupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_truncate_toward_zero(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvftruncupl_d((v8f32)_1);
```

## __m256i __lasx_xvftruncupr_d (__m256 _1)

### Synopsis

```c
__m256i __lasx_xvftruncupr_d (__m256 _1)
#include <loongson-asxintrin.h>
Instruction: xvftruncupr.d
Builtin: __builtin_lasx_xvftruncupr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3995
```

### Description

Truncate floating point to integer lane-wise for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvftruncupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.fp64[i] = integer_truncate_toward_zero(a.fp64[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvftruncupr_d((v8f32)_1);
```

