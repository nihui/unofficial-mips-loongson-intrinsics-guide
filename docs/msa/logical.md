# Logical

Generated from `include/msa.h`. This page contains 14 intrinsics.

## v16u8 __msa_and_v (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_and_v (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: and.v
Builtin: __builtin_msa_and_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:402
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for and.v.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
dst.bits = a.bits & (imm_or_b);
```

### Header Mapping

```c
#define __msa_and_v __builtin_msa_and_v
```

## v16u8 __msa_andi_b (v16u8 a, int imm0_255)

### Synopsis

```c
v16u8 __msa_andi_b (v16u8 a, int imm0_255)
#include <msa.h>
Instruction: andi.b
Builtin: __builtin_msa_andi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:403
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for andi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_255;
dst.bits = a.bits & (imm_or_b);
```

### Header Mapping

```c
#define __msa_andi_b __builtin_msa_andi_b
```

## v16u8 __msa_bmnz_v (v16u8 a, v16u8 b, v16u8 c)

### Synopsis

```c
v16u8 __msa_bmnz_v (v16u8 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: bmnz.v
Builtin: __builtin_msa_bmnz_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:410
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bmnz.v.
// Operand order follows the intrinsic arguments in the header.
dst.bits = select_bits(mask=a, true_value=b, false_value=0);
```

### Header Mapping

```c
#define __msa_bmnz_v __builtin_msa_bmnz_v
```

## v16u8 __msa_bmnzi_b (v16u8 a, v16u8 b, int imm0_255)

### Synopsis

```c
v16u8 __msa_bmnzi_b (v16u8 a, v16u8 b, int imm0_255)
#include <msa.h>
Instruction: bmnzi.b
Builtin: __builtin_msa_bmnzi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:411
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bmnzi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_255;
dst.bits = select_bits(mask=a, true_value=b, false_value=0);
```

### Header Mapping

```c
#define __msa_bmnzi_b __builtin_msa_bmnzi_b
```

## v16u8 __msa_bmz_v (v16u8 a, v16u8 b, v16u8 c)

### Synopsis

```c
v16u8 __msa_bmz_v (v16u8 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: bmz.v
Builtin: __builtin_msa_bmz_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:412
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bmz.v.
// Operand order follows the intrinsic arguments in the header.
dst.bits = select_bits(mask=a, true_value=0, false_value=b);
```

### Header Mapping

```c
#define __msa_bmz_v __builtin_msa_bmz_v
```

## v16u8 __msa_bmzi_b (v16u8 a, v16u8 b, int imm0_255)

### Synopsis

```c
v16u8 __msa_bmzi_b (v16u8 a, v16u8 b, int imm0_255)
#include <msa.h>
Instruction: bmzi.b
Builtin: __builtin_msa_bmzi_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:413
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bmzi.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_255;
dst.bits = select_bits(mask=a, true_value=0, false_value=b);
```

### Header Mapping

```c
#define __msa_bmzi_b __builtin_msa_bmzi_b
```

## v16u8 __msa_bsel_v (v16u8 a, v16u8 b, v16u8 c)

### Synopsis

```c
v16u8 __msa_bsel_v (v16u8 a, v16u8 b, v16u8 c)
#include <msa.h>
Instruction: bsel.v
Builtin: __builtin_msa_bsel_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:414
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bsel.v.
// Operand order follows the intrinsic arguments in the header.
dst.bits = (a.bits & b.bits) | (~a.bits & c.bits);
```

### Header Mapping

```c
#define __msa_bsel_v __builtin_msa_bsel_v
```

## v16u8 __msa_bseli_b (v16u8 a, v16u8 b, int imm0_255)

### Synopsis

```c
v16u8 __msa_bseli_b (v16u8 a, v16u8 b, int imm0_255)
#include <msa.h>
Instruction: bseli.b
Builtin: __builtin_msa_bseli_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:415
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bseli.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_255;
dst.bits = (a.bits & b.bits) | (~a.bits & c.bits);
```

### Header Mapping

```c
#define __msa_bseli_b __builtin_msa_bseli_b
```

## v16u8 __msa_nor_v (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_nor_v (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: nor.v
Builtin: __builtin_msa_nor_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:406
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for nor.v.
// Operand order follows the intrinsic arguments in the header.
dst.bits = ~(a.bits | imm_or_b);
```

### Header Mapping

```c
#define __msa_nor_v __builtin_msa_nor_v
```

## v16u8 __msa_nori_b (v16u8 a, int imm0_255)

### Synopsis

```c
v16u8 __msa_nori_b (v16u8 a, int imm0_255)
#include <msa.h>
Instruction: nori.b
Builtin: __builtin_msa_nori_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:407
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for nori.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_255;
dst.bits = ~(a.bits | imm_or_b);
```

### Header Mapping

```c
#define __msa_nori_b __builtin_msa_nori_b
```

## v16u8 __msa_or_v (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_or_v (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: or.v
Builtin: __builtin_msa_or_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:404
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for or.v.
// Operand order follows the intrinsic arguments in the header.
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __msa_or_v __builtin_msa_or_v
```

## v16u8 __msa_ori_b (v16u8 a, int imm0_255)

### Synopsis

```c
v16u8 __msa_ori_b (v16u8 a, int imm0_255)
#include <msa.h>
Instruction: ori.b
Builtin: __builtin_msa_ori_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:405
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ori.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_255;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __msa_ori_b __builtin_msa_ori_b
```

## v16u8 __msa_xor_v (v16u8 a, v16u8 b)

### Synopsis

```c
v16u8 __msa_xor_v (v16u8 a, v16u8 b)
#include <msa.h>
Instruction: xor.v
Builtin: __builtin_msa_xor_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:408
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xor.v.
// Operand order follows the intrinsic arguments in the header.
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __msa_xor_v __builtin_msa_xor_v
```

## v16u8 __msa_xori_b (v16u8 a, int imm0_255)

### Synopsis

```c
v16u8 __msa_xori_b (v16u8 a, int imm0_255)
#include <msa.h>
Instruction: xori.b
Builtin: __builtin_msa_xori_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:409
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xori.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm0_255;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __msa_xori_b __builtin_msa_xori_b
```

