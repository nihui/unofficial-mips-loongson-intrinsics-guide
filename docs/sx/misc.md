# Miscellaneous

Generated from `include/loongson-sxintrin.h`. This page contains 19 intrinsics.

## __m128i __lsx_vclrstri_v (__m128i _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vclrstri_v (__m128i _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vclrstri.v
Builtin: __builtin_lsx_vclrstri_v
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:867
```

### Description

Apply the Loongson vector string/mask helper encoded by `vclrstri.v` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vclrstri.v.
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
#define __lsx_vclrstri_v(_1, _2) ((__m128i)__builtin_lsx_vclrstri_v((v16i8)(_1), (_2)))
```

## __m128i __lsx_vclrstrr_v (__m128i _1,long int _2)

### Synopsis

```c
__m128i __lsx_vclrstrr_v (__m128i _1,long int _2)
#include <loongson-sxintrin.h>
Instruction: vclrstrr.v
Builtin: __builtin_lsx_vclrstrr_v
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:875
```

### Description

Apply the Loongson vector string/mask helper encoded by `vclrstrr.v` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vclrstrr.v.
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
return (__m128i)__builtin_lsx_vclrstrr_v((v16i8)_1, _2);
```

## __m128i __lsx_vclrstrv_v (__m128i _1, __m128i _2)

### Synopsis

```c
__m128i __lsx_vclrstrv_v (__m128i _1, __m128i _2)
#include <loongson-sxintrin.h>
Instruction: vclrstrv.v
Builtin: __builtin_lsx_vclrstrv_v
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:869
```

### Description

Apply the Loongson vector string/mask helper encoded by `vclrstrv.v` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vclrstrv.v.
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
return (__m128i)__builtin_lsx_vclrstrv_v((v16i8)_1, (v16i8)_2);
```

## __m128i __lsx_vclrtail_b (__m128i _1)

### Synopsis

```c
__m128i __lsx_vclrtail_b (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vclrtail.b
Builtin: __builtin_lsx_vclrtail_b
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:888
```

### Description

