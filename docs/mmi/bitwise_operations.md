# Bitwise Operations

Generated from `include/loongson-mmiintrin.h`. This page contains 2 intrinsics.

## int8x8_t pmovmskb_s (int8x8_t s)

### Synopsis

```c
int8x8_t pmovmskb_s (int8x8_t s)
#include <loongson-mmiintrin.h>
Instruction: pmovmskb.s
Builtin: __builtin_loongson_pmovmskb_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:392
```

### Description

Extract the sign bit from each element of 8 x 8-bit byte lanes and pack those bits into a low-order mask. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pmovmskb.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
mask = 0;
for i in 0..7:
  mask |= sign_bit(a.byte[i]) << i;
return mask;
```

### Header Mapping

```c
return __builtin_loongson_pmovmskb_s (s);
```

## uint8x8_t pmovmskb_u (uint8x8_t s)

### Synopsis

```c
uint8x8_t pmovmskb_u (uint8x8_t s)
#include <loongson-mmiintrin.h>
Instruction: pmovmskb.u
Builtin: __builtin_loongson_pmovmskb_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:386
```

### Description

Extract the sign bit from each element of 8 x 8-bit byte lanes and pack those bits into a low-order mask. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pmovmskb.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
mask = 0;
for i in 0..7:
  mask |= sign_bit(a.byte[i]) << i;
return mask;
```

### Header Mapping

```c
return __builtin_loongson_pmovmskb_u (s);
```

