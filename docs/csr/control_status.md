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

Read a Loongson control/status resource using `cpucfg`.

### Operation

```c
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

Access a Loongson control/status resource using `drdcsr`. A user-mode attempt on Loongson-3A4000 was isolated in a child process because this read can trap on systems that do not allow CSR access. On the tested machine, the child terminated with SIGILL.

### Operation

```c
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

Access a Loongson control/status resource using `drdgcsr`. A user-mode attempt on Loongson-3A4000 was isolated in a child process because this read can trap on systems that do not allow CSR access. On the tested machine, the child terminated with SIGILL.

### Operation

```c
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

Read a Loongson control/status resource using `drdtime`.

### Operation

```c
return { .dvalue = read_64bit_time_counter(), .dtimeid = read_time_counter_id() };
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

Access a privileged Loongson control/status or TLB resource using `dwrcsr`. This helper was compile-checked only; the runtime probe does not execute it in user mode because it can trap or modify privileged machine state.

### Operation

```c
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

Access a privileged Loongson control/status or TLB resource using `dwrgcsr`. This helper was compile-checked only; the runtime probe does not execute it in user mode because it can trap or modify privileged machine state.

### Operation

```c
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

Access a privileged Loongson control/status or TLB resource using `lddir`. This helper was not executed in the runtime probe because it can touch privileged TLB state; the bundled GCC 7.3 toolchain also did not produce a runnable user-mode probe for this form.

### Operation

```c
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

Access a privileged Loongson control/status or TLB resource using `ldpte`. This helper was not executed in the runtime probe because it can touch privileged TLB state; the bundled GCC 7.3 toolchain also did not produce a runnable user-mode probe for this form.

### Operation

```c
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

Access a privileged Loongson control/status or TLB resource using `lwdir`. This helper was not executed in the runtime probe because it can touch privileged TLB state; the bundled GCC 7.3 toolchain also did not produce a runnable user-mode probe for this form.

### Operation

```c
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

Access a privileged Loongson control/status or TLB resource using `lwpte`. This helper was not executed in the runtime probe because it can touch privileged TLB state; the bundled GCC 7.3 toolchain also did not produce a runnable user-mode probe for this form.

### Operation

```c
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

Access a Loongson control/status resource using `rdcsr`. A user-mode attempt on Loongson-3A4000 was isolated in a child process because this read can trap on systems that do not allow CSR access. On the tested machine, the child terminated with SIGILL.

### Operation

```c
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

Access a Loongson control/status resource using `rdgcsr`. A user-mode attempt on Loongson-3A4000 was isolated in a child process because this read can trap on systems that do not allow CSR access. On the tested machine, the child terminated with SIGILL.

### Operation

```c
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

Read a Loongson control/status resource using `rdtimeh`.

### Operation

```c
return { .value = read_high_32_bits_of_time_counter(), .timeid = read_time_counter_id() };
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

Read a Loongson control/status resource using `rdtimel`.

### Operation

```c
return { .value = read_low_32_bits_of_time_counter(), .timeid = read_time_counter_id() };
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

Access a privileged Loongson control/status or TLB resource using `wrcsr`. This helper was compile-checked only; the runtime probe does not execute it in user mode because it can trap or modify privileged machine state.

### Operation

```c
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

Access a privileged Loongson control/status or TLB resource using `wrgcsr`. This helper was compile-checked only; the runtime probe does not execute it in user mode because it can trap or modify privileged machine state.

### Operation

```c
write_loongson_guest_csr(csr, value);
```

### Header Mapping

```c
#define __lcsr_wrgcsr __builtin_loongson_wrgcsr
```

