# Permutation

Generated from `include/msa.h`. This page contains 72 intrinsics.

## i32 __msa_copy_s_b (v16i8 a, int imm0_15)

### Synopsis

```c
i32 __msa_copy_s_b (v16i8 a, int imm0_15)
#include <msa.h>
Instruction: copy.s.b
Builtin: __builtin_msa_copy_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:437
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for copy.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_15;
return sign_or_zero_extend(a.byte[imm]);
```

### Header Mapping

```c
#define __msa_copy_s_b __builtin_msa_copy_s_b
```

## i64 __msa_copy_s_d (v2i64 a, int imm0_1)

### Synopsis

```c
i64 __msa_copy_s_d (v2i64 a, int imm0_1)
#include <msa.h>
Instruction: copy.s.d
Builtin: __builtin_msa_copy_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:440
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for copy.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_1;
return sign_or_zero_extend(a.dword[imm]);
```

### Header Mapping

```c
#define __msa_copy_s_d __builtin_msa_copy_s_d
```

## i32 __msa_copy_s_h (v8i16 a, int imm0_7)

### Synopsis

```c
i32 __msa_copy_s_h (v8i16 a, int imm0_7)
#include <msa.h>
Instruction: copy.s.h
Builtin: __builtin_msa_copy_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:438
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for copy.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_7;
return sign_or_zero_extend(a.half[imm]);
```

### Header Mapping

```c
#define __msa_copy_s_h __builtin_msa_copy_s_h
```

## i32 __msa_copy_s_w (v4i32 a, int imm0_3)

### Synopsis

```c
i32 __msa_copy_s_w (v4i32 a, int imm0_3)
#include <msa.h>
Instruction: copy.s.w
Builtin: __builtin_msa_copy_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:439
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for copy.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_3;
return sign_or_zero_extend(a.word[imm]);
```

### Header Mapping

```c
#define __msa_copy_s_w __builtin_msa_copy_s_w
```

## u32 __msa_copy_u_b (v16i8 a, int imm0_15)

### Synopsis

```c
u32 __msa_copy_u_b (v16i8 a, int imm0_15)
#include <msa.h>
Instruction: copy.u.b
Builtin: __builtin_msa_copy_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:441
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for copy.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_15;
return sign_or_zero_extend(a.byte[imm]);
```

### Header Mapping

```c
#define __msa_copy_u_b __builtin_msa_copy_u_b
```

## u64 __msa_copy_u_d (v2i64 a, int imm0_1)

### Synopsis

```c
u64 __msa_copy_u_d (v2i64 a, int imm0_1)
#include <msa.h>
Instruction: copy.u.d
Builtin: __builtin_msa_copy_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:444
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for copy.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_1;
return sign_or_zero_extend(a.dword[imm]);
```

### Header Mapping

```c
#define __msa_copy_u_d __builtin_msa_copy_u_d
```

## u32 __msa_copy_u_h (v8i16 a, int imm0_7)

### Synopsis

```c
u32 __msa_copy_u_h (v8i16 a, int imm0_7)
#include <msa.h>
Instruction: copy.u.h
Builtin: __builtin_msa_copy_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:442
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for copy.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_7;
return sign_or_zero_extend(a.half[imm]);
```

### Header Mapping

```c
#define __msa_copy_u_h __builtin_msa_copy_u_h
```

## u32 __msa_copy_u_w (v4i32 a, int imm0_3)

### Synopsis

```c
u32 __msa_copy_u_w (v4i32 a, int imm0_3)
#include <msa.h>
Instruction: copy.u.w
Builtin: __builtin_msa_copy_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:443
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for copy.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_3;
return sign_or_zero_extend(a.word[imm]);
```

### Header Mapping

```c
#define __msa_copy_u_w __builtin_msa_copy_u_w
```

## v16i8 __msa_fill_b (i32 imm)

### Synopsis

```c
v16i8 __msa_fill_b (i32 imm)
#include <msa.h>
Instruction: fill.b
Builtin: __builtin_msa_fill_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:421
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fill.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = truncate_or_extend(imm, 8);
```

### Header Mapping

```c
#define __msa_fill_b __builtin_msa_fill_b
```

## v2i64 __msa_fill_d (i64 imm)

### Synopsis

```c
v2i64 __msa_fill_d (i64 imm)
#include <msa.h>
Instruction: fill.d
Builtin: __builtin_msa_fill_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:424
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fill.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = truncate_or_extend(imm, 64);
```

