# Float Comparison

Generated from `include/loongson-asxintrin.h`. This page contains 44 intrinsics.

## __m256i __lasx_xfcaf_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfcaf_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfcaf.d
Builtin: __builtin_lasx_xfcaf_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1997
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcaf.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_af(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcaf_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfcaf_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfcaf_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfcaf.w
Builtin: __builtin_lasx_xfcaf_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1990
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcaf.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_af(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcaf_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfceq_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfceq_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfceq.d
Builtin: __builtin_lasx_xfceq_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2067
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfceq.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_eq(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfceq_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfceq_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfceq_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfceq.w
Builtin: __builtin_lasx_xfceq_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2060
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfceq.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_eq(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfceq_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfcle_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfcle_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfcle.d
Builtin: __builtin_lasx_xfcle_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2123
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcle.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_le(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcle_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfcle_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfcle_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfcle.w
Builtin: __builtin_lasx_xfcle_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2116
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcle.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_le(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcle_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfclt_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfclt_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfclt.d
Builtin: __builtin_lasx_xfclt_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2095
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfclt.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_lt(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfclt_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfclt_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfclt_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfclt.w
Builtin: __builtin_lasx_xfclt_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2088
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfclt.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_lt(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfclt_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfcne_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfcne_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfcne.d
Builtin: __builtin_lasx_xfcne_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2081
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcne.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_ne(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcne_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfcne_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfcne_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfcne.w
Builtin: __builtin_lasx_xfcne_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2074
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcne.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_ne(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcne_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfcor_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfcor_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfcor.d
Builtin: __builtin_lasx_xfcor_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2011
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcor.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_or(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcor_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfcor_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfcor_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfcor.w
Builtin: __builtin_lasx_xfcor_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2004
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcor.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_or(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcor_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfcueq_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfcueq_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfcueq.d
Builtin: __builtin_lasx_xfcueq_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2053
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcueq.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_ueq(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcueq_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfcueq_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfcueq_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfcueq.w
Builtin: __builtin_lasx_xfcueq_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2046
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcueq.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_ueq(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcueq_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfcule_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfcule_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfcule.d
Builtin: __builtin_lasx_xfcule_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2137
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcule.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_ule(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcule_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfcule_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfcule_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfcule.w
Builtin: __builtin_lasx_xfcule_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2130
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcule.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_ule(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcule_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfcult_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfcult_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfcult.d
Builtin: __builtin_lasx_xfcult_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2109
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcult.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_ult(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcult_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfcult_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfcult_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfcult.w
Builtin: __builtin_lasx_xfcult_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2102
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcult.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_ult(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcult_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfcun_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfcun_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfcun.d
Builtin: __builtin_lasx_xfcun_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2025
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcun.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_un(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcun_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfcun_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfcun_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfcun.w
Builtin: __builtin_lasx_xfcun_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2018
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcun.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_un(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcun_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfcune_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfcune_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfcune.d
Builtin: __builtin_lasx_xfcune_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2039
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcune.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_une(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcune_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfcune_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfcune_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfcune.w
Builtin: __builtin_lasx_xfcune_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2032
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfcune.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_une(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfcune_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfsaf_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfsaf_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfsaf.d
Builtin: __builtin_lasx_xfsaf_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2151
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsaf.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_fsaf(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsaf_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfsaf_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfsaf_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfsaf.w
Builtin: __builtin_lasx_xfsaf_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2144
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsaf.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_fsaf(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsaf_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfseq_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfseq_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfseq.d
Builtin: __builtin_lasx_xfseq_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2221
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfseq.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_fseq(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfseq_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfseq_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfseq_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfseq.w
Builtin: __builtin_lasx_xfseq_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2214
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfseq.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_fseq(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfseq_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfsle_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfsle_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfsle.d
Builtin: __builtin_lasx_xfsle_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2277
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsle.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_fsle(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsle_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfsle_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfsle_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfsle.w
Builtin: __builtin_lasx_xfsle_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2270
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsle.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_fsle(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsle_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfslt_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfslt_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfslt.d
Builtin: __builtin_lasx_xfslt_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2249
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfslt.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_fslt(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfslt_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfslt_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfslt_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfslt.w
Builtin: __builtin_lasx_xfslt_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2242
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfslt.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_fslt(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfslt_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfsne_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfsne_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfsne.d
Builtin: __builtin_lasx_xfsne_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2235
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsne.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_fsne(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsne_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfsne_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfsne_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfsne.w
Builtin: __builtin_lasx_xfsne_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2228
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsne.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_fsne(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsne_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfsor_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfsor_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfsor.d
Builtin: __builtin_lasx_xfsor_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2165
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsor.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_fsor(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsor_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfsor_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfsor_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfsor.w
Builtin: __builtin_lasx_xfsor_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2158
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsor.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_fsor(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsor_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfsueq_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfsueq_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfsueq.d
Builtin: __builtin_lasx_xfsueq_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2207
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsueq.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_fsueq(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsueq_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfsueq_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfsueq_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfsueq.w
Builtin: __builtin_lasx_xfsueq_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2200
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsueq.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_fsueq(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsueq_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfsule_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfsule_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfsule.d
Builtin: __builtin_lasx_xfsule_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2291
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsule.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_fsule(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsule_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfsule_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfsule_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfsule.w
Builtin: __builtin_lasx_xfsule_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2284
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsule.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_fsule(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsule_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfsult_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfsult_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfsult.d
Builtin: __builtin_lasx_xfsult_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2263
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsult.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_fsult(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsult_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfsult_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfsult_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfsult.w
Builtin: __builtin_lasx_xfsult_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2256
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsult.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_fsult(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsult_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfsun_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfsun_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfsun.d
Builtin: __builtin_lasx_xfsun_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2179
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsun.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_fsun(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsun_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfsun_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfsun_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfsun.w
Builtin: __builtin_lasx_xfsun_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2172
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsun.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_fsun(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsun_w((v8f32)_1, (v8f32)_2);
```

## __m256i __lasx_xfsune_d (__m256d _1, __m256d _2)

### Synopsis

```c
__m256i __lasx_xfsune_d (__m256d _1, __m256d _2)
#include <loongson-asxintrin.h>
Instruction: xfsune.d
Builtin: __builtin_lasx_xfsune_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2193
```

### Description

Compare floating-point 4 x 64-bit dword lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsune.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.mask[i] = fp_compare_fsune(a.fp64[i], b.fp64[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsune_d((v4f64)_1, (v4f64)_2);
```

## __m256i __lasx_xfsune_w (__m256 _1, __m256 _2)

### Synopsis

```c
__m256i __lasx_xfsune_w (__m256 _1, __m256 _2)
#include <loongson-asxintrin.h>
Instruction: xfsune.w
Builtin: __builtin_lasx_xfsune_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2186
```

### Description

Compare floating-point 8 x 32-bit word lanes and produce all-ones/all-zero mask elements. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xfsune.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.mask[i] = fp_compare_fsune(a.fp32[i], b.fp32[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xfsune_w((v8f32)_1, (v8f32)_2);
```

