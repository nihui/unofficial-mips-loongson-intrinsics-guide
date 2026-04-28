# Integer Comparison

Generated from `include/loongson-asxintrin.h`. This page contains 83 intrinsics.

## __m256i __lasx_mxceq_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxceq_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxceq.b
Builtin: __builtin_lasx_mxceq_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:642
```

### Description

Compare modular 32 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxceq.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = (a.byte[i] == b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxceq_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxceq_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxceq_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxceq.d
Builtin: __builtin_lasx_mxceq_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:663
```

### Description

Compare modular 4 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxceq.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = (a.dword[i] == b.dword[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxceq_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxceq_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxceq_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxceq.h
Builtin: __builtin_lasx_mxceq_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:649
```

### Description

Compare modular 16 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxceq.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = (a.half[i] == b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxceq_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxceq_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxceq_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxceq.w
Builtin: __builtin_lasx_mxceq_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:656
```

### Description

Compare modular 8 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxceq.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = (a.word[i] == b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxceq_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxceqi_b (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxceqi_b (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxceqi.b
Builtin: __builtin_lasx_mxceqi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:669
```

### Description

Compare modular 32 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxceqi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = (a.byte[i] == imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxceqi_b(_1, _2) ((__m256i)__builtin_lasx_mxceqi_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxceqi_d (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxceqi_d (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxceqi.d
Builtin: __builtin_lasx_mxceqi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:672
```

### Description

Compare modular 4 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxceqi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = (a.dword[i] == imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxceqi_d(_1, _2) ((__m256i)__builtin_lasx_mxceqi_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxceqi_h (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxceqi_h (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxceqi.h
Builtin: __builtin_lasx_mxceqi_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:670
```

### Description

Compare modular 16 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxceqi.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = (a.half[i] == imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxceqi_h(_1, _2) ((__m256i)__builtin_lasx_mxceqi_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxceqi_w (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxceqi_w (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxceqi.w
Builtin: __builtin_lasx_mxceqi_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:671
```

### Description

Compare modular 8 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxceqi.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = (a.word[i] == imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxceqi_w(_1, _2) ((__m256i)__builtin_lasx_mxceqi_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxcle_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxcle_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxcle.s.b
Builtin: __builtin_lasx_mxcle_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:738
```

### Description

Compare signed 32 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxcle.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = (a.byte[i] <= b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_s_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxcle_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxcle_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxcle.s.d
Builtin: __builtin_lasx_mxcle_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:759
```

### Description

Compare signed 4 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxcle.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = (a.dword[i] <= b.dword[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxcle_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxcle_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxcle.s.h
Builtin: __builtin_lasx_mxcle_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:745
```

### Description

Compare signed 16 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxcle.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = (a.half[i] <= b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxcle_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxcle_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxcle.s.w
Builtin: __builtin_lasx_mxcle_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:752
```

### Description

Compare signed 8 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxcle.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = (a.word[i] <= b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxcle_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxcle_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxcle.u.b
Builtin: __builtin_lasx_mxcle_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:770
```

### Description

Compare unsigned 32 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxcle.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = (a.byte[i] <= b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_u_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxcle_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxcle_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxcle.u.d
Builtin: __builtin_lasx_mxcle_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:791
```

### Description

Compare unsigned 4 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxcle.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = (a.dword[i] <= b.dword[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxcle_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxcle_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxcle.u.h
Builtin: __builtin_lasx_mxcle_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:777
```

### Description

Compare unsigned 16 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxcle.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = (a.half[i] <= b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxcle_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxcle_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxcle.u.w
Builtin: __builtin_lasx_mxcle_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:784
```

### Description

Compare unsigned 8 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxcle.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = (a.word[i] <= b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxcle_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxclei_s_b (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxclei_s_b (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxclei.s.b
Builtin: __builtin_lasx_mxclei_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:765
```

### Description

Compare signed 32 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclei.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = (a.byte[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclei_s_b(_1, _2) ((__m256i)__builtin_lasx_mxclei_s_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxclei_s_d (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxclei_s_d (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxclei.s.d
Builtin: __builtin_lasx_mxclei_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:768
```

### Description

Compare signed 4 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclei.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = (a.dword[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclei_s_d(_1, _2) ((__m256i)__builtin_lasx_mxclei_s_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxclei_s_h (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxclei_s_h (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxclei.s.h
Builtin: __builtin_lasx_mxclei_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:766
```

### Description

Compare signed 16 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclei.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = (a.half[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclei_s_h(_1, _2) ((__m256i)__builtin_lasx_mxclei_s_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxclei_s_w (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxclei_s_w (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxclei.s.w
Builtin: __builtin_lasx_mxclei_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:767
```

### Description

Compare signed 8 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclei.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = (a.word[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclei_s_w(_1, _2) ((__m256i)__builtin_lasx_mxclei_s_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxclei_u_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxclei_u_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxclei.u.b
Builtin: __builtin_lasx_mxclei_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:797
```

### Description

Compare unsigned 32 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclei.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = (a.byte[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclei_u_b(_1, _2) ((__m256i)__builtin_lasx_mxclei_u_b((v32u8)(_1), (_2)))
```

## __m256i __lasx_mxclei_u_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxclei_u_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxclei.u.d
Builtin: __builtin_lasx_mxclei_u_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:800
```

### Description

Compare unsigned 4 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclei.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = (a.dword[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclei_u_d(_1, _2) ((__m256i)__builtin_lasx_mxclei_u_d((v4u64)(_1), (_2)))
```

## __m256i __lasx_mxclei_u_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxclei_u_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxclei.u.h
Builtin: __builtin_lasx_mxclei_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:798
```

### Description

Compare unsigned 16 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclei.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = (a.half[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclei_u_h(_1, _2) ((__m256i)__builtin_lasx_mxclei_u_h((v16u16)(_1), (_2)))
```

## __m256i __lasx_mxclei_u_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxclei_u_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxclei.u.w
Builtin: __builtin_lasx_mxclei_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:799
```

### Description

Compare unsigned 8 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclei.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = (a.word[i] <= imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclei_u_w(_1, _2) ((__m256i)__builtin_lasx_mxclei_u_w((v8u32)(_1), (_2)))
```

## __m256i __lasx_mxclt_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxclt_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxclt.s.b
Builtin: __builtin_lasx_mxclt_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:674
```

### Description

Compare signed 32 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclt.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = (a.byte[i] < b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_s_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxclt_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxclt_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxclt.s.d
Builtin: __builtin_lasx_mxclt_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:695
```

### Description

Compare signed 4 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclt.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = (a.dword[i] < b.dword[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxclt_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxclt_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxclt.s.h
Builtin: __builtin_lasx_mxclt_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:681
```

### Description

Compare signed 16 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclt.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = (a.half[i] < b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxclt_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxclt_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxclt.s.w
Builtin: __builtin_lasx_mxclt_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:688
```

### Description

Compare signed 8 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclt.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = (a.word[i] < b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxclt_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxclt_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxclt.u.b
Builtin: __builtin_lasx_mxclt_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:706
```

### Description

Compare unsigned 32 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclt.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = (a.byte[i] < b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_u_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxclt_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxclt_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxclt.u.d
Builtin: __builtin_lasx_mxclt_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:727
```

### Description

Compare unsigned 4 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclt.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = (a.dword[i] < b.dword[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxclt_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxclt_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxclt.u.h
Builtin: __builtin_lasx_mxclt_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:713
```

### Description

Compare unsigned 16 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclt.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = (a.half[i] < b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxclt_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxclt_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxclt.u.w
Builtin: __builtin_lasx_mxclt_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:720
```

### Description

Compare unsigned 8 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclt.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = (a.word[i] < b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxclt_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxclti_s_b (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxclti_s_b (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxclti.s.b
Builtin: __builtin_lasx_mxclti_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:701
```

### Description

Compare signed 32 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclti.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = (a.byte[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclti_s_b(_1, _2) ((__m256i)__builtin_lasx_mxclti_s_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxclti_s_d (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxclti_s_d (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxclti.s.d
Builtin: __builtin_lasx_mxclti_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:704
```

### Description

Compare signed 4 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclti.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = (a.dword[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclti_s_d(_1, _2) ((__m256i)__builtin_lasx_mxclti_s_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxclti_s_h (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxclti_s_h (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxclti.s.h
Builtin: __builtin_lasx_mxclti_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:702
```

### Description

Compare signed 16 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclti.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = (a.half[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclti_s_h(_1, _2) ((__m256i)__builtin_lasx_mxclti_s_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxclti_s_w (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxclti_s_w (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxclti.s.w
Builtin: __builtin_lasx_mxclti_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:703
```

### Description

Compare signed 8 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclti.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = (a.word[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclti_s_w(_1, _2) ((__m256i)__builtin_lasx_mxclti_s_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxclti_u_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxclti_u_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxclti.u.b
Builtin: __builtin_lasx_mxclti_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:733
```

### Description

Compare unsigned 32 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclti.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = (a.byte[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclti_u_b(_1, _2) ((__m256i)__builtin_lasx_mxclti_u_b((v32u8)(_1), (_2)))
```

## __m256i __lasx_mxclti_u_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxclti_u_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxclti.u.d
Builtin: __builtin_lasx_mxclti_u_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:736
```

### Description

Compare unsigned 4 x 64-bit dword lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclti.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = (a.dword[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclti_u_d(_1, _2) ((__m256i)__builtin_lasx_mxclti_u_d((v4u64)(_1), (_2)))
```

## __m256i __lasx_mxclti_u_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxclti_u_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxclti.u.h
Builtin: __builtin_lasx_mxclti_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:734
```

### Description

Compare unsigned 16 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclti.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = (a.half[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclti_u_h(_1, _2) ((__m256i)__builtin_lasx_mxclti_u_h((v16u16)(_1), (_2)))
```

## __m256i __lasx_mxclti_u_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxclti_u_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxclti.u.w
Builtin: __builtin_lasx_mxclti_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:735
```

### Description

Compare unsigned 8 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxclti.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = (a.word[i] < imm) ? all_ones : 0;
```

### Header Mapping

```c
#define __lasx_mxclti_u_w(_1, _2) ((__m256i)__builtin_lasx_mxclti_u_w((v8u32)(_1), (_2)))
```

## __m256i __lasx_mxmax_a_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmax_a_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmax.a.b
Builtin: __builtin_lasx_mxmax_a_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:586
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmax.a.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = max(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_a_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxmax_a_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmax_a_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmax.a.d
Builtin: __builtin_lasx_mxmax_a_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:607
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmax.a.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = max(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_a_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxmax_a_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmax_a_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmax.a.h
Builtin: __builtin_lasx_mxmax_a_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:593
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmax.a.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = max(a.half[i], b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_a_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxmax_a_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmax_a_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmax.a.w
Builtin: __builtin_lasx_mxmax_a_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:600
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmax.a.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = max(a.word[i], b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_a_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxmax_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmax_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmax.s.b
Builtin: __builtin_lasx_mxmax_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:458
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmax.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = max(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_s_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxmax_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmax_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmax.s.d
Builtin: __builtin_lasx_mxmax_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:479
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmax.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = max(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxmax_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmax_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmax.s.h
Builtin: __builtin_lasx_mxmax_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:465
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmax.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = max(a.half[i], b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxmax_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmax_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmax.s.w
Builtin: __builtin_lasx_mxmax_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:472
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmax.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = max(a.word[i], b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxmax_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmax_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmax.u.b
Builtin: __builtin_lasx_mxmax_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:490
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmax.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = max(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_u_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxmax_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmax_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmax.u.d
Builtin: __builtin_lasx_mxmax_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:511
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmax.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = max(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxmax_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmax_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmax.u.h
Builtin: __builtin_lasx_mxmax_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:497
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmax.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = max(a.half[i], b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxmax_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmax_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmax.u.w
Builtin: __builtin_lasx_mxmax_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:504
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmax.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = max(a.word[i], b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmax_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxmaxi_s_b (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxmaxi_s_b (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.s.b
Builtin: __builtin_lasx_mxmaxi_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:485
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaxi.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = max(a.byte[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmaxi_s_b(_1, _2) ((__m256i)__builtin_lasx_mxmaxi_s_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxmaxi_s_d (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxmaxi_s_d (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.s.d
Builtin: __builtin_lasx_mxmaxi_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:488
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaxi.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = max(a.dword[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmaxi_s_d(_1, _2) ((__m256i)__builtin_lasx_mxmaxi_s_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxmaxi_s_h (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxmaxi_s_h (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.s.h
Builtin: __builtin_lasx_mxmaxi_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:486
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaxi.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = max(a.half[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmaxi_s_h(_1, _2) ((__m256i)__builtin_lasx_mxmaxi_s_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxmaxi_s_w (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxmaxi_s_w (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.s.w
Builtin: __builtin_lasx_mxmaxi_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:487
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaxi.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = max(a.word[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmaxi_s_w(_1, _2) ((__m256i)__builtin_lasx_mxmaxi_s_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxmaxi_u_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxmaxi_u_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.u.b
Builtin: __builtin_lasx_mxmaxi_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:517
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaxi.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = max(a.byte[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmaxi_u_b(_1, _2) ((__m256i)__builtin_lasx_mxmaxi_u_b((v32u8)(_1), (_2)))
```

## __m256i __lasx_mxmaxi_u_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxmaxi_u_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.u.d
Builtin: __builtin_lasx_mxmaxi_u_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:520
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaxi.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = max(a.dword[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmaxi_u_d(_1, _2) ((__m256i)__builtin_lasx_mxmaxi_u_d((v4u64)(_1), (_2)))
```

## __m256i __lasx_mxmaxi_u_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxmaxi_u_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.u.h
Builtin: __builtin_lasx_mxmaxi_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:518
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaxi.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = max(a.half[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmaxi_u_h(_1, _2) ((__m256i)__builtin_lasx_mxmaxi_u_h((v16u16)(_1), (_2)))
```

## __m256i __lasx_mxmaxi_u_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxmaxi_u_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxmaxi.u.w
Builtin: __builtin_lasx_mxmaxi_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:519
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmaxi.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = max(a.word[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmaxi_u_w(_1, _2) ((__m256i)__builtin_lasx_mxmaxi_u_w((v8u32)(_1), (_2)))
```

## __m256i __lasx_mxmin_a_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmin_a_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmin.a.b
Builtin: __builtin_lasx_mxmin_a_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:614
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmin.a.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = min(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_a_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxmin_a_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmin_a_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmin.a.d
Builtin: __builtin_lasx_mxmin_a_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:635
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmin.a.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = min(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_a_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxmin_a_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmin_a_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmin.a.h
Builtin: __builtin_lasx_mxmin_a_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:621
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmin.a.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = min(a.half[i], b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_a_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxmin_a_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmin_a_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmin.a.w
Builtin: __builtin_lasx_mxmin_a_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:628
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmin.a.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = min(a.word[i], b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_a_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxmin_s_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmin_s_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmin.s.b
Builtin: __builtin_lasx_mxmin_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:522
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmin.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = min(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_s_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxmin_s_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmin_s_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmin.s.d
Builtin: __builtin_lasx_mxmin_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:543
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmin.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = min(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_s_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxmin_s_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmin_s_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmin.s.h
Builtin: __builtin_lasx_mxmin_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:529
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmin.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = min(a.half[i], b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_s_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxmin_s_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmin_s_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmin.s.w
Builtin: __builtin_lasx_mxmin_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:536
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmin.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = min(a.word[i], b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_s_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxmin_u_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmin_u_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmin.u.b
Builtin: __builtin_lasx_mxmin_u_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:554
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmin.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
for i in 0..31:
  dst.byte[i] = min(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_u_b((v32u8)_1, (v32u8)_2);
```

## __m256i __lasx_mxmin_u_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmin_u_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmin.u.d
Builtin: __builtin_lasx_mxmin_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:575
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmin.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = min(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_u_d((v4u64)_1, (v4u64)_2);
```

## __m256i __lasx_mxmin_u_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmin_u_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmin.u.h
Builtin: __builtin_lasx_mxmin_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:561
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmin.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
for i in 0..15:
  dst.half[i] = min(a.half[i], b.half[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_u_h((v16u16)_1, (v16u16)_2);
```

## __m256i __lasx_mxmin_u_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxmin_u_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxmin.u.w
Builtin: __builtin_lasx_mxmin_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:568
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmin.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = min(a.word[i], b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmin_u_w((v8u32)_1, (v8u32)_2);
```

## __m256i __lasx_mxmini_s_b (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxmini_s_b (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxmini.s.b
Builtin: __builtin_lasx_mxmini_s_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:549
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmini.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = min(a.byte[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmini_s_b(_1, _2) ((__m256i)__builtin_lasx_mxmini_s_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxmini_s_d (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxmini_s_d (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxmini.s.d
Builtin: __builtin_lasx_mxmini_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:552
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmini.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = min(a.dword[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmini_s_d(_1, _2) ((__m256i)__builtin_lasx_mxmini_s_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxmini_s_h (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxmini_s_h (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxmini.s.h
Builtin: __builtin_lasx_mxmini_s_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:550
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmini.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = min(a.half[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmini_s_h(_1, _2) ((__m256i)__builtin_lasx_mxmini_s_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxmini_s_w (__m256i _1, signed char _2)

### Synopsis

```c
__m256i __lasx_mxmini_s_w (__m256i _1, signed char _2)
#include <loongson-asxintrin.h>
Instruction: mxmini.s.w
Builtin: __builtin_lasx_mxmini_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:551
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmini.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = min(a.word[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmini_s_w(_1, _2) ((__m256i)__builtin_lasx_mxmini_s_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxmini_u_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxmini_u_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxmini.u.b
Builtin: __builtin_lasx_mxmini_u_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:581
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmini.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  dst.byte[i] = min(a.byte[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmini_u_b(_1, _2) ((__m256i)__builtin_lasx_mxmini_u_b((v32u8)(_1), (_2)))
```

## __m256i __lasx_mxmini_u_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxmini_u_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxmini.u.d
Builtin: __builtin_lasx_mxmini_u_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:584
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmini.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = min(a.dword[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmini_u_d(_1, _2) ((__m256i)__builtin_lasx_mxmini_u_d((v4u64)(_1), (_2)))
```

## __m256i __lasx_mxmini_u_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxmini_u_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxmini.u.h
Builtin: __builtin_lasx_mxmini_u_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:582
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmini.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  dst.half[i] = min(a.half[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmini_u_h(_1, _2) ((__m256i)__builtin_lasx_mxmini_u_h((v16u16)(_1), (_2)))
```

## __m256i __lasx_mxmini_u_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxmini_u_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxmini.u.w
Builtin: __builtin_lasx_mxmini_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:583
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmini.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  dst.word[i] = min(a.word[i], imm);
```

### Header Mapping

```c
#define __lasx_mxmini_u_w(_1, _2) ((__m256i)__builtin_lasx_mxmini_u_w((v8u32)(_1), (_2)))
```

## __m256i __lasx_mxvhminposh_u_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvhminposh_u_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvhminposh.u.d
Builtin: __builtin_lasx_mxvhminposh_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3524
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvhminposh.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = min(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvhminposh_u_d((v16i16)_1);
```

## __m256i __lasx_mxvhminposh_u_q (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvhminposh_u_q (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvhminposh.u.q
Builtin: __builtin_lasx_mxvhminposh_u_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3538
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 128-bit qword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvhminposh.u.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
a = _1;
for i in 0..1:
  dst.qword[i] = min(a.qword[i], b.qword[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvhminposh_u_q((v16i16)_1);
```

## __m256i __lasx_mxvhminposh_u_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvhminposh_u_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvhminposh.u.w
Builtin: __builtin_lasx_mxvhminposh_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3531
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvhminposh.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.word[i] = min(a.word[i], b.word[i]);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvhminposh_u_w((v16i16)_1);
```