### Header Mapping

```c
#define __msa_fill_d __builtin_msa_fill_d
```

## v8i16 __msa_fill_h (i32 imm)

### Synopsis

```c
v8i16 __msa_fill_h (i32 imm)
#include <msa.h>
Instruction: fill.h
Builtin: __builtin_msa_fill_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:422
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fill.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = truncate_or_extend(imm, 16);
```

### Header Mapping

```c
#define __msa_fill_h __builtin_msa_fill_h
```

## v4i32 __msa_fill_w (i32 imm)

### Synopsis

```c
v4i32 __msa_fill_w (i32 imm)
#include <msa.h>
Instruction: fill.w
Builtin: __builtin_msa_fill_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:423
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for fill.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = truncate_or_extend(imm, 32);
```

### Header Mapping

```c
#define __msa_fill_w __builtin_msa_fill_w
```

## v16i8 __msa_ilvev_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_ilvev_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: ilvev.b
Builtin: __builtin_msa_ilvev_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:390
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvev.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
dst = interleave_or_pack(even byte lanes from a and b);
```

### Header Mapping

```c
#define __msa_ilvev_b __builtin_msa_ilvev_b
```

## v2i64 __msa_ilvev_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_ilvev_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: ilvev.d
Builtin: __builtin_msa_ilvev_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:393
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvev.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
dst = interleave_or_pack(even dword lanes from a and b);
```

### Header Mapping

```c
#define __msa_ilvev_d __builtin_msa_ilvev_d
```

## v8i16 __msa_ilvev_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_ilvev_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: ilvev.h
Builtin: __builtin_msa_ilvev_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:391
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvev.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
dst = interleave_or_pack(even half lanes from a and b);
```

### Header Mapping

```c
#define __msa_ilvev_h __builtin_msa_ilvev_h
```

## v4i32 __msa_ilvev_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_ilvev_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: ilvev.w
Builtin: __builtin_msa_ilvev_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:392
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvev.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
dst = interleave_or_pack(even word lanes from a and b);
```

### Header Mapping

```c
#define __msa_ilvev_w __builtin_msa_ilvev_w
```

## v16i8 __msa_ilvl_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_ilvl_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: ilvl.b
Builtin: __builtin_msa_ilvl_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:382
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvl.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
dst = interleave_lower_byte_lanes(a, b);
```

### Header Mapping

```c
#define __msa_ilvl_b __builtin_msa_ilvl_b
```

## v2i64 __msa_ilvl_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_ilvl_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: ilvl.d
Builtin: __builtin_msa_ilvl_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:385
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvl.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
dst = interleave_lower_dword_lanes(a, b);
```

### Header Mapping

```c
#define __msa_ilvl_d __builtin_msa_ilvl_d
```

## v8i16 __msa_ilvl_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_ilvl_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: ilvl.h
Builtin: __builtin_msa_ilvl_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:383
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvl.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
dst = interleave_lower_half_lanes(a, b);
```

### Header Mapping

```c
#define __msa_ilvl_h __builtin_msa_ilvl_h
```

## v4i32 __msa_ilvl_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_ilvl_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: ilvl.w
Builtin: __builtin_msa_ilvl_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:384
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvl.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
dst = interleave_lower_word_lanes(a, b);
```

### Header Mapping

```c
#define __msa_ilvl_w __builtin_msa_ilvl_w
```

## v16i8 __msa_ilvod_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_ilvod_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: ilvod.b
Builtin: __builtin_msa_ilvod_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:394
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvod.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
dst = interleave_or_pack(odd byte lanes from a and b);
```

### Header Mapping

```c
#define __msa_ilvod_b __builtin_msa_ilvod_b
```

## v2i64 __msa_ilvod_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_ilvod_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: ilvod.d
Builtin: __builtin_msa_ilvod_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:397
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvod.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
dst = interleave_or_pack(odd dword lanes from a and b);
```

### Header Mapping

```c
#define __msa_ilvod_d __builtin_msa_ilvod_d
```

## v8i16 __msa_ilvod_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_ilvod_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: ilvod.h
Builtin: __builtin_msa_ilvod_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:395
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvod.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
dst = interleave_or_pack(odd half lanes from a and b);
```

### Header Mapping

```c
#define __msa_ilvod_h __builtin_msa_ilvod_h
```

## v4i32 __msa_ilvod_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_ilvod_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: ilvod.w
Builtin: __builtin_msa_ilvod_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:396
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvod.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
dst = interleave_or_pack(odd word lanes from a and b);
```

