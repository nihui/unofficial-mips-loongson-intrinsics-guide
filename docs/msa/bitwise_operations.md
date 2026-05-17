# Bitwise Operations

Generated from `include/msa.h`. This page contains 52 intrinsics.

<span id="intrinsic-__msa_bclr_b"></span>

## v16u8 __msa_bclr_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_bclr_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: bclr.b
Builtin: __builtin_msa_bclr_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:92
```

### Description

Clear one selected bit in each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] & ~(1 << (b.u8[0] & 7));
dst.u8[1] = a.u8[1] & ~(1 << (b.u8[1] & 7));
dst.u8[2] = a.u8[2] & ~(1 << (b.u8[2] & 7));
dst.u8[3] = a.u8[3] & ~(1 << (b.u8[3] & 7));
dst.u8[4] = a.u8[4] & ~(1 << (b.u8[4] & 7));
dst.u8[5] = a.u8[5] & ~(1 << (b.u8[5] & 7));
dst.u8[6] = a.u8[6] & ~(1 << (b.u8[6] & 7));
dst.u8[7] = a.u8[7] & ~(1 << (b.u8[7] & 7));
dst.u8[8] = a.u8[8] & ~(1 << (b.u8[8] & 7));
dst.u8[9] = a.u8[9] & ~(1 << (b.u8[9] & 7));
dst.u8[10] = a.u8[10] & ~(1 << (b.u8[10] & 7));
dst.u8[11] = a.u8[11] & ~(1 << (b.u8[11] & 7));
dst.u8[12] = a.u8[12] & ~(1 << (b.u8[12] & 7));
dst.u8[13] = a.u8[13] & ~(1 << (b.u8[13] & 7));
dst.u8[14] = a.u8[14] & ~(1 << (b.u8[14] & 7));
dst.u8[15] = a.u8[15] & ~(1 << (b.u8[15] & 7));
```

### Header Mapping

```c
#define __msa_bclr_b __builtin_msa_bclr_b
```

<span id="intrinsic-__msa_bclr_d"></span>

## v2u64 __msa_bclr_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_bclr_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: bclr.d
Builtin: __builtin_msa_bclr_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:95
```

### Description

Clear one selected bit in each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] & ~(1 << (b.u64[0] & 63));
dst.u64[1] = a.u64[1] & ~(1 << (b.u64[1] & 63));
```

### Header Mapping

```c
#define __msa_bclr_d __builtin_msa_bclr_d
```

<span id="intrinsic-__msa_bclr_h"></span>

## v8u16 __msa_bclr_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_bclr_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: bclr.h
Builtin: __builtin_msa_bclr_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:93
```

### Description

Clear one selected bit in each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] & ~(1 << (b.u16[0] & 15));
dst.u16[1] = a.u16[1] & ~(1 << (b.u16[1] & 15));
dst.u16[2] = a.u16[2] & ~(1 << (b.u16[2] & 15));
dst.u16[3] = a.u16[3] & ~(1 << (b.u16[3] & 15));
dst.u16[4] = a.u16[4] & ~(1 << (b.u16[4] & 15));
dst.u16[5] = a.u16[5] & ~(1 << (b.u16[5] & 15));
dst.u16[6] = a.u16[6] & ~(1 << (b.u16[6] & 15));
dst.u16[7] = a.u16[7] & ~(1 << (b.u16[7] & 15));
```

### Header Mapping

```c
#define __msa_bclr_h __builtin_msa_bclr_h
```

<span id="intrinsic-__msa_bclr_w"></span>

## v4u32 __msa_bclr_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_bclr_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: bclr.w
Builtin: __builtin_msa_bclr_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:94
```

### Description

Clear one selected bit in each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] & ~(1 << (b.u32[0] & 31));
dst.u32[1] = a.u32[1] & ~(1 << (b.u32[1] & 31));
dst.u32[2] = a.u32[2] & ~(1 << (b.u32[2] & 31));
dst.u32[3] = a.u32[3] & ~(1 << (b.u32[3] & 31));
```

### Header Mapping

```c
#define __msa_bclr_w __builtin_msa_bclr_w
```

<span id="intrinsic-__msa_bclri_b"></span>

## v16u8 __msa_bclri_b (v16u8 a, int imm)

### Synopsis

```c
v16u8 __msa_bclri_b (v16u8 a, int imm)
#include <msa.h>
Instruction: bclri.b
Builtin: __builtin_msa_bclri_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:96
```

### Description

Clear one selected bit in each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] & ~(1 << (imm));
dst.u8[1] = a.u8[1] & ~(1 << (imm));
dst.u8[2] = a.u8[2] & ~(1 << (imm));
dst.u8[3] = a.u8[3] & ~(1 << (imm));
dst.u8[4] = a.u8[4] & ~(1 << (imm));
dst.u8[5] = a.u8[5] & ~(1 << (imm));
dst.u8[6] = a.u8[6] & ~(1 << (imm));
dst.u8[7] = a.u8[7] & ~(1 << (imm));
dst.u8[8] = a.u8[8] & ~(1 << (imm));
dst.u8[9] = a.u8[9] & ~(1 << (imm));
dst.u8[10] = a.u8[10] & ~(1 << (imm));
dst.u8[11] = a.u8[11] & ~(1 << (imm));
dst.u8[12] = a.u8[12] & ~(1 << (imm));
dst.u8[13] = a.u8[13] & ~(1 << (imm));
dst.u8[14] = a.u8[14] & ~(1 << (imm));
dst.u8[15] = a.u8[15] & ~(1 << (imm));
```

### Header Mapping

```c
#define __msa_bclri_b __builtin_msa_bclri_b
```

<span id="intrinsic-__msa_bclri_d"></span>

## v2u64 __msa_bclri_d (v2u64 a, int imm)

### Synopsis

```c
v2u64 __msa_bclri_d (v2u64 a, int imm)
#include <msa.h>
Instruction: bclri.d
Builtin: __builtin_msa_bclri_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:99
```

### Description

Clear one selected bit in each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] & ~(1 << (imm));
dst.u64[1] = a.u64[1] & ~(1 << (imm));
```

### Header Mapping

```c
#define __msa_bclri_d __builtin_msa_bclri_d
```

<span id="intrinsic-__msa_bclri_h"></span>

## v8u16 __msa_bclri_h (v8u16 a, int imm)

### Synopsis

```c
v8u16 __msa_bclri_h (v8u16 a, int imm)
#include <msa.h>
Instruction: bclri.h
Builtin: __builtin_msa_bclri_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:97
```

### Description

Clear one selected bit in each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] & ~(1 << (imm));
dst.u16[1] = a.u16[1] & ~(1 << (imm));
dst.u16[2] = a.u16[2] & ~(1 << (imm));
dst.u16[3] = a.u16[3] & ~(1 << (imm));
dst.u16[4] = a.u16[4] & ~(1 << (imm));
dst.u16[5] = a.u16[5] & ~(1 << (imm));
dst.u16[6] = a.u16[6] & ~(1 << (imm));
dst.u16[7] = a.u16[7] & ~(1 << (imm));
```

### Header Mapping

```c
#define __msa_bclri_h __builtin_msa_bclri_h
```

<span id="intrinsic-__msa_bclri_w"></span>

## v4u32 __msa_bclri_w (v4u32 a, int imm)

### Synopsis

```c
v4u32 __msa_bclri_w (v4u32 a, int imm)
#include <msa.h>
Instruction: bclri.w
Builtin: __builtin_msa_bclri_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:98
```

### Description

Clear one selected bit in each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] & ~(1 << (imm));
dst.u32[1] = a.u32[1] & ~(1 << (imm));
dst.u32[2] = a.u32[2] & ~(1 << (imm));
dst.u32[3] = a.u32[3] & ~(1 << (imm));
```

