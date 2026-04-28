# Integer Comparison

Generated from `include/loongson-mmiintrin.h`. This page contains 16 intrinsics.

## int8x8_t pcmpeqb_s (int8x8_t s, int8x8_t t)

### Synopsis

```c
int8x8_t pcmpeqb_s (int8x8_t s, int8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: pcmpeqb.s
Builtin: __builtin_loongson_pcmpeqb_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:245
```

### Description

Compare signed 8 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcmpeqb.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = (a.byte[i] == b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
return __builtin_loongson_pcmpeqb_s (s, t);
```

## uint8x8_t pcmpeqb_u (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint8x8_t pcmpeqb_u (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: pcmpeqb.u
Builtin: __builtin_loongson_pcmpeqb_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:227
```

### Description

Compare unsigned 8 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcmpeqb.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = (a.byte[i] == b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
return __builtin_loongson_pcmpeqb_u (s, t);
```

## int16x4_t pcmpeqh_s (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t pcmpeqh_s (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pcmpeqh.s
Builtin: __builtin_loongson_pcmpeqh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:239
```

### Description

Compare signed 4 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcmpeqh.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = (a.half[i] == b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
return __builtin_loongson_pcmpeqh_s (s, t);
```

## uint16x4_t pcmpeqh_u (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t pcmpeqh_u (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pcmpeqh.u
Builtin: __builtin_loongson_pcmpeqh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:221
```

### Description

Compare unsigned 4 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcmpeqh.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = (a.half[i] == b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
return __builtin_loongson_pcmpeqh_u (s, t);
```

## int32x2_t pcmpeqw_s (int32x2_t s, int32x2_t t)

### Synopsis

```c
int32x2_t pcmpeqw_s (int32x2_t s, int32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: pcmpeqw.s
Builtin: __builtin_loongson_pcmpeqw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:233
```

### Description

Compare signed 2 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcmpeqw.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for i in 0..1:
  dst.word[i] = (a.word[i] == b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
return __builtin_loongson_pcmpeqw_s (s, t);
```

## uint32x2_t pcmpeqw_u (uint32x2_t s, uint32x2_t t)

### Synopsis

```c
uint32x2_t pcmpeqw_u (uint32x2_t s, uint32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: pcmpeqw.u
Builtin: __builtin_loongson_pcmpeqw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:215
```

### Description

Compare unsigned 2 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcmpeqw.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for i in 0..1:
  dst.word[i] = (a.word[i] == b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
return __builtin_loongson_pcmpeqw_u (s, t);
```

## int8x8_t pcmpgtb_s (int8x8_t s, int8x8_t t)

### Synopsis

```c
int8x8_t pcmpgtb_s (int8x8_t s, int8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: pcmpgtb.s
Builtin: __builtin_loongson_pcmpgtb_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:282
```

### Description

Compare signed 8 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcmpgtb.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = (a.byte[i] > b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
return __builtin_loongson_pcmpgtb_s (s, t);
```

## uint8x8_t pcmpgtb_u (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint8x8_t pcmpgtb_u (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: pcmpgtb.u
Builtin: __builtin_loongson_pcmpgtb_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:264
```

### Description

Compare unsigned 8 x 8-bit byte lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcmpgtb.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = (a.byte[i] > b.byte[i]) ? all_ones : 0;
```

### Header Mapping

```c
return __builtin_loongson_pcmpgtb_u (s, t);
```

## int16x4_t pcmpgth_s (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t pcmpgth_s (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pcmpgth.s
Builtin: __builtin_loongson_pcmpgth_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:276
```

### Description

Compare signed 4 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcmpgth.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = (a.half[i] > b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
return __builtin_loongson_pcmpgth_s (s, t);
```

## uint16x4_t pcmpgth_u (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t pcmpgth_u (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pcmpgth.u
Builtin: __builtin_loongson_pcmpgth_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:258
```

### Description

Compare unsigned 4 x 16-bit half lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcmpgth.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = (a.half[i] > b.half[i]) ? all_ones : 0;
```

### Header Mapping

```c
return __builtin_loongson_pcmpgth_u (s, t);
```

## int32x2_t pcmpgtw_s (int32x2_t s, int32x2_t t)

### Synopsis

```c
int32x2_t pcmpgtw_s (int32x2_t s, int32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: pcmpgtw.s
Builtin: __builtin_loongson_pcmpgtw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:270
```

### Description

Compare signed 2 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcmpgtw.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for i in 0..1:
  dst.word[i] = (a.word[i] > b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
return __builtin_loongson_pcmpgtw_s (s, t);
```

## uint32x2_t pcmpgtw_u (uint32x2_t s, uint32x2_t t)

### Synopsis

```c
uint32x2_t pcmpgtw_u (uint32x2_t s, uint32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: pcmpgtw.u
Builtin: __builtin_loongson_pcmpgtw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:252
```

### Description

Compare unsigned 2 x 32-bit word lanes and produce all-ones elements for true lanes, zero for false lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pcmpgtw.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for i in 0..1:
  dst.word[i] = (a.word[i] > b.word[i]) ? all_ones : 0;
```

### Header Mapping

```c
return __builtin_loongson_pcmpgtw_u (s, t);
```

## int16x4_t pmaxsh (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t pmaxsh (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pmaxsh
Builtin: __builtin_loongson_pmaxsh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:358
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pmaxsh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = max(a.half[i], b.half[i]);
```

### Header Mapping

```c
return __builtin_loongson_pmaxsh (s, t);
```

## uint8x8_t pmaxub (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint8x8_t pmaxub (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: pmaxub
Builtin: __builtin_loongson_pmaxub
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:365
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pmaxub.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = max(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
return __builtin_loongson_pmaxub (s, t);
```

## int16x4_t pminsh (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t pminsh (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pminsh
Builtin: __builtin_loongson_pminsh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:372
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pminsh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = min(a.half[i], b.half[i]);
```

### Header Mapping

```c
return __builtin_loongson_pminsh (s, t);
```

## uint8x8_t pminub (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint8x8_t pminub (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: pminub
Builtin: __builtin_loongson_pminub
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:379
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pminub.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = min(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
return __builtin_loongson_pminub (s, t);
```