### Header Mapping

```c
#define __msa_ilvod_w __builtin_msa_ilvod_w
```

## v16i8 __msa_ilvr_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_ilvr_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: ilvr.b
Builtin: __builtin_msa_ilvr_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:386
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvr.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
dst = interleave_upper_byte_lanes(a, b);
```

### Header Mapping

```c
#define __msa_ilvr_b __builtin_msa_ilvr_b
```

## v2i64 __msa_ilvr_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_ilvr_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: ilvr.d
Builtin: __builtin_msa_ilvr_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:389
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvr.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
dst = interleave_upper_dword_lanes(a, b);
```

### Header Mapping

```c
#define __msa_ilvr_d __builtin_msa_ilvr_d
```

## v8i16 __msa_ilvr_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_ilvr_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: ilvr.h
Builtin: __builtin_msa_ilvr_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:387
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvr.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
dst = interleave_upper_half_lanes(a, b);
```

### Header Mapping

```c
#define __msa_ilvr_h __builtin_msa_ilvr_h
```

## v4i32 __msa_ilvr_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_ilvr_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: ilvr.w
Builtin: __builtin_msa_ilvr_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:388
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ilvr.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
dst = interleave_upper_word_lanes(a, b);
```

### Header Mapping

```c
#define __msa_ilvr_w __builtin_msa_ilvr_w
```

## v16i8 __msa_insert_b (v16i8 a, int imm0_15, i32 imm)

### Synopsis

```c
v16i8 __msa_insert_b (v16i8 a, int imm0_15, i32 imm)
#include <msa.h>
Instruction: insert.b
Builtin: __builtin_msa_insert_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:445
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for insert.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_15;
dst = a;
dst.byte[destination_index_from_imm] = value;
```

### Header Mapping

```c
#define __msa_insert_b __builtin_msa_insert_b
```

## v2i64 __msa_insert_d (v2i64 a, int imm0_1, i64 imm)

### Synopsis

```c
v2i64 __msa_insert_d (v2i64 a, int imm0_1, i64 imm)
#include <msa.h>
Instruction: insert.d
Builtin: __builtin_msa_insert_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:448
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for insert.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_1;
dst = a;
dst.dword[destination_index_from_imm] = value;
```

### Header Mapping

```c
#define __msa_insert_d __builtin_msa_insert_d
```

## v8i16 __msa_insert_h (v8i16 a, int imm0_7, i32 imm)

### Synopsis

```c
v8i16 __msa_insert_h (v8i16 a, int imm0_7, i32 imm)
#include <msa.h>
Instruction: insert.h
Builtin: __builtin_msa_insert_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:446
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for insert.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_7;
dst = a;
dst.half[destination_index_from_imm] = value;
```

### Header Mapping

```c
#define __msa_insert_h __builtin_msa_insert_h
```

## v4i32 __msa_insert_w (v4i32 a, int imm0_3, i32 imm)

### Synopsis

```c
v4i32 __msa_insert_w (v4i32 a, int imm0_3, i32 imm)
#include <msa.h>
Instruction: insert.w
Builtin: __builtin_msa_insert_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:447
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for insert.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_3;
dst = a;
dst.word[destination_index_from_imm] = value;
```

### Header Mapping

```c
#define __msa_insert_w __builtin_msa_insert_w
```

## v16i8 __msa_insve_b (v16i8 a, int imm0_15, v16i8 b)

### Synopsis

```c
v16i8 __msa_insve_b (v16i8 a, int imm0_15, v16i8 b)
#include <msa.h>
Instruction: insve.b
Builtin: __builtin_msa_insve_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:449
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for insve.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_15;
dst = a;
dst.byte[destination_index_from_imm] = b.byte[source_index_from_imm];
```

### Header Mapping

```c
#define __msa_insve_b __builtin_msa_insve_b
```

## v2i64 __msa_insve_d (v2i64 a, int imm0_1, v2i64 b)

### Synopsis

```c
v2i64 __msa_insve_d (v2i64 a, int imm0_1, v2i64 b)
#include <msa.h>
Instruction: insve.d
Builtin: __builtin_msa_insve_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:452
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for insve.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_1;
dst = a;
dst.dword[destination_index_from_imm] = b.dword[source_index_from_imm];
```