### Header Mapping

```c
#define __msa_bclri_w __builtin_msa_bclri_w
```

<span id="intrinsic-__msa_binsl_b"></span>

## v16u8 __msa_binsl_b (v16u8 a, v16u8 b, v16u8 c)

### Synopsis

```c
v16u8 __msa_binsl_b (v16u8 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: binsl.b
Builtin: __builtin_msa_binsl_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:116
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u8[0] = insert_bits(a.u8[0], b.u8[0], most-significant_bits_mask(8, (b.u8[0] & 7) + 1));
dst.u8[1] = insert_bits(a.u8[1], b.u8[1], most-significant_bits_mask(8, (b.u8[1] & 7) + 1));
dst.u8[2] = insert_bits(a.u8[2], b.u8[2], most-significant_bits_mask(8, (b.u8[2] & 7) + 1));
dst.u8[3] = insert_bits(a.u8[3], b.u8[3], most-significant_bits_mask(8, (b.u8[3] & 7) + 1));
dst.u8[4] = insert_bits(a.u8[4], b.u8[4], most-significant_bits_mask(8, (b.u8[4] & 7) + 1));
dst.u8[5] = insert_bits(a.u8[5], b.u8[5], most-significant_bits_mask(8, (b.u8[5] & 7) + 1));
dst.u8[6] = insert_bits(a.u8[6], b.u8[6], most-significant_bits_mask(8, (b.u8[6] & 7) + 1));
dst.u8[7] = insert_bits(a.u8[7], b.u8[7], most-significant_bits_mask(8, (b.u8[7] & 7) + 1));
dst.u8[8] = insert_bits(a.u8[8], b.u8[8], most-significant_bits_mask(8, (b.u8[8] & 7) + 1));
dst.u8[9] = insert_bits(a.u8[9], b.u8[9], most-significant_bits_mask(8, (b.u8[9] & 7) + 1));
dst.u8[10] = insert_bits(a.u8[10], b.u8[10], most-significant_bits_mask(8, (b.u8[10] & 7) + 1));
dst.u8[11] = insert_bits(a.u8[11], b.u8[11], most-significant_bits_mask(8, (b.u8[11] & 7) + 1));
dst.u8[12] = insert_bits(a.u8[12], b.u8[12], most-significant_bits_mask(8, (b.u8[12] & 7) + 1));
dst.u8[13] = insert_bits(a.u8[13], b.u8[13], most-significant_bits_mask(8, (b.u8[13] & 7) + 1));
dst.u8[14] = insert_bits(a.u8[14], b.u8[14], most-significant_bits_mask(8, (b.u8[14] & 7) + 1));
dst.u8[15] = insert_bits(a.u8[15], b.u8[15], most-significant_bits_mask(8, (b.u8[15] & 7) + 1));
```

### Header Mapping

```c
#define __msa_binsl_b __builtin_msa_binsl_b
```

<span id="intrinsic-__msa_binsl_d"></span>

## v2u64 __msa_binsl_d (v2u64 a, v2u64 b, v2u64 c)

### Synopsis

```c
v2u64 __msa_binsl_d (v2u64 a, v2u64 b, v2u64 c)
#include <msa.h>
Instruction: binsl.d
Builtin: __builtin_msa_binsl_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:119
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u64[0] = insert_bits(a.u64[0], b.u64[0], most-significant_bits_mask(64, (b.u64[0] & 63) + 1));
dst.u64[1] = insert_bits(a.u64[1], b.u64[1], most-significant_bits_mask(64, (b.u64[1] & 63) + 1));
```

### Header Mapping

```c
#define __msa_binsl_d __builtin_msa_binsl_d
```

<span id="intrinsic-__msa_binsl_h"></span>

## v8u16 __msa_binsl_h (v8u16 a, v8u16 b, v8u16 c)

### Synopsis

```c
v8u16 __msa_binsl_h (v8u16 a, v8u16 b, v8u16 c)
#include <msa.h>
Instruction: binsl.h
Builtin: __builtin_msa_binsl_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:117
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u16[0] = insert_bits(a.u16[0], b.u16[0], most-significant_bits_mask(16, (b.u16[0] & 15) + 1));
dst.u16[1] = insert_bits(a.u16[1], b.u16[1], most-significant_bits_mask(16, (b.u16[1] & 15) + 1));
dst.u16[2] = insert_bits(a.u16[2], b.u16[2], most-significant_bits_mask(16, (b.u16[2] & 15) + 1));
dst.u16[3] = insert_bits(a.u16[3], b.u16[3], most-significant_bits_mask(16, (b.u16[3] & 15) + 1));
dst.u16[4] = insert_bits(a.u16[4], b.u16[4], most-significant_bits_mask(16, (b.u16[4] & 15) + 1));
dst.u16[5] = insert_bits(a.u16[5], b.u16[5], most-significant_bits_mask(16, (b.u16[5] & 15) + 1));
dst.u16[6] = insert_bits(a.u16[6], b.u16[6], most-significant_bits_mask(16, (b.u16[6] & 15) + 1));
dst.u16[7] = insert_bits(a.u16[7], b.u16[7], most-significant_bits_mask(16, (b.u16[7] & 15) + 1));
```

### Header Mapping

```c
#define __msa_binsl_h __builtin_msa_binsl_h
```

<span id="intrinsic-__msa_binsl_w"></span>

## v4u32 __msa_binsl_w (v4u32 a, v4u32 b, v4u32 c)

### Synopsis

```c
v4u32 __msa_binsl_w (v4u32 a, v4u32 b, v4u32 c)
#include <msa.h>
Instruction: binsl.w
Builtin: __builtin_msa_binsl_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:118
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u32[0] = insert_bits(a.u32[0], b.u32[0], most-significant_bits_mask(32, (b.u32[0] & 31) + 1));
dst.u32[1] = insert_bits(a.u32[1], b.u32[1], most-significant_bits_mask(32, (b.u32[1] & 31) + 1));
dst.u32[2] = insert_bits(a.u32[2], b.u32[2], most-significant_bits_mask(32, (b.u32[2] & 31) + 1));
dst.u32[3] = insert_bits(a.u32[3], b.u32[3], most-significant_bits_mask(32, (b.u32[3] & 31) + 1));
```

### Header Mapping

```c
#define __msa_binsl_w __builtin_msa_binsl_w
```

<span id="intrinsic-__msa_binsli_b"></span>

## v16u8 __msa_binsli_b (v16u8 a, v16u8 b, int imm)

### Synopsis

