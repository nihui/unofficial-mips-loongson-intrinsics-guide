# Memory

Generated from `include/loongson-asxintrin.h`. This page contains 10 intrinsics.

## __m256i __lasx_xvblb (int offset, const volatile void * mem)

### Synopsis

```c
__m256i __lasx_xvblb (int offset, const volatile void * mem)
#include <loongson-asxintrin.h>
Instruction: xvblb
Builtin: __builtin_lasx_xvblb
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4393
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
dst.u8[16] = load_u8(mem + offset);
dst.u8[17] = load_u8(mem + offset);
dst.u8[18] = load_u8(mem + offset);
dst.u8[19] = load_u8(mem + offset);
dst.u8[20] = load_u8(mem + offset);
dst.u8[21] = load_u8(mem + offset);
dst.u8[22] = load_u8(mem + offset);
dst.u8[23] = load_u8(mem + offset);
dst.u8[24] = load_u8(mem + offset);
dst.u8[25] = load_u8(mem + offset);
dst.u8[26] = load_u8(mem + offset);
dst.u8[27] = load_u8(mem + offset);
dst.u8[28] = load_u8(mem + offset);
dst.u8[29] = load_u8(mem + offset);
dst.u8[30] = load_u8(mem + offset);
dst.u8[31] = load_u8(mem + offset);
```

### Header Mapping

```c
#define __lasx_xvblb(offset, mem) ((__m256i)__builtin_lasx_xvblb((offset), (mem)))
```

## __m256i __lasx_xvbld (int offset, const volatile void * mem)

### Synopsis

```c
__m256i __lasx_xvbld (int offset, const volatile void * mem)
#include <loongson-asxintrin.h>
Instruction: xvbld
Builtin: __builtin_lasx_xvbld
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4396
```

### Description

Load one u64 element from memory and broadcast it to every destination lane.

### Operation

```c
dst.u64[0] = load_u64(mem + offset);
dst.u64[1] = load_u64(mem + offset);
dst.u64[2] = load_u64(mem + offset);
dst.u64[3] = load_u64(mem + offset);
```

### Header Mapping

```c
#define __lasx_xvbld(offset, mem) ((__m256i)__builtin_lasx_xvbld((offset), (mem)))
```

## __m256i __lasx_xvblh (int offset, const volatile void * mem)

### Synopsis

```c
__m256i __lasx_xvblh (int offset, const volatile void * mem)
#include <loongson-asxintrin.h>
Instruction: xvblh
Builtin: __builtin_lasx_xvblh
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4394
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
dst.u16[8] = load_u16(mem + offset);
dst.u16[9] = load_u16(mem + offset);
dst.u16[10] = load_u16(mem + offset);
dst.u16[11] = load_u16(mem + offset);
dst.u16[12] = load_u16(mem + offset);
dst.u16[13] = load_u16(mem + offset);
dst.u16[14] = load_u16(mem + offset);
dst.u16[15] = load_u16(mem + offset);
```

### Header Mapping

```c
#define __lasx_xvblh(offset, mem) ((__m256i)__builtin_lasx_xvblh((offset), (mem)))
```

## __m256i __lasx_xvblw (int offset, const volatile void * mem)

### Synopsis

```c
__m256i __lasx_xvblw (int offset, const volatile void * mem)
#include <loongson-asxintrin.h>
Instruction: xvblw
Builtin: __builtin_lasx_xvblw
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4395
```

### Description

Load one u32 element from memory and broadcast it to every destination lane.

### Operation

```c
dst.u32[0] = load_u32(mem + offset);
dst.u32[1] = load_u32(mem + offset);
dst.u32[2] = load_u32(mem + offset);
dst.u32[3] = load_u32(mem + offset);
dst.u32[4] = load_u32(mem + offset);
dst.u32[5] = load_u32(mem + offset);
dst.u32[6] = load_u32(mem + offset);
dst.u32[7] = load_u32(mem + offset);
```

### Header Mapping

```c
#define __lasx_xvblw(offset, mem) ((__m256i)__builtin_lasx_xvblw((offset), (mem)))
```

## __m256i __lasx_xvld_b (int offset, const volatile void * mem)

### Synopsis

```c
__m256i __lasx_xvld_b (int offset, const volatile void * mem)
#include <loongson-asxintrin.h>
Instruction: xvld.b
Builtin: __builtin_lasx_xvld_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4392
```

### Description

Load one full vector from memory at `mem + offset`.

### Operation

```c
dst.u8[0] = mem.u8[offset + 0];
dst.u8[1] = mem.u8[offset + 1];
dst.u8[2] = mem.u8[offset + 2];
dst.u8[3] = mem.u8[offset + 3];
dst.u8[4] = mem.u8[offset + 4];
dst.u8[5] = mem.u8[offset + 5];
dst.u8[6] = mem.u8[offset + 6];
dst.u8[7] = mem.u8[offset + 7];
dst.u8[8] = mem.u8[offset + 8];
dst.u8[9] = mem.u8[offset + 9];
dst.u8[10] = mem.u8[offset + 10];
dst.u8[11] = mem.u8[offset + 11];
dst.u8[12] = mem.u8[offset + 12];
dst.u8[13] = mem.u8[offset + 13];
dst.u8[14] = mem.u8[offset + 14];
dst.u8[15] = mem.u8[offset + 15];
dst.u8[16] = mem.u8[offset + 16];
dst.u8[17] = mem.u8[offset + 17];
dst.u8[18] = mem.u8[offset + 18];
dst.u8[19] = mem.u8[offset + 19];
dst.u8[20] = mem.u8[offset + 20];
dst.u8[21] = mem.u8[offset + 21];
dst.u8[22] = mem.u8[offset + 22];
dst.u8[23] = mem.u8[offset + 23];
dst.u8[24] = mem.u8[offset + 24];
dst.u8[25] = mem.u8[offset + 25];
dst.u8[26] = mem.u8[offset + 26];
dst.u8[27] = mem.u8[offset + 27];
dst.u8[28] = mem.u8[offset + 28];
dst.u8[29] = mem.u8[offset + 29];
dst.u8[30] = mem.u8[offset + 30];
dst.u8[31] = mem.u8[offset + 31];
```

