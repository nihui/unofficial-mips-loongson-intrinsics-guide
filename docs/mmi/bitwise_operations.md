# Bitwise Operations

Generated from `include/loongson-mmiintrin.h`. This page contains 2 intrinsics.

<span id="intrinsic-pmovmskb_s"></span>

## int8x8_t pmovmskb_s (int8x8_t a)

### Synopsis

```c
int8x8_t pmovmskb_s (int8x8_t a)
#include <loongson-mmiintrin.h>
Instruction: pmovmskb.s
Builtin: __builtin_loongson_pmovmskb_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:392
```

### Description

Extract the sign bit from each element of 8 x i8 lanes and pack those bits into a low-order scalar mask.

### Operation

```c
return pack_sign_bits(a.u8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return __builtin_loongson_pmovmskb_s (a);
```

<span id="intrinsic-pmovmskb_u"></span>

## uint8x8_t pmovmskb_u (uint8x8_t a)

### Synopsis

```c
uint8x8_t pmovmskb_u (uint8x8_t a)
#include <loongson-mmiintrin.h>
Instruction: pmovmskb.u
Builtin: __builtin_loongson_pmovmskb_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:386
```

### Description

Extract the sign bit from each element of 8 x u8 lanes and pack those bits into a low-order scalar mask.

### Operation

```c
return pack_sign_bits(a.u8);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 2 | 2 |

### Header Mapping

```c
return __builtin_loongson_pmovmskb_u (a);
```