```c
v16u8 __msa_binsli_b (v16u8 a, v16u8 b, int imm)
#include <msa.h>
Instruction: binsli.b
Builtin: __builtin_msa_binsli_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:120
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u8[0] = insert_bits(a.u8[0], b.u8[0], most-significant_bits_mask(8, imm + 1));
dst.u8[1] = insert_bits(a.u8[1], b.u8[1], most-significant_bits_mask(8, imm + 1));
dst.u8[2] = insert_bits(a.u8[2], b.u8[2], most-significant_bits_mask(8, imm + 1));
dst.u8[3] = insert_bits(a.u8[3], b.u8[3], most-significant_bits_mask(8, imm + 1));
dst.u8[4] = insert_bits(a.u8[4], b.u8[4], most-significant_bits_mask(8, imm + 1));
dst.u8[5] = insert_bits(a.u8[5], b.u8[5], most-significant_bits_mask(8, imm + 1));
dst.u8[6] = insert_bits(a.u8[6], b.u8[6], most-significant_bits_mask(8, imm + 1));
dst.u8[7] = insert_bits(a.u8[7], b.u8[7], most-significant_bits_mask(8, imm + 1));
dst.u8[8] = insert_bits(a.u8[8], b.u8[8], most-significant_bits_mask(8, imm + 1));
dst.u8[9] = insert_bits(a.u8[9], b.u8[9], most-significant_bits_mask(8, imm + 1));
dst.u8[10] = insert_bits(a.u8[10], b.u8[10], most-significant_bits_mask(8, imm + 1));
dst.u8[11] = insert_bits(a.u8[11], b.u8[11], most-significant_bits_mask(8, imm + 1));
dst.u8[12] = insert_bits(a.u8[12], b.u8[12], most-significant_bits_mask(8, imm + 1));
dst.u8[13] = insert_bits(a.u8[13], b.u8[13], most-significant_bits_mask(8, imm + 1));
dst.u8[14] = insert_bits(a.u8[14], b.u8[14], most-significant_bits_mask(8, imm + 1));
dst.u8[15] = insert_bits(a.u8[15], b.u8[15], most-significant_bits_mask(8, imm + 1));
```

### Header Mapping

```c
#define __msa_binsli_b __builtin_msa_binsli_b
```

<span id="intrinsic-__msa_binsli_d"></span>

## v2u64 __msa_binsli_d (v2u64 a, v2u64 b, int imm)

### Synopsis

```c
v2u64 __msa_binsli_d (v2u64 a, v2u64 b, int imm)
#include <msa.h>
Instruction: binsli.d
Builtin: __builtin_msa_binsli_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:123
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u64[0] = insert_bits(a.u64[0], b.u64[0], most-significant_bits_mask(64, imm + 1));
dst.u64[1] = insert_bits(a.u64[1], b.u64[1], most-significant_bits_mask(64, imm + 1));
```

### Header Mapping

```c
#define __msa_binsli_d __builtin_msa_binsli_d
```

<span id="intrinsic-__msa_binsli_h"></span>

## v8u16 __msa_binsli_h (v8u16 a, v8u16 b, int imm)

### Synopsis

```c
v8u16 __msa_binsli_h (v8u16 a, v8u16 b, int imm)
#include <msa.h>
Instruction: binsli.h
Builtin: __builtin_msa_binsli_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:121
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u16[0] = insert_bits(a.u16[0], b.u16[0], most-significant_bits_mask(16, imm + 1));
dst.u16[1] = insert_bits(a.u16[1], b.u16[1], most-significant_bits_mask(16, imm + 1));
dst.u16[2] = insert_bits(a.u16[2], b.u16[2], most-significant_bits_mask(16, imm + 1));
dst.u16[3] = insert_bits(a.u16[3], b.u16[3], most-significant_bits_mask(16, imm + 1));
dst.u16[4] = insert_bits(a.u16[4], b.u16[4], most-significant_bits_mask(16, imm + 1));
dst.u16[5] = insert_bits(a.u16[5], b.u16[5], most-significant_bits_mask(16, imm + 1));
dst.u16[6] = insert_bits(a.u16[6], b.u16[6], most-significant_bits_mask(16, imm + 1));
dst.u16[7] = insert_bits(a.u16[7], b.u16[7], most-significant_bits_mask(16, imm + 1));
```

### Header Mapping

```c
#define __msa_binsli_h __builtin_msa_binsli_h
```

<span id="intrinsic-__msa_binsli_w"></span>

## v4u32 __msa_binsli_w (v4u32 a, v4u32 b, int imm)

### Synopsis

```c
v4u32 __msa_binsli_w (v4u32 a, v4u32 b, int imm)
#include <msa.h>
Instruction: binsli.w
Builtin: __builtin_msa_binsli_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:122
```

### Description

