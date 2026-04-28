# Memory

Generated from `include/loongson-sxintrin.h`. This page contains 8 intrinsics.

## __m128i __lsx_vblb (int _1, const volatile void * _2)

### Synopsis

```c
__m128i __lsx_vblb (int _1, const volatile void * _2)
#include <loongson-sxintrin.h>
Instruction: vblb
Builtin: __builtin_lsx_vblb
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1410
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `vblb`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vblb.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
imm = _1;
addr = _2 + _1;
dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lsx_vblb(_1, _2) ((__m128i)__builtin_lsx_vblb((_1), (_2)))
```

## __m128i __lsx_vbld (int _1, const volatile void * _2)

### Synopsis

```c
__m128i __lsx_vbld (int _1, const volatile void * _2)
#include <loongson-sxintrin.h>
Instruction: vbld
Builtin: __builtin_lsx_vbld
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1413
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `vbld`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vbld.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
imm = _1;
addr = _2 + _1;
dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lsx_vbld(_1, _2) ((__m128i)__builtin_lsx_vbld((_1), (_2)))
```

## __m128i __lsx_vblh (int _1, const volatile void * _2)

### Synopsis

```c
__m128i __lsx_vblh (int _1, const volatile void * _2)
#include <loongson-sxintrin.h>
Instruction: vblh
Builtin: __builtin_lsx_vblh
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1411
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `vblh`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vblh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
imm = _1;
addr = _2 + _1;
dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lsx_vblh(_1, _2) ((__m128i)__builtin_lsx_vblh((_1), (_2)))
```

## __m128i __lsx_vblw (int _1, const volatile void * _2)

### Synopsis

```c
__m128i __lsx_vblw (int _1, const volatile void * _2)
#include <loongson-sxintrin.h>
Instruction: vblw
Builtin: __builtin_lsx_vblw
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1412
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `vblw`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vblw.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
imm = _1;
addr = _2 + _1;
dst = vector_load_or_lane_broadcast(addr, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lsx_vblw(_1, _2) ((__m128i)__builtin_lsx_vblw((_1), (_2)))
```

## void __lsx_vsb (__m128i _1, unsigned char _2, int _3, const volatile void * _4)

### Synopsis

```c
void __lsx_vsb (__m128i _1, unsigned char _2, int _3, const volatile void * _4)
#include <loongson-sxintrin.h>
Instruction: vsb
Builtin: __builtin_lsx_vsb
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1414
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `vsb`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsb.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 16 lanes of 8-bit elements.
a = _1;
imm = _2;
imm = _3;
addr = _4 + _3;
store_selected_element_or_vector(addr, _1, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lsx_vsb(_1, _2, _3, _4) ((void)__builtin_lsx_vsb((v16i8)(_1), (_2), (_3), (_4)))
```

## void __lsx_vsd (__m128i _1, unsigned char _2, int _3, const volatile void * _4)

### Synopsis

```c
void __lsx_vsd (__m128i _1, unsigned char _2, int _3, const volatile void * _4)
#include <loongson-sxintrin.h>
Instruction: vsd
Builtin: __builtin_lsx_vsd
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1417
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `vsd`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsd.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 2 lanes of 64-bit elements.
a = _1;
imm = _2;
imm = _3;
addr = _4 + _3;
store_selected_element_or_vector(addr, _1, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lsx_vsd(_1, _2, _3, _4) ((void)__builtin_lsx_vsd((v2i64)(_1), (_2), (_3), (_4)))
```

## void __lsx_vsh (__m128i _1, unsigned char _2, int _3, const volatile void * _4)

### Synopsis

```c
void __lsx_vsh (__m128i _1, unsigned char _2, int _3, const volatile void * _4)
#include <loongson-sxintrin.h>
Instruction: vsh
Builtin: __builtin_lsx_vsh
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1415
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `vsh`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsh.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 8 lanes of 16-bit elements.
a = _1;
imm = _2;
imm = _3;
addr = _4 + _3;
store_selected_element_or_vector(addr, _1, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lsx_vsh(_1, _2, _3, _4) ((void)__builtin_lsx_vsh((v8i16)(_1), (_2), (_3), (_4)))
```

## void __lsx_vsw (__m128i _1, unsigned char _2, int _3, const volatile void * _4)

### Synopsis

```c
void __lsx_vsw (__m128i _1, unsigned char _2, int _3, const volatile void * _4)
#include <loongson-sxintrin.h>
Instruction: vsw
Builtin: __builtin_lsx_vsw
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1416
```

### Description

Load or store selected vector element data using the memory addressing convention encoded by `vsw`. This description is inferred from the Loongson/MIPS mnemonic, the public intrinsic name, and analogous MSA/LSX/LASX/SSE/AVX SIMD naming conventions. For corner cases such as NaNs, exact exception flags, or implementation-defined memory predicates, prefer hardware tests or the vendor ISA manual.

### Operation

```c
// Inferred semantics for vsw.
// Operand order follows the intrinsic arguments in the header.
// Treat vector operands as 4 lanes of 32-bit elements.
a = _1;
imm = _2;
imm = _3;
addr = _4 + _3;
store_selected_element_or_vector(addr, _1, element_size_from_mnemonic);
```

### Header Mapping

```c
#define __lsx_vsw(_1, _2, _3, _4) ((void)__builtin_lsx_vsw((v4i32)(_1), (_2), (_3), (_4)))
```

