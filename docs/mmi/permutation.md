# Permutation

Generated from `include/loongson-mmiintrin.h`. This page contains 27 intrinsics.

<span id="intrinsic-packsshb"></span>

## int8x8_t packsshb (int16x4_t a, int16x4_t b)

### Synopsis

```c
int8x8_t packsshb (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: packsshb
Builtin: __builtin_loongson_packsshb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:63
```

### Description

Pack wider u16 elements from the concatenated sources into narrower u8 elements with signed saturation. This is used before storing or continuing with narrower packed data.

### Operation

```c
dst.i8[0] = signed_saturate(concatenate_lanes(a, b).i16[0], bit_width(i8));
dst.i8[1] = signed_saturate(concatenate_lanes(a, b).i16[1], bit_width(i8));
dst.i8[2] = signed_saturate(concatenate_lanes(a, b).i16[2], bit_width(i8));
dst.i8[3] = signed_saturate(concatenate_lanes(a, b).i16[3], bit_width(i8));
dst.i8[4] = signed_saturate(concatenate_lanes(a, b).i16[4], bit_width(i8));
dst.i8[5] = signed_saturate(concatenate_lanes(a, b).i16[5], bit_width(i8));
dst.i8[6] = signed_saturate(concatenate_lanes(a, b).i16[6], bit_width(i8));
dst.i8[7] = signed_saturate(concatenate_lanes(a, b).i16[7], bit_width(i8));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_packsshb (a, b);
```

<span id="intrinsic-packsswh"></span>

## int16x4_t packsswh (int32x2_t a, int32x2_t b)

### Synopsis

```c
int16x4_t packsswh (int32x2_t a, int32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: packsswh
Builtin: __builtin_loongson_packsswh
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:57
```

### Description

Pack wider u32 elements from the concatenated sources into narrower u16 elements with signed saturation. This is used before storing or continuing with narrower packed data.

### Operation

```c
dst.i16[0] = signed_saturate(concatenate_lanes(a, b).i32[0], bit_width(i16));
dst.i16[1] = signed_saturate(concatenate_lanes(a, b).i32[1], bit_width(i16));
dst.i16[2] = signed_saturate(concatenate_lanes(a, b).i32[2], bit_width(i16));
dst.i16[3] = signed_saturate(concatenate_lanes(a, b).i32[3], bit_width(i16));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_packsswh (a, b);
```

<span id="intrinsic-packushb"></span>

## uint8x8_t packushb (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint8x8_t packushb (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: packushb
Builtin: __builtin_loongson_packushb
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:70
```

### Description

Pack wider u16 elements from the concatenated sources into narrower u8 elements with unsigned saturation. This is used before storing or continuing with narrower packed data.

### Operation

```c
dst.u8[0] = unsigned_saturate(concatenate_lanes(a, b).u16[0], bit_width(u8));
dst.u8[1] = unsigned_saturate(concatenate_lanes(a, b).u16[1], bit_width(u8));
dst.u8[2] = unsigned_saturate(concatenate_lanes(a, b).u16[2], bit_width(u8));
dst.u8[3] = unsigned_saturate(concatenate_lanes(a, b).u16[3], bit_width(u8));
dst.u8[4] = unsigned_saturate(concatenate_lanes(a, b).u16[4], bit_width(u8));
dst.u8[5] = unsigned_saturate(concatenate_lanes(a, b).u16[5], bit_width(u8));
dst.u8[6] = unsigned_saturate(concatenate_lanes(a, b).u16[6], bit_width(u8));
dst.u8[7] = unsigned_saturate(concatenate_lanes(a, b).u16[7], bit_width(u8));
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_packushb (a, b);
```

<span id="intrinsic-pextrh_s"></span>

## int16x4_t pextrh_s (int16x4_t a, int field)

### Synopsis

```c
int16x4_t pextrh_s (int16x4_t a, int field)
#include <loongson-mmiintrin.h>
Instruction: pextrh.s
Builtin: __builtin_loongson_pextrh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:295
```

### Description

Extract the selected 16-bit lane from the vector and return it as a scalar, useful at vector/scalar boundaries.

### Operation

```c
return extract_u16_lane(a, field);
```

### Header Mapping

```c
return __builtin_loongson_pextrh_s (a, field);
```

<span id="intrinsic-pextrh_u"></span>

## uint16x4_t pextrh_u (uint16x4_t a, int field)

### Synopsis

```c
uint16x4_t pextrh_u (uint16x4_t a, int field)
#include <loongson-mmiintrin.h>
Instruction: pextrh.u
Builtin: __builtin_loongson_pextrh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:289
```

### Description

Extract the selected 16-bit lane from the vector and return it as a scalar, useful at vector/scalar boundaries.

### Operation

```c
return extract_u16_lane(a, field);
```

### Header Mapping

```c
return __builtin_loongson_pextrh_u (a, field);
```

<span id="intrinsic-pinsrh_0_s"></span>

## int16x4_t pinsrh_0_s (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t pinsrh_0_s (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.0.s
Builtin: __builtin_loongson_pinsrh_0_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:326
```

