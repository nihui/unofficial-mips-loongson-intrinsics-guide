# Logical

Generated from `include/loongson-sxintrin.h`. This page contains 5 intrinsics.

## __m128i __lsx_vandn_v (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vandn_v (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vandn.v
Builtin: __builtin_lsx_vandn_v
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:56
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vandn.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
b = _2;
dst.bits = b.bits & ~a.bits;
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vandn_v((v16u8)_1, (v16u8)_2);
```

## __m128i __lsx_vrandsigni_b (__m128i _1, __m128i _2, unsigned char _3)

### Synopsis

```c
__m128i __lsx_vrandsigni_b (__m128i _1, __m128i _2, unsigned char _3)
#include <loongson-sxintrin.h>
Instruction: vrandsigni.b
Builtin: __builtin_lsx_vrandsigni_b
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:808
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vrandsigni.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
dst.bits = a.bits & (imm_or_b);
```

### Header Mapping

```c
#define __lsx_vrandsigni_b(_1, _2, _3) ((__m128i)__builtin_lsx_vrandsigni_b((v16i8)(_1), (v16i8)(_2), (_3)))
```

## __m128i __lsx_vrandsigni_h (__m128i _1, __m128i _2, unsigned char _3)

### Synopsis

```c
__m128i __lsx_vrandsigni_h (__m128i _1, __m128i _2, unsigned char _3)
#include <loongson-sxintrin.h>
Instruction: vrandsigni.h
Builtin: __builtin_lsx_vrandsigni_h
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:807
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vrandsigni.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
dst.bits = a.bits & (imm_or_b);
```

### Header Mapping

```c
#define __lsx_vrandsigni_h(_1, _2, _3) ((__m128i)__builtin_lsx_vrandsigni_h((v8i16)(_1), (v8i16)(_2), (_3)))
```

## __m128i __lsx_vrandsignv_b (__m128i _1, __m128i _2, __m128i _3)

### Synopsis

```c
__m128i __lsx_vrandsignv_b (__m128i _1, __m128i _2, __m128i _3)
#include <loongson-sxintrin.h>
Instruction: vrandsignv.b
Builtin: __builtin_lsx_vrandsignv_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:831
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vrandsignv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
c = _3;
dst.bits = a.bits & (imm_or_b);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vrandsignv_b((v16i8)_1, (v16i8)_2, (v16i8)_3);
```

## __m128i __lsx_vrandsignv_h (__m128i _1, __m128i _2, __m128i _3)

### Synopsis

```c
__m128i __lsx_vrandsignv_h (__m128i _1, __m128i _2, __m128i _3)
#include <loongson-sxintrin.h>
Instruction: vrandsignv.h
Builtin: __builtin_lsx_vrandsignv_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:824
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vrandsignv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
dst.bits = a.bits & (imm_or_b);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vrandsignv_h((v8i16)_1, (v8i16)_2, (v8i16)_3);
```

