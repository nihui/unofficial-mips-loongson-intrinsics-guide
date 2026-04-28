# Miscellaneous

Generated from `include/loongson-asxintrin.h`. This page contains 25 intrinsics.

## __m256i __lasx_mxvclrstri_v (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvclrstri_v (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvclrstri.v
Builtin: __builtin_lasx_mxvclrstri_v
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3606
```

### Description

Apply the Loongson vector string/mask helper encoded by `mxvclrstri.v` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvclrstri.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
imm = _2;
dst = a;
limit = string_clear_limit_from(imm);
for each byte lane i at or after limit:
  dst.byte[i] = 0;
```

### Header Mapping

```c
#define __lasx_mxvclrstri_v(_1, _2) ((__m256i)__builtin_lasx_mxvclrstri_v((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxvclrstrr_v (__m256i _1, long int _2)

### Synopsis

```c
__m256i __lasx_mxvclrstrr_v (__m256i _1, long int _2)
#include <loongson-asxintrin.h>
Instruction: mxvclrstrr.v
Builtin: __builtin_lasx_mxvclrstrr_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3614
```

### Description

Apply the Loongson vector string/mask helper encoded by `mxvclrstrr.v` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvclrstrr.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
imm = _2;
dst = a;
limit = string_clear_limit_from(scalar_register);
for each byte lane i at or after limit:
  dst.byte[i] = 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvclrstrr_v((v32i8)_1, _2);
```

## __m256i __lasx_mxvclrstrv_v (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvclrstrv_v (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvclrstrv.v
Builtin: __builtin_lasx_mxvclrstrv_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3608
```

### Description

Apply the Loongson vector string/mask helper encoded by `mxvclrstrv.v` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvclrstrv.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
b = _2;
dst = a;
limit = string_clear_limit_from(b);
for each byte lane i at or after limit:
  dst.byte[i] = 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvclrstrv_v((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxvclrtail_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvclrtail_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvclrtail.b
Builtin: __builtin_lasx_mxvclrtail_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3627
```

### Description

Apply the Loongson vector string/mask helper encoded by `mxvclrtail.b` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvclrtail.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
dst = a;
for i in first_tail_lane..31:
  dst.byte[i] = 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvclrtail_b((v32i8)_1);
```

## __m256i __lasx_mxvclrtail_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvclrtail_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvclrtail.h
Builtin: __builtin_lasx_mxvclrtail_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3620
```

### Description

Apply the Loongson vector string/mask helper encoded by `mxvclrtail.h` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvclrtail.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
dst = a;
for i in first_tail_lane..15:
  dst.half[i] = 0;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvclrtail_h((v16i16)_1);
```

## __m256i __lasx_mxvextb_s_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvextb_s_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvextb.s.d
Builtin: __builtin_lasx_mxvextb_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3194
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x 64-bit dword lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvextb.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = sign_extend(a.byte[i], 64);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextb_s_d((v32i8)_1);
```

## __m256i __lasx_mxvextb_s_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvextb_s_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvextb.s.h
Builtin: __builtin_lasx_mxvextb_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3208
```

### Description

Sign-extend or zero-extend smaller integer elements into 16 x 16-bit half lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvextb.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..15:
  dst.half[i] = sign_extend(a.byte[i], 16);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextb_s_h((v32i8)_1);
```

## __m256i __lasx_mxvextb_s_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvextb_s_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvextb.s.w
Builtin: __builtin_lasx_mxvextb_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3201
```

### Description

Sign-extend or zero-extend smaller integer elements into 8 x 32-bit word lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvextb.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.word[i] = sign_extend(a.byte[i], 32);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextb_s_w((v32i8)_1);
```

## __m256i __lasx_mxvextb_u_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvextb_u_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvextb.u.d
Builtin: __builtin_lasx_mxvextb_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3236
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x 64-bit dword lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvextb.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = zero_extend(a.byte[i], 64);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextb_u_d((v32i8)_1);
```

## __m256i __lasx_mxvextb_u_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvextb_u_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvextb.u.h
Builtin: __builtin_lasx_mxvextb_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3250
```

### Description

Sign-extend or zero-extend smaller integer elements into 16 x 16-bit half lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvextb.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..15:
  dst.half[i] = zero_extend(a.byte[i], 16);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextb_u_h((v32i8)_1);
```

## __m256i __lasx_mxvextb_u_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvextb_u_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvextb.u.w
Builtin: __builtin_lasx_mxvextb_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3243
```

### Description

Sign-extend or zero-extend smaller integer elements into 8 x 32-bit word lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvextb.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.word[i] = zero_extend(a.byte[i], 32);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextb_u_w((v32i8)_1);
```

## __m256i __lasx_mxvexth_s_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvexth_s_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvexth.s.d
Builtin: __builtin_lasx_mxvexth_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3215
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x 64-bit dword lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvexth.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = sign_extend(a.half[i], 64);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvexth_s_d((v16i16)_1);
```

## __m256i __lasx_mxvexth_s_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvexth_s_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvexth.s.w
Builtin: __builtin_lasx_mxvexth_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3222
```

### Description

Sign-extend or zero-extend smaller integer elements into 8 x 32-bit word lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvexth.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.word[i] = sign_extend(a.half[i], 32);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvexth_s_w((v16i16)_1);
```

## __m256i __lasx_mxvexth_u_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvexth_u_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvexth.u.d
Builtin: __builtin_lasx_mxvexth_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3257
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x 64-bit dword lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvexth.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = zero_extend(a.half[i], 64);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvexth_u_d((v16i16)_1);
```

## __m256i __lasx_mxvexth_u_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvexth_u_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvexth.u.w
Builtin: __builtin_lasx_mxvexth_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3264
```

