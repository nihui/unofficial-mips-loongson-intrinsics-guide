# Memory

Generated from `include/loongson-asxintrin.h`. This page contains 10 intrinsics.

## __m256i __lasx_xvblb (int _1, const volatile void * _2)

### Synopsis

```c
__m256i __lasx_xvblb (int _1, const volatile void * _2)
#include <loongson-asxintrin.h>
Instruction: xvblb
Builtin: __builtin_lasx_xvblb
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4393
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `xvblb`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvblb.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = _1;
addr = _2 + _1;
dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lasx_xvblb(_1, _2) ((__m256i)__builtin_lasx_xvblb((_1), (_2)))
```

## __m256i __lasx_xvbld (int _1, const volatile void * _2)

### Synopsis

```c
__m256i __lasx_xvbld (int _1, const volatile void * _2)
#include <loongson-asxintrin.h>
Instruction: xvbld
Builtin: __builtin_lasx_xvbld
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4396
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `xvbld`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvbld.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
imm = _1;
addr = _2 + _1;
dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lasx_xvbld(_1, _2) ((__m256i)__builtin_lasx_xvbld((_1), (_2)))
```

## __m256i __lasx_xvblh (int _1, const volatile void * _2)

### Synopsis

```c
__m256i __lasx_xvblh (int _1, const volatile void * _2)
#include <loongson-asxintrin.h>
Instruction: xvblh
Builtin: __builtin_lasx_xvblh
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4394
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `xvblh`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvblh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
imm = _1;
addr = _2 + _1;
dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lasx_xvblh(_1, _2) ((__m256i)__builtin_lasx_xvblh((_1), (_2)))
```

## __m256i __lasx_xvblw (int _1, const volatile void * _2)

### Synopsis

```c
__m256i __lasx_xvblw (int _1, const volatile void * _2)
#include <loongson-asxintrin.h>
Instruction: xvblw
Builtin: __builtin_lasx_xvblw
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4395
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `xvblw`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvblw.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
imm = _1;
addr = _2 + _1;
dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lasx_xvblw(_1, _2) ((__m256i)__builtin_lasx_xvblw((_1), (_2)))
```

## __m256i __lasx_xvld_b (int _1, const volatile void * _2)

### Synopsis

```c
__m256i __lasx_xvld_b (int _1, const volatile void * _2)
#include <loongson-asxintrin.h>
Instruction: xvld.b
Builtin: __builtin_lasx_xvld_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4392
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `xvld.b`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvld.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
imm = _1;
addr = _2 + _1;
dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lasx_xvld_b(_1, _2) ((__m256i)__builtin_lasx_xvld_b((_1), (_2)))
```

## void __lasx_xvsb (__m256i _1, unsigned char _2, int _3, const volatile void * _4)

### Synopsis

```c
void __lasx_xvsb (__m256i _1, unsigned char _2, int _3, const volatile void * _4)
#include <loongson-asxintrin.h>
Instruction: xvsb
Builtin: __builtin_lasx_xvsb
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4397
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `xvsb`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvsb.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
imm = _3;
addr = _4 + _3;
store_selected_element_or_vector(addr, _1, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lasx_xvsb(_1, _2, _3, _4) ((void)__builtin_lasx_xvsb((v32i8)(_1), (_2), (_3), (_4)))
```

## void __lasx_xvsd (__m256i _1, unsigned char _2, int _3, const volatile void * _4)

### Synopsis

```c
void __lasx_xvsd (__m256i _1, unsigned char _2, int _3, const volatile void * _4)
#include <loongson-asxintrin.h>
Instruction: xvsd
Builtin: __builtin_lasx_xvsd
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4400
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `xvsd`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvsd.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 64-bit elements.
a = _1;
imm = _2;
imm = _3;
addr = _4 + _3;
store_selected_element_or_vector(addr, _1, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lasx_xvsd(_1, _2, _3, _4) ((void)__builtin_lasx_xvsd((v4i64)(_1), (_2), (_3), (_4)))
```

## void __lasx_xvsh (__m256i _1, unsigned char _2, int _3, const volatile void * _4)

### Synopsis

```c
void __lasx_xvsh (__m256i _1, unsigned char _2, int _3, const volatile void * _4)
#include <loongson-asxintrin.h>
Instruction: xvsh
Builtin: __builtin_lasx_xvsh
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4398
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `xvsh`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvsh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 16-bit elements.
a = _1;
imm = _2;
imm = _3;
addr = _4 + _3;
store_selected_element_or_vector(addr, _1, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lasx_xvsh(_1, _2, _3, _4) ((void)__builtin_lasx_xvsh((v16i16)(_1), (_2), (_3), (_4)))
```

## void __lasx_xvst_b (__m256i _1, int _2, const volatile void * _3)

### Synopsis

```c
void __lasx_xvst_b (__m256i _1, int _2, const volatile void * _3)
#include <loongson-asxintrin.h>
Instruction: xvst.b
Builtin: __builtin_lasx_xvst_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4401
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `xvst.b`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvst.b.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 32 lanes of 8-bit elements.
a = _1;
imm = _2;
addr = _3 + _2;
store_selected_element_or_vector(addr, _1, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lasx_xvst_b(_1, _2, _3) ((void)__builtin_lasx_xvst_b((v32i8)(_1), (_2), (_3)))
```

## void __lasx_xvsw (__m256i _1, unsigned char _2, int _3, const volatile void * _4)

### Synopsis

```c
void __lasx_xvsw (__m256i _1, unsigned char _2, int _3, const volatile void * _4)
#include <loongson-asxintrin.h>
Instruction: xvsw
Builtin: __builtin_lasx_xvsw
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4399
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `xvsw`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for xvsw.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 32-bit elements.
a = _1;
imm = _2;
imm = _3;
addr = _4 + _3;
store_selected_element_or_vector(addr, _1, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lasx_xvsw(_1, _2, _3, _4) ((void)__builtin_lasx_xvsw((v8i32)(_1), (_2), (_3), (_4)))
```

