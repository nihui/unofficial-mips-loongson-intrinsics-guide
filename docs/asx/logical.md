# Logical

Generated from `include/loongson-asxintrin.h`. This page contains 23 intrinsics.

## __m256i __lasx_mxand_v (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxand_v (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxand.v
Builtin: __builtin_lasx_mxand_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1812
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxand.v.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
dst.bits = a.bits & (imm_or_b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxand_v((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxandi_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxandi_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxandi.b
Builtin: __builtin_lasx_mxandi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1818
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxandi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
dst.bits = a.bits & (imm_or_b);
```

### Header Mapping

```c
#define __lasx_mxandi_b(_1, _2) ((__m256i)__builtin_lasx_mxandi_b((v32u8)(_1), (_2)))
```

## __m256i __lasx_mxbmnz_v (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxbmnz_v (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxbmnz.v
Builtin: __builtin_lasx_mxbmnz_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1844
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbmnz.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
b = _2;
c = _3;
dst.bits = select_bits(mask=a, true_value=b, false_value=0);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbmnz_v((v32u8)_1, (v32u8)_2, (v32u8)_3);
```

## __m256i __lasx_mxbmnzi_b (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxbmnzi_b (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxbmnzi.b
Builtin: __builtin_lasx_mxbmnzi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1850
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbmnzi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
dst.bits = select_bits(mask=a, true_value=b, false_value=0);
```

### Header Mapping

```c
#define __lasx_mxbmnzi_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxbmnzi_b((v32u8)(_1), (v32u8)(_2), (_3)))
```

## __m256i __lasx_mxbmz_v (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxbmz_v (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxbmz.v
Builtin: __builtin_lasx_mxbmz_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1852
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbmz.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
b = _2;
c = _3;
dst.bits = select_bits(mask=a, true_value=0, false_value=b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbmz_v((v32u8)_1, (v32u8)_2, (v32u8)_3);
```

## __m256i __lasx_mxbmzi_b (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxbmzi_b (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxbmzi.b
Builtin: __builtin_lasx_mxbmzi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1858
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbmzi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
dst.bits = select_bits(mask=a, true_value=0, false_value=b);
```

### Header Mapping

```c
#define __lasx_mxbmzi_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxbmzi_b((v32u8)(_1), (v32u8)(_2), (_3)))
```

## __m256i __lasx_mxbsel (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxbsel (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxbsel
Builtin: __builtin_lasx_mxbsel
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4404
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbsel.
// Operand order follows the intrinsic arguments in the header.
dst.bits = (a.bits & b.bits) | (~a.bits & c.bits);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxbsel ((v32i8) a, (v32i8) b, (v32i8) c);
```

## __m256i __lasx_mxbsel_v (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxbsel_v (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxbsel.v
Builtin: __builtin_lasx_mxbsel_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1860
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbsel.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
b = _2;
c = _3;
dst.bits = (a.bits & b.bits) | (~a.bits & c.bits);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbsel_v((v32u8)_1, (v32u8)_2, (v32u8)_3);
```

## __m256i __lasx_mxbseli_b (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxbseli_b (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxbseli.b
Builtin: __builtin_lasx_mxbseli_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1866
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxbseli.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
dst.bits = (a.bits & b.bits) | (~a.bits & c.bits);
```

### Header Mapping

```c
#define __lasx_mxbseli_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxbseli_b((v32u8)(_1), (v32u8)(_2), (_3)))
```

## __m256i __lasx_mxnor_v (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxnor_v (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxnor.v
Builtin: __builtin_lasx_mxnor_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1828
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxnor.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
b = _2;
dst.bits = ~(a.bits | imm_or_b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnor_v((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxnori_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxnori_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxnori.b
Builtin: __builtin_lasx_mxnori_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1834
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxnori.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
dst.bits = ~(a.bits | imm_or_b);
```

### Header Mapping

```c
#define __lasx_mxnori_b(_1, _2) ((__m256i)__builtin_lasx_mxnori_b((v32u8)(_1), (_2)))
```

## __m256i __lasx_mxor_v (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxor_v (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxor.v
Builtin: __builtin_lasx_mxor_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1820
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxor.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
b = _2;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxor_v((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxori_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxori_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxori.b
Builtin: __builtin_lasx_mxori_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1826
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxori.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __lasx_mxori_b(_1, _2) ((__m256i)__builtin_lasx_mxori_b((v32u8)(_1), (_2)))
```

## __m256i __lasx_mxvandn_v (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvandn_v (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvandn.v
Builtin: __builtin_lasx_mxvandn_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2795
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvandn.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
b = _2;
dst.bits = b.bits & ~a.bits;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvandn_v((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxvmultp_hxor_adj2_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hxor_adj2_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hxor.adj2.w2x.d
Builtin: __builtin_lasx_mxvmultp_hxor_adj2_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9373
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.hxor.adj2.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hxor_adj2_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmultp_hxor_adj2_xacc_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hxor_adj2_xacc_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hxor.adj2.xacc.w2x.d
Builtin: __builtin_lasx_mxvmultp_hxor_adj2_xacc_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9393
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.hxor.adj2.xacc.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hxor_adj2_xacc_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvrandsigni_b (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxvrandsigni_b (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxvrandsigni.b
Builtin: __builtin_lasx_mxvrandsigni_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3547
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvrandsigni.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
dst.bits = a.bits & (imm_or_b);
```

### Header Mapping

```c
#define __lasx_mxvrandsigni_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxvrandsigni_b((v32i8)(_1), (v32i8)(_2), (_3)))
```

## __m256i __lasx_mxvrandsigni_h (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxvrandsigni_h (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxvrandsigni.h
Builtin: __builtin_lasx_mxvrandsigni_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3546
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvrandsigni.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
dst.bits = a.bits & (imm_or_b);
```

### Header Mapping

```c
#define __lasx_mxvrandsigni_h(_1, _2, _3) ((__m256i)__builtin_lasx_mxvrandsigni_h((v16i16)(_1), (v16i16)(_2), (_3)))
```

## __m256i __lasx_mxvrandsignv_b (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxvrandsignv_b (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxvrandsignv.b
Builtin: __builtin_lasx_mxvrandsignv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3570
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvrandsignv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
c = _3;
dst.bits = a.bits & (imm_or_b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvrandsignv_b((v32i8)_1, (v32i8)_2, (v32i8)_3);
```

## __m256i __lasx_mxvrandsignv_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxvrandsignv_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxvrandsignv.h
Builtin: __builtin_lasx_mxvrandsignv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3563
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvrandsignv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
dst.bits = a.bits & (imm_or_b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvrandsignv_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
```

## __m256i __lasx_mxxor_v (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxxor_v (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxxor.v
Builtin: __builtin_lasx_mxxor_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1836
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxxor.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
b = _2;
dst.bits = a.bits ^ (imm_or_b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxxor_v((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxxori_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxxori_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxxori.b
Builtin: __builtin_lasx_mxxori_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1842
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxxori.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
dst.bits = a.bits ^ (imm_or_b);
```

### Header Mapping

```c
#define __lasx_mxxori_b(_1, _2) ((__m256i)__builtin_lasx_mxxori_b((v32u8)(_1), (_2)))
```

## __m256i __lasx_xxor_v (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_xxor_v (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: xxor.v
Builtin: __builtin_lasx_xxor_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4150
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xxor.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
b = _2;
dst.bits = a.bits ^ (imm_or_b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xxor_v((v32i8)_1, (v32i8)_2);
```