### Description

Insert the low 16-bit lane from `b` into a fixed lane of `a`, preserving the other lanes.

### Operation

```c
dst = a;
dst.u16[0] = b.u16[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pinsrh_0_s (a, b);
```

<span id="intrinsic-pinsrh_0_u"></span>

## uint16x4_t pinsrh_0_u (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t pinsrh_0_u (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.0.u
Builtin: __builtin_loongson_pinsrh_0_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:302
```

### Description

Insert the low 16-bit lane from `b` into a fixed lane of `a`, preserving the other lanes.

### Operation

```c
dst = a;
dst.u16[0] = b.u16[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pinsrh_0_u (a, b);
```

<span id="intrinsic-pinsrh_1_s"></span>

## int16x4_t pinsrh_1_s (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t pinsrh_1_s (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.1.s
Builtin: __builtin_loongson_pinsrh_1_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:332
```

### Description

Insert the low 16-bit lane from `b` into a fixed lane of `a`, preserving the other lanes.

### Operation

```c
dst = a;
dst.u16[1] = b.u16[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pinsrh_1_s (a, b);
```

<span id="intrinsic-pinsrh_1_u"></span>

## uint16x4_t pinsrh_1_u (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t pinsrh_1_u (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.1.u
Builtin: __builtin_loongson_pinsrh_1_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:308
```

### Description

Insert the low 16-bit lane from `b` into a fixed lane of `a`, preserving the other lanes.

### Operation

```c
dst = a;
dst.u16[1] = b.u16[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pinsrh_1_u (a, b);
```

<span id="intrinsic-pinsrh_2_s"></span>

## int16x4_t pinsrh_2_s (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t pinsrh_2_s (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.2.s
Builtin: __builtin_loongson_pinsrh_2_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:338
```

### Description

Insert the low 16-bit lane from `b` into a fixed lane of `a`, preserving the other lanes.

### Operation

```c
dst = a;
dst.u16[2] = b.u16[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pinsrh_2_s (a, b);
```

<span id="intrinsic-pinsrh_2_u"></span>

## uint16x4_t pinsrh_2_u (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t pinsrh_2_u (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.2.u
Builtin: __builtin_loongson_pinsrh_2_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:314
```

### Description

Insert the low 16-bit lane from `b` into a fixed lane of `a`, preserving the other lanes.

### Operation

```c
dst = a;
dst.u16[2] = b.u16[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pinsrh_2_u (a, b);
```

<span id="intrinsic-pinsrh_3_s"></span>

## int16x4_t pinsrh_3_s (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t pinsrh_3_s (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.3.s
Builtin: __builtin_loongson_pinsrh_3_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:344
```

### Description

Insert the low 16-bit lane from `b` into a fixed lane of `a`, preserving the other lanes.

### Operation

```c
dst = a;
dst.u16[3] = b.u16[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pinsrh_3_s (a, b);
```

<span id="intrinsic-pinsrh_3_u"></span>

## uint16x4_t pinsrh_3_u (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t pinsrh_3_u (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: pinsrh.3.u
Builtin: __builtin_loongson_pinsrh_3_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:320
```

### Description

Insert the low 16-bit lane from `b` into a fixed lane of `a`, preserving the other lanes.

### Operation

```c
dst = a;
dst.u16[3] = b.u16[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_pinsrh_3_u (a, b);
```

<span id="intrinsic-pshufh_s"></span>

## int16x4_t pshufh_s (int16x4_t a, int16x4_t b, uint8_t order)

### Synopsis

```c
int16x4_t pshufh_s (int16x4_t a, int16x4_t b, uint8_t order)
#include <loongson-mmiintrin.h>
Instruction: pshufh.s
Builtin: __builtin_loongson_pshufh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:456
```

### Description

Use two-bit fields from the immediate to select i16 lanes from the concatenated `a`/`b` inputs inside each 128-bit half.

### Operation

```c
dst.u16[0] = b.u16[shuffle_selector(order, 0)];
dst.u16[1] = b.u16[shuffle_selector(order, 1)];
dst.u16[2] = b.u16[shuffle_selector(order, 2)];
dst.u16[3] = b.u16[shuffle_selector(order, 3)];
```

### Header Mapping

```c
return __builtin_loongson_pshufh_s (b, order);
```

<span id="intrinsic-pshufh_u"></span>

## uint16x4_t pshufh_u (uint16x4_t a, uint16x4_t b, uint8_t order)

### Synopsis

```c
uint16x4_t pshufh_u (uint16x4_t a, uint16x4_t b, uint8_t order)
#include <loongson-mmiintrin.h>
Instruction: pshufh.u
Builtin: __builtin_loongson_pshufh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:450
```

### Description

Use two-bit fields from the immediate to select u16 lanes from the concatenated `a`/`b` inputs inside each 128-bit half.

### Operation

```c
dst.u16[0] = b.u16[shuffle_selector(order, 0)];
dst.u16[1] = b.u16[shuffle_selector(order, 1)];
dst.u16[2] = b.u16[shuffle_selector(order, 2)];
dst.u16[3] = b.u16[shuffle_selector(order, 3)];
```

### Header Mapping

```c
return __builtin_loongson_pshufh_u (b, order);
```

<span id="intrinsic-punpckhbh_s"></span>

## int8x8_t punpckhbh_s (int8x8_t a, int8x8_t b)

### Synopsis

```c
int8x8_t punpckhbh_s (int8x8_t a, int8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: punpckhbh.s
Builtin: __builtin_loongson_punpckhbh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:644
```

### Description

Unpack by interleaving lower i16 lanes from `b` and `a` into alternating destination lanes. This separates packed streams into a wider interleaved layout.

### Operation

```c
dst.u16[0] = b.u16[0];
dst.u16[1] = a.u16[0];
dst.u16[2] = b.u16[1];
dst.u16[3] = a.u16[1];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_punpckhbh_s (a, b);
```

<span id="intrinsic-punpckhbh_u"></span>

## uint8x8_t punpckhbh_u (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t punpckhbh_u (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: punpckhbh.u
Builtin: __builtin_loongson_punpckhbh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:626
```

### Description

Unpack by interleaving lower u16 lanes from `b` and `a` into alternating destination lanes. This separates packed streams into a wider interleaved layout.

### Operation

```c
dst.u16[0] = b.u16[0];
dst.u16[1] = a.u16[0];
dst.u16[2] = b.u16[1];
dst.u16[3] = a.u16[1];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_punpckhbh_u (a, b);
```

<span id="intrinsic-punpckhhw_s"></span>

## int16x4_t punpckhhw_s (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t punpckhhw_s (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: punpckhhw.s
Builtin: __builtin_loongson_punpckhhw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:638
```

### Description

Unpack by interleaving lower i32 lanes from `b` and `a` into alternating destination lanes. This separates packed streams into a wider interleaved layout.

### Operation

```c
dst.u32[0] = b.u32[0];
dst.u32[1] = a.u32[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_punpckhhw_s (a, b);
```

<span id="intrinsic-punpckhhw_u"></span>

## uint16x4_t punpckhhw_u (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t punpckhhw_u (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: punpckhhw.u
Builtin: __builtin_loongson_punpckhhw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:620
```

### Description

Unpack by interleaving lower u32 lanes from `b` and `a` into alternating destination lanes. This separates packed streams into a wider interleaved layout.

### Operation

```c
dst.u32[0] = b.u32[0];
dst.u32[1] = a.u32[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_punpckhhw_u (a, b);
```

<span id="intrinsic-punpckhwd_s"></span>

## int32x2_t punpckhwd_s (int32x2_t a, int32x2_t b)

### Synopsis

```c
int32x2_t punpckhwd_s (int32x2_t a, int32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: punpckhwd.s
Builtin: __builtin_loongson_punpckhwd_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:632
```

### Description

Unpack by interleaving lower i64 lanes from `b` and `a` into alternating destination lanes. This separates packed streams into a wider interleaved layout.

### Operation

```c
dst.u64[0] = b.u64[0];
dst.u64[1] = a.u64[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_punpckhwd_s (a, b);
```

<span id="intrinsic-punpckhwd_u"></span>

## uint32x2_t punpckhwd_u (uint32x2_t a, uint32x2_t b)

### Synopsis

```c
uint32x2_t punpckhwd_u (uint32x2_t a, uint32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: punpckhwd.u
Builtin: __builtin_loongson_punpckhwd_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:614
```

### Description

Unpack by interleaving lower u64 lanes from `b` and `a` into alternating destination lanes. This separates packed streams into a wider interleaved layout.

### Operation

```c
dst.u64[0] = b.u64[0];
dst.u64[1] = a.u64[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_punpckhwd_u (a, b);
```

<span id="intrinsic-punpcklbh_s"></span>

## int8x8_t punpcklbh_s (int8x8_t a, int8x8_t b)

### Synopsis

```c
int8x8_t punpcklbh_s (int8x8_t a, int8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: punpcklbh.s
Builtin: __builtin_loongson_punpcklbh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:681
```

### Description

Unpack by interleaving lower i16 lanes from `b` and `a` into alternating destination lanes. This separates packed streams into a wider interleaved layout.

### Operation

```c
dst.u16[0] = b.u16[0];
dst.u16[1] = a.u16[0];
dst.u16[2] = b.u16[1];
dst.u16[3] = a.u16[1];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_punpcklbh_s (a, b);
```

<span id="intrinsic-punpcklbh_u"></span>

## uint8x8_t punpcklbh_u (uint8x8_t a, uint8x8_t b)

### Synopsis

```c
uint8x8_t punpcklbh_u (uint8x8_t a, uint8x8_t b)
#include <loongson-mmiintrin.h>
Instruction: punpcklbh.u
Builtin: __builtin_loongson_punpcklbh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:663
```

### Description

Unpack by interleaving lower u16 lanes from `b` and `a` into alternating destination lanes. This separates packed streams into a wider interleaved layout.

### Operation

```c
dst.u16[0] = b.u16[0];
dst.u16[1] = a.u16[0];
dst.u16[2] = b.u16[1];
dst.u16[3] = a.u16[1];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_punpcklbh_u (a, b);
```

<span id="intrinsic-punpcklhw_s"></span>

## int16x4_t punpcklhw_s (int16x4_t a, int16x4_t b)

### Synopsis

```c
int16x4_t punpcklhw_s (int16x4_t a, int16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: punpcklhw.s
Builtin: __builtin_loongson_punpcklhw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:675
```

### Description

Unpack by interleaving lower i32 lanes from `b` and `a` into alternating destination lanes. This separates packed streams into a wider interleaved layout.

### Operation

```c
dst.u32[0] = b.u32[0];
dst.u32[1] = a.u32[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_punpcklhw_s (a, b);
```

<span id="intrinsic-punpcklhw_u"></span>

## uint16x4_t punpcklhw_u (uint16x4_t a, uint16x4_t b)

### Synopsis

```c
uint16x4_t punpcklhw_u (uint16x4_t a, uint16x4_t b)
#include <loongson-mmiintrin.h>
Instruction: punpcklhw.u
Builtin: __builtin_loongson_punpcklhw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:657
```

### Description

Unpack by interleaving lower u32 lanes from `b` and `a` into alternating destination lanes. This separates packed streams into a wider interleaved layout.

### Operation

```c
dst.u32[0] = b.u32[0];
dst.u32[1] = a.u32[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_punpcklhw_u (a, b);
```

<span id="intrinsic-punpcklwd_s"></span>

## int32x2_t punpcklwd_s (int32x2_t a, int32x2_t b)

### Synopsis

```c
int32x2_t punpcklwd_s (int32x2_t a, int32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: punpcklwd.s
Builtin: __builtin_loongson_punpcklwd_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:669
```

### Description

Unpack by interleaving lower i64 lanes from `b` and `a` into alternating destination lanes. This separates packed streams into a wider interleaved layout.

### Operation

```c
dst.u64[0] = b.u64[0];
dst.u64[1] = a.u64[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_punpcklwd_s (a, b);
```

<span id="intrinsic-punpcklwd_u"></span>

## uint32x2_t punpcklwd_u (uint32x2_t a, uint32x2_t b)

### Synopsis

```c
uint32x2_t punpcklwd_u (uint32x2_t a, uint32x2_t b)
#include <loongson-mmiintrin.h>
Instruction: punpcklwd.u
Builtin: __builtin_loongson_punpcklwd_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:651
```

### Description

Unpack by interleaving lower u64 lanes from `b` and `a` into alternating destination lanes. This separates packed streams into a wider interleaved layout.

### Operation

```c
dst.u64[0] = b.u64[0];
dst.u64[1] = a.u64[0];
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 1 | 2 |

### Header Mapping

```c
return __builtin_loongson_punpcklwd_u (a, b);
```