### Header Mapping

```c
#define __msa_insve_d __builtin_msa_insve_d
```

## v8i16 __msa_insve_h (v8i16 a, int imm0_7, v8i16 b)

### Synopsis

```c
v8i16 __msa_insve_h (v8i16 a, int imm0_7, v8i16 b)
#include <msa.h>
Instruction: insve.h
Builtin: __builtin_msa_insve_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:450
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for insve.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_7;
dst = a;
dst.half[destination_index_from_imm] = b.half[source_index_from_imm];
```

### Header Mapping

```c
#define __msa_insve_h __builtin_msa_insve_h
```

## v4i32 __msa_insve_w (v4i32 a, int imm0_3, v4i32 b)

### Synopsis

```c
v4i32 __msa_insve_w (v4i32 a, int imm0_3, v4i32 b)
#include <msa.h>
Instruction: insve.w
Builtin: __builtin_msa_insve_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:451
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for insve.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_3;
dst = a;
dst.word[destination_index_from_imm] = b.word[source_index_from_imm];
```

### Header Mapping

```c
#define __msa_insve_w __builtin_msa_insve_w
```

## v16i8 __msa_ldi_b (int imm_n512_511)

### Synopsis

```c
v16i8 __msa_ldi_b (int imm_n512_511)
#include <msa.h>
Instruction: ldi.b
Builtin: __builtin_msa_ldi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:461
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ldi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm_n512_511;
value = sign_extend_or_zero_extend(imm, element_size_from_mnemonic);
for i in 0..15:
  dst.byte[i] = value;
```

### Header Mapping

```c
#define __msa_ldi_b __builtin_msa_ldi_b
```

## v2i64 __msa_ldi_d (int imm_n512_511)

### Synopsis

```c
v2i64 __msa_ldi_d (int imm_n512_511)
#include <msa.h>
Instruction: ldi.d
Builtin: __builtin_msa_ldi_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:464
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ldi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm_n512_511;
value = sign_extend_or_zero_extend(imm, element_size_from_mnemonic);
for i in 0..1:
  dst.dword[i] = value;
```

### Header Mapping

```c
#define __msa_ldi_d __builtin_msa_ldi_d
```

## v8i16 __msa_ldi_h (int imm_n512_511)

### Synopsis

```c
v8i16 __msa_ldi_h (int imm_n512_511)
#include <msa.h>
Instruction: ldi.h
Builtin: __builtin_msa_ldi_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:462
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ldi.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm_n512_511;
value = sign_extend_or_zero_extend(imm, element_size_from_mnemonic);
for i in 0..7:
  dst.half[i] = value;
```

### Header Mapping

```c
#define __msa_ldi_h __builtin_msa_ldi_h
```

## v4i32 __msa_ldi_w (int imm_n512_511)

### Synopsis

```c
v4i32 __msa_ldi_w (int imm_n512_511)
#include <msa.h>
Instruction: ldi.w
Builtin: __builtin_msa_ldi_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:463
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ldi.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm_n512_511;
value = sign_extend_or_zero_extend(imm, element_size_from_mnemonic);
for i in 0..3:
  dst.word[i] = value;
```

### Header Mapping

```c
#define __msa_ldi_w __builtin_msa_ldi_w
```

## v16i8 __msa_move_v (v16i8 a)

### Synopsis

```c
v16i8 __msa_move_v (v16i8 a)
#include <msa.h>
Instruction: move.v
Builtin: __builtin_msa_move_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:580
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for move.v.
// Operand order follows the intrinsic arguments in the header.
dst = a;
```

### Header Mapping

```c
#define __msa_move_v __builtin_msa_move_v
```

## v16i8 __msa_pckev_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_pckev_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: pckev.b
Builtin: __builtin_msa_pckev_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:374
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pckev.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
dst = interleave_or_pack(even byte lanes from a and b);
```

### Header Mapping

```c
#define __msa_pckev_b __builtin_msa_pckev_b
```

## v2i64 __msa_pckev_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_pckev_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: pckev.d
Builtin: __builtin_msa_pckev_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:377
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pckev.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
dst = interleave_or_pack(even dword lanes from a and b);
```

### Header Mapping

```c
#define __msa_pckev_d __builtin_msa_pckev_d
```

