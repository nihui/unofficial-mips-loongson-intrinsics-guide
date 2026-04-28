# Permutation

Generated from `include/msa2.h`. This page contains 287 intrinsics.

## __m128i __msa2_n2x_rnd_sx_nc_b (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_nc_b (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.sx.nc.b
Builtin: __builtin_msa2_n2x_rnd_sx_nc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:260
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.sx.nc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = m;
for i in 0..15:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.byte[i] = truncate(shifted, 8);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_nc_b(a, m) (__m128i) __builtin_msa2_n2x_rnd_sx_nc_b ((v16i8) a, m);
```

## __m128i __msa2_n2x_rnd_sx_nc_d (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_nc_d (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.sx.nc.d
Builtin: __builtin_msa2_n2x_rnd_sx_nc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:269
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.sx.nc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = m;
for i in 0..1:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.dword[i] = truncate(shifted, 64);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_nc_d(a, m) (__m128i) __builtin_msa2_n2x_rnd_sx_nc_d ((v2i64) a, m);
```

## __m128i __msa2_n2x_rnd_sx_nc_h (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_nc_h (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.sx.nc.h
Builtin: __builtin_msa2_n2x_rnd_sx_nc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:263
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.sx.nc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = m;
for i in 0..7:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.half[i] = truncate(shifted, 16);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_nc_h(a, m) (__m128i) __builtin_msa2_n2x_rnd_sx_nc_h ((v8i16) a, m);
```

## __m128i __msa2_n2x_rnd_sx_nc_w (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_nc_w (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.sx.nc.w
Builtin: __builtin_msa2_n2x_rnd_sx_nc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:266
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.sx.nc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = m;
for i in 0..3:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.word[i] = truncate(shifted, 32);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_nc_w(a, m) (__m128i) __builtin_msa2_n2x_rnd_sx_nc_w ((v4i32) a, m);
```

## __m128i __msa2_n2x_rnd_sx_sc_b (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_sc_b (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.sx.sc.b
Builtin: __builtin_msa2_n2x_rnd_sx_sc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:236
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.sx.sc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = m;
for i in 0..15:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.byte[i] = signed_saturate(shifted, 8);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_sc_b(a, m) (__m128i) __builtin_msa2_n2x_rnd_sx_sc_b ((v16i8) a, m);
```

## __m128i __msa2_n2x_rnd_sx_sc_d (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_sc_d (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.sx.sc.d
Builtin: __builtin_msa2_n2x_rnd_sx_sc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:245
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.sx.sc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = m;
for i in 0..1:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.dword[i] = signed_saturate(shifted, 64);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_sc_d(a, m) (__m128i) __builtin_msa2_n2x_rnd_sx_sc_d ((v2i64) a, m);
```

## __m128i __msa2_n2x_rnd_sx_sc_h (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_sc_h (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.sx.sc.h
Builtin: __builtin_msa2_n2x_rnd_sx_sc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:239
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.sx.sc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = m;
for i in 0..7:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.half[i] = signed_saturate(shifted, 16);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_sc_h(a, m) (__m128i) __builtin_msa2_n2x_rnd_sx_sc_h ((v8i16) a, m);
```

## __m128i __msa2_n2x_rnd_sx_sc_w (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_sc_w (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.sx.sc.w
Builtin: __builtin_msa2_n2x_rnd_sx_sc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:242
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.sx.sc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = m;
for i in 0..3:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.word[i] = signed_saturate(shifted, 32);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_sc_w(a, m) (__m128i) __builtin_msa2_n2x_rnd_sx_sc_w ((v4i32) a, m);
```

## __m128i __msa2_n2x_rnd_sx_uc_b (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_uc_b (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.sx.uc.b
Builtin: __builtin_msa2_n2x_rnd_sx_uc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:248
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.sx.uc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = m;
for i in 0..15:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.byte[i] = unsigned_saturate(shifted, 8);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_uc_b(a, m) (__m128i) __builtin_msa2_n2x_rnd_sx_uc_b ((v16i8) a, m);
```

## __m128i __msa2_n2x_rnd_sx_uc_d (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_uc_d (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.sx.uc.d
Builtin: __builtin_msa2_n2x_rnd_sx_uc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:257
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.sx.uc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = m;
for i in 0..1:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.dword[i] = unsigned_saturate(shifted, 64);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_uc_d(a, m) (__m128i) __builtin_msa2_n2x_rnd_sx_uc_d ((v2i64) a, m);
```

## __m128i __msa2_n2x_rnd_sx_uc_h (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_uc_h (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.sx.uc.h
Builtin: __builtin_msa2_n2x_rnd_sx_uc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:251
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.sx.uc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = m;
for i in 0..7:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.half[i] = unsigned_saturate(shifted, 16);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_uc_h(a, m) (__m128i) __builtin_msa2_n2x_rnd_sx_uc_h ((v8i16) a, m);
```

## __m128i __msa2_n2x_rnd_sx_uc_w (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_sx_uc_w (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.sx.uc.w
Builtin: __builtin_msa2_n2x_rnd_sx_uc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:254
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.sx.uc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = m;
for i in 0..3:
  shifted = rounding_shift(signed(a.wide_lane[i]), imm);
  dst.word[i] = unsigned_saturate(shifted, 32);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_sx_uc_w(a, m) (__m128i) __builtin_msa2_n2x_rnd_sx_uc_w ((v4i32) a, m);
```

## __m128i __msa2_n2x_rnd_ux_nc_b (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_nc_b (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.ux.nc.b
Builtin: __builtin_msa2_n2x_rnd_ux_nc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:296
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.ux.nc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = m;
for i in 0..15:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.byte[i] = truncate(shifted, 8);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_nc_b(a, m) (__m128i) __builtin_msa2_n2x_rnd_ux_nc_b ((v16i8) a, m);
```

## __m128i __msa2_n2x_rnd_ux_nc_d (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_nc_d (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.ux.nc.d
Builtin: __builtin_msa2_n2x_rnd_ux_nc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:305
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.ux.nc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = m;
for i in 0..1:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.dword[i] = truncate(shifted, 64);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_nc_d(a, m) (__m128i) __builtin_msa2_n2x_rnd_ux_nc_d ((v2i64) a, m);
```

## __m128i __msa2_n2x_rnd_ux_nc_h (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_nc_h (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.ux.nc.h
Builtin: __builtin_msa2_n2x_rnd_ux_nc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:299
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.ux.nc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = m;
for i in 0..7:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.half[i] = truncate(shifted, 16);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_nc_h(a, m) (__m128i) __builtin_msa2_n2x_rnd_ux_nc_h ((v8i16) a, m);
```

## __m128i __msa2_n2x_rnd_ux_nc_w (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_nc_w (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.ux.nc.w
Builtin: __builtin_msa2_n2x_rnd_ux_nc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:302
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.ux.nc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = m;
for i in 0..3:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.word[i] = truncate(shifted, 32);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_nc_w(a, m) (__m128i) __builtin_msa2_n2x_rnd_ux_nc_w ((v4i32) a, m);
```

## __m128i __msa2_n2x_rnd_ux_sc_b (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_sc_b (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.ux.sc.b
Builtin: __builtin_msa2_n2x_rnd_ux_sc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:272
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.ux.sc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = m;
for i in 0..15:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.byte[i] = signed_saturate(shifted, 8);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_sc_b(a, m) (__m128i) __builtin_msa2_n2x_rnd_ux_sc_b ((v16i8) a, m);
```

## __m128i __msa2_n2x_rnd_ux_sc_d (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_sc_d (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.ux.sc.d
Builtin: __builtin_msa2_n2x_rnd_ux_sc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:281
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.ux.sc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = m;
for i in 0..1:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.dword[i] = signed_saturate(shifted, 64);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_sc_d(a, m) (__m128i) __builtin_msa2_n2x_rnd_ux_sc_d ((v2i64) a, m);
```

## __m128i __msa2_n2x_rnd_ux_sc_h (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_sc_h (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.ux.sc.h
Builtin: __builtin_msa2_n2x_rnd_ux_sc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:275
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.ux.sc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = m;
for i in 0..7:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.half[i] = signed_saturate(shifted, 16);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_sc_h(a, m) (__m128i) __builtin_msa2_n2x_rnd_ux_sc_h ((v8i16) a, m);
```

## __m128i __msa2_n2x_rnd_ux_sc_w (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_sc_w (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.ux.sc.w
Builtin: __builtin_msa2_n2x_rnd_ux_sc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:278
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.ux.sc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = m;
for i in 0..3:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.word[i] = signed_saturate(shifted, 32);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_sc_w(a, m) (__m128i) __builtin_msa2_n2x_rnd_ux_sc_w ((v4i32) a, m);
```