Insert a run of most-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u32[0] = insert_bits(a.u32[0], b.u32[0], most-significant_bits_mask(32, imm + 1));
dst.u32[1] = insert_bits(a.u32[1], b.u32[1], most-significant_bits_mask(32, imm + 1));
dst.u32[2] = insert_bits(a.u32[2], b.u32[2], most-significant_bits_mask(32, imm + 1));
dst.u32[3] = insert_bits(a.u32[3], b.u32[3], most-significant_bits_mask(32, imm + 1));
```

### Header Mapping

```c
#define __msa_binsli_w __builtin_msa_binsli_w
```

<span id="intrinsic-__msa_binsr_b"></span>

## v16u8 __msa_binsr_b (v16u8 a, v16u8 b, v16u8 c)

### Synopsis

```c
v16u8 __msa_binsr_b (v16u8 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: binsr.b
Builtin: __builtin_msa_binsr_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:124
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u8[0] = insert_bits(a.u8[0], b.u8[0], least-significant_bits_mask(8, (b.u8[0] & 7) + 1));
dst.u8[1] = insert_bits(a.u8[1], b.u8[1], least-significant_bits_mask(8, (b.u8[1] & 7) + 1));
dst.u8[2] = insert_bits(a.u8[2], b.u8[2], least-significant_bits_mask(8, (b.u8[2] & 7) + 1));
dst.u8[3] = insert_bits(a.u8[3], b.u8[3], least-significant_bits_mask(8, (b.u8[3] & 7) + 1));
dst.u8[4] = insert_bits(a.u8[4], b.u8[4], least-significant_bits_mask(8, (b.u8[4] & 7) + 1));
dst.u8[5] = insert_bits(a.u8[5], b.u8[5], least-significant_bits_mask(8, (b.u8[5] & 7) + 1));
dst.u8[6] = insert_bits(a.u8[6], b.u8[6], least-significant_bits_mask(8, (b.u8[6] & 7) + 1));
dst.u8[7] = insert_bits(a.u8[7], b.u8[7], least-significant_bits_mask(8, (b.u8[7] & 7) + 1));
dst.u8[8] = insert_bits(a.u8[8], b.u8[8], least-significant_bits_mask(8, (b.u8[8] & 7) + 1));
dst.u8[9] = insert_bits(a.u8[9], b.u8[9], least-significant_bits_mask(8, (b.u8[9] & 7) + 1));
dst.u8[10] = insert_bits(a.u8[10], b.u8[10], least-significant_bits_mask(8, (b.u8[10] & 7) + 1));
dst.u8[11] = insert_bits(a.u8[11], b.u8[11], least-significant_bits_mask(8, (b.u8[11] & 7) + 1));
dst.u8[12] = insert_bits(a.u8[12], b.u8[12], least-significant_bits_mask(8, (b.u8[12] & 7) + 1));
dst.u8[13] = insert_bits(a.u8[13], b.u8[13], least-significant_bits_mask(8, (b.u8[13] & 7) + 1));
dst.u8[14] = insert_bits(a.u8[14], b.u8[14], least-significant_bits_mask(8, (b.u8[14] & 7) + 1));
dst.u8[15] = insert_bits(a.u8[15], b.u8[15], least-significant_bits_mask(8, (b.u8[15] & 7) + 1));
```

### Header Mapping

```c
#define __msa_binsr_b __builtin_msa_binsr_b
```

<span id="intrinsic-__msa_binsr_d"></span>

## v2u64 __msa_binsr_d (v2u64 a, v2u64 b, v2u64 c)

### Synopsis

```c
v2u64 __msa_binsr_d (v2u64 a, v2u64 b, v2u64 c)
#include <msa.h>
Instruction: binsr.d
Builtin: __builtin_msa_binsr_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:127
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u64[0] = insert_bits(a.u64[0], b.u64[0], least-significant_bits_mask(64, (b.u64[0] & 63) + 1));
dst.u64[1] = insert_bits(a.u64[1], b.u64[1], least-significant_bits_mask(64, (b.u64[1] & 63) + 1));
```

### Header Mapping

```c
#define __msa_binsr_d __builtin_msa_binsr_d
```

<span id="intrinsic-__msa_binsr_h"></span>

## v8u16 __msa_binsr_h (v8u16 a, v8u16 b, v8u16 c)

### Synopsis

```c
v8u16 __msa_binsr_h (v8u16 a, v8u16 b, v8u16 c)
#include <msa.h>
Instruction: binsr.h
Builtin: __builtin_msa_binsr_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:125
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u16[0] = insert_bits(a.u16[0], b.u16[0], least-significant_bits_mask(16, (b.u16[0] & 15) + 1));
dst.u16[1] = insert_bits(a.u16[1], b.u16[1], least-significant_bits_mask(16, (b.u16[1] & 15) + 1));
dst.u16[2] = insert_bits(a.u16[2], b.u16[2], least-significant_bits_mask(16, (b.u16[2] & 15) + 1));
dst.u16[3] = insert_bits(a.u16[3], b.u16[3], least-significant_bits_mask(16, (b.u16[3] & 15) + 1));
dst.u16[4] = insert_bits(a.u16[4], b.u16[4], least-significant_bits_mask(16, (b.u16[4] & 15) + 1));
dst.u16[5] = insert_bits(a.u16[5], b.u16[5], least-significant_bits_mask(16, (b.u16[5] & 15) + 1));
dst.u16[6] = insert_bits(a.u16[6], b.u16[6], least-significant_bits_mask(16, (b.u16[6] & 15) + 1));
dst.u16[7] = insert_bits(a.u16[7], b.u16[7], least-significant_bits_mask(16, (b.u16[7] & 15) + 1));
```

### Header Mapping

```c
#define __msa_binsr_h __builtin_msa_binsr_h
```

<span id="intrinsic-__msa_binsr_w"></span>

## v4u32 __msa_binsr_w (v4u32 a, v4u32 b, v4u32 c)

### Synopsis

```c
v4u32 __msa_binsr_w (v4u32 a, v4u32 b, v4u32 c)
#include <msa.h>
Instruction: binsr.w
Builtin: __builtin_msa_binsr_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:126
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u32[0] = insert_bits(a.u32[0], b.u32[0], least-significant_bits_mask(32, (b.u32[0] & 31) + 1));
dst.u32[1] = insert_bits(a.u32[1], b.u32[1], least-significant_bits_mask(32, (b.u32[1] & 31) + 1));
dst.u32[2] = insert_bits(a.u32[2], b.u32[2], least-significant_bits_mask(32, (b.u32[2] & 31) + 1));
dst.u32[3] = insert_bits(a.u32[3], b.u32[3], least-significant_bits_mask(32, (b.u32[3] & 31) + 1));
```

### Header Mapping

```c
#define __msa_binsr_w __builtin_msa_binsr_w
```

<span id="intrinsic-__msa_binsri_b"></span>

## v16u8 __msa_binsri_b (v16u8 a, v16u8 b, int imm)

### Synopsis

```c
v16u8 __msa_binsri_b (v16u8 a, v16u8 b, int imm)
#include <msa.h>
Instruction: binsri.b
Builtin: __builtin_msa_binsri_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:128
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u8[0] = insert_bits(a.u8[0], b.u8[0], least-significant_bits_mask(8, imm + 1));
dst.u8[1] = insert_bits(a.u8[1], b.u8[1], least-significant_bits_mask(8, imm + 1));
dst.u8[2] = insert_bits(a.u8[2], b.u8[2], least-significant_bits_mask(8, imm + 1));
dst.u8[3] = insert_bits(a.u8[3], b.u8[3], least-significant_bits_mask(8, imm + 1));
dst.u8[4] = insert_bits(a.u8[4], b.u8[4], least-significant_bits_mask(8, imm + 1));
dst.u8[5] = insert_bits(a.u8[5], b.u8[5], least-significant_bits_mask(8, imm + 1));
dst.u8[6] = insert_bits(a.u8[6], b.u8[6], least-significant_bits_mask(8, imm + 1));
dst.u8[7] = insert_bits(a.u8[7], b.u8[7], least-significant_bits_mask(8, imm + 1));
dst.u8[8] = insert_bits(a.u8[8], b.u8[8], least-significant_bits_mask(8, imm + 1));
dst.u8[9] = insert_bits(a.u8[9], b.u8[9], least-significant_bits_mask(8, imm + 1));
dst.u8[10] = insert_bits(a.u8[10], b.u8[10], least-significant_bits_mask(8, imm + 1));
dst.u8[11] = insert_bits(a.u8[11], b.u8[11], least-significant_bits_mask(8, imm + 1));
dst.u8[12] = insert_bits(a.u8[12], b.u8[12], least-significant_bits_mask(8, imm + 1));
dst.u8[13] = insert_bits(a.u8[13], b.u8[13], least-significant_bits_mask(8, imm + 1));
dst.u8[14] = insert_bits(a.u8[14], b.u8[14], least-significant_bits_mask(8, imm + 1));
dst.u8[15] = insert_bits(a.u8[15], b.u8[15], least-significant_bits_mask(8, imm + 1));
```

### Header Mapping

```c
#define __msa_binsri_b __builtin_msa_binsri_b
```

<span id="intrinsic-__msa_binsri_d"></span>

## v2u64 __msa_binsri_d (v2u64 a, v2u64 b, int imm)

### Synopsis

```c
v2u64 __msa_binsri_d (v2u64 a, v2u64 b, int imm)
#include <msa.h>
Instruction: binsri.d
Builtin: __builtin_msa_binsri_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:131
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u64[0] = insert_bits(a.u64[0], b.u64[0], least-significant_bits_mask(64, imm + 1));
dst.u64[1] = insert_bits(a.u64[1], b.u64[1], least-significant_bits_mask(64, imm + 1));
```

### Header Mapping

```c
#define __msa_binsri_d __builtin_msa_binsri_d
```

<span id="intrinsic-__msa_binsri_h"></span>

## v8u16 __msa_binsri_h (v8u16 a, v8u16 b, int imm)

### Synopsis

```c
v8u16 __msa_binsri_h (v8u16 a, v8u16 b, int imm)
#include <msa.h>
Instruction: binsri.h
Builtin: __builtin_msa_binsri_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:129
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u16[0] = insert_bits(a.u16[0], b.u16[0], least-significant_bits_mask(16, imm + 1));
dst.u16[1] = insert_bits(a.u16[1], b.u16[1], least-significant_bits_mask(16, imm + 1));
dst.u16[2] = insert_bits(a.u16[2], b.u16[2], least-significant_bits_mask(16, imm + 1));
dst.u16[3] = insert_bits(a.u16[3], b.u16[3], least-significant_bits_mask(16, imm + 1));
dst.u16[4] = insert_bits(a.u16[4], b.u16[4], least-significant_bits_mask(16, imm + 1));
dst.u16[5] = insert_bits(a.u16[5], b.u16[5], least-significant_bits_mask(16, imm + 1));
dst.u16[6] = insert_bits(a.u16[6], b.u16[6], least-significant_bits_mask(16, imm + 1));
dst.u16[7] = insert_bits(a.u16[7], b.u16[7], least-significant_bits_mask(16, imm + 1));
```

### Header Mapping

```c
#define __msa_binsri_h __builtin_msa_binsri_h
```

<span id="intrinsic-__msa_binsri_w"></span>

## v4u32 __msa_binsri_w (v4u32 a, v4u32 b, int imm)

### Synopsis

```c
v4u32 __msa_binsri_w (v4u32 a, v4u32 b, int imm)
#include <msa.h>
Instruction: binsri.w
Builtin: __builtin_msa_binsri_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:130
```

### Description

Insert a run of least-significant bits from `b` into each lane of `a`, with the run length selected by `b` or the immediate.

### Operation

```c
dst.u32[0] = insert_bits(a.u32[0], b.u32[0], least-significant_bits_mask(32, imm + 1));
dst.u32[1] = insert_bits(a.u32[1], b.u32[1], least-significant_bits_mask(32, imm + 1));
dst.u32[2] = insert_bits(a.u32[2], b.u32[2], least-significant_bits_mask(32, imm + 1));
dst.u32[3] = insert_bits(a.u32[3], b.u32[3], least-significant_bits_mask(32, imm + 1));
```

### Header Mapping

```c
#define __msa_binsri_w __builtin_msa_binsri_w
```

<span id="intrinsic-__msa_bneg_b"></span>

## v16u8 __msa_bneg_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_bneg_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: bneg.b
Builtin: __builtin_msa_bneg_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:108
```

### Description

Toggle one selected bit in each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] ^ (1 << (b.u8[0] & 7));
dst.u8[1] = a.u8[1] ^ (1 << (b.u8[1] & 7));
dst.u8[2] = a.u8[2] ^ (1 << (b.u8[2] & 7));
dst.u8[3] = a.u8[3] ^ (1 << (b.u8[3] & 7));
dst.u8[4] = a.u8[4] ^ (1 << (b.u8[4] & 7));
dst.u8[5] = a.u8[5] ^ (1 << (b.u8[5] & 7));
dst.u8[6] = a.u8[6] ^ (1 << (b.u8[6] & 7));
dst.u8[7] = a.u8[7] ^ (1 << (b.u8[7] & 7));
dst.u8[8] = a.u8[8] ^ (1 << (b.u8[8] & 7));
dst.u8[9] = a.u8[9] ^ (1 << (b.u8[9] & 7));
dst.u8[10] = a.u8[10] ^ (1 << (b.u8[10] & 7));
dst.u8[11] = a.u8[11] ^ (1 << (b.u8[11] & 7));
dst.u8[12] = a.u8[12] ^ (1 << (b.u8[12] & 7));
dst.u8[13] = a.u8[13] ^ (1 << (b.u8[13] & 7));
dst.u8[14] = a.u8[14] ^ (1 << (b.u8[14] & 7));
dst.u8[15] = a.u8[15] ^ (1 << (b.u8[15] & 7));
```

### Header Mapping

```c
#define __msa_bneg_b __builtin_msa_bneg_b
```

<span id="intrinsic-__msa_bneg_d"></span>

## v2u64 __msa_bneg_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_bneg_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: bneg.d
Builtin: __builtin_msa_bneg_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:111
```

