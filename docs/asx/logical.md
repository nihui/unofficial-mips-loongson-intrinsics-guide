# Logical

Generated from `include/loongson-asxintrin.h`. This page contains 17 intrinsics.

<span id="intrinsic-__lasx_mxand_v"></span>

## __m256i __lasx_mxand_v (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxand_v (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxand.v
Builtin: __builtin_lasx_mxand_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1812
```

### Description

Compute bitwise AND across the whole vector; immediate forms AND each byte with the immediate mask.

### Operation

```c
dst.bits = a.bits & (imm_or_b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxand_v((v32u8)a, (v32u8)b);
```

<span id="intrinsic-__lasx_mxandi_b"></span>

## __m256i __lasx_mxandi_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxandi_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxandi.b
Builtin: __builtin_lasx_mxandi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1818
```

### Description

Compute bitwise AND across the whole vector; immediate forms AND each byte with the immediate mask.

### Operation

```c
dst.bits = a.bits & (imm_or_b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxandi_b(a, imm) ((__m256i)__builtin_lasx_mxandi_b((v32u8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxbmnz_v"></span>

## __m256i __lasx_mxbmnz_v (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxbmnz_v (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxbmnz.v
Builtin: __builtin_lasx_mxbmnz_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1844
```

### Description

Use `a` as a bit mask and keep bits from `b` only where the mask bit is one; other bits become zero.

### Operation

```c
dst.bits = select_bits(mask=a, true_value=b, false_value=0);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbmnz_v((v32u8)a, (v32u8)b, (v32u8)c);
```

<span id="intrinsic-__lasx_mxbmnzi_b"></span>

## __m256i __lasx_mxbmnzi_b (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbmnzi_b (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbmnzi.b
Builtin: __builtin_lasx_mxbmnzi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1850
```

### Description

Use `a` as a bit mask and keep bits from `b` only where the mask bit is one; other bits become zero.

### Operation

```c
dst.bits = select_bits(mask=a, true_value=b, false_value=0);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxbmnzi_b(a, b, imm) ((__m256i)__builtin_lasx_mxbmnzi_b((v32u8)(a), (v32u8)(b), (imm)))
```

<span id="intrinsic-__lasx_mxbmz_v"></span>

## __m256i __lasx_mxbmz_v (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxbmz_v (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxbmz.v
Builtin: __builtin_lasx_mxbmz_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1852
```

### Description

Use `a` as a bit mask and keep bits from `b` only where the mask bit is zero; masked bits become zero.

### Operation

```c
dst.bits = select_bits(mask=a, true_value=0, false_value=b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbmz_v((v32u8)a, (v32u8)b, (v32u8)c);
```

<span id="intrinsic-__lasx_mxbmzi_b"></span>

## __m256i __lasx_mxbmzi_b (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbmzi_b (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbmzi.b
Builtin: __builtin_lasx_mxbmzi_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1858
```

### Description

Use `a` as a bit mask and keep bits from `b` only where the mask bit is zero; masked bits become zero.

### Operation

```c
dst.bits = select_bits(mask=a, true_value=0, false_value=b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxbmzi_b(a, b, imm) ((__m256i)__builtin_lasx_mxbmzi_b((v32u8)(a), (v32u8)(b), (imm)))
```

<span id="intrinsic-__lasx_mxbsel"></span>

## __m256i __lasx_mxbsel (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxbsel (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxbsel
Builtin: __builtin_lasx_mxbsel
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4404
```

### Description

Use `a` as a bit mask: choose bits from `c` where the mask bit is one, otherwise from `b`.

### Operation

```c
dst.bits = (a.bits & c.bits) | (~a.bits & b.bits);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 0.50/1 | 2 |

### Header Mapping

```c
return (__m256i) __builtin_lasx_mxbsel ((v32i8) a, (v32i8) b, (v32i8) c);
```

<span id="intrinsic-__lasx_mxbsel_v"></span>

## __m256i __lasx_mxbsel_v (__m256i a, __m256i b, __m256i c)

### Synopsis

```c
__m256i __lasx_mxbsel_v (__m256i a, __m256i b, __m256i c)
#include <loongson-asxintrin.h>
Instruction: mxbsel.v
Builtin: __builtin_lasx_mxbsel_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1860
```

### Description

Use `a` as a bit mask: choose bits from `c` where the mask bit is one, otherwise from `b`.

### Operation

```c
dst.bits = (a.bits & c.bits) | (~a.bits & b.bits);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxbsel_v((v32u8)a, (v32u8)b, (v32u8)c);
```

<span id="intrinsic-__lasx_mxbseli_b"></span>

## __m256i __lasx_mxbseli_b (__m256i a, __m256i b, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxbseli_b (__m256i a, __m256i b, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxbseli.b
Builtin: __builtin_lasx_mxbseli_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1866
```

### Description

Use `a` as a bit mask: choose bits from `c` where the mask bit is one, otherwise from `b`.

### Operation

```c
dst.bits = (a.bits & c.bits) | (~a.bits & b.bits);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxbseli_b(a, b, imm) ((__m256i)__builtin_lasx_mxbseli_b((v32u8)(a), (v32u8)(b), (imm)))
```

<span id="intrinsic-__lasx_mxnor_v"></span>

## __m256i __lasx_mxnor_v (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxnor_v (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxnor.v
Builtin: __builtin_lasx_mxnor_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1828
```

### Description

Compute bitwise NOR across the whole vector, producing the inverse of OR.

### Operation

```c
dst.bits = ~(a.bits | imm_or_b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxnor_v((v32u8)a, (v32u8)b);
```

<span id="intrinsic-__lasx_mxnori_b"></span>

## __m256i __lasx_mxnori_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxnori_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxnori.b
Builtin: __builtin_lasx_mxnori_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1834
```

### Description

Compute bitwise NOR across the whole vector, producing the inverse of OR.

### Operation

```c
dst.bits = ~(a.bits | imm_or_b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
#define __lasx_mxnori_b(a, imm) ((__m256i)__builtin_lasx_mxnori_b((v32u8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxor_v"></span>

## __m256i __lasx_mxor_v (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxor_v (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxor.v
Builtin: __builtin_lasx_mxor_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1820
```

### Description

Compute bitwise OR across the whole vector; immediate forms OR each byte with the immediate mask.

### Operation

```c
dst.bits = a.bits | (imm_or_b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxor_v((v32u8)a, (v32u8)b);
```

<span id="intrinsic-__lasx_mxori_b"></span>

## __m256i __lasx_mxori_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxori_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxori.b
Builtin: __builtin_lasx_mxori_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1826
```

### Description

Compute bitwise OR across the whole vector; immediate forms OR each byte with the immediate mask.

### Operation

```c
dst.bits = a.bits | (imm_or_b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxori_b(a, imm) ((__m256i)__builtin_lasx_mxori_b((v32u8)(a), (imm)))
```

<span id="intrinsic-__lasx_mxvandn_v"></span>

## __m256i __lasx_mxvandn_v (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxvandn_v (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxvandn.v
Builtin: __builtin_lasx_mxvandn_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:2795
```

### Description

Clear bits from `b` wherever `a` has one bits, i.e. compute `b & ~a` across the whole vector.

### Operation

```c
dst.bits = b.bits & ~a.bits;
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxvandn_v((v32u8)a, (v32u8)b);
```

<span id="intrinsic-__lasx_mxxor_v"></span>

## __m256i __lasx_mxxor_v (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_mxxor_v (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: mxxor.v
Builtin: __builtin_lasx_mxxor_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:1836
```

### Description

Compute bitwise XOR across the whole vector; immediate forms XOR each byte with the immediate mask.

### Operation

```c
dst.bits = a.bits ^ (imm_or_b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_mxxor_v((v32u8)a, (v32u8)b);
```

<span id="intrinsic-__lasx_mxxori_b"></span>

## __m256i __lasx_mxxori_b (__m256i a, unsigned char imm)

### Synopsis

```c
__m256i __lasx_mxxori_b (__m256i a, unsigned char imm)
#include <loongson-asxintrin.h>
Instruction: mxxori.b
Builtin: __builtin_lasx_mxxori_b
CPU Flags: __mips_loongson_asx
Kind: macro
Source: include/loongson-asxintrin.h:1842
```

### Description

Compute bitwise XOR across the whole vector; immediate forms XOR each byte with the immediate mask.

### Operation

```c
dst.bits = a.bits ^ (imm_or_b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
#define __lasx_mxxori_b(a, imm) ((__m256i)__builtin_lasx_mxxori_b((v32u8)(a), (imm)))
```

<span id="intrinsic-__lasx_xxor_v"></span>

## __m256i __lasx_xxor_v (__m256i a, __m256i b)

### Synopsis

```c
__m256i __lasx_xxor_v (__m256i a, __m256i b)
#include <loongson-asxintrin.h>
Instruction: xxor.v
Builtin: __builtin_lasx_xxor_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4150
```

### Description

Compute bitwise XOR across the whole vector; immediate forms XOR each byte with the immediate mask.

### Operation

```c
dst.bits = a.bits ^ (imm_or_b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return (__m256i)__builtin_lasx_xxor_v((v32i8)a, (v32i8)b);
```