## v8i16 __msa_pckev_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_pckev_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: pckev.h
Builtin: __builtin_msa_pckev_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:375
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pckev.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
dst = interleave_or_pack(even half lanes from a and b);
```

### Header Mapping

```c
#define __msa_pckev_h __builtin_msa_pckev_h
```

## v4i32 __msa_pckev_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_pckev_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: pckev.w
Builtin: __builtin_msa_pckev_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:376
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pckev.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
dst = interleave_or_pack(even word lanes from a and b);
```

### Header Mapping

```c
#define __msa_pckev_w __builtin_msa_pckev_w
```

## v16i8 __msa_pckod_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_pckod_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: pckod.b
Builtin: __builtin_msa_pckod_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:378
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pckod.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
dst = interleave_or_pack(odd byte lanes from a and b);
```

### Header Mapping

```c
#define __msa_pckod_b __builtin_msa_pckod_b
```

## v2i64 __msa_pckod_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_pckod_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: pckod.d
Builtin: __builtin_msa_pckod_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:381
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pckod.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
dst = interleave_or_pack(odd dword lanes from a and b);
```

### Header Mapping

```c
#define __msa_pckod_d __builtin_msa_pckod_d
```

## v8i16 __msa_pckod_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_pckod_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: pckod.h
Builtin: __builtin_msa_pckod_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:379
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pckod.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
dst = interleave_or_pack(odd half lanes from a and b);
```

### Header Mapping

```c
#define __msa_pckod_h __builtin_msa_pckod_h
```

## v4i32 __msa_pckod_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_pckod_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: pckod.w
Builtin: __builtin_msa_pckod_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:380
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pckod.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
dst = interleave_or_pack(odd word lanes from a and b);
```

### Header Mapping

```c
#define __msa_pckod_w __builtin_msa_pckod_w
```

## v16i8 __msa_shf_b (v16i8 a, int imm0_255)

### Synopsis

```c
v16i8 __msa_shf_b (v16i8 a, int imm0_255)
#include <msa.h>
Instruction: shf.b
Builtin: __builtin_msa_shf_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:416
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for shf.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_255;
for i in 0..15:
  control = shuffle_control(imm_or_vector, i);
  dst.byte[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
#define __msa_shf_b __builtin_msa_shf_b
```

## v8i16 __msa_shf_h (v8i16 a, int imm0_255)

### Synopsis

```c
v8i16 __msa_shf_h (v8i16 a, int imm0_255)
#include <msa.h>
Instruction: shf.h
Builtin: __builtin_msa_shf_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:417
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for shf.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_255;
for i in 0..7:
  control = shuffle_control(imm_or_vector, i);
  dst.half[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
#define __msa_shf_h __builtin_msa_shf_h
```

## v4i32 __msa_shf_w (v4i32 a, int imm0_255)

### Synopsis

```c
v4i32 __msa_shf_w (v4i32 a, int imm0_255)
#include <msa.h>
Instruction: shf.w
Builtin: __builtin_msa_shf_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:418
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for shf.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_255;
for i in 0..3:
  control = shuffle_control(imm_or_vector, i);
  dst.word[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
#define __msa_shf_w __builtin_msa_shf_w
```

## v16i8 __msa_sld_b (v16i8 a, v16i8 b, i32 imm)

### Synopsis

```c
v16i8 __msa_sld_b (v16i8 a, v16i8 b, i32 imm)
#include <msa.h>
Instruction: sld.b
Builtin: __builtin_msa_sld_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:358
```

### Description

Slide elements from the concatenation of two source vectors into 16 x 8-bit byte lanes using an immediate offset. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sld.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
combined = concatenate(b, a);
for i in 0..15:
  dst.byte[i] = combined.byte[i + imm];
```

### Header Mapping

```c
#define __msa_sld_b __builtin_msa_sld_b
```

## v2i64 __msa_sld_d (v2i64 a, v2i64 b, i32 imm)

### Synopsis

```c
v2i64 __msa_sld_d (v2i64 a, v2i64 b, i32 imm)
#include <msa.h>
Instruction: sld.d
Builtin: __builtin_msa_sld_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:361
```

### Description

Slide elements from the concatenation of two source vectors into 2 x 64-bit dword lanes using an immediate offset. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sld.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
combined = concatenate(b, a);
for i in 0..1:
  dst.dword[i] = combined.dword[i + imm];
```

### Header Mapping

```c
#define __msa_sld_d __builtin_msa_sld_d
```

## v8i16 __msa_sld_h (v8i16 a, v8i16 b, i32 imm)

### Synopsis

