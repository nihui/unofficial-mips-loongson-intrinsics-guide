# Control and Status

Generated from `include/msa.h`. This page contains 1 intrinsic.

## i32 __msa_cfcmsa (int imm0_31)

### Synopsis

```c
i32 __msa_cfcmsa (int imm0_31)
#include <msa.h>
Instruction: cfcmsa
Builtin: __builtin_msa_cfcmsa
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:579
```

### Description

Read or write an MSA control register using the immediate register selector encoded by `cfcmsa`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for cfcmsa.
// Operand order follows the intrinsic arguments in the header.
imm = imm0_31;
return read_msa_control_register(imm);
```

### Header Mapping

```c
#define __msa_cfcmsa __builtin_msa_cfcmsa
```