### Description

Toggle one selected bit in each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] ^ (1 << (b.u64[0] & 63));
dst.u64[1] = a.u64[1] ^ (1 << (b.u64[1] & 63));
```

### Header Mapping

```c
#define __msa_bneg_d __builtin_msa_bneg_d
```

<span id="intrinsic-__msa_bneg_h"></span>

## v8u16 __msa_bneg_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_bneg_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: bneg.h
Builtin: __builtin_msa_bneg_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:109
```

### Description

Toggle one selected bit in each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] ^ (1 << (b.u16[0] & 15));
dst.u16[1] = a.u16[1] ^ (1 << (b.u16[1] & 15));
dst.u16[2] = a.u16[2] ^ (1 << (b.u16[2] & 15));
dst.u16[3] = a.u16[3] ^ (1 << (b.u16[3] & 15));
dst.u16[4] = a.u16[4] ^ (1 << (b.u16[4] & 15));
dst.u16[5] = a.u16[5] ^ (1 << (b.u16[5] & 15));
dst.u16[6] = a.u16[6] ^ (1 << (b.u16[6] & 15));
dst.u16[7] = a.u16[7] ^ (1 << (b.u16[7] & 15));
```

### Header Mapping

```c
#define __msa_bneg_h __builtin_msa_bneg_h
```

<span id="intrinsic-__msa_bneg_w"></span>

## v4u32 __msa_bneg_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_bneg_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: bneg.w
Builtin: __builtin_msa_bneg_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:110
```

### Description

Toggle one selected bit in each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] ^ (1 << (b.u32[0] & 31));
dst.u32[1] = a.u32[1] ^ (1 << (b.u32[1] & 31));
dst.u32[2] = a.u32[2] ^ (1 << (b.u32[2] & 31));
dst.u32[3] = a.u32[3] ^ (1 << (b.u32[3] & 31));
```

### Header Mapping

```c
#define __msa_bneg_w __builtin_msa_bneg_w
```

<span id="intrinsic-__msa_bnegi_b"></span>

## v16u8 __msa_bnegi_b (v16u8 a, int imm)

### Synopsis

```c
v16u8 __msa_bnegi_b (v16u8 a, int imm)
#include <msa.h>
Instruction: bnegi.b
Builtin: __builtin_msa_bnegi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:112
```

### Description

Toggle one selected bit in each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] ^ (1 << (imm));
dst.u8[1] = a.u8[1] ^ (1 << (imm));
dst.u8[2] = a.u8[2] ^ (1 << (imm));
dst.u8[3] = a.u8[3] ^ (1 << (imm));
dst.u8[4] = a.u8[4] ^ (1 << (imm));
dst.u8[5] = a.u8[5] ^ (1 << (imm));
dst.u8[6] = a.u8[6] ^ (1 << (imm));
dst.u8[7] = a.u8[7] ^ (1 << (imm));
dst.u8[8] = a.u8[8] ^ (1 << (imm));
dst.u8[9] = a.u8[9] ^ (1 << (imm));
dst.u8[10] = a.u8[10] ^ (1 << (imm));
dst.u8[11] = a.u8[11] ^ (1 << (imm));
dst.u8[12] = a.u8[12] ^ (1 << (imm));
dst.u8[13] = a.u8[13] ^ (1 << (imm));
dst.u8[14] = a.u8[14] ^ (1 << (imm));
dst.u8[15] = a.u8[15] ^ (1 << (imm));
```

