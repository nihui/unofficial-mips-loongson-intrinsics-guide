# Control and Status

Generated from `include/loongson-csr.h`. This page contains 16 intrinsics.

## int __lcsr_cpucfg (int selector)

### Synopsis

```c
int __lcsr_cpucfg (int selector)
#include <loongson-csr.h>
Instruction: cpucfg
Builtin: __builtin_loongson_cpucfg
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:45
```

### Description

Read, write, or query a Loongson control/status resource using `cpucfg`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for cpucfg.
// Operand order follows the intrinsic arguments in the header.
return read_cpu_configuration(selector);
```

### Header Mapping

```c
#define __lcsr_cpucfg __builtin_loongson_cpucfg
```

## long __lcsr_drdcsr (long csr)

### Synopsis

```c
long __lcsr_drdcsr (long csr)
#include <loongson-csr.h>
Instruction: drdcsr
Builtin: __builtin_loongson_drdcsr
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:48
```

### Description

Read, write, or query a Loongson control/status resource using `drdcsr`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for drdcsr.
// Operand order follows the intrinsic arguments in the header.
return read_loongson_csr(csr);
```

### Header Mapping

```c
#define __lcsr_drdcsr __builtin_loongson_drdcsr
```

## long __lcsr_drdgcsr (long csr)

### Synopsis

```c
long __lcsr_drdgcsr (long csr)
#include <loongson-csr.h>
Instruction: drdgcsr
Builtin: __builtin_loongson_drdgcsr
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:52
```

### Description

Read, write, or query a Loongson control/status resource using `drdgcsr`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for drdgcsr.
// Operand order follows the intrinsic arguments in the header.
return read_loongson_guest_csr(csr);
```

### Header Mapping

```c
#define __lcsr_drdgcsr __builtin_loongson_drdgcsr
```

## __drdtime_t __lcsr_drdtime (void)

### Synopsis

```c
__drdtime_t __lcsr_drdtime (void)
#include <loongson-csr.h>
Instruction: drdtime
Builtin: __builtin_loongson_drdtime
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:54
```

### Description

Read, write, or query a Loongson control/status resource using `drdtime`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for drdtime.
// Operand order follows the intrinsic arguments in the header.
result.dvalue = read_64bit_time_counter();
result.dtimeid = read_time_counter_id();
return result;
```

### Header Mapping

```c
#define __lcsr_drdtime __builtin_loongson_drdtime
```

## void __lcsr_dwrcsr (long value, long csr)

### Synopsis

```c
void __lcsr_dwrcsr (long value, long csr)
#include <loongson-csr.h>
Instruction: dwrcsr
Builtin: __builtin_loongson_dwrcsr
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:49
```

### Description

Read, write, or query a Loongson control/status resource using `dwrcsr`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dwrcsr.
// Operand order follows the intrinsic arguments in the header.
write_loongson_csr(csr, value);
```

### Header Mapping

```c
#define __lcsr_dwrcsr __builtin_loongson_dwrcsr
```

## void __lcsr_dwrgcsr (long value, long csr)

### Synopsis

```c
void __lcsr_dwrgcsr (long value, long csr)
#include <loongson-csr.h>
Instruction: dwrgcsr
Builtin: __builtin_loongson_dwrgcsr
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:53
```

### Description

Read, write, or query a Loongson control/status resource using `dwrgcsr`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for dwrgcsr.
// Operand order follows the intrinsic arguments in the header.
write_loongson_guest_csr(csr, value);
```

### Header Mapping

```c
#define __lcsr_dwrgcsr __builtin_loongson_dwrgcsr
```

## long __lcsr_lddir (long base, unsigned char level)

### Synopsis

```c
long __lcsr_lddir (long base, unsigned char level)
#include <loongson-csr.h>
Instruction: lddir
Builtin: __builtin_loongson_lddir
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:57
```

### Description

Read, write, or query a Loongson control/status resource using `lddir`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for lddir.
// Operand order follows the intrinsic arguments in the header.
return load_tlb_directory_entry(base, level);
```

### Header Mapping

```c
#define __lcsr_lddir __builtin_loongson_lddir
```

## long __lcsr_ldpte (unsigned char op)

### Synopsis

```c
long __lcsr_ldpte (unsigned char op)
#include <loongson-csr.h>
Instruction: ldpte
Builtin: __builtin_loongson_ldpte
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:59
```

### Description

Read, write, or query a Loongson control/status resource using `ldpte`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ldpte.
// Operand order follows the intrinsic arguments in the header.
return load_tlb_page_table_entry(op);
```

### Header Mapping

```c
#define __lcsr_ldpte __builtin_loongson_ldpte
```

