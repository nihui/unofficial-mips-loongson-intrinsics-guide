# Miscellaneous

Generated from `include/loongson-asxintrin.h`. This page contains 25 intrinsics.

<span id="intrinsic-__lasx_mxvclrstri_v"></span>

## __m256i __lasx_mxvclrstri_v (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvclrstri_v (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvclrstri.v
Builtin: __builtin_lasx_mxvclrstri_v
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3606
```

### Description

Preserve bytes before the string-limit position selected by the immediate operand and clear the rest. This is intended for vectorized string routines that need to zero bytes after a terminator or match boundary.

### Operation

```c
dst.u8[0] = (0 >= string_clear_limit_from(imm)) ? 0 : a.u8[0];
dst.u8[1] = (1 >= string_clear_limit_from(imm)) ? 0 : a.u8[1];
dst.u8[2] = (2 >= string_clear_limit_from(imm)) ? 0 : a.u8[2];
dst.u8[3] = (3 >= string_clear_limit_from(imm)) ? 0 : a.u8[3];
dst.u8[4] = (4 >= string_clear_limit_from(imm)) ? 0 : a.u8[4];
dst.u8[5] = (5 >= string_clear_limit_from(imm)) ? 0 : a.u8[5];
dst.u8[6] = (6 >= string_clear_limit_from(imm)) ? 0 : a.u8[6];
dst.u8[7] = (7 >= string_clear_limit_from(imm)) ? 0 : a.u8[7];
dst.u8[8] = (8 >= string_clear_limit_from(imm)) ? 0 : a.u8[8];
dst.u8[9] = (9 >= string_clear_limit_from(imm)) ? 0 : a.u8[9];
dst.u8[10] = (10 >= string_clear_limit_from(imm)) ? 0 : a.u8[10];
dst.u8[11] = (11 >= string_clear_limit_from(imm)) ? 0 : a.u8[11];
dst.u8[12] = (12 >= string_clear_limit_from(imm)) ? 0 : a.u8[12];
dst.u8[13] = (13 >= string_clear_limit_from(imm)) ? 0 : a.u8[13];
dst.u8[14] = (14 >= string_clear_limit_from(imm)) ? 0 : a.u8[14];
dst.u8[15] = (15 >= string_clear_limit_from(imm)) ? 0 : a.u8[15];
dst.u8[16] = (16 >= string_clear_limit_from(imm)) ? 0 : a.u8[16];
dst.u8[17] = (17 >= string_clear_limit_from(imm)) ? 0 : a.u8[17];
dst.u8[18] = (18 >= string_clear_limit_from(imm)) ? 0 : a.u8[18];
dst.u8[19] = (19 >= string_clear_limit_from(imm)) ? 0 : a.u8[19];
dst.u8[20] = (20 >= string_clear_limit_from(imm)) ? 0 : a.u8[20];
dst.u8[21] = (21 >= string_clear_limit_from(imm)) ? 0 : a.u8[21];
dst.u8[22] = (22 >= string_clear_limit_from(imm)) ? 0 : a.u8[22];
dst.u8[23] = (23 >= string_clear_limit_from(imm)) ? 0 : a.u8[23];
dst.u8[24] = (24 >= string_clear_limit_from(imm)) ? 0 : a.u8[24];
dst.u8[25] = (25 >= string_clear_limit_from(imm)) ? 0 : a.u8[25];
dst.u8[26] = (26 >= string_clear_limit_from(imm)) ? 0 : a.u8[26];
dst.u8[27] = (27 >= string_clear_limit_from(imm)) ? 0 : a.u8[27];
dst.u8[28] = (28 >= string_clear_limit_from(imm)) ? 0 : a.u8[28];
dst.u8[29] = (29 >= string_clear_limit_from(imm)) ? 0 : a.u8[29];
dst.u8[30] = (30 >= string_clear_limit_from(imm)) ? 0 : a.u8[30];
dst.u8[31] = (31 >= string_clear_limit_from(imm)) ? 0 : a.u8[31];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxvclrstri_v(a, imm) ((__m256i)__builtin_lasx_mxvclrstri_v((v32i8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvclrstrr_v"></span>

## __m256i __lasx_mxvclrstrr_v (__m256i a, long int imm)

### Synopsis

```c
__m256i __lasx_mxvclrstrr_v (__m256i a, long int imm)
#include <loongson-asxintrin.h>
Instruction: mxvclrstrr.v
Builtin: __builtin_lasx_mxvclrstrr_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3614
```

### Description

Preserve bytes before the string-limit position selected by the scalar register operand and clear the rest. This is intended for vectorized string routines that need to zero bytes after a terminator or match boundary.

### Operation

```c
dst.u8[0] = (0 >= string_clear_limit_from(imm)) ? 0 : a.u8[0];
dst.u8[1] = (1 >= string_clear_limit_from(imm)) ? 0 : a.u8[1];
dst.u8[2] = (2 >= string_clear_limit_from(imm)) ? 0 : a.u8[2];
dst.u8[3] = (3 >= string_clear_limit_from(imm)) ? 0 : a.u8[3];
dst.u8[4] = (4 >= string_clear_limit_from(imm)) ? 0 : a.u8[4];
dst.u8[5] = (5 >= string_clear_limit_from(imm)) ? 0 : a.u8[5];
dst.u8[6] = (6 >= string_clear_limit_from(imm)) ? 0 : a.u8[6];
dst.u8[7] = (7 >= string_clear_limit_from(imm)) ? 0 : a.u8[7];
dst.u8[8] = (8 >= string_clear_limit_from(imm)) ? 0 : a.u8[8];
dst.u8[9] = (9 >= string_clear_limit_from(imm)) ? 0 : a.u8[9];
dst.u8[10] = (10 >= string_clear_limit_from(imm)) ? 0 : a.u8[10];
dst.u8[11] = (11 >= string_clear_limit_from(imm)) ? 0 : a.u8[11];
dst.u8[12] = (12 >= string_clear_limit_from(imm)) ? 0 : a.u8[12];
dst.u8[13] = (13 >= string_clear_limit_from(imm)) ? 0 : a.u8[13];
dst.u8[14] = (14 >= string_clear_limit_from(imm)) ? 0 : a.u8[14];
dst.u8[15] = (15 >= string_clear_limit_from(imm)) ? 0 : a.u8[15];
dst.u8[16] = (16 >= string_clear_limit_from(imm)) ? 0 : a.u8[16];
dst.u8[17] = (17 >= string_clear_limit_from(imm)) ? 0 : a.u8[17];
dst.u8[18] = (18 >= string_clear_limit_from(imm)) ? 0 : a.u8[18];
dst.u8[19] = (19 >= string_clear_limit_from(imm)) ? 0 : a.u8[19];
dst.u8[20] = (20 >= string_clear_limit_from(imm)) ? 0 : a.u8[20];
dst.u8[21] = (21 >= string_clear_limit_from(imm)) ? 0 : a.u8[21];
dst.u8[22] = (22 >= string_clear_limit_from(imm)) ? 0 : a.u8[22];
dst.u8[23] = (23 >= string_clear_limit_from(imm)) ? 0 : a.u8[23];
dst.u8[24] = (24 >= string_clear_limit_from(imm)) ? 0 : a.u8[24];
dst.u8[25] = (25 >= string_clear_limit_from(imm)) ? 0 : a.u8[25];
dst.u8[26] = (26 >= string_clear_limit_from(imm)) ? 0 : a.u8[26];
dst.u8[27] = (27 >= string_clear_limit_from(imm)) ? 0 : a.u8[27];
dst.u8[28] = (28 >= string_clear_limit_from(imm)) ? 0 : a.u8[28];
dst.u8[29] = (29 >= string_clear_limit_from(imm)) ? 0 : a.u8[29];
dst.u8[30] = (30 >= string_clear_limit_from(imm)) ? 0 : a.u8[30];
dst.u8[31] = (31 >= string_clear_limit_from(imm)) ? 0 : a.u8[31];
```

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvclrstrr_v((v32i8)a, imm);
```

<span id="intrinsic-__lasx_mxvclrstrv_v"></span>

## __m256i __lasx_mxvclrstrv_v (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvclrstrv_v (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvclrstrv.v
Builtin: __builtin_lasx_mxvclrstrv_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3608
```

### Description

Preserve bytes before the string-limit position selected by the vector operand and clear the rest. This is intended for vectorized string routines that need to zero bytes after a terminator or match boundary.

### Operation

```c
dst.u8[0] = (0 >= string_clear_limit_from(b)) ? 0 : a.u8[0];
dst.u8[1] = (1 >= string_clear_limit_from(b)) ? 0 : a.u8[1];
dst.u8[2] = (2 >= string_clear_limit_from(b)) ? 0 : a.u8[2];
dst.u8[3] = (3 >= string_clear_limit_from(b)) ? 0 : a.u8[3];
dst.u8[4] = (4 >= string_clear_limit_from(b)) ? 0 : a.u8[4];
dst.u8[5] = (5 >= string_clear_limit_from(b)) ? 0 : a.u8[5];
dst.u8[6] = (6 >= string_clear_limit_from(b)) ? 0 : a.u8[6];
dst.u8[7] = (7 >= string_clear_limit_from(b)) ? 0 : a.u8[7];
dst.u8[8] = (8 >= string_clear_limit_from(b)) ? 0 : a.u8[8];
dst.u8[9] = (9 >= string_clear_limit_from(b)) ? 0 : a.u8[9];
dst.u8[10] = (10 >= string_clear_limit_from(b)) ? 0 : a.u8[10];
dst.u8[11] = (11 >= string_clear_limit_from(b)) ? 0 : a.u8[11];
dst.u8[12] = (12 >= string_clear_limit_from(b)) ? 0 : a.u8[12];
dst.u8[13] = (13 >= string_clear_limit_from(b)) ? 0 : a.u8[13];
dst.u8[14] = (14 >= string_clear_limit_from(b)) ? 0 : a.u8[14];
dst.u8[15] = (15 >= string_clear_limit_from(b)) ? 0 : a.u8[15];
dst.u8[16] = (16 >= string_clear_limit_from(b)) ? 0 : a.u8[16];
dst.u8[17] = (17 >= string_clear_limit_from(b)) ? 0 : a.u8[17];
dst.u8[18] = (18 >= string_clear_limit_from(b)) ? 0 : a.u8[18];
dst.u8[19] = (19 >= string_clear_limit_from(b)) ? 0 : a.u8[19];
dst.u8[20] = (20 >= string_clear_limit_from(b)) ? 0 : a.u8[20];
dst.u8[21] = (21 >= string_clear_limit_from(b)) ? 0 : a.u8[21];
dst.u8[22] = (22 >= string_clear_limit_from(b)) ? 0 : a.u8[22];
dst.u8[23] = (23 >= string_clear_limit_from(b)) ? 0 : a.u8[23];
dst.u8[24] = (24 >= string_clear_limit_from(b)) ? 0 : a.u8[24];
dst.u8[25] = (25 >= string_clear_limit_from(b)) ? 0 : a.u8[25];
dst.u8[26] = (26 >= string_clear_limit_from(b)) ? 0 : a.u8[26];
dst.u8[27] = (27 >= string_clear_limit_from(b)) ? 0 : a.u8[27];
dst.u8[28] = (28 >= string_clear_limit_from(b)) ? 0 : a.u8[28];
dst.u8[29] = (29 >= string_clear_limit_from(b)) ? 0 : a.u8[29];
dst.u8[30] = (30 >= string_clear_limit_from(b)) ? 0 : a.u8[30];
dst.u8[31] = (31 >= string_clear_limit_from(b)) ? 0 : a.u8[31];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvclrstrv_v((v32i8)a, (v32i8)b);
```

<span id="intrinsic-__lasx_mxvclrtail_b"></span>

## __m256i __lasx_mxvclrtail_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvclrtail_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvclrtail.b
Builtin: __builtin_lasx_mxvclrtail_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3627
```

### Description

Preserve leading u8 lanes and clear lanes at or after the tail position found in `a`. This is useful after vector string scanning to mask bytes beyond the valid tail.

### Operation

```c
dst.u8[0] = (0 >= first_tail_lane) ? 0 : a.u8[0];
dst.u8[1] = (1 >= first_tail_lane) ? 0 : a.u8[1];
dst.u8[2] = (2 >= first_tail_lane) ? 0 : a.u8[2];
dst.u8[3] = (3 >= first_tail_lane) ? 0 : a.u8[3];
dst.u8[4] = (4 >= first_tail_lane) ? 0 : a.u8[4];
dst.u8[5] = (5 >= first_tail_lane) ? 0 : a.u8[5];
dst.u8[6] = (6 >= first_tail_lane) ? 0 : a.u8[6];
dst.u8[7] = (7 >= first_tail_lane) ? 0 : a.u8[7];
dst.u8[8] = (8 >= first_tail_lane) ? 0 : a.u8[8];
dst.u8[9] = (9 >= first_tail_lane) ? 0 : a.u8[9];
dst.u8[10] = (10 >= first_tail_lane) ? 0 : a.u8[10];
dst.u8[11] = (11 >= first_tail_lane) ? 0 : a.u8[11];
dst.u8[12] = (12 >= first_tail_lane) ? 0 : a.u8[12];
dst.u8[13] = (13 >= first_tail_lane) ? 0 : a.u8[13];
dst.u8[14] = (14 >= first_tail_lane) ? 0 : a.u8[14];
dst.u8[15] = (15 >= first_tail_lane) ? 0 : a.u8[15];
dst.u8[16] = (16 >= first_tail_lane) ? 0 : a.u8[16];
dst.u8[17] = (17 >= first_tail_lane) ? 0 : a.u8[17];
dst.u8[18] = (18 >= first_tail_lane) ? 0 : a.u8[18];
dst.u8[19] = (19 >= first_tail_lane) ? 0 : a.u8[19];
dst.u8[20] = (20 >= first_tail_lane) ? 0 : a.u8[20];
dst.u8[21] = (21 >= first_tail_lane) ? 0 : a.u8[21];
dst.u8[22] = (22 >= first_tail_lane) ? 0 : a.u8[22];
dst.u8[23] = (23 >= first_tail_lane) ? 0 : a.u8[23];
dst.u8[24] = (24 >= first_tail_lane) ? 0 : a.u8[24];
dst.u8[25] = (25 >= first_tail_lane) ? 0 : a.u8[25];
dst.u8[26] = (26 >= first_tail_lane) ? 0 : a.u8[26];
dst.u8[27] = (27 >= first_tail_lane) ? 0 : a.u8[27];
dst.u8[28] = (28 >= first_tail_lane) ? 0 : a.u8[28];
dst.u8[29] = (29 >= first_tail_lane) ? 0 : a.u8[29];
dst.u8[30] = (30 >= first_tail_lane) ? 0 : a.u8[30];
dst.u8[31] = (31 >= first_tail_lane) ? 0 : a.u8[31];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvclrtail_b((v32i8)a);
```

<span id="intrinsic-__lasx_mxvclrtail_h"></span>

## __m256i __lasx_mxvclrtail_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvclrtail_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvclrtail.h
Builtin: __builtin_lasx_mxvclrtail_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3620
```

### Description

Preserve leading u16 lanes and clear lanes at or after the tail position found in `a`. This is useful after vector string scanning to mask bytes beyond the valid tail.

### Operation

```c
dst.u16[0] = (0 >= first_tail_lane) ? 0 : a.u16[0];
dst.u16[1] = (1 >= first_tail_lane) ? 0 : a.u16[1];
dst.u16[2] = (2 >= first_tail_lane) ? 0 : a.u16[2];
dst.u16[3] = (3 >= first_tail_lane) ? 0 : a.u16[3];
dst.u16[4] = (4 >= first_tail_lane) ? 0 : a.u16[4];
dst.u16[5] = (5 >= first_tail_lane) ? 0 : a.u16[5];
dst.u16[6] = (6 >= first_tail_lane) ? 0 : a.u16[6];
dst.u16[7] = (7 >= first_tail_lane) ? 0 : a.u16[7];
dst.u16[8] = (8 >= first_tail_lane) ? 0 : a.u16[8];
dst.u16[9] = (9 >= first_tail_lane) ? 0 : a.u16[9];
dst.u16[10] = (10 >= first_tail_lane) ? 0 : a.u16[10];
dst.u16[11] = (11 >= first_tail_lane) ? 0 : a.u16[11];
dst.u16[12] = (12 >= first_tail_lane) ? 0 : a.u16[12];
dst.u16[13] = (13 >= first_tail_lane) ? 0 : a.u16[13];
dst.u16[14] = (14 >= first_tail_lane) ? 0 : a.u16[14];
dst.u16[15] = (15 >= first_tail_lane) ? 0 : a.u16[15];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvclrtail_h((v16i16)a);
```

<span id="intrinsic-__lasx_mxvextb_s_d"></span>

## __m256i __lasx_mxvextb_s_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvextb_s_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvextb.s.d
Builtin: __builtin_lasx_mxvextb_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3194
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x i64 lanes destination lanes.

### Operation

```c
dst.i64[0] = sign_extend(a.i8[0], 64);
dst.i64[1] = sign_extend(a.i8[1], 64);
dst.i64[2] = sign_extend(a.i8[2], 64);
dst.i64[3] = sign_extend(a.i8[3], 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextb_s_d((v32i8)a);
```

<span id="intrinsic-__lasx_mxvextb_s_h"></span>

## __m256i __lasx_mxvextb_s_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvextb_s_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvextb.s.h
Builtin: __builtin_lasx_mxvextb_s_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3208
```

### Description

Sign-extend or zero-extend smaller integer elements into 16 x i16 lanes destination lanes.

### Operation

```c
dst.i16[0] = sign_extend(a.i8[0], 16);
dst.i16[1] = sign_extend(a.i8[1], 16);
dst.i16[2] = sign_extend(a.i8[2], 16);
dst.i16[3] = sign_extend(a.i8[3], 16);
dst.i16[4] = sign_extend(a.i8[4], 16);
dst.i16[5] = sign_extend(a.i8[5], 16);
dst.i16[6] = sign_extend(a.i8[6], 16);
dst.i16[7] = sign_extend(a.i8[7], 16);
dst.i16[8] = sign_extend(a.i8[8], 16);
dst.i16[9] = sign_extend(a.i8[9], 16);
dst.i16[10] = sign_extend(a.i8[10], 16);
dst.i16[11] = sign_extend(a.i8[11], 16);
dst.i16[12] = sign_extend(a.i8[12], 16);
dst.i16[13] = sign_extend(a.i8[13], 16);
dst.i16[14] = sign_extend(a.i8[14], 16);
dst.i16[15] = sign_extend(a.i8[15], 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextb_s_h((v32i8)a);
```

<span id="intrinsic-__lasx_mxvextb_s_w"></span>

## __m256i __lasx_mxvextb_s_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvextb_s_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvextb.s.w
Builtin: __builtin_lasx_mxvextb_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3201
```

### Description

Sign-extend or zero-extend smaller integer elements into 8 x i32 lanes destination lanes.

### Operation

```c
dst.i32[0] = sign_extend(a.i8[0], 32);
dst.i32[1] = sign_extend(a.i8[1], 32);
dst.i32[2] = sign_extend(a.i8[2], 32);
dst.i32[3] = sign_extend(a.i8[3], 32);
dst.i32[4] = sign_extend(a.i8[4], 32);
dst.i32[5] = sign_extend(a.i8[5], 32);
dst.i32[6] = sign_extend(a.i8[6], 32);
dst.i32[7] = sign_extend(a.i8[7], 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextb_s_w((v32i8)a);
```

<span id="intrinsic-__lasx_mxvextb_u_d"></span>

## __m256i __lasx_mxvextb_u_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvextb_u_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvextb.u.d
Builtin: __builtin_lasx_mxvextb_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3236
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x u64 lanes destination lanes.

### Operation

```c
dst.u64[0] = zero_extend(a.u8[0], 64);
dst.u64[1] = zero_extend(a.u8[1], 64);
dst.u64[2] = zero_extend(a.u8[2], 64);
dst.u64[3] = zero_extend(a.u8[3], 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextb_u_d((v32i8)a);
```

<span id="intrinsic-__lasx_mxvextb_u_h"></span>

## __m256i __lasx_mxvextb_u_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvextb_u_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvextb.u.h
Builtin: __builtin_lasx_mxvextb_u_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3250
```

### Description

Sign-extend or zero-extend smaller integer elements into 16 x u16 lanes destination lanes.

### Operation

```c
dst.u16[0] = zero_extend(a.u8[0], 16);
dst.u16[1] = zero_extend(a.u8[1], 16);
dst.u16[2] = zero_extend(a.u8[2], 16);
dst.u16[3] = zero_extend(a.u8[3], 16);
dst.u16[4] = zero_extend(a.u8[4], 16);
dst.u16[5] = zero_extend(a.u8[5], 16);
dst.u16[6] = zero_extend(a.u8[6], 16);
dst.u16[7] = zero_extend(a.u8[7], 16);
dst.u16[8] = zero_extend(a.u8[8], 16);
dst.u16[9] = zero_extend(a.u8[9], 16);
dst.u16[10] = zero_extend(a.u8[10], 16);
dst.u16[11] = zero_extend(a.u8[11], 16);
dst.u16[12] = zero_extend(a.u8[12], 16);
dst.u16[13] = zero_extend(a.u8[13], 16);
dst.u16[14] = zero_extend(a.u8[14], 16);
dst.u16[15] = zero_extend(a.u8[15], 16);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextb_u_h((v32i8)a);
```

<span id="intrinsic-__lasx_mxvextb_u_w"></span>

## __m256i __lasx_mxvextb_u_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvextb_u_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvextb.u.w
Builtin: __builtin_lasx_mxvextb_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3243
```

### Description

Sign-extend or zero-extend smaller integer elements into 8 x u32 lanes destination lanes.

### Operation

```c
dst.u32[0] = zero_extend(a.u8[0], 32);
dst.u32[1] = zero_extend(a.u8[1], 32);
dst.u32[2] = zero_extend(a.u8[2], 32);
dst.u32[3] = zero_extend(a.u8[3], 32);
dst.u32[4] = zero_extend(a.u8[4], 32);
dst.u32[5] = zero_extend(a.u8[5], 32);
dst.u32[6] = zero_extend(a.u8[6], 32);
dst.u32[7] = zero_extend(a.u8[7], 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextb_u_w((v32i8)a);
```

<span id="intrinsic-__lasx_mxvexth_s_d"></span>

## __m256i __lasx_mxvexth_s_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvexth_s_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvexth.s.d
Builtin: __builtin_lasx_mxvexth_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3215
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x i64 lanes destination lanes.

### Operation

```c
dst.i64[0] = sign_extend(a.i16[0], 64);
dst.i64[1] = sign_extend(a.i16[1], 64);
dst.i64[2] = sign_extend(a.i16[2], 64);
dst.i64[3] = sign_extend(a.i16[3], 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvexth_s_d((v16i16)a);
```

<span id="intrinsic-__lasx_mxvexth_s_w"></span>

## __m256i __lasx_mxvexth_s_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvexth_s_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvexth.s.w
Builtin: __builtin_lasx_mxvexth_s_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3222
```

### Description

Sign-extend or zero-extend smaller integer elements into 8 x i32 lanes destination lanes.

### Operation

```c
dst.i32[0] = sign_extend(a.i16[0], 32);
dst.i32[1] = sign_extend(a.i16[1], 32);
dst.i32[2] = sign_extend(a.i16[2], 32);
dst.i32[3] = sign_extend(a.i16[3], 32);
dst.i32[4] = sign_extend(a.i16[4], 32);
dst.i32[5] = sign_extend(a.i16[5], 32);
dst.i32[6] = sign_extend(a.i16[6], 32);
dst.i32[7] = sign_extend(a.i16[7], 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvexth_s_w((v16i16)a);
```

<span id="intrinsic-__lasx_mxvexth_u_d"></span>

## __m256i __lasx_mxvexth_u_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvexth_u_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvexth.u.d
Builtin: __builtin_lasx_mxvexth_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3257
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x u64 lanes destination lanes.

### Operation

```c
dst.u64[0] = zero_extend(a.u16[0], 64);
dst.u64[1] = zero_extend(a.u16[1], 64);
dst.u64[2] = zero_extend(a.u16[2], 64);
dst.u64[3] = zero_extend(a.u16[3], 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvexth_u_d((v16i16)a);
```

<span id="intrinsic-__lasx_mxvexth_u_w"></span>

## __m256i __lasx_mxvexth_u_w (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvexth_u_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvexth.u.w
Builtin: __builtin_lasx_mxvexth_u_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3264
```

### Description

Sign-extend or zero-extend smaller integer elements into 8 x u32 lanes destination lanes.

### Operation

```c
dst.u32[0] = zero_extend(a.u16[0], 32);
dst.u32[1] = zero_extend(a.u16[1], 32);
dst.u32[2] = zero_extend(a.u16[2], 32);
dst.u32[3] = zero_extend(a.u16[3], 32);
dst.u32[4] = zero_extend(a.u16[4], 32);
dst.u32[5] = zero_extend(a.u16[5], 32);
dst.u32[6] = zero_extend(a.u16[6], 32);
dst.u32[7] = zero_extend(a.u16[7], 32);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvexth_u_w((v16i16)a);
```

<span id="intrinsic-__lasx_mxvextw_s_d"></span>

## __m256i __lasx_mxvextw_s_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvextw_s_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvextw.s.d
Builtin: __builtin_lasx_mxvextw_s_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3229
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x i64 lanes destination lanes.

### Operation

```c
dst.i64[0] = sign_extend(a.i32[0], 64);
dst.i64[1] = sign_extend(a.i32[1], 64);
dst.i64[2] = sign_extend(a.i32[2], 64);
dst.i64[3] = sign_extend(a.i32[3], 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextw_s_d((v8i32)a);
```

<span id="intrinsic-__lasx_mxvextw_u_d"></span>

## __m256i __lasx_mxvextw_u_d (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvextw_u_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvextw.u.d
Builtin: __builtin_lasx_mxvextw_u_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3271
```

### Description

Sign-extend or zero-extend smaller integer elements into 4 x u64 lanes destination lanes.

### Operation

```c
dst.u64[0] = zero_extend(a.u32[0], 64);
dst.u64[1] = zero_extend(a.u32[1], 64);
dst.u64[2] = zero_extend(a.u32[2], 64);
dst.u64[3] = zero_extend(a.u32[3], 64);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvextw_u_d((v8i32)a);
```

<span id="intrinsic-__lasx_mxvfrstii_b"></span>

## __m256i __lasx_mxvfrstii_b (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvfrstii_b (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvfrstii.b
Builtin: __builtin_lasx_mxvfrstii_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3577
```

### Description

Find the first matching u8 element positions from `a` and `b` under the immediate and return match indices, or zero when no selected match is found. This supports vectorized substring/search primitives.

### Operation

```c
dst = first_match_indices_or_zero(a, b, imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxvfrstii_b(a, b, imm) ((__m256i)__builtin_lasx_mxvfrstii_b((v32i8)(a), (v32i8)(b), (imm)))
```

<span id="intrinsic-__lasx_mxvfrstii_h"></span>

## __m256i __lasx_mxvfrstii_h (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxvfrstii_h (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxvfrstii.h
Builtin: __builtin_lasx_mxvfrstii_h
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3576
```

### Description

Find the first matching fp16 element positions from `a` and `b` under the immediate and return match indices, or zero when no selected match is found. This supports vectorized substring/search primitives.

### Operation

```c
dst = first_match_indices_or_zero(a, b, imm);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxvfrstii_h(a, b, imm) ((__m256i)__builtin_lasx_mxvfrstii_h((v16i16)(a), (v16i16)(b), (imm)))
```

<span id="intrinsic-__lasx_mxvfrstiv_b"></span>

## __m256i __lasx_mxvfrstiv_b (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvfrstiv_b (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvfrstiv.b
Builtin: __builtin_lasx_mxvfrstiv_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3586
```

### Description

Find the first matching u8 element positions from `a` and `b` under the control vector and return match indices, or zero when no selected match is found. This supports vectorized substring/search primitives.

### Operation

```c
dst = first_match_indices_or_zero(a, b, control vector);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvfrstiv_b((v32i8)a, (v32i8)b, (v32i8)c);
```

<span id="intrinsic-__lasx_mxvfrstiv_h"></span>

## __m256i __lasx_mxvfrstiv_h (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxvfrstiv_h (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxvfrstiv.h
Builtin: __builtin_lasx_mxvfrstiv_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3579
```

### Description

Find the first matching fp16 element positions from `a` and `b` under the control vector and return match indices, or zero when no selected match is found. This supports vectorized substring/search primitives.

### Operation

```c
dst = first_match_indices_or_zero(a, b, control vector);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvfrstiv_h((v16i16)a, (v16i16)b, (v16i16)c);
```

<span id="intrinsic-__lasx_mxvfrstm_b"></span>

## __m256i __lasx_mxvfrstm_b (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvfrstm_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvfrstm.b
Builtin: __builtin_lasx_mxvfrstm_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3600
```

### Description

Find the first matching u8 element positions from `a` and `b` under the mask vector and return match indices, or zero when no selected match is found. This supports vectorized substring/search primitives.

### Operation

```c
dst = first_match_indices_or_zero(a, b, mask);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvfrstm_b((v32i8)a);
```

<span id="intrinsic-__lasx_mxvfrstm_h"></span>

## __m256i __lasx_mxvfrstm_h (__m256i a)

### Synopsis

```c
__m256i __lasx_mxvfrstm_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: mxvfrstm.h
Builtin: __builtin_lasx_mxvfrstm_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:3593
```

### Description

Find the first matching fp16 element positions from `a` and `b` under the mask vector and return match indices, or zero when no selected match is found. This supports vectorized substring/search primitives.

### Operation

```c
dst = first_match_indices_or_zero(a, b, mask);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvfrstm_h((v16i16)a);
```

<span id="intrinsic-__lasx_mxvmepatmsk_v"></span>

## __m256i __lasx_mxvmepatmsk_v (unsigned char imm, unsigned char imm1)

### Synopsis

```c
__m256i __lasx_mxvmepatmsk_v (unsigned char imm, unsigned char imm1)
#include <loongson-asxintrin.h>
Instruction: mxvmepatmsk.v
Builtin: __builtin_lasx_mxvmepatmsk_v
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:3640
```

### Description

Build a byte mask from the two immediate pattern bytes: matching byte positions become `0xff`, and non-matching positions become `0x00`. This provides a delimiter/pattern mask for string and parser code.

### Operation

```c
dst.u8[0] = (build_repeated_u8_pattern(imm0, imm1) matches lane 0) ? 0xff : 0x00;
dst.u8[1] = (build_repeated_u8_pattern(imm0, imm1) matches lane 1) ? 0xff : 0x00;
dst.u8[2] = (build_repeated_u8_pattern(imm0, imm1) matches lane 2) ? 0xff : 0x00;
dst.u8[3] = (build_repeated_u8_pattern(imm0, imm1) matches lane 3) ? 0xff : 0x00;
dst.u8[4] = (build_repeated_u8_pattern(imm0, imm1) matches lane 4) ? 0xff : 0x00;
dst.u8[5] = (build_repeated_u8_pattern(imm0, imm1) matches lane 5) ? 0xff : 0x00;
dst.u8[6] = (build_repeated_u8_pattern(imm0, imm1) matches lane 6) ? 0xff : 0x00;
dst.u8[7] = (build_repeated_u8_pattern(imm0, imm1) matches lane 7) ? 0xff : 0x00;
dst.u8[8] = (build_repeated_u8_pattern(imm0, imm1) matches lane 8) ? 0xff : 0x00;
dst.u8[9] = (build_repeated_u8_pattern(imm0, imm1) matches lane 9) ? 0xff : 0x00;
dst.u8[10] = (build_repeated_u8_pattern(imm0, imm1) matches lane 10) ? 0xff : 0x00;
dst.u8[11] = (build_repeated_u8_pattern(imm0, imm1) matches lane 11) ? 0xff : 0x00;
dst.u8[12] = (build_repeated_u8_pattern(imm0, imm1) matches lane 12) ? 0xff : 0x00;
dst.u8[13] = (build_repeated_u8_pattern(imm0, imm1) matches lane 13) ? 0xff : 0x00;
dst.u8[14] = (build_repeated_u8_pattern(imm0, imm1) matches lane 14) ? 0xff : 0x00;
dst.u8[15] = (build_repeated_u8_pattern(imm0, imm1) matches lane 15) ? 0xff : 0x00;
dst.u8[16] = (build_repeated_u8_pattern(imm0, imm1) matches lane 16) ? 0xff : 0x00;
dst.u8[17] = (build_repeated_u8_pattern(imm0, imm1) matches lane 17) ? 0xff : 0x00;
dst.u8[18] = (build_repeated_u8_pattern(imm0, imm1) matches lane 18) ? 0xff : 0x00;
dst.u8[19] = (build_repeated_u8_pattern(imm0, imm1) matches lane 19) ? 0xff : 0x00;
dst.u8[20] = (build_repeated_u8_pattern(imm0, imm1) matches lane 20) ? 0xff : 0x00;
dst.u8[21] = (build_repeated_u8_pattern(imm0, imm1) matches lane 21) ? 0xff : 0x00;
dst.u8[22] = (build_repeated_u8_pattern(imm0, imm1) matches lane 22) ? 0xff : 0x00;
dst.u8[23] = (build_repeated_u8_pattern(imm0, imm1) matches lane 23) ? 0xff : 0x00;
dst.u8[24] = (build_repeated_u8_pattern(imm0, imm1) matches lane 24) ? 0xff : 0x00;
dst.u8[25] = (build_repeated_u8_pattern(imm0, imm1) matches lane 25) ? 0xff : 0x00;
dst.u8[26] = (build_repeated_u8_pattern(imm0, imm1) matches lane 26) ? 0xff : 0x00;
dst.u8[27] = (build_repeated_u8_pattern(imm0, imm1) matches lane 27) ? 0xff : 0x00;
dst.u8[28] = (build_repeated_u8_pattern(imm0, imm1) matches lane 28) ? 0xff : 0x00;
dst.u8[29] = (build_repeated_u8_pattern(imm0, imm1) matches lane 29) ? 0xff : 0x00;
dst.u8[30] = (build_repeated_u8_pattern(imm0, imm1) matches lane 30) ? 0xff : 0x00;
dst.u8[31] = (build_repeated_u8_pattern(imm0, imm1) matches lane 31) ? 0xff : 0x00;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V |  | 2 |

### Header Mapping

```c
#define __lasx_mxvmepatmsk_v(imm, imm1) ((__m256i)__builtin_lasx_mxvmepatmsk_v((imm), (imm1)))
```

<span id="intrinsic-__lasx_mxvseti_d"></span>

## __m256i __lasx_mxvseti_d (unsigned char imm, unsigned int imm1)

### Synopsis

```c
__m256i __lasx_mxvseti_d (unsigned char imm, unsigned int imm1)
#include <loongson-asxintrin.h>
Instruction: mxvseti.d
Builtin: __builtin_lasx_mxvseti_d
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:4099
```

### Description

Create a mostly zero vector and place the immediate value in one selected 64-bit lane. This is a compact way to materialize sparse vector constants or masks.

### Operation

```c
dst = zero_vector();
dst.u64[index_from_imm0] = zero_extend(imm1, 64);
```

### Header Mapping

```c
#define __lasx_mxvseti_d(imm, imm1) ((__m256i)__builtin_lasx_mxvseti_d((imm), (imm1)))
```

