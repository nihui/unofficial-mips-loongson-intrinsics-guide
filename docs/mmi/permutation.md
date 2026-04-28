# Permutation

Generated from `include/loongson-mmiintrin.h`. This page contains 27 intrinsics.

## int8x8_t packsshb (int16x4_t s, int16x4_t t)

### Synopsis

```c
int8x8_t packsshb (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: packsshb
Builtin: __builtin_loongson_packsshb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:63
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for packsshb.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
sources = concatenate_lanes(a, b);
for each destination byte lane i:
  dst.byte[i] = signed_saturate(sources.half[i], bit_width(byte));
```

### Header Mapping

```c
return __builtin_loongson_packsshb (s, t);
```

## int16x4_t packsswh (int32x2_t s, int32x2_t t)

### Synopsis

```c
int16x4_t packsswh (int32x2_t s, int32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: packsswh
Builtin: __builtin_loongson_packsswh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:57
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for packsswh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
sources = concatenate_lanes(a, b);
for each destination half lane i:
  dst.half[i] = signed_saturate(sources.word[i], bit_width(half));
```

### Header Mapping

```c
return __builtin_loongson_packsswh (s, t);
```

## uint8x8_t packushb (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint8x8_t packushb (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: packushb
Builtin: __builtin_loongson_packushb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:70
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for packushb.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
sources = concatenate_lanes(a, b);
for each destination byte lane i:
  dst.byte[i] = unsigned_saturate(sources.half[i], bit_width(byte));
```

### Header Mapping

```c
return __builtin_loongson_packushb (s, t);
```

## int16x4_t pextrh_s (int16x4_t s, int field)

### Synopsis

```c
int16x4_t pextrh_s (int16x4_t s, int field)
#include <loongson-mmiintrin.h>
Instruction: pextrh.s
Builtin: __builtin_loongson_pextrh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:295
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pextrh.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
return extract_halfword_lane(a, field);
```

### Header Mapping

```c
return __builtin_loongson_pextrh_s (s, field);
```

## uint16x4_t pextrh_u (uint16x4_t s, int field)

### Synopsis

```c
uint16x4_t pextrh_u (uint16x4_t s, int field)
#include <loongson-mmiintrin.h>
Instruction: pextrh.u
Builtin: __builtin_loongson_pextrh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:289
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pextrh.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
return extract_halfword_lane(a, field);
```

### Header Mapping

```c
return __builtin_loongson_pextrh_u (s, field);
```

## int16x4_t pinsrh_0_s (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t pinsrh_0_s (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.0.s
Builtin: __builtin_loongson_pinsrh_0_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:326
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pinsrh.0.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
dst = a;
dst.half[0] = b.half[0];
```

### Header Mapping

```c
return __builtin_loongson_pinsrh_0_s (s, t);
```

## uint16x4_t pinsrh_0_u (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t pinsrh_0_u (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.0.u
Builtin: __builtin_loongson_pinsrh_0_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:302
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pinsrh.0.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
dst = a;
dst.half[0] = b.half[0];
```

### Header Mapping

```c
return __builtin_loongson_pinsrh_0_u (s, t);
```

## int16x4_t pinsrh_1_s (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t pinsrh_1_s (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.1.s
Builtin: __builtin_loongson_pinsrh_1_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:332
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pinsrh.1.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
dst = a;
dst.half[1] = b.half[0];
```

### Header Mapping

```c
return __builtin_loongson_pinsrh_1_s (s, t);
```

## uint16x4_t pinsrh_1_u (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t pinsrh_1_u (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.1.u
Builtin: __builtin_loongson_pinsrh_1_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:308
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pinsrh.1.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
dst = a;
dst.half[1] = b.half[0];
```

### Header Mapping

```c
return __builtin_loongson_pinsrh_1_u (s, t);
```

## int16x4_t pinsrh_2_s (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t pinsrh_2_s (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.2.s
Builtin: __builtin_loongson_pinsrh_2_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:338
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pinsrh.2.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
dst = a;
dst.half[2] = b.half[0];
```

### Header Mapping

