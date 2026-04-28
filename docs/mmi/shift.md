# Shift

Generated from `include/loongson-mmiintrin.h`. This page contains 12 intrinsics.

## int16x4_t psllh_s (int16x4_t s, uint8_t amount)

### Synopsis

```c
int16x4_t psllh_s (int16x4_t s, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psllh.s
Builtin: __builtin_loongson_psllh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:469
```

### Description

Shift or rotate 4 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psllh.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
for i in 0..3:
  dst.half[i] = a.half[i] << amount;
```

### Header Mapping

```c
return __builtin_loongson_psllh_s (s, amount);
```

## uint16x4_t psllh_u (uint16x4_t s, uint8_t amount)

### Synopsis

```c
uint16x4_t psllh_u (uint16x4_t s, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psllh.u
Builtin: __builtin_loongson_psllh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:463
```

### Description

Shift or rotate 4 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psllh.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
for i in 0..3:
  dst.half[i] = a.half[i] << amount;
```

### Header Mapping

```c
return __builtin_loongson_psllh_u (s, amount);
```

## int32x2_t psllw_s (int32x2_t s, uint8_t amount)

### Synopsis

```c
int32x2_t psllw_s (int32x2_t s, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psllw.s
Builtin: __builtin_loongson_psllw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:481
```

### Description

Shift or rotate 2 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psllw.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
for i in 0..1:
  dst.word[i] = a.word[i] << amount;
```

### Header Mapping

```c
return __builtin_loongson_psllw_s (s, amount);
```

## uint32x2_t psllw_u (uint32x2_t s, uint8_t amount)

### Synopsis

```c
uint32x2_t psllw_u (uint32x2_t s, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psllw.u
Builtin: __builtin_loongson_psllw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:475
```

### Description

Shift or rotate 2 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psllw.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
for i in 0..1:
  dst.word[i] = a.word[i] << amount;
```

### Header Mapping

```c
return __builtin_loongson_psllw_u (s, amount);
```

## int16x4_t psrah_s (int16x4_t s, uint8_t amount)

### Synopsis

```c
int16x4_t psrah_s (int16x4_t s, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psrah.s
Builtin: __builtin_loongson_psrah_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:519
```

### Description

Shift or rotate 4 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psrah.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
for i in 0..3:
  dst.half[i] = arithmetic_shift_right(a.half[i] + (1 << (amount - 1)), amount);
```

### Header Mapping

```c
return __builtin_loongson_psrah_s (s, amount);
```

## uint16x4_t psrah_u (uint16x4_t s, uint8_t amount)

### Synopsis

```c
uint16x4_t psrah_u (uint16x4_t s, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psrah.u
Builtin: __builtin_loongson_psrah_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:513
```

### Description

Shift or rotate 4 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psrah.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
for i in 0..3:
  dst.half[i] = arithmetic_shift_right(a.half[i] + (1 << (amount - 1)), amount);
```

### Header Mapping

```c
return __builtin_loongson_psrah_u (s, amount);
```

## int32x2_t psraw_s (int32x2_t s, uint8_t amount)

### Synopsis

```c
int32x2_t psraw_s (int32x2_t s, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psraw.s
Builtin: __builtin_loongson_psraw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:531
```

### Description

Shift or rotate 2 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psraw.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
for i in 0..1:
  dst.word[i] = arithmetic_shift_right(a.word[i] + (1 << (amount - 1)), amount);
```

### Header Mapping

```c
return __builtin_loongson_psraw_s (s, amount);
```

## uint32x2_t psraw_u (uint32x2_t s, uint8_t amount)

### Synopsis

```c
uint32x2_t psraw_u (uint32x2_t s, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psraw.u
Builtin: __builtin_loongson_psraw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:525
```

### Description

Shift or rotate 2 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psraw.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
for i in 0..1:
  dst.word[i] = arithmetic_shift_right(a.word[i] + (1 << (amount - 1)), amount);
```

### Header Mapping

```c
return __builtin_loongson_psraw_u (s, amount);
```

## int16x4_t psrlh_s (int16x4_t s, uint8_t amount)

### Synopsis

```c
int16x4_t psrlh_s (int16x4_t s, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psrlh.s
Builtin: __builtin_loongson_psrlh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:494
```

### Description

Shift or rotate 4 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psrlh.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
for i in 0..3:
  dst.half[i] = logical_shift_right(a.half[i], amount);
```

### Header Mapping

```c
return __builtin_loongson_psrlh_s (s, amount);
```

## uint16x4_t psrlh_u (uint16x4_t s, uint8_t amount)

### Synopsis

```c
uint16x4_t psrlh_u (uint16x4_t s, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psrlh.u
Builtin: __builtin_loongson_psrlh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:488
```

### Description

Shift or rotate 4 x 16-bit half lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psrlh.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
for i in 0..3:
  dst.half[i] = logical_shift_right(a.half[i], amount);
```

### Header Mapping

```c
return __builtin_loongson_psrlh_u (s, amount);
```

## int32x2_t psrlw_s (int32x2_t s, uint8_t amount)

### Synopsis

```c
int32x2_t psrlw_s (int32x2_t s, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psrlw.s
Builtin: __builtin_loongson_psrlw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:506
```

### Description

Shift or rotate 2 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psrlw.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
for i in 0..1:
  dst.word[i] = logical_shift_right(a.word[i], amount);
```

### Header Mapping

```c
return __builtin_loongson_psrlw_s (s, amount);
```

## uint32x2_t psrlw_u (uint32x2_t s, uint8_t amount)

### Synopsis

```c
uint32x2_t psrlw_u (uint32x2_t s, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psrlw.u
Builtin: __builtin_loongson_psrlw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:500
```

### Description

Shift or rotate 2 x 32-bit word lanes; suffixes indicate logical/arithmetic, rounding, narrowing, and saturation behavior. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psrlw.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
for i in 0..1:
  dst.word[i] = logical_shift_right(a.word[i], amount);
```

### Header Mapping

```c
return __builtin_loongson_psrlw_u (s, amount);
```

