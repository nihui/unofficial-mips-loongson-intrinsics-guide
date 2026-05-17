# Control and Status

Generated from `include/msa.h`. This page contains 1 intrinsic.

## int __msa_cfcmsa (int imm)

### Synopsis

```c
int __msa_cfcmsa (int imm)
#include <msa.h>
Instruction: cfcmsa
Builtin: __builtin_msa_cfcmsa
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:579
```

### Description

Read or write an MSA control register using the immediate register selector encoded by `cfcmsa`.

### Operation

```c
return read_msa_control_register(imm);
```

### Header Mapping

```c
#define __msa_cfcmsa __builtin_msa_cfcmsa
```

