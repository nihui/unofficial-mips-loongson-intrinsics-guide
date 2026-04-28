# Branch

Generated from `include/msa.h`. This page contains 10 intrinsics.

## i32 __msa_test_bnz_b (v16u8 a)

### Synopsis

```c
i32 __msa_test_bnz_b (v16u8 a)
#include <msa.h>
Instruction: bnz.b
Builtin: __builtin_msa_bnz_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:453
```

### Description

Test whether the requested vector lanes are non-zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bnz.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] != 0);
return predicate;
```

### Header Mapping

```c
#define __msa_test_bnz_b __builtin_msa_bnz_b
```

## i32 __msa_test_bnz_d (v2u64 a)

### Synopsis

```c
i32 __msa_test_bnz_d (v2u64 a)
#include <msa.h>
Instruction: bnz.d
Builtin: __builtin_msa_bnz_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:456
```

### Description

Test whether the requested vector lanes are non-zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bnz.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] != 0);
return predicate;
```

### Header Mapping

```c
#define __msa_test_bnz_d __builtin_msa_bnz_d
```

## i32 __msa_test_bnz_h (v8u16 a)

### Synopsis

```c
i32 __msa_test_bnz_h (v8u16 a)
#include <msa.h>
Instruction: bnz.h
Builtin: __builtin_msa_bnz_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:454
```

### Description

Test whether the requested vector lanes are non-zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bnz.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] != 0);
return predicate;
```

### Header Mapping

```c
#define __msa_test_bnz_h __builtin_msa_bnz_h
```

## i32 __msa_test_bnz_v (v16u8 a)

### Synopsis

```c
i32 __msa_test_bnz_v (v16u8 a)
#include <msa.h>
Instruction: bnz.v
Builtin: __builtin_msa_bnz_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:419
```

### Description

Test whether the requested vector lanes are non-zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bnz.v.
// Operand order follows the intrinsic arguments in the header.
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] != 0);
return predicate;
```

### Header Mapping

```c
#define __msa_test_bnz_v __builtin_msa_bnz_v
```

## i32 __msa_test_bnz_w (v4u32 a)

### Synopsis

```c
i32 __msa_test_bnz_w (v4u32 a)
#include <msa.h>
Instruction: bnz.w
Builtin: __builtin_msa_bnz_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:455
```

### Description

Test whether the requested vector lanes are non-zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bnz.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] != 0);
return predicate;
```

### Header Mapping

```c
#define __msa_test_bnz_w __builtin_msa_bnz_w
```

## i32 __msa_test_bz_b (v16u8 a)

### Synopsis

```c
i32 __msa_test_bz_b (v16u8 a)
#include <msa.h>
Instruction: bz.b
Builtin: __builtin_msa_bz_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:457
```

### Description

Test whether the requested vector lanes are zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bz.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] == 0);
return predicate;
```

### Header Mapping

```c
#define __msa_test_bz_b __builtin_msa_bz_b
```

## i32 __msa_test_bz_d (v2u64 a)

### Synopsis

```c
i32 __msa_test_bz_d (v2u64 a)
#include <msa.h>
Instruction: bz.d
Builtin: __builtin_msa_bz_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:460
```

### Description

Test whether the requested vector lanes are zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bz.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] == 0);
return predicate;
```

### Header Mapping

```c
#define __msa_test_bz_d __builtin_msa_bz_d
```

## i32 __msa_test_bz_h (v8u16 a)

### Synopsis

```c
i32 __msa_test_bz_h (v8u16 a)
#include <msa.h>
Instruction: bz.h
Builtin: __builtin_msa_bz_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:458
```

### Description

Test whether the requested vector lanes are zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bz.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] == 0);
return predicate;
```

### Header Mapping

```c
#define __msa_test_bz_h __builtin_msa_bz_h
```

## i32 __msa_test_bz_v (v16u8 a)

### Synopsis

```c
i32 __msa_test_bz_v (v16u8 a)
#include <msa.h>
Instruction: bz.v
Builtin: __builtin_msa_bz_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:420
```

### Description

Test whether the requested vector lanes are zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bz.v.
// Operand order follows the intrinsic arguments in the header.
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] == 0);
return predicate;
```

### Header Mapping

```c
#define __msa_test_bz_v __builtin_msa_bz_v
```

## i32 __msa_test_bz_w (v4u32 a)

### Synopsis

```c
i32 __msa_test_bz_w (v4u32 a)
#include <msa.h>
Instruction: bz.w
Builtin: __builtin_msa_bz_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:459
```

### Description

Test whether the requested vector lanes are zero and return the branch predicate. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for bz.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
predicate = false;
for each tested lane i:
  predicate |= (a.lane[i] == 0);
return predicate;
```

### Header Mapping

```c
#define __msa_test_bz_w __builtin_msa_bz_w
```