## __m128i __msa2_n2x_rnd_ux_uc_b (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_uc_b (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.ux.uc.b
Builtin: __builtin_msa2_n2x_rnd_ux_uc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:284
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.ux.uc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = m;
for i in 0..15:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.byte[i] = unsigned_saturate(shifted, 8);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_uc_b(a, m) (__m128i) __builtin_msa2_n2x_rnd_ux_uc_b ((v16i8) a, m);
```

## __m128i __msa2_n2x_rnd_ux_uc_d (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_uc_d (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.ux.uc.d
Builtin: __builtin_msa2_n2x_rnd_ux_uc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:293
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.ux.uc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = m;
for i in 0..1:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.dword[i] = unsigned_saturate(shifted, 64);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_uc_d(a, m) (__m128i) __builtin_msa2_n2x_rnd_ux_uc_d ((v2i64) a, m);
```

## __m128i __msa2_n2x_rnd_ux_uc_h (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_uc_h (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.ux.uc.h
Builtin: __builtin_msa2_n2x_rnd_ux_uc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:287
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.ux.uc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = m;
for i in 0..7:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.half[i] = unsigned_saturate(shifted, 16);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_uc_h(a, m) (__m128i) __builtin_msa2_n2x_rnd_ux_uc_h ((v8i16) a, m);
```

## __m128i __msa2_n2x_rnd_ux_uc_w (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_rnd_ux_uc_w (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.rnd.ux.uc.w
Builtin: __builtin_msa2_n2x_rnd_ux_uc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:290
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.rnd.ux.uc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = m;
for i in 0..3:
  shifted = rounding_shift(unsigned(a.wide_lane[i]), imm);
  dst.word[i] = unsigned_saturate(shifted, 32);
```

### Header Mapping

```c
#define __msa2_n2x_rnd_ux_uc_w(a, m) (__m128i) __builtin_msa2_n2x_rnd_ux_uc_w ((v4i32) a, m);
```

## __m128i __msa2_n2x_sx_nc_b (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_sx_nc_b (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.sx.nc.b
Builtin: __builtin_msa2_n2x_sx_nc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:188
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.sx.nc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = m;
for i in 0..15:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.byte[i] = truncate(shifted, 8);
```

### Header Mapping

```c
#define __msa2_n2x_sx_nc_b(a, m) (__m128i) __builtin_msa2_n2x_sx_nc_b ((v16i8) a, m);
```

## __m128i __msa2_n2x_sx_nc_d (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_sx_nc_d (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.sx.nc.d
Builtin: __builtin_msa2_n2x_sx_nc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:197
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.sx.nc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = m;
for i in 0..1:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.dword[i] = truncate(shifted, 64);
```

### Header Mapping

```c
#define __msa2_n2x_sx_nc_d(a, m) (__m128i) __builtin_msa2_n2x_sx_nc_d ((v2i64) a, m);
```

## __m128i __msa2_n2x_sx_nc_h (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_sx_nc_h (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.sx.nc.h
Builtin: __builtin_msa2_n2x_sx_nc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:191
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.sx.nc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = m;
for i in 0..7:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.half[i] = truncate(shifted, 16);
```

### Header Mapping

```c
#define __msa2_n2x_sx_nc_h(a, m) (__m128i) __builtin_msa2_n2x_sx_nc_h ((v8i16) a, m);
```

## __m128i __msa2_n2x_sx_nc_w (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_sx_nc_w (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.sx.nc.w
Builtin: __builtin_msa2_n2x_sx_nc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:194
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.sx.nc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = m;
for i in 0..3:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.word[i] = truncate(shifted, 32);
```

### Header Mapping

```c
#define __msa2_n2x_sx_nc_w(a, m) (__m128i) __builtin_msa2_n2x_sx_nc_w ((v4i32) a, m);
```

## __m128i __msa2_n2x_sx_sc_b (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_sx_sc_b (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.sx.sc.b
Builtin: __builtin_msa2_n2x_sx_sc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:164
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.sx.sc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = m;
for i in 0..15:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.byte[i] = signed_saturate(shifted, 8);
```

### Header Mapping

```c
#define __msa2_n2x_sx_sc_b(a, m) (__m128i) __builtin_msa2_n2x_sx_sc_b ((v16i8) a, m);
```

## __m128i __msa2_n2x_sx_sc_d (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_sx_sc_d (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.sx.sc.d
Builtin: __builtin_msa2_n2x_sx_sc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:173
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.sx.sc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = m;
for i in 0..1:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.dword[i] = signed_saturate(shifted, 64);
```

### Header Mapping

```c
#define __msa2_n2x_sx_sc_d(a, m) (__m128i) __builtin_msa2_n2x_sx_sc_d ((v2i64) a, m);
```

## __m128i __msa2_n2x_sx_sc_h (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_sx_sc_h (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.sx.sc.h
Builtin: __builtin_msa2_n2x_sx_sc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:167
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.sx.sc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = m;
for i in 0..7:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.half[i] = signed_saturate(shifted, 16);
```

### Header Mapping

```c
#define __msa2_n2x_sx_sc_h(a, m) (__m128i) __builtin_msa2_n2x_sx_sc_h ((v8i16) a, m);
```

## __m128i __msa2_n2x_sx_sc_w (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_sx_sc_w (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.sx.sc.w
Builtin: __builtin_msa2_n2x_sx_sc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:170
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.sx.sc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = m;
for i in 0..3:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.word[i] = signed_saturate(shifted, 32);
```

### Header Mapping

```c
#define __msa2_n2x_sx_sc_w(a, m) (__m128i) __builtin_msa2_n2x_sx_sc_w ((v4i32) a, m);
```

## __m128i __msa2_n2x_sx_uc_b (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_sx_uc_b (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.sx.uc.b
Builtin: __builtin_msa2_n2x_sx_uc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:176
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.sx.uc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = m;
for i in 0..15:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.byte[i] = unsigned_saturate(shifted, 8);
```

### Header Mapping

```c
#define __msa2_n2x_sx_uc_b(a, m) (__m128i) __builtin_msa2_n2x_sx_uc_b ((v16i8) a, m);
```

## __m128i __msa2_n2x_sx_uc_d (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_sx_uc_d (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.sx.uc.d
Builtin: __builtin_msa2_n2x_sx_uc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:185
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.sx.uc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = m;
for i in 0..1:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.dword[i] = unsigned_saturate(shifted, 64);
```

### Header Mapping

```c
#define __msa2_n2x_sx_uc_d(a, m) (__m128i) __builtin_msa2_n2x_sx_uc_d ((v2i64) a, m);
```

## __m128i __msa2_n2x_sx_uc_h (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_sx_uc_h (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.sx.uc.h
Builtin: __builtin_msa2_n2x_sx_uc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:179
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.sx.uc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = m;
for i in 0..7:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.half[i] = unsigned_saturate(shifted, 16);
```

### Header Mapping

```c
#define __msa2_n2x_sx_uc_h(a, m) (__m128i) __builtin_msa2_n2x_sx_uc_h ((v8i16) a, m);
```

## __m128i __msa2_n2x_sx_uc_w (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_sx_uc_w (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.sx.uc.w
Builtin: __builtin_msa2_n2x_sx_uc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:182
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.sx.uc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = m;
for i in 0..3:
  shifted = shift(signed(a.wide_lane[i]), imm);
  dst.word[i] = unsigned_saturate(shifted, 32);
```

### Header Mapping

```c
#define __msa2_n2x_sx_uc_w(a, m) (__m128i) __builtin_msa2_n2x_sx_uc_w ((v4i32) a, m);
```

## __m128i __msa2_n2x_ux_nc_b (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_ux_nc_b (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.ux.nc.b
Builtin: __builtin_msa2_n2x_ux_nc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:224
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.ux.nc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = m;
for i in 0..15:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.byte[i] = truncate(shifted, 8);
```

### Header Mapping

```c
#define __msa2_n2x_ux_nc_b(a, m) (__m128i) __builtin_msa2_n2x_ux_nc_b ((v16i8) a, m);
```

## __m128i __msa2_n2x_ux_nc_d (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_ux_nc_d (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.ux.nc.d
Builtin: __builtin_msa2_n2x_ux_nc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:233
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.ux.nc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = m;
for i in 0..1:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.dword[i] = truncate(shifted, 64);
```

### Header Mapping

```c
#define __msa2_n2x_ux_nc_d(a, m) (__m128i) __builtin_msa2_n2x_ux_nc_d ((v2i64) a, m);
```