```c
return __builtin_loongson_pinsrh_2_s (s, t);
```

## uint16x4_t pinsrh_2_u (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t pinsrh_2_u (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.2.u
Builtin: __builtin_loongson_pinsrh_2_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:314
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pinsrh.2.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
dst = a;
dst.half[2] = b.half[0];
```

### Header Mapping

```c
return __builtin_loongson_pinsrh_2_u (s, t);
```

## int16x4_t pinsrh_3_s (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t pinsrh_3_s (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.3.s
Builtin: __builtin_loongson_pinsrh_3_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:344
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pinsrh.3.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
dst = a;
dst.half[3] = b.half[0];
```

### Header Mapping

```c
return __builtin_loongson_pinsrh_3_s (s, t);
```

## uint16x4_t pinsrh_3_u (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t pinsrh_3_u (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.3.u
Builtin: __builtin_loongson_pinsrh_3_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:320
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pinsrh.3.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
dst = a;
dst.half[3] = b.half[0];
```

### Header Mapping

```c
return __builtin_loongson_pinsrh_3_u (s, t);
```

## int16x4_t pshufh_s (int16x4_t dest, int16x4_t s, uint8_t order)

### Synopsis

```c
int16x4_t pshufh_s (int16x4_t dest, int16x4_t s, uint8_t order)
#include <loongson-mmiintrin.h>
Instruction: pshufh.s
Builtin: __builtin_loongson_pshufh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:456
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pshufh.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = dest;
b = s;
for i in 0..3:
  dst.half[i] = a.half[shuffle_selector(order, i)];
```

### Header Mapping

```c
return __builtin_loongson_pshufh_s (s, order);
```

## uint16x4_t pshufh_u (uint16x4_t dest, uint16x4_t s, uint8_t order)

### Synopsis

```c
uint16x4_t pshufh_u (uint16x4_t dest, uint16x4_t s, uint8_t order)
#include <loongson-mmiintrin.h>
Instruction: pshufh.u
Builtin: __builtin_loongson_pshufh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:450
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pshufh.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = dest;
b = s;
for i in 0..3:
  dst.half[i] = a.half[shuffle_selector(order, i)];
