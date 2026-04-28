# Float Computation

Generated from `include/loongson-sxintrin.h`. This page contains 26 intrinsics.

## __m128d __lsx_vfabs_d (__m128d _1)

### Synopsis

```c
__m128d __lsx_vfabs_d (__m128d _1)
#include <loongson-sxintrin.h>
Instruction: vfabs.d
Builtin: __builtin_lsx_vfabs_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1004
```

### Description

Compute absolute value lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfabs.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = abs(a.fp64[i]);
```

### Header Mapping

```c
return (__m128d)__builtin_lsx_vfabs_d((v2f64)_1);
```

## __m128 __lsx_vfabs_w (__m128 _1)

### Synopsis

```c
__m128 __lsx_vfabs_w (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vfabs.w
Builtin: __builtin_lsx_vfabs_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:997
```

### Description

Compute absolute value lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfabs.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.fp32[i] = abs(a.fp32[i]);
```

### Header Mapping

```c
return (__m128)__builtin_lsx_vfabs_w((v4f32)_1);
```

## __m128d __lsx_vfaddsub_d (__m128d _1, __m128d _2)

### Synopsis

```c
__m128d __lsx_vfaddsub_d (__m128d _1, __m128d _2)
#include <loongson-sxintrin.h>
Instruction: vfaddsub.d
Builtin: __builtin_lsx_vfaddsub_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1025
```

### Description

Alternately add and subtract floating-point 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfaddsub.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.fp64[i] = a.fp64[i] + b.fp64[i];
```

### Header Mapping

```c
return (__m128d)__builtin_lsx_vfaddsub_d((v2f64)_1, (v2f64)_2);
```

## __m128 __lsx_vfaddsub_w (__m128 _1, __m128 _2)

### Synopsis

```c
__m128 __lsx_vfaddsub_w (__m128 _1, __m128 _2)
#include <loongson-sxintrin.h>
Instruction: vfaddsub.w
Builtin: __builtin_lsx_vfaddsub_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1032
```

### Description

Alternately add and subtract floating-point 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfaddsub.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.fp32[i] = a.fp32[i] + b.fp32[i];
```

### Header Mapping

```c
return (__m128)__builtin_lsx_vfaddsub_w((v4f32)_1, (v4f32)_2);
```

## __m128d __lsx_vfmadd_d (__m128d _1, __m128d _2, __m128d _3)

### Synopsis

```c
__m128d __lsx_vfmadd_d (__m128d _1, __m128d _2, __m128d _3)
#include <loongson-sxintrin.h>
Instruction: vfmadd.d
Builtin: __builtin_lsx_vfmadd_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1067
```

### Description

Fused multiply-add lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfmadd.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..1:
  dst.fp64[i] = fma(a.fp64[i], b.fp64[i], c.fp64[i]);
```

### Header Mapping

```c
return (__m128d)__builtin_lsx_vfmadd_d((v2f64)_1, (v2f64)_2, (v2f64)_3);
```

## __m128 __lsx_vfmadd_w (__m128 _1, __m128 _2, __m128 _3)

### Synopsis

```c
__m128 __lsx_vfmadd_w (__m128 _1, __m128 _2, __m128 _3)
#include <loongson-sxintrin.h>
Instruction: vfmadd.w
Builtin: __builtin_lsx_vfmadd_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1074
```

### Description

Fused multiply-add lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfmadd.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.fp32[i] = fma(a.fp32[i], b.fp32[i], c.fp32[i]);
```

### Header Mapping

```c
return (__m128)__builtin_lsx_vfmadd_w((v4f32)_1, (v4f32)_2, (v4f32)_3);
```

## __m128d __lsx_vfmaddsub_d (__m128d _1, __m128d _2, __m128d _3)

### Synopsis

```c
__m128d __lsx_vfmaddsub_d (__m128d _1, __m128d _2, __m128d _3)
#include <loongson-sxintrin.h>
Instruction: vfmaddsub.d
Builtin: __builtin_lsx_vfmaddsub_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1053
```

### Description

Fused multiply-add lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfmaddsub.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..1:
  tmp = fused_multiply_add(a.fp64[i], b.fp64[i], c.fp64[i]);
  dst.lane[i] = (i % 2 == 0) ? tmp : fused_multiply_sub(a.lane[i], b.lane[i], c.lane[i]);
```

### Header Mapping

```c
return (__m128d)__builtin_lsx_vfmaddsub_d((v2f64)_1, (v2f64)_2, (v2f64)_3);
```

## __m128 __lsx_vfmaddsub_w (__m128 _1, __m128 _2, __m128 _3)

### Synopsis

```c
__m128 __lsx_vfmaddsub_w (__m128 _1, __m128 _2, __m128 _3)
#include <loongson-sxintrin.h>
Instruction: vfmaddsub.w
Builtin: __builtin_lsx_vfmaddsub_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1060
```

### Description

Fused multiply-add lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfmaddsub.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  tmp = fused_multiply_add(a.fp32[i], b.fp32[i], c.fp32[i]);
  dst.lane[i] = (i % 2 == 0) ? tmp : fused_multiply_sub(a.lane[i], b.lane[i], c.lane[i]);
```

### Header Mapping

```c
return (__m128)__builtin_lsx_vfmaddsub_w((v4f32)_1, (v4f32)_2, (v4f32)_3);
```

## __m128d __lsx_vfmsub_d (__m128d _1, __m128d _2, __m128d _3)

### Synopsis

```c
__m128d __lsx_vfmsub_d (__m128d _1, __m128d _2, __m128d _3)
#include <loongson-sxintrin.h>
Instruction: vfmsub.d
Builtin: __builtin_lsx_vfmsub_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1081
```

### Description

Fused multiply-subtract lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfmsub.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..1:
  dst.fp64[i] = fms(a.fp64[i], b.fp64[i], c.fp64[i]);
```

### Header Mapping

```c
return (__m128d)__builtin_lsx_vfmsub_d((v2f64)_1, (v2f64)_2, (v2f64)_3);
```

## __m128 __lsx_vfmsub_w (__m128 _1, __m128 _2, __m128 _3)

### Synopsis

```c
__m128 __lsx_vfmsub_w (__m128 _1, __m128 _2, __m128 _3)
#include <loongson-sxintrin.h>
Instruction: vfmsub.w
Builtin: __builtin_lsx_vfmsub_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1088
```

### Description

Fused multiply-subtract lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfmsub.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.fp32[i] = fms(a.fp32[i], b.fp32[i], c.fp32[i]);
```

### Header Mapping

```c
return (__m128)__builtin_lsx_vfmsub_w((v4f32)_1, (v4f32)_2, (v4f32)_3);
```

## __m128d __lsx_vfmsubadd_d (__m128d _1, __m128d _2, __m128d _3)

### Synopsis

```c
__m128d __lsx_vfmsubadd_d (__m128d _1, __m128d _2, __m128d _3)
#include <loongson-sxintrin.h>
Instruction: vfmsubadd.d
Builtin: __builtin_lsx_vfmsubadd_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1123
```

### Description

Fused multiply-subtract lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfmsubadd.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..1:
  dst.lane[i] = (i % 2 == 0) ? (a.lane[i] - b.lane[i]) : (a.lane[i] + b.lane[i]);
```

### Header Mapping

```c
return (__m128d)__builtin_lsx_vfmsubadd_d((v2f64)_1, (v2f64)_2, (v2f64)_3);
```

## __m128 __lsx_vfmsubadd_w (__m128 _1, __m128 _2, __m128 _3)

### Synopsis

```c
__m128 __lsx_vfmsubadd_w (__m128 _1, __m128 _2, __m128 _3)
#include <loongson-sxintrin.h>
Instruction: vfmsubadd.w
Builtin: __builtin_lsx_vfmsubadd_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1130
```

### Description

Fused multiply-subtract lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfmsubadd.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.lane[i] = (i % 2 == 0) ? (a.lane[i] - b.lane[i]) : (a.lane[i] + b.lane[i]);
```

### Header Mapping

```c
return (__m128)__builtin_lsx_vfmsubadd_w((v4f32)_1, (v4f32)_2, (v4f32)_3);
```

## __m128d __lsx_vfneg_d (__m128d _1)

### Synopsis

```c
__m128d __lsx_vfneg_d (__m128d _1)
#include <loongson-sxintrin.h>
Instruction: vfneg.d
Builtin: __builtin_lsx_vfneg_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1018
```

### Description

Negate lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfneg.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.fp64[i] = -a.fp64[i];
```

### Header Mapping

```c
return (__m128d)__builtin_lsx_vfneg_d((v2f64)_1);
```

## __m128 __lsx_vfneg_w (__m128 _1)

### Synopsis

```c
__m128 __lsx_vfneg_w (__m128 _1)
#include <loongson-sxintrin.h>
Instruction: vfneg.w
Builtin: __builtin_lsx_vfneg_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1011
```

### Description

Negate lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfneg.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.fp32[i] = -a.fp32[i];
```

### Header Mapping

```c
return (__m128)__builtin_lsx_vfneg_w((v4f32)_1);
```

## __m128d __lsx_vfnmadd_d (__m128d _1, __m128d _2, __m128d _3)

### Synopsis

```c
__m128d __lsx_vfnmadd_d (__m128d _1, __m128d _2, __m128d _3)
#include <loongson-sxintrin.h>
Instruction: vfnmadd.d
Builtin: __builtin_lsx_vfnmadd_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1095
```

### Description

Negated fused multiply-add lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfnmadd.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..1:
  dst.fp64[i] = -fma(a.fp64[i], b.fp64[i], c.fp64[i]);
```

### Header Mapping

```c
return (__m128d)__builtin_lsx_vfnmadd_d((v2f64)_1, (v2f64)_2, (v2f64)_3);
```

## __m128 __lsx_vfnmadd_w (__m128 _1, __m128 _2, __m128 _3)

### Synopsis

```c
__m128 __lsx_vfnmadd_w (__m128 _1, __m128 _2, __m128 _3)
#include <loongson-sxintrin.h>
Instruction: vfnmadd.w
Builtin: __builtin_lsx_vfnmadd_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1102
```

### Description

Negated fused multiply-add lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfnmadd.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.fp32[i] = -fma(a.fp32[i], b.fp32[i], c.fp32[i]);
```

### Header Mapping

```c
return (__m128)__builtin_lsx_vfnmadd_w((v4f32)_1, (v4f32)_2, (v4f32)_3);
```

## __m128d __lsx_vfnmsub_d (__m128d _1, __m128d _2, __m128d _3)

### Synopsis

```c
__m128d __lsx_vfnmsub_d (__m128d _1, __m128d _2, __m128d _3)
#include <loongson-sxintrin.h>
Instruction: vfnmsub.d
Builtin: __builtin_lsx_vfnmsub_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1109
```

### Description

Negated fused multiply-subtract lane-wise for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfnmsub.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..1:
  dst.fp64[i] = -fms(a.fp64[i], b.fp64[i], c.fp64[i]);
```

### Header Mapping

```c
return (__m128d)__builtin_lsx_vfnmsub_d((v2f64)_1, (v2f64)_2, (v2f64)_3);
```

## __m128 __lsx_vfnmsub_w (__m128 _1, __m128 _2, __m128 _3)

### Synopsis

```c
__m128 __lsx_vfnmsub_w (__m128 _1, __m128 _2, __m128 _3)
#include <loongson-sxintrin.h>
Instruction: vfnmsub.w
Builtin: __builtin_lsx_vfnmsub_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1116
```

### Description

Negated fused multiply-subtract lane-wise for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfnmsub.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.fp32[i] = -fms(a.fp32[i], b.fp32[i], c.fp32[i]);
```

### Header Mapping

```c
return (__m128)__builtin_lsx_vfnmsub_w((v4f32)_1, (v4f32)_2, (v4f32)_3);
```

## __m128i __lsx_vfrstii_b (__m128i _1, __m128i _2, unsigned char _3)

### Synopsis

```c
__m128i __lsx_vfrstii_b (__m128i _1, __m128i _2, unsigned char _3)
#include <loongson-sxintrin.h>
Instruction: vfrstii.b
Builtin: __builtin_lsx_vfrstii_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:838
```

### Description

Apply the Loongson vector string/mask helper encoded by `vfrstii.b` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrstii.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
for each search group g:
  idx = first_lane_matching_rule(a, b, imm, g);
  dst.group[g] = encode_first_match_index_or_zero(idx);
```

### Header Mapping

```c
#define __lsx_vfrstii_b(_1, _2, _3) ((__m128i)__builtin_lsx_vfrstii_b((v16i8)(_1), (v16i8)(_2), (_3)))
```

## __m128i __lsx_vfrstii_h (__m128i _1, __m128i _2, unsigned char _3)

### Synopsis

```c
__m128i __lsx_vfrstii_h (__m128i _1, __m128i _2, unsigned char _3)
#include <loongson-sxintrin.h>
Instruction: vfrstii.h
Builtin: __builtin_lsx_vfrstii_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:837
```

### Description

Apply the Loongson vector string/mask helper encoded by `vfrstii.h` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrstii.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
for each search group g:
  idx = first_lane_matching_rule(a, b, imm, g);
  dst.group[g] = encode_first_match_index_or_zero(idx);
```

### Header Mapping

```c
#define __lsx_vfrstii_h(_1, _2, _3) ((__m128i)__builtin_lsx_vfrstii_h((v8i16)(_1), (v8i16)(_2), (_3)))
```

## __m128i __lsx_vfrstiv_b (__m128i _1, __m128i _2, __m128i _3)

### Synopsis

```c
__m128i __lsx_vfrstiv_b (__m128i _1, __m128i _2, __m128i _3)
#include <loongson-sxintrin.h>
Instruction: vfrstiv.b
Builtin: __builtin_lsx_vfrstiv_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:847
```

### Description

Apply the Loongson vector string/mask helper encoded by `vfrstiv.b` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrstiv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
c = _3;
for each search group g:
  idx = first_lane_matching_rule(a, b, control vector, g);
  dst.group[g] = encode_first_match_index_or_zero(idx);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfrstiv_b((v16i8)_1, (v16i8)_2, (v16i8)_3);
```

## __m128i __lsx_vfrstiv_h (__m128i _1, __m128i _2, __m128i _3)

### Synopsis

```c
__m128i __lsx_vfrstiv_h (__m128i _1, __m128i _2, __m128i _3)
#include <loongson-sxintrin.h>
Instruction: vfrstiv.h
Builtin: __builtin_lsx_vfrstiv_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:840
```

### Description

Apply the Loongson vector string/mask helper encoded by `vfrstiv.h` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrstiv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for each search group g:
  idx = first_lane_matching_rule(a, b, control vector, g);
  dst.group[g] = encode_first_match_index_or_zero(idx);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfrstiv_h((v8i16)_1, (v8i16)_2, (v8i16)_3);
```

## __m128i __lsx_vfrstm_b (__m128i _1)

### Synopsis

```c
__m128i __lsx_vfrstm_b (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vfrstm.b
Builtin: __builtin_lsx_vfrstm_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:861
```

### Description

Apply the Loongson vector string/mask helper encoded by `vfrstm.b` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrstm.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
for each search group g:
  idx = first_lane_matching_rule(a, b, mask, g);
  dst.group[g] = encode_first_match_index_or_zero(idx);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfrstm_b((v16i8)_1);
```

## __m128i __lsx_vfrstm_h (__m128i _1)

### Synopsis

```c
__m128i __lsx_vfrstm_h (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vfrstm.h
Builtin: __builtin_lsx_vfrstm_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:854
```

### Description

Apply the Loongson vector string/mask helper encoded by `vfrstm.h` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfrstm.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
for each search group g:
  idx = first_lane_matching_rule(a, b, mask, g);
  dst.group[g] = encode_first_match_index_or_zero(idx);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vfrstm_h((v8i16)_1);
```

## __m128d __lsx_vfsubadd_d (__m128d _1, __m128d _2)

### Synopsis

```c
__m128d __lsx_vfsubadd_d (__m128d _1, __m128d _2)
#include <loongson-sxintrin.h>
Instruction: vfsubadd.d
Builtin: __builtin_lsx_vfsubadd_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1039
```

### Description

Alternately add and subtract floating-point 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfsubadd.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.lane[i] = (i % 2 == 0) ? (a.lane[i] - b.lane[i]) : (a.lane[i] + b.lane[i]);
```

### Header Mapping

```c
return (__m128d)__builtin_lsx_vfsubadd_d((v2f64)_1, (v2f64)_2);
```

## __m128 __lsx_vfsubadd_w (__m128 _1, __m128 _2)

### Synopsis

```c
__m128 __lsx_vfsubadd_w (__m128 _1, __m128 _2)
#include <loongson-sxintrin.h>
Instruction: vfsubadd.w
Builtin: __builtin_lsx_vfsubadd_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:1046
```

### Description

Alternately add and subtract floating-point 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vfsubadd.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.lane[i] = (i % 2 == 0) ? (a.lane[i] - b.lane[i]) : (a.lane[i] + b.lane[i]);
```

### Header Mapping

```c
return (__m128)__builtin_lsx_vfsubadd_w((v4f32)_1, (v4f32)_2);
```

