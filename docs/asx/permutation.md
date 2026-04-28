# Permutation

Generated from `include/loongson-asxintrin.h`. This page contains 390 intrinsics.

## __m256i __lasx_mxfill_b (int _1)

### Synopsis

```c
__m256i __lasx_mxfill_b (int _1)
#include <loongson-asxintrin.h>
Instruction: mxfill.b
Builtin: __builtin_lasx_mxfill_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1871
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxfill.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = _1;
for i in 0..31:
  dst.byte[i] = truncate_or_extend(_1, 8);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxfill_b (_1);
```

## __m256i __lasx_mxfill_d (long int _1)

### Synopsis

```c
__m256i __lasx_mxfill_d (long int _1)
#include <loongson-asxintrin.h>
Instruction: mxfill.d
Builtin: __builtin_lasx_mxfill_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1892
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxfill.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = _1;
for i in 0..3:
  dst.dword[i] = truncate_or_extend(_1, 64);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxfill_d (_1);
```

## __m256i __lasx_mxfill_h (int _1)

### Synopsis

```c
__m256i __lasx_mxfill_h (int _1)
#include <loongson-asxintrin.h>
Instruction: mxfill.h
Builtin: __builtin_lasx_mxfill_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1878
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxfill.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = _1;
for i in 0..15:
  dst.half[i] = truncate_or_extend(_1, 16);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxfill_h (_1);
```

## __m256i __lasx_mxfill_w (int _1)

### Synopsis

```c
__m256i __lasx_mxfill_w (int _1)
#include <loongson-asxintrin.h>
Instruction: mxfill.w
Builtin: __builtin_lasx_mxfill_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1885
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxfill.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = _1;
for i in 0..7:
  dst.word[i] = truncate_or_extend(_1, 32);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxfill_w (_1);
```