## __m128i __msa2_n2x_ux_nc_h (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_ux_nc_h (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.ux.nc.h
Builtin: __builtin_msa2_n2x_ux_nc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:227
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.ux.nc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = m;
for i in 0..7:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.half[i] = truncate(shifted, 16);
```

### Header Mapping

```c
#define __msa2_n2x_ux_nc_h(a, m) (__m128i) __builtin_msa2_n2x_ux_nc_h ((v8i16) a, m);
```

## __m128i __msa2_n2x_ux_nc_w (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_ux_nc_w (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.ux.nc.w
Builtin: __builtin_msa2_n2x_ux_nc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:230
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.ux.nc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = m;
for i in 0..3:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.word[i] = truncate(shifted, 32);
```

### Header Mapping

```c
#define __msa2_n2x_ux_nc_w(a, m) (__m128i) __builtin_msa2_n2x_ux_nc_w ((v4i32) a, m);
```

## __m128i __msa2_n2x_ux_sc_b (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_ux_sc_b (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.ux.sc.b
Builtin: __builtin_msa2_n2x_ux_sc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:200
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.ux.sc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = m;
for i in 0..15:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.byte[i] = signed_saturate(shifted, 8);
```

### Header Mapping

```c
#define __msa2_n2x_ux_sc_b(a, m) (__m128i) __builtin_msa2_n2x_ux_sc_b ((v16i8) a, m);
```

## __m128i __msa2_n2x_ux_sc_d (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_ux_sc_d (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.ux.sc.d
Builtin: __builtin_msa2_n2x_ux_sc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:209
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.ux.sc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = m;
for i in 0..1:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.dword[i] = signed_saturate(shifted, 64);
```

### Header Mapping

```c
#define __msa2_n2x_ux_sc_d(a, m) (__m128i) __builtin_msa2_n2x_ux_sc_d ((v2i64) a, m);
```

## __m128i __msa2_n2x_ux_sc_h (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_ux_sc_h (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.ux.sc.h
Builtin: __builtin_msa2_n2x_ux_sc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:203
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.ux.sc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = m;
for i in 0..7:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.half[i] = signed_saturate(shifted, 16);
```

### Header Mapping

```c
#define __msa2_n2x_ux_sc_h(a, m) (__m128i) __builtin_msa2_n2x_ux_sc_h ((v8i16) a, m);
```

## __m128i __msa2_n2x_ux_sc_w (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_ux_sc_w (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.ux.sc.w
Builtin: __builtin_msa2_n2x_ux_sc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:206
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.ux.sc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = m;
for i in 0..3:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.word[i] = signed_saturate(shifted, 32);
```

### Header Mapping

```c
#define __msa2_n2x_ux_sc_w(a, m) (__m128i) __builtin_msa2_n2x_ux_sc_w ((v4i32) a, m);
```

## __m128i __msa2_n2x_ux_uc_b (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_ux_uc_b (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.ux.uc.b
Builtin: __builtin_msa2_n2x_ux_uc_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:212
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.ux.uc.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = m;
for i in 0..15:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.byte[i] = unsigned_saturate(shifted, 8);
```

### Header Mapping

```c
#define __msa2_n2x_ux_uc_b(a, m) (__m128i) __builtin_msa2_n2x_ux_uc_b ((v16i8) a, m);
```

## __m128i __msa2_n2x_ux_uc_d (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_ux_uc_d (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.ux.uc.d
Builtin: __builtin_msa2_n2x_ux_uc_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:221
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.ux.uc.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = m;
for i in 0..1:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.dword[i] = unsigned_saturate(shifted, 64);
```

### Header Mapping

```c
#define __msa2_n2x_ux_uc_d(a, m) (__m128i) __builtin_msa2_n2x_ux_uc_d ((v2i64) a, m);
```

## __m128i __msa2_n2x_ux_uc_h (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_ux_uc_h (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.ux.uc.h
Builtin: __builtin_msa2_n2x_ux_uc_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:215
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.ux.uc.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = m;
for i in 0..7:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.half[i] = unsigned_saturate(shifted, 16);
```

### Header Mapping

```c
#define __msa2_n2x_ux_uc_h(a, m) (__m128i) __builtin_msa2_n2x_ux_uc_h ((v8i16) a, m);
```

## __m128i __msa2_n2x_ux_uc_w (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_n2x_ux_uc_w (__m128i a, int m)
#include <msa2.h>
Instruction: n2x.ux.uc.w
Builtin: __builtin_msa2_n2x_ux_uc_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:218
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for n2x.ux.uc.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = m;
for i in 0..3:
  shifted = shift(unsigned(a.wide_lane[i]), imm);
  dst.word[i] = unsigned_saturate(shifted, 32);
```

### Header Mapping

```c
#define __msa2_n2x_ux_uc_w(a, m) (__m128i) __builtin_msa2_n2x_ux_uc_w ((v4i32) a, m);
```

## __m128i __msa2_sad_adj2_s_acc_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_s_acc_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.s.acc.w2x.b
Builtin: __builtin_msa2_sad_adj2_s_acc_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:667
```

### Description

Compute adjacent-pair sum of absolute differences using signed inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sad.adj2.s.acc.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
for i in 0..7:
  d0 = abs(widen(a.byte[2*i]) - widen(b.byte[2*i]));
  d1 = abs(widen(a.byte[2*i + 1]) - widen(b.byte[2*i + 1]));
  dst.wide_lane[i] = acc.wide_lane[i] + d0 + d1;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_sad_adj2_s_acc_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
```

## __m128i __msa2_sad_adj2_s_acc_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_s_acc_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.s.acc.w2x.h
Builtin: __builtin_msa2_sad_adj2_s_acc_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:687
```

### Description

Compute adjacent-pair sum of absolute differences using signed inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sad.adj2.s.acc.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
for i in 0..3:
  d0 = abs(widen(a.half[2*i]) - widen(b.half[2*i]));
  d1 = abs(widen(a.half[2*i + 1]) - widen(b.half[2*i + 1]));
  dst.wide_lane[i] = acc.wide_lane[i] + d0 + d1;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_sad_adj2_s_acc_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
```

## __m128i __msa2_sad_adj2_s_acc_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_s_acc_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.s.acc.w2x.w
Builtin: __builtin_msa2_sad_adj2_s_acc_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:707
```

### Description

Compute adjacent-pair sum of absolute differences using signed inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sad.adj2.s.acc.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
for i in 0..1:
  d0 = abs(widen(a.word[2*i]) - widen(b.word[2*i]));
  d1 = abs(widen(a.word[2*i + 1]) - widen(b.word[2*i + 1]));
  dst.wide_lane[i] = acc.wide_lane[i] + d0 + d1;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_sad_adj2_s_acc_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
```

## __m128i __msa2_sad_adj2_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.s.w2x.b
Builtin: __builtin_msa2_sad_adj2_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:542
```

### Description

Compute adjacent-pair sum of absolute differences using signed inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sad.adj2.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..7:
  d0 = abs(widen(a.byte[2*i]) - widen(b.byte[2*i]));
  d1 = abs(widen(a.byte[2*i + 1]) - widen(b.byte[2*i + 1]));
  dst.wide_lane[i] = d0 + d1;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_sad_adj2_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_sad_adj2_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.s.w2x.h
Builtin: __builtin_msa2_sad_adj2_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:563
```

### Description

Compute adjacent-pair sum of absolute differences using signed inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sad.adj2.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..3:
  d0 = abs(widen(a.half[2*i]) - widen(b.half[2*i]));
  d1 = abs(widen(a.half[2*i + 1]) - widen(b.half[2*i + 1]));
  dst.wide_lane[i] = d0 + d1;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_sad_adj2_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_sad_adj2_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.s.w2x.w
Builtin: __builtin_msa2_sad_adj2_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:584
```

### Description

Compute adjacent-pair sum of absolute differences using signed inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sad.adj2.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..1:
  d0 = abs(widen(a.word[2*i]) - widen(b.word[2*i]));
  d1 = abs(widen(a.word[2*i + 1]) - widen(b.word[2*i + 1]));
  dst.wide_lane[i] = d0 + d1;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_sad_adj2_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_sad_adj2_u_acc_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_u_acc_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.u.acc.w2x.b
Builtin: __builtin_msa2_sad_adj2_u_acc_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:727
```

### Description

Compute adjacent-pair sum of absolute differences using unsigned inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sad.adj2.u.acc.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
for i in 0..7:
  d0 = abs(widen(a.byte[2*i]) - widen(b.byte[2*i]));
  d1 = abs(widen(a.byte[2*i + 1]) - widen(b.byte[2*i + 1]));
  dst.wide_lane[i] = acc.wide_lane[i] + d0 + d1;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_sad_adj2_u_acc_w2x_b((v8u16) ret, (v16u8) a, (v16u8) b);
