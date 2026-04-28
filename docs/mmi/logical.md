# Logical

Generated from `include/loongson-mmiintrin.h`. This page contains 8 intrinsics.

## int8x8_t pandn_sb (int8x8_t s, int8x8_t t)

### Synopsis

```c
int8x8_t pandn_sb (int8x8_t s, int8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: pandn.sb
Builtin: __builtin_loongson_pandn_sb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:195
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pandn.sb.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
dst.bits = b.bits & ~a.bits;
```

### Header Mapping

```c
return __builtin_loongson_pandn_sb (s, t);
```

## int64_t pandn_sd (int64_t s, int64_t t)

### Synopsis

```c
int64_t pandn_sd (int64_t s, int64_t t)
#include <loongson-mmiintrin.h>
Instruction: pandn.sd
Builtin: __builtin_loongson_pandn_sd
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:177
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pandn.sd.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 64-bit elements.
a = s;
b = t;
dst.bits = b.bits & ~a.bits;
```

### Header Mapping

```c
return __builtin_loongson_pandn_sd (s, t);
```

## int16x4_t pandn_sh (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t pandn_sh (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pandn.sh
Builtin: __builtin_loongson_pandn_sh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:189
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pandn.sh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
dst.bits = b.bits & ~a.bits;
```

### Header Mapping

```c
return __builtin_loongson_pandn_sh (s, t);
```

## int32x2_t pandn_sw (int32x2_t s, int32x2_t t)

### Synopsis

```c
int32x2_t pandn_sw (int32x2_t s, int32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: pandn.sw
Builtin: __builtin_loongson_pandn_sw
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:183
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pandn.sw.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
dst.bits = b.bits & ~a.bits;
```

### Header Mapping

```c
return __builtin_loongson_pandn_sw (s, t);
```

## uint8x8_t pandn_ub (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint8x8_t pandn_ub (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: pandn.ub
Builtin: __builtin_loongson_pandn_ub
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:171
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pandn.ub.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
dst.bits = b.bits & ~a.bits;
```

### Header Mapping

```c
return __builtin_loongson_pandn_ub (s, t);
```

## uint64_t pandn_ud (uint64_t s, uint64_t t)

### Synopsis

```c
uint64_t pandn_ud (uint64_t s, uint64_t t)
#include <loongson-mmiintrin.h>
Instruction: pandn.ud
Builtin: __builtin_loongson_pandn_ud
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:153
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pandn.ud.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 64-bit elements.
a = s;
b = t;
dst.bits = b.bits & ~a.bits;
```

### Header Mapping

```c
return __builtin_loongson_pandn_ud (s, t);
```

## uint16x4_t pandn_uh (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t pandn_uh (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pandn.uh
Builtin: __builtin_loongson_pandn_uh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:165
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pandn.uh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
dst.bits = b.bits & ~a.bits;
```

### Header Mapping

```c
return __builtin_loongson_pandn_uh (s, t);
```

## uint32x2_t pandn_uw (uint32x2_t s, uint32x2_t t)

### Synopsis

```c
uint32x2_t pandn_uw (uint32x2_t s, uint32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: pandn.uw
Builtin: __builtin_loongson_pandn_uw
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:159
```

### Description

Perform bitwise logical selection or logical operation across the full vector. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pandn.uw.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
dst.bits = b.bits & ~a.bits;
```

### Header Mapping

```c
return __builtin_loongson_pandn_uw (s, t);
```