### Header Mapping

```c
#define __msa_bnegi_b __builtin_msa_bnegi_b
```

<span id="intrinsic-__msa_bnegi_d"></span>

## v2u64 __msa_bnegi_d (v2u64 a, int imm)

### Synopsis

```c
v2u64 __msa_bnegi_d (v2u64 a, int imm)
#include <msa.h>
Instruction: bnegi.d
Builtin: __builtin_msa_bnegi_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:115
```

### Description

Toggle one selected bit in each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] ^ (1 << (imm));
dst.u64[1] = a.u64[1] ^ (1 << (imm));
```

### Header Mapping

```c
#define __msa_bnegi_d __builtin_msa_bnegi_d
```

<span id="intrinsic-__msa_bnegi_h"></span>

## v8u16 __msa_bnegi_h (v8u16 a, int imm)

### Synopsis

```c
v8u16 __msa_bnegi_h (v8u16 a, int imm)
#include <msa.h>
Instruction: bnegi.h
Builtin: __builtin_msa_bnegi_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:113
```

### Description

Toggle one selected bit in each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] ^ (1 << (imm));
dst.u16[1] = a.u16[1] ^ (1 << (imm));
dst.u16[2] = a.u16[2] ^ (1 << (imm));
dst.u16[3] = a.u16[3] ^ (1 << (imm));
dst.u16[4] = a.u16[4] ^ (1 << (imm));
dst.u16[5] = a.u16[5] ^ (1 << (imm));
dst.u16[6] = a.u16[6] ^ (1 << (imm));
dst.u16[7] = a.u16[7] ^ (1 << (imm));
```

### Header Mapping

```c
#define __msa_bnegi_h __builtin_msa_bnegi_h
```

<span id="intrinsic-__msa_bnegi_w"></span>

## v4u32 __msa_bnegi_w (v4u32 a, int imm)

### Synopsis

```c
v4u32 __msa_bnegi_w (v4u32 a, int imm)
#include <msa.h>
Instruction: bnegi.w
Builtin: __builtin_msa_bnegi_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:114
```

### Description

Toggle one selected bit in each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] ^ (1 << (imm));
dst.u32[1] = a.u32[1] ^ (1 << (imm));
dst.u32[2] = a.u32[2] ^ (1 << (imm));
dst.u32[3] = a.u32[3] ^ (1 << (imm));
```

### Header Mapping

```c
#define __msa_bnegi_w __builtin_msa_bnegi_w
```

<span id="intrinsic-__msa_bset_b"></span>

## v16u8 __msa_bset_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_bset_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: bset.b
Builtin: __builtin_msa_bset_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:100
```

### Description

Set one selected bit in each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] | (1 << (b.u8[0] & 7));
dst.u8[1] = a.u8[1] | (1 << (b.u8[1] & 7));
dst.u8[2] = a.u8[2] | (1 << (b.u8[2] & 7));
dst.u8[3] = a.u8[3] | (1 << (b.u8[3] & 7));
dst.u8[4] = a.u8[4] | (1 << (b.u8[4] & 7));
dst.u8[5] = a.u8[5] | (1 << (b.u8[5] & 7));
dst.u8[6] = a.u8[6] | (1 << (b.u8[6] & 7));
dst.u8[7] = a.u8[7] | (1 << (b.u8[7] & 7));
dst.u8[8] = a.u8[8] | (1 << (b.u8[8] & 7));
dst.u8[9] = a.u8[9] | (1 << (b.u8[9] & 7));
dst.u8[10] = a.u8[10] | (1 << (b.u8[10] & 7));
dst.u8[11] = a.u8[11] | (1 << (b.u8[11] & 7));
dst.u8[12] = a.u8[12] | (1 << (b.u8[12] & 7));
dst.u8[13] = a.u8[13] | (1 << (b.u8[13] & 7));
dst.u8[14] = a.u8[14] | (1 << (b.u8[14] & 7));
dst.u8[15] = a.u8[15] | (1 << (b.u8[15] & 7));
```

### Header Mapping

```c
#define __msa_bset_b __builtin_msa_bset_b
```

<span id="intrinsic-__msa_bset_d"></span>

## v2u64 __msa_bset_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_bset_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: bset.d
Builtin: __builtin_msa_bset_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:103
```

### Description

Set one selected bit in each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] | (1 << (b.u64[0] & 63));
dst.u64[1] = a.u64[1] | (1 << (b.u64[1] & 63));
```

### Header Mapping

```c
#define __msa_bset_d __builtin_msa_bset_d
```

<span id="intrinsic-__msa_bset_h"></span>

## v8u16 __msa_bset_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_bset_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: bset.h
Builtin: __builtin_msa_bset_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:101
```

### Description

Set one selected bit in each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] | (1 << (b.u16[0] & 15));
dst.u16[1] = a.u16[1] | (1 << (b.u16[1] & 15));
dst.u16[2] = a.u16[2] | (1 << (b.u16[2] & 15));
dst.u16[3] = a.u16[3] | (1 << (b.u16[3] & 15));
dst.u16[4] = a.u16[4] | (1 << (b.u16[4] & 15));
dst.u16[5] = a.u16[5] | (1 << (b.u16[5] & 15));
dst.u16[6] = a.u16[6] | (1 << (b.u16[6] & 15));
dst.u16[7] = a.u16[7] | (1 << (b.u16[7] & 15));
```

### Header Mapping

```c
#define __msa_bset_h __builtin_msa_bset_h
```

<span id="intrinsic-__msa_bset_w"></span>

## v4u32 __msa_bset_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_bset_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: bset.w
Builtin: __builtin_msa_bset_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:102
```

### Description