```

## __m128i __msa2_sad_adj2_u_acc_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_u_acc_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.u.acc.w2x.h
Builtin: __builtin_msa2_sad_adj2_u_acc_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:747
```

### Description

Compute adjacent-pair sum of absolute differences using unsigned inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sad.adj2.u.acc.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
for i in 0..3:
  d0 = abs(widen(a.half[2*i]) - widen(b.half[2*i]));
  d1 = abs(widen(a.half[2*i + 1]) - widen(b.half[2*i + 1]));
  dst.wide_lane[i] = acc.wide_lane[i] + d0 + d1;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_sad_adj2_u_acc_w2x_h((v4u32) ret, (v8u16) a, (v8u16) b);
```

## __m128i __msa2_sad_adj2_u_acc_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_u_acc_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.u.acc.w2x.w
Builtin: __builtin_msa2_sad_adj2_u_acc_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:767
```

### Description

Compute adjacent-pair sum of absolute differences using unsigned inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sad.adj2.u.acc.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
for i in 0..1:
  d0 = abs(widen(a.word[2*i]) - widen(b.word[2*i]));
  d1 = abs(widen(a.word[2*i + 1]) - widen(b.word[2*i + 1]));
  dst.wide_lane[i] = acc.wide_lane[i] + d0 + d1;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_sad_adj2_u_acc_w2x_w((v2u64) ret, (v4u32) a, (v4u32) b);
```

## __m128i __msa2_sad_adj2_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.u.w2x.b
Builtin: __builtin_msa2_sad_adj2_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:605
```

### Description

Compute adjacent-pair sum of absolute differences using unsigned inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sad.adj2.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..7:
  d0 = abs(widen(a.byte[2*i]) - widen(b.byte[2*i]));
  d1 = abs(widen(a.byte[2*i + 1]) - widen(b.byte[2*i + 1]));
  dst.wide_lane[i] = d0 + d1;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_sad_adj2_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_sad_adj2_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.u.w2x.h
Builtin: __builtin_msa2_sad_adj2_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:626
```

### Description

Compute adjacent-pair sum of absolute differences using unsigned inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sad.adj2.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..3:
  d0 = abs(widen(a.half[2*i]) - widen(b.half[2*i]));
  d1 = abs(widen(a.half[2*i + 1]) - widen(b.half[2*i + 1]));
  dst.wide_lane[i] = d0 + d1;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_sad_adj2_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_sad_adj2_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_sad_adj2_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: sad.adj2.u.w2x.w
Builtin: __builtin_msa2_sad_adj2_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:647
```

### Description

Compute adjacent-pair sum of absolute differences using unsigned inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sad.adj2.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..1:
  d0 = abs(widen(a.word[2*i]) - widen(b.word[2*i]));
  d1 = abs(widen(a.word[2*i + 1]) - widen(b.word[2*i + 1]));
  dst.wide_lane[i] = d0 + d1;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_sad_adj2_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vadd_even_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.s.w2x.b