```c
v8i16 __msa_sld_h (v8i16 a, v8i16 b, i32 imm)
#include <msa.h>
Instruction: sld.h
Builtin: __builtin_msa_sld_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:359
```

### Description

Slide elements from the concatenation of two source vectors into 8 x 16-bit half lanes using an immediate offset. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sld.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
combined = concatenate(b, a);
for i in 0..7:
  dst.half[i] = combined.half[i + imm];
```

### Header Mapping

```c
#define __msa_sld_h __builtin_msa_sld_h
```

## v4i32 __msa_sld_w (v4i32 a, v4i32 b, i32 imm)

### Synopsis

```c
v4i32 __msa_sld_w (v4i32 a, v4i32 b, i32 imm)
#include <msa.h>
Instruction: sld.w
Builtin: __builtin_msa_sld_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:360
```

### Description

Slide elements from the concatenation of two source vectors into 4 x 32-bit word lanes using an immediate offset. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sld.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
combined = concatenate(b, a);
for i in 0..3:
  dst.word[i] = combined.word[i + imm];
```

### Header Mapping

```c
#define __msa_sld_w __builtin_msa_sld_w
```

## v16i8 __msa_sldi_b (v16i8 a, v16i8 b, int imm0_15)

### Synopsis

```c
v16i8 __msa_sldi_b (v16i8 a, v16i8 b, int imm0_15)
#include <msa.h>
Instruction: sldi.b
Builtin: __builtin_msa_sldi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:362
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sldi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_15;
combined = concatenate(b, a);
for i in 0..15:
  dst.byte[i] = combined.byte[i + imm];
```

### Header Mapping

```c
#define __msa_sldi_b __builtin_msa_sldi_b
```

## v2i64 __msa_sldi_d (v2i64 a, v2i64 b, int imm0_1)

### Synopsis

```c
v2i64 __msa_sldi_d (v2i64 a, v2i64 b, int imm0_1)
#include <msa.h>
Instruction: sldi.d
Builtin: __builtin_msa_sldi_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:365
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sldi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_1;
combined = concatenate(b, a);
for i in 0..1:
  dst.dword[i] = combined.dword[i + imm];
```

### Header Mapping

```c
#define __msa_sldi_d __builtin_msa_sldi_d
```

## v8i16 __msa_sldi_h (v8i16 a, v8i16 b, int imm0_7)

### Synopsis

```c
v8i16 __msa_sldi_h (v8i16 a, v8i16 b, int imm0_7)
#include <msa.h>
Instruction: sldi.h
Builtin: __builtin_msa_sldi_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:363
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sldi.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_7;
combined = concatenate(b, a);
for i in 0..7:
  dst.half[i] = combined.half[i + imm];
```

### Header Mapping

```c
#define __msa_sldi_h __builtin_msa_sldi_h
```

## v4i32 __msa_sldi_w (v4i32 a, v4i32 b, int imm0_3)

### Synopsis

```c
v4i32 __msa_sldi_w (v4i32 a, v4i32 b, int imm0_3)
#include <msa.h>
Instruction: sldi.w
Builtin: __builtin_msa_sldi_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:364
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sldi.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_3;
combined = concatenate(b, a);
for i in 0..3:
  dst.word[i] = combined.word[i + imm];
```

### Header Mapping

```c
#define __msa_sldi_w __builtin_msa_sldi_w
```

## v16i8 __msa_splat_b (v16i8 a, i32 imm)

### Synopsis

```c
v16i8 __msa_splat_b (v16i8 a, i32 imm)
#include <msa.h>
Instruction: splat.b
Builtin: __builtin_msa_splat_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:366
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for splat.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
selected = a.byte[imm_or_zero];
for i in 0..15:
  dst.byte[i] = selected;
```

### Header Mapping

```c
#define __msa_splat_b __builtin_msa_splat_b
```

## v2i64 __msa_splat_d (v2i64 a, i32 imm)

### Synopsis

```c
v2i64 __msa_splat_d (v2i64 a, i32 imm)
#include <msa.h>
Instruction: splat.d
Builtin: __builtin_msa_splat_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:369
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for splat.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
selected = a.dword[imm_or_zero];
for i in 0..1:
  dst.dword[i] = selected;
```

### Header Mapping

```c
#define __msa_splat_d __builtin_msa_splat_d
```

## v8i16 __msa_splat_h (v8i16 a, i32 imm)

### Synopsis