### Description

Sign-extend or zero-extend smaller integer elements into 8 x 32-bit word lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvexth.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..7:
  dst.word[i] = zero_extend(a.half[i], 32);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvexth_u_w((v16i16)_1);
```

## __m256i __lasx_mxvextw_s_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvextw_s_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvextw.s.d
Builtin: __builtin_lasx_mxvextw_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3229
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x 64-bit dword lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvextw.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = sign_extend(a.word[i], 64);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextw_s_d((v8i32)_1);
```

## __m256i __lasx_mxvextw_u_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvextw_u_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvextw.u.d
Builtin: __builtin_lasx_mxvextw_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3271
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x 64-bit dword lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvextw.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
for i in 0..3:
  dst.dword[i] = zero_extend(a.word[i], 64);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextw_u_d((v8i32)_1);
```

## __m256i __lasx_mxvfrstii_b (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxvfrstii_b (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxvfrstii.b
Builtin: __builtin_lasx_mxvfrstii_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3577
```

### Description

Apply the Loongson vector string/mask helper encoded by `mxvfrstii.b` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvfrstii.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
for each search group g:
  idx = first_lane_matching_rule(a, b, imm, g);
  dst.group[g] = encode_first_match_index_or_zero(idx);
```

### Header Mapping

```c
#define __lasx_mxvfrstii_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxvfrstii_b((v32i8)(_1), (v32i8)(_2), (_3)))
```

## __m256i __lasx_mxvfrstii_h (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxvfrstii_h (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxvfrstii.h
Builtin: __builtin_lasx_mxvfrstii_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3576
```

### Description

Apply the Loongson vector string/mask helper encoded by `mxvfrstii.h` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvfrstii.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
for each search group g:
  idx = first_lane_matching_rule(a, b, imm, g);
  dst.group[g] = encode_first_match_index_or_zero(idx);
```

### Header Mapping

```c
#define __lasx_mxvfrstii_h(_1, _2, _3) ((__m256i)__builtin_lasx_mxvfrstii_h((v16i16)(_1), (v16i16)(_2), (_3)))
```

## __m256i __lasx_mxvfrstiv_b (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxvfrstiv_b (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxvfrstiv.b
Builtin: __builtin_lasx_mxvfrstiv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3586
```

### Description

Apply the Loongson vector string/mask helper encoded by `mxvfrstiv.b` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvfrstiv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
c = _3;
for each search group g:
  idx = first_lane_matching_rule(a, b, control vector, g);
  dst.group[g] = encode_first_match_index_or_zero(idx);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvfrstiv_b((v32i8)_1, (v32i8)_2, (v32i8)_3);
```

## __m256i __lasx_mxvfrstiv_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxvfrstiv_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxvfrstiv.h
Builtin: __builtin_lasx_mxvfrstiv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3579
```

### Description

Apply the Loongson vector string/mask helper encoded by `mxvfrstiv.h` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvfrstiv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for each search group g:
  idx = first_lane_matching_rule(a, b, control vector, g);
  dst.group[g] = encode_first_match_index_or_zero(idx);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvfrstiv_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
```

## __m256i __lasx_mxvfrstm_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvfrstm_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvfrstm.b
Builtin: __builtin_lasx_mxvfrstm_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3600
```

### Description

Apply the Loongson vector string/mask helper encoded by `mxvfrstm.b` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvfrstm.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for each search group g:
  idx = first_lane_matching_rule(a, b, mask, g);
  dst.group[g] = encode_first_match_index_or_zero(idx);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvfrstm_b((v32i8)_1);
```

## __m256i __lasx_mxvfrstm_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxvfrstm_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxvfrstm.h
Builtin: __builtin_lasx_mxvfrstm_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3593
```

### Description

Apply the Loongson vector string/mask helper encoded by `mxvfrstm.h` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvfrstm.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for each search group g:
  idx = first_lane_matching_rule(a, b, mask, g);
  dst.group[g] = encode_first_match_index_or_zero(idx);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvfrstm_h((v16i16)_1);
```

## __m256i __lasx_mxvmepatmsk_v (unsigned char _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxvmepatmsk_v (unsigned char _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxvmepatmsk.v
Builtin: __builtin_lasx_mxvmepatmsk_v
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3640
```

### Description

Apply the Loongson vector string/mask helper encoded by `mxvmepatmsk.v` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmepatmsk.v.
// Operand order follows the intrinsic arguments in the header.
imm = _1;
imm = _2;
pattern = build_repeated_byte_pattern(imm0, imm1);
for each byte lane i:
  dst.byte[i] = (pattern matches lane i) ? 0xff : 0x00;
```

### Header Mapping

```c
#define __lasx_mxvmepatmsk_v(_1, _2) ((__m256i)__builtin_lasx_mxvmepatmsk_v((_1), (_2)))
```

## __m256i __lasx_mxvseti_d (unsigned char _1, unsigned int _2)

### Synopsis

```c
__m256i __lasx_mxvseti_d (unsigned char _1, unsigned int _2)
#include <loongson-asxintrin.h>
Instruction: mxvseti.d
Builtin: __builtin_lasx_mxvseti_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4099
```

### Description

Apply the Loongson vector string/mask helper encoded by `mxvseti.d` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvseti.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = _1;
imm = _2;
dst = zero_vector();
dst.dword[index_from_imm0] = zero_extend(imm1, 64);
```

### Header Mapping

```c
#define __lasx_mxvseti_d(_1, _2) ((__m256i)__builtin_lasx_mxvseti_d((_1), (_2)))
```

