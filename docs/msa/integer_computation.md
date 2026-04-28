# Integer Computation

Generated from `include/msa.h`. This page contains 150 intrinsics.

## v16i8 __msa_add_a_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_add_a_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: add.a.b
Builtin: __builtin_msa_add_a_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:244
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for add.a.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = abs(a.byte[i]) + abs(b.byte[i]);
```

### Header Mapping

```c
#define __msa_add_a_b __builtin_msa_add_a_b
```

## v2i64 __msa_add_a_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_add_a_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: add.a.d
Builtin: __builtin_msa_add_a_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:247
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for add.a.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = abs(a.dword[i]) + abs(b.dword[i]);
```

### Header Mapping

```c
#define __msa_add_a_d __builtin_msa_add_a_d
```

## v8i16 __msa_add_a_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_add_a_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: add.a.h
Builtin: __builtin_msa_add_a_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:245
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for add.a.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = abs(a.half[i]) + abs(b.half[i]);
```

### Header Mapping

```c
#define __msa_add_a_h __builtin_msa_add_a_h
```

## v4i32 __msa_add_a_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_add_a_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: add.a.w
Builtin: __builtin_msa_add_a_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:246
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for add.a.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = abs(a.word[i]) + abs(b.word[i]);
```

### Header Mapping

```c
#define __msa_add_a_w __builtin_msa_add_a_w
```

## v16i8 __msa_adds_a_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_adds_a_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: adds.a.b
Builtin: __builtin_msa_adds_a_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:248
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for adds.a.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = saturate(a.byte[i] + b.byte[i], 8, signedness);
```

### Header Mapping

```c
#define __msa_adds_a_b __builtin_msa_adds_a_b
```

## v2i64 __msa_adds_a_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_adds_a_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: adds.a.d
Builtin: __builtin_msa_adds_a_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:251
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for adds.a.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = saturate(a.dword[i] + b.dword[i], 64, signedness);
```

### Header Mapping

```c
#define __msa_adds_a_d __builtin_msa_adds_a_d
```

## v8i16 __msa_adds_a_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_adds_a_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: adds.a.h
Builtin: __builtin_msa_adds_a_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:249
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for adds.a.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = saturate(a.half[i] + b.half[i], 16, signedness);
```

### Header Mapping

```c
#define __msa_adds_a_h __builtin_msa_adds_a_h
```

## v4i32 __msa_adds_a_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_adds_a_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: adds.a.w
Builtin: __builtin_msa_adds_a_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:250
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for adds.a.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = saturate(a.word[i] + b.word[i], 32, signedness);
```

### Header Mapping

```c
#define __msa_adds_a_w __builtin_msa_adds_a_w
```

## v16i8 __msa_adds_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_adds_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: adds.s.b
Builtin: __builtin_msa_adds_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:252
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for adds.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = saturate(a.byte[i] + b.byte[i], 8, signedness);
```

### Header Mapping

```c
#define __msa_adds_s_b __builtin_msa_adds_s_b
```

## v2i64 __msa_adds_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_adds_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: adds.s.d
Builtin: __builtin_msa_adds_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:255
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for adds.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = saturate(a.dword[i] + b.dword[i], 64, signedness);
```

### Header Mapping

```c
#define __msa_adds_s_d __builtin_msa_adds_s_d
```

## v8i16 __msa_adds_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_adds_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: adds.s.h
Builtin: __builtin_msa_adds_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:253
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for adds.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = saturate(a.half[i] + b.half[i], 16, signedness);
```

### Header Mapping

```c
#define __msa_adds_s_h __builtin_msa_adds_s_h
```

## v4i32 __msa_adds_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_adds_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: adds.s.w
Builtin: __builtin_msa_adds_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:254
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for adds.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = saturate(a.word[i] + b.word[i], 32, signedness);
```

### Header Mapping

```c
#define __msa_adds_s_w __builtin_msa_adds_s_w
```

## v16u8 __msa_adds_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_adds_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: adds.u.b
Builtin: __builtin_msa_adds_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:256
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for adds.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = saturate(a.byte[i] + b.byte[i], 8, signedness);
```

### Header Mapping

```c
#define __msa_adds_u_b __builtin_msa_adds_u_b
```

## v2u64 __msa_adds_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_adds_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: adds.u.d
Builtin: __builtin_msa_adds_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:259
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for adds.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = saturate(a.dword[i] + b.dword[i], 64, signedness);
```

### Header Mapping

```c
#define __msa_adds_u_d __builtin_msa_adds_u_d
```

## v8u16 __msa_adds_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_adds_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: adds.u.h
Builtin: __builtin_msa_adds_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:257
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for adds.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = saturate(a.half[i] + b.half[i], 16, signedness);
```

### Header Mapping

```c
#define __msa_adds_u_h __builtin_msa_adds_u_h
```

## v4u32 __msa_adds_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_adds_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: adds.u.w
Builtin: __builtin_msa_adds_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:258
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for adds.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = saturate(a.word[i] + b.word[i], 32, signedness);
```

### Header Mapping

```c
#define __msa_adds_u_w __builtin_msa_adds_u_w
```

## v16i8 __msa_addv_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_addv_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: addv.b
Builtin: __builtin_msa_addv_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:132
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for addv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = a.byte[i] + b.byte[i];
```

### Header Mapping

```c
#define __msa_addv_b __builtin_msa_addv_b
```

## v2i64 __msa_addv_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_addv_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: addv.d
Builtin: __builtin_msa_addv_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:135
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for addv.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = a.dword[i] + b.dword[i];
```

### Header Mapping

```c
#define __msa_addv_d __builtin_msa_addv_d
```

## v8i16 __msa_addv_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_addv_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: addv.h
Builtin: __builtin_msa_addv_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:133
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for addv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
#define __msa_addv_h __builtin_msa_addv_h
```

## v4i32 __msa_addv_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_addv_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: addv.w
Builtin: __builtin_msa_addv_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:134
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for addv.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
#define __msa_addv_w __builtin_msa_addv_w
```

## v16i8 __msa_addvi_b (v16i8 a, int imm0_31)

### Synopsis

```c
v16i8 __msa_addvi_b (v16i8 a, int imm0_31)
#include <msa.h>
Instruction: addvi.b
Builtin: __builtin_msa_addvi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:136
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for addvi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_31;
for i in 0..15:
  dst.byte[i] = a.byte[i] + imm;
```

### Header Mapping

```c
#define __msa_addvi_b __builtin_msa_addvi_b
```

## v2i64 __msa_addvi_d (v2i64 a, int imm0_31)

### Synopsis

```c
v2i64 __msa_addvi_d (v2i64 a, int imm0_31)
#include <msa.h>
Instruction: addvi.d
Builtin: __builtin_msa_addvi_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:139
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for addvi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_31;
for i in 0..1:
  dst.dword[i] = a.dword[i] + imm;
```

### Header Mapping

```c
#define __msa_addvi_d __builtin_msa_addvi_d
```

