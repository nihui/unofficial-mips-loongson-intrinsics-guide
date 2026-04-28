# Integer Computation

Generated from `include/loongson-mmiintrin.h`. This page contains 34 intrinsics.

## uint16x4_t biadd (uint8x8_t s)

### Synopsis

```c
uint16x4_t biadd (uint8x8_t s)
#include <loongson-mmiintrin.h>
Instruction: biadd
Builtin: __builtin_loongson_biadd
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:434
```

### Description

Compute lane-wise modular integer arithmetic on 1 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for biadd.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 64-bit elements.
a = s;
for i in 0..3:
  dst.half[i] = unsigned(a.byte[2*i]) + unsigned(a.byte[2*i + 1]);
```

### Header Mapping

```c
return __builtin_loongson_biadd (s);
```

## int8x8_t paddb_s (int8x8_t s, int8x8_t t)

### Synopsis

```c
int8x8_t paddb_s (int8x8_t s, int8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: paddb.s
Builtin: __builtin_loongson_paddb_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:107
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for paddb.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = a.byte[i] + b.byte[i];
```

### Header Mapping

```c
return __builtin_loongson_paddb_s (s, t);
```

## uint8x8_t paddb_u (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint8x8_t paddb_u (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: paddb.u
Builtin: __builtin_loongson_paddb_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:89
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for paddb.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = a.byte[i] + b.byte[i];
```

### Header Mapping

```c
return __builtin_loongson_paddb_u (s, t);
```

## int64_t paddd_s (int64_t s, int64_t t)

### Synopsis

```c
int64_t paddd_s (int64_t s, int64_t t)
#include <loongson-mmiintrin.h>
Instruction: paddd.s
Builtin: __builtin_loongson_paddd_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:120
```

### Description

Compute lane-wise signed integer arithmetic on 1 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for paddd.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 64-bit elements.
a = s;
b = t;
for i in 0..0:
  dst.dword[i] = a.dword[i] + b.dword[i];
```

### Header Mapping

```c
return __builtin_loongson_paddd_s (s, t);
```

## uint64_t paddd_u (uint64_t s, uint64_t t)

### Synopsis

```c
uint64_t paddd_u (uint64_t s, uint64_t t)
#include <loongson-mmiintrin.h>
Instruction: paddd.u
Builtin: __builtin_loongson_paddd_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:114
```

### Description

Compute lane-wise unsigned integer arithmetic on 1 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for paddd.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 64-bit elements.
a = s;
b = t;
for i in 0..0:
  dst.dword[i] = a.dword[i] + b.dword[i];
```

### Header Mapping

```c
return __builtin_loongson_paddd_u (s, t);
```

## int16x4_t paddh_s (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t paddh_s (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: paddh.s
Builtin: __builtin_loongson_paddh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:101
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for paddh.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
return __builtin_loongson_paddh_s (s, t);
```

## uint16x4_t paddh_u (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t paddh_u (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: paddh.u
Builtin: __builtin_loongson_paddh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:83
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for paddh.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
return __builtin_loongson_paddh_u (s, t);
```

## int8x8_t paddsb (int8x8_t s, int8x8_t t)

### Synopsis

```c
int8x8_t paddsb (int8x8_t s, int8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: paddsb
Builtin: __builtin_loongson_paddsb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:133
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for paddsb.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = saturate(a.byte[i] + b.byte[i], 8, signedness);
```

### Header Mapping

```c
return __builtin_loongson_paddsb (s, t);
```

## int16x4_t paddsh (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t paddsh (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: paddsh
Builtin: __builtin_loongson_paddsh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:127
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for paddsh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = saturate(a.half[i] + b.half[i], 16, signedness);
```

### Header Mapping

```c
return __builtin_loongson_paddsh (s, t);
```

## uint8x8_t paddusb (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint8x8_t paddusb (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: paddusb
Builtin: __builtin_loongson_paddusb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:146
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for paddusb.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = a.byte[i] + b.byte[i];
```

### Header Mapping

```c
return __builtin_loongson_paddusb (s, t);
```

## uint16x4_t paddush (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t paddush (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: paddush
Builtin: __builtin_loongson_paddush
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:140
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for paddush.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = a.half[i] + b.half[i];
```

### Header Mapping

```c
return __builtin_loongson_paddush (s, t);
```

## int32x2_t paddw_s (int32x2_t s, int32x2_t t)

### Synopsis

```c
int32x2_t paddw_s (int32x2_t s, int32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: paddw.s
Builtin: __builtin_loongson_paddw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:95
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for paddw.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for i in 0..1:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
return __builtin_loongson_paddw_s (s, t);
```

## uint32x2_t paddw_u (uint32x2_t s, uint32x2_t t)

### Synopsis

```c
uint32x2_t paddw_u (uint32x2_t s, uint32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: paddw.u
Builtin: __builtin_loongson_paddw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:77
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for paddw.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for i in 0..1:
  dst.word[i] = a.word[i] + b.word[i];
```

### Header Mapping

```c
return __builtin_loongson_paddw_u (s, t);
```

## uint8x8_t pasubub (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint8x8_t pasubub (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: pasubub
Builtin: __builtin_loongson_pasubub
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:427
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pasubub.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = abs(a.byte[i] - b.byte[i]);
```

### Header Mapping

```c
return __builtin_loongson_pasubub (s, t);
```

## uint8x8_t pavgb (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint8x8_t pavgb (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: pavgb
Builtin: __builtin_loongson_pavgb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:208
```

### Description

Compute lane-wise rounded average values for 8 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pavgb.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = floor_average(a.byte[i], b.byte[i]);
```

### Header Mapping

```c
return __builtin_loongson_pavgb (s, t);
```

## uint16x4_t pavgh (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t pavgh (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pavgh
Builtin: __builtin_loongson_pavgh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:202
```

### Description

Compute lane-wise rounded average values for 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pavgh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = floor_average(a.half[i], b.half[i]);
```

### Header Mapping

```c
return __builtin_loongson_pavgh (s, t);
```

## int32x2_t pmaddhw (int16x4_t s, int16x4_t t)

### Synopsis

```c
int32x2_t pmaddhw (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pmaddhw
Builtin: __builtin_loongson_pmaddhw
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:351
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pmaddhw.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for i in 0..1:
  p0 = signed(a.half[2*i]) * signed(b.half[2*i]);
  p1 = signed(a.half[2*i + 1]) * signed(b.half[2*i + 1]);
  dst.word[i] = p0 + p1;
```

### Header Mapping

```c
return __builtin_loongson_pmaddhw (s, t);
```

## int16x4_t pmulhh (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t pmulhh (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pmulhh
Builtin: __builtin_loongson_pmulhh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:406
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pmulhh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = a.half[i] * b.half[i];
```

### Header Mapping

```c
return __builtin_loongson_pmulhh (s, t);
```

## uint16x4_t pmulhuh (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t pmulhuh (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pmulhuh
Builtin: __builtin_loongson_pmulhuh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:399
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pmulhuh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = a.half[i] * b.half[i];
```

### Header Mapping

```c
return __builtin_loongson_pmulhuh (s, t);
```

## int16x4_t pmullh (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t pmullh (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: pmullh
Builtin: __builtin_loongson_pmullh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:413
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pmullh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = a.half[i] * b.half[i];
```

### Header Mapping

```c
return __builtin_loongson_pmullh (s, t);
```

## int64_t pmuluw (uint32x2_t s, uint32x2_t t)

### Synopsis

```c
int64_t pmuluw (uint32x2_t s, uint32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: pmuluw
Builtin: __builtin_loongson_pmuluw
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:420
```

### Description

Compute lane-wise modular integer arithmetic on 2 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for pmuluw.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for i in 0..1:
  dst.word[i] = a.word[i] * b.word[i];
```

### Header Mapping

```c
return __builtin_loongson_pmuluw (s, t);
```

## uint16x4_t psadbh (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint16x4_t psadbh (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: psadbh
Builtin: __builtin_loongson_psadbh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:443
```

### Description

Compute adjacent-pair sum of absolute differences using modular inputs and widened results. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psadbh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  d0 = abs(unsigned(a.byte[2*i]) - unsigned(b.byte[2*i]));
  d1 = abs(unsigned(a.byte[2*i + 1]) - unsigned(b.byte[2*i + 1]));
  dst.half[i] = d0 + d1;
```

### Header Mapping

```c
return __builtin_loongson_psadbh (s, t);
```

## int8x8_t psubb_s (int8x8_t s, int8x8_t t)

### Synopsis

```c
int8x8_t psubb_s (int8x8_t s, int8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: psubb.s
Builtin: __builtin_loongson_psubb_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:568
```

### Description

Compute lane-wise signed integer arithmetic on 8 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psubb.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = a.byte[i] - b.byte[i];
```

### Header Mapping

```c
return __builtin_loongson_psubb_s (s, t);
```

## uint8x8_t psubb_u (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint8x8_t psubb_u (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: psubb.u
Builtin: __builtin_loongson_psubb_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:550
```

### Description

Compute lane-wise unsigned integer arithmetic on 8 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psubb.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = a.byte[i] - b.byte[i];
```

### Header Mapping

```c
return __builtin_loongson_psubb_u (s, t);
```

## int64_t psubd_s (int64_t s, int64_t t)

### Synopsis

```c
int64_t psubd_s (int64_t s, int64_t t)
#include <loongson-mmiintrin.h>
Instruction: psubd.s
Builtin: __builtin_loongson_psubd_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:581
```

### Description

Compute lane-wise signed integer arithmetic on 1 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psubd.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 64-bit elements.
a = s;
b = t;
for i in 0..0:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return __builtin_loongson_psubd_s (s, t);
```

## uint64_t psubd_u (uint64_t s, uint64_t t)

### Synopsis

```c
uint64_t psubd_u (uint64_t s, uint64_t t)
#include <loongson-mmiintrin.h>
Instruction: psubd.u
Builtin: __builtin_loongson_psubd_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:575
```

### Description

Compute lane-wise unsigned integer arithmetic on 1 x 64-bit dword lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psubd.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 1 lanes of 64-bit elements.
a = s;
b = t;
for i in 0..0:
  dst.dword[i] = a.dword[i] - b.dword[i];
```

### Header Mapping

```c
return __builtin_loongson_psubd_u (s, t);
```

## int16x4_t psubh_s (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t psubh_s (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: psubh.s
Builtin: __builtin_loongson_psubh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:562
```

### Description

Compute lane-wise signed integer arithmetic on 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psubh.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return __builtin_loongson_psubh_s (s, t);
```

## uint16x4_t psubh_u (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t psubh_u (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: psubh.u
Builtin: __builtin_loongson_psubh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:544
```

### Description

Compute lane-wise unsigned integer arithmetic on 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psubh.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return __builtin_loongson_psubh_u (s, t);
```

## int8x8_t psubsb (int8x8_t s, int8x8_t t)

### Synopsis

```c
int8x8_t psubsb (int8x8_t s, int8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: psubsb
Builtin: __builtin_loongson_psubsb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:594
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psubsb.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = saturate(a.byte[i] - b.byte[i], 8, signedness);
```

### Header Mapping

```c
return __builtin_loongson_psubsb (s, t);
```

## int16x4_t psubsh (int16x4_t s, int16x4_t t)

### Synopsis

```c
int16x4_t psubsh (int16x4_t s, int16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: psubsh
Builtin: __builtin_loongson_psubsh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:588
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psubsh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = saturate(a.half[i] - b.half[i], 16, signedness);
```

### Header Mapping

```c
return __builtin_loongson_psubsh (s, t);
```

## uint8x8_t psubusb (uint8x8_t s, uint8x8_t t)

### Synopsis

```c
uint8x8_t psubusb (uint8x8_t s, uint8x8_t t)
#include <loongson-mmiintrin.h>
Instruction: psubusb
Builtin: __builtin_loongson_psubusb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:607
```

### Description

Compute lane-wise modular integer arithmetic on 8 x 8-bit byte lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psubusb.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 8-bit elements.
a = s;
b = t;
for i in 0..7:
  dst.byte[i] = a.byte[i] - b.byte[i];
```

### Header Mapping

```c
return __builtin_loongson_psubusb (s, t);
```

## uint16x4_t psubush (uint16x4_t s, uint16x4_t t)

### Synopsis

```c
uint16x4_t psubush (uint16x4_t s, uint16x4_t t)
#include <loongson-mmiintrin.h>
Instruction: psubush
Builtin: __builtin_loongson_psubush
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:601
```

### Description

Compute lane-wise modular integer arithmetic on 4 x 16-bit half lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psubush.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
a = s;
b = t;
for i in 0..3:
  dst.half[i] = a.half[i] - b.half[i];
```

### Header Mapping

```c
return __builtin_loongson_psubush (s, t);
```

## int32x2_t psubw_s (int32x2_t s, int32x2_t t)

### Synopsis

```c
int32x2_t psubw_s (int32x2_t s, int32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: psubw.s
Builtin: __builtin_loongson_psubw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:556
```

### Description

Compute lane-wise signed integer arithmetic on 2 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psubw.s.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for i in 0..1:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return __builtin_loongson_psubw_s (s, t);
```

## uint32x2_t psubw_u (uint32x2_t s, uint32x2_t t)

### Synopsis

```c
uint32x2_t psubw_u (uint32x2_t s, uint32x2_t t)
#include <loongson-mmiintrin.h>
Instruction: psubw.u
Builtin: __builtin_loongson_psubw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:538
```

### Description

Compute lane-wise unsigned integer arithmetic on 2 x 32-bit word lanes. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for psubw.u.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 32-bit elements.
a = s;
b = t;
for i in 0..1:
  dst.word[i] = a.word[i] - b.word[i];
```

### Header Mapping

```c
return __builtin_loongson_psubw_u (s, t);
```

