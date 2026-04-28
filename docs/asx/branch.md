# Branch

Generated from `include/loongson-asxintrin.h`. This page contains 10 intrinsics.

## int __lasx_xbnz_b (__m256i _1)

### Synopsis

```c
int __lasx_xbnz_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xbnz.b
Builtin: __builtin_lasx_xbnz_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4366
```

### Description

Test whether the requested vector lanes are non-zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xbnz.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] != 0);
return predicate;
```

### Header Mapping

```c
return __builtin_lasx_xbnz_b((v32u8)_1);
```

## int __lasx_xbnz_d (__m256i _1)

### Synopsis

```c
int __lasx_xbnz_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xbnz.d
Builtin: __builtin_lasx_xbnz_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4386
```

### Description

Test whether the requested vector lanes are non-zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xbnz.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] != 0);
return predicate;
```

### Header Mapping

```c
return __builtin_lasx_xbnz_d((v4u64)_1);
```

## int __lasx_xbnz_h (__m256i _1)

### Synopsis

```c
int __lasx_xbnz_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xbnz.h
Builtin: __builtin_lasx_xbnz_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4373
```

### Description

Test whether the requested vector lanes are non-zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xbnz.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] != 0);
return predicate;
```

### Header Mapping

```c
return __builtin_lasx_xbnz_h((v16u16)_1);
```

## int __lasx_xbnz_v (__m256i _1)

### Synopsis

```c
int __lasx_xbnz_v (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xbnz.v
Builtin: __builtin_lasx_xbnz_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4359
```

### Description

Test whether the requested vector lanes are non-zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xbnz.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] != 0);
return predicate;
```

### Header Mapping

```c
return __builtin_lasx_xbnz_v((v32u8)_1);
```

## int __lasx_xbnz_w (__m256i _1)

### Synopsis

```c
int __lasx_xbnz_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xbnz.w
Builtin: __builtin_lasx_xbnz_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4380
```

### Description

Test whether the requested vector lanes are non-zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xbnz.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] != 0);
return predicate;
```

### Header Mapping

```c
return __builtin_lasx_xbnz_w((v8u32)_1);
```

## int __lasx_xbz_b (__m256i _1)

### Synopsis

```c
int __lasx_xbz_b (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xbz.b
Builtin: __builtin_lasx_xbz_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4332
```

### Description

Test whether the requested vector lanes are zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xbz.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] == 0);
return predicate;
```

### Header Mapping

```c
return __builtin_lasx_xbz_b((v32u8)_1);
```

## int __lasx_xbz_d (__m256i _1)

### Synopsis

```c
int __lasx_xbz_d (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xbz.d
Builtin: __builtin_lasx_xbz_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4352
```

### Description

Test whether the requested vector lanes are zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xbz.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] == 0);
return predicate;
```

### Header Mapping

```c
return __builtin_lasx_xbz_d((v4u64)_1);
```

## int __lasx_xbz_h (__m256i _1)

### Synopsis

```c
int __lasx_xbz_h (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xbz.h
Builtin: __builtin_lasx_xbz_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4339
```

### Description

Test whether the requested vector lanes are zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xbz.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] == 0);
return predicate;
```

### Header Mapping

```c
return __builtin_lasx_xbz_h((v16u16)_1);
```

## int __lasx_xbz_v (__m256i _1)

### Synopsis

```c
int __lasx_xbz_v (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xbz.v
Builtin: __builtin_lasx_xbz_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4325
```

### Description

Test whether the requested vector lanes are zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xbz.v.
// Operand order follows the intrinsic arguments in the header.
a = _1;
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] == 0);
return predicate;
```

### Header Mapping

```c
return __builtin_lasx_xbz_v((v32u8)_1);
```

## int __lasx_xbz_w (__m256i _1)

### Synopsis

```c
int __lasx_xbz_w (__m256i _1)
#include <loongson-asxintrin.h>
Instruction: xbz.w
Builtin: __builtin_lasx_xbz_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4346
```

### Description

Test whether the requested vector lanes are zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xbz.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] == 0);
return predicate;
```

### Header Mapping

```c
return __builtin_lasx_xbz_w((v8u32)_1);
```