Set one selected bit in each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] | (1 << (b.u32[0] & 31));
dst.u32[1] = a.u32[1] | (1 << (b.u32[1] & 31));
dst.u32[2] = a.u32[2] | (1 << (b.u32[2] & 31));
dst.u32[3] = a.u32[3] | (1 << (b.u32[3] & 31));
```

### Header Mapping

```c
#define __msa_bset_w __builtin_msa_bset_w
```

<span id="intrinsic-__msa_bseti_b"></span>

## v16u8 __msa_bseti_b (v16u8 a, int imm)

### Synopsis

```c
v16u8 __msa_bseti_b (v16u8 a, int imm)
#include <msa.h>
Instruction: bseti.b
Builtin: __builtin_msa_bseti_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:104
```

### Description

Set one selected bit in each u8 lane.

### Operation

```c
dst.u8[0] = a.u8[0] | (1 << (imm));
dst.u8[1] = a.u8[1] | (1 << (imm));
dst.u8[2] = a.u8[2] | (1 << (imm));
dst.u8[3] = a.u8[3] | (1 << (imm));
dst.u8[4] = a.u8[4] | (1 << (imm));
dst.u8[5] = a.u8[5] | (1 << (imm));
dst.u8[6] = a.u8[6] | (1 << (imm));
dst.u8[7] = a.u8[7] | (1 << (imm));
dst.u8[8] = a.u8[8] | (1 << (imm));
dst.u8[9] = a.u8[9] | (1 << (imm));
dst.u8[10] = a.u8[10] | (1 << (imm));
dst.u8[11] = a.u8[11] | (1 << (imm));
dst.u8[12] = a.u8[12] | (1 << (imm));
dst.u8[13] = a.u8[13] | (1 << (imm));
dst.u8[14] = a.u8[14] | (1 << (imm));
dst.u8[15] = a.u8[15] | (1 << (imm));
```

### Header Mapping

```c
#define __msa_bseti_b __builtin_msa_bseti_b
```

<span id="intrinsic-__msa_bseti_d"></span>

## v2u64 __msa_bseti_d (v2u64 a, int imm)

### Synopsis

```c
v2u64 __msa_bseti_d (v2u64 a, int imm)
#include <msa.h>
Instruction: bseti.d
Builtin: __builtin_msa_bseti_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:107
```

### Description

Set one selected bit in each u64 lane.

### Operation

```c
dst.u64[0] = a.u64[0] | (1 << (imm));
dst.u64[1] = a.u64[1] | (1 << (imm));
```

### Header Mapping

```c
#define __msa_bseti_d __builtin_msa_bseti_d
```

<span id="intrinsic-__msa_bseti_h"></span>

## v8u16 __msa_bseti_h (v8u16 a, int imm)

### Synopsis

```c
v8u16 __msa_bseti_h (v8u16 a, int imm)
#include <msa.h>
Instruction: bseti.h
Builtin: __builtin_msa_bseti_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:105
```

### Description

Set one selected bit in each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] | (1 << (imm));
dst.u16[1] = a.u16[1] | (1 << (imm));
dst.u16[2] = a.u16[2] | (1 << (imm));
dst.u16[3] = a.u16[3] | (1 << (imm));
dst.u16[4] = a.u16[4] | (1 << (imm));
dst.u16[5] = a.u16[5] | (1 << (imm));
dst.u16[6] = a.u16[6] | (1 << (imm));
dst.u16[7] = a.u16[7] | (1 << (imm));
```

### Header Mapping

```c
#define __msa_bseti_h __builtin_msa_bseti_h
```

<span id="intrinsic-__msa_bseti_w"></span>

## v4u32 __msa_bseti_w (v4u32 a, int imm)

### Synopsis

```c
v4u32 __msa_bseti_w (v4u32 a, int imm)
#include <msa.h>
Instruction: bseti.w
Builtin: __builtin_msa_bseti_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:106
```

### Description

