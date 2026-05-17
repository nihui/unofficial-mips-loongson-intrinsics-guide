# Logical

Generated from `include/loongson-mmiintrin.h`. This page contains 8 intrinsics.

<span id="intrinsic-pandn_sb"></span>

## int8x8_t pandn_sb (int8x8_t a, int8x8_t b)

### Synopsis

```c
int8x8_t pandn_sb (int8x8_t a, int8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.sb
Builtin: __builtin_loongson_pandn_sb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:195
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
return __builtin_loongson_pandn_sb (a, b);
```

<span id="intrinsic-pandn_sd"></span>

## int64_t pandn_sd (int64_t a, int64_t b)

### Synopsis

```c
int64_t pandn_sd (int64_t a, int64_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.sd
Builtin: __builtin_loongson_pandn_sd
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:177
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
return __builtin_loongson_pandn_sd (a, b);
```

<span id="intrinsic-pandn_sh"></span>

## int16x4_t pandn_sh (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t pandn_sh (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.sh
Builtin: __builtin_loongson_pandn_sh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:189
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
return __builtin_loongson_pandn_sh (a, b);
```

<span id="intrinsic-pandn_sw"></span>

## int32x2_t pandn_sw (int32x2_t a, int32x2_t b)

### Synopsis

```c
int32x2_t pandn_sw (int32x2_t a, int32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.sw
Builtin: __builtin_loongson_pandn_sw
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:183
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
return __builtin_loongson_pandn_sw (a, b);
```

<span id="intrinsic-pandn_ub"></span>

## uint8x8_t pandn_ub (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t pandn_ub (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.ub
Builtin: __builtin_loongson_pandn_ub
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:171
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
return __builtin_loongson_pandn_ub (a, b);
```

<span id="intrinsic-pandn_ud"></span>

## uint64_t pandn_ud (uint64_t a, uint64_t b)

### Synopsis

```c
uint64_t pandn_ud (uint64_t a, uint64_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.ud
Builtin: __builtin_loongson_pandn_ud
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:153
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
return __builtin_loongson_pandn_ud (a, b);
```

<span id="intrinsic-pandn_uh"></span>

## uint16x4_t pandn_uh (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t pandn_uh (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.uh
Builtin: __builtin_loongson_pandn_uh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:165
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
return __builtin_loongson_pandn_uh (a, b);
```

<span id="intrinsic-pandn_uw"></span>

## uint32x2_t pandn_uw (uint32x2_t a, uint32x2_t b)

### Synopsis

```c
uint32x2_t pandn_uw (uint32x2_t a, uint32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: pandn.uw
Builtin: __builtin_loongson_pandn_uw
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:159
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
return __builtin_loongson_pandn_uw (a, b);
```