## v8i16 __msa_addvi_h (v8i16 a, int imm0_31)

### Synopsis

```c
v8i16 __msa_addvi_h (v8i16 a, int imm0_31)
#include <msa.h>
Instruction: addvi.h
Builtin: __builtin_msa_addvi_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:137
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for addvi.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_31;
for i in 0..7:
  dst.half[i] = a.half[i] + imm;
```

### Header Mapping

```c
#define __msa_addvi_h __builtin_msa_addvi_h
```

## v4i32 __msa_addvi_w (v4i32 a, int imm0_31)

### Synopsis

```c
v4i32 __msa_addvi_w (v4i32 a, int imm0_31)
#include <msa.h>
Instruction: addvi.w
Builtin: __builtin_msa_addvi_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:138
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for addvi.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = a.word[i] + imm;
```

### Header Mapping

```c
#define __msa_addvi_w __builtin_msa_addvi_w
```

## v16i8 __msa_asub_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_asub_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: asub.s.b
Builtin: __builtin_msa_asub_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:292
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for asub.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = abs(a.byte[i] - b.byte[i]);
```

### Header Mapping

```c
#define __msa_asub_s_b __builtin_msa_asub_s_b
```

## v2i64 __msa_asub_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_asub_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: asub.s.d
Builtin: __builtin_msa_asub_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:295
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for asub.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = abs(a.dword[i] - b.dword[i]);
```

### Header Mapping

```c
#define __msa_asub_s_d __builtin_msa_asub_s_d
```

## v8i16 __msa_asub_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_asub_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: asub.s.h
Builtin: __builtin_msa_asub_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:293
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for asub.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = abs(a.half[i] - b.half[i]);
```

### Header Mapping

```c
#define __msa_asub_s_h __builtin_msa_asub_s_h
```

## v4i32 __msa_asub_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_asub_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: asub.s.w
Builtin: __builtin_msa_asub_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:294
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for asub.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = abs(a.word[i] - b.word[i]);
```

### Header Mapping

```c
#define __msa_asub_s_w __builtin_msa_asub_s_w
```

## v16u8 __msa_asub_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_asub_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: asub.u.b
Builtin: __builtin_msa_asub_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:296
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for asub.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = abs(a.byte[i] - b.byte[i]);
```

### Header Mapping

```c
#define __msa_asub_u_b __builtin_msa_asub_u_b
```

## v2u64 __msa_asub_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_asub_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: asub.u.d
Builtin: __builtin_msa_asub_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:299
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for asub.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = abs(a.dword[i] - b.dword[i]);
```

### Header Mapping

```c
#define __msa_asub_u_d __builtin_msa_asub_u_d
```

## v8u16 __msa_asub_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_asub_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: asub.u.h
Builtin: __builtin_msa_asub_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:297
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for asub.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = abs(a.half[i] - b.half[i]);
```

### Header Mapping

```c
#define __msa_asub_u_h __builtin_msa_asub_u_h
```

## v4u32 __msa_asub_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_asub_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: asub.u.w
Builtin: __builtin_msa_asub_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:298
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for asub.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = abs(a.word[i] - b.word[i]);
```

### Header Mapping

```c
#define __msa_asub_u_w __builtin_msa_asub_u_w
```

## v16i8 __msa_ave_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_ave_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: ave.s.b
Builtin: __builtin_msa_ave_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:260
```

### Description

Compute lane-wise rounded average values for 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ave.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = floor_average(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
#define __msa_ave_s_b __builtin_msa_ave_s_b
```

## v2i64 __msa_ave_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_ave_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: ave.s.d
Builtin: __builtin_msa_ave_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:263
```

### Description

Compute lane-wise rounded average values for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ave.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = floor_average(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
#define __msa_ave_s_d __builtin_msa_ave_s_d
```

## v8i16 __msa_ave_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_ave_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: ave.s.h
Builtin: __builtin_msa_ave_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:261
```

### Description

Compute lane-wise rounded average values for 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ave.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = floor_average(a.half[i], b.half[i]);
```

### Header Mapping

```c
#define __msa_ave_s_h __builtin_msa_ave_s_h
```

## v4i32 __msa_ave_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_ave_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: ave.s.w
Builtin: __builtin_msa_ave_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:262
```

### Description

Compute lane-wise rounded average values for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ave.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = floor_average(a.word[i], b.word[i]);
```

### Header Mapping

```c
#define __msa_ave_s_w __builtin_msa_ave_s_w
```

## v16u8 __msa_ave_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_ave_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: ave.u.b
Builtin: __builtin_msa_ave_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:264
```

### Description

Compute lane-wise rounded average values for 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ave.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = floor_average(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
#define __msa_ave_u_b __builtin_msa_ave_u_b
```

## v2u64 __msa_ave_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_ave_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: ave.u.d
Builtin: __builtin_msa_ave_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:267
```

### Description

Compute lane-wise rounded average values for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ave.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = floor_average(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
#define __msa_ave_u_d __builtin_msa_ave_u_d
```

## v8u16 __msa_ave_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_ave_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: ave.u.h
Builtin: __builtin_msa_ave_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:265
```

### Description

Compute lane-wise rounded average values for 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ave.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = floor_average(a.half[i], b.half[i]);
```

### Header Mapping

```c
#define __msa_ave_u_h __builtin_msa_ave_u_h
```

## v4u32 __msa_ave_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_ave_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: ave.u.w
Builtin: __builtin_msa_ave_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:266
```

### Description

Compute lane-wise rounded average values for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ave.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = floor_average(a.word[i], b.word[i]);
```

### Header Mapping

```c
#define __msa_ave_u_w __builtin_msa_ave_u_w
```

## v16i8 __msa_aver_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_aver_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: aver.s.b
Builtin: __builtin_msa_aver_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:268
```

### Description

Compute lane-wise rounded average values for 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for aver.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = ceil_average(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
#define __msa_aver_s_b __builtin_msa_aver_s_b
```

## v2i64 __msa_aver_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_aver_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: aver.s.d
Builtin: __builtin_msa_aver_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:271
```

### Description

Compute lane-wise rounded average values for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for aver.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = ceil_average(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
#define __msa_aver_s_d __builtin_msa_aver_s_d
```

## v8i16 __msa_aver_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_aver_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: aver.s.h
Builtin: __builtin_msa_aver_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:269
```

### Description

Compute lane-wise rounded average values for 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for aver.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = ceil_average(a.half[i], b.half[i]);
```

### Header Mapping

```c
#define __msa_aver_s_h __builtin_msa_aver_s_h
```

## v4i32 __msa_aver_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_aver_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: aver.s.w
Builtin: __builtin_msa_aver_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:270
```

### Description

Compute lane-wise rounded average values for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for aver.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = ceil_average(a.word[i], b.word[i]);
```

### Header Mapping

```c
#define __msa_aver_s_w __builtin_msa_aver_s_w
```