Apply the Loongson vector string/mask helper encoded by `vclrtail.b` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vclrtail.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
dst = a;
for i in first_tail_lane..15:
  dst.byte[i] = 0;
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vclrtail_b((v16i8)_1);
```

## __m128i __lsx_vclrtail_h (__m128i _1)

### Synopsis

```c
__m128i __lsx_vclrtail_h (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vclrtail.h
Builtin: __builtin_lsx_vclrtail_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:881
```

### Description

Apply the Loongson vector string/mask helper encoded by `vclrtail.h` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vclrtail.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
dst = a;
for i in first_tail_lane..7:
  dst.half[i] = 0;
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vclrtail_h((v8i16)_1);
```

## __m128i __lsx_vextb_s_d (__m128i _1)

### Synopsis

```c
__m128i __lsx_vextb_s_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vextb.s.d
Builtin: __builtin_lsx_vextb_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:455
```

### Description

Sign-extend or zero-extend smaller integer elements into 2 x 64-bit dword lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vextb.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.dword[i] = sign_extend(a.byte[i], 64);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vextb_s_d((v16i8)_1);
```

## __m128i __lsx_vextb_s_h (__m128i _1)

### Synopsis

```c
__m128i __lsx_vextb_s_h (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vextb.s.h
Builtin: __builtin_lsx_vextb_s_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:469
```

### Description

Sign-extend or zero-extend smaller integer elements into 8 x 16-bit half lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vextb.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
for i in 0..7:
  dst.half[i] = sign_extend(a.byte[i], 16);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vextb_s_h((v16i8)_1);
```

## __m128i __lsx_vextb_s_w (__m128i _1)

### Synopsis

```c
__m128i __lsx_vextb_s_w (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vextb.s.w
Builtin: __builtin_lsx_vextb_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:462
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x 32-bit word lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vextb.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.word[i] = sign_extend(a.byte[i], 32);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vextb_s_w((v16i8)_1);
```

## __m128i __lsx_vextb_u_d (__m128i _1)

### Synopsis

```c
__m128i __lsx_vextb_u_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vextb.u.d
Builtin: __builtin_lsx_vextb_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:497
```

### Description

Sign-extend or zero-extend smaller integer elements into 2 x 64-bit dword lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vextb.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.dword[i] = zero_extend(a.byte[i], 64);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vextb_u_d((v16i8)_1);
```

## __m128i __lsx_vextb_u_h (__m128i _1)

### Synopsis

```c
__m128i __lsx_vextb_u_h (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vextb.u.h
Builtin: __builtin_lsx_vextb_u_h
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:511
```

### Description

Sign-extend or zero-extend smaller integer elements into 8 x 16-bit half lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vextb.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
for i in 0..7:
  dst.half[i] = zero_extend(a.byte[i], 16);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vextb_u_h((v16i8)_1);
```

## __m128i __lsx_vextb_u_w (__m128i _1)

### Synopsis

```c
__m128i __lsx_vextb_u_w (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vextb.u.w
Builtin: __builtin_lsx_vextb_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:504
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x 32-bit word lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vextb.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.word[i] = zero_extend(a.byte[i], 32);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vextb_u_w((v16i8)_1);
```

## __m128i __lsx_vexth_s_d (__m128i _1)

### Synopsis

```c
__m128i __lsx_vexth_s_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vexth.s.d
Builtin: __builtin_lsx_vexth_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:476
```

### Description

Sign-extend or zero-extend smaller integer elements into 2 x 64-bit dword lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vexth.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.dword[i] = sign_extend(a.half[i], 64);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vexth_s_d((v8i16)_1);
```

## __m128i __lsx_vexth_s_w (__m128i _1)

### Synopsis

```c
__m128i __lsx_vexth_s_w (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vexth.s.w
Builtin: __builtin_lsx_vexth_s_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:483
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x 32-bit word lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vexth.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.word[i] = sign_extend(a.half[i], 32);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vexth_s_w((v8i16)_1);
```

## __m128i __lsx_vexth_u_d (__m128i _1)

### Synopsis

```c
__m128i __lsx_vexth_u_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vexth.u.d
Builtin: __builtin_lsx_vexth_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:518
```

### Description

Sign-extend or zero-extend smaller integer elements into 2 x 64-bit dword lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vexth.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.dword[i] = zero_extend(a.half[i], 64);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vexth_u_d((v8i16)_1);
```

## __m128i __lsx_vexth_u_w (__m128i _1)

### Synopsis

```c
__m128i __lsx_vexth_u_w (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vexth.u.w
Builtin: __builtin_lsx_vexth_u_w
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:525
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x 32-bit word lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vexth.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  dst.word[i] = zero_extend(a.half[i], 32);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vexth_u_w((v8i16)_1);
```

## __m128i __lsx_vextw_s_d (__m128i _1)

### Synopsis

```c
__m128i __lsx_vextw_s_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vextw.s.d
Builtin: __builtin_lsx_vextw_s_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:490
```

### Description

Sign-extend or zero-extend smaller integer elements into 2 x 64-bit dword lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vextw.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.dword[i] = sign_extend(a.word[i], 64);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vextw_s_d((v4i32)_1);
```

## __m128i __lsx_vextw_u_d (__m128i _1)

### Synopsis

```c
__m128i __lsx_vextw_u_d (__m128i _1)
#include <loongson-sxintrin.h>
Instruction: vextw.u.d
Builtin: __builtin_lsx_vextw_u_d
CPU Flags: __mips_loongson_sx
Kind: function
Source: include/loongson-sxintrin.h:532
```

### Description

Sign-extend or zero-extend smaller integer elements into 2 x 64-bit dword lanes destination lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vextw.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
for i in 0..1:
  dst.dword[i] = zero_extend(a.word[i], 64);
```

### Header Mapping

```c
return (__m128i)__builtin_lsx_vextw_u_d((v4i32)_1);
```

## __m128i __lsx_vmepatmsk_v (unsigned char _1, unsigned char _2)

### Synopsis

```c
__m128i __lsx_vmepatmsk_v (unsigned char _1, unsigned char _2)
#include <loongson-sxintrin.h>
Instruction: vmepatmsk.v
Builtin: __builtin_lsx_vmepatmsk_v
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:901
```

### Description

Apply the Loongson vector string/mask helper encoded by `vmepatmsk.v` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmepatmsk.v.
// Operand order follows the intrinsic arguments in the header.
imm = _1;
imm = _2;
pattern = build_repeated_byte_pattern(imm0, imm1);
for each byte lane i:
  dst.byte[i] = (pattern matches lane i) ? 0xff : 0x00;
```

### Header Mapping

```c
#define __lsx_vmepatmsk_v(_1, _2) ((__m128i)__builtin_lsx_vmepatmsk_v((_1), (_2)))
```

## __m128i __lsx_vseti_d (unsigned char _1, unsigned int _2)

### Synopsis

```c
__m128i __lsx_vseti_d (unsigned char _1, unsigned int _2)
#include <loongson-sxintrin.h>
Instruction: vseti.d
Builtin: __builtin_lsx_vseti_d
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1360
```

### Description

Apply the Loongson vector string/mask helper encoded by `vseti.d` to the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vseti.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = _1;
imm = _2;
dst = zero_vector();
dst.dword[index_from_imm0] = zero_extend(imm1, 64);
```

### Header Mapping

```c
#define __lsx_vseti_d(_1, _2) ((__m128i)__builtin_lsx_vseti_d((_1), (_2)))
```

