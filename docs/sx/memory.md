# Memory

Generated from `include/loongson-sxintrin.h`. This page contains 8 intrinsics.

## __m128i __lsx_vblb (int offset, const volatile void * mem)

### Synopsis

```c
__m128i __lsx_vblb (int offset, const volatile void * mem)
#include <loongson-sxintrin.h>
Instruction: vblb
Builtin: __builtin_lsx_vblb
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1410
```

### Description

Load one u8 element from memory and broadcast it to every destination lane.

### Operation

```c
dst.u8[0] = load_u8(mem + offset);
dst.u8[1] = load_u8(mem + offset);
dst.u8[2] = load_u8(mem + offset);
dst.u8[3] = load_u8(mem + offset);
dst.u8[4] = load_u8(mem + offset);
dst.u8[5] = load_u8(mem + offset);
dst.u8[6] = load_u8(mem + offset);
dst.u8[7] = load_u8(mem + offset);
dst.u8[8] = load_u8(mem + offset);
dst.u8[9] = load_u8(mem + offset);
dst.u8[10] = load_u8(mem + offset);
dst.u8[11] = load_u8(mem + offset);
dst.u8[12] = load_u8(mem + offset);
dst.u8[13] = load_u8(mem + offset);
dst.u8[14] = load_u8(mem + offset);
dst.u8[15] = load_u8(mem + offset);
```

### Header Mapping

```c
#define __lsx_vblb(offset, mem) ((__m128i)__builtin_lsx_vblb((offset), (mem)))
```

## __m128i __lsx_vbld (int offset, const volatile void * mem)

### Synopsis

```c
__m128i __lsx_vbld (int offset, const volatile void * mem)
#include <loongson-sxintrin.h>
Instruction: vbld
Builtin: __builtin_lsx_vbld
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1413
```

### Description

Load one u64 element from memory and broadcast it to every destination lane.

### Operation

```c
dst.u64[0] = load_u64(mem + offset);
dst.u64[1] = load_u64(mem + offset);
```

### Header Mapping

```c
#define __lsx_vbld(offset, mem) ((__m128i)__builtin_lsx_vbld((offset), (mem)))
```

## __m128i __lsx_vblh (int offset, const volatile void * mem)

### Synopsis

```c
__m128i __lsx_vblh (int offset, const volatile void * mem)
#include <loongson-sxintrin.h>
Instruction: vblh
Builtin: __builtin_lsx_vblh
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1411
```

### Description

Load one u16 element from memory and broadcast it to every destination lane.

### Operation

```c
dst.u16[0] = load_u16(mem + offset);
dst.u16[1] = load_u16(mem + offset);
dst.u16[2] = load_u16(mem + offset);
dst.u16[3] = load_u16(mem + offset);
dst.u16[4] = load_u16(mem + offset);
dst.u16[5] = load_u16(mem + offset);
dst.u16[6] = load_u16(mem + offset);
dst.u16[7] = load_u16(mem + offset);
```

### Header Mapping

```c
#define __lsx_vblh(offset, mem) ((__m128i)__builtin_lsx_vblh((offset), (mem)))
```

## __m128i __lsx_vblw (int offset, const volatile void * mem)

### Synopsis

```c
__m128i __lsx_vblw (int offset, const volatile void * mem)
#include <loongson-sxintrin.h>
Instruction: vblw
Builtin: __builtin_lsx_vblw
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1412
```

### Description

Load one u32 element from memory and broadcast it to every destination lane.

### Operation

```c
dst.u32[0] = load_u32(mem + offset);
dst.u32[1] = load_u32(mem + offset);
dst.u32[2] = load_u32(mem + offset);
dst.u32[3] = load_u32(mem + offset);
```

### Header Mapping

```c
#define __lsx_vblw(offset, mem) ((__m128i)__builtin_lsx_vblw((offset), (mem)))
```

## void __lsx_vsb (__m128i a, unsigned char lane, int offset, const volatile void * mem)

### Synopsis

```c
void __lsx_vsb (__m128i a, unsigned char lane, int offset, const volatile void * mem)
#include <loongson-sxintrin.h>
Instruction: vsb
Builtin: __builtin_lsx_vsb
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1414
```

### Description

Store the selected SX u8 lane to memory at `mem + offset`.

### Operation

```c
store_u8(mem + offset, a.u8[lane]);
```

### Header Mapping

```c
#define __lsx_vsb(a, lane, offset, mem) ((void)__builtin_lsx_vsb((v16i8)(a), (lane), (offset), (mem)))
```

## void __lsx_vsd (__m128i a, unsigned char lane, int offset, const volatile void * mem)

### Synopsis

```c
void __lsx_vsd (__m128i a, unsigned char lane, int offset, const volatile void * mem)
#include <loongson-sxintrin.h>
Instruction: vsd
Builtin: __builtin_lsx_vsd
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1417
```

### Description

Store the selected SX u64 lane to memory at `mem + offset`.

### Operation

```c
store_u64(mem + offset, a.u64[lane]);
```

### Header Mapping

```c
#define __lsx_vsd(a, lane, offset, mem) ((void)__builtin_lsx_vsd((v2i64)(a), (lane), (offset), (mem)))
```

## void __lsx_vsh (__m128i a, unsigned char lane, int offset, const volatile void * mem)

### Synopsis

```c
void __lsx_vsh (__m128i a, unsigned char lane, int offset, const volatile void * mem)
#include <loongson-sxintrin.h>
Instruction: vsh
Builtin: __builtin_lsx_vsh
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1415
```

### Description

Store the selected SX u16 lane to memory at `mem + offset`.

### Operation

```c
store_u16(mem + offset, a.u16[lane]);
```

### Header Mapping

```c
#define __lsx_vsh(a, lane, offset, mem) ((void)__builtin_lsx_vsh((v8i16)(a), (lane), (offset), (mem)))
```

## void __lsx_vsw (__m128i a, unsigned char lane, int offset, const volatile void * mem)

### Synopsis

```c
void __lsx_vsw (__m128i a, unsigned char lane, int offset, const volatile void * mem)
#include <loongson-sxintrin.h>
Instruction: vsw
Builtin: __builtin_lsx_vsw
CPU Flags: __mips_loongson_sx
Kind: macro
Source: include/loongson-sxintrin.h:1416
```

### Description

Store the selected SX u32 lane to memory at `mem + offset`.

### Operation

```c
store_u32(mem + offset, a.u32[lane]);
```

### Header Mapping

```c
#define __lsx_vsw(a, lane, offset, mem) ((void)__builtin_lsx_vsw((v4i32)(a), (lane), (offset), (mem)))
```