## v16u8 __msa_aver_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_aver_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: aver.u.b
Builtin: __builtin_msa_aver_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:272
```

### Description

Compute lane-wise rounded average values for 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for aver.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = ceil_average(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
#define __msa_aver_u_b __builtin_msa_aver_u_b
```

## v2u64 __msa_aver_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_aver_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: aver.u.d
Builtin: __builtin_msa_aver_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:275
```

### Description

Compute lane-wise rounded average values for 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for aver.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = ceil_average(a.dword[i], b.dword[i]);
```

### Header Mapping

```c
#define __msa_aver_u_d __builtin_msa_aver_u_d
```

## v8u16 __msa_aver_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_aver_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: aver.u.h
Builtin: __builtin_msa_aver_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:273
```

### Description

Compute lane-wise rounded average values for 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for aver.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = ceil_average(a.half[i], b.half[i]);
```

### Header Mapping

```c
#define __msa_aver_u_h __builtin_msa_aver_u_h
```

## v4u32 __msa_aver_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_aver_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: aver.u.w
Builtin: __builtin_msa_aver_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:274
```

### Description

Compute lane-wise rounded average values for 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for aver.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = ceil_average(a.word[i], b.word[i]);
```

### Header Mapping

```c
#define __msa_aver_u_w __builtin_msa_aver_u_w
```

## v16i8 __msa_div_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_div_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: div.s.b
Builtin: __builtin_msa_div_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:312
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for div.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = a.byte[i] / b.byte[i];
```

### Header Mapping

```c
#define __msa_div_s_b __builtin_msa_div_s_b
```

## v2i64 __msa_div_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_div_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: div.s.d
Builtin: __builtin_msa_div_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:315
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for div.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = a.dword[i] / b.dword[i];
```

### Header Mapping

```c
#define __msa_div_s_d __builtin_msa_div_s_d
```

## v8i16 __msa_div_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_div_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: div.s.h
Builtin: __builtin_msa_div_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:313
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for div.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] / b.half[i];
```

### Header Mapping

```c
#define __msa_div_s_h __builtin_msa_div_s_h
```

## v4i32 __msa_div_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_div_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: div.s.w
Builtin: __builtin_msa_div_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:314
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for div.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] / b.word[i];
```

### Header Mapping

```c
#define __msa_div_s_w __builtin_msa_div_s_w
```

## v16u8 __msa_div_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_div_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: div.u.b
Builtin: __builtin_msa_div_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:316
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for div.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = a.byte[i] / b.byte[i];
```

### Header Mapping

```c
#define __msa_div_u_b __builtin_msa_div_u_b
```

## v2u64 __msa_div_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_div_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: div.u.d
Builtin: __builtin_msa_div_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:319
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for div.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = a.dword[i] / b.dword[i];
```

### Header Mapping

```c
#define __msa_div_u_d __builtin_msa_div_u_d
```

## v8u16 __msa_div_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_div_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: div.u.h
Builtin: __builtin_msa_div_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:317
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for div.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] / b.half[i];
```

### Header Mapping

```c
#define __msa_div_u_h __builtin_msa_div_u_h
```

## v4u32 __msa_div_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_div_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: div.u.w
Builtin: __builtin_msa_div_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:318
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for div.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] / b.word[i];
```

### Header Mapping

```c
#define __msa_div_u_w __builtin_msa_div_u_w
```

## v2i64 __msa_dotp_s_d (v4i32 a, v4i32 b)

### Synopsis

```c
v2i64 __msa_dotp_s_d (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: dotp.s.d
Builtin: __builtin_msa_dotp_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:342
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dotp.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..0:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
#define __msa_dotp_s_d __builtin_msa_dotp_s_d
```

## v8i16 __msa_dotp_s_h (v16i8 a, v16i8 b)

### Synopsis

```c
v8i16 __msa_dotp_s_h (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: dotp.s.h
Builtin: __builtin_msa_dotp_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:340
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dotp.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..3:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
#define __msa_dotp_s_h __builtin_msa_dotp_s_h
```

## v4i32 __msa_dotp_s_w (v8i16 a, v8i16 b)

### Synopsis

```c
v4i32 __msa_dotp_s_w (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: dotp.s.w
Builtin: __builtin_msa_dotp_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:341
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dotp.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..1:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
#define __msa_dotp_s_w __builtin_msa_dotp_s_w
```

## v2u64 __msa_dotp_u_d (v4u32 a, v4u32 b)

### Synopsis

```c
v2u64 __msa_dotp_u_d (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: dotp.u.d
Builtin: __builtin_msa_dotp_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:345
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dotp.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..0:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
#define __msa_dotp_u_d __builtin_msa_dotp_u_d
```

## v8u16 __msa_dotp_u_h (v16u8 a, v16u8 b)

### Synopsis

```c
v8u16 __msa_dotp_u_h (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: dotp.u.h
Builtin: __builtin_msa_dotp_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:343
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dotp.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..3:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
#define __msa_dotp_u_h __builtin_msa_dotp_u_h
```

## v4u32 __msa_dotp_u_w (v8u16 a, v8u16 b)

### Synopsis

```c
v4u32 __msa_dotp_u_w (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: dotp.u.w
Builtin: __builtin_msa_dotp_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:344
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dotp.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..1:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = (product0 + product1);
```

### Header Mapping

```c
#define __msa_dotp_u_w __builtin_msa_dotp_u_w
```

## v2i64 __msa_dpadd_s_d (v2i64 a, v4i32 b, v4i32 c)

### Synopsis

```c
v2i64 __msa_dpadd_s_d (v2i64 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: dpadd.s.d
Builtin: __builtin_msa_dpadd_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:348
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpadd.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..0:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
#define __msa_dpadd_s_d __builtin_msa_dpadd_s_d
```

## v8i16 __msa_dpadd_s_h (v8i16 a, v16i8 b, v16i8 c)

### Synopsis

```c
v8i16 __msa_dpadd_s_h (v8i16 a, v16i8 b, v16i8 c)
#include <msa.h>
Instruction: dpadd.s.h
Builtin: __builtin_msa_dpadd_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:346
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpadd.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..3:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
#define __msa_dpadd_s_h __builtin_msa_dpadd_s_h
```

## v4i32 __msa_dpadd_s_w (v4i32 a, v8i16 b, v8i16 c)

### Synopsis

```c
v4i32 __msa_dpadd_s_w (v4i32 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: dpadd.s.w
Builtin: __builtin_msa_dpadd_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:347
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpadd.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..1:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
#define __msa_dpadd_s_w __builtin_msa_dpadd_s_w
```

## v2u64 __msa_dpadd_u_d (v2u64 a, v4u32 b, v4u32 c)

### Synopsis

```c
v2u64 __msa_dpadd_u_d (v2u64 a, v4u32 b, v4u32 c)
#include <msa.h>
Instruction: dpadd.u.d
Builtin: __builtin_msa_dpadd_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:351
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpadd.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..0:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
#define __msa_dpadd_u_d __builtin_msa_dpadd_u_d
```