## __m256i __lasx_mxilvev_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvev_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvev.b
Builtin: __builtin_lasx_mxilvev_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1728
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvev.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(even byte lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvev_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxilvev_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvev_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvev.d
Builtin: __builtin_lasx_mxilvev_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1749
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvev.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(even dword lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvev_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxilvev_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvev_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvev.h
Builtin: __builtin_lasx_mxilvev_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1735
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvev.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(even half lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvev_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxilvev_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvev_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvev.w
Builtin: __builtin_lasx_mxilvev_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1742
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvev.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(even word lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvev_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxilvl_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvl_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvl.b
Builtin: __builtin_lasx_mxilvl_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1672
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvl.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
dst = interleave_lower_byte_lanes(a, b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvl_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxilvl_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvl_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvl.d
Builtin: __builtin_lasx_mxilvl_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1693
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
dst = interleave_lower_dword_lanes(a, b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvl_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxilvl_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvl_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvl.h
Builtin: __builtin_lasx_mxilvl_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1679
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvl.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
dst = interleave_lower_half_lanes(a, b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvl_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxilvl_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvl_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvl.w
Builtin: __builtin_lasx_mxilvl_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1686
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvl.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
dst = interleave_lower_word_lanes(a, b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvl_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxilvod_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvod_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvod.b
Builtin: __builtin_lasx_mxilvod_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1756
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvod.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(odd byte lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvod_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxilvod_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvod_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvod.d
Builtin: __builtin_lasx_mxilvod_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1777
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvod.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(odd dword lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvod_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxilvod_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvod_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvod.h
Builtin: __builtin_lasx_mxilvod_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1763
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvod.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(odd half lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvod_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxilvod_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvod_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvod.w
Builtin: __builtin_lasx_mxilvod_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1770
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvod.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(odd word lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvod_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxilvr_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvr_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvr.b
Builtin: __builtin_lasx_mxilvr_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1700
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvr.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
dst = interleave_upper_byte_lanes(a, b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvr_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxilvr_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvr_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvr.d
Builtin: __builtin_lasx_mxilvr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1721
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
dst = interleave_upper_dword_lanes(a, b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvr_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxilvr_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvr_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvr.h
Builtin: __builtin_lasx_mxilvr_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1707
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvr.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
dst = interleave_upper_half_lanes(a, b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvr_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxilvr_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxilvr_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxilvr.w
Builtin: __builtin_lasx_mxilvr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1714
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxilvr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
dst = interleave_upper_word_lanes(a, b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxilvr_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxinsve_b (__m256i _1, unsigned char _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxinsve_b (__m256i _1, unsigned char _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxinsve.b
Builtin: __builtin_lasx_mxinsve_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1981
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxinsve.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _3;
imm = _2;
dst = a;
dst.byte[destination_index_from_imm] = b.byte[source_index_from_imm];
```

### Header Mapping

```c
#define __lasx_mxinsve_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxinsve_b((v32i8)(_1), (_2), (v32i8)(_3)))
```

## __m256i __lasx_mxinsve_d (__m256i _1, unsigned char _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxinsve_d (__m256i _1, unsigned char _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxinsve.d
Builtin: __builtin_lasx_mxinsve_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1984
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxinsve.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _3;
imm = _2;
dst = a;
dst.dword[destination_index_from_imm] = b.dword[source_index_from_imm];
```

### Header Mapping

```c
#define __lasx_mxinsve_d(_1, _2, _3) ((__m256i)__builtin_lasx_mxinsve_d((v4i64)(_1), (_2), (v4i64)(_3)))
```

## __m256i __lasx_mxinsve_h (__m256i _1, unsigned char _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxinsve_h (__m256i _1, unsigned char _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxinsve.h
Builtin: __builtin_lasx_mxinsve_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1982
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxinsve.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _3;
imm = _2;
dst = a;
dst.half[destination_index_from_imm] = b.half[source_index_from_imm];
```

### Header Mapping

```c
#define __lasx_mxinsve_h(_1, _2, _3) ((__m256i)__builtin_lasx_mxinsve_h((v16i16)(_1), (_2), (v16i16)(_3)))
```

## __m256i __lasx_mxinsve_w (__m256i _1, unsigned char _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxinsve_w (__m256i _1, unsigned char _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxinsve.w
Builtin: __builtin_lasx_mxinsve_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1983
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxinsve.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _3;
imm = _2;
dst = a;
dst.word[destination_index_from_imm] = b.word[source_index_from_imm];
```

### Header Mapping

```c
#define __lasx_mxinsve_w(_1, _2, _3) ((__m256i)__builtin_lasx_mxinsve_w((v8i32)(_1), (_2), (v8i32)(_3)))
```

## __m256i __lasx_mxldi_b (short int _1)

### Synopsis

```c
__m256i __lasx_mxldi_b (short int _1)
#include <loongson-asxintrin.h>
Instruction: mxldi.b
Builtin: __builtin_lasx_mxldi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1985
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxldi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = _1;
value = sign_extend_or_zero_extend(imm, element_size_from_mnemonic);
for i in 0..31:
  dst.byte[i] = value;
```

### Header Mapping

```c
#define __lasx_mxldi_b(_1) ((__m256i)__builtin_lasx_mxldi_b((_1)))
```

## __m256i __lasx_mxldi_d (short int _1)

### Synopsis

```c
__m256i __lasx_mxldi_d (short int _1)
#include <loongson-asxintrin.h>
Instruction: mxldi.d
Builtin: __builtin_lasx_mxldi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1988
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxldi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = _1;
value = sign_extend_or_zero_extend(imm, element_size_from_mnemonic);
for i in 0..3:
  dst.dword[i] = value;
```

### Header Mapping

```c
#define __lasx_mxldi_d(_1) ((__m256i)__builtin_lasx_mxldi_d((_1)))
```

## __m256i __lasx_mxldi_h (short int _1)

### Synopsis

```c
__m256i __lasx_mxldi_h (short int _1)
#include <loongson-asxintrin.h>
Instruction: mxldi.h
Builtin: __builtin_lasx_mxldi_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1986
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxldi.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = _1;
value = sign_extend_or_zero_extend(imm, element_size_from_mnemonic);
for i in 0..15:
  dst.half[i] = value;
```

### Header Mapping

```c
#define __lasx_mxldi_h(_1) ((__m256i)__builtin_lasx_mxldi_h((_1)))
```

## __m256i __lasx_mxldi_w (short int _1)

### Synopsis

```c
__m256i __lasx_mxldi_w (short int _1)
#include <loongson-asxintrin.h>
Instruction: mxldi.w
Builtin: __builtin_lasx_mxldi_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1987
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxldi.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = _1;
value = sign_extend_or_zero_extend(imm, element_size_from_mnemonic);
for i in 0..7:
  dst.word[i] = value;
```

### Header Mapping

```c
#define __lasx_mxldi_w(_1) ((__m256i)__builtin_lasx_mxldi_w((_1)))
```

## __m256i __lasx_mxmove_v (__m256i _1)

### Synopsis

```c
__m256i __lasx_mxmove_v (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: mxmove.v
Builtin: __builtin_lasx_mxmove_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2788
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxmove.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
dst = a;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxmove_v((v32i8)_1);
```

## __m256i __lasx_mxn2x_rnd_sx_nc_b (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_nc_b (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.nc.b
Builtin: __builtin_lasx_mxn2x_rnd_sx_nc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4614
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.sx.nc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = m;
for i in 0..31:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.byte[i] = truncate(shifted, 8);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_nc_b(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_sx_nc_b ((v32i8) a, m);
```

## __m256i __lasx_mxn2x_rnd_sx_nc_d (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_nc_d (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.nc.d
Builtin: __builtin_lasx_mxn2x_rnd_sx_nc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4623
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.sx.nc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = m;
for i in 0..3:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.dword[i] = truncate(shifted, 64);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_nc_d(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_sx_nc_d ((v4i64) a, m);
```

## __m256i __lasx_mxn2x_rnd_sx_nc_h (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_nc_h (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.nc.h
Builtin: __builtin_lasx_mxn2x_rnd_sx_nc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4617
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.sx.nc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = m;
for i in 0..15:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.half[i] = truncate(shifted, 16);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_nc_h(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_sx_nc_h ((v16i16) a, m);
```

## __m256i __lasx_mxn2x_rnd_sx_nc_w (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_nc_w (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.nc.w
Builtin: __builtin_lasx_mxn2x_rnd_sx_nc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4620
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.sx.nc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = m;
for i in 0..7:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.word[i] = truncate(shifted, 32);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_nc_w(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_sx_nc_w ((v8i32) a, m);
```

## __m256i __lasx_mxn2x_rnd_sx_sc_b (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_sc_b (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.sc.b
Builtin: __builtin_lasx_mxn2x_rnd_sx_sc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4590
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.sx.sc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = m;
for i in 0..31:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.byte[i] = signed_saturate(shifted, 8);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_sc_b(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_sx_sc_b ((v32i8) a, m);
```

## __m256i __lasx_mxn2x_rnd_sx_sc_d (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_sc_d (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.sc.d
Builtin: __builtin_lasx_mxn2x_rnd_sx_sc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4599
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.sx.sc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = m;
for i in 0..3:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.dword[i] = signed_saturate(shifted, 64);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_sc_d(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_sx_sc_d ((v4i64) a, m);
```

## __m256i __lasx_mxn2x_rnd_sx_sc_h (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_sc_h (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.sc.h
Builtin: __builtin_lasx_mxn2x_rnd_sx_sc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4593
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.sx.sc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = m;
for i in 0..15:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.half[i] = signed_saturate(shifted, 16);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_sc_h(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_sx_sc_h ((v16i16) a, m);
```

## __m256i __lasx_mxn2x_rnd_sx_sc_w (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_sc_w (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.sc.w
Builtin: __builtin_lasx_mxn2x_rnd_sx_sc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4596
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.sx.sc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = m;
for i in 0..7:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.word[i] = signed_saturate(shifted, 32);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_sc_w(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_sx_sc_w ((v8i32) a, m);
```

## __m256i __lasx_mxn2x_rnd_sx_uc_b (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_uc_b (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.uc.b
Builtin: __builtin_lasx_mxn2x_rnd_sx_uc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4602
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.sx.uc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = m;
for i in 0..31:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.byte[i] = unsigned_saturate(shifted, 8);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_uc_b(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_sx_uc_b ((v32i8) a, m);
```

## __m256i __lasx_mxn2x_rnd_sx_uc_d (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_uc_d (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.uc.d
Builtin: __builtin_lasx_mxn2x_rnd_sx_uc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4611
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.sx.uc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = m;
for i in 0..3:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.dword[i] = unsigned_saturate(shifted, 64);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_uc_d(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_sx_uc_d ((v4i64) a, m);
```

## __m256i __lasx_mxn2x_rnd_sx_uc_h (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_uc_h (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.uc.h
Builtin: __builtin_lasx_mxn2x_rnd_sx_uc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4605
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.sx.uc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = m;
for i in 0..15:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.half[i] = unsigned_saturate(shifted, 16);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_uc_h(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_sx_uc_h ((v16i16) a, m);
```

## __m256i __lasx_mxn2x_rnd_sx_uc_w (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_sx_uc_w (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.sx.uc.w
Builtin: __builtin_lasx_mxn2x_rnd_sx_uc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4608
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.sx.uc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = m;
for i in 0..7:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.word[i] = unsigned_saturate(shifted, 32);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_sx_uc_w(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_sx_uc_w ((v8i32) a, m);
```

## __m256i __lasx_mxn2x_rnd_ux_nc_b (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_nc_b (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.nc.b
Builtin: __builtin_lasx_mxn2x_rnd_ux_nc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4650
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.ux.nc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = m;
for i in 0..31:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.byte[i] = truncate(shifted, 8);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_nc_b(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_ux_nc_b ((v32i8) a, m);
```

## __m256i __lasx_mxn2x_rnd_ux_nc_d (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_nc_d (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.nc.d
Builtin: __builtin_lasx_mxn2x_rnd_ux_nc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4659
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.ux.nc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = m;
for i in 0..3:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.dword[i] = truncate(shifted, 64);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_nc_d(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_ux_nc_d ((v4i64) a, m);
```

## __m256i __lasx_mxn2x_rnd_ux_nc_h (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_nc_h (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.nc.h
Builtin: __builtin_lasx_mxn2x_rnd_ux_nc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4653
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.ux.nc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = m;
for i in 0..15:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.half[i] = truncate(shifted, 16);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_nc_h(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_ux_nc_h ((v16i16) a, m);
```

## __m256i __lasx_mxn2x_rnd_ux_nc_w (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_nc_w (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.nc.w
Builtin: __builtin_lasx_mxn2x_rnd_ux_nc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4656
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.ux.nc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = m;
for i in 0..7:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.word[i] = truncate(shifted, 32);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_nc_w(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_ux_nc_w ((v8i32) a, m);
```

## __m256i __lasx_mxn2x_rnd_ux_sc_b (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_sc_b (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.sc.b
Builtin: __builtin_lasx_mxn2x_rnd_ux_sc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4626
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.ux.sc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = m;
for i in 0..31:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.byte[i] = signed_saturate(shifted, 8);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_sc_b(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_ux_sc_b ((v32i8) a, m);
```

## __m256i __lasx_mxn2x_rnd_ux_sc_d (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_sc_d (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.sc.d
Builtin: __builtin_lasx_mxn2x_rnd_ux_sc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4635
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.ux.sc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = m;
for i in 0..3:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.dword[i] = signed_saturate(shifted, 64);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_sc_d(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_ux_sc_d ((v4i64) a, m);
```

## __m256i __lasx_mxn2x_rnd_ux_sc_h (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_sc_h (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.sc.h
Builtin: __builtin_lasx_mxn2x_rnd_ux_sc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4629
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.ux.sc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = m;
for i in 0..15:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.half[i] = signed_saturate(shifted, 16);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_sc_h(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_ux_sc_h ((v16i16) a, m);
```

## __m256i __lasx_mxn2x_rnd_ux_sc_w (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_sc_w (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.sc.w
Builtin: __builtin_lasx_mxn2x_rnd_ux_sc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4632
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.ux.sc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = m;
for i in 0..7:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.word[i] = signed_saturate(shifted, 32);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_sc_w(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_ux_sc_w ((v8i32) a, m);
```

## __m256i __lasx_mxn2x_rnd_ux_uc_b (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_uc_b (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.uc.b
Builtin: __builtin_lasx_mxn2x_rnd_ux_uc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4638
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.ux.uc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = m;
for i in 0..31:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.byte[i] = unsigned_saturate(shifted, 8);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_uc_b(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_ux_uc_b ((v32i8) a, m);
```

## __m256i __lasx_mxn2x_rnd_ux_uc_d (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_uc_d (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.uc.d
Builtin: __builtin_lasx_mxn2x_rnd_ux_uc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4647
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.ux.uc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = m;
for i in 0..3:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.dword[i] = unsigned_saturate(shifted, 64);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_uc_d(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_ux_uc_d ((v4i64) a, m);
```

## __m256i __lasx_mxn2x_rnd_ux_uc_h (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_uc_h (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.uc.h
Builtin: __builtin_lasx_mxn2x_rnd_ux_uc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4641
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.ux.uc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = m;
for i in 0..15:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.half[i] = unsigned_saturate(shifted, 16);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_uc_h(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_ux_uc_h ((v16i16) a, m);
```

## __m256i __lasx_mxn2x_rnd_ux_uc_w (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_rnd_ux_uc_w (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.rnd.ux.uc.w
Builtin: __builtin_lasx_mxn2x_rnd_ux_uc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4644
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.rnd.ux.uc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = m;
for i in 0..7:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.word[i] = unsigned_saturate(shifted, 32);
```

### Header Mapping

```c
#define __lasx_mxn2x_rnd_ux_uc_w(a, m) (__m256i) __builtin_lasx_mxn2x_rnd_ux_uc_w ((v8i32) a, m);
```

## __m256i __lasx_mxn2x_sx_nc_b (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_nc_b (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.nc.b
Builtin: __builtin_lasx_mxn2x_sx_nc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4542
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.sx.nc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = m;
for i in 0..31:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.byte[i] = truncate(shifted, 8);
```

### Header Mapping

```c
#define __lasx_mxn2x_sx_nc_b(a, m) (__m256i) __builtin_lasx_mxn2x_sx_nc_b ((v32i8) a, m);
```

## __m256i __lasx_mxn2x_sx_nc_d (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_nc_d (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.nc.d
Builtin: __builtin_lasx_mxn2x_sx_nc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4551
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.sx.nc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = m;
for i in 0..3:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.dword[i] = truncate(shifted, 64);
```

### Header Mapping

```c
#define __lasx_mxn2x_sx_nc_d(a, m) (__m256i) __builtin_lasx_mxn2x_sx_nc_d ((v4i64) a, m);
```

## __m256i __lasx_mxn2x_sx_nc_h (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_nc_h (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.nc.h
Builtin: __builtin_lasx_mxn2x_sx_nc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4545
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.sx.nc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = m;
for i in 0..15:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.half[i] = truncate(shifted, 16);
```

### Header Mapping

```c
#define __lasx_mxn2x_sx_nc_h(a, m) (__m256i) __builtin_lasx_mxn2x_sx_nc_h ((v16i16) a, m);
```

## __m256i __lasx_mxn2x_sx_nc_w (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_nc_w (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.nc.w
Builtin: __builtin_lasx_mxn2x_sx_nc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4548
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.sx.nc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = m;
for i in 0..7:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.word[i] = truncate(shifted, 32);
```

### Header Mapping

```c
#define __lasx_mxn2x_sx_nc_w(a, m) (__m256i) __builtin_lasx_mxn2x_sx_nc_w ((v8i32) a, m);
```

## __m256i __lasx_mxn2x_sx_sc_b (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_sc_b (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.sc.b
Builtin: __builtin_lasx_mxn2x_sx_sc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4518
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.sx.sc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = m;
for i in 0..31:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.byte[i] = signed_saturate(shifted, 8);
```

### Header Mapping

```c
#define __lasx_mxn2x_sx_sc_b(a, m) (__m256i) __builtin_lasx_mxn2x_sx_sc_b ((v32i8) a, m);
```

## __m256i __lasx_mxn2x_sx_sc_d (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_sc_d (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.sc.d
Builtin: __builtin_lasx_mxn2x_sx_sc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4527
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.sx.sc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = m;
for i in 0..3:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.dword[i] = signed_saturate(shifted, 64);
```

### Header Mapping

```c
#define __lasx_mxn2x_sx_sc_d(a, m) (__m256i) __builtin_lasx_mxn2x_sx_sc_d ((v4i64) a, m);
```

## __m256i __lasx_mxn2x_sx_sc_h (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_sc_h (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.sc.h
Builtin: __builtin_lasx_mxn2x_sx_sc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4521
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.sx.sc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = m;
for i in 0..15:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.half[i] = signed_saturate(shifted, 16);
```

### Header Mapping

```c
#define __lasx_mxn2x_sx_sc_h(a, m) (__m256i) __builtin_lasx_mxn2x_sx_sc_h ((v16i16) a, m);
```

## __m256i __lasx_mxn2x_sx_sc_w (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_sc_w (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.sc.w
Builtin: __builtin_lasx_mxn2x_sx_sc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4524
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.sx.sc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = m;
for i in 0..7:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.word[i] = signed_saturate(shifted, 32);
```

### Header Mapping

```c
#define __lasx_mxn2x_sx_sc_w(a, m) (__m256i) __builtin_lasx_mxn2x_sx_sc_w ((v8i32) a, m);
```

## __m256i __lasx_mxn2x_sx_uc_b (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_uc_b (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.uc.b
Builtin: __builtin_lasx_mxn2x_sx_uc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4530
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.sx.uc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = m;
for i in 0..31:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.byte[i] = unsigned_saturate(shifted, 8);
```

### Header Mapping

```c
#define __lasx_mxn2x_sx_uc_b(a, m) (__m256i) __builtin_lasx_mxn2x_sx_uc_b ((v32i8) a, m);
```

## __m256i __lasx_mxn2x_sx_uc_d (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_uc_d (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.uc.d
Builtin: __builtin_lasx_mxn2x_sx_uc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4539
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.sx.uc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = m;
for i in 0..3:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.dword[i] = unsigned_saturate(shifted, 64);
```

### Header Mapping

```c
#define __lasx_mxn2x_sx_uc_d(a, m) (__m256i) __builtin_lasx_mxn2x_sx_uc_d ((v4i64) a, m);
```

## __m256i __lasx_mxn2x_sx_uc_h (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_uc_h (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.uc.h
Builtin: __builtin_lasx_mxn2x_sx_uc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4533
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.sx.uc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = m;
for i in 0..15:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.half[i] = unsigned_saturate(shifted, 16);
```

### Header Mapping

```c
#define __lasx_mxn2x_sx_uc_h(a, m) (__m256i) __builtin_lasx_mxn2x_sx_uc_h ((v16i16) a, m);
```

## __m256i __lasx_mxn2x_sx_uc_w (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_sx_uc_w (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.sx.uc.w
Builtin: __builtin_lasx_mxn2x_sx_uc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4536
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.sx.uc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = m;
for i in 0..7:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.word[i] = unsigned_saturate(shifted, 32);
```

### Header Mapping

```c
#define __lasx_mxn2x_sx_uc_w(a, m) (__m256i) __builtin_lasx_mxn2x_sx_uc_w ((v8i32) a, m);
```

## __m256i __lasx_mxn2x_ux_nc_b (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_nc_b (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.nc.b
Builtin: __builtin_lasx_mxn2x_ux_nc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4578
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.ux.nc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = m;
for i in 0..31:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.byte[i] = truncate(shifted, 8);
```

### Header Mapping

```c
#define __lasx_mxn2x_ux_nc_b(a, m) (__m256i) __builtin_lasx_mxn2x_ux_nc_b ((v32i8) a, m);
```

## __m256i __lasx_mxn2x_ux_nc_d (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_nc_d (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.nc.d
Builtin: __builtin_lasx_mxn2x_ux_nc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4587
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.ux.nc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = m;
for i in 0..3:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.dword[i] = truncate(shifted, 64);
```

### Header Mapping

```c
#define __lasx_mxn2x_ux_nc_d(a, m) (__m256i) __builtin_lasx_mxn2x_ux_nc_d ((v4i64) a, m);
```

## __m256i __lasx_mxn2x_ux_nc_h (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_nc_h (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.nc.h
Builtin: __builtin_lasx_mxn2x_ux_nc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4581
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.ux.nc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = m;
for i in 0..15:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.half[i] = truncate(shifted, 16);
```

### Header Mapping

```c
#define __lasx_mxn2x_ux_nc_h(a, m) (__m256i) __builtin_lasx_mxn2x_ux_nc_h ((v16i16) a, m);
```

## __m256i __lasx_mxn2x_ux_nc_w (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_nc_w (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.nc.w
Builtin: __builtin_lasx_mxn2x_ux_nc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4584
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.ux.nc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = m;
for i in 0..7:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.word[i] = truncate(shifted, 32);
```

### Header Mapping

```c
#define __lasx_mxn2x_ux_nc_w(a, m) (__m256i) __builtin_lasx_mxn2x_ux_nc_w ((v8i32) a, m);
```

## __m256i __lasx_mxn2x_ux_sc_b (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_sc_b (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.sc.b
Builtin: __builtin_lasx_mxn2x_ux_sc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4554
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.ux.sc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = m;
for i in 0..31:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.byte[i] = signed_saturate(shifted, 8);
```

### Header Mapping

```c
#define __lasx_mxn2x_ux_sc_b(a, m) (__m256i) __builtin_lasx_mxn2x_ux_sc_b ((v32i8) a, m);
```

## __m256i __lasx_mxn2x_ux_sc_d (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_sc_d (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.sc.d
Builtin: __builtin_lasx_mxn2x_ux_sc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4563
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.ux.sc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = m;
for i in 0..3:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.dword[i] = signed_saturate(shifted, 64);
```

### Header Mapping

```c
#define __lasx_mxn2x_ux_sc_d(a, m) (__m256i) __builtin_lasx_mxn2x_ux_sc_d ((v4i64) a, m);
```

## __m256i __lasx_mxn2x_ux_sc_h (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_sc_h (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.sc.h
Builtin: __builtin_lasx_mxn2x_ux_sc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4557
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.ux.sc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = m;
for i in 0..15:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.half[i] = signed_saturate(shifted, 16);
```

### Header Mapping

```c
#define __lasx_mxn2x_ux_sc_h(a, m) (__m256i) __builtin_lasx_mxn2x_ux_sc_h ((v16i16) a, m);
```

## __m256i __lasx_mxn2x_ux_sc_w (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_sc_w (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.sc.w
Builtin: __builtin_lasx_mxn2x_ux_sc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4560
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.ux.sc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = m;
for i in 0..7:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.word[i] = signed_saturate(shifted, 32);
```

### Header Mapping

```c
#define __lasx_mxn2x_ux_sc_w(a, m) (__m256i) __builtin_lasx_mxn2x_ux_sc_w ((v8i32) a, m);
```

## __m256i __lasx_mxn2x_ux_uc_b (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_uc_b (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.uc.b
Builtin: __builtin_lasx_mxn2x_ux_uc_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4566
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.ux.uc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = m;
for i in 0..31:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.byte[i] = unsigned_saturate(shifted, 8);
```

### Header Mapping

```c
#define __lasx_mxn2x_ux_uc_b(a, m) (__m256i) __builtin_lasx_mxn2x_ux_uc_b ((v32i8) a, m);
```

## __m256i __lasx_mxn2x_ux_uc_d (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_uc_d (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.uc.d
Builtin: __builtin_lasx_mxn2x_ux_uc_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4575
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.ux.uc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = m;
for i in 0..3:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.dword[i] = unsigned_saturate(shifted, 64);
```

### Header Mapping

```c
#define __lasx_mxn2x_ux_uc_d(a, m) (__m256i) __builtin_lasx_mxn2x_ux_uc_d ((v4i64) a, m);
```

## __m256i __lasx_mxn2x_ux_uc_h (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_uc_h (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.uc.h
Builtin: __builtin_lasx_mxn2x_ux_uc_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4569
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.ux.uc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = m;
for i in 0..15:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.half[i] = unsigned_saturate(shifted, 16);
```

### Header Mapping

```c
#define __lasx_mxn2x_ux_uc_h(a, m) (__m256i) __builtin_lasx_mxn2x_ux_uc_h ((v16i16) a, m);
```

## __m256i __lasx_mxn2x_ux_uc_w (__m256i a, int m)

### Synopsis

```c
__m256i __lasx_mxn2x_ux_uc_w (__m256i a, int m)
#include <loongson-asxintrin.h>
Instruction: mxn2x.ux.uc.w
Builtin: __builtin_lasx_mxn2x_ux_uc_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4572
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxn2x.ux.uc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = m;
for i in 0..7:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.word[i] = unsigned_saturate(shifted, 32);
```

### Header Mapping

```c
#define __lasx_mxn2x_ux_uc_w(a, m) (__m256i) __builtin_lasx_mxn2x_ux_uc_w ((v8i32) a, m);
```

## __m256i __lasx_mxpckev_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxpckev_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxpckev.b
Builtin: __builtin_lasx_mxpckev_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1616
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxpckev.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(even byte lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpckev_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxpckev_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxpckev_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxpckev.d
Builtin: __builtin_lasx_mxpckev_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1637
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxpckev.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(even dword lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpckev_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxpckev_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxpckev_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxpckev.h
Builtin: __builtin_lasx_mxpckev_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1623
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxpckev.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(even half lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpckev_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxpckev_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxpckev_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxpckev.w
Builtin: __builtin_lasx_mxpckev_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1630
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxpckev.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(even word lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpckev_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxpckod_b (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxpckod_b (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxpckod.b
Builtin: __builtin_lasx_mxpckod_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1644
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxpckod.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(odd byte lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpckod_b((v32i8)_1, (v32i8)_2);
```

## __m256i __lasx_mxpckod_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxpckod_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxpckod.d
Builtin: __builtin_lasx_mxpckod_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1665
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxpckod.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(odd dword lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpckod_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxpckod_h (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxpckod_h (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxpckod.h
Builtin: __builtin_lasx_mxpckod_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1651
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxpckod.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(odd half lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpckod_h((v16i16)_1, (v16i16)_2);
```

## __m256i __lasx_mxpckod_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxpckod_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxpckod.w
Builtin: __builtin_lasx_mxpckod_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1658
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxpckod.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
dst = interleave_or_pack(odd word lanes from a and b);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxpckod_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxsad_adj2_s_acc_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_s_acc_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.s.acc.w2x.b
Builtin: __builtin_lasx_mxsad_adj2_s_acc_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5021
```

### Description

Compute adjacent-pair sum of absolute differences using signed inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsad.adj2.s.acc.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
for i in 0..15:
  d0 = abs(widen(a.byte[2*i]) - widen(b.byte[2*i]));
  d1 = abs(widen(a.byte[2*i + 1]) - widen(b.byte[2*i + 1]));
  dst.wide_lane[i] = acc.wide_lane[i] + d0 + d1;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_s_acc_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxsad_adj2_s_acc_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_s_acc_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.s.acc.w2x.h
Builtin: __builtin_lasx_mxsad_adj2_s_acc_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5041
```

### Description

Compute adjacent-pair sum of absolute differences using signed inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsad.adj2.s.acc.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
for i in 0..7:
  d0 = abs(widen(a.half[2*i]) - widen(b.half[2*i]));
  d1 = abs(widen(a.half[2*i + 1]) - widen(b.half[2*i + 1]));
  dst.wide_lane[i] = acc.wide_lane[i] + d0 + d1;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_s_acc_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxsad_adj2_s_acc_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_s_acc_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.s.acc.w2x.w
Builtin: __builtin_lasx_mxsad_adj2_s_acc_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5061
```

### Description

Compute adjacent-pair sum of absolute differences using signed inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsad.adj2.s.acc.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
for i in 0..3:
  d0 = abs(widen(a.word[2*i]) - widen(b.word[2*i]));
  d1 = abs(widen(a.word[2*i + 1]) - widen(b.word[2*i + 1]));
  dst.wide_lane[i] = acc.wide_lane[i] + d0 + d1;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_s_acc_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxsad_adj2_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.s.w2x.b
Builtin: __builtin_lasx_mxsad_adj2_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4896
```

### Description

Compute adjacent-pair sum of absolute differences using signed inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsad.adj2.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
for i in 0..15:
  d0 = abs(widen(a.byte[2*i]) - widen(b.byte[2*i]));
  d1 = abs(widen(a.byte[2*i + 1]) - widen(b.byte[2*i + 1]));
  dst.wide_lane[i] = d0 + d1;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxsad_adj2_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.s.w2x.h
Builtin: __builtin_lasx_mxsad_adj2_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4917
```

### Description

Compute adjacent-pair sum of absolute differences using signed inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsad.adj2.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
for i in 0..7:
  d0 = abs(widen(a.half[2*i]) - widen(b.half[2*i]));
  d1 = abs(widen(a.half[2*i + 1]) - widen(b.half[2*i + 1]));
  dst.wide_lane[i] = d0 + d1;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxsad_adj2_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.s.w2x.w
Builtin: __builtin_lasx_mxsad_adj2_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4938
```

### Description

Compute adjacent-pair sum of absolute differences using signed inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsad.adj2.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
for i in 0..3:
  d0 = abs(widen(a.word[2*i]) - widen(b.word[2*i]));
  d1 = abs(widen(a.word[2*i + 1]) - widen(b.word[2*i + 1]));
  dst.wide_lane[i] = d0 + d1;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxsad_adj2_u_acc_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_u_acc_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.u.acc.w2x.b
Builtin: __builtin_lasx_mxsad_adj2_u_acc_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5081
```

### Description

Compute adjacent-pair sum of absolute differences using unsigned inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsad.adj2.u.acc.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
for i in 0..15:
  d0 = abs(widen(a.byte[2*i]) - widen(b.byte[2*i]));
  d1 = abs(widen(a.byte[2*i + 1]) - widen(b.byte[2*i + 1]));
  dst.wide_lane[i] = acc.wide_lane[i] + d0 + d1;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_u_acc_w2x_b((v16u16) ret, (v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxsad_adj2_u_acc_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_u_acc_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.u.acc.w2x.h
Builtin: __builtin_lasx_mxsad_adj2_u_acc_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5101
```

### Description

Compute adjacent-pair sum of absolute differences using unsigned inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsad.adj2.u.acc.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
for i in 0..7:
  d0 = abs(widen(a.half[2*i]) - widen(b.half[2*i]));
  d1 = abs(widen(a.half[2*i + 1]) - widen(b.half[2*i + 1]));
  dst.wide_lane[i] = acc.wide_lane[i] + d0 + d1;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_u_acc_w2x_h((v8u32) ret, (v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxsad_adj2_u_acc_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_u_acc_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.u.acc.w2x.w
Builtin: __builtin_lasx_mxsad_adj2_u_acc_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5121
```

### Description

Compute adjacent-pair sum of absolute differences using unsigned inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsad.adj2.u.acc.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
for i in 0..3:
  d0 = abs(widen(a.word[2*i]) - widen(b.word[2*i]));
  d1 = abs(widen(a.word[2*i + 1]) - widen(b.word[2*i + 1]));
  dst.wide_lane[i] = acc.wide_lane[i] + d0 + d1;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_u_acc_w2x_w((v4u64) ret, (v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxsad_adj2_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.u.w2x.b
Builtin: __builtin_lasx_mxsad_adj2_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4959
```

### Description

Compute adjacent-pair sum of absolute differences using unsigned inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsad.adj2.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
for i in 0..15:
  d0 = abs(widen(a.byte[2*i]) - widen(b.byte[2*i]));
  d1 = abs(widen(a.byte[2*i + 1]) - widen(b.byte[2*i + 1]));
  dst.wide_lane[i] = d0 + d1;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxsad_adj2_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.u.w2x.h
Builtin: __builtin_lasx_mxsad_adj2_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4980
```

### Description

Compute adjacent-pair sum of absolute differences using unsigned inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsad.adj2.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
for i in 0..7:
  d0 = abs(widen(a.half[2*i]) - widen(b.half[2*i]));
  d1 = abs(widen(a.half[2*i + 1]) - widen(b.half[2*i + 1]));
  dst.wide_lane[i] = d0 + d1;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxsad_adj2_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxsad_adj2_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxsad.adj2.u.w2x.w
Builtin: __builtin_lasx_mxsad_adj2_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5001
```

### Description

Compute adjacent-pair sum of absolute differences using unsigned inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsad.adj2.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
for i in 0..3:
  d0 = abs(widen(a.word[2*i]) - widen(b.word[2*i]));
  d1 = abs(widen(a.word[2*i + 1]) - widen(b.word[2*i + 1]));
  dst.wide_lane[i] = d0 + d1;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxsad_adj2_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxshf_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxshf_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxshf.b
Builtin: __builtin_lasx_mxshf_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1867
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxshf.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
for i in 0..31:
  control = shuffle_control(imm_or_vector, i);
  dst.byte[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
#define __lasx_mxshf_b(_1, _2) ((__m256i)__builtin_lasx_mxshf_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxshf_d (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_mxshf_d (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: mxshf.d
Builtin: __builtin_lasx_mxshf_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3633
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxshf.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..3:
  control = shuffle_control(imm_or_vector, i);
  dst.dword[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
#define __lasx_mxshf_d(_1, _2, _3) ((__m256i)__builtin_lasx_mxshf_d((v4i64)(_1), (v4i64)(_2), (_3)))
```

## __m256i __lasx_mxshf_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxshf_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxshf.h
Builtin: __builtin_lasx_mxshf_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1868
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxshf.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
for i in 0..15:
  control = shuffle_control(imm_or_vector, i);
  dst.half[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
#define __lasx_mxshf_h(_1, _2) ((__m256i)__builtin_lasx_mxshf_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxshf_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxshf_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxshf.w
Builtin: __builtin_lasx_mxshf_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1869
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxshf.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
for i in 0..7:
  control = shuffle_control(imm_or_vector, i);
  dst.word[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
#define __lasx_mxshf_w(_1, _2) ((__m256i)__builtin_lasx_mxshf_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxsldi_b (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxsldi_b (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxsldi.b
Builtin: __builtin_lasx_mxsldi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1607
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsldi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
combined = concatenate(b, a);
for i in 0..31:
  dst.byte[i] = combined.byte[i + imm];
```

### Header Mapping

```c
#define __lasx_mxsldi_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxsldi_b((v32i8)(_1), (v32i8)(_2), (_3)))
```

## __m256i __lasx_mxsldi_d (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxsldi_d (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxsldi.d
Builtin: __builtin_lasx_mxsldi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1610
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsldi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
imm = _3;
combined = concatenate(b, a);
for i in 0..3:
  dst.dword[i] = combined.dword[i + imm];
```

### Header Mapping

```c
#define __lasx_mxsldi_d(_1, _2, _3) ((__m256i)__builtin_lasx_mxsldi_d((v4i64)(_1), (v4i64)(_2), (_3)))
```

## __m256i __lasx_mxsldi_h (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxsldi_h (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxsldi.h
Builtin: __builtin_lasx_mxsldi_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1608
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsldi.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
combined = concatenate(b, a);
for i in 0..15:
  dst.half[i] = combined.half[i + imm];
```

### Header Mapping

```c
#define __lasx_mxsldi_h(_1, _2, _3) ((__m256i)__builtin_lasx_mxsldi_h((v16i16)(_1), (v16i16)(_2), (_3)))
```

## __m256i __lasx_mxsldi_w (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxsldi_w (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxsldi.w
Builtin: __builtin_lasx_mxsldi_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1609
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsldi.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
imm = _3;
combined = concatenate(b, a);
for i in 0..7:
  dst.word[i] = combined.word[i + imm];
```

### Header Mapping

```c
#define __lasx_mxsldi_w(_1, _2, _3) ((__m256i)__builtin_lasx_mxsldi_w((v8i32)(_1), (v8i32)(_2), (_3)))
```

## __m256i __lasx_mxsplati_b (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsplati_b (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsplati.b
Builtin: __builtin_lasx_mxsplati_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1611
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsplati.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
selected = a.byte[imm_or_zero];
for i in 0..31:
  dst.byte[i] = selected;
```

### Header Mapping

```c
#define __lasx_mxsplati_b(_1, _2) ((__m256i)__builtin_lasx_mxsplati_b((v32i8)(_1), (_2)))
```

## __m256i __lasx_mxsplati_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsplati_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsplati.d
Builtin: __builtin_lasx_mxsplati_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1614
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsplati.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
selected = a.dword[imm_or_zero];
for i in 0..3:
  dst.dword[i] = selected;
```

### Header Mapping

```c
#define __lasx_mxsplati_d(_1, _2) ((__m256i)__builtin_lasx_mxsplati_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_mxsplati_h (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsplati_h (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsplati.h
Builtin: __builtin_lasx_mxsplati_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1612
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsplati.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
selected = a.half[imm_or_zero];
for i in 0..15:
  dst.half[i] = selected;
```

### Header Mapping

```c
#define __lasx_mxsplati_h(_1, _2) ((__m256i)__builtin_lasx_mxsplati_h((v16i16)(_1), (_2)))
```

## __m256i __lasx_mxsplati_w (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_mxsplati_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: mxsplati.w
Builtin: __builtin_lasx_mxsplati_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1613
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxsplati.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
selected = a.word[imm_or_zero];
for i in 0..7:
  dst.word[i] = selected;
```

### Header Mapping

```c
#define __lasx_mxsplati_w(_1, _2) ((__m256i)__builtin_lasx_mxsplati_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_mxvadd_even_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.s.w2x.b
Builtin: __builtin_lasx_mxvadd_even_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5331
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.even.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_even_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.s.w2x.d
Builtin: __builtin_lasx_mxvadd_even_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5394
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.even.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_even_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.s.w2x.h
Builtin: __builtin_lasx_mxvadd_even_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5352
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.even.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_even_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.s.w2x.w
Builtin: __builtin_lasx_mxvadd_even_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5373
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.even.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_even_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.u.w2x.b
Builtin: __builtin_lasx_mxvadd_even_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5415
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.even.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvadd_even_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.u.w2x.d
Builtin: __builtin_lasx_mxvadd_even_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5478
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.even.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvadd_even_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.u.w2x.h
Builtin: __builtin_lasx_mxvadd_even_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5436
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.even.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvadd_even_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.u.w2x.w
Builtin: __builtin_lasx_mxvadd_even_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5457
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.even.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvadd_even_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.us.w2x.b
Builtin: __builtin_lasx_mxvadd_even_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5499
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.even.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_even_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.us.w2x.d
Builtin: __builtin_lasx_mxvadd_even_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5562
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.even.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_even_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.us.w2x.h
Builtin: __builtin_lasx_mxvadd_even_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5520
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.even.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_even_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_even_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.even.us.w2x.w
Builtin: __builtin_lasx_mxvadd_even_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5541
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.even.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_even_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_hi_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.s.w2x.b
Builtin: __builtin_lasx_mxvadd_hi_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6087
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.hi.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_hi_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.s.w2x.d
Builtin: __builtin_lasx_mxvadd_hi_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6150
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.hi.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_hi_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.s.w2x.h
Builtin: __builtin_lasx_mxvadd_hi_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6108
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.hi.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_hi_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.s.w2x.w
Builtin: __builtin_lasx_mxvadd_hi_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6129
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.hi.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_hi_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.u.w2x.b
Builtin: __builtin_lasx_mxvadd_hi_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6171
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.hi.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvadd_hi_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.u.w2x.d
Builtin: __builtin_lasx_mxvadd_hi_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6234
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.hi.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvadd_hi_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.u.w2x.h
Builtin: __builtin_lasx_mxvadd_hi_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6192
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.hi.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvadd_hi_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.u.w2x.w
Builtin: __builtin_lasx_mxvadd_hi_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6213
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.hi.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvadd_hi_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.us.w2x.b
Builtin: __builtin_lasx_mxvadd_hi_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6255
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.hi.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_hi_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.us.w2x.d
Builtin: __builtin_lasx_mxvadd_hi_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6318
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.hi.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_hi_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.us.w2x.h
Builtin: __builtin_lasx_mxvadd_hi_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6276
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.hi.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_hi_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_hi_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.hi.us.w2x.w
Builtin: __builtin_lasx_mxvadd_hi_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6297
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.hi.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_hi_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_lo_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.s.w2x.b
Builtin: __builtin_lasx_mxvadd_lo_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5835
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.lo.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_lo_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.s.w2x.d
Builtin: __builtin_lasx_mxvadd_lo_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5898
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.lo.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_lo_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.s.w2x.h
Builtin: __builtin_lasx_mxvadd_lo_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5856
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.lo.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_lo_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.s.w2x.w
Builtin: __builtin_lasx_mxvadd_lo_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5877
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.lo.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_lo_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.u.w2x.b
Builtin: __builtin_lasx_mxvadd_lo_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5919
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.lo.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvadd_lo_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.u.w2x.d
Builtin: __builtin_lasx_mxvadd_lo_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5982
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.lo.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvadd_lo_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.u.w2x.h
Builtin: __builtin_lasx_mxvadd_lo_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5940
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.lo.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvadd_lo_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.u.w2x.w
Builtin: __builtin_lasx_mxvadd_lo_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5961
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.lo.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvadd_lo_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.us.w2x.b
Builtin: __builtin_lasx_mxvadd_lo_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6003
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.lo.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_lo_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.us.w2x.d
Builtin: __builtin_lasx_mxvadd_lo_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6066
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.lo.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_lo_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.us.w2x.h
Builtin: __builtin_lasx_mxvadd_lo_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6024
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.lo.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_lo_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_lo_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.lo.us.w2x.w
Builtin: __builtin_lasx_mxvadd_lo_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6045
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.lo.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_lo_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_odd_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.s.w2x.b
Builtin: __builtin_lasx_mxvadd_odd_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5583
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.odd.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_odd_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.s.w2x.d
Builtin: __builtin_lasx_mxvadd_odd_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5646
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.odd.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_odd_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.s.w2x.h
Builtin: __builtin_lasx_mxvadd_odd_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5604
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.odd.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_odd_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.s.w2x.w
Builtin: __builtin_lasx_mxvadd_odd_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5625
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.odd.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvadd_odd_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.u.w2x.b
Builtin: __builtin_lasx_mxvadd_odd_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5667
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.odd.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvadd_odd_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.u.w2x.d
Builtin: __builtin_lasx_mxvadd_odd_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5730
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.odd.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvadd_odd_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.u.w2x.h
Builtin: __builtin_lasx_mxvadd_odd_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5688
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.odd.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvadd_odd_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.u.w2x.w
Builtin: __builtin_lasx_mxvadd_odd_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5709
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.odd.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvadd_odd_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.us.w2x.b
Builtin: __builtin_lasx_mxvadd_odd_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5751
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.odd.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvadd_odd_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.us.w2x.d
Builtin: __builtin_lasx_mxvadd_odd_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5814
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.odd.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvadd_odd_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.us.w2x.h
Builtin: __builtin_lasx_mxvadd_odd_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5772
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.odd.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvadd_odd_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvadd_odd_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvadd.odd.us.w2x.w
Builtin: __builtin_lasx_mxvadd_odd_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:5793
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvadd.odd.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvadd_odd_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvextr_v (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_mxvextr_v (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: mxvextr.v
Builtin: __builtin_lasx_mxvextr_v
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3647
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvextr.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
b = _2;
imm = _3;
dst = concatenate_extract(a, b, byte_or_lane_offset_from_imm);
```

### Header Mapping

```c
#define __lasx_mxvextr_v(_1, _2, _3) ((__m256i)__builtin_lasx_mxvextr_v((v32i8)(_1), (v32i8)(_2), (_3)))
```

## __m256i __lasx_mxvextrins_b (__m256i _1, __m256i _2, unsigned char _3, unsigned char _4)

### Synopsis

```c
__m256i __lasx_mxvextrins_b (__m256i _1, __m256i _2, unsigned char _3, unsigned char _4)
#include <loongson-asxintrin.h>
Instruction: mxvextrins.b
Builtin: __builtin_lasx_mxvextrins_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3646
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvextrins.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
imm = _4;
dst = a;
dst.byte[destination_index_from_imm] = b.byte[source_index_from_imm];
```

### Header Mapping

```c
#define __lasx_mxvextrins_b(_1, _2, _3, _4) ((__m256i)__builtin_lasx_mxvextrins_b((v32i8)(_1), (v32i8)(_2), (_3), (_4)))
```

## __m256i __lasx_mxvextrins_d (__m256i _1, __m256i _2, unsigned char _3, unsigned char _4)

### Synopsis

```c
__m256i __lasx_mxvextrins_d (__m256i _1, __m256i _2, unsigned char _3, unsigned char _4)
#include <loongson-asxintrin.h>
Instruction: mxvextrins.d
Builtin: __builtin_lasx_mxvextrins_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3643
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvextrins.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
imm = _3;
imm = _4;
dst = a;
dst.dword[destination_index_from_imm] = b.dword[source_index_from_imm];
```

### Header Mapping

```c
#define __lasx_mxvextrins_d(_1, _2, _3, _4) ((__m256i)__builtin_lasx_mxvextrins_d((v4i64)(_1), (v4i64)(_2), (_3), (_4)))
```

## __m256i __lasx_mxvextrins_h (__m256i _1, __m256i _2, unsigned char _3, unsigned char _4)

### Synopsis

```c
__m256i __lasx_mxvextrins_h (__m256i _1, __m256i _2, unsigned char _3, unsigned char _4)
#include <loongson-asxintrin.h>
Instruction: mxvextrins.h
Builtin: __builtin_lasx_mxvextrins_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3645
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvextrins.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
imm = _4;
dst = a;
dst.half[destination_index_from_imm] = b.half[source_index_from_imm];
```

### Header Mapping

```c
#define __lasx_mxvextrins_h(_1, _2, _3, _4) ((__m256i)__builtin_lasx_mxvextrins_h((v16i16)(_1), (v16i16)(_2), (_3), (_4)))
```

## __m256i __lasx_mxvextrins_w (__m256i _1, __m256i _2, unsigned char _3, unsigned char _4)

### Synopsis

```c
__m256i __lasx_mxvextrins_w (__m256i _1, __m256i _2, unsigned char _3, unsigned char _4)
#include <loongson-asxintrin.h>
Instruction: mxvextrins.w
Builtin: __builtin_lasx_mxvextrins_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3644
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvextrins.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
imm = _3;
imm = _4;
dst = a;
dst.word[destination_index_from_imm] = b.word[source_index_from_imm];
```

### Header Mapping

```c
#define __lasx_mxvextrins_w(_1, _2, _3, _4) ((__m256i)__builtin_lasx_mxvextrins_w((v8i32)(_1), (v8i32)(_2), (_3), (_4)))
```

## __m256i __lasx_mxvmult_even_acc_s_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_s_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.s.w2x.b
Builtin: __builtin_lasx_mxvmult_even_acc_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7744
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.acc.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_s_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_even_acc_s_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_s_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.s.w2x.d
Builtin: __builtin_lasx_mxvmult_even_acc_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7804
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.acc.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_s_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_even_acc_s_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_s_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.s.w2x.h
Builtin: __builtin_lasx_mxvmult_even_acc_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7764
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.acc.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_s_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_even_acc_s_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_s_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.s.w2x.w
Builtin: __builtin_lasx_mxvmult_even_acc_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7784
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.acc.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_s_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_even_acc_u_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_u_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.u.w2x.b
Builtin: __builtin_lasx_mxvmult_even_acc_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7824
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.acc.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_u_w2x_b((v16u16) ret, (v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_even_acc_u_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_u_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.u.w2x.d
Builtin: __builtin_lasx_mxvmult_even_acc_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7884
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.acc.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_u_w2x_d((v4u64) ret, (v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_even_acc_u_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_u_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.u.w2x.h
Builtin: __builtin_lasx_mxvmult_even_acc_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7844
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.acc.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_u_w2x_h((v8u32) ret, (v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_even_acc_u_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_u_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.u.w2x.w
Builtin: __builtin_lasx_mxvmult_even_acc_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7864
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.acc.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_u_w2x_w((v4u64) ret, (v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_even_acc_us_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_us_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.us.w2x.b
Builtin: __builtin_lasx_mxvmult_even_acc_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7904
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.acc.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_us_w2x_b((v16u16) ret, (v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_even_acc_us_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_us_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.us.w2x.d
Builtin: __builtin_lasx_mxvmult_even_acc_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7964
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.acc.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_us_w2x_d((v4u64) ret, (v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_even_acc_us_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_us_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.us.w2x.h
Builtin: __builtin_lasx_mxvmult_even_acc_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7924
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.acc.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_us_w2x_h((v8u32) ret, (v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_even_acc_us_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_acc_us_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.acc.us.w2x.w
Builtin: __builtin_lasx_mxvmult_even_acc_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7944
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.acc.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_acc_us_w2x_w((v4u64) ret, (v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_even_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.s.w2x.b
Builtin: __builtin_lasx_mxvmult_even_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7241
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_even_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.s.w2x.d
Builtin: __builtin_lasx_mxvmult_even_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7304
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_even_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.s.w2x.h
Builtin: __builtin_lasx_mxvmult_even_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7262
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_even_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.s.w2x.w
Builtin: __builtin_lasx_mxvmult_even_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7283
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_even_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.u.w2x.b
Builtin: __builtin_lasx_mxvmult_even_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7325
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_even_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.u.w2x.d
Builtin: __builtin_lasx_mxvmult_even_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7388
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_even_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.u.w2x.h
Builtin: __builtin_lasx_mxvmult_even_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7346
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_even_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.u.w2x.w
Builtin: __builtin_lasx_mxvmult_even_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7367
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_even_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.us.w2x.b
Builtin: __builtin_lasx_mxvmult_even_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7409
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_even_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.us.w2x.d
Builtin: __builtin_lasx_mxvmult_even_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7472
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_even_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.us.w2x.h
Builtin: __builtin_lasx_mxvmult_even_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7430
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_even_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_even_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.even.us.w2x.w
Builtin: __builtin_lasx_mxvmult_even_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7451
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.even.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_even_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.s.w4x.b
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7060
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.acc.s.w4x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_b((v8i32) ret, (v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.s.w4x.h
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7080
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.acc.s.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_h((v4i64) ret, (v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.s.w4x.w
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7100
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.acc.s.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_w((v4i64) ret, (v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.u.w4x.b
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7120
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.acc.u.w4x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_b((v8u32) ret, (v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.u.w4x.h
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7140
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.acc.u.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_h((v4u64) ret, (v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.u.w4x.w
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7160
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.acc.u.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_w((v4u64) ret, (v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.us.w4x.b
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7180
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.acc.us.w4x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_b((v8u32) ret, (v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.us.w4x.h
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7200
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.acc.us.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_h((v4u64) ret, (v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.acc.us.w4x.w
Builtin: __builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7220
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.acc.us.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_w((v4u64) ret, (v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_s_w4x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_s_w4x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.s.w4x.b
Builtin: __builtin_lasx_mxvmult_hadd_adj4_s_w4x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6872
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.s.w4x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_s_w4x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_s_w4x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_s_w4x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.s.w4x.h
Builtin: __builtin_lasx_mxvmult_hadd_adj4_s_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6893
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.s.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_s_w4x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_s_w4x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_s_w4x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.s.w4x.w
Builtin: __builtin_lasx_mxvmult_hadd_adj4_s_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6914
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.s.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_s_w4x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_u_w4x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_u_w4x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.u.w4x.b
Builtin: __builtin_lasx_mxvmult_hadd_adj4_u_w4x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6935
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.u.w4x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_u_w4x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_u_w4x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_u_w4x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.u.w4x.h
Builtin: __builtin_lasx_mxvmult_hadd_adj4_u_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6956
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.u.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_u_w4x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_u_w4x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_u_w4x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.u.w4x.w
Builtin: __builtin_lasx_mxvmult_hadd_adj4_u_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6977
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.u.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_u_w4x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_us_w4x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_us_w4x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.us.w4x.b
Builtin: __builtin_lasx_mxvmult_hadd_adj4_us_w4x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:6998
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.us.w4x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_us_w4x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_us_w4x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_us_w4x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.us.w4x.h
Builtin: __builtin_lasx_mxvmult_hadd_adj4_us_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7019
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.us.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_us_w4x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_hadd_adj4_us_w4x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hadd_adj4_us_w4x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hadd.adj4.us.w4x.w
Builtin: __builtin_lasx_mxvmult_hadd_adj4_us_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7040
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hadd.adj4.us.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_us_w4x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_hi_acc_s_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_s_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.s.w2x.b
Builtin: __builtin_lasx_mxvmult_hi_acc_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8968
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.acc.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_s_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_hi_acc_s_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_s_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.s.w2x.d
Builtin: __builtin_lasx_mxvmult_hi_acc_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9028
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.acc.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_s_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_hi_acc_s_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_s_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.s.w2x.h
Builtin: __builtin_lasx_mxvmult_hi_acc_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8988
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.acc.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_s_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_hi_acc_s_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_s_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.s.w2x.w
Builtin: __builtin_lasx_mxvmult_hi_acc_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9008
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.acc.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_s_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_hi_acc_u_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_u_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.u.w2x.b
Builtin: __builtin_lasx_mxvmult_hi_acc_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9048
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.acc.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_u_w2x_b((v16u16) ret, (v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_hi_acc_u_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_u_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.u.w2x.d
Builtin: __builtin_lasx_mxvmult_hi_acc_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9108
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.acc.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_u_w2x_d((v4u64) ret, (v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_hi_acc_u_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_u_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.u.w2x.h
Builtin: __builtin_lasx_mxvmult_hi_acc_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9068
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.acc.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_u_w2x_h((v8u32) ret, (v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_hi_acc_u_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_u_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.u.w2x.w
Builtin: __builtin_lasx_mxvmult_hi_acc_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9088
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.acc.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_u_w2x_w((v4u64) ret, (v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_hi_acc_us_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_us_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.us.w2x.b
Builtin: __builtin_lasx_mxvmult_hi_acc_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9128
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.acc.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_us_w2x_b((v16u16) ret, (v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_hi_acc_us_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_us_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.us.w2x.d
Builtin: __builtin_lasx_mxvmult_hi_acc_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9188
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.acc.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_us_w2x_d((v4u64) ret, (v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_hi_acc_us_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_us_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.us.w2x.h
Builtin: __builtin_lasx_mxvmult_hi_acc_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9148
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.acc.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_us_w2x_h((v8u32) ret, (v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_hi_acc_us_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_acc_us_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.acc.us.w2x.w
Builtin: __builtin_lasx_mxvmult_hi_acc_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9168
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.acc.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_acc_us_w2x_w((v4u64) ret, (v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_hi_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.s.w2x.b
Builtin: __builtin_lasx_mxvmult_hi_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8477
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_hi_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.s.w2x.d
Builtin: __builtin_lasx_mxvmult_hi_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8540
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_hi_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.s.w2x.h
Builtin: __builtin_lasx_mxvmult_hi_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8498
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_hi_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.s.w2x.w
Builtin: __builtin_lasx_mxvmult_hi_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8519
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_hi_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.u.w2x.b
Builtin: __builtin_lasx_mxvmult_hi_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8561
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_hi_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.u.w2x.d
Builtin: __builtin_lasx_mxvmult_hi_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8624
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_hi_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.u.w2x.h
Builtin: __builtin_lasx_mxvmult_hi_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8582
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_hi_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.u.w2x.w
Builtin: __builtin_lasx_mxvmult_hi_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8603
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_hi_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.us.w2x.b
Builtin: __builtin_lasx_mxvmult_hi_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8645
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_hi_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.us.w2x.d
Builtin: __builtin_lasx_mxvmult_hi_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8708
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_hi_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.us.w2x.h
Builtin: __builtin_lasx_mxvmult_hi_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8666
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_hi_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_hi_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.hi.us.w2x.w
Builtin: __builtin_lasx_mxvmult_hi_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8687
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.hi.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_hi_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_lo_acc_s_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_s_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.s.w2x.b
Builtin: __builtin_lasx_mxvmult_lo_acc_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8728
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.acc.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_acc_s_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_lo_acc_s_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_s_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.s.w2x.d
Builtin: __builtin_lasx_mxvmult_lo_acc_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8788
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.acc.s.w2x.d.
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
return (__m256i)__builtin_lasx_mxvmult_lo_acc_s_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_lo_acc_s_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_s_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.s.w2x.h
Builtin: __builtin_lasx_mxvmult_lo_acc_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8748
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.acc.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_acc_s_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_lo_acc_s_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_s_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.s.w2x.w
Builtin: __builtin_lasx_mxvmult_lo_acc_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8768
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.acc.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_acc_s_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_lo_acc_u_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_u_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.u.w2x.b
Builtin: __builtin_lasx_mxvmult_lo_acc_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8808
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.acc.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_acc_u_w2x_b((v16u16) ret, (v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_lo_acc_u_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_u_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.u.w2x.d
Builtin: __builtin_lasx_mxvmult_lo_acc_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8868
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.acc.u.w2x.d.
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
return (__m256i)__builtin_lasx_mxvmult_lo_acc_u_w2x_d((v4u64) ret, (v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_lo_acc_u_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_u_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.u.w2x.h
Builtin: __builtin_lasx_mxvmult_lo_acc_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8828
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.acc.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_acc_u_w2x_h((v8u32) ret, (v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_lo_acc_u_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_u_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.u.w2x.w
Builtin: __builtin_lasx_mxvmult_lo_acc_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8848
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.acc.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_acc_u_w2x_w((v4u64) ret, (v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_lo_acc_us_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_us_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.us.w2x.b
Builtin: __builtin_lasx_mxvmult_lo_acc_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8888
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.acc.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_acc_us_w2x_b((v16u16) ret, (v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_lo_acc_us_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_us_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.us.w2x.d
Builtin: __builtin_lasx_mxvmult_lo_acc_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8948
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.acc.us.w2x.d.
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
return (__m256i)__builtin_lasx_mxvmult_lo_acc_us_w2x_d((v4u64) ret, (v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_lo_acc_us_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_us_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.us.w2x.h
Builtin: __builtin_lasx_mxvmult_lo_acc_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8908
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.acc.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_acc_us_w2x_h((v8u32) ret, (v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_lo_acc_us_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_acc_us_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.acc.us.w2x.w
Builtin: __builtin_lasx_mxvmult_lo_acc_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8928
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.acc.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_acc_us_w2x_w((v4u64) ret, (v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_lo_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.s.w2x.b
Builtin: __builtin_lasx_mxvmult_lo_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8225
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_lo_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.s.w2x.d
Builtin: __builtin_lasx_mxvmult_lo_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8288
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.s.w2x.d.
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
return (__m256i)__builtin_lasx_mxvmult_lo_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_lo_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.s.w2x.h
Builtin: __builtin_lasx_mxvmult_lo_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8246
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_lo_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.s.w2x.w
Builtin: __builtin_lasx_mxvmult_lo_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8267
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_lo_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.u.w2x.b
Builtin: __builtin_lasx_mxvmult_lo_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8309
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_lo_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.u.w2x.d
Builtin: __builtin_lasx_mxvmult_lo_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8372
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.u.w2x.d.
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
return (__m256i)__builtin_lasx_mxvmult_lo_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_lo_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.u.w2x.h
Builtin: __builtin_lasx_mxvmult_lo_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8330
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_lo_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.u.w2x.w
Builtin: __builtin_lasx_mxvmult_lo_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8351
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_lo_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.us.w2x.b
Builtin: __builtin_lasx_mxvmult_lo_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8393
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_lo_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.us.w2x.d
Builtin: __builtin_lasx_mxvmult_lo_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8456
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.us.w2x.d.
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
return (__m256i)__builtin_lasx_mxvmult_lo_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_lo_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.us.w2x.h
Builtin: __builtin_lasx_mxvmult_lo_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8414
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_lo_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_lo_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.lo.us.w2x.w
Builtin: __builtin_lasx_mxvmult_lo_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8435
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.lo.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_lo_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_odd_acc_s_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_s_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.s.w2x.b
Builtin: __builtin_lasx_mxvmult_odd_acc_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7984
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.acc.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_s_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_odd_acc_s_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_s_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.s.w2x.d
Builtin: __builtin_lasx_mxvmult_odd_acc_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8044
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.acc.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_s_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_odd_acc_s_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_s_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.s.w2x.h
Builtin: __builtin_lasx_mxvmult_odd_acc_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8004
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.acc.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_s_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_odd_acc_s_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_s_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.s.w2x.w
Builtin: __builtin_lasx_mxvmult_odd_acc_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8024
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.acc.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_s_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_odd_acc_u_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_u_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.u.w2x.b
Builtin: __builtin_lasx_mxvmult_odd_acc_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8064
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.acc.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_u_w2x_b((v16u16) ret, (v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_odd_acc_u_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_u_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.u.w2x.d
Builtin: __builtin_lasx_mxvmult_odd_acc_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8124
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.acc.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_u_w2x_d((v4u64) ret, (v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_odd_acc_u_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_u_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.u.w2x.h
Builtin: __builtin_lasx_mxvmult_odd_acc_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8084
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.acc.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_u_w2x_h((v8u32) ret, (v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_odd_acc_u_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_u_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.u.w2x.w
Builtin: __builtin_lasx_mxvmult_odd_acc_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8104
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.acc.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_u_w2x_w((v4u64) ret, (v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_odd_acc_us_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_us_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.us.w2x.b
Builtin: __builtin_lasx_mxvmult_odd_acc_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8144
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.acc.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_us_w2x_b((v16u16) ret, (v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_odd_acc_us_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_us_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.us.w2x.d
Builtin: __builtin_lasx_mxvmult_odd_acc_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8204
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.acc.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_us_w2x_d((v4u64) ret, (v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_odd_acc_us_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_us_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.us.w2x.h
Builtin: __builtin_lasx_mxvmult_odd_acc_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8164
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.acc.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_us_w2x_h((v8u32) ret, (v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_odd_acc_us_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_acc_us_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.acc.us.w2x.w
Builtin: __builtin_lasx_mxvmult_odd_acc_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:8184
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.acc.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_acc_us_w2x_w((v4u64) ret, (v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_odd_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.s.w2x.b
Builtin: __builtin_lasx_mxvmult_odd_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7493
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_odd_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.s.w2x.d
Builtin: __builtin_lasx_mxvmult_odd_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7556
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_odd_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.s.w2x.h
Builtin: __builtin_lasx_mxvmult_odd_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7514
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_odd_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.s.w2x.w
Builtin: __builtin_lasx_mxvmult_odd_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7535
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmult_odd_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.u.w2x.b
Builtin: __builtin_lasx_mxvmult_odd_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7577
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvmult_odd_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.u.w2x.d
Builtin: __builtin_lasx_mxvmult_odd_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7640
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvmult_odd_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.u.w2x.h
Builtin: __builtin_lasx_mxvmult_odd_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7598
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvmult_odd_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.u.w2x.w
Builtin: __builtin_lasx_mxvmult_odd_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7619
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvmult_odd_us_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_us_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.us.w2x.b
Builtin: __builtin_lasx_mxvmult_odd_us_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7661
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_us_w2x_b((v32u8) a, (v32i8) b);
```

## __m256i __lasx_mxvmult_odd_us_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_us_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.us.w2x.d
Builtin: __builtin_lasx_mxvmult_odd_us_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7724
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_us_w2x_d((v4u64) a, (v4i64) b);
```

## __m256i __lasx_mxvmult_odd_us_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_us_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.us.w2x.h
Builtin: __builtin_lasx_mxvmult_odd_us_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7682
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_us_w2x_h((v16u16) a, (v16i16) b);
```

## __m256i __lasx_mxvmult_odd_us_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmult_odd_us_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmult.odd.us.w2x.w
Builtin: __builtin_lasx_mxvmult_odd_us_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:7703
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmult.odd.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmult_odd_us_w2x_w((v8u32) a, (v8i32) b);
```

## __m256i __lasx_mxvmultc_im_haddc_adjc2_acc_s_w4x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultc_im_haddc_adjc2_acc_s_w4x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.im.haddc.adjc2.acc.s.w4x.w
Builtin: __builtin_lasx_mxvmultc_im_haddc_adjc2_acc_s_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9229
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultc.im.haddc.adjc2.acc.s.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_im_haddc_adjc2_acc_s_w4x_w((v4i64) ret, (v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmultc_im_haddc_adjc2_s_w4x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultc_im_haddc_adjc2_s_w4x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.im.haddc.adjc2.s.w4x.w
Builtin: __builtin_lasx_mxvmultc_im_haddc_adjc2_s_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9209
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultc.im.haddc.adjc2.s.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_im_haddc_adjc2_s_w4x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmultc_im_haddc_adjc4_acc_s_w4x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultc_im_haddc_adjc4_acc_s_w4x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.im.haddc.adjc4.acc.s.w4x.h
Builtin: __builtin_lasx_mxvmultc_im_haddc_adjc4_acc_s_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9270
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultc.im.haddc.adjc4.acc.s.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_im_haddc_adjc4_acc_s_w4x_h((v4i64) ret, (v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmultc_im_haddc_adjc4_s_w4x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultc_im_haddc_adjc4_s_w4x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.im.haddc.adjc4.s.w4x.h
Builtin: __builtin_lasx_mxvmultc_im_haddc_adjc4_s_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9250
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultc.im.haddc.adjc4.s.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_im_haddc_adjc4_s_w4x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmultc_re_haddc_adjc2_acc_s_w4x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultc_re_haddc_adjc2_acc_s_w4x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.re.haddc.adjc2.acc.s.w4x.w
Builtin: __builtin_lasx_mxvmultc_re_haddc_adjc2_acc_s_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9311
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultc.re.haddc.adjc2.acc.s.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_re_haddc_adjc2_acc_s_w4x_w((v4i64) ret, (v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmultc_re_haddc_adjc2_s_w4x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultc_re_haddc_adjc2_s_w4x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.re.haddc.adjc2.s.w4x.w
Builtin: __builtin_lasx_mxvmultc_re_haddc_adjc2_s_w4x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9291
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultc.re.haddc.adjc2.s.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_re_haddc_adjc2_s_w4x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmultc_re_haddc_adjc4_acc_s_w4x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultc_re_haddc_adjc4_acc_s_w4x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.re.haddc.adjc4.acc.s.w4x.h
Builtin: __builtin_lasx_mxvmultc_re_haddc_adjc4_acc_s_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9352
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultc.re.haddc.adjc4.acc.s.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_re_haddc_adjc4_acc_s_w4x_h((v4i64) ret, (v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmultc_re_haddc_adjc4_s_w4x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultc_re_haddc_adjc4_s_w4x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultc.re.haddc.adjc4.s.w4x.h
Builtin: __builtin_lasx_mxvmultc_re_haddc_adjc4_s_w4x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9332
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultc.re.haddc.adjc4.s.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultc_re_haddc_adjc4_s_w4x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmultp_hi_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.w2x.b
Builtin: __builtin_lasx_mxvmultp_hi_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9498
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.hi.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmultp_hi_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.w2x.d
Builtin: __builtin_lasx_mxvmultp_hi_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9561
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.hi.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmultp_hi_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.w2x.h
Builtin: __builtin_lasx_mxvmultp_hi_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9519
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.hi.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmultp_hi_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.w2x.w
Builtin: __builtin_lasx_mxvmultp_hi_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9540
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.hi.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmultp_hi_xacc_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_xacc_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.xacc.w2x.b
Builtin: __builtin_lasx_mxvmultp_hi_xacc_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9661
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.hi.xacc.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_xacc_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmultp_hi_xacc_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_xacc_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.xacc.w2x.d
Builtin: __builtin_lasx_mxvmultp_hi_xacc_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9721
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.hi.xacc.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_xacc_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmultp_hi_xacc_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_xacc_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.xacc.w2x.h
Builtin: __builtin_lasx_mxvmultp_hi_xacc_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9681
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.hi.xacc.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_xacc_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmultp_hi_xacc_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_hi_xacc_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.hi.xacc.w2x.w
Builtin: __builtin_lasx_mxvmultp_hi_xacc_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9701
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.hi.xacc.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_hi_xacc_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmultp_lo_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.w2x.b
Builtin: __builtin_lasx_mxvmultp_lo_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9414
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.lo.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmultp_lo_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.w2x.d
Builtin: __builtin_lasx_mxvmultp_lo_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9477
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.lo.w2x.d.
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
return (__m256i)__builtin_lasx_mxvmultp_lo_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmultp_lo_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.w2x.h
Builtin: __builtin_lasx_mxvmultp_lo_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9435
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.lo.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmultp_lo_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.w2x.w
Builtin: __builtin_lasx_mxvmultp_lo_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9456
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.lo.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvmultp_lo_xacc_w2x_b (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_xacc_w2x_b (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.xacc.w2x.b
Builtin: __builtin_lasx_mxvmultp_lo_xacc_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9581
```

### Description

Compute lane-wise modular integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.lo.xacc.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_xacc_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvmultp_lo_xacc_w2x_d (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_xacc_w2x_d (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.xacc.w2x.d
Builtin: __builtin_lasx_mxvmultp_lo_xacc_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9641
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.lo.xacc.w2x.d.
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
return (__m256i)__builtin_lasx_mxvmultp_lo_xacc_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvmultp_lo_xacc_w2x_h (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_xacc_w2x_h (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.xacc.w2x.h
Builtin: __builtin_lasx_mxvmultp_lo_xacc_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9601
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.lo.xacc.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_xacc_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvmultp_lo_xacc_w2x_w (__m256i ret, __m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvmultp_lo_xacc_w2x_w (__m256i ret, __m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvmultp.lo.xacc.w2x.w
Builtin: __builtin_lasx_mxvmultp_lo_xacc_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9621
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvmultp.lo.xacc.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvmultp_lo_xacc_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvperm_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvperm_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvperm.b
Builtin: __builtin_lasx_mxvperm_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4746
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvperm.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
for i in 0..31:
  dst.byte[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxvperm_b ((v32i8) a, (v32i8) b, (v32i8) c);
```

## __m256i __lasx_mxvperml_d (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvperml_d (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvperml.d
Builtin: __builtin_lasx_mxvperml_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4136
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvperml.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
for i in 0..3:
  dst.dword[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvperml_d((v4i64)_1, (v4i64)_2);
```

## __m256i __lasx_mxvperml_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_mxvperml_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: mxvperml.w
Builtin: __builtin_lasx_mxvperml_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4143
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvperml.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvperml_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_mxvsel_d (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_mxvsel_d (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: mxvsel.d
Builtin: __builtin_lasx_mxvsel_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3648
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsel.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..3:
  dst.dword[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_mxvsel_d(_1, _2, _3) ((__m256i)__builtin_lasx_mxvsel_d((v4i64)(_1), (v4i64)(_2), (_3)))
```

## __m256i __lasx_mxvsel_h (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_mxvsel_h (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: mxvsel.h
Builtin: __builtin_lasx_mxvsel_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3650
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsel.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..15:
  dst.half[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_mxvsel_h(_1, _2, _3) ((__m256i)__builtin_lasx_mxvsel_h((v16i16)(_1), (v16i16)(_2), (_3)))
```

## __m256i __lasx_mxvsel_w (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_mxvsel_w (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: mxvsel.w
Builtin: __builtin_lasx_mxvsel_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3649
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsel.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..7:
  dst.word[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_mxvsel_w(_1, _2, _3) ((__m256i)__builtin_lasx_mxvsel_w((v8i32)(_1), (v8i32)(_2), (_3)))
```

## __m256i __lasx_mxvselr_d (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxvselr_d (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxvselr.d
Builtin: __builtin_lasx_mxvselr_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4122
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvselr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  dst.dword[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvselr_d((v4i64)_1, (v4i64)_2, (v4i64)_3);
```

## __m256i __lasx_mxvselr_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxvselr_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxvselr.w
Builtin: __builtin_lasx_mxvselr_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4129
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvselr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  dst.word[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvselr_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
```

## __m256i __lasx_mxvshf_b (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxvshf_b (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxvshf.b
Builtin: __builtin_lasx_mxvshf_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1784
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvshf.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..31:
  control = shuffle_control(imm_or_vector, i);
  dst.byte[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvshf_b((v32i8)_1, (v32i8)_2, (v32i8)_3);
```

## __m256i __lasx_mxvshf_d (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxvshf_d (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxvshf.d
Builtin: __builtin_lasx_mxvshf_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1805
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvshf.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..3:
  control = shuffle_control(imm_or_vector, i);
  dst.dword[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvshf_d((v4i64)_1, (v4i64)_2, (v4i64)_3);
```

## __m256i __lasx_mxvshf_h (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxvshf_h (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxvshf.h
Builtin: __builtin_lasx_mxvshf_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1791
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvshf.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..15:
  control = shuffle_control(imm_or_vector, i);
  dst.half[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvshf_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
```

## __m256i __lasx_mxvshf_w (__m256i _1, __m256i _2, __m256i _3)

### Synopsis

```c
__m256i __lasx_mxvshf_w (__m256i _1, __m256i _2, __m256i _3)
#include <loongson-asxintrin.h>
Instruction: mxvshf.w
Builtin: __builtin_lasx_mxvshf_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1798
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvshf.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
c = _3;
for i in 0..7:
  control = shuffle_control(imm_or_vector, i);
  dst.word[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvshf_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
```

## __m256i __lasx_mxvshufil_h (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_mxvshufil_h (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: mxvshufil.h
Builtin: __builtin_lasx_mxvshufil_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3639
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvshufil.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..15:
  dst.half[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_mxvshufil_h(_1, _2, _3) ((__m256i)__builtin_lasx_mxvshufil_h((v16i16)(_1), (v16i16)(_2), (_3)))
```

## __m256i __lasx_mxvshufill_b (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_mxvshufill_b (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: mxvshufill.b
Builtin: __builtin_lasx_mxvshufill_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3637
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvshufill.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
selected = a.byte[imm_or_zero];
for i in 0..31:
  dst.byte[i] = selected;
```

### Header Mapping

```c
#define __lasx_mxvshufill_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxvshufill_b((v32i8)(_1), (v32i8)(_2), (_3)))
```

## __m256i __lasx_mxvshufilr_b (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_mxvshufilr_b (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: mxvshufilr.b
Builtin: __builtin_lasx_mxvshufilr_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3636
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvshufilr.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..31:
  dst.byte[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_mxvshufilr_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxvshufilr_b((v32i8)(_1), (v32i8)(_2), (_3)))
```

## __m256i __lasx_mxvshufir_h (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_mxvshufir_h (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: mxvshufir.h
Builtin: __builtin_lasx_mxvshufir_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3638
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvshufir.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..15:
  dst.half[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_mxvshufir_h(_1, _2, _3) ((__m256i)__builtin_lasx_mxvshufir_h((v16i16)(_1), (v16i16)(_2), (_3)))
```

## __m256i __lasx_mxvshufirl_b (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_mxvshufirl_b (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: mxvshufirl.b
Builtin: __builtin_lasx_mxvshufirl_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3635
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvshufirl.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..31:
  dst.byte[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_mxvshufirl_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxvshufirl_b((v32i8)(_1), (v32i8)(_2), (_3)))
```

## __m256i __lasx_mxvshufirr_b (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_mxvshufirr_b (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: mxvshufirr.b
Builtin: __builtin_lasx_mxvshufirr_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3634
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvshufirr.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..31:
  dst.byte[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_mxvshufirr_b(_1, _2, _3) ((__m256i)__builtin_lasx_mxvshufirr_b((v32i8)(_1), (v32i8)(_2), (_3)))
```

## __m256i __lasx_mxvsub_even_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.s.w2x.b
Builtin: __builtin_lasx_mxvsub_even_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9868
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.even.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_even_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvsub_even_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.s.w2x.d
Builtin: __builtin_lasx_mxvsub_even_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9931
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.even.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_even_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvsub_even_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.s.w2x.h
Builtin: __builtin_lasx_mxvsub_even_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9889
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.even.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_even_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvsub_even_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.s.w2x.w
Builtin: __builtin_lasx_mxvsub_even_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9910
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.even.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_even_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvsub_even_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.u.w2x.b
Builtin: __builtin_lasx_mxvsub_even_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9952
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.even.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_even_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvsub_even_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.u.w2x.d
Builtin: __builtin_lasx_mxvsub_even_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10015
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.even.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_even_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvsub_even_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.u.w2x.h
Builtin: __builtin_lasx_mxvsub_even_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9973
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.even.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_even_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvsub_even_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_even_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.even.u.w2x.w
Builtin: __builtin_lasx_mxvsub_even_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:9994
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.even.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_even_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvsub_hi_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.s.w2x.b
Builtin: __builtin_lasx_mxvsub_hi_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10372
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.hi.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvsub_hi_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.s.w2x.d
Builtin: __builtin_lasx_mxvsub_hi_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10435
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.hi.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvsub_hi_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.s.w2x.h
Builtin: __builtin_lasx_mxvsub_hi_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10393
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.hi.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvsub_hi_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.s.w2x.w
Builtin: __builtin_lasx_mxvsub_hi_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10414
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.hi.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvsub_hi_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.u.w2x.b
Builtin: __builtin_lasx_mxvsub_hi_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10456
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.hi.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvsub_hi_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.u.w2x.d
Builtin: __builtin_lasx_mxvsub_hi_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10519
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.hi.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvsub_hi_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.u.w2x.h
Builtin: __builtin_lasx_mxvsub_hi_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10477
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.hi.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvsub_hi_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_hi_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.hi.u.w2x.w
Builtin: __builtin_lasx_mxvsub_hi_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10498
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.hi.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_hi_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvsub_lo_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.s.w2x.b
Builtin: __builtin_lasx_mxvsub_lo_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10204
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.lo.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvsub_lo_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.s.w2x.d
Builtin: __builtin_lasx_mxvsub_lo_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10267
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.lo.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvsub_lo_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.s.w2x.h
Builtin: __builtin_lasx_mxvsub_lo_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10225
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.lo.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvsub_lo_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.s.w2x.w
Builtin: __builtin_lasx_mxvsub_lo_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10246
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.lo.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvsub_lo_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.u.w2x.b
Builtin: __builtin_lasx_mxvsub_lo_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10288
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.lo.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvsub_lo_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.u.w2x.d
Builtin: __builtin_lasx_mxvsub_lo_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10351
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.lo.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvsub_lo_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.u.w2x.h
Builtin: __builtin_lasx_mxvsub_lo_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10309
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.lo.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvsub_lo_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_lo_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.lo.u.w2x.w
Builtin: __builtin_lasx_mxvsub_lo_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10330
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.lo.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_lo_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxvsub_odd_s_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_s_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.s.w2x.b
Builtin: __builtin_lasx_mxvsub_odd_s_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10036
```

### Description

Compute lane-wise signed integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.odd.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_odd_s_w2x_b((v32i8) a, (v32i8) b);
```

## __m256i __lasx_mxvsub_odd_s_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_s_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.s.w2x.d
Builtin: __builtin_lasx_mxvsub_odd_s_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10099
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.odd.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_odd_s_w2x_d((v4i64) a, (v4i64) b);
```

## __m256i __lasx_mxvsub_odd_s_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_s_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.s.w2x.h
Builtin: __builtin_lasx_mxvsub_odd_s_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10057
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.odd.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_odd_s_w2x_h((v16i16) a, (v16i16) b);
```

## __m256i __lasx_mxvsub_odd_s_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_s_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.s.w2x.w
Builtin: __builtin_lasx_mxvsub_odd_s_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10078
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.odd.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_odd_s_w2x_w((v8i32) a, (v8i32) b);
```

## __m256i __lasx_mxvsub_odd_u_w2x_b (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_u_w2x_b (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.u.w2x.b
Builtin: __builtin_lasx_mxvsub_odd_u_w2x_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10120
```

### Description

Compute lane-wise unsigned integer arithmetic on 32 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.odd.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_odd_u_w2x_b((v32u8) a, (v32u8) b);
```

## __m256i __lasx_mxvsub_odd_u_w2x_d (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_u_w2x_d (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.u.w2x.d
Builtin: __builtin_lasx_mxvsub_odd_u_w2x_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10183
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.odd.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_odd_u_w2x_d((v4u64) a, (v4u64) b);
```

## __m256i __lasx_mxvsub_odd_u_w2x_h (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_u_w2x_h (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.u.w2x.h
Builtin: __builtin_lasx_mxvsub_odd_u_w2x_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10141
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.odd.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_odd_u_w2x_h((v16u16) a, (v16u16) b);
```

## __m256i __lasx_mxvsub_odd_u_w2x_w (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvsub_odd_u_w2x_w (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvsub.odd.u.w2x.w
Builtin: __builtin_lasx_mxvsub_odd_u_w2x_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:10162
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxvsub.odd.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvsub_odd_u_w2x_w((v8u32) a, (v8u32) b);
```

## __m256i __lasx_mxw2x_hi_s_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_hi_s_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.hi.s.b
Builtin: __builtin_lasx_mxw2x_hi_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4782
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxw2x.hi.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
for i in 0..15:
  src_index = i + source_lanes/2;
  dst.wide_lane[i] = sign_or_zero_extend(a.byte[src_index], 2 * 8);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxw2x_hi_s_b ((v32i8) a);
```

## __m256i __lasx_mxw2x_hi_s_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_hi_s_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.hi.s.d
Builtin: __builtin_lasx_mxw2x_hi_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4800
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxw2x.hi.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
for i in 0..1:
  src_index = i + source_lanes/2;
  dst.wide_lane[i] = sign_or_zero_extend(a.dword[src_index], 2 * 64);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxw2x_hi_s_d ((v4i64) a);
```

## __m256i __lasx_mxw2x_hi_s_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_hi_s_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.hi.s.h
Builtin: __builtin_lasx_mxw2x_hi_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4788
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxw2x.hi.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
for i in 0..7:
  src_index = i + source_lanes/2;
  dst.wide_lane[i] = sign_or_zero_extend(a.half[src_index], 2 * 16);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxw2x_hi_s_h ((v16i16) a);
```

## __m256i __lasx_mxw2x_hi_s_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_hi_s_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.hi.s.w
Builtin: __builtin_lasx_mxw2x_hi_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4794
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxw2x.hi.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
for i in 0..3:
  src_index = i + source_lanes/2;
  dst.wide_lane[i] = sign_or_zero_extend(a.word[src_index], 2 * 32);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxw2x_hi_s_w ((v8i32) a);
```

## __m256i __lasx_mxw2x_lo_s_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_lo_s_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.lo.s.b
Builtin: __builtin_lasx_mxw2x_lo_s_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4758
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxw2x.lo.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
for i in 0..15:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.byte[src_index], 2 * 8);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxw2x_lo_s_b ((v32i8) a);
```

## __m256i __lasx_mxw2x_lo_s_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_lo_s_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.lo.s.d
Builtin: __builtin_lasx_mxw2x_lo_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4776
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxw2x.lo.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
for i in 0..1:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.dword[src_index], 2 * 64);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxw2x_lo_s_d ((v4i64) a);
```

## __m256i __lasx_mxw2x_lo_s_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_lo_s_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.lo.s.h
Builtin: __builtin_lasx_mxw2x_lo_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4764
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxw2x.lo.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
for i in 0..7:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.half[src_index], 2 * 16);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxw2x_lo_s_h ((v16i16) a);
```

## __m256i __lasx_mxw2x_lo_s_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxw2x_lo_s_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxw2x.lo.s.w
Builtin: __builtin_lasx_mxw2x_lo_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4770
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mxw2x.lo.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
for i in 0..3:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.word[src_index], 2 * 32);
```

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxw2x_lo_s_w ((v8i32) a);
```

## __m256i __lasx_xcopy_s_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_xcopy_s_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: xcopy.s.d
Builtin: __builtin_lasx_xcopy_s_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4158
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xcopy.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
return sign_or_zero_extend(a.dword[imm]);
```

### Header Mapping

```c
#define __lasx_xcopy_s_d(_1, _2) ((long int)__builtin_lasx_xcopy_s_d((v4i64)(_1), (_2)))
```

## int __lasx_xcopy_s_w (__m256i _1, unsigned char _2)

### Synopsis

```c
int __lasx_xcopy_s_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: xcopy.s.w
Builtin: __builtin_lasx_xcopy_s_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4156
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xcopy.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
return sign_or_zero_extend(a.word[imm]);
```

### Header Mapping

```c
#define __lasx_xcopy_s_w(_1, _2) ((int)__builtin_lasx_xcopy_s_w((v8i32)(_1), (_2)))
```

## int __lasx_xcopy_u_w (__m256i _1, unsigned char _2)

### Synopsis

```c
int __lasx_xcopy_u_w (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: xcopy.u.w
Builtin: __builtin_lasx_xcopy_u_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4157
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xcopy.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
return sign_or_zero_extend(a.word[imm]);
```

### Header Mapping

```c
#define __lasx_xcopy_u_w(_1, _2) ((int)__builtin_lasx_xcopy_u_w((v8i32)(_1), (_2)))
```

## __m256i __lasx_xinsert_d (__m256i _1, unsigned char _2, long int _3)

### Synopsis

```c
__m256i __lasx_xinsert_d (__m256i _1, unsigned char _2, long int _3)
#include <loongson-asxintrin.h>
Instruction: xinsert.d
Builtin: __builtin_lasx_xinsert_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4160
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xinsert.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
imm = _3;
dst = a;
dst.dword[destination_index_from_imm] = value;
```

### Header Mapping

```c
#define __lasx_xinsert_d(_1, _2, _3) ((__m256i)__builtin_lasx_xinsert_d((v4i64)(_1), (_2), (_3)))
```

## __m256i __lasx_xinsert_w (__m256i _1, unsigned char _2, int _3)

### Synopsis

```c
__m256i __lasx_xinsert_w (__m256i _1, unsigned char _2, int _3)
#include <loongson-asxintrin.h>
Instruction: xinsert.w
Builtin: __builtin_lasx_xinsert_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4159
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xinsert.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
imm = _3;
dst = a;
dst.word[destination_index_from_imm] = value;
```

### Header Mapping

```c
#define __lasx_xinsert_w(_1, _2, _3) ((__m256i)__builtin_lasx_xinsert_w((v8i32)(_1), (_2), (_3)))
```

## __m256i __lasx_xshuf_w (__m256i _1, __m256i _2)

### Synopsis

```c
__m256i __lasx_xshuf_w (__m256i _1, __m256i _2)
#include <loongson-asxintrin.h>
Instruction: xshuf.w
Builtin: __builtin_lasx_xshuf_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4311
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xshuf.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
for i in 0..7:
  dst.word[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xshuf_w((v8i32)_1, (v8i32)_2);
```

## __m256i __lasx_xshufi_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_xshufi_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: xshufi.d
Builtin: __builtin_lasx_xshufi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4309
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xshufi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_xshufi_d(_1, _2) ((__m256i)__builtin_lasx_xshufi_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_xvbroadcast_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_xvbroadcast_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xvbroadcast.b
Builtin: __builtin_lasx_xvbroadcast_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4162
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvbroadcast.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
selected = a.byte[imm_or_zero];
for i in 0..31:
  dst.byte[i] = selected;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvbroadcast_b((v32i8)_1);
```

## __m256i __lasx_xvbroadcast_d (__m256i _1)

### Synopsis

```c
__m256i __lasx_xvbroadcast_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xvbroadcast.d
Builtin: __builtin_lasx_xvbroadcast_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4183
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvbroadcast.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
selected = a.dword[imm_or_zero];
for i in 0..3:
  dst.dword[i] = selected;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvbroadcast_d((v4i64)_1);
```

## __m256i __lasx_xvbroadcast_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_xvbroadcast_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xvbroadcast.h
Builtin: __builtin_lasx_xvbroadcast_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4169
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvbroadcast.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
selected = a.half[imm_or_zero];
for i in 0..15:
  dst.half[i] = selected;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvbroadcast_h((v16i16)_1);
```

## __m256i __lasx_xvbroadcast_q (__m256i _1)

### Synopsis

```c
__m256i __lasx_xvbroadcast_q (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xvbroadcast.q
Builtin: __builtin_lasx_xvbroadcast_q
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4190
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvbroadcast.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
a = _1;
selected = a.qword[imm_or_zero];
for i in 0..1:
  dst.qword[i] = selected;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvbroadcast_q((v32i8)_1);
```

## __m256i __lasx_xvbroadcast_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_xvbroadcast_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xvbroadcast.w
Builtin: __builtin_lasx_xvbroadcast_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4176
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvbroadcast.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
selected = a.word[imm_or_zero];
for i in 0..7:
  dst.word[i] = selected;
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xvbroadcast_w((v8i32)_1);
```

## __m256i __lasx_xvextract_q (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_xvextract_q (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: xvextract.q
Builtin: __builtin_lasx_xvextract_q
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4317
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvextract.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
a = _1;
imm = _2;
dst = concatenate_extract(a, b, byte_or_lane_offset_from_imm);
```

### Header Mapping

```c
#define __lasx_xvextract_q(_1, _2) ((__m256i)__builtin_lasx_xvextract_q((v32i8)(_1), (_2)))
```

## __m256i __lasx_xvinsert_q (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_xvinsert_q (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: xvinsert.q
Builtin: __builtin_lasx_xvinsert_q
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4318
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvinsert.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
a = _1;
b = _2;
imm = _3;
dst = a;
dst.qword[destination_index_from_imm] = b.qword[source_index_from_imm];
```

### Header Mapping

```c
#define __lasx_xvinsert_q(_1, _2, _3) ((__m256i)__builtin_lasx_xvinsert_q((v32i8)(_1), (v32i8)(_2), (_3)))
```

## __m256i __lasx_xvpermi_d (__m256i _1, unsigned char _2)

### Synopsis

```c
__m256i __lasx_xvpermi_d (__m256i _1, unsigned char _2)
#include <loongson-asxintrin.h>
Instruction: xvpermi.d
Builtin: __builtin_lasx_xvpermi_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4323
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvpermi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
for i in 0..3:
  dst.dword[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_xvpermi_d(_1, _2) ((__m256i)__builtin_lasx_xvpermi_d((v4i64)(_1), (_2)))
```

## __m256i __lasx_xvsel128i_d (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_xvsel128i_d (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: xvsel128i.d
Builtin: __builtin_lasx_xvsel128i_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4322
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvsel128i.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..3:
  dst.dword[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_xvsel128i_d(_1, _2, _3) ((__m256i)__builtin_lasx_xvsel128i_d((v4i64)(_1), (v4i64)(_2), (_3)))
```

## __m256i __lasx_xvsel128i_w (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_xvsel128i_w (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: xvsel128i.w
Builtin: __builtin_lasx_xvsel128i_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4321
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvsel128i.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..7:
  dst.word[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_xvsel128i_w(_1, _2, _3) ((__m256i)__builtin_lasx_xvsel128i_w((v8i32)(_1), (v8i32)(_2), (_3)))
```

## __m256i __lasx_xvseli_d (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_xvseli_d (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: xvseli.d
Builtin: __builtin_lasx_xvseli_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4320
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvseli.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..3:
  dst.dword[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_xvseli_d(_1, _2, _3) ((__m256i)__builtin_lasx_xvseli_d((v4i64)(_1), (v4i64)(_2), (_3)))
```

## __m256i __lasx_xvseli_w (__m256i _1, __m256i _2, unsigned int _3)

### Synopsis

```c
__m256i __lasx_xvseli_w (__m256i _1, __m256i _2, unsigned int _3)
#include <loongson-asxintrin.h>
Instruction: xvseli.w
Builtin: __builtin_lasx_xvseli_w
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4319
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvseli.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..7:
  dst.word[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_xvseli_w(_1, _2, _3) ((__m256i)__builtin_lasx_xvseli_w((v8i32)(_1), (v8i32)(_2), (_3)))
```

## __m256i __lasx_xvshufi_q (__m256i _1, __m256i _2, unsigned char _3)

### Synopsis

```c
__m256i __lasx_xvshufi_q (__m256i _1, __m256i _2, unsigned char _3)
#include <loongson-asxintrin.h>
Instruction: xvshufi.q
Builtin: __builtin_lasx_xvshufi_q
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4308
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvshufi.q.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 128-bit elements.
a = _1;
b = _2;
imm = _3;
for i in 0..1:
  dst.qword[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
#define __lasx_xvshufi_q(_1, _2, _3) ((__m256i)__builtin_lasx_xvshufi_q((v32i8)(_1), (v32i8)(_2), (_3)))
```

## __m256i __lasx_xw2x_s_lo_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_xw2x_s_lo_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xw2x.s.lo.b
Builtin: __builtin_lasx_xw2x_s_lo_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4239
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xw2x.s.lo.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..15:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.byte[src_index], 2 * 8);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xw2x_s_lo_b((v32i8)_1);
```

## __m256i __lasx_xw2x_s_lo_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_xw2x_s_lo_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xw2x.s.lo.h
Builtin: __builtin_lasx_xw2x_s_lo_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4246
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xw2x.s.lo.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..7:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.half[src_index], 2 * 16);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xw2x_s_lo_h((v16i16)_1);
```

## __m256i __lasx_xw2x_s_lo_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_xw2x_s_lo_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xw2x.s.lo.w
Builtin: __builtin_lasx_xw2x_s_lo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4253
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xw2x.s.lo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.word[src_index], 2 * 32);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xw2x_s_lo_w((v8i32)_1);
```

## __m256i __lasx_xw2x_u_lo_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_xw2x_u_lo_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xw2x.u.lo.b
Builtin: __builtin_lasx_xw2x_u_lo_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4197
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xw2x.u.lo.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..15:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.byte[src_index], 2 * 8);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xw2x_u_lo_b((v32i8)_1);
```

## __m256i __lasx_xw2x_u_lo_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_xw2x_u_lo_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xw2x.u.lo.h
Builtin: __builtin_lasx_xw2x_u_lo_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4204
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xw2x.u.lo.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..7:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.half[src_index], 2 * 16);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xw2x_u_lo_h((v16i16)_1);
```

## __m256i __lasx_xw2x_u_lo_w (__m256i _1)

### Synopsis

```c
__m256i __lasx_xw2x_u_lo_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xw2x.u.lo.w
Builtin: __builtin_lasx_xw2x_u_lo_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4211
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xw2x.u.lo.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
for i in 0..3:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.word[src_index], 2 * 32);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xw2x_u_lo_w((v8i32)_1);
```

## __m256i __lasx_xw4x_s_lo_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_xw4x_s_lo_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xw4x.s.lo.b
Builtin: __builtin_lasx_xw4x_s_lo_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4260
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xw4x.s.lo.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..7:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.byte[src_index], 4 * 8);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xw4x_s_lo_b((v32i8)_1);
```

## __m256i __lasx_xw4x_s_lo_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_xw4x_s_lo_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xw4x.s.lo.h
Builtin: __builtin_lasx_xw4x_s_lo_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4267
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xw4x.s.lo.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..3:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.half[src_index], 4 * 16);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xw4x_s_lo_h((v16i16)_1);
```

## __m256i __lasx_xw4x_u_lo_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_xw4x_u_lo_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xw4x.u.lo.b
Builtin: __builtin_lasx_xw4x_u_lo_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4218
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xw4x.u.lo.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..7:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.byte[src_index], 4 * 8);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xw4x_u_lo_b((v32i8)_1);
```

## __m256i __lasx_xw4x_u_lo_h (__m256i _1)

### Synopsis

```c
__m256i __lasx_xw4x_u_lo_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xw4x.u.lo.h
Builtin: __builtin_lasx_xw4x_u_lo_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4225
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xw4x.u.lo.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
for i in 0..3:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.half[src_index], 4 * 16);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xw4x_u_lo_h((v16i16)_1);
```

## __m256i __lasx_xw8x_s_lo_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_xw8x_s_lo_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xw8x.s.lo.b
Builtin: __builtin_lasx_xw8x_s_lo_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4274
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xw8x.s.lo.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..3:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.byte[src_index], 8 * 8);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xw8x_s_lo_b((v32i8)_1);
```

## __m256i __lasx_xw8x_u_lo_b (__m256i _1)

### Synopsis

```c
__m256i __lasx_xw8x_u_lo_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xw8x.u.lo.b
Builtin: __builtin_lasx_xw8x_u_lo_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4232
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xw8x.u.lo.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
for i in 0..3:
  src_index = i;
  dst.wide_lane[i] = sign_or_zero_extend(a.byte[src_index], 8 * 8);
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_xw8x_u_lo_b((v32i8)_1);
```

