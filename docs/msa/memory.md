# Memory

Generated from `include/msa.h`. This page contains 8 intrinsics.

## v16i8 __msa_ld_b (void * mem, int imm_n512_511)

### Synopsis

```c
v16i8 __msa_ld_b (void * mem, int imm_n512_511)
#include <msa.h>
Instruction: ld.b
Builtin: __builtin_msa_ld_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:228
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `ld.b`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ld.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm_n512_511;
addr = mem + imm_n512_511;
dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __msa_ld_b __builtin_msa_ld_b
```

## v2i64 __msa_ld_d (void * mem, int imm_n4096_4088)

### Synopsis

```c
v2i64 __msa_ld_d (void * mem, int imm_n4096_4088)
#include <msa.h>
Instruction: ld.d
Builtin: __builtin_msa_ld_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:231
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `ld.d`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ld.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm_n4096_4088;
addr = mem + imm_n4096_4088;
dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __msa_ld_d __builtin_msa_ld_d
```

## v8i16 __msa_ld_h (void * mem, int imm_n1024_1022)

### Synopsis

```c
v8i16 __msa_ld_h (void * mem, int imm_n1024_1022)
#include <msa.h>
Instruction: ld.h
Builtin: __builtin_msa_ld_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:229
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `ld.h`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ld.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm_n1024_1022;
addr = mem + imm_n1024_1022;
dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __msa_ld_h __builtin_msa_ld_h
```

## v4i32 __msa_ld_w (void * mem, int imm_n2048_2044)

### Synopsis

```c
v4i32 __msa_ld_w (void * mem, int imm_n2048_2044)
#include <msa.h>
Instruction: ld.w
Builtin: __builtin_msa_ld_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:230
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `ld.w`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for ld.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm_n2048_2044;
addr = mem + imm_n2048_2044;
dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __msa_ld_w __builtin_msa_ld_w
```

## void __msa_st_b (v16i8 a, void * mem, int imm_n512_511)

### Synopsis

```c
void __msa_st_b (v16i8 a, void * mem, int imm_n512_511)
#include <msa.h>
Instruction: st.b
Builtin: __builtin_msa_st_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:232
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `st.b`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for st.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = imm_n512_511;
addr = mem + imm_n512_511;
store_selected_element_or_vector(addr, a, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __msa_st_b __builtin_msa_st_b
```

## void __msa_st_d (v2i64 a, void * mem, int imm_n4096_4088)

### Synopsis

```c
void __msa_st_d (v2i64 a, void * mem, int imm_n4096_4088)
#include <msa.h>
Instruction: st.d
Builtin: __builtin_msa_st_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:235
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `st.d`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for st.d.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = imm_n4096_4088;
addr = mem + imm_n4096_4088;
store_selected_element_or_vector(addr, a, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __msa_st_d __builtin_msa_st_d
```

## void __msa_st_h (v8i16 a, void * mem, int imm_n1024_1022)

### Synopsis

```c
void __msa_st_h (v8i16 a, void * mem, int imm_n1024_1022)
#include <msa.h>
Instruction: st.h
Builtin: __builtin_msa_st_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:233
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `st.h`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for st.h.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = imm_n1024_1022;
addr = mem + imm_n1024_1022;
store_selected_element_or_vector(addr, a, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __msa_st_h __builtin_msa_st_h
```

## void __msa_st_w (v4i32 a, void * mem, int imm_n2048_2044)

### Synopsis

```c
void __msa_st_w (v4i32 a, void * mem, int imm_n2048_2044)
#include <msa.h>
Instruction: st.w
Builtin: __builtin_msa_st_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:234
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `st.w`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for st.w.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = imm_n2048_2044;
addr = mem + imm_n2048_2044;
store_selected_element_or_vector(addr, a, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __msa_st_w __builtin_msa_st_w
```