## v8u16 __msa_dpadd_u_h (v8u16 a, v16u8 b, v16u8 c)

### Synopsis

```c
v8u16 __msa_dpadd_u_h (v8u16 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: dpadd.u.h
Builtin: __builtin_msa_dpadd_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:349
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpadd.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..3:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
#define __msa_dpadd_u_h __builtin_msa_dpadd_u_h
```

## v4u32 __msa_dpadd_u_w (v4u32 a, v8u16 b, v8u16 c)

### Synopsis

```c
v4u32 __msa_dpadd_u_w (v4u32 a, v8u16 b, v8u16 c)
#include <msa.h>
Instruction: dpadd.u.w
Builtin: __builtin_msa_dpadd_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:350
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpadd.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..1:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = acc + (product0 + product1);
```

### Header Mapping

```c
#define __msa_dpadd_u_w __builtin_msa_dpadd_u_w
```

## v2i64 __msa_dpsub_s_d (v2i64 a, v4i32 b, v4i32 c)

### Synopsis

```c
v2i64 __msa_dpsub_s_d (v2i64 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: dpsub.s.d
Builtin: __builtin_msa_dpsub_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:354
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpsub.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..0:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
#define __msa_dpsub_s_d __builtin_msa_dpsub_s_d
```

## v8i16 __msa_dpsub_s_h (v8i16 a, v16i8 b, v16i8 c)

### Synopsis

```c
v8i16 __msa_dpsub_s_h (v8i16 a, v16i8 b, v16i8 c)
#include <msa.h>
Instruction: dpsub.s.h
Builtin: __builtin_msa_dpsub_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:352
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpsub.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..3:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
#define __msa_dpsub_s_h __builtin_msa_dpsub_s_h
```

## v4i32 __msa_dpsub_s_w (v4i32 a, v8i16 b, v8i16 c)

### Synopsis

```c
v4i32 __msa_dpsub_s_w (v4i32 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: dpsub.s.w
Builtin: __builtin_msa_dpsub_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:353
```

### Description

