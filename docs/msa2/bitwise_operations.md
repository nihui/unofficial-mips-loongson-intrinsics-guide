# Bitwise Operations

Generated from `include/msa2.h`. This page contains 5 intrinsics.

## __m128i __msa2_nxbits_any_b (__m128i a)

### Synopsis

```c
__m128i __msa2_nxbits_any_b (__m128i a)
#include <msa2.h>
Instruction: nxbits.any.b
Builtin: __builtin_msa2_nxbits_any_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:308
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for nxbits.any.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = predicate_mask_from_neighbor_bits(a.byte[i]);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_nxbits_any_b ((v16i8) a);
```

## __m128i __msa2_nxbits_ge0_b (__m128i a)

### Synopsis

```c
__m128i __msa2_nxbits_ge0_b (__m128i a)
#include <msa2.h>
Instruction: nxbits.ge0.b
Builtin: __builtin_msa2_nxbits_ge0_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:314
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for nxbits.ge0.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = predicate_mask_from_neighbor_bits(a.byte[i]);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_nxbits_ge0_b ((v16i8) a);
```

## __m128i __msa2_nxbits_lt0_b (__m128i a)

### Synopsis

```c
__m128i __msa2_nxbits_lt0_b (__m128i a)
#include <msa2.h>
Instruction: nxbits.lt0.b
Builtin: __builtin_msa2_nxbits_lt0_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:320
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for nxbits.lt0.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = predicate_mask_from_neighbor_bits(a.byte[i]);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_nxbits_lt0_b ((v16i8) a);
```

## __m128i __msa2_wxbits_01_b (__m128i a)

### Synopsis

```c
__m128i __msa2_wxbits_01_b (__m128i a)
#include <msa2.h>
Instruction: wxbits.01.b
Builtin: __builtin_msa2_wxbits_01_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:452
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for wxbits.01.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = expanded_mask_bits_from_bytes(a.byte[i]);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_wxbits_01_b ((v16i8) a);
```

## __m128i __msa2_wxbits_mask_b (__m128i a)

### Synopsis

```c
__m128i __msa2_wxbits_mask_b (__m128i a)
#include <msa2.h>
Instruction: wxbits.mask.b
Builtin: __builtin_msa2_wxbits_mask_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:458
```

### Description

Manipulate or summarize bits in each 16 x 8-bit byte lanes element. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for wxbits.mask.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
for i in 0..15:
  dst.byte[i] = expanded_mask_bits_from_bytes(a.byte[i]);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_wxbits_mask_b ((v16i8) a);
```