```

### Header Mapping

```c
return __builtin_loongson_pshufh_u (s, order);
```

## int8x8_t punpckhbh_s (int8x8_t s, int8x8_t t)

### Synopsis

```c
int8x8_t punpckhbh_s (int8x8_t s, int8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: punpckhbh.s
Builtin: __builtin_loongson_punpckhbh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:644
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for punpckhbh.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for each selected upper source lane pair i:
  dst.half[2*i] = b.half[i];
  dst.half[2*i + 1] = a.half[i];
```

### Header Mapping

```c
return __builtin_loongson_punpckhbh_s (s, t);
```

## uint8x8_t punpckhbh_u (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint8x8_t punpckhbh_u (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: punpckhbh.u
Builtin: __builtin_loongson_punpckhbh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:626
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for punpckhbh.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for each selected upper source lane pair i:
  dst.half[2*i] = b.half[i];
  dst.half[2*i + 1] = a.half[i];
```

### Header Mapping

```c
return __builtin_loongson_punpckhbh_u (s, t);
```

## int16x4_t punpckhhw_s (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t punpckhhw_s (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: punpckhhw.s
Builtin: __builtin_loongson_punpckhhw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:638
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for punpckhhw.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for each selected upper source lane pair i:
  dst.word[2*i] = b.word[i];
  dst.word[2*i + 1] = a.word[i];
```

### Header Mapping

```c
return __builtin_loongson_punpckhhw_s (s, t);
```

## uint16x4_t punpckhhw_u (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t punpckhhw_u (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: punpckhhw.u
Builtin: __builtin_loongson_punpckhhw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:620
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for punpckhhw.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for each selected upper source lane pair i:
  dst.word[2*i] = b.word[i];
  dst.word[2*i + 1] = a.word[i];
```

### Header Mapping

```c
return __builtin_loongson_punpckhhw_u (s, t);
```

## int32x2_t punpckhwd_s (int32x2_t s, int32x2_t t)

### Synopsis

```c
int32x2_t punpckhwd_s (int32x2_t s, int32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: punpckhwd.s
Builtin: __builtin_loongson_punpckhwd_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:632
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for punpckhwd.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 64-bit elements.
a = s;
b = t;
for each selected upper source lane pair i:
  dst.dword[2*i] = b.dword[i];
  dst.dword[2*i + 1] = a.dword[i];
```

### Header Mapping

```c
return __builtin_loongson_punpckhwd_s (s, t);
```

## uint32x2_t punpckhwd_u (uint32x2_t s, uint32x2_t t)

### Synopsis

```c
uint32x2_t punpckhwd_u (uint32x2_t s, uint32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: punpckhwd.u
Builtin: __builtin_loongson_punpckhwd_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:614
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for punpckhwd.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 64-bit elements.
a = s;
b = t;
for each selected upper source lane pair i:
  dst.dword[2*i] = b.dword[i];
  dst.dword[2*i + 1] = a.dword[i];
```

### Header Mapping

```c
return __builtin_loongson_punpckhwd_u (s, t);
```

## int8x8_t punpcklbh_s (int8x8_t s, int8x8_t t)

### Synopsis

```c
int8x8_t punpcklbh_s (int8x8_t s, int8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: punpcklbh.s
Builtin: __builtin_loongson_punpcklbh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:681
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for punpcklbh.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for each selected lower source lane pair i:
  dst.half[2*i] = b.half[i];
  dst.half[2*i + 1] = a.half[i];
```

### Header Mapping

```c
return __builtin_loongson_punpcklbh_s (s, t);
```

## uint8x8_t punpcklbh_u (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint8x8_t punpcklbh_u (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: punpcklbh.u
Builtin: __builtin_loongson_punpcklbh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:663
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for punpcklbh.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for each selected lower source lane pair i:
  dst.half[2*i] = b.half[i];
  dst.half[2*i + 1] = a.half[i];
```

### Header Mapping

```c
return __builtin_loongson_punpcklbh_u (s, t);
```

## int16x4_t punpcklhw_s (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t punpcklhw_s (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: punpcklhw.s
Builtin: __builtin_loongson_punpcklhw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:675
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for punpcklhw.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for each selected lower source lane pair i:
  dst.word[2*i] = b.word[i];
  dst.word[2*i + 1] = a.word[i];
```

### Header Mapping

```c
return __builtin_loongson_punpcklhw_s (s, t);
```

## uint16x4_t punpcklhw_u (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t punpcklhw_u (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: punpcklhw.u
Builtin: __builtin_loongson_punpcklhw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:657
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for punpcklhw.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for each selected lower source lane pair i:
  dst.word[2*i] = b.word[i];
  dst.word[2*i + 1] = a.word[i];
```

### Header Mapping

```c
return __builtin_loongson_punpcklhw_u (s, t);
```

## int32x2_t punpcklwd_s (int32x2_t s, int32x2_t t)

### Synopsis

```c
int32x2_t punpcklwd_s (int32x2_t s, int32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: punpcklwd.s
Builtin: __builtin_loongson_punpcklwd_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:669
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for punpcklwd.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 64-bit elements.
a = s;
b = t;
for each selected lower source lane pair i:
  dst.dword[2*i] = b.dword[i];
  dst.dword[2*i + 1] = a.dword[i];
```

### Header Mapping

```c
return __builtin_loongson_punpcklwd_s (s, t);
```

## uint32x2_t punpcklwd_u (uint32x2_t s, uint32x2_t t)

### Synopsis

```c
uint32x2_t punpcklwd_u (uint32x2_t s, uint32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: punpcklwd.u
Builtin: __builtin_loongson_punpcklwd_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:651
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for punpcklwd.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 64-bit elements.
a = s;
b = t;
for each selected lower source lane pair i:
  dst.dword[2*i] = b.dword[i];
  dst.dword[2*i + 1] = a.dword[i];
```

### Header Mapping

```c
return __builtin_loongson_punpcklwd_u (s, t);
```