## int __lcsr_lwdir (int base, unsigned char level)

### Synopsis

```c
int __lcsr_lwdir (int base, unsigned char level)
#include <loongson-csr.h>
Instruction: lwdir
Builtin: __builtin_loongson_lwdir
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:58
```

### Description

Read, write, or query a Loongson control/status resource using `lwdir`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for lwdir.
// Operand order follows the intrinsic arguments in the header.
return load_tlb_directory_entry(base, level);
```

### Header Mapping

```c
#define __lcsr_lwdir __builtin_loongson_lwdir
```

## int __lcsr_lwpte (unsigned char op)

### Synopsis

```c
int __lcsr_lwpte (unsigned char op)
#include <loongson-csr.h>
Instruction: lwpte
Builtin: __builtin_loongson_lwpte
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:60
```

### Description

Read, write, or query a Loongson control/status resource using `lwpte`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for lwpte.
// Operand order follows the intrinsic arguments in the header.
return load_tlb_page_table_entry(op);
```

### Header Mapping

```c
#define __lcsr_lwpte __builtin_loongson_lwpte
```

## int __lcsr_rdcsr (int csr)

### Synopsis

```c
int __lcsr_rdcsr (int csr)
#include <loongson-csr.h>
Instruction: rdcsr
Builtin: __builtin_loongson_rdcsr
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:46
```

### Description

Read, write, or query a Loongson control/status resource using `rdcsr`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for rdcsr.
// Operand order follows the intrinsic arguments in the header.
return read_loongson_csr(csr);
```

### Header Mapping

```c
#define __lcsr_rdcsr __builtin_loongson_rdcsr
```

## int __lcsr_rdgcsr (int csr)

### Synopsis

```c
int __lcsr_rdgcsr (int csr)
#include <loongson-csr.h>
Instruction: rdgcsr
Builtin: __builtin_loongson_rdgcsr
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:50
```

### Description

Read, write, or query a Loongson control/status resource using `rdgcsr`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for rdgcsr.
// Operand order follows the intrinsic arguments in the header.
return read_loongson_guest_csr(csr);
```

### Header Mapping

```c
#define __lcsr_rdgcsr __builtin_loongson_rdgcsr
```

## __rdtime_t __lcsr_rdtimeh (void)

### Synopsis

```c
__rdtime_t __lcsr_rdtimeh (void)
#include <loongson-csr.h>
Instruction: rdtimeh
Builtin: __builtin_loongson_rdtimeh
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:56
```

### Description

Read, write, or query a Loongson control/status resource using `rdtimeh`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for rdtimeh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 16-bit elements.
result.value = read_high_32_bits_of_time_counter();
result.timeid = read_time_counter_id();
return result;
```

### Header Mapping

```c
#define __lcsr_rdtimeh __builtin_loongson_rdtimeh
```

## __rdtime_t __lcsr_rdtimel (void)

### Synopsis

```c
__rdtime_t __lcsr_rdtimel (void)
#include <loongson-csr.h>
Instruction: rdtimel
Builtin: __builtin_loongson_rdtimel
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:55
```

### Description

Read, write, or query a Loongson control/status resource using `rdtimel`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for rdtimel.
// Operand order follows the intrinsic arguments in the header.
result.value = read_low_32_bits_of_time_counter();
result.timeid = read_time_counter_id();
return result;
```

### Header Mapping

```c
#define __lcsr_rdtimel __builtin_loongson_rdtimel
```

## void __lcsr_wrcsr (int value, int csr)

### Synopsis

```c
void __lcsr_wrcsr (int value, int csr)
#include <loongson-csr.h>
Instruction: wrcsr
Builtin: __builtin_loongson_wrcsr
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:47
```

### Description

Read, write, or query a Loongson control/status resource using `wrcsr`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for wrcsr.
// Operand order follows the intrinsic arguments in the header.
write_loongson_csr(csr, value);
```

### Header Mapping

```c
#define __lcsr_wrcsr __builtin_loongson_wrcsr
```

## void __lcsr_wrgcsr (int value, int csr)

### Synopsis

```c
void __lcsr_wrgcsr (int value, int csr)
#include <loongson-csr.h>
Instruction: wrgcsr
Builtin: __builtin_loongson_wrgcsr
CPU Flags: __mips_loongson_csr
Kind: alias
Source: include/loongson-csr.h:51
```

### Description

Read, write, or query a Loongson control/status resource using `wrgcsr`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for wrgcsr.
// Operand order follows the intrinsic arguments in the header.
write_loongson_guest_csr(csr, value);
```

### Header Mapping

```c
#define __lcsr_wrgcsr __builtin_loongson_wrgcsr
```