Set one selected bit in each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] | (1 << (imm));
dst.u32[1] = a.u32[1] | (1 << (imm));
dst.u32[2] = a.u32[2] | (1 << (imm));
dst.u32[3] = a.u32[3] | (1 << (imm));
```

### Header Mapping

```c
#define __msa_bseti_w __builtin_msa_bseti_w
```

<span id="intrinsic-__msa_nloc_b"></span>

## v16i8 __msa_nloc_b (v16i8 a)

### Synopsis

```c
v16i8 __msa_nloc_b (v16i8 a)
#include <msa.h>
Instruction: nloc.b
Builtin: __builtin_msa_nloc_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:429
```

### Description

Count leading one bits independently in each u8 lane.

### Operation

```c
dst.u8[0] = count_leading_ones(a.u8[0]);
dst.u8[1] = count_leading_ones(a.u8[1]);
dst.u8[2] = count_leading_ones(a.u8[2]);
dst.u8[3] = count_leading_ones(a.u8[3]);
dst.u8[4] = count_leading_ones(a.u8[4]);
dst.u8[5] = count_leading_ones(a.u8[5]);
dst.u8[6] = count_leading_ones(a.u8[6]);
dst.u8[7] = count_leading_ones(a.u8[7]);
dst.u8[8] = count_leading_ones(a.u8[8]);
dst.u8[9] = count_leading_ones(a.u8[9]);
dst.u8[10] = count_leading_ones(a.u8[10]);
dst.u8[11] = count_leading_ones(a.u8[11]);
dst.u8[12] = count_leading_ones(a.u8[12]);
dst.u8[13] = count_leading_ones(a.u8[13]);
dst.u8[14] = count_leading_ones(a.u8[14]);
dst.u8[15] = count_leading_ones(a.u8[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_nloc_b __builtin_msa_nloc_b
```

<span id="intrinsic-__msa_nloc_d"></span>

## v2i64 __msa_nloc_d (v2i64 a)

### Synopsis

```c
v2i64 __msa_nloc_d (v2i64 a)
#include <msa.h>
Instruction: nloc.d
Builtin: __builtin_msa_nloc_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:432
```

### Description

Count leading one bits independently in each u64 lane.

### Operation

```c
dst.u64[0] = count_leading_ones(a.u64[0]);
dst.u64[1] = count_leading_ones(a.u64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_nloc_d __builtin_msa_nloc_d
```

<span id="intrinsic-__msa_nloc_h"></span>

## v8i16 __msa_nloc_h (v8i16 a)

### Synopsis

```c
v8i16 __msa_nloc_h (v8i16 a)
#include <msa.h>
Instruction: nloc.h
Builtin: __builtin_msa_nloc_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:430
```

### Description

Count leading one bits independently in each u16 lane.

### Operation

```c
dst.u16[0] = count_leading_ones(a.u16[0]);
dst.u16[1] = count_leading_ones(a.u16[1]);
dst.u16[2] = count_leading_ones(a.u16[2]);
dst.u16[3] = count_leading_ones(a.u16[3]);
dst.u16[4] = count_leading_ones(a.u16[4]);
dst.u16[5] = count_leading_ones(a.u16[5]);
dst.u16[6] = count_leading_ones(a.u16[6]);
dst.u16[7] = count_leading_ones(a.u16[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_nloc_h __builtin_msa_nloc_h
```

<span id="intrinsic-__msa_nloc_w"></span>

## v4i32 __msa_nloc_w (v4i32 a)

### Synopsis

```c
v4i32 __msa_nloc_w (v4i32 a)
#include <msa.h>
Instruction: nloc.w
Builtin: __builtin_msa_nloc_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:431
```

### Description

Count leading one bits independently in each u32 lane.

### Operation

```c
dst.u32[0] = count_leading_ones(a.u32[0]);
dst.u32[1] = count_leading_ones(a.u32[1]);
dst.u32[2] = count_leading_ones(a.u32[2]);
dst.u32[3] = count_leading_ones(a.u32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_nloc_w __builtin_msa_nloc_w
```

<span id="intrinsic-__msa_nlzc_b"></span>

## v16i8 __msa_nlzc_b (v16i8 a)

### Synopsis

```c
v16i8 __msa_nlzc_b (v16i8 a)
#include <msa.h>
Instruction: nlzc.b
Builtin: __builtin_msa_nlzc_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:433
```

### Description

Count leading zero bits independently in each u8 lane.

### Operation

```c
dst.u8[0] = count_leading_zeros(a.u8[0]);
dst.u8[1] = count_leading_zeros(a.u8[1]);
dst.u8[2] = count_leading_zeros(a.u8[2]);
dst.u8[3] = count_leading_zeros(a.u8[3]);
dst.u8[4] = count_leading_zeros(a.u8[4]);
dst.u8[5] = count_leading_zeros(a.u8[5]);
dst.u8[6] = count_leading_zeros(a.u8[6]);
dst.u8[7] = count_leading_zeros(a.u8[7]);
dst.u8[8] = count_leading_zeros(a.u8[8]);
dst.u8[9] = count_leading_zeros(a.u8[9]);
dst.u8[10] = count_leading_zeros(a.u8[10]);
dst.u8[11] = count_leading_zeros(a.u8[11]);
dst.u8[12] = count_leading_zeros(a.u8[12]);
dst.u8[13] = count_leading_zeros(a.u8[13]);
dst.u8[14] = count_leading_zeros(a.u8[14]);
dst.u8[15] = count_leading_zeros(a.u8[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_nlzc_b __builtin_msa_nlzc_b
```

<span id="intrinsic-__msa_nlzc_d"></span>

## v2i64 __msa_nlzc_d (v2i64 a)

### Synopsis

```c
v2i64 __msa_nlzc_d (v2i64 a)
#include <msa.h>
Instruction: nlzc.d
Builtin: __builtin_msa_nlzc_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:436
```

### Description

Count leading zero bits independently in each u64 lane.

### Operation

```c
dst.u64[0] = count_leading_zeros(a.u64[0]);
dst.u64[1] = count_leading_zeros(a.u64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_nlzc_d __builtin_msa_nlzc_d
```

<span id="intrinsic-__msa_nlzc_h"></span>

## v8i16 __msa_nlzc_h (v8i16 a)

### Synopsis

```c
v8i16 __msa_nlzc_h (v8i16 a)
#include <msa.h>
Instruction: nlzc.h
Builtin: __builtin_msa_nlzc_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:434
```

### Description

Count leading zero bits independently in each u16 lane.

### Operation

```c
dst.u16[0] = count_leading_zeros(a.u16[0]);
dst.u16[1] = count_leading_zeros(a.u16[1]);
dst.u16[2] = count_leading_zeros(a.u16[2]);
dst.u16[3] = count_leading_zeros(a.u16[3]);
dst.u16[4] = count_leading_zeros(a.u16[4]);
dst.u16[5] = count_leading_zeros(a.u16[5]);
dst.u16[6] = count_leading_zeros(a.u16[6]);
dst.u16[7] = count_leading_zeros(a.u16[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_nlzc_h __builtin_msa_nlzc_h
```

<span id="intrinsic-__msa_nlzc_w"></span>

## v4i32 __msa_nlzc_w (v4i32 a)

### Synopsis

```c
v4i32 __msa_nlzc_w (v4i32 a)
#include <msa.h>
Instruction: nlzc.w
Builtin: __builtin_msa_nlzc_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:435
```

### Description

Count leading zero bits independently in each u32 lane.

### Operation

```c
dst.u32[0] = count_leading_zeros(a.u32[0]);
dst.u32[1] = count_leading_zeros(a.u32[1]);
dst.u32[2] = count_leading_zeros(a.u32[2]);
dst.u32[3] = count_leading_zeros(a.u32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_nlzc_w __builtin_msa_nlzc_w
```

<span id="intrinsic-__msa_pcnt_b"></span>

## v16i8 __msa_pcnt_b (v16i8 a)

### Synopsis

```c
v16i8 __msa_pcnt_b (v16i8 a)
#include <msa.h>
Instruction: pcnt.b
Builtin: __builtin_msa_pcnt_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:425
```

### Description

Count one bits independently in each u8 lane.

### Operation

```c
dst.u8[0] = popcount(a.u8[0]);
dst.u8[1] = popcount(a.u8[1]);
dst.u8[2] = popcount(a.u8[2]);
dst.u8[3] = popcount(a.u8[3]);
dst.u8[4] = popcount(a.u8[4]);
dst.u8[5] = popcount(a.u8[5]);
dst.u8[6] = popcount(a.u8[6]);
dst.u8[7] = popcount(a.u8[7]);
dst.u8[8] = popcount(a.u8[8]);
dst.u8[9] = popcount(a.u8[9]);
dst.u8[10] = popcount(a.u8[10]);
dst.u8[11] = popcount(a.u8[11]);
dst.u8[12] = popcount(a.u8[12]);
dst.u8[13] = popcount(a.u8[13]);
dst.u8[14] = popcount(a.u8[14]);
dst.u8[15] = popcount(a.u8[15]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_pcnt_b __builtin_msa_pcnt_b
```

<span id="intrinsic-__msa_pcnt_d"></span>

## v2i64 __msa_pcnt_d (v2i64 a)

### Synopsis

```c
v2i64 __msa_pcnt_d (v2i64 a)
#include <msa.h>
Instruction: pcnt.d
Builtin: __builtin_msa_pcnt_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:428
```

### Description

Count one bits independently in each u64 lane.

### Operation

```c
dst.u64[0] = popcount(a.u64[0]);
dst.u64[1] = popcount(a.u64[1]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_pcnt_d __builtin_msa_pcnt_d
```

<span id="intrinsic-__msa_pcnt_h"></span>

## v8i16 __msa_pcnt_h (v8i16 a)

### Synopsis

```c
v8i16 __msa_pcnt_h (v8i16 a)
#include <msa.h>
Instruction: pcnt.h
Builtin: __builtin_msa_pcnt_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:426
```

### Description

Count one bits independently in each u16 lane.

### Operation

```c
dst.u16[0] = popcount(a.u16[0]);
dst.u16[1] = popcount(a.u16[1]);
dst.u16[2] = popcount(a.u16[2]);
dst.u16[3] = popcount(a.u16[3]);
dst.u16[4] = popcount(a.u16[4]);
dst.u16[5] = popcount(a.u16[5]);
dst.u16[6] = popcount(a.u16[6]);
dst.u16[7] = popcount(a.u16[7]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_pcnt_h __builtin_msa_pcnt_h
```

<span id="intrinsic-__msa_pcnt_w"></span>

## v4i32 __msa_pcnt_w (v4i32 a)

### Synopsis

```c
v4i32 __msa_pcnt_w (v4i32 a)
#include <msa.h>
Instruction: pcnt.w
Builtin: __builtin_msa_pcnt_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:427
```

### Description

Count one bits independently in each u32 lane.

### Operation

```c
dst.u32[0] = popcount(a.u32[0]);
dst.u32[1] = popcount(a.u32[1]);
dst.u32[2] = popcount(a.u32[2]);
dst.u32[3] = popcount(a.u32[3]);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __msa_pcnt_w __builtin_msa_pcnt_w
```