```c
v8i16 __msa_splat_h (v8i16 a, i32 imm)
#include <msa.h>
Instruction: splat.h
Builtin: __builtin_msa_splat_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:367
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for splat.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
selected = a.half[imm_or_zero];
for i in 0..7:
  dst.half[i] = selected;
```

### Header Mapping

```c
#define __msa_splat_h __builtin_msa_splat_h
```

## v4i32 __msa_splat_w (v4i32 a, i32 imm)

### Synopsis

```c
v4i32 __msa_splat_w (v4i32 a, i32 imm)
#include <msa.h>
Instruction: splat.w
Builtin: __builtin_msa_splat_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:368
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for splat.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
selected = a.word[imm_or_zero];
for i in 0..3:
  dst.word[i] = selected;
```

### Header Mapping

```c
#define __msa_splat_w __builtin_msa_splat_w
```

## v16i8 __msa_splati_b (v16i8 a, int imm0_15)

### Synopsis

```c
v16i8 __msa_splati_b (v16i8 a, int imm0_15)
#include <msa.h>
Instruction: splati.b
Builtin: __builtin_msa_splati_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:370
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for splati.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_15;
selected = a.byte[imm_or_zero];
for i in 0..15:
  dst.byte[i] = selected;
```

### Header Mapping

```c
#define __msa_splati_b __builtin_msa_splati_b
```

## v2i64 __msa_splati_d (v2i64 a, int imm0_1)

### Synopsis

```c
v2i64 __msa_splati_d (v2i64 a, int imm0_1)
#include <msa.h>
Instruction: splati.d
Builtin: __builtin_msa_splati_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:373
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for splati.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_1;
selected = a.dword[imm_or_zero];
for i in 0..1:
  dst.dword[i] = selected;
```

### Header Mapping

```c
#define __msa_splati_d __builtin_msa_splati_d
```

## v8i16 __msa_splati_h (v8i16 a, int imm0_7)

### Synopsis

```c
v8i16 __msa_splati_h (v8i16 a, int imm0_7)
#include <msa.h>
Instruction: splati.h
Builtin: __builtin_msa_splati_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:371
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for splati.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_7;
selected = a.half[imm_or_zero];
for i in 0..7:
  dst.half[i] = selected;
```

### Header Mapping

```c
#define __msa_splati_h __builtin_msa_splati_h
```

## v4i32 __msa_splati_w (v4i32 a, int imm0_3)

### Synopsis

```c
v4i32 __msa_splati_w (v4i32 a, int imm0_3)
#include <msa.h>
Instruction: splati.w
Builtin: __builtin_msa_splati_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:372
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for splati.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_3;
selected = a.word[imm_or_zero];
for i in 0..3:
  dst.word[i] = selected;
```

### Header Mapping

```c
#define __msa_splati_w __builtin_msa_splati_w
```

## v16i8 __msa_vshf_b (v16i8 a, v16i8 b, v16i8 c)

### Synopsis

```c
v16i8 __msa_vshf_b (v16i8 a, v16i8 b, v16i8 c)
#include <msa.h>
Instruction: vshf.b
Builtin: __builtin_msa_vshf_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:398
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vshf.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  control = shuffle_control(imm_or_vector, i);
  dst.byte[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
#define __msa_vshf_b __builtin_msa_vshf_b
```

## v2i64 __msa_vshf_d (v2i64 a, v2i64 b, v2i64 c)

### Synopsis

```c
v2i64 __msa_vshf_d (v2i64 a, v2i64 b, v2i64 c)
#include <msa.h>
Instruction: vshf.d
Builtin: __builtin_msa_vshf_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:401
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vshf.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  control = shuffle_control(imm_or_vector, i);
  dst.dword[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
#define __msa_vshf_d __builtin_msa_vshf_d
```

## v8i16 __msa_vshf_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_vshf_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: vshf.h
Builtin: __builtin_msa_vshf_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:399
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vshf.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  control = shuffle_control(imm_or_vector, i);
  dst.half[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
#define __msa_vshf_h __builtin_msa_vshf_h
```

## v4i32 __msa_vshf_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_vshf_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: vshf.w
Builtin: __builtin_msa_vshf_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:400
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vshf.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  control = shuffle_control(imm_or_vector, i);
  dst.word[i] = select_lane_from_sources(a, b, control);
```

### Header Mapping

```c
#define __msa_vshf_w __builtin_msa_vshf_w
```

