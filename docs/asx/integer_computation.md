# Integer Computation

Generated from `include/loongson-asxintrin.h`. This page contains 277 intrinsics.

## __m256i __lasx_mxadd_a_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadd_a_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadd.a.b
Builtin: __builtin_lasx_mxadd_a_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:810
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadd.a.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = abs(a.byte[i]) + abs(b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadd_a_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxadd_a_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadd_a_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadd.a.d
Builtin: __builtin_lasx_mxadd_a_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:831
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadd.a.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = abs(a.dword[i]) + abs(b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadd_a_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxadd_a_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadd_a_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadd.a.h
Builtin: __builtin_lasx_mxadd_a_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:817
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadd.a.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = abs(a.half[i]) + abs(b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadd_a_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxadd_a_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadd_a_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadd.a.w
Builtin: __builtin_lasx_mxadd_a_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:824
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadd.a.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = abs(a.word[i]) + abs(b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadd_a_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxadds_a_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadds_a_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadds.a.b
Builtin: __builtin_lasx_mxadds_a_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:838
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadds.a.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate(a.byte[i] + b.byte[i], 8, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_a_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxadds_a_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadds_a_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadds.a.d
Builtin: __builtin_lasx_mxadds_a_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:859
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadds.a.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = saturate(a.dword[i] + b.dword[i], 64, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_a_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxadds_a_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadds_a_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadds.a.h
Builtin: __builtin_lasx_mxadds_a_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:845
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadds.a.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate(a.half[i] + b.half[i], 16, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_a_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxadds_a_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadds_a_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadds.a.w
Builtin: __builtin_lasx_mxadds_a_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:852
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadds.a.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate(a.word[i] + b.word[i], 32, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_a_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxadds_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadds_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadds.s.b
Builtin: __builtin_lasx_mxadds_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:866
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadds.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate(a.byte[i] + b.byte[i], 8, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_s_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxadds_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadds_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadds.s.d
Builtin: __builtin_lasx_mxadds_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:887
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadds.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = saturate(a.dword[i] + b.dword[i], 64, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxadds_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadds_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadds.s.h
Builtin: __builtin_lasx_mxadds_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:873
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadds.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate(a.half[i] + b.half[i], 16, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxadds_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadds_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadds.s.w
Builtin: __builtin_lasx_mxadds_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:880
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadds.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate(a.word[i] + b.word[i], 32, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxadds_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadds_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadds.u.b
Builtin: __builtin_lasx_mxadds_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:894
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadds.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate(a.byte[i] + b.byte[i], 8, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_u_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxadds_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadds_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadds.u.d
Builtin: __builtin_lasx_mxadds_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:915
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadds.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = saturate(a.dword[i] + b.dword[i], 64, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxadds_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadds_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadds.u.h
Builtin: __builtin_lasx_mxadds_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:901
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadds.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate(a.half[i] + b.half[i], 16, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxadds_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxadds_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxadds.u.w
Builtin: __builtin_lasx_mxadds_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:908
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxadds.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate(a.word[i] + b.word[i], 32, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxadds_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxaddv_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxaddv_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxaddv.b
Builtin: __builtin_lasx_mxaddv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:394
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaddv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] + b.byte[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxaddv_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxaddv_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxaddv_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxaddv.d
Builtin: __builtin_lasx_mxaddv_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:415
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaddv.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] + b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxaddv_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxaddv_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxaddv_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxaddv.h
Builtin: __builtin_lasx_mxaddv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:401
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaddv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxaddv_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxaddv_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxaddv_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxaddv.w
Builtin: __builtin_lasx_mxaddv_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:408
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaddv.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxaddv_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxaddvi_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxaddvi_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxaddvi.b
Builtin: __builtin_lasx_mxaddvi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:421
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaddvi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] + imm;
```

### Header Mapping

```c
#define __lasx_mxaddvi_b(_1, _2) ((__m256i)__builtin_lasx_mxaddvi_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxaddvi_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxaddvi_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxaddvi.d
Builtin: __builtin_lasx_mxaddvi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:424
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaddvi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] + imm;
```

### Header Mapping

```c
#define __lasx_mxaddvi_d(_1, _2) ((__m256i)__builtin_lasx_mxaddvi_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxaddvi_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxaddvi_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxaddvi.h
Builtin: __builtin_lasx_mxaddvi_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:422
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaddvi.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = a.half[i] + imm;
```

### Header Mapping

```c
#define __lasx_mxaddvi_h(_1, _2) ((__m256i)__builtin_lasx_mxaddvi_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxaddvi_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxaddvi_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxaddvi.w
Builtin: __builtin_lasx_mxaddvi_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:423
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaddvi.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = a.word[i] + imm;
```

### Header Mapping

```c
#define __lasx_mxaddvi_w(_1, _2) ((__m256i)__builtin_lasx_mxaddvi_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxasub_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxasub_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxasub.s.b
Builtin: __builtin_lasx_mxasub_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1146
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxasub.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = abs(a.byte[i] - b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxasub_s_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxasub_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxasub_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxasub.s.d
Builtin: __builtin_lasx_mxasub_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1167
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxasub.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = abs(a.dword[i] - b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxasub_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxasub_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxasub_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxasub.s.h
Builtin: __builtin_lasx_mxasub_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1153
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxasub.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = abs(a.half[i] - b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxasub_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxasub_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxasub_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxasub.s.w
Builtin: __builtin_lasx_mxasub_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1160
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxasub.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = abs(a.word[i] - b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxasub_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxasub_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxasub_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxasub.u.b
Builtin: __builtin_lasx_mxasub_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1174
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxasub.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = abs(a.byte[i] - b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxasub_u_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxasub_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxasub_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxasub.u.d
Builtin: __builtin_lasx_mxasub_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1195
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxasub.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = abs(a.dword[i] - b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxasub_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxasub_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxasub_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxasub.u.h
Builtin: __builtin_lasx_mxasub_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1181
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxasub.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = abs(a.half[i] - b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxasub_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxasub_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxasub_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxasub.u.w
Builtin: __builtin_lasx_mxasub_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1188
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxasub.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = abs(a.word[i] - b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxasub_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxave_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxave_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxave.s.b
Builtin: __builtin_lasx_mxave_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:922
```

### Description

Compute lane-wise rounded average values for 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxave.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = floor_average(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxave_s_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxave_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxave_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxave.s.d
Builtin: __builtin_lasx_mxave_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:943
```

### Description

Compute lane-wise rounded average values for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxave.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = floor_average(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxave_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxave_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxave_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxave.s.h
Builtin: __builtin_lasx_mxave_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:929
```

### Description

Compute lane-wise rounded average values for 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxave.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = floor_average(a.half[i], b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxave_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxave_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxave_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxave.s.w
Builtin: __builtin_lasx_mxave_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:936
```

### Description

Compute lane-wise rounded average values for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxave.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = floor_average(a.word[i], b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxave_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxave_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxave_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxave.u.b
Builtin: __builtin_lasx_mxave_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:950
```

### Description

Compute lane-wise rounded average values for 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxave.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = floor_average(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxave_u_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxave_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxave_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxave.u.d
Builtin: __builtin_lasx_mxave_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:971
```

### Description

Compute lane-wise rounded average values for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxave.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = floor_average(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxave_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxave_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxave_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxave.u.h
Builtin: __builtin_lasx_mxave_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:957
```

### Description

Compute lane-wise rounded average values for 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxave.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = floor_average(a.half[i], b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxave_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxave_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxave_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxave.u.w
Builtin: __builtin_lasx_mxave_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:964
```

### Description

Compute lane-wise rounded average values for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxave.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = floor_average(a.word[i], b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxave_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxaver_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxaver_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxaver.s.b
Builtin: __builtin_lasx_mxaver_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:978
```

### Description

Compute lane-wise rounded average values for 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaver.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = ceil_average(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxaver_s_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxaver_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxaver_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxaver.s.d
Builtin: __builtin_lasx_mxaver_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:999
```

### Description

Compute lane-wise rounded average values for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaver.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = ceil_average(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxaver_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxaver_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxaver_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxaver.s.h
Builtin: __builtin_lasx_mxaver_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:985
```

### Description

Compute lane-wise rounded average values for 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaver.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = ceil_average(a.half[i], b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxaver_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxaver_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxaver_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxaver.s.w
Builtin: __builtin_lasx_mxaver_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:992
```

### Description

Compute lane-wise rounded average values for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaver.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = ceil_average(a.word[i], b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxaver_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxaver_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxaver_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxaver.u.b
Builtin: __builtin_lasx_mxaver_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1006
```

### Description

Compute lane-wise rounded average values for 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaver.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = ceil_average(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxaver_u_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxaver_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxaver_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxaver.u.d
Builtin: __builtin_lasx_mxaver_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1027
```

### Description

Compute lane-wise rounded average values for 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaver.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = ceil_average(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxaver_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxaver_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxaver_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxaver.u.h
Builtin: __builtin_lasx_mxaver_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1013
```

### Description

Compute lane-wise rounded average values for 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaver.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = ceil_average(a.half[i], b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxaver_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxaver_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxaver_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxaver.u.w
Builtin: __builtin_lasx_mxaver_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1020
```

### Description

Compute lane-wise rounded average values for 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxaver.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = ceil_average(a.word[i], b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxaver_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxdiv_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdiv_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdiv.s.b
Builtin: __builtin_lasx_mxdiv_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1286
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdiv.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] / b.byte[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_s_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxdiv_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdiv_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdiv.s.d
Builtin: __builtin_lasx_mxdiv_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1307
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdiv.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] / b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxdiv_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdiv_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdiv.s.h
Builtin: __builtin_lasx_mxdiv_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1293
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdiv.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] / b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxdiv_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdiv_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdiv.s.w
Builtin: __builtin_lasx_mxdiv_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1300
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdiv.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] / b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxdiv_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdiv_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdiv.u.b
Builtin: __builtin_lasx_mxdiv_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1314
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdiv.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] / b.byte[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_u_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxdiv_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdiv_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdiv.u.d
Builtin: __builtin_lasx_mxdiv_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1335
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdiv.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] / b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxdiv_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdiv_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdiv.u.h
Builtin: __builtin_lasx_mxdiv_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1321
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdiv.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] / b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxdiv_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdiv_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdiv.u.w
Builtin: __builtin_lasx_mxdiv_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1328
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdiv.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] / b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdiv_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxdotp_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdotp_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdotp.s.d
Builtin: __builtin_lasx_mxdotp_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1496
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdotp.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdotp_s_d((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxdotp_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdotp_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdotp.s.h
Builtin: __builtin_lasx_mxdotp_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1482
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdotp.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdotp_s_h((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxdotp_s_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_s_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.s.q
Builtin: __builtin_lasx_mxdotp_s_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4410
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdotp.s.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdotp_s_q ((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxdotp_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdotp_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdotp.s.w
Builtin: __builtin_lasx_mxdotp_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1489
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdotp.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdotp_s_w((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxdotp_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdotp_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdotp.u.d
Builtin: __builtin_lasx_mxdotp_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1517
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdotp.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdotp_u_d((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxdotp_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdotp_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdotp.u.h
Builtin: __builtin_lasx_mxdotp_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1503
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdotp.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdotp_u_h((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxdotp_u_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_u_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.u.q
Builtin: __builtin_lasx_mxdotp_u_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4416
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdotp.u.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdotp_u_q ((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxdotp_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxdotp_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxdotp.u.w
Builtin: __builtin_lasx_mxdotp_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1510
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdotp.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdotp_u_w((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxdotp_us_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_us_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.us.d
Builtin: __builtin_lasx_mxdotp_us_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4434
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdotp.us.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
for i in 0..1:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdotp_us_d ((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxdotp_us_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_us_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.us.h
Builtin: __builtin_lasx_mxdotp_us_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4422
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdotp.us.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
for i in 0..7:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdotp_us_h ((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxdotp_us_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_us_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.us.q
Builtin: __builtin_lasx_mxdotp_us_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4440
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdotp.us.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdotp_us_q ((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxdotp_us_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdotp_us_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdotp.us.w
Builtin: __builtin_lasx_mxdotp_us_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4428
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdotp.us.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
for i in 0..3:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdotp_us_w ((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxdpadd_s_d (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxdpadd_s_d (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.s.d
Builtin: __builtin_lasx_mxdpadd_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1538
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpadd.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..1:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdpadd_s_d((v4i64)_1, (v8i32)_2, (v8i32)_3);
```

## __m256i __lasx_mxdpadd_s_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxdpadd_s_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.s.h
Builtin: __builtin_lasx_mxdpadd_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1524
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpadd.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdpadd_s_h((v16i16)_1, (v32i8)_2, (v32i8)_3);
```

## __m256i __lasx_mxdpadd_s_q (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdpadd_s_q (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.s.q
Builtin: __builtin_lasx_mxdpadd_s_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4446
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpadd.s.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
acc = ret;
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdpadd_s_q ((v4i64) ret, (v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxdpadd_s_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxdpadd_s_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.s.w
Builtin: __builtin_lasx_mxdpadd_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1531
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpadd.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdpadd_s_w((v8i32)_1, (v16i16)_2, (v16i16)_3);
```

## __m256i __lasx_mxdpadd_u_d (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxdpadd_u_d (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.u.d
Builtin: __builtin_lasx_mxdpadd_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1559
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpadd.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..1:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdpadd_u_d((v4u64)_1, (v8u32)_2, (v8u32)_3);
```

## __m256i __lasx_mxdpadd_u_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxdpadd_u_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.u.h
Builtin: __builtin_lasx_mxdpadd_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1545
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpadd.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdpadd_u_h((v16u16)_1, (v32u8)_2, (v32u8)_3);
```

## __m256i __lasx_mxdpadd_u_q (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdpadd_u_q (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.u.q
Builtin: __builtin_lasx_mxdpadd_u_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4452
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpadd.u.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
acc = ret;
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdpadd_u_q ((v4u64) ret, (v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxdpadd_u_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxdpadd_u_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.u.w
Builtin: __builtin_lasx_mxdpadd_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1552
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpadd.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdpadd_u_w((v8u32)_1, (v16u16)_2, (v16u16)_3);
```

## __m256i __lasx_mxdpadd_us_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdpadd_us_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.us.d
Builtin: __builtin_lasx_mxdpadd_us_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4470
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpadd.us.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
for i in 0..1:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdpadd_us_d ((v4u64) ret, (v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxdpadd_us_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdpadd_us_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.us.h
Builtin: __builtin_lasx_mxdpadd_us_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4458
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpadd.us.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
for i in 0..7:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdpadd_us_h ((v16u16) ret, (v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxdpadd_us_q (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdpadd_us_q (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.us.q
Builtin: __builtin_lasx_mxdpadd_us_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4476
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpadd.us.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
acc = ret;
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdpadd_us_q ((v4u64) ret, (v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxdpadd_us_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdpadd_us_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdpadd.us.w
Builtin: __builtin_lasx_mxdpadd_us_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4464
```

### Description

Compute adjacent-pair dot products using unsigned/signed mixed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpadd.us.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
for i in 0..3:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdpadd_us_w ((v8u32) ret, (v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxdpsub_s_d (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxdpsub_s_d (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.s.d
Builtin: __builtin_lasx_mxdpsub_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1580
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpsub.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..1:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdpsub_s_d((v4i64)_1, (v8i32)_2, (v8i32)_3);
```

## __m256i __lasx_mxdpsub_s_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxdpsub_s_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.s.h
Builtin: __builtin_lasx_mxdpsub_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1566
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpsub.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdpsub_s_h((v16i16)_1, (v32i8)_2, (v32i8)_3);
```

## __m256i __lasx_mxdpsub_s_q (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdpsub_s_q (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.s.q
Builtin: __builtin_lasx_mxdpsub_s_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4482
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpsub.s.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
acc = ret;
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdpsub_s_q ((v4i64) ret, (v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxdpsub_s_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxdpsub_s_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.s.w
Builtin: __builtin_lasx_mxdpsub_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1573
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpsub.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdpsub_s_w((v8i32)_1, (v16i16)_2, (v16i16)_3);
```

## __m256i __lasx_mxdpsub_u_d (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxdpsub_u_d (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.u.d
Builtin: __builtin_lasx_mxdpsub_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1601
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpsub.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..1:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdpsub_u_d((v4i64)_1, (v8u32)_2, (v8u32)_3);
```

## __m256i __lasx_mxdpsub_u_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxdpsub_u_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.u.h
Builtin: __builtin_lasx_mxdpsub_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1587
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpsub.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdpsub_u_h((v16i16)_1, (v32u8)_2, (v32u8)_3);
```

## __m256i __lasx_mxdpsub_u_q (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxdpsub_u_q (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.u.q
Builtin: __builtin_lasx_mxdpsub_u_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4488
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpsub.u.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
acc = ret;
for i in 0..0:
  product0 = widen(a.qword[2*i]) * widen(b.qword[2*i]);
  product1 = widen(a.qword[2*i + 1]) * widen(b.qword[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxdpsub_u_q ((v4u64) ret, (v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxdpsub_u_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxdpsub_u_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxdpsub.u.w
Builtin: __builtin_lasx_mxdpsub_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1594
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxdpsub.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxdpsub_u_w((v8i32)_1, (v16u16)_2, (v16u16)_3);
```

## __m256i __lasx_mxhadd_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxhadd_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxhadd.s.d
Builtin: __builtin_lasx_mxhadd_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1356
```

### Description

Compute horizontal adjacent add/subtract operations over signed 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhadd.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.wide_lane[i] = widen(a.dword[2*i]) + widen(a.dword[2*i + 1]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxhadd_s_d((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxhadd_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxhadd_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxhadd.s.h
Builtin: __builtin_lasx_mxhadd_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1342
```

### Description

Compute horizontal adjacent add/subtract operations over signed 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhadd.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.wide_lane[i] = widen(a.half[2*i]) + widen(a.half[2*i + 1]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxhadd_s_h((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxhadd_s_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhadd_s_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhadd.s.q
Builtin: __builtin_lasx_mxhadd_s_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4494
```

### Description

Compute horizontal adjacent add/subtract operations over signed 2 x 128-bit qword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhadd.s.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
for i in 0..0:
  dst.wide_lane[i] = widen(a.qword[2*i]) + widen(a.qword[2*i + 1]);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxhadd_s_q ((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxhadd_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxhadd_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxhadd.s.w
Builtin: __builtin_lasx_mxhadd_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1349
```

### Description

Compute horizontal adjacent add/subtract operations over signed 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhadd.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.wide_lane[i] = widen(a.word[2*i]) + widen(a.word[2*i + 1]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxhadd_s_w((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxhadd_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxhadd_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxhadd.u.d
Builtin: __builtin_lasx_mxhadd_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1377
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhadd.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.wide_lane[i] = widen(a.dword[2*i]) + widen(a.dword[2*i + 1]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxhadd_u_d((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxhadd_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxhadd_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxhadd.u.h
Builtin: __builtin_lasx_mxhadd_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1363
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhadd.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.wide_lane[i] = widen(a.half[2*i]) + widen(a.half[2*i + 1]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxhadd_u_h((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxhadd_u_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhadd_u_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhadd.u.q
Builtin: __builtin_lasx_mxhadd_u_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4500
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 2 x 128-bit qword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhadd.u.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
for i in 0..0:
  dst.wide_lane[i] = widen(a.qword[2*i]) + widen(a.qword[2*i + 1]);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxhadd_u_q ((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxhadd_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxhadd_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxhadd.u.w
Builtin: __builtin_lasx_mxhadd_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1370
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhadd.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.wide_lane[i] = widen(a.word[2*i]) + widen(a.word[2*i + 1]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxhadd_u_w((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxhsub_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxhsub_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxhsub.s.d
Builtin: __builtin_lasx_mxhsub_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1398
```

### Description

Compute horizontal adjacent add/subtract operations over signed 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhsub.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.wide_lane[i] = widen(a.dword[2*i]) - widen(a.dword[2*i + 1]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxhsub_s_d((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxhsub_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxhsub_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxhsub.s.h
Builtin: __builtin_lasx_mxhsub_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1384
```

### Description

Compute horizontal adjacent add/subtract operations over signed 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhsub.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.wide_lane[i] = widen(a.half[2*i]) - widen(a.half[2*i + 1]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxhsub_s_h((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxhsub_s_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhsub_s_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhsub.s.q
Builtin: __builtin_lasx_mxhsub_s_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4506
```

### Description

Compute horizontal adjacent add/subtract operations over signed 2 x 128-bit qword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhsub.s.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
for i in 0..0:
  dst.wide_lane[i] = widen(a.qword[2*i]) - widen(a.qword[2*i + 1]);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxhsub_s_q ((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxhsub_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxhsub_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxhsub.s.w
Builtin: __builtin_lasx_mxhsub_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1391
```

### Description

Compute horizontal adjacent add/subtract operations over signed 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhsub.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.wide_lane[i] = widen(a.word[2*i]) - widen(a.word[2*i + 1]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxhsub_s_w((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxhsub_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxhsub_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxhsub.u.d
Builtin: __builtin_lasx_mxhsub_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1419
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhsub.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..1:
  dst.wide_lane[i] = widen(a.dword[2*i]) - widen(a.dword[2*i + 1]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxhsub_u_d((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxhsub_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxhsub_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxhsub.u.h
Builtin: __builtin_lasx_mxhsub_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1405
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhsub.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.wide_lane[i] = widen(a.half[2*i]) - widen(a.half[2*i + 1]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxhsub_u_h((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxhsub_u_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxhsub_u_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxhsub.u.q
Builtin: __builtin_lasx_mxhsub_u_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4512
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 2 x 128-bit qword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhsub.u.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
for i in 0..0:
  dst.wide_lane[i] = widen(a.qword[2*i]) - widen(a.qword[2*i + 1]);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxhsub_u_q ((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxhsub_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxhsub_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxhsub.u.w
Builtin: __builtin_lasx_mxhsub_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1412
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxhsub.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.wide_lane[i] = widen(a.word[2*i]) - widen(a.word[2*i + 1]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxhsub_u_w((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxmadd_q_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmadd_q_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmadd.q.h
Builtin: __builtin_lasx_mxmadd_q_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2508
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmadd.q.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..15:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmadd_q_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
```

## __m256i __lasx_mxmadd_q_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmadd_q_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmadd.q.w
Builtin: __builtin_lasx_mxmadd_q_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2515
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmadd.q.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmadd_q_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
```

## __m256i __lasx_mxmaddr_q_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmaddr_q_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmaddr.q.h
Builtin: __builtin_lasx_mxmaddr_q_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2522
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaddr.q.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..15:
  product = round_fixed_point(b.half[i] * c.half[i]);
  dst.half[i] = a.half[i] + product;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmaddr_q_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
```

## __m256i __lasx_mxmaddr_q_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmaddr_q_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmaddr.q.w
Builtin: __builtin_lasx_mxmaddr_q_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2529
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaddr.q.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  product = round_fixed_point(b.word[i] * c.word[i]);
  dst.word[i] = a.word[i] + product;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmaddr_q_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
```

## __m256i __lasx_mxmaddv_b (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmaddv_b (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmaddv.b
Builtin: __builtin_lasx_mxmaddv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1230
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaddv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..31:
  product = identity(b.byte[i] * c.byte[i]);
  dst.byte[i] = a.byte[i] + product;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmaddv_b((v32i8)_1, (v32i8)_2, (v32i8)_3);
```

## __m256i __lasx_mxmaddv_d (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmaddv_d (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmaddv.d
Builtin: __builtin_lasx_mxmaddv_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1251
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaddv.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  product = identity(b.dword[i] * c.dword[i]);
  dst.dword[i] = a.dword[i] + product;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmaddv_d((v4i64)_1, (v4i64)_2, (v4i64)_3);
```

## __m256i __lasx_mxmaddv_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmaddv_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmaddv.h
Builtin: __builtin_lasx_mxmaddv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1237
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaddv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..15:
  product = identity(b.half[i] * c.half[i]);
  dst.half[i] = a.half[i] + product;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmaddv_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
```

## __m256i __lasx_mxmaddv_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmaddv_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmaddv.w
Builtin: __builtin_lasx_mxmaddv_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1244
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaddv.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  product = identity(b.word[i] * c.word[i]);
  dst.word[i] = a.word[i] + product;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmaddv_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
```

## __m256i __lasx_mxmod_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmod_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmod.s.b
Builtin: __builtin_lasx_mxmod_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1426
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmod.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] % b.byte[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_s_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxmod_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmod_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmod.s.d
Builtin: __builtin_lasx_mxmod_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1447
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmod.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] % b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxmod_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmod_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmod.s.h
Builtin: __builtin_lasx_mxmod_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1433
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmod.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] % b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxmod_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmod_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmod.s.w
Builtin: __builtin_lasx_mxmod_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1440
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmod.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] % b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxmod_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmod_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmod.u.b
Builtin: __builtin_lasx_mxmod_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1454
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmod.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] % b.byte[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_u_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxmod_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmod_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmod.u.d
Builtin: __builtin_lasx_mxmod_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1475
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmod.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] % b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxmod_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmod_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmod.u.h
Builtin: __builtin_lasx_mxmod_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1461
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmod.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] % b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxmod_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmod_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmod.u.w
Builtin: __builtin_lasx_mxmod_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1468
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmod.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] % b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmod_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxmsub_q_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmsub_q_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmsub.q.h
Builtin: __builtin_lasx_mxmsub_q_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2536
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmsub.q.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..15:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmsub_q_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
```

## __m256i __lasx_mxmsub_q_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmsub_q_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmsub.q.w
Builtin: __builtin_lasx_mxmsub_q_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2543
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmsub.q.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmsub_q_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
```

## __m256i __lasx_mxmsubr_q_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmsubr_q_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmsubr.q.h
Builtin: __builtin_lasx_mxmsubr_q_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2550
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmsubr.q.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..15:
  product = round_fixed_point(b.half[i] * c.half[i]);
  dst.half[i] = a.half[i] - product;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmsubr_q_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
```

## __m256i __lasx_mxmsubr_q_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmsubr_q_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmsubr.q.w
Builtin: __builtin_lasx_mxmsubr_q_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2557
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmsubr.q.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  product = round_fixed_point(b.word[i] * c.word[i]);
  dst.word[i] = a.word[i] - product;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmsubr_q_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
```

## __m256i __lasx_mxmsubv_b (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmsubv_b (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmsubv.b
Builtin: __builtin_lasx_mxmsubv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1258
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmsubv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..31:
  product = identity(b.byte[i] * c.byte[i]);
  dst.byte[i] = a.byte[i] - product;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmsubv_b((v32i8)_1, (v32i8)_2, (v32i8)_3);
```

## __m256i __lasx_mxmsubv_d (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmsubv_d (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmsubv.d
Builtin: __builtin_lasx_mxmsubv_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1279
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmsubv.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  product = identity(b.dword[i] * c.dword[i]);
  dst.dword[i] = a.dword[i] - product;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmsubv_d((v4i64)_1, (v4i64)_2, (v4i64)_3);
```

## __m256i __lasx_mxmsubv_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmsubv_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmsubv.h
Builtin: __builtin_lasx_mxmsubv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1265
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmsubv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..15:
  product = identity(b.half[i] * c.half[i]);
  dst.half[i] = a.half[i] - product;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmsubv_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
```

## __m256i __lasx_mxmsubv_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxmsubv_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxmsubv.w
Builtin: __builtin_lasx_mxmsubv_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1272
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmsubv.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  product = identity(b.word[i] * c.word[i]);
  dst.word[i] = a.word[i] - product;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmsubv_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
```

## __m256i __lasx_mxmuhv_s_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmuhv_s_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmuhv.s.d
Builtin: __builtin_lasx_mxmuhv_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4833
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmuhv.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
for i in 0..3:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmuhv_s_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxmuhv_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmuhv_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmuhv.u.d
Builtin: __builtin_lasx_mxmuhv_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4854
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmuhv.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
for i in 0..3:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmuhv_u_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxmuhv_us_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxmuhv_us_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxmuhv.us.d
Builtin: __builtin_lasx_mxmuhv_us_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4875
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmuhv.us.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
for i in 0..3:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmuhv_us_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxmul_q_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmul_q_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmul.q.h
Builtin: __builtin_lasx_mxmul_q_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2480
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmul.q.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] * b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmul_q_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxmul_q_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmul_q_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmul.q.w
Builtin: __builtin_lasx_mxmul_q_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2487
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmul.q.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmul_q_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxmulr_q_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmulr_q_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmulr.q.h
Builtin: __builtin_lasx_mxmulr_q_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2494
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmulr.q.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] * b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmulr_q_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxmulr_q_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmulr_q_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmulr.q.w
Builtin: __builtin_lasx_mxmulr_q_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2501
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmulr.q.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmulr_q_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxmulv_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmulv_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmulv.b
Builtin: __builtin_lasx_mxmulv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1202
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmulv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] * b.byte[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmulv_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxmulv_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmulv_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmulv.d
Builtin: __builtin_lasx_mxmulv_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1223
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmulv.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] * b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmulv_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxmulv_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmulv_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmulv.h
Builtin: __builtin_lasx_mxmulv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1209
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmulv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] * b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmulv_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxmulv_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmulv_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmulv.w
Builtin: __builtin_lasx_mxmulv_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1216
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmulv.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmulv_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxsat_s_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsat_s_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsat.s.b
Builtin: __builtin_lasx_mxsat_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:801
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsat.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = saturate(a.byte[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __lasx_mxsat_s_b(_1, _2) ((__m256i)__builtin_lasx_mxsat_s_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxsat_s_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsat_s_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsat.s.d
Builtin: __builtin_lasx_mxsat_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:804
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsat.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = saturate(a.dword[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __lasx_mxsat_s_d(_1, _2) ((__m256i)__builtin_lasx_mxsat_s_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxsat_s_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsat_s_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsat.s.h
Builtin: __builtin_lasx_mxsat_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:802
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsat.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = saturate(a.half[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __lasx_mxsat_s_h(_1, _2) ((__m256i)__builtin_lasx_mxsat_s_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxsat_s_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsat_s_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsat.s.w
Builtin: __builtin_lasx_mxsat_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:803
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsat.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = saturate(a.word[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __lasx_mxsat_s_w(_1, _2) ((__m256i)__builtin_lasx_mxsat_s_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxsat_u_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsat_u_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsat.u.b
Builtin: __builtin_lasx_mxsat_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:805
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsat.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = saturate(a.byte[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __lasx_mxsat_u_b(_1, _2) ((__m256i)__builtin_lasx_mxsat_u_b((v32u8)(_1), (_2)))
```

## __m256i __lasx_mxsat_u_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsat_u_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsat.u.d
Builtin: __builtin_lasx_mxsat_u_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:808
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsat.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = saturate(a.dword[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __lasx_mxsat_u_d(_1, _2) ((__m256i)__builtin_lasx_mxsat_u_d((v4u64)(_1), (_2)))
```

## __m256i __lasx_mxsat_u_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsat_u_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsat.u.h
Builtin: __builtin_lasx_mxsat_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:806
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsat.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = saturate(a.half[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __lasx_mxsat_u_h(_1, _2) ((__m256i)__builtin_lasx_mxsat_u_h((v16u16)(_1), (_2)))
```

## __m256i __lasx_mxsat_u_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsat_u_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsat.u.w
Builtin: __builtin_lasx_mxsat_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:807
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsat.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = saturate(a.word[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __lasx_mxsat_u_w(_1, _2) ((__m256i)__builtin_lasx_mxsat_u_w((v8u32)(_1), (_2)))
```

## __m256i __lasx_mxsubs_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubs_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubs.s.b
Builtin: __builtin_lasx_mxsubs_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1034
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubs.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate(a.byte[i] - b.byte[i], 8, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubs_s_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxsubs_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubs_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubs.s.d
Builtin: __builtin_lasx_mxsubs_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1055
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubs.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = saturate(a.dword[i] - b.dword[i], 64, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubs_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxsubs_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubs_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubs.s.h
Builtin: __builtin_lasx_mxsubs_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1041
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubs.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate(a.half[i] - b.half[i], 16, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubs_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxsubs_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubs_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubs.s.w
Builtin: __builtin_lasx_mxsubs_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1048
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubs.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate(a.word[i] - b.word[i], 32, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubs_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxsubs_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubs_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubs.u.b
Builtin: __builtin_lasx_mxsubs_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1062
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubs.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = saturate(a.byte[i] - b.byte[i], 8, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubs_u_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxsubs_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubs_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubs.u.d
Builtin: __builtin_lasx_mxsubs_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1083
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubs.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = saturate(a.dword[i] - b.dword[i], 64, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubs_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxsubs_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubs_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubs.u.h
Builtin: __builtin_lasx_mxsubs_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1069
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubs.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = saturate(a.half[i] - b.half[i], 16, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubs_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxsubs_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubs_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubs.u.w
Builtin: __builtin_lasx_mxsubs_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1076
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubs.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = saturate(a.word[i] - b.word[i], 32, signedness);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubs_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxsubssu_u_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubssu_u_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubssu.u.b
Builtin: __builtin_lasx_mxsubssu_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4716
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubssu.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
for i in 0..31:
  dst.byte[i] = unsigned_saturate(signed(a.byte[i]) - unsigned(b.byte[i]), 8);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxsubssu_u_b ((v32i8) a, (v32u8) b);
```

## __m256i __lasx_mxsubssu_u_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubssu_u_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubssu.u.d
Builtin: __builtin_lasx_mxsubssu_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4734
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubssu.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
for i in 0..3:
  dst.dword[i] = unsigned_saturate(signed(a.dword[i]) - unsigned(b.dword[i]), 64);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxsubssu_u_d ((v4i64) a, (v4u64) b);
```

## __m256i __lasx_mxsubssu_u_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubssu_u_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubssu.u.h
Builtin: __builtin_lasx_mxsubssu_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4722
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubssu.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
for i in 0..15:
  dst.half[i] = unsigned_saturate(signed(a.half[i]) - unsigned(b.half[i]), 16);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxsubssu_u_h ((v16i16) a, (v16u16) b);
```

## __m256i __lasx_mxsubssu_u_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsubssu_u_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsubssu.u.w
Builtin: __builtin_lasx_mxsubssu_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4728
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubssu.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
for i in 0..7:
  dst.word[i] = unsigned_saturate(signed(a.word[i]) - unsigned(b.word[i]), 32);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxsubssu_u_w ((v8i32) a, (v8u32) b);
```

## __m256i __lasx_mxsubsus_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubsus_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubsus.u.b
Builtin: __builtin_lasx_mxsubsus_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1118
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubsus.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = signed_saturate(unsigned(a.byte[i]) - signed(b.byte[i]), 8);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubsus_u_b((v32u8)_1, (v32i8)_2);
```

## __m256i __lasx_mxsubsus_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubsus_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubsus.u.d
Builtin: __builtin_lasx_mxsubsus_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1139
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubsus.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = signed_saturate(unsigned(a.dword[i]) - signed(b.dword[i]), 64);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubsus_u_d((v4u64)_1, (v4i64)_2);
```

## __m256i __lasx_mxsubsus_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubsus_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubsus.u.h
Builtin: __builtin_lasx_mxsubsus_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1125
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubsus.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = signed_saturate(unsigned(a.half[i]) - signed(b.half[i]), 16);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubsus_u_h((v16u16)_1, (v16i16)_2);
```

## __m256i __lasx_mxsubsus_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubsus_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubsus.u.w
Builtin: __builtin_lasx_mxsubsus_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1132
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubsus.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = signed_saturate(unsigned(a.word[i]) - signed(b.word[i]), 32);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubsus_u_w((v8u32)_1, (v8i32)_2);
```

## __m256i __lasx_mxsubsuu_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubsuu_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubsuu.s.b
Builtin: __builtin_lasx_mxsubsuu_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1090
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubsuu.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = unsigned_saturate(unsigned(a.byte[i]) - unsigned(b.byte[i]), 8);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubsuu_s_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxsubsuu_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubsuu_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubsuu.s.d
Builtin: __builtin_lasx_mxsubsuu_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1111
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubsuu.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = unsigned_saturate(unsigned(a.dword[i]) - unsigned(b.dword[i]), 64);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubsuu_s_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxsubsuu_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubsuu_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubsuu.s.h
Builtin: __builtin_lasx_mxsubsuu_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1097
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubsuu.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = unsigned_saturate(unsigned(a.half[i]) - unsigned(b.half[i]), 16);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubsuu_s_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxsubsuu_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubsuu_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubsuu.s.w
Builtin: __builtin_lasx_mxsubsuu_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1104
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubsuu.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = unsigned_saturate(unsigned(a.word[i]) - unsigned(b.word[i]), 32);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubsuu_s_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxsubv_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubv_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubv.b
Builtin: __builtin_lasx_mxsubv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:426
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] - b.byte[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubv_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxsubv_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubv_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubv.d
Builtin: __builtin_lasx_mxsubv_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:447
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubv.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubv_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxsubv_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubv_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubv.h
Builtin: __builtin_lasx_mxsubv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:433
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubv_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxsubv_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxsubv_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxsubv.w
Builtin: __builtin_lasx_mxsubv_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:440
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubv.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsubv_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxsubvi_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsubvi_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsubvi.b
Builtin: __builtin_lasx_mxsubvi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:453
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubvi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] - imm;
```

### Header Mapping

```c
#define __lasx_mxsubvi_b(_1, _2) ((__m256i)__builtin_lasx_mxsubvi_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxsubvi_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsubvi_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsubvi.d
Builtin: __builtin_lasx_mxsubvi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:456
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubvi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] - imm;
```

### Header Mapping

```c
#define __lasx_mxsubvi_d(_1, _2) ((__m256i)__builtin_lasx_mxsubvi_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxsubvi_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsubvi_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsubvi.h
Builtin: __builtin_lasx_mxsubvi_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:454
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubvi.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = a.half[i] - imm;
```

### Header Mapping

```c
#define __lasx_mxsubvi_h(_1, _2) ((__m256i)__builtin_lasx_mxsubvi_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxsubvi_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsubvi_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsubvi.w
Builtin: __builtin_lasx_mxsubvi_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:455
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsubvi.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = a.word[i] - imm;
```

### Header Mapping

```c
#define __lasx_mxsubvi_w(_1, _2) ((__m256i)__builtin_lasx_mxsubvi_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxvabs_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvabs_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvabs.b
Builtin: __builtin_lasx_mxvabs_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2802
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvabs.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..31:
  dst.byte[i] = abs(a.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvabs_b((v32i8)_1);
```

## __m256i __lasx_mxvabs_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvabs_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvabs.d
Builtin: __builtin_lasx_mxvabs_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2823
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvabs.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = abs(a.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvabs_d((v4i64)_1);
```

## __m256i __lasx_mxvabs_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvabs_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvabs.h
Builtin: __builtin_lasx_mxvabs_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2809
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvabs.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..15:
  dst.half[i] = abs(a.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvabs_h((v16i16)_1);
```

## __m256i __lasx_mxvabs_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvabs_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvabs.w
Builtin: __builtin_lasx_mxvabs_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2816
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvabs.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.word[i] = abs(a.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvabs_w((v8i32)_1);
```

## __m256i __lasx_mxvacc4b_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvacc4b_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvacc4b.u.h
Builtin: __builtin_lasx_mxvacc4b_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3082
```

### Description

Accumulate groups of 4 byte elements into wider unsigned destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvacc4b.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..7:
  sum = 0;
  for j in 0..3:
    sum += unsigned(a.byte[i * group + j]);
  dst.wide_lane[i] = sum;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvacc4b_u_h((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxvacc8b_u_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvacc8b_u_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvacc8b.u.d
Builtin: __builtin_lasx_mxvacc8b_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3089
```

### Description

Accumulate groups of 8 byte elements into wider unsigned destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvacc8b.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  sum = 0;
  for j in 0..7:
    sum += unsigned(a.byte[i * group + j]);
  dst.wide_lane[i] = sum;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvacc8b_u_d((v32u8)_1);
```

## __m256i __lasx_mxvadd_el0_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.q
Builtin: __builtin_lasx_mxvadd_el0_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4740
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 128-bit qword lanes over selected source lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.el0.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
for i in 0..1:
  dst.qword[i] = a.qword[i] + b.qword[i];
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxvadd_el0_q ((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_el0_s_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_s_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.s.wx.d
Builtin: __builtin_lasx_mxvadd_el0_s_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5184
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.el0.s.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_s_wx_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_el0_s_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_s_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.s.wx.h
Builtin: __builtin_lasx_mxvadd_el0_s_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5142
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.el0.s.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_s_wx_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_el0_s_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_s_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.s.wx.w
Builtin: __builtin_lasx_mxvadd_el0_s_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5163
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.el0.s.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_s_wx_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_el0_u_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_u_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.u.wx.d
Builtin: __builtin_lasx_mxvadd_el0_u_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5247
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.el0.u.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_u_wx_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvadd_el0_u_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_u_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.u.wx.h
Builtin: __builtin_lasx_mxvadd_el0_u_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5205
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.el0.u.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_u_wx_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvadd_el0_u_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_u_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.u.wx.w
Builtin: __builtin_lasx_mxvadd_el0_u_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5226
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.el0.u.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_u_wx_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvadd_el0_us_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_us_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.us.wx.d
Builtin: __builtin_lasx_mxvadd_el0_us_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5310
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.el0.us.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_us_wx_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_el0_us_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_us_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.us.wx.h
Builtin: __builtin_lasx_mxvadd_el0_us_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5268
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.el0.us.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_us_wx_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_el0_us_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_el0_us_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.el0.us.wx.w
Builtin: __builtin_lasx_mxvadd_el0_us_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5289
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.el0.us.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_el0_us_wx_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvaddx_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvaddx_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvaddx.s.d
Builtin: __builtin_lasx_mxvaddx_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2858
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvaddx.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] + b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddx_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvaddx_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvaddx_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvaddx.s.h
Builtin: __builtin_lasx_mxvaddx_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2872
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvaddx.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddx_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvaddx_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvaddx_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvaddx.s.w
Builtin: __builtin_lasx_mxvaddx_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2865
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvaddx.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddx_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvaddx_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvaddx_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvaddx.u.d
Builtin: __builtin_lasx_mxvaddx_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2879
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvaddx.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] + b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddx_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxvaddx_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvaddx_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvaddx.u.h
Builtin: __builtin_lasx_mxvaddx_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2893
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvaddx.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddx_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxvaddx_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvaddx_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvaddx.u.w
Builtin: __builtin_lasx_mxvaddx_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2886
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvaddx.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddx_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxvaddxs_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvaddxs_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvaddxs.s.d
Builtin: __builtin_lasx_mxvaddxs_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2942
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvaddxs.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] + b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddxs_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvaddxs_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvaddxs_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvaddxs.s.h
Builtin: __builtin_lasx_mxvaddxs_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2956
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvaddxs.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddxs_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvaddxs_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvaddxs_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvaddxs.s.w
Builtin: __builtin_lasx_mxvaddxs_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2949
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvaddxs.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddxs_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvaddxs_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvaddxs_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvaddxs.u.d
Builtin: __builtin_lasx_mxvaddxs_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2963
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvaddxs.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] + b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddxs_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxvaddxs_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvaddxs_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvaddxs.u.h
Builtin: __builtin_lasx_mxvaddxs_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2977
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvaddxs.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddxs_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxvaddxs_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvaddxs_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvaddxs.u.w
Builtin: __builtin_lasx_mxvaddxs_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2970
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvaddxs.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvaddxs_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxvmuhp_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmuhp_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmuhp.d
Builtin: __builtin_lasx_mxvmuhp_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6360
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmuhp.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
for i in 0..3:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmuhp_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmuhp_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmuhp_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmuhp.w
Builtin: __builtin_lasx_mxvmuhp_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6339
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmuhp.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
for i in 0..7:
  dst.word[i] = high_half(a.word[i] * b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmuhp_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmuhp_xacc_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmuhp_xacc_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmuhp.xacc.d
Builtin: __builtin_lasx_mxvmuhp_xacc_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6442
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes over accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmuhp.xacc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
for i in 0..3:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmuhp_xacc_d((v4i64) ret, (v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmuhp_xacc_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmuhp_xacc_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmuhp.xacc.w
Builtin: __builtin_lasx_mxvmuhp_xacc_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6422
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes over accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmuhp.xacc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
for i in 0..7:
  dst.word[i] = high_half(a.word[i] * b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmuhp_xacc_w((v8i32) ret, (v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmulhi_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulhi_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.s.b
Builtin: __builtin_lasx_mxvmulhi_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3117
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulhi.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = high_half(a.byte[i] * b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulhi_s_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxvmulhi_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulhi_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.s.d
Builtin: __builtin_lasx_mxvmulhi_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3096
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulhi.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulhi_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvmulhi_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulhi_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.s.h
Builtin: __builtin_lasx_mxvmulhi_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3110
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulhi.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = high_half(a.half[i] * b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulhi_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvmulhi_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulhi_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.s.w
Builtin: __builtin_lasx_mxvmulhi_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3103
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulhi.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = high_half(a.word[i] * b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulhi_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvmulhi_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulhi_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.u.b
Builtin: __builtin_lasx_mxvmulhi_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3145
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulhi.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = high_half(a.byte[i] * b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulhi_u_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxvmulhi_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulhi_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.u.d
Builtin: __builtin_lasx_mxvmulhi_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3124
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulhi.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = high_half(a.dword[i] * b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulhi_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxvmulhi_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulhi_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.u.h
Builtin: __builtin_lasx_mxvmulhi_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3138
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulhi.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = high_half(a.half[i] * b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulhi_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxvmulhi_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulhi_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.u.w
Builtin: __builtin_lasx_mxvmulhi_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3131
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulhi.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = high_half(a.word[i] * b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulhi_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxvmulhi_us_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulhi_us_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.us.b
Builtin: __builtin_lasx_mxvmulhi_us_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4115
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulhi.us.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = high_half(a.byte[i] * b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulhi_us_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxvmulhi_us_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulhi_us_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.us.h
Builtin: __builtin_lasx_mxvmulhi_us_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4108
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulhi.us.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = high_half(a.half[i] * b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulhi_us_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvmulhi_us_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulhi_us_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulhi.us.w
Builtin: __builtin_lasx_mxvmulhi_us_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4101
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulhi.us.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = high_half(a.word[i] * b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulhi_us_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvmulp_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulp_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulp.d
Builtin: __builtin_lasx_mxvmulp_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6402
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulp.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
for i in 0..3:
  dst.dword[i] = a.dword[i] * b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulp_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmulp_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulp_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulp.w
Builtin: __builtin_lasx_mxvmulp_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6381
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulp.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
for i in 0..7:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulp_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmulp_xacc_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulp_xacc_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulp.xacc.d
Builtin: __builtin_lasx_mxvmulp_xacc_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6482
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes over accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulp.xacc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
for i in 0..3:
  dst.dword[i] = a.dword[i] * b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulp_xacc_d((v4i64) ret, (v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmulp_xacc_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmulp_xacc_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmulp.xacc.w
Builtin: __builtin_lasx_mxvmulp_xacc_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6462
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes over accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulp.xacc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
for i in 0..7:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulp_xacc_w((v8i32) ret, (v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_el0_acc_s_wx_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_s_wx_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.s.wx.d
Builtin: __builtin_lasx_mxvmult_el0_acc_s_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6731
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.acc.s.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_s_wx_d((v4i64) ret, (v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_el0_acc_s_wx_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_s_wx_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.s.wx.h
Builtin: __builtin_lasx_mxvmult_el0_acc_s_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6691
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.acc.s.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_s_wx_h((v4i64) ret, (v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_el0_acc_s_wx_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_s_wx_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.s.wx.w
Builtin: __builtin_lasx_mxvmult_el0_acc_s_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6711
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.acc.s.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_s_wx_w((v4i64) ret, (v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_el0_acc_u_wx_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_u_wx_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.u.wx.d
Builtin: __builtin_lasx_mxvmult_el0_acc_u_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6791
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.acc.u.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_u_wx_d((v4u64) ret, (v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_el0_acc_u_wx_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_u_wx_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.u.wx.h
Builtin: __builtin_lasx_mxvmult_el0_acc_u_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6751
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.acc.u.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_u_wx_h((v4u64) ret, (v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_el0_acc_u_wx_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_u_wx_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.u.wx.w
Builtin: __builtin_lasx_mxvmult_el0_acc_u_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6771
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.acc.u.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_u_wx_w((v4u64) ret, (v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_el0_acc_us_wx_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_us_wx_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.us.wx.d
Builtin: __builtin_lasx_mxvmult_el0_acc_us_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6851
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.acc.us.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_us_wx_d((v4u64) ret, (v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_el0_acc_us_wx_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_us_wx_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.us.wx.h
Builtin: __builtin_lasx_mxvmult_el0_acc_us_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6811
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.acc.us.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_us_wx_h((v4u64) ret, (v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_el0_acc_us_wx_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_acc_us_wx_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.acc.us.wx.w
Builtin: __builtin_lasx_mxvmult_el0_acc_us_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6831
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.acc.us.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_acc_us_wx_w((v4u64) ret, (v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_el0_s_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_s_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.s.wx.d
Builtin: __builtin_lasx_mxvmult_el0_s_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6545
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.s.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_s_wx_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_el0_s_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_s_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.s.wx.h
Builtin: __builtin_lasx_mxvmult_el0_s_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6503
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.s.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_s_wx_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_el0_s_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_s_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.s.wx.w
Builtin: __builtin_lasx_mxvmult_el0_s_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6524
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.s.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_s_wx_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_el0_u_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_u_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.u.wx.d
Builtin: __builtin_lasx_mxvmult_el0_u_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6608
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.u.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_u_wx_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_el0_u_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_u_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.u.wx.h
Builtin: __builtin_lasx_mxvmult_el0_u_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6566
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.u.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_u_wx_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_el0_u_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_u_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.u.wx.w
Builtin: __builtin_lasx_mxvmult_el0_u_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6587
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.u.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_u_wx_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_el0_us_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_us_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.us.wx.d
Builtin: __builtin_lasx_mxvmult_el0_us_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6671
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.us.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_us_wx_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_el0_us_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_us_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.us.wx.h
Builtin: __builtin_lasx_mxvmult_el0_us_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6629
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.us.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_us_wx_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_el0_us_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_el0_us_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.el0.us.wx.w
Builtin: __builtin_lasx_mxvmult_el0_us_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6650
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.el0.us.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_el0_us_wx_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmulx_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulx_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulx.s.d
Builtin: __builtin_lasx_mxvmulx_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3152
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulx.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] * b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulx_s_d((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvmulx_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulx_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulx.s.h
Builtin: __builtin_lasx_mxvmulx_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3166
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulx.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] * b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulx_s_h((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxvmulx_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulx_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulx.s.w
Builtin: __builtin_lasx_mxvmulx_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3159
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulx.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulx_s_w((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvmulx_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulx_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulx.u.d
Builtin: __builtin_lasx_mxvmulx_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3173
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulx.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] * b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulx_u_d((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxvmulx_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulx_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulx.u.h
Builtin: __builtin_lasx_mxvmulx_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3187
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulx.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] * b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulx_u_h((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxvmulx_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvmulx_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvmulx.u.w
Builtin: __builtin_lasx_mxvmulx_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3180
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmulx.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmulx_u_w((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxvneg_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvneg_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvneg.b
Builtin: __builtin_lasx_mxvneg_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2830
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvneg.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..31:
  dst.byte[i] = -a.byte[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvneg_b((v32i8)_1);
```

## __m256i __lasx_mxvneg_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvneg_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvneg.d
Builtin: __builtin_lasx_mxvneg_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2851
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvneg.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = -a.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvneg_d((v4i64)_1);
```

## __m256i __lasx_mxvneg_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvneg_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvneg.h
Builtin: __builtin_lasx_mxvneg_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2837
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvneg.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..15:
  dst.half[i] = -a.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvneg_h((v16i16)_1);
```

## __m256i __lasx_mxvneg_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvneg_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvneg.w
Builtin: __builtin_lasx_mxvneg_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2844
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvneg.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.word[i] = -a.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvneg_w((v8i32)_1);
```

## __m256i __lasx_mxvsub_el0_q (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_q (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.q
Builtin: __builtin_lasx_mxvsub_el0_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4752
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 128-bit qword lanes over selected source lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.el0.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
for i in 0..1:
  dst.qword[i] = a.qword[i] - b.qword[i];
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxvsub_el0_q ((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvsub_el0_s_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_s_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.s.wx.d
Builtin: __builtin_lasx_mxvsub_el0_s_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9784
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.el0.s.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_el0_s_wx_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvsub_el0_s_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_s_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.s.wx.h
Builtin: __builtin_lasx_mxvsub_el0_s_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9742
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.el0.s.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_el0_s_wx_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvsub_el0_s_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_s_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.s.wx.w
Builtin: __builtin_lasx_mxvsub_el0_s_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9763
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.el0.s.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_el0_s_wx_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvsub_el0_u_wx_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_u_wx_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.u.wx.d
Builtin: __builtin_lasx_mxvsub_el0_u_wx_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9847
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.el0.u.wx.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_el0_u_wx_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvsub_el0_u_wx_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_u_wx_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.u.wx.h
Builtin: __builtin_lasx_mxvsub_el0_u_wx_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9805
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.el0.u.wx.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_el0_u_wx_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvsub_el0_u_wx_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_el0_u_wx_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.el0.u.wx.w
Builtin: __builtin_lasx_mxvsub_el0_u_wx_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9826
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.el0.u.wx.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 0;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_el0_u_wx_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvsubh_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubh_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.s.b
Builtin: __builtin_lasx_mxvsubh_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3047
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubh.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] - b.byte[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubh_s_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxvsubh_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubh_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.s.d
Builtin: __builtin_lasx_mxvsubh_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3026
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubh.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubh_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvsubh_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubh_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.s.h
Builtin: __builtin_lasx_mxvsubh_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3040
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubh.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubh_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvsubh_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubh_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.s.w
Builtin: __builtin_lasx_mxvsubh_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3033
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubh.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubh_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvsubh_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubh_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.u.b
Builtin: __builtin_lasx_mxvsubh_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3075
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubh.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = a.byte[i] - b.byte[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubh_u_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxvsubh_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubh_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.u.d
Builtin: __builtin_lasx_mxvsubh_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3054
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubh.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubh_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxvsubh_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubh_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.u.h
Builtin: __builtin_lasx_mxvsubh_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3068
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubh.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubh_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxvsubh_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubh_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubh.u.w
Builtin: __builtin_lasx_mxvsubh_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3061
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubh.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubh_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxvsubx_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubx_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubx.s.d
Builtin: __builtin_lasx_mxvsubx_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2900
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubx.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubx_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvsubx_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubx_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubx.s.h
Builtin: __builtin_lasx_mxvsubx_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2914
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubx.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubx_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvsubx_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubx_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubx.s.w
Builtin: __builtin_lasx_mxvsubx_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2907
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubx.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubx_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvsubx_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubx_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubx.u.d
Builtin: __builtin_lasx_mxvsubx_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2921
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubx.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubx_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxvsubx_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubx_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubx.u.h
Builtin: __builtin_lasx_mxvsubx_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2935
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubx.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubx_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxvsubx_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubx_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubx.u.w
Builtin: __builtin_lasx_mxvsubx_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2928
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubx.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubx_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxvsubxs_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubxs_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubxs.s.d
Builtin: __builtin_lasx_mxvsubxs_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2984
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubxs.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubxs_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvsubxs_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubxs_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubxs.s.h
Builtin: __builtin_lasx_mxvsubxs_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2998
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubxs.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubxs_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxvsubxs_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubxs_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubxs.s.w
Builtin: __builtin_lasx_mxvsubxs_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2991
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubxs.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubxs_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvsubxs_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubxs_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubxs.u.d
Builtin: __builtin_lasx_mxvsubxs_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3005
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubxs.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubxs_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxvsubxs_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubxs_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubxs.u.h
Builtin: __builtin_lasx_mxvsubxs_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3019
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubxs.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubxs_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxvsubxs_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvsubxs_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvsubxs.u.w
Builtin: __builtin_lasx_mxvsubxs_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3012
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsubxs.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsubxs_u_w((v8u32)_1, (v8u32)_2);
```

