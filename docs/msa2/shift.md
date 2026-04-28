# Shift

Generated from `include/msa2.h`. This page contains 8 intrinsics.

## __m128i __msa2_ror_b (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_ror_b (__m128i a, __m128i b)
#include <msa2.h>
Instruction: ror.b
Builtin: __builtin_msa2_ror_b
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:326
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ror.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_ror_b ((v16i8) a, (v16i8) b);
```

## __m128i __msa2_ror_d (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_ror_d (__m128i a, __m128i b)
#include <msa2.h>
Instruction: ror.d
Builtin: __builtin_msa2_ror_d
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:344
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ror.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_ror_d ((v2i64) a, (v2i64) b);
```

## __m128i __msa2_ror_h (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_ror_h (__m128i a, __m128i b)
#include <msa2.h>
Instruction: ror.h
Builtin: __builtin_msa2_ror_h
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:332
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ror.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_ror_h ((v8i16) a, (v8i16) b);
```

## __m128i __msa2_ror_w (__m128i a, __m128i b)

### Synopsis

```c
__m128i __msa2_ror_w (__m128i a, __m128i b)
#include <msa2.h>
Instruction: ror.w
Builtin: __builtin_msa2_ror_w
CPU Flags: __mips_msa
Kind: function
Source: include/msa2.h:338
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ror.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
return (__m128i) __builtin_msa2_ror_w ((v4i32) a, (v4i32) b);
```

## __m128i __msa2_rori_b (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_rori_b (__m128i a, int m)
#include <msa2.h>
Instruction: rori.b
Builtin: __builtin_msa2_rori_b
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:350
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for rori.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = m;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __msa2_rori_b(a, m) (__m128i) __builtin_msa2_rori_b ((v16i8) a, m);
```

## __m128i __msa2_rori_d (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_rori_d (__m128i a, int m)
#include <msa2.h>
Instruction: rori.d
Builtin: __builtin_msa2_rori_d
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:359
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for rori.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = m;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __msa2_rori_d(a, m) (__m128i) __builtin_msa2_rori_d ((v2i64) a, m);
```

## __m128i __msa2_rori_h (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_rori_h (__m128i a, int m)
#include <msa2.h>
Instruction: rori.h
Builtin: __builtin_msa2_rori_h
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:353
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for rori.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = m;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __msa2_rori_h(a, m) (__m128i) __builtin_msa2_rori_h ((v8i16) a, m);
```

## __m128i __msa2_rori_w (__m128i a, int m)

### Synopsis

```c
__m128i __msa2_rori_w (__m128i a, int m)
#include <msa2.h>
Instruction: rori.w
Builtin: __builtin_msa2_rori_w
CPU Flags: __mips_msa
Kind: macro
Source: include/msa2.h:356
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for rori.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = m;
dst.bits = a.bits | (imm_or_b);
```

### Header Mapping

```c
#define __msa2_rori_w(a, m) (__m128i) __builtin_msa2_rori_w ((v4i32) a, m);
```

