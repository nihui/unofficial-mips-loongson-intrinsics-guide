# Memory

Generated from `include/msa.h`. This page contains 8 intrinsics.

<span id="intrinsic-__msa_ld_b"></span>

## v16i8 __msa_ld_b (void * mem, int offset)

### Synopsis

```c
v16i8 __msa_ld_b (void * mem, int offset)
#include <msa.h>
Instruction: ld.b
Builtin: __builtin_msa_ld_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:228
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
```

### Header Mapping

```c
#define __msa_ld_b __builtin_msa_ld_b
```

<span id="intrinsic-__msa_ld_d"></span>

## v2i64 __msa_ld_d (void * mem, int offset)

### Synopsis

```c
v2i64 __msa_ld_d (void * mem, int offset)
#include <msa.h>
Instruction: ld.d
Builtin: __builtin_msa_ld_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:231
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
```

### Header Mapping

```c
#define __msa_ld_d __builtin_msa_ld_d
```

<span id="intrinsic-__msa_ld_h"></span>

## v8i16 __msa_ld_h (void * mem, int offset)

### Synopsis

```c
v8i16 __msa_ld_h (void * mem, int offset)
#include <msa.h>
Instruction: ld.h
Builtin: __builtin_msa_ld_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:229
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
```

### Header Mapping

```c
#define __msa_ld_h __builtin_msa_ld_h
```

<span id="intrinsic-__msa_ld_w"></span>

## v4i32 __msa_ld_w (void * mem, int offset)

### Synopsis

```c
v4i32 __msa_ld_w (void * mem, int offset)
#include <msa.h>
Instruction: ld.w
Builtin: __builtin_msa_ld_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:230
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
```

### Header Mapping

```c
#define __msa_ld_w __builtin_msa_ld_w
```

<span id="intrinsic-__msa_st_b"></span>

## void __msa_st_b (v16i8 a, void * mem, int offset)

### Synopsis

```c
void __msa_st_b (v16i8 a, void * mem, int offset)
#include <msa.h>
Instruction: st.b
Builtin: __builtin_msa_st_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:232
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
```

### Header Mapping

```c
#define __msa_st_b __builtin_msa_st_b
```

<span id="intrinsic-__msa_st_d"></span>

## void __msa_st_d (v2i64 a, void * mem, int offset)

### Synopsis

```c
void __msa_st_d (v2i64 a, void * mem, int offset)
#include <msa.h>
Instruction: st.d
Builtin: __builtin_msa_st_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:235
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
```

### Header Mapping

```c
#define __msa_st_d __builtin_msa_st_d
```

<span id="intrinsic-__msa_st_h"></span>

## void __msa_st_h (v8i16 a, void * mem, int offset)

### Synopsis

```c
void __msa_st_h (v8i16 a, void * mem, int offset)
#include <msa.h>
Instruction: st.h
Builtin: __builtin_msa_st_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:233
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
```

### Header Mapping

```c
#define __msa_st_h __builtin_msa_st_h
```

<span id="intrinsic-__msa_st_w"></span>

## void __msa_st_w (v4i32 a, void * mem, int offset)

### Synopsis

```c
void __msa_st_w (v4i32 a, void * mem, int offset)
#include <msa.h>
Instruction: st.w
Builtin: __builtin_msa_st_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:234
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
```

### Header Mapping

```c
#define __msa_st_w __builtin_msa_st_w
```