Compute adjacent-pair dot products using signed inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpsub.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..1:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
#define __msa_dpsub_s_w __builtin_msa_dpsub_s_w
```

## v2i64 __msa_dpsub_u_d (v2i64 a, v4u32 b, v4u32 c)

### Synopsis

```c
v2i64 __msa_dpsub_u_d (v2i64 a, v4u32 b, v4u32 c)
#include <msa.h>
Instruction: dpsub.u.d
Builtin: __builtin_msa_dpsub_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:357
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpsub.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..0:
  product0 = widen(a.dword[2*i]) * widen(b.dword[2*i]);
  product1 = widen(a.dword[2*i + 1]) * widen(b.dword[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
#define __msa_dpsub_u_d __builtin_msa_dpsub_u_d
```

## v8i16 __msa_dpsub_u_h (v8i16 a, v16u8 b, v16u8 c)

### Synopsis

```c
v8i16 __msa_dpsub_u_h (v8i16 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: dpsub.u.h
Builtin: __builtin_msa_dpsub_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:355
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpsub.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..3:
  product0 = widen(a.half[2*i]) * widen(b.half[2*i]);
  product1 = widen(a.half[2*i + 1]) * widen(b.half[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
#define __msa_dpsub_u_h __builtin_msa_dpsub_u_h
```

## v4i32 __msa_dpsub_u_w (v4i32 a, v8u16 b, v8u16 c)

### Synopsis

```c
v4i32 __msa_dpsub_u_w (v4i32 a, v8u16 b, v8u16 c)
#include <msa.h>
Instruction: dpsub.u.w
Builtin: __builtin_msa_dpsub_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:356
```

### Description

Compute adjacent-pair dot products using unsigned inputs and produce widened accumulated results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dpsub.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..1:
  product0 = widen(a.word[2*i]) * widen(b.word[2*i]);
  product1 = widen(a.word[2*i + 1]) * widen(b.word[2*i + 1]);
  dst.wide_lane[i] = acc - (product0 + product1);
```

### Header Mapping

```c
#define __msa_dpsub_u_w __builtin_msa_dpsub_u_w
```

## v2i64 __msa_hadd_s_d (v4i32 a, v4i32 b)

### Synopsis

```c
v2i64 __msa_hadd_s_d (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: hadd.s.d
Builtin: __builtin_msa_hadd_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:322
```

### Description

Compute horizontal adjacent add/subtract operations over signed 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hadd.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..0:
  dst.wide_lane[i] = widen(a.dword[2*i]) + widen(a.dword[2*i + 1]);
```

### Header Mapping

```c
#define __msa_hadd_s_d __builtin_msa_hadd_s_d
```

## v8i16 __msa_hadd_s_h (v16i8 a, v16i8 b)

### Synopsis

```c
v8i16 __msa_hadd_s_h (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: hadd.s.h
Builtin: __builtin_msa_hadd_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:320
```

### Description

Compute horizontal adjacent add/subtract operations over signed 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hadd.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..3:
  dst.wide_lane[i] = widen(a.half[2*i]) + widen(a.half[2*i + 1]);
```

### Header Mapping

```c
#define __msa_hadd_s_h __builtin_msa_hadd_s_h
```

## v4i32 __msa_hadd_s_w (v8i16 a, v8i16 b)

### Synopsis

```c
v4i32 __msa_hadd_s_w (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: hadd.s.w
Builtin: __builtin_msa_hadd_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:321
```

### Description

Compute horizontal adjacent add/subtract operations over signed 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hadd.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..1:
  dst.wide_lane[i] = widen(a.word[2*i]) + widen(a.word[2*i + 1]);
```

### Header Mapping

```c
#define __msa_hadd_s_w __builtin_msa_hadd_s_w
```

## v2u64 __msa_hadd_u_d (v4u32 a, v4u32 b)

### Synopsis

```c
v2u64 __msa_hadd_u_d (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: hadd.u.d
Builtin: __builtin_msa_hadd_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:325
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hadd.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..0:
  dst.wide_lane[i] = widen(a.dword[2*i]) + widen(a.dword[2*i + 1]);
```

### Header Mapping

```c
#define __msa_hadd_u_d __builtin_msa_hadd_u_d
```

## v8u16 __msa_hadd_u_h (v16u8 a, v16u8 b)

### Synopsis

```c
v8u16 __msa_hadd_u_h (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: hadd.u.h
Builtin: __builtin_msa_hadd_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:323
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hadd.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..3:
  dst.wide_lane[i] = widen(a.half[2*i]) + widen(a.half[2*i + 1]);
```

### Header Mapping

```c
#define __msa_hadd_u_h __builtin_msa_hadd_u_h
```

## v4u32 __msa_hadd_u_w (v8u16 a, v8u16 b)

### Synopsis

```c
v4u32 __msa_hadd_u_w (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: hadd.u.w
Builtin: __builtin_msa_hadd_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:324
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hadd.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..1:
  dst.wide_lane[i] = widen(a.word[2*i]) + widen(a.word[2*i + 1]);
```

### Header Mapping

```c
#define __msa_hadd_u_w __builtin_msa_hadd_u_w
```

## v2i64 __msa_hsub_s_d (v4i32 a, v4i32 b)

### Synopsis

```c
v2i64 __msa_hsub_s_d (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: hsub.s.d
Builtin: __builtin_msa_hsub_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:328
```

### Description

Compute horizontal adjacent add/subtract operations over signed 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hsub.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..0:
  dst.wide_lane[i] = widen(a.dword[2*i]) - widen(a.dword[2*i + 1]);
```

### Header Mapping

```c
#define __msa_hsub_s_d __builtin_msa_hsub_s_d
```

## v8i16 __msa_hsub_s_h (v16i8 a, v16i8 b)

### Synopsis

```c
v8i16 __msa_hsub_s_h (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: hsub.s.h
Builtin: __builtin_msa_hsub_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:326
```

### Description

Compute horizontal adjacent add/subtract operations over signed 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hsub.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..3:
  dst.wide_lane[i] = widen(a.half[2*i]) - widen(a.half[2*i + 1]);
```

### Header Mapping

```c
#define __msa_hsub_s_h __builtin_msa_hsub_s_h
```

## v4i32 __msa_hsub_s_w (v8i16 a, v8i16 b)

### Synopsis

```c
v4i32 __msa_hsub_s_w (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: hsub.s.w
Builtin: __builtin_msa_hsub_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:327
```

### Description

Compute horizontal adjacent add/subtract operations over signed 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hsub.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..1:
  dst.wide_lane[i] = widen(a.word[2*i]) - widen(a.word[2*i + 1]);
```

### Header Mapping

```c
#define __msa_hsub_s_w __builtin_msa_hsub_s_w
```

## v2i64 __msa_hsub_u_d (v4u32 a, v4u32 b)

### Synopsis

```c
v2i64 __msa_hsub_u_d (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: hsub.u.d
Builtin: __builtin_msa_hsub_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:331
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hsub.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..0:
  dst.wide_lane[i] = widen(a.dword[2*i]) - widen(a.dword[2*i + 1]);
```

### Header Mapping

```c
#define __msa_hsub_u_d __builtin_msa_hsub_u_d
```

## v8i16 __msa_hsub_u_h (v16u8 a, v16u8 b)

### Synopsis

```c
v8i16 __msa_hsub_u_h (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: hsub.u.h
Builtin: __builtin_msa_hsub_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:329
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hsub.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..3:
  dst.wide_lane[i] = widen(a.half[2*i]) - widen(a.half[2*i + 1]);
```

### Header Mapping

```c
#define __msa_hsub_u_h __builtin_msa_hsub_u_h
```

## v4i32 __msa_hsub_u_w (v8u16 a, v8u16 b)

### Synopsis

```c
v4i32 __msa_hsub_u_w (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: hsub.u.w
Builtin: __builtin_msa_hsub_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:330
```

### Description

Compute horizontal adjacent add/subtract operations over unsigned 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for hsub.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..1:
  dst.wide_lane[i] = widen(a.word[2*i]) - widen(a.word[2*i + 1]);
```

### Header Mapping

```c
#define __msa_hsub_u_w __builtin_msa_hsub_u_w
```

## v8i16 __msa_madd_q_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_madd_q_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: madd.q.h
Builtin: __builtin_msa_madd_q_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:539
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for madd.q.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
#define __msa_madd_q_h __builtin_msa_madd_q_h
```

## v4i32 __msa_madd_q_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_madd_q_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: madd.q.w
Builtin: __builtin_msa_madd_q_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:540
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for madd.q.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
#define __msa_madd_q_w __builtin_msa_madd_q_w
```

## v8i16 __msa_maddr_q_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_maddr_q_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: maddr.q.h
Builtin: __builtin_msa_maddr_q_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:541
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maddr.q.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  product = round_fixed_point(b.half[i] * c.half[i]);
  dst.half[i] = a.half[i] + product;
```

### Header Mapping

```c
#define __msa_maddr_q_h __builtin_msa_maddr_q_h
```

## v4i32 __msa_maddr_q_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_maddr_q_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: maddr.q.w
Builtin: __builtin_msa_maddr_q_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:542
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maddr.q.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  product = round_fixed_point(b.word[i] * c.word[i]);
  dst.word[i] = a.word[i] + product;
```

### Header Mapping

```c
#define __msa_maddr_q_w __builtin_msa_maddr_q_w
```

## v16i8 __msa_maddv_b (v16i8 a, v16i8 b, v16i8 c)

### Synopsis

```c
v16i8 __msa_maddv_b (v16i8 a, v16i8 b, v16i8 c)
#include <msa.h>
Instruction: maddv.b
Builtin: __builtin_msa_maddv_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:304
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maddv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  product = identity(b.byte[i] * c.byte[i]);
  dst.byte[i] = a.byte[i] + product;
```

### Header Mapping

```c
#define __msa_maddv_b __builtin_msa_maddv_b
```

## v2i64 __msa_maddv_d (v2i64 a, v2i64 b, v2i64 c)

### Synopsis

```c
v2i64 __msa_maddv_d (v2i64 a, v2i64 b, v2i64 c)
#include <msa.h>
Instruction: maddv.d
Builtin: __builtin_msa_maddv_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:307
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maddv.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  product = identity(b.dword[i] * c.dword[i]);
  dst.dword[i] = a.dword[i] + product;
```

### Header Mapping

```c
#define __msa_maddv_d __builtin_msa_maddv_d
```

## v8i16 __msa_maddv_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_maddv_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: maddv.h
Builtin: __builtin_msa_maddv_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:305
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maddv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  product = identity(b.half[i] * c.half[i]);
  dst.half[i] = a.half[i] + product;
```

### Header Mapping

```c
#define __msa_maddv_h __builtin_msa_maddv_h
```

## v4i32 __msa_maddv_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_maddv_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: maddv.w
Builtin: __builtin_msa_maddv_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:306
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for maddv.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  product = identity(b.word[i] * c.word[i]);
  dst.word[i] = a.word[i] + product;
```

### Header Mapping

```c
#define __msa_maddv_w __builtin_msa_maddv_w
```

## v16i8 __msa_mod_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_mod_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: mod.s.b
Builtin: __builtin_msa_mod_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:332
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mod.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = a.byte[i] % b.byte[i];
```

### Header Mapping

```c
#define __msa_mod_s_b __builtin_msa_mod_s_b
```

## v2i64 __msa_mod_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_mod_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: mod.s.d
Builtin: __builtin_msa_mod_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:335
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mod.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = a.dword[i] % b.dword[i];
```

### Header Mapping

```c
#define __msa_mod_s_d __builtin_msa_mod_s_d
```

## v8i16 __msa_mod_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_mod_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: mod.s.h
Builtin: __builtin_msa_mod_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:333
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mod.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] % b.half[i];
```

### Header Mapping

```c
#define __msa_mod_s_h __builtin_msa_mod_s_h
```

## v4i32 __msa_mod_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_mod_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: mod.s.w
Builtin: __builtin_msa_mod_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:334
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mod.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] % b.word[i];
```

### Header Mapping

```c
#define __msa_mod_s_w __builtin_msa_mod_s_w
```

## v16u8 __msa_mod_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_mod_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: mod.u.b
Builtin: __builtin_msa_mod_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:336
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mod.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = a.byte[i] % b.byte[i];
```

### Header Mapping

```c
#define __msa_mod_u_b __builtin_msa_mod_u_b
```

## v2u64 __msa_mod_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_mod_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: mod.u.d
Builtin: __builtin_msa_mod_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:339
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mod.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = a.dword[i] % b.dword[i];
```

### Header Mapping

```c
#define __msa_mod_u_d __builtin_msa_mod_u_d
```

## v8u16 __msa_mod_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_mod_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: mod.u.h
Builtin: __builtin_msa_mod_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:337
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mod.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] % b.half[i];
```

### Header Mapping

```c
#define __msa_mod_u_h __builtin_msa_mod_u_h
```

## v4u32 __msa_mod_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_mod_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: mod.u.w
Builtin: __builtin_msa_mod_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:338
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mod.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] % b.word[i];
```

### Header Mapping

```c
#define __msa_mod_u_w __builtin_msa_mod_u_w
```

## v8i16 __msa_msub_q_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_msub_q_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: msub.q.h
Builtin: __builtin_msa_msub_q_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:543
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for msub.q.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
#define __msa_msub_q_h __builtin_msa_msub_q_h
```

## v4i32 __msa_msub_q_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_msub_q_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: msub.q.w
Builtin: __builtin_msa_msub_q_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:544
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for msub.q.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
#define __msa_msub_q_w __builtin_msa_msub_q_w
```

## v8i16 __msa_msubr_q_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_msubr_q_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: msubr.q.h
Builtin: __builtin_msa_msubr_q_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:545
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for msubr.q.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  product = round_fixed_point(b.half[i] * c.half[i]);
  dst.half[i] = a.half[i] - product;
```

### Header Mapping

```c
#define __msa_msubr_q_h __builtin_msa_msubr_q_h
```

## v4i32 __msa_msubr_q_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_msubr_q_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: msubr.q.w
Builtin: __builtin_msa_msubr_q_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:546
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for msubr.q.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  product = round_fixed_point(b.word[i] * c.word[i]);
  dst.word[i] = a.word[i] - product;
```

### Header Mapping

```c
#define __msa_msubr_q_w __builtin_msa_msubr_q_w
```

## v16i8 __msa_msubv_b (v16i8 a, v16i8 b, v16i8 c)

### Synopsis

```c
v16i8 __msa_msubv_b (v16i8 a, v16i8 b, v16i8 c)
#include <msa.h>
Instruction: msubv.b
Builtin: __builtin_msa_msubv_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:308
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for msubv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  product = identity(b.byte[i] * c.byte[i]);
  dst.byte[i] = a.byte[i] - product;
```

### Header Mapping

```c
#define __msa_msubv_b __builtin_msa_msubv_b
```

## v2i64 __msa_msubv_d (v2i64 a, v2i64 b, v2i64 c)

### Synopsis

```c
v2i64 __msa_msubv_d (v2i64 a, v2i64 b, v2i64 c)
#include <msa.h>
Instruction: msubv.d
Builtin: __builtin_msa_msubv_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:311
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for msubv.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  product = identity(b.dword[i] * c.dword[i]);
  dst.dword[i] = a.dword[i] - product;
```

### Header Mapping

```c
#define __msa_msubv_d __builtin_msa_msubv_d
```

## v8i16 __msa_msubv_h (v8i16 a, v8i16 b, v8i16 c)

### Synopsis

```c
v8i16 __msa_msubv_h (v8i16 a, v8i16 b, v8i16 c)
#include <msa.h>
Instruction: msubv.h
Builtin: __builtin_msa_msubv_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:309
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for msubv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  product = identity(b.half[i] * c.half[i]);
  dst.half[i] = a.half[i] - product;
```

### Header Mapping

```c
#define __msa_msubv_h __builtin_msa_msubv_h
```

## v4i32 __msa_msubv_w (v4i32 a, v4i32 b, v4i32 c)

### Synopsis

```c
v4i32 __msa_msubv_w (v4i32 a, v4i32 b, v4i32 c)
#include <msa.h>
Instruction: msubv.w
Builtin: __builtin_msa_msubv_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:310
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for msubv.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  product = identity(b.word[i] * c.word[i]);
  dst.word[i] = a.word[i] - product;
```

### Header Mapping

```c
#define __msa_msubv_w __builtin_msa_msubv_w
```

## v8i16 __msa_mul_q_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_mul_q_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: mul.q.h
Builtin: __builtin_msa_mul_q_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:535
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mul.q.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] * b.half[i];
```

### Header Mapping

```c
#define __msa_mul_q_h __builtin_msa_mul_q_h
```

## v4i32 __msa_mul_q_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_mul_q_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: mul.q.w
Builtin: __builtin_msa_mul_q_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:536
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mul.q.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
#define __msa_mul_q_w __builtin_msa_mul_q_w
```

## v8i16 __msa_mulr_q_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_mulr_q_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: mulr.q.h
Builtin: __builtin_msa_mulr_q_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:537
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mulr.q.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] * b.half[i];
```

### Header Mapping

```c
#define __msa_mulr_q_h __builtin_msa_mulr_q_h
```

## v4i32 __msa_mulr_q_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_mulr_q_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: mulr.q.w
Builtin: __builtin_msa_mulr_q_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:538
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mulr.q.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
#define __msa_mulr_q_w __builtin_msa_mulr_q_w
```

## v16i8 __msa_mulv_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_mulv_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: mulv.b
Builtin: __builtin_msa_mulv_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:300
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mulv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = a.byte[i] * b.byte[i];
```

### Header Mapping

```c
#define __msa_mulv_b __builtin_msa_mulv_b
```

## v2i64 __msa_mulv_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_mulv_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: mulv.d
Builtin: __builtin_msa_mulv_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:303
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mulv.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = a.dword[i] * b.dword[i];
```

### Header Mapping

```c
#define __msa_mulv_d __builtin_msa_mulv_d
```

## v8i16 __msa_mulv_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_mulv_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: mulv.h
Builtin: __builtin_msa_mulv_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:301
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mulv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] * b.half[i];
```

### Header Mapping

```c
#define __msa_mulv_h __builtin_msa_mulv_h
```

## v4i32 __msa_mulv_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_mulv_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: mulv.w
Builtin: __builtin_msa_mulv_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:302
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for mulv.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
#define __msa_mulv_w __builtin_msa_mulv_w
```

## v16i8 __msa_sat_s_b (v16i8 a, int imm0_7)

### Synopsis

```c
v16i8 __msa_sat_s_b (v16i8 a, int imm0_7)
#include <msa.h>
Instruction: sat.s.b
Builtin: __builtin_msa_sat_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:236
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sat.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_7;
for i in 0..15:
  dst.byte[i] = saturate(a.byte[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __msa_sat_s_b __builtin_msa_sat_s_b
```

## v2i64 __msa_sat_s_d (v2i64 a, int imm0_63)

### Synopsis

```c
v2i64 __msa_sat_s_d (v2i64 a, int imm0_63)
#include <msa.h>
Instruction: sat.s.d
Builtin: __builtin_msa_sat_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:239
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sat.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_63;
for i in 0..1:
  dst.dword[i] = saturate(a.dword[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __msa_sat_s_d __builtin_msa_sat_s_d
```

## v8i16 __msa_sat_s_h (v8i16 a, int imm0_15)

### Synopsis

```c
v8i16 __msa_sat_s_h (v8i16 a, int imm0_15)
#include <msa.h>
Instruction: sat.s.h
Builtin: __builtin_msa_sat_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:237
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sat.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_15;
for i in 0..7:
  dst.half[i] = saturate(a.half[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __msa_sat_s_h __builtin_msa_sat_s_h
```

## v4i32 __msa_sat_s_w (v4i32 a, int imm0_31)

### Synopsis

```c
v4i32 __msa_sat_s_w (v4i32 a, int imm0_31)
#include <msa.h>
Instruction: sat.s.w
Builtin: __builtin_msa_sat_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:238
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sat.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = saturate(a.word[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __msa_sat_s_w __builtin_msa_sat_s_w
```

## v16u8 __msa_sat_u_b (v16u8 a, int imm0_7)

### Synopsis

```c
v16u8 __msa_sat_u_b (v16u8 a, int imm0_7)
#include <msa.h>
Instruction: sat.u.b
Builtin: __builtin_msa_sat_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:240
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sat.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_7;
for i in 0..15:
  dst.byte[i] = saturate(a.byte[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __msa_sat_u_b __builtin_msa_sat_u_b
```

## v2u64 __msa_sat_u_d (v2u64 a, int imm0_63)

### Synopsis

```c
v2u64 __msa_sat_u_d (v2u64 a, int imm0_63)
#include <msa.h>
Instruction: sat.u.d
Builtin: __builtin_msa_sat_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:243
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sat.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_63;
for i in 0..1:
  dst.dword[i] = saturate(a.dword[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __msa_sat_u_d __builtin_msa_sat_u_d
```

## v8u16 __msa_sat_u_h (v8u16 a, int imm0_15)

### Synopsis

```c
v8u16 __msa_sat_u_h (v8u16 a, int imm0_15)
#include <msa.h>
Instruction: sat.u.h
Builtin: __builtin_msa_sat_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:241
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sat.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_15;
for i in 0..7:
  dst.half[i] = saturate(a.half[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __msa_sat_u_h __builtin_msa_sat_u_h
```

## v4u32 __msa_sat_u_w (v4u32 a, int imm0_31)

### Synopsis

```c
v4u32 __msa_sat_u_w (v4u32 a, int imm0_31)
#include <msa.h>
Instruction: sat.u.w
Builtin: __builtin_msa_sat_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:242
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for sat.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = saturate(a.word[i], range_selected_by_imm, signedness);
```

### Header Mapping

```c
#define __msa_sat_u_w __builtin_msa_sat_u_w
```

## v16i8 __msa_subs_s_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_subs_s_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: subs.s.b
Builtin: __builtin_msa_subs_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:276
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subs.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = saturate(a.byte[i] - b.byte[i], 8, signedness);
```

### Header Mapping

```c
#define __msa_subs_s_b __builtin_msa_subs_s_b
```

## v2i64 __msa_subs_s_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_subs_s_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: subs.s.d
Builtin: __builtin_msa_subs_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:279
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subs.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = saturate(a.dword[i] - b.dword[i], 64, signedness);
```

### Header Mapping

```c
#define __msa_subs_s_d __builtin_msa_subs_s_d
```

## v8i16 __msa_subs_s_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_subs_s_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: subs.s.h
Builtin: __builtin_msa_subs_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:277
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subs.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = saturate(a.half[i] - b.half[i], 16, signedness);
```

### Header Mapping

```c
#define __msa_subs_s_h __builtin_msa_subs_s_h
```

## v4i32 __msa_subs_s_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_subs_s_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: subs.s.w
Builtin: __builtin_msa_subs_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:278
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subs.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = saturate(a.word[i] - b.word[i], 32, signedness);
```

### Header Mapping

```c
#define __msa_subs_s_w __builtin_msa_subs_s_w
```

## v16u8 __msa_subs_u_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_subs_u_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: subs.u.b
Builtin: __builtin_msa_subs_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:280
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subs.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = saturate(a.byte[i] - b.byte[i], 8, signedness);
```

### Header Mapping

```c
#define __msa_subs_u_b __builtin_msa_subs_u_b
```

## v2u64 __msa_subs_u_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2u64 __msa_subs_u_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: subs.u.d
Builtin: __builtin_msa_subs_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:283
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subs.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = saturate(a.dword[i] - b.dword[i], 64, signedness);
```

### Header Mapping

```c
#define __msa_subs_u_d __builtin_msa_subs_u_d
```

## v8u16 __msa_subs_u_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8u16 __msa_subs_u_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: subs.u.h
Builtin: __builtin_msa_subs_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:281
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subs.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = saturate(a.half[i] - b.half[i], 16, signedness);
```

### Header Mapping

```c
#define __msa_subs_u_h __builtin_msa_subs_u_h
```

## v4u32 __msa_subs_u_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4u32 __msa_subs_u_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: subs.u.w
Builtin: __builtin_msa_subs_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:282
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subs.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = saturate(a.word[i] - b.word[i], 32, signedness);
```

### Header Mapping

```c
#define __msa_subs_u_w __builtin_msa_subs_u_w
```

## v16u8 __msa_subsus_u_b (v16u8 a, v16i8 b)

### Synopsis

```c
v16u8 __msa_subsus_u_b (v16u8 a, v16i8 b)
#include <msa.h>
Instruction: subsus.u.b
Builtin: __builtin_msa_subsus_u_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:288
```

### Description

Compute lane-wise unsigned integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subsus.u.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = signed_saturate(unsigned(a.byte[i]) - signed(b.byte[i]), 8);
```

### Header Mapping

```c
#define __msa_subsus_u_b __builtin_msa_subsus_u_b
```

## v2u64 __msa_subsus_u_d (v2u64 a, v2i64 b)

### Synopsis

```c
v2u64 __msa_subsus_u_d (v2u64 a, v2i64 b)
#include <msa.h>
Instruction: subsus.u.d
Builtin: __builtin_msa_subsus_u_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:291
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subsus.u.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = signed_saturate(unsigned(a.dword[i]) - signed(b.dword[i]), 64);
```

### Header Mapping

```c
#define __msa_subsus_u_d __builtin_msa_subsus_u_d
```

## v8u16 __msa_subsus_u_h (v8u16 a, v8i16 b)

### Synopsis

```c
v8u16 __msa_subsus_u_h (v8u16 a, v8i16 b)
#include <msa.h>
Instruction: subsus.u.h
Builtin: __builtin_msa_subsus_u_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:289
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subsus.u.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = signed_saturate(unsigned(a.half[i]) - signed(b.half[i]), 16);
```

### Header Mapping

```c
#define __msa_subsus_u_h __builtin_msa_subsus_u_h
```

## v4u32 __msa_subsus_u_w (v4u32 a, v4i32 b)

### Synopsis

```c
v4u32 __msa_subsus_u_w (v4u32 a, v4i32 b)
#include <msa.h>
Instruction: subsus.u.w
Builtin: __builtin_msa_subsus_u_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:290
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subsus.u.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = signed_saturate(unsigned(a.word[i]) - signed(b.word[i]), 32);
```

### Header Mapping

```c
#define __msa_subsus_u_w __builtin_msa_subsus_u_w
```

## v16i8 __msa_subsuu_s_b (v16u8 a, v16u8 b)

### Synopsis

```c
v16i8 __msa_subsuu_s_b (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: subsuu.s.b
Builtin: __builtin_msa_subsuu_s_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:284
```

### Description

Compute lane-wise signed integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subsuu.s.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = unsigned_saturate(unsigned(a.byte[i]) - unsigned(b.byte[i]), 8);
```

### Header Mapping

```c
#define __msa_subsuu_s_b __builtin_msa_subsuu_s_b
```

## v2i64 __msa_subsuu_s_d (v2u64 a, v2u64 b)

### Synopsis

```c
v2i64 __msa_subsuu_s_d (v2u64 a, v2u64 b)
#include <msa.h>
Instruction: subsuu.s.d
Builtin: __builtin_msa_subsuu_s_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:287
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subsuu.s.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = unsigned_saturate(unsigned(a.dword[i]) - unsigned(b.dword[i]), 64);
```

### Header Mapping

```c
#define __msa_subsuu_s_d __builtin_msa_subsuu_s_d
```

## v8i16 __msa_subsuu_s_h (v8u16 a, v8u16 b)

### Synopsis

```c
v8i16 __msa_subsuu_s_h (v8u16 a, v8u16 b)
#include <msa.h>
Instruction: subsuu.s.h
Builtin: __builtin_msa_subsuu_s_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:285
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subsuu.s.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = unsigned_saturate(unsigned(a.half[i]) - unsigned(b.half[i]), 16);
```

### Header Mapping

```c
#define __msa_subsuu_s_h __builtin_msa_subsuu_s_h
```

## v4i32 __msa_subsuu_s_w (v4u32 a, v4u32 b)

### Synopsis

```c
v4i32 __msa_subsuu_s_w (v4u32 a, v4u32 b)
#include <msa.h>
Instruction: subsuu.s.w
Builtin: __builtin_msa_subsuu_s_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:286
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subsuu.s.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = unsigned_saturate(unsigned(a.word[i]) - unsigned(b.word[i]), 32);
```

### Header Mapping

```c
#define __msa_subsuu_s_w __builtin_msa_subsuu_s_w
```

## v16i8 __msa_subv_b (v16i8 a, v16i8 b)

### Synopsis

```c
v16i8 __msa_subv_b (v16i8 a, v16i8 b)
#include <msa.h>
Instruction: subv.b
Builtin: __builtin_msa_subv_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:140
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subv.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = a.byte[i] - b.byte[i];
```

### Header Mapping

```c
#define __msa_subv_b __builtin_msa_subv_b
```

## v2i64 __msa_subv_d (v2i64 a, v2i64 b)

### Synopsis

```c
v2i64 __msa_subv_d (v2i64 a, v2i64 b)
#include <msa.h>
Instruction: subv.d
Builtin: __builtin_msa_subv_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:143
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subv.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
for i in 0..1:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
#define __msa_subv_d __builtin_msa_subv_d
```

## v8i16 __msa_subv_h (v8i16 a, v8i16 b)

### Synopsis

```c
v8i16 __msa_subv_h (v8i16 a, v8i16 b)
#include <msa.h>
Instruction: subv.h
Builtin: __builtin_msa_subv_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:141
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subv.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
for i in 0..7:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
#define __msa_subv_h __builtin_msa_subv_h
```

## v4i32 __msa_subv_w (v4i32 a, v4i32 b)

### Synopsis

```c
v4i32 __msa_subv_w (v4i32 a, v4i32 b)
#include <msa.h>
Instruction: subv.w
Builtin: __builtin_msa_subv_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:142
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subv.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
for i in 0..3:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
#define __msa_subv_w __builtin_msa_subv_w
```

## v16i8 __msa_subvi_b (v16i8 a, int imm0_31)

### Synopsis

```c
v16i8 __msa_subvi_b (v16i8 a, int imm0_31)
#include <msa.h>
Instruction: subvi.b
Builtin: __builtin_msa_subvi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:144
```

### Description

Compute lane-wise modular integer arithmetic on 16 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subvi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_31;
for i in 0..15:
  dst.byte[i] = a.byte[i] - imm;
```

### Header Mapping

```c
#define __msa_subvi_b __builtin_msa_subvi_b
```

## v2i64 __msa_subvi_d (v2i64 a, int imm0_31)

### Synopsis

```c
v2i64 __msa_subvi_d (v2i64 a, int imm0_31)
#include <msa.h>
Instruction: subvi.d
Builtin: __builtin_msa_subvi_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:147
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subvi.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm0_31;
for i in 0..1:
  dst.dword[i] = a.dword[i] - imm;
```

### Header Mapping

```c
#define __msa_subvi_d __builtin_msa_subvi_d
```

## v8i16 __msa_subvi_h (v8i16 a, int imm0_31)

### Synopsis

```c
v8i16 __msa_subvi_h (v8i16 a, int imm0_31)
#include <msa.h>
Instruction: subvi.h
Builtin: __builtin_msa_subvi_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:145
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subvi.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm0_31;
for i in 0..7:
  dst.half[i] = a.half[i] - imm;
```

### Header Mapping

```c
#define __msa_subvi_h __builtin_msa_subvi_h
```

## v4i32 __msa_subvi_w (v4i32 a, int imm0_31)

### Synopsis

```c
v4i32 __msa_subvi_w (v4i32 a, int imm0_31)
#include <msa.h>
Instruction: subvi.w
Builtin: __builtin_msa_subvi_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:146
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for subvi.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm0_31;
for i in 0..3:
  dst.word[i] = a.word[i] - imm;
```

### Header Mapping

```c
#define __msa_subvi_w __builtin_msa_subvi_w
```

