# Float Conversion

Generated from `include/loongson-sxintrin.h`. This page contains 32 intrinsics.

## __m128i __lsx_vfceil_d (__m128d _1)

### Synopsis

```c
__m128i __lsx_vfceil_d (__m128d _1)
#include <loongson-sxintrin.h>
Instruction: vfceil.d
Builtin: __builtin_lsx_vfceil_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1158
```

### Description

Round toward positive infinity and convert lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfceil.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = integer_ceil(a.fp64[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfceil_d((v2f64)_1);
```

## __m128i __lsx_vfceil_w (__m128 _1)

### Synopsis

```c
__m128i __lsx_vfceil_w (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vfceil.w
Builtin: __builtin_lsx_vfceil_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1151
```

### Description

Round toward positive infinity and convert lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfceil.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.fp32[i] = integer_ceil(a.fp32[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfceil_w((v4f32)_1);
```

## __m128i __lsx_vfceildo_w (__m128d _1, __m128d _2)

### Synopsis

```c
__m128i __lsx_vfceildo_w (__m128d _1, __m128d _2)
#include <loongson-sxintrin.h>
Instruction: vfceildo.w
Builtin: __builtin_lsx_vfceildo_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1200
```

### Description

Round toward positive infinity and convert lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfceildo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp32[i] = integer_ceil(a.fp32[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfceildo_w((v2f64)_1, (v2f64)_2);
```

## __m128i __lsx_vfceilupl_d (__m128 _1)

### Synopsis

```c
__m128i __lsx_vfceilupl_d (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vfceilupl.d
Builtin: __builtin_lsx_vfceilupl_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1263
```

### Description

Round toward positive infinity and convert lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfceilupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = integer_ceil(a.fp64[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfceilupl_d((v4f32)_1);
```

## __m128i __lsx_vfceilupr_d (__m128 _1)

### Synopsis

```c
__m128i __lsx_vfceilupr_d (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vfceilupr.d
Builtin: __builtin_lsx_vfceilupr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1270
```

### Description

Round toward positive infinity and convert lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfceilupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = integer_ceil(a.fp64[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfceilupr_d((v4f32)_1);
```

## __m128 __lsx_vffintdo_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128 __lsx_vffintdo_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vffintdo.w
Builtin: __builtin_lsx_vffintdo_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1186
```

### Description

Convert integer to floating point lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vffintdo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp32[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
return (__m128)__builtin_lsx_vffintdo_w((v2i64)_1, (v2i64)_2);
```

## __m128d __lsx_vffintupl_d (__m128i _1)

### Synopsis

```c
__m128d __lsx_vffintupl_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vffintupl.d
Builtin: __builtin_lsx_vffintupl_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1235
```

### Description

Convert integer to floating point lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vffintupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
return (__m128d)__builtin_lsx_vffintupl_d((v4i32)_1);
```

## __m128d __lsx_vffintupr_d (__m128i _1)

### Synopsis

```c
__m128d __lsx_vffintupr_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vffintupr.d
Builtin: __builtin_lsx_vffintupr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1242
```

### Description

Convert integer to floating point lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vffintupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = float_convert(a.integer_lane[i]);
```

### Header Mapping

```c
return (__m128d)__builtin_lsx_vffintupr_d((v4i32)_1);
```

## __m128i __lsx_vffloor_d (__m128d _1)

### Synopsis

```c
__m128i __lsx_vffloor_d (__m128d _1)
#include <loongson-sxintrin.h>
Instruction: vffloor.d
Builtin: __builtin_lsx_vffloor_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1172
```

### Description

Round toward negative infinity and convert lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vffloor.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = integer_floor(a.fp64[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vffloor_d((v2f64)_1);
```

## __m128i __lsx_vffloor_w (__m128 _1)

### Synopsis

```c
__m128i __lsx_vffloor_w (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vffloor.w
Builtin: __builtin_lsx_vffloor_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1165
```

### Description

Round toward negative infinity and convert lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vffloor.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.fp32[i] = integer_floor(a.fp32[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vffloor_w((v4f32)_1);
```

## __m128i __lsx_vffloordo_w (__m128d _1, __m128d _2)

### Synopsis

```c
__m128i __lsx_vffloordo_w (__m128d _1, __m128d _2)
#include <loongson-sxintrin.h>
Instruction: vffloordo.w
Builtin: __builtin_lsx_vffloordo_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1207
```

### Description

Round toward negative infinity and convert lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vffloordo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp32[i] = integer_floor(a.fp32[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vffloordo_w((v2f64)_1, (v2f64)_2);
```

## __m128i __lsx_vffloorupl_d (__m128 _1)

### Synopsis

```c
__m128i __lsx_vffloorupl_d (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vffloorupl.d
Builtin: __builtin_lsx_vffloorupl_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1277
```

### Description

Round toward negative infinity and convert lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vffloorupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = integer_floor(a.fp64[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vffloorupl_d((v4f32)_1);
```

## __m128i __lsx_vffloorupr_d (__m128 _1)

### Synopsis

```c
__m128i __lsx_vffloorupr_d (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vffloorupr.d
Builtin: __builtin_lsx_vffloorupr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1284
```

### Description

Round toward negative infinity and convert lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vffloorupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = integer_floor(a.fp64[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vffloorupr_d((v4f32)_1);
```

## __m128i __lsx_vfrint_rm00_d (__m128d _1)

### Synopsis

```c
__m128i __lsx_vfrint_rm00_d (__m128d _1)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm00.d
Builtin: __builtin_lsx_vfrint_rm00_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1312
```

### Description

Round to an integral floating-point value lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrint.rm00.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = round_to_integral_float(a.fp64[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfrint_rm00_d((v2f64)_1);
```

## __m128i __lsx_vfrint_rm00_w (__m128 _1)

### Synopsis

```c
__m128i __lsx_vfrint_rm00_w (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm00.w
Builtin: __builtin_lsx_vfrint_rm00_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1305
```

### Description

Round to an integral floating-point value lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrint.rm00.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.fp32[i] = round_to_integral_float(a.fp32[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfrint_rm00_w((v4f32)_1);
```

## __m128i __lsx_vfrint_rm01_d (__m128d _1)

### Synopsis

```c
__m128i __lsx_vfrint_rm01_d (__m128d _1)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm01.d
Builtin: __builtin_lsx_vfrint_rm01_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1326
```

### Description

Round to an integral floating-point value lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrint.rm01.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = round_to_integral_float(a.fp64[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfrint_rm01_d((v2f64)_1);
```

## __m128i __lsx_vfrint_rm01_w (__m128 _1)

### Synopsis

```c
__m128i __lsx_vfrint_rm01_w (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm01.w
Builtin: __builtin_lsx_vfrint_rm01_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1319
```

### Description

Round to an integral floating-point value lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrint.rm01.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.fp32[i] = round_to_integral_float(a.fp32[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfrint_rm01_w((v4f32)_1);
```

## __m128i __lsx_vfrint_rm10_d (__m128d _1)

### Synopsis

```c
__m128i __lsx_vfrint_rm10_d (__m128d _1)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm10.d
Builtin: __builtin_lsx_vfrint_rm10_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1340
```

### Description

Round to an integral floating-point value lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrint.rm10.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = round_to_integral_float(a.fp64[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfrint_rm10_d((v2f64)_1);
```

## __m128i __lsx_vfrint_rm10_w (__m128 _1)

### Synopsis

```c
__m128i __lsx_vfrint_rm10_w (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm10.w
Builtin: __builtin_lsx_vfrint_rm10_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1333
```

### Description

Round to an integral floating-point value lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrint.rm10.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.fp32[i] = round_to_integral_float(a.fp32[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfrint_rm10_w((v4f32)_1);
```

## __m128i __lsx_vfrint_rm11_d (__m128d _1)

### Synopsis

```c
__m128i __lsx_vfrint_rm11_d (__m128d _1)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm11.d
Builtin: __builtin_lsx_vfrint_rm11_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1354
```

### Description

Round to an integral floating-point value lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrint.rm11.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = round_to_integral_float(a.fp64[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfrint_rm11_d((v2f64)_1);
```

## __m128i __lsx_vfrint_rm11_w (__m128 _1)

### Synopsis

```c
__m128i __lsx_vfrint_rm11_w (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vfrint.rm11.w
Builtin: __builtin_lsx_vfrint_rm11_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1347
```

### Description

Round to an integral floating-point value lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrint.rm11.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.fp32[i] = round_to_integral_float(a.fp32[i], rounding_mode_from_suffix);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfrint_rm11_w((v4f32)_1);
```

## __m128i __lsx_vfround_d (__m128d _1)

### Synopsis

```c
__m128i __lsx_vfround_d (__m128d _1)
#include <loongson-sxintrin.h>
Instruction: vfround.d
Builtin: __builtin_lsx_vfround_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1144
```

### Description

Round to nearest and convert lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfround.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = integer_round_nearest(a.fp64[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfround_d((v2f64)_1);
```

## __m128i __lsx_vfround_w (__m128 _1)

### Synopsis

```c
__m128i __lsx_vfround_w (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vfround.w
Builtin: __builtin_lsx_vfround_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1137
```

### Description

Round to nearest and convert lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfround.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.fp32[i] = integer_round_nearest(a.fp32[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfround_w((v4f32)_1);
```

## __m128i __lsx_vfrounddo_w (__m128d _1, __m128d _2)

### Synopsis

```c
__m128i __lsx_vfrounddo_w (__m128d _1, __m128d _2)
#include <loongson-sxintrin.h>
Instruction: vfrounddo.w
Builtin: __builtin_lsx_vfrounddo_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1214
```

### Description

Round to nearest and convert lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrounddo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp32[i] = integer_round_nearest(a.fp32[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfrounddo_w((v2f64)_1, (v2f64)_2);
```

## __m128i __lsx_vfroundupl_d (__m128 _1)

### Synopsis

```c
__m128i __lsx_vfroundupl_d (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vfroundupl.d
Builtin: __builtin_lsx_vfroundupl_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1291
```

### Description

Round to nearest and convert lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfroundupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = integer_round_nearest(a.fp64[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfroundupl_d((v4f32)_1);
```

## __m128i __lsx_vfroundupr_d (__m128 _1)

### Synopsis

```c
__m128i __lsx_vfroundupr_d (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vfroundupr.d
Builtin: __builtin_lsx_vfroundupr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1298
```

### Description

Round to nearest and convert lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfroundupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = integer_round_nearest(a.fp64[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfroundupr_d((v4f32)_1);
```

## __m128i __lsx_vftintdo_w (__m128d _1, __m128d _2)

### Synopsis

```c
__m128i __lsx_vftintdo_w (__m128d _1, __m128d _2)
#include <loongson-sxintrin.h>
Instruction: vftintdo.w
Builtin: __builtin_lsx_vftintdo_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1179
```

### Description

Convert floating point to integer lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vftintdo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp32[i] = integer_convert_with_current_rounding(a.fp32[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vftintdo_w((v2f64)_1, (v2f64)_2);
```

## __m128i __lsx_vftintupl_d (__m128 _1)

### Synopsis

```c
__m128i __lsx_vftintupl_d (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vftintupl.d
Builtin: __builtin_lsx_vftintupl_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1221
```

### Description

Convert floating point to integer lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vftintupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = integer_convert_with_current_rounding(a.fp64[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vftintupl_d((v4f32)_1);
```

## __m128i __lsx_vftintupr_d (__m128 _1)

### Synopsis

```c
__m128i __lsx_vftintupr_d (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vftintupr.d
Builtin: __builtin_lsx_vftintupr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1228
```

### Description

Convert floating point to integer lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vftintupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = integer_convert_with_current_rounding(a.fp64[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vftintupr_d((v4f32)_1);
```

## __m128i __lsx_vftruncdo_w (__m128d _1, __m128d _2)

### Synopsis

```c
__m128i __lsx_vftruncdo_w (__m128d _1, __m128d _2)
#include <loongson-sxintrin.h>
Instruction: vftruncdo.w
Builtin: __builtin_lsx_vftruncdo_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1193
```

### Description

Truncate floating point to integer lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vftruncdo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp32[i] = integer_truncate_toward_zero(a.fp32[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vftruncdo_w((v2f64)_1, (v2f64)_2);
```

## __m128i __lsx_vftruncupl_d (__m128 _1)

### Synopsis

```c
__m128i __lsx_vftruncupl_d (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vftruncupl.d
Builtin: __builtin_lsx_vftruncupl_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1249
```

### Description

Truncate floating point to integer lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vftruncupl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = integer_truncate_toward_zero(a.fp64[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vftruncupl_d((v4f32)_1);
```

## __m128i __lsx_vftruncupr_d (__m128 _1)

### Synopsis

```c
__m128i __lsx_vftruncupr_d (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vftruncupr.d
Builtin: __builtin_lsx_vftruncupr_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1256
```

### Description

Truncate floating point to integer lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vftruncupr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = integer_truncate_toward_zero(a.fp64[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vftruncupr_d((v4f32)_1);
```

