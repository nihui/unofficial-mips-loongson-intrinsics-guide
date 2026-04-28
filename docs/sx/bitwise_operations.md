# Bitwise Operations

Generated from `include/loongson-sxintrin.h`. This page contains 12 intrinsics.

## __m128i __lsx_vgetsign_b (__m128i _1)

### Synopsis

```c
__m128i __lsx_vgetsign_b (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vgetsign.b
Builtin: __builtin_lsx_vgetsign_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:934
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vgetsign.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
for i in 0..15:
  dst.byte[i] = sign_bit(a.byte[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vgetsign_b((v16i8)_1);
```

## __m128i __lsx_vgetsign_d (__m128i _1)

### Synopsis

```c
__m128i __lsx_vgetsign_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vgetsign.d
Builtin: __builtin_lsx_vgetsign_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:913
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vgetsign.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.dword[i] = sign_bit(a.dword[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vgetsign_d((v2i64)_1);
```

## __m128i __lsx_vgetsign_h (__m128i _1)

### Synopsis

```c
__m128i __lsx_vgetsign_h (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vgetsign.h
Builtin: __builtin_lsx_vgetsign_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:927
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vgetsign.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
for i in 0..7:
  dst.half[i] = sign_bit(a.half[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vgetsign_h((v8i16)_1);
```

## __m128i __lsx_vgetsign_w (__m128i _1)

### Synopsis

```c
__m128i __lsx_vgetsign_w (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vgetsign.w
Builtin: __builtin_lsx_vgetsign_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:920
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vgetsign.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.word[i] = sign_bit(a.word[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vgetsign_w((v4i32)_1);
```

## __m128i __lsx_vsigncov_b (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsigncov_b (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsigncov.b
Builtin: __builtin_lsx_vsigncov_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:990
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsigncov.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.byte[i] = (a.byte[i] == 0) ? 0 : (a.byte[i] < 0 ? -b.byte[i] : b.byte[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsigncov_b((v16i8)_1, (v16i8)_2);
```

## __m128i __lsx_vsigncov_d (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsigncov_d (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsigncov.d
Builtin: __builtin_lsx_vsigncov_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:969
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsigncov.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.dword[i] = (a.dword[i] == 0) ? 0 : (a.dword[i] < 0 ? -b.dword[i] : b.dword[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsigncov_d((v2i64)_1, (v2i64)_2);
```

## __m128i __lsx_vsigncov_h (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsigncov_h (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsigncov.h
Builtin: __builtin_lsx_vsigncov_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:983
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsigncov.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.half[i] = (a.half[i] == 0) ? 0 : (a.half[i] < 0 ? -b.half[i] : b.half[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsigncov_h((v8i16)_1, (v8i16)_2);
```

## __m128i __lsx_vsigncov_w (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vsigncov_w (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vsigncov.w
Builtin: __builtin_lsx_vsigncov_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:976
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsigncov.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.word[i] = (a.word[i] == 0) ? 0 : (a.word[i] < 0 ? -b.word[i] : b.word[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsigncov_w((v4i32)_1, (v4i32)_2);
```

## __m128i __lsx_vsignfill_b (__m128i _1)

### Synopsis

```c
__m128i __lsx_vsignfill_b (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vsignfill.b
Builtin: __builtin_lsx_vsignfill_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:962
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsignfill.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
for i in 0..15:
  dst.byte[i] = sign_extend_sign_bit(a.byte[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsignfill_b((v16i8)_1);
```

## __m128i __lsx_vsignfill_d (__m128i _1)

### Synopsis

```c
__m128i __lsx_vsignfill_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vsignfill.d
Builtin: __builtin_lsx_vsignfill_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:941
```

### Description

Manipulate or summarize bits in each 2 x 64-bit dword lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsignfill.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.dword[i] = sign_extend_sign_bit(a.dword[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsignfill_d((v2i64)_1);
```

## __m128i __lsx_vsignfill_h (__m128i _1)

### Synopsis

```c
__m128i __lsx_vsignfill_h (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vsignfill.h
Builtin: __builtin_lsx_vsignfill_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:955
```

### Description

Manipulate or summarize bits in each 8 x 16-bit half lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsignfill.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
for i in 0..7:
  dst.half[i] = sign_extend_sign_bit(a.half[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsignfill_h((v8i16)_1);
```

## __m128i __lsx_vsignfill_w (__m128i _1)

### Synopsis

```c
__m128i __lsx_vsignfill_w (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vsignfill.w
Builtin: __builtin_lsx_vsignfill_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:948
```

### Description

Manipulate or summarize bits in each 4 x 32-bit word lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsignfill.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.word[i] = sign_extend_sign_bit(a.word[i]);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vsignfill_w((v4i32)_1);
```