Builtin: __builtin_msa2_vadd_even_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:977
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.even.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_even_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vadd_even_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.s.w2x.d
Builtin: __builtin_msa2_vadd_even_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1040
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.even.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_even_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vadd_even_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.s.w2x.h
Builtin: __builtin_msa2_vadd_even_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:998
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.even.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_even_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vadd_even_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.s.w2x.w
Builtin: __builtin_msa2_vadd_even_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1019
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.even.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_even_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vadd_even_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.u.w2x.b
Builtin: __builtin_msa2_vadd_even_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1061
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.even.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_even_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vadd_even_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.u.w2x.d
Builtin: __builtin_msa2_vadd_even_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1124
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.even.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_even_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vadd_even_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.u.w2x.h
Builtin: __builtin_msa2_vadd_even_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1082
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.even.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_even_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vadd_even_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.u.w2x.w
Builtin: __builtin_msa2_vadd_even_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1103
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.even.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_even_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vadd_even_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.us.w2x.b
Builtin: __builtin_msa2_vadd_even_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1145
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.even.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_even_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vadd_even_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.us.w2x.d
Builtin: __builtin_msa2_vadd_even_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1208
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.even.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_even_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vadd_even_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.us.w2x.h
Builtin: __builtin_msa2_vadd_even_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1166
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.even.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_even_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vadd_even_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_even_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.even.us.w2x.w
Builtin: __builtin_msa2_vadd_even_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1187
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.even.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_even_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vadd_hi_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.s.w2x.b
Builtin: __builtin_msa2_vadd_hi_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1733
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.hi.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_hi_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vadd_hi_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.s.w2x.d
Builtin: __builtin_msa2_vadd_hi_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1796
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.hi.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_hi_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vadd_hi_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.s.w2x.h
Builtin: __builtin_msa2_vadd_hi_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1754
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.hi.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_hi_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vadd_hi_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.s.w2x.w
Builtin: __builtin_msa2_vadd_hi_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1775
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.hi.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_hi_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vadd_hi_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.u.w2x.b
Builtin: __builtin_msa2_vadd_hi_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1817
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.hi.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_hi_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vadd_hi_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.u.w2x.d
Builtin: __builtin_msa2_vadd_hi_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1880
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.hi.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_hi_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vadd_hi_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.u.w2x.h
Builtin: __builtin_msa2_vadd_hi_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1838
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.hi.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_hi_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vadd_hi_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.u.w2x.w
Builtin: __builtin_msa2_vadd_hi_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1859
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.hi.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_hi_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vadd_hi_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.us.w2x.b
Builtin: __builtin_msa2_vadd_hi_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1901
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.hi.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_hi_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vadd_hi_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.us.w2x.d
Builtin: __builtin_msa2_vadd_hi_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1964
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.hi.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_hi_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vadd_hi_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.us.w2x.h
Builtin: __builtin_msa2_vadd_hi_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1922
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.hi.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_hi_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vadd_hi_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_hi_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.hi.us.w2x.w
Builtin: __builtin_msa2_vadd_hi_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1943
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.hi.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_hi_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vadd_lo_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.s.w2x.b
Builtin: __builtin_msa2_vadd_lo_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1481
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.lo.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_lo_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vadd_lo_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.s.w2x.d
Builtin: __builtin_msa2_vadd_lo_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1544
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.lo.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_lo_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vadd_lo_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.s.w2x.h
Builtin: __builtin_msa2_vadd_lo_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1502
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.lo.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_lo_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vadd_lo_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.s.w2x.w
Builtin: __builtin_msa2_vadd_lo_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1523
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.lo.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_lo_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vadd_lo_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.u.w2x.b
Builtin: __builtin_msa2_vadd_lo_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1565
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.lo.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_lo_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vadd_lo_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.u.w2x.d
Builtin: __builtin_msa2_vadd_lo_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1628
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.lo.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_lo_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vadd_lo_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.u.w2x.h
Builtin: __builtin_msa2_vadd_lo_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1586
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.lo.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_lo_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vadd_lo_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.u.w2x.w
Builtin: __builtin_msa2_vadd_lo_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1607
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.lo.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_lo_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vadd_lo_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.us.w2x.b
Builtin: __builtin_msa2_vadd_lo_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1649
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.lo.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_lo_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vadd_lo_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.us.w2x.d
Builtin: __builtin_msa2_vadd_lo_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1712
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.lo.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_lo_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vadd_lo_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.us.w2x.h
Builtin: __builtin_msa2_vadd_lo_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1670
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.lo.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_lo_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vadd_lo_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_lo_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.lo.us.w2x.w
Builtin: __builtin_msa2_vadd_lo_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1691
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.lo.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_lo_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vadd_odd_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.s.w2x.b
Builtin: __builtin_msa2_vadd_odd_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1229
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.odd.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_odd_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vadd_odd_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.s.w2x.d
Builtin: __builtin_msa2_vadd_odd_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1292
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.odd.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_odd_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vadd_odd_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.s.w2x.h
Builtin: __builtin_msa2_vadd_odd_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1250
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.odd.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_odd_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vadd_odd_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.s.w2x.w
Builtin: __builtin_msa2_vadd_odd_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1271
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.odd.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_odd_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vadd_odd_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.u.w2x.b
Builtin: __builtin_msa2_vadd_odd_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1313
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.odd.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_odd_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vadd_odd_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.u.w2x.d
Builtin: __builtin_msa2_vadd_odd_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1376
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.odd.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_odd_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vadd_odd_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.u.w2x.h
Builtin: __builtin_msa2_vadd_odd_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1334
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.odd.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_odd_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vadd_odd_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.u.w2x.w
Builtin: __builtin_msa2_vadd_odd_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1355
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.odd.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_odd_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vadd_odd_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.us.w2x.b
Builtin: __builtin_msa2_vadd_odd_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1397
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.odd.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) + widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_odd_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vadd_odd_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.us.w2x.d
Builtin: __builtin_msa2_vadd_odd_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1460
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.odd.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) + widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_odd_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vadd_odd_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.us.w2x.h
Builtin: __builtin_msa2_vadd_odd_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1418
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.odd.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) + widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_odd_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vadd_odd_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vadd_odd_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vadd.odd.us.w2x.w
Builtin: __builtin_msa2_vadd_odd_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:1439
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vadd.odd.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) + widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vadd_odd_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_even_acc_s_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_s_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.acc.s.w2x.b
Builtin: __builtin_msa2_vmult_even_acc_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3390
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.acc.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_acc_s_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_even_acc_s_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_s_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.acc.s.w2x.d
Builtin: __builtin_msa2_vmult_even_acc_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3450
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.acc.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_acc_s_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_even_acc_s_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_s_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.acc.s.w2x.h
Builtin: __builtin_msa2_vmult_even_acc_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3410
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.acc.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_acc_s_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_even_acc_s_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_s_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.acc.s.w2x.w
Builtin: __builtin_msa2_vmult_even_acc_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3430
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.acc.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_acc_s_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_even_acc_u_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_u_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.acc.u.w2x.b
Builtin: __builtin_msa2_vmult_even_acc_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3470
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.acc.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_acc_u_w2x_b((v8u16) ret, (v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_even_acc_u_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_u_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.acc.u.w2x.d
Builtin: __builtin_msa2_vmult_even_acc_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3530
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.acc.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_acc_u_w2x_d((v2u64) ret, (v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_even_acc_u_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_u_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.acc.u.w2x.h
Builtin: __builtin_msa2_vmult_even_acc_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3490
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.acc.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_acc_u_w2x_h((v4u32) ret, (v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_even_acc_u_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_u_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.acc.u.w2x.w
Builtin: __builtin_msa2_vmult_even_acc_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3510
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.acc.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_acc_u_w2x_w((v2u64) ret, (v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_even_acc_us_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_us_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.acc.us.w2x.b
Builtin: __builtin_msa2_vmult_even_acc_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3550
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.acc.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_acc_us_w2x_b((v8u16) ret, (v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_even_acc_us_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_us_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.acc.us.w2x.d
Builtin: __builtin_msa2_vmult_even_acc_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3610
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.acc.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_acc_us_w2x_d((v2u64) ret, (v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_even_acc_us_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_us_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.acc.us.w2x.h
Builtin: __builtin_msa2_vmult_even_acc_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3570
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.acc.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_acc_us_w2x_h((v4u32) ret, (v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_even_acc_us_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_acc_us_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.acc.us.w2x.w
Builtin: __builtin_msa2_vmult_even_acc_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3590
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.acc.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_acc_us_w2x_w((v2u64) ret, (v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_even_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.s.w2x.b
Builtin: __builtin_msa2_vmult_even_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2887
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_even_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.s.w2x.d
Builtin: __builtin_msa2_vmult_even_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2950
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_even_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.s.w2x.h
Builtin: __builtin_msa2_vmult_even_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2908
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_even_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.s.w2x.w
Builtin: __builtin_msa2_vmult_even_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2929
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_even_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.u.w2x.b
Builtin: __builtin_msa2_vmult_even_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2971
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_even_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.u.w2x.d
Builtin: __builtin_msa2_vmult_even_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3034
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_even_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.u.w2x.h
Builtin: __builtin_msa2_vmult_even_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2992
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_even_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.u.w2x.w
Builtin: __builtin_msa2_vmult_even_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3013
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_even_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.us.w2x.b
Builtin: __builtin_msa2_vmult_even_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3055
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_even_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.us.w2x.d
Builtin: __builtin_msa2_vmult_even_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3118
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_even_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.us.w2x.h
Builtin: __builtin_msa2_vmult_even_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3076
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_even_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_even_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.even.us.w2x.w
Builtin: __builtin_msa2_vmult_even_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3097
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.even.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_even_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_hadd_adj4_acc_s_w4x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_s_w4x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.s.w4x.b
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_s_w4x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2706
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.acc.s.w4x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_s_w4x_b((v4i32) ret, (v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_hadd_adj4_acc_s_w4x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_s_w4x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.s.w4x.h
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_s_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2726
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.acc.s.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_s_w4x_h((v2i64) ret, (v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_hadd_adj4_acc_s_w4x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_s_w4x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.s.w4x.w
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_s_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2746
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.acc.s.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_s_w4x_w((v2i64) ret, (v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_hadd_adj4_acc_u_w4x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_u_w4x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.u.w4x.b
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_u_w4x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2766
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.acc.u.w4x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_u_w4x_b((v4u32) ret, (v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_hadd_adj4_acc_u_w4x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_u_w4x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.u.w4x.h
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_u_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2786
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.acc.u.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_u_w4x_h((v2u64) ret, (v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_hadd_adj4_acc_u_w4x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_u_w4x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.u.w4x.w
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_u_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2806
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.acc.u.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_u_w4x_w((v2u64) ret, (v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_hadd_adj4_acc_us_w4x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_us_w4x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.us.w4x.b
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_us_w4x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2826
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.acc.us.w4x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_us_w4x_b((v4u32) ret, (v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_hadd_adj4_acc_us_w4x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_us_w4x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.us.w4x.h
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_us_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2846
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.acc.us.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_us_w4x_h((v2u64) ret, (v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_hadd_adj4_acc_us_w4x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_acc_us_w4x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.acc.us.w4x.w
Builtin: __builtin_msa2_vmult_hadd_adj4_acc_us_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2866
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.acc.us.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_us_w4x_w((v2u64) ret, (v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_hadd_adj4_s_w4x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_s_w4x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.s.w4x.b
Builtin: __builtin_msa2_vmult_hadd_adj4_s_w4x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2518
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.s.w4x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_s_w4x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_hadd_adj4_s_w4x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_s_w4x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.s.w4x.h
Builtin: __builtin_msa2_vmult_hadd_adj4_s_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2539
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.s.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_s_w4x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_hadd_adj4_s_w4x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_s_w4x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.s.w4x.w
Builtin: __builtin_msa2_vmult_hadd_adj4_s_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2560
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.s.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_s_w4x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_hadd_adj4_u_w4x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_u_w4x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.u.w4x.b
Builtin: __builtin_msa2_vmult_hadd_adj4_u_w4x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2581
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.u.w4x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_u_w4x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_hadd_adj4_u_w4x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_u_w4x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.u.w4x.h
Builtin: __builtin_msa2_vmult_hadd_adj4_u_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2602
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.u.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_u_w4x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_hadd_adj4_u_w4x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_u_w4x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.u.w4x.w
Builtin: __builtin_msa2_vmult_hadd_adj4_u_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2623
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.u.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_u_w4x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_hadd_adj4_us_w4x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_us_w4x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.us.w4x.b
Builtin: __builtin_msa2_vmult_hadd_adj4_us_w4x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2644
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.us.w4x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_us_w4x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_hadd_adj4_us_w4x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_us_w4x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.us.w4x.h
Builtin: __builtin_msa2_vmult_hadd_adj4_us_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2665
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.us.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_us_w4x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_hadd_adj4_us_w4x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hadd_adj4_us_w4x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hadd.adj4.us.w4x.w
Builtin: __builtin_msa2_vmult_hadd_adj4_us_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:2686
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hadd.adj4.us.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hadd_adj4_us_w4x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_hi_acc_s_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_s_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.acc.s.w2x.b
Builtin: __builtin_msa2_vmult_hi_acc_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4614
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.acc.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_acc_s_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_hi_acc_s_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_s_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.acc.s.w2x.d
Builtin: __builtin_msa2_vmult_hi_acc_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4674
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.acc.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_acc_s_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_hi_acc_s_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_s_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.acc.s.w2x.h
Builtin: __builtin_msa2_vmult_hi_acc_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4634
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.acc.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_acc_s_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_hi_acc_s_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_s_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.acc.s.w2x.w
Builtin: __builtin_msa2_vmult_hi_acc_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4654
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.acc.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_acc_s_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_hi_acc_u_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_u_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.acc.u.w2x.b
Builtin: __builtin_msa2_vmult_hi_acc_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4694
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.acc.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_acc_u_w2x_b((v8u16) ret, (v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_hi_acc_u_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_u_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.acc.u.w2x.d
Builtin: __builtin_msa2_vmult_hi_acc_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4754
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.acc.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_acc_u_w2x_d((v2u64) ret, (v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_hi_acc_u_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_u_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.acc.u.w2x.h
Builtin: __builtin_msa2_vmult_hi_acc_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4714
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.acc.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_acc_u_w2x_h((v4u32) ret, (v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_hi_acc_u_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_u_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.acc.u.w2x.w
Builtin: __builtin_msa2_vmult_hi_acc_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4734
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.acc.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_acc_u_w2x_w((v2u64) ret, (v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_hi_acc_us_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_us_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.acc.us.w2x.b
Builtin: __builtin_msa2_vmult_hi_acc_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4774
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.acc.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_acc_us_w2x_b((v8u16) ret, (v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_hi_acc_us_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_us_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.acc.us.w2x.d
Builtin: __builtin_msa2_vmult_hi_acc_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4834
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.acc.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_acc_us_w2x_d((v2u64) ret, (v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_hi_acc_us_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_us_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.acc.us.w2x.h
Builtin: __builtin_msa2_vmult_hi_acc_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4794
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.acc.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_acc_us_w2x_h((v4u32) ret, (v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_hi_acc_us_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_acc_us_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.acc.us.w2x.w
Builtin: __builtin_msa2_vmult_hi_acc_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4814
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.acc.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_acc_us_w2x_w((v2u64) ret, (v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_hi_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.s.w2x.b
Builtin: __builtin_msa2_vmult_hi_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4123
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_hi_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.s.w2x.d
Builtin: __builtin_msa2_vmult_hi_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4186
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_hi_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.s.w2x.h
Builtin: __builtin_msa2_vmult_hi_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4144
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_hi_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.s.w2x.w
Builtin: __builtin_msa2_vmult_hi_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4165
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_hi_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.u.w2x.b
Builtin: __builtin_msa2_vmult_hi_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4207
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_hi_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.u.w2x.d
Builtin: __builtin_msa2_vmult_hi_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4270
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_hi_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.u.w2x.h
Builtin: __builtin_msa2_vmult_hi_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4228
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_hi_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.u.w2x.w
Builtin: __builtin_msa2_vmult_hi_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4249
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_hi_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.us.w2x.b
Builtin: __builtin_msa2_vmult_hi_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4291
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_hi_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.us.w2x.d
Builtin: __builtin_msa2_vmult_hi_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4354
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_hi_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.us.w2x.h
Builtin: __builtin_msa2_vmult_hi_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4312
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_hi_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_hi_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.hi.us.w2x.w
Builtin: __builtin_msa2_vmult_hi_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4333
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.hi.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_hi_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_lo_acc_s_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_s_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.acc.s.w2x.b
Builtin: __builtin_msa2_vmult_lo_acc_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4374
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.acc.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_acc_s_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_lo_acc_s_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_s_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.acc.s.w2x.d
Builtin: __builtin_msa2_vmult_lo_acc_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4434
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.acc.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_acc_s_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_lo_acc_s_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_s_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.acc.s.w2x.h
Builtin: __builtin_msa2_vmult_lo_acc_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4394
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.acc.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_acc_s_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_lo_acc_s_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_s_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.acc.s.w2x.w
Builtin: __builtin_msa2_vmult_lo_acc_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4414
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.acc.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_acc_s_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_lo_acc_u_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_u_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.acc.u.w2x.b
Builtin: __builtin_msa2_vmult_lo_acc_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4454
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.acc.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_acc_u_w2x_b((v8u16) ret, (v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_lo_acc_u_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_u_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.acc.u.w2x.d
Builtin: __builtin_msa2_vmult_lo_acc_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4514
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.acc.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_acc_u_w2x_d((v2u64) ret, (v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_lo_acc_u_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_u_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.acc.u.w2x.h
Builtin: __builtin_msa2_vmult_lo_acc_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4474
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.acc.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_acc_u_w2x_h((v4u32) ret, (v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_lo_acc_u_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_u_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.acc.u.w2x.w
Builtin: __builtin_msa2_vmult_lo_acc_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4494
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.acc.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_acc_u_w2x_w((v2u64) ret, (v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_lo_acc_us_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_us_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.acc.us.w2x.b
Builtin: __builtin_msa2_vmult_lo_acc_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4534
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.acc.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_acc_us_w2x_b((v8u16) ret, (v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_lo_acc_us_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_us_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.acc.us.w2x.d
Builtin: __builtin_msa2_vmult_lo_acc_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4594
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.acc.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_acc_us_w2x_d((v2u64) ret, (v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_lo_acc_us_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_us_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.acc.us.w2x.h
Builtin: __builtin_msa2_vmult_lo_acc_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4554
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.acc.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_acc_us_w2x_h((v4u32) ret, (v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_lo_acc_us_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_acc_us_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.acc.us.w2x.w
Builtin: __builtin_msa2_vmult_lo_acc_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4574
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.acc.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_acc_us_w2x_w((v2u64) ret, (v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_lo_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.s.w2x.b
Builtin: __builtin_msa2_vmult_lo_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3871
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_lo_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.s.w2x.d
Builtin: __builtin_msa2_vmult_lo_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3934
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_lo_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.s.w2x.h
Builtin: __builtin_msa2_vmult_lo_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3892
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_lo_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.s.w2x.w
Builtin: __builtin_msa2_vmult_lo_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3913
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_lo_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.u.w2x.b
Builtin: __builtin_msa2_vmult_lo_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3955
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_lo_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.u.w2x.d
Builtin: __builtin_msa2_vmult_lo_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4018
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_lo_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.u.w2x.h
Builtin: __builtin_msa2_vmult_lo_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3976
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_lo_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.u.w2x.w
Builtin: __builtin_msa2_vmult_lo_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3997
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_lo_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.us.w2x.b
Builtin: __builtin_msa2_vmult_lo_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4039
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_lo_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.us.w2x.d
Builtin: __builtin_msa2_vmult_lo_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4102
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_lo_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.us.w2x.h
Builtin: __builtin_msa2_vmult_lo_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4060
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_lo_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_lo_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.lo.us.w2x.w
Builtin: __builtin_msa2_vmult_lo_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4081
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.lo.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_lo_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_odd_acc_s_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_s_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.acc.s.w2x.b
Builtin: __builtin_msa2_vmult_odd_acc_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3630
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.acc.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_acc_s_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_odd_acc_s_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_s_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.acc.s.w2x.d
Builtin: __builtin_msa2_vmult_odd_acc_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3690
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.acc.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_acc_s_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_odd_acc_s_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_s_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.acc.s.w2x.h
Builtin: __builtin_msa2_vmult_odd_acc_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3650
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.acc.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_acc_s_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_odd_acc_s_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_s_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.acc.s.w2x.w
Builtin: __builtin_msa2_vmult_odd_acc_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3670
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.acc.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_acc_s_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_odd_acc_u_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_u_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.acc.u.w2x.b
Builtin: __builtin_msa2_vmult_odd_acc_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3710
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.acc.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_acc_u_w2x_b((v8u16) ret, (v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_odd_acc_u_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_u_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.acc.u.w2x.d
Builtin: __builtin_msa2_vmult_odd_acc_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3770
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.acc.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_acc_u_w2x_d((v2u64) ret, (v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_odd_acc_u_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_u_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.acc.u.w2x.h
Builtin: __builtin_msa2_vmult_odd_acc_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3730
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.acc.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_acc_u_w2x_h((v4u32) ret, (v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_odd_acc_u_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_u_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.acc.u.w2x.w
Builtin: __builtin_msa2_vmult_odd_acc_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3750
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.acc.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_acc_u_w2x_w((v2u64) ret, (v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_odd_acc_us_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_us_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.acc.us.w2x.b
Builtin: __builtin_msa2_vmult_odd_acc_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3790
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.acc.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_acc_us_w2x_b((v8u16) ret, (v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_odd_acc_us_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_us_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.acc.us.w2x.d
Builtin: __builtin_msa2_vmult_odd_acc_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3850
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.acc.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_acc_us_w2x_d((v2u64) ret, (v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_odd_acc_us_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_us_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.acc.us.w2x.h
Builtin: __builtin_msa2_vmult_odd_acc_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3810
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.acc.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_acc_us_w2x_h((v4u32) ret, (v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_odd_acc_us_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_acc_us_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.acc.us.w2x.w
Builtin: __builtin_msa2_vmult_odd_acc_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3830
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.acc.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_acc_us_w2x_w((v2u64) ret, (v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmult_odd_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.s.w2x.b
Builtin: __builtin_msa2_vmult_odd_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3139
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmult_odd_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.s.w2x.d
Builtin: __builtin_msa2_vmult_odd_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3202
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmult_odd_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.s.w2x.h
Builtin: __builtin_msa2_vmult_odd_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3160
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmult_odd_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.s.w2x.w
Builtin: __builtin_msa2_vmult_odd_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3181
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmult_odd_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.u.w2x.b
Builtin: __builtin_msa2_vmult_odd_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3223
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vmult_odd_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.u.w2x.d
Builtin: __builtin_msa2_vmult_odd_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3286
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vmult_odd_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.u.w2x.h
Builtin: __builtin_msa2_vmult_odd_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3244
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vmult_odd_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.u.w2x.w
Builtin: __builtin_msa2_vmult_odd_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3265
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vmult_odd_us_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_us_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.us.w2x.b
Builtin: __builtin_msa2_vmult_odd_us_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3307
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.us.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_us_w2x_b((v16u8) a, (v16i8) b);
```

## __m128i __msa2_vmult_odd_us_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_us_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.us.w2x.d
Builtin: __builtin_msa2_vmult_odd_us_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3370
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.us.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_us_w2x_d((v2u64) a, (v2i64) b);
```

## __m128i __msa2_vmult_odd_us_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_us_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.us.w2x.h
Builtin: __builtin_msa2_vmult_odd_us_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3328
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.us.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_us_w2x_h((v8u16) a, (v8i16) b);
```

## __m128i __msa2_vmult_odd_us_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmult_odd_us_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmult.odd.us.w2x.w
Builtin: __builtin_msa2_vmult_odd_us_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:3349
```

### Description

Compute lane-wise unsigned/signed mixed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmult.odd.us.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmult_odd_us_w2x_w((v4u32) a, (v4i32) b);
```

## __m128i __msa2_vmultc_im_haddc_adjc2_acc_s_w4x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultc_im_haddc_adjc2_acc_s_w4x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultc.im.haddc.adjc2.acc.s.w4x.w
Builtin: __builtin_msa2_vmultc_im_haddc_adjc2_acc_s_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4875
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultc.im.haddc.adjc2.acc.s.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultc_im_haddc_adjc2_acc_s_w4x_w((v2i64) ret, (v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmultc_im_haddc_adjc2_s_w4x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultc_im_haddc_adjc2_s_w4x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultc.im.haddc.adjc2.s.w4x.w
Builtin: __builtin_msa2_vmultc_im_haddc_adjc2_s_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4855
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultc.im.haddc.adjc2.s.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultc_im_haddc_adjc2_s_w4x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmultc_im_haddc_adjc4_acc_s_w4x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultc_im_haddc_adjc4_acc_s_w4x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultc.im.haddc.adjc4.acc.s.w4x.h
Builtin: __builtin_msa2_vmultc_im_haddc_adjc4_acc_s_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4916
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultc.im.haddc.adjc4.acc.s.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultc_im_haddc_adjc4_acc_s_w4x_h((v2i64) ret, (v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmultc_im_haddc_adjc4_s_w4x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultc_im_haddc_adjc4_s_w4x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultc.im.haddc.adjc4.s.w4x.h
Builtin: __builtin_msa2_vmultc_im_haddc_adjc4_s_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4896
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultc.im.haddc.adjc4.s.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultc_im_haddc_adjc4_s_w4x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmultc_re_haddc_adjc2_acc_s_w4x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultc_re_haddc_adjc2_acc_s_w4x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultc.re.haddc.adjc2.acc.s.w4x.w
Builtin: __builtin_msa2_vmultc_re_haddc_adjc2_acc_s_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4957
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultc.re.haddc.adjc2.acc.s.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultc_re_haddc_adjc2_acc_s_w4x_w((v2i64) ret, (v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmultc_re_haddc_adjc2_s_w4x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultc_re_haddc_adjc2_s_w4x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultc.re.haddc.adjc2.s.w4x.w
Builtin: __builtin_msa2_vmultc_re_haddc_adjc2_s_w4x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4937
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultc.re.haddc.adjc2.s.w4x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultc_re_haddc_adjc2_s_w4x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmultc_re_haddc_adjc4_acc_s_w4x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultc_re_haddc_adjc4_acc_s_w4x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultc.re.haddc.adjc4.acc.s.w4x.h
Builtin: __builtin_msa2_vmultc_re_haddc_adjc4_acc_s_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4998
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultc.re.haddc.adjc4.acc.s.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultc_re_haddc_adjc4_acc_s_w4x_h((v2i64) ret, (v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmultc_re_haddc_adjc4_s_w4x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultc_re_haddc_adjc4_s_w4x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultc.re.haddc.adjc4.s.w4x.h
Builtin: __builtin_msa2_vmultc_re_haddc_adjc4_s_w4x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:4978
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultc.re.haddc.adjc4.s.w4x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultc_re_haddc_adjc4_s_w4x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmultp_hi_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hi_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hi.w2x.b
Builtin: __builtin_msa2_vmultp_hi_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5144
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.hi.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_hi_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmultp_hi_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hi_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hi.w2x.d
Builtin: __builtin_msa2_vmultp_hi_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5207
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.hi.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_hi_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmultp_hi_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hi_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hi.w2x.h
Builtin: __builtin_msa2_vmultp_hi_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5165
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.hi.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_hi_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmultp_hi_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hi_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hi.w2x.w
Builtin: __builtin_msa2_vmultp_hi_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5186
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.hi.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_hi_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmultp_hi_xacc_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hi_xacc_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hi.xacc.w2x.b
Builtin: __builtin_msa2_vmultp_hi_xacc_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5307
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.hi.xacc.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_hi_xacc_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmultp_hi_xacc_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hi_xacc_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hi.xacc.w2x.d
Builtin: __builtin_msa2_vmultp_hi_xacc_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5367
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.hi.xacc.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_hi_xacc_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmultp_hi_xacc_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hi_xacc_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hi.xacc.w2x.h
Builtin: __builtin_msa2_vmultp_hi_xacc_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5327
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.hi.xacc.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_hi_xacc_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmultp_hi_xacc_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_hi_xacc_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.hi.xacc.w2x.w
Builtin: __builtin_msa2_vmultp_hi_xacc_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5347
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.hi.xacc.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_hi_xacc_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmultp_lo_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_lo_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.lo.w2x.b
Builtin: __builtin_msa2_vmultp_lo_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5060
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.lo.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_lo_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmultp_lo_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_lo_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.lo.w2x.d
Builtin: __builtin_msa2_vmultp_lo_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5123
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.lo.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_lo_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmultp_lo_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_lo_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.lo.w2x.h
Builtin: __builtin_msa2_vmultp_lo_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5081
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.lo.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_lo_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmultp_lo_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_lo_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.lo.w2x.w
Builtin: __builtin_msa2_vmultp_lo_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5102
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.lo.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_lo_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vmultp_lo_xacc_w2x_b (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_lo_xacc_w2x_b (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.lo.xacc.w2x.b
Builtin: __builtin_msa2_vmultp_lo_xacc_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5227
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.lo.xacc.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) * widen(b.byte[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_lo_xacc_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
```

## __m128i __msa2_vmultp_lo_xacc_w2x_d (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_lo_xacc_w2x_d (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.lo.xacc.w2x.d
Builtin: __builtin_msa2_vmultp_lo_xacc_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5287
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.lo.xacc.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) * widen(b.dword[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_lo_xacc_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
```

## __m128i __msa2_vmultp_lo_xacc_w2x_h (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_lo_xacc_w2x_h (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.lo.xacc.w2x.h
Builtin: __builtin_msa2_vmultp_lo_xacc_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5247
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.lo.xacc.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) * widen(b.half[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_lo_xacc_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
```

## __m128i __msa2_vmultp_lo_xacc_w2x_w (__m128i ret, __m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vmultp_lo_xacc_w2x_w (__m128i ret, __m128i a, __m128i b)
#include <msa2.h>
Instruction: vmultp.lo.xacc.w2x.w
Builtin: __builtin_msa2_vmultp_lo_xacc_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5267
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes and accumulation into the first operand. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vmultp.lo.xacc.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
acc = ret;
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) * widen(b.word[j]);
  dst.wide_lane[i] = acc.wide_lane[i] + wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vmultp_lo_xacc_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
```

## __m128i __msa2_vperm_b (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __msa2_vperm_b (__m128i a, __m128i b, __m128i c)
#include <msa2.h>
Instruction: vperm.b
Builtin: __builtin_msa2_vperm_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:392
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vperm.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = select_lane_from_sources(a, b, imm_or_control_vector, i);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_vperm_b ((v16i8) a, (v16i8) b, (v16i8) c);
```

## __m128i __msa2_vsub_even_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.s.w2x.b
Builtin: __builtin_msa2_vsub_even_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5514
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.even.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_even_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vsub_even_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.s.w2x.d
Builtin: __builtin_msa2_vsub_even_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5577
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.even.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_even_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vsub_even_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.s.w2x.h
Builtin: __builtin_msa2_vsub_even_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5535
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.even.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_even_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vsub_even_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.s.w2x.w
Builtin: __builtin_msa2_vsub_even_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5556
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.even.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_even_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vsub_even_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.u.w2x.b
Builtin: __builtin_msa2_vsub_even_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5598
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.even.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_even_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vsub_even_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.u.w2x.d
Builtin: __builtin_msa2_vsub_even_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5661
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.even.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_even_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vsub_even_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.u.w2x.h
Builtin: __builtin_msa2_vsub_even_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5619
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.even.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_even_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vsub_even_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_even_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.even.u.w2x.w
Builtin: __builtin_msa2_vsub_even_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5640
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.even.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_even_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vsub_hi_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.s.w2x.b
Builtin: __builtin_msa2_vsub_hi_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6018
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.hi.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_hi_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vsub_hi_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.s.w2x.d
Builtin: __builtin_msa2_vsub_hi_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6081
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.hi.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_hi_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vsub_hi_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.s.w2x.h
Builtin: __builtin_msa2_vsub_hi_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6039
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.hi.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_hi_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vsub_hi_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.s.w2x.w
Builtin: __builtin_msa2_vsub_hi_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6060
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.hi.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_hi_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vsub_hi_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.u.w2x.b
Builtin: __builtin_msa2_vsub_hi_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6102
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.hi.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_hi_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vsub_hi_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.u.w2x.d
Builtin: __builtin_msa2_vsub_hi_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6165
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.hi.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_hi_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vsub_hi_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.u.w2x.h
Builtin: __builtin_msa2_vsub_hi_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6123
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.hi.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_hi_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vsub_hi_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_hi_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.hi.u.w2x.w
Builtin: __builtin_msa2_vsub_hi_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:6144
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.hi.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_hi_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vsub_lo_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.s.w2x.b
Builtin: __builtin_msa2_vsub_lo_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5850
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.lo.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_lo_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vsub_lo_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.s.w2x.d
Builtin: __builtin_msa2_vsub_lo_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5913
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.lo.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_lo_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vsub_lo_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.s.w2x.h
Builtin: __builtin_msa2_vsub_lo_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5871
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.lo.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_lo_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vsub_lo_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.s.w2x.w
Builtin: __builtin_msa2_vsub_lo_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5892
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.lo.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_lo_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vsub_lo_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.u.w2x.b
Builtin: __builtin_msa2_vsub_lo_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5934
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.lo.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_lo_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vsub_lo_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.u.w2x.d
Builtin: __builtin_msa2_vsub_lo_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5997
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.lo.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_lo_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vsub_lo_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.u.w2x.h
Builtin: __builtin_msa2_vsub_lo_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5955
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.lo.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_lo_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vsub_lo_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_lo_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.lo.u.w2x.w
Builtin: __builtin_msa2_vsub_lo_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5976
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.lo.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_lo_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_vsub_odd_s_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_s_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.s.w2x.b
Builtin: __builtin_msa2_vsub_odd_s_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5682
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.odd.s.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_odd_s_w2x_b((v16i8) a, (v16i8) b);
```

## __m128i __msa2_vsub_odd_s_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_s_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.s.w2x.d
Builtin: __builtin_msa2_vsub_odd_s_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5745
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.odd.s.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_odd_s_w2x_d((v2i64) a, (v2i64) b);
```

## __m128i __msa2_vsub_odd_s_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_s_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.s.w2x.h
Builtin: __builtin_msa2_vsub_odd_s_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5703
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.odd.s.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_odd_s_w2x_h((v8i16) a, (v8i16) b);
```

## __m128i __msa2_vsub_odd_s_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_s_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.s.w2x.w
Builtin: __builtin_msa2_vsub_odd_s_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5724
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.odd.s.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_odd_s_w2x_w((v4i32) a, (v4i32) b);
```

## __m128i __msa2_vsub_odd_u_w2x_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_u_w2x_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.u.w2x.b
Builtin: __builtin_msa2_vsub_odd_u_w2x_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5766
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.odd.u.w2x.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_odd_u_w2x_b((v16u8) a, (v16u8) b);
```

## __m128i __msa2_vsub_odd_u_w2x_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_u_w2x_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.u.w2x.d
Builtin: __builtin_msa2_vsub_odd_u_w2x_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5829
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.odd.u.w2x.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_odd_u_w2x_d((v2u64) a, (v2u64) b);
```

## __m128i __msa2_vsub_odd_u_w2x_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_u_w2x_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.u.w2x.h
Builtin: __builtin_msa2_vsub_odd_u_w2x_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5787
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.odd.u.w2x.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_odd_u_w2x_h((v8u16) a, (v8u16) b);
```

## __m128i __msa2_vsub_odd_u_w2x_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_vsub_odd_u_w2x_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: vsub.odd.u.w2x.w
Builtin: __builtin_msa2_vsub_odd_u_w2x_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:5808
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes over selected source lanes and widened output lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsub.odd.u.w2x.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = 2*i + 1;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i)__builtin_msa2_vsub_odd_u_w2x_w((v4u32) a, (v4u32) b);
```

## __m128i __msa2_w2x_hi_s_b (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_hi_s_b (__m128i a)
#include <msa2.h>
Instruction: w2x.hi.s.b
Builtin: __builtin_msa2_w2x_hi_s_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:428
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for w2x.hi.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_hi_s_b ((v16i8) a);
```

## __m128i __msa2_w2x_hi_s_d (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_hi_s_d (__m128i a)
#include <msa2.h>
Instruction: w2x.hi.s.d
Builtin: __builtin_msa2_w2x_hi_s_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:446
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for w2x.hi.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_hi_s_d ((v2i64) a);
```

## __m128i __msa2_w2x_hi_s_h (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_hi_s_h (__m128i a)
#include <msa2.h>
Instruction: w2x.hi.s.h
Builtin: __builtin_msa2_w2x_hi_s_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:434
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for w2x.hi.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_hi_s_h ((v8i16) a);
```

## __m128i __msa2_w2x_hi_s_w (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_hi_s_w (__m128i a)
#include <msa2.h>
Instruction: w2x.hi.s.w
Builtin: __builtin_msa2_w2x_hi_s_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:440
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for w2x.hi.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i + source_lanes/2;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_hi_s_w ((v4i32) a);
```

## __m128i __msa2_w2x_lo_s_b (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_lo_s_b (__m128i a)
#include <msa2.h>
Instruction: w2x.lo.s.b
Builtin: __builtin_msa2_w2x_lo_s_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:404
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for w2x.lo.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.byte[j]) - widen(b.byte[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_lo_s_b ((v16i8) a);
```

## __m128i __msa2_w2x_lo_s_d (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_lo_s_d (__m128i a)
#include <msa2.h>
Instruction: w2x.lo.s.d
Builtin: __builtin_msa2_w2x_lo_s_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:422
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for w2x.lo.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.dword[j]) - widen(b.dword[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_lo_s_d ((v2i64) a);
```

## __m128i __msa2_w2x_lo_s_h (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_lo_s_h (__m128i a)
#include <msa2.h>
Instruction: w2x.lo.s.h
Builtin: __builtin_msa2_w2x_lo_s_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:410
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for w2x.lo.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.half[j]) - widen(b.half[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_lo_s_h ((v8i16) a);
```

## __m128i __msa2_w2x_lo_s_w (__m128i a)

### Synopsis

```c
__m128i __msa2_w2x_lo_s_w (__m128i a)
#include <msa2.h>
Instruction: w2x.lo.s.w
Builtin: __builtin_msa2_w2x_lo_s_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:416
```

### Description

Rearrange, select, widen, or narrow vector elements according to the mnemonic suffixes and immediate operands. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for w2x.lo.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
source_lanes = number_of_input_lanes;
for each produced wide lane i:
  j = i;
  wide_result = widen(a.word[j]) - widen(b.word[j]);
  dst.wide_lane[i] = wide_result;
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_w2x_lo_s_w ((v4i32) a);
```