### Header Mapping

```c
#define __lasx_xvld_b(offset, mem) ((__m256i)__builtin_lasx_xvld_b((offset), (mem)))
```

## void __lasx_xvsb (__m256i a, unsigned char lane, int offset, const volatile void * mem)

### Synopsis

```c
void __lasx_xvsb (__m256i a, unsigned char lane, int offset, const volatile void * mem)
#include <loongson-asxintrin.h>
Instruction: xvsb
Builtin: __builtin_lasx_xvsb
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4397
```

### Description

Store the selected ASX upper-half u8 lane to memory at `mem + offset`.

### Operation

```c
store_u8(mem + offset, a.u8[lane + 16]);
```

### Header Mapping

```c
#define __lasx_xvsb(a, lane, offset, mem) ((void)__builtin_lasx_xvsb((v32i8)(a), (lane), (offset), (mem)))
```

## void __lasx_xvsd (__m256i a, unsigned char lane, int offset, const volatile void * mem)

### Synopsis

```c
void __lasx_xvsd (__m256i a, unsigned char lane, int offset, const volatile void * mem)
#include <loongson-asxintrin.h>
Instruction: xvsd
Builtin: __builtin_lasx_xvsd
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4400
```

### Description

Store the selected ASX upper-half u64 lane to memory at `mem + offset`.

### Operation

```c
store_u64(mem + offset, a.u64[lane + 2]);
```

### Header Mapping

```c
#define __lasx_xvsd(a, lane, offset, mem) ((void)__builtin_lasx_xvsd((v4i64)(a), (lane), (offset), (mem)))
```

## void __lasx_xvsh (__m256i a, unsigned char lane, int offset, const volatile void * mem)

### Synopsis

```c
void __lasx_xvsh (__m256i a, unsigned char lane, int offset, const volatile void * mem)
#include <loongson-asxintrin.h>
Instruction: xvsh
Builtin: __builtin_lasx_xvsh
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4398
```

### Description

Store the selected ASX upper-half u16 lane to memory at `mem + offset`.

### Operation

```c
store_u16(mem + offset, a.u16[lane + 8]);
```

### Header Mapping

```c
#define __lasx_xvsh(a, lane, offset, mem) ((void)__builtin_lasx_xvsh((v16i16)(a), (lane), (offset), (mem)))
```

## void __lasx_xvst_b (__m256i a, int offset, const volatile void * mem)

### Synopsis

```c
void __lasx_xvst_b (__m256i a, int offset, const volatile void * mem)
#include <loongson-asxintrin.h>
Instruction: xvst.b
Builtin: __builtin_lasx_xvst_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4401
```

### Description

Store one full vector to memory at `mem + offset`.

### Operation

```c
mem.u8[offset + 0] = a.u8[0];
mem.u8[offset + 1] = a.u8[1];
mem.u8[offset + 2] = a.u8[2];
mem.u8[offset + 3] = a.u8[3];
mem.u8[offset + 4] = a.u8[4];
mem.u8[offset + 5] = a.u8[5];
mem.u8[offset + 6] = a.u8[6];
mem.u8[offset + 7] = a.u8[7];
mem.u8[offset + 8] = a.u8[8];
mem.u8[offset + 9] = a.u8[9];
mem.u8[offset + 10] = a.u8[10];
mem.u8[offset + 11] = a.u8[11];
mem.u8[offset + 12] = a.u8[12];
mem.u8[offset + 13] = a.u8[13];
mem.u8[offset + 14] = a.u8[14];
mem.u8[offset + 15] = a.u8[15];
mem.u8[offset + 16] = a.u8[16];
mem.u8[offset + 17] = a.u8[17];
mem.u8[offset + 18] = a.u8[18];
mem.u8[offset + 19] = a.u8[19];
mem.u8[offset + 20] = a.u8[20];
mem.u8[offset + 21] = a.u8[21];
mem.u8[offset + 22] = a.u8[22];
mem.u8[offset + 23] = a.u8[23];
mem.u8[offset + 24] = a.u8[24];
mem.u8[offset + 25] = a.u8[25];
mem.u8[offset + 26] = a.u8[26];
mem.u8[offset + 27] = a.u8[27];
mem.u8[offset + 28] = a.u8[28];
mem.u8[offset + 29] = a.u8[29];
mem.u8[offset + 30] = a.u8[30];
mem.u8[offset + 31] = a.u8[31];
```

### Header Mapping

```c
#define __lasx_xvst_b(a, offset, mem) ((void)__builtin_lasx_xvst_b((v32i8)(a), (offset), (mem)))
```

## void __lasx_xvsw (__m256i a, unsigned char lane, int offset, const volatile void * mem)

### Synopsis

```c
void __lasx_xvsw (__m256i a, unsigned char lane, int offset, const volatile void * mem)
#include <loongson-asxintrin.h>
Instruction: xvsw
Builtin: __builtin_lasx_xvsw
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4399
```

### Description

Store the selected ASX upper-half u32 lane to memory at `mem + offset`.

### Operation

```c
store_u32(mem + offset, a.u32[lane + 4]);
```

### Header Mapping

```c
#define __lasx_xvsw(a, lane, offset, mem) ((void)__builtin_lasx_xvsw((v8i32)(a), (lane), (offset), (mem)))
```

