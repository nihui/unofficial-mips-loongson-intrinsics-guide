# Shift

Generated from `include/loongson-mmiintrin.h`. This page contains 12 intrinsics.

## int16x4_t psllh_s (int16x4_t a, uint8_t amount)

### Synopsis

```c
int16x4_t psllh_s (int16x4_t a, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psllh.s
Builtin: __builtin_loongson_psllh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:469
```

### Description

Shift-left each i16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] << amount;
dst.u16[1] = a.u16[1] << amount;
dst.u16[2] = a.u16[2] << amount;
dst.u16[3] = a.u16[3] << amount;
```

### Header Mapping

```c
return __builtin_loongson_psllh_s (a, amount);
```

## uint16x4_t psllh_u (uint16x4_t a, uint8_t amount)

### Synopsis

```c
uint16x4_t psllh_u (uint16x4_t a, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psllh.u
Builtin: __builtin_loongson_psllh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:463
```

### Description

Shift-left each u16 lane.

### Operation

```c
dst.u16[0] = a.u16[0] << amount;
dst.u16[1] = a.u16[1] << amount;
dst.u16[2] = a.u16[2] << amount;
dst.u16[3] = a.u16[3] << amount;
```

### Header Mapping

```c
return __builtin_loongson_psllh_u (a, amount);
```

## int32x2_t psllw_s (int32x2_t a, uint8_t amount)

### Synopsis

```c
int32x2_t psllw_s (int32x2_t a, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psllw.s
Builtin: __builtin_loongson_psllw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:481
```

### Description

Shift-left each i32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] << amount;
dst.u32[1] = a.u32[1] << amount;
```

### Header Mapping

```c
return __builtin_loongson_psllw_s (a, amount);
```

## uint32x2_t psllw_u (uint32x2_t a, uint8_t amount)

### Synopsis

```c
uint32x2_t psllw_u (uint32x2_t a, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psllw.u
Builtin: __builtin_loongson_psllw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:475
```

### Description

Shift-left each u32 lane.

### Operation

```c
dst.u32[0] = a.u32[0] << amount;
dst.u32[1] = a.u32[1] << amount;
```

### Header Mapping

```c
return __builtin_loongson_psllw_u (a, amount);
```

## int16x4_t psrah_s (int16x4_t a, uint8_t amount)

### Synopsis

```c
int16x4_t psrah_s (int16x4_t a, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psrah.s
Builtin: __builtin_loongson_psrah_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:519
```

### Description

Arithmetic-shift-right each signed i16 lane.

### Operation

```c
dst.i16[0] = arithmetic_shift_right(a.i16[0], amount);
dst.i16[1] = arithmetic_shift_right(a.i16[1], amount);
dst.i16[2] = arithmetic_shift_right(a.i16[2], amount);
dst.i16[3] = arithmetic_shift_right(a.i16[3], amount);
```

### Header Mapping

```c
return __builtin_loongson_psrah_s (a, amount);
```

## uint16x4_t psrah_u (uint16x4_t a, uint8_t amount)

### Synopsis

```c
uint16x4_t psrah_u (uint16x4_t a, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psrah.u
Builtin: __builtin_loongson_psrah_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:513
```

### Description

Arithmetic-shift-right each signed u16 lane.

### Operation

```c
dst.i16[0] = arithmetic_shift_right(a.i16[0], amount);
dst.i16[1] = arithmetic_shift_right(a.i16[1], amount);
dst.i16[2] = arithmetic_shift_right(a.i16[2], amount);
dst.i16[3] = arithmetic_shift_right(a.i16[3], amount);
```

### Header Mapping

```c
return __builtin_loongson_psrah_u (a, amount);
```

## int32x2_t psraw_s (int32x2_t a, uint8_t amount)

### Synopsis

```c
int32x2_t psraw_s (int32x2_t a, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psraw.s
Builtin: __builtin_loongson_psraw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:531
```

### Description

Arithmetic-shift-right each signed i32 lane.

### Operation

```c
dst.i32[0] = arithmetic_shift_right(a.i32[0], amount);
dst.i32[1] = arithmetic_shift_right(a.i32[1], amount);
```

### Header Mapping

```c
return __builtin_loongson_psraw_s (a, amount);
```

## uint32x2_t psraw_u (uint32x2_t a, uint8_t amount)

### Synopsis

```c
uint32x2_t psraw_u (uint32x2_t a, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psraw.u
Builtin: __builtin_loongson_psraw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:525
```

### Description

Arithmetic-shift-right each signed u32 lane.

### Operation

```c
dst.i32[0] = arithmetic_shift_right(a.i32[0], amount);
dst.i32[1] = arithmetic_shift_right(a.i32[1], amount);
```

### Header Mapping

```c
return __builtin_loongson_psraw_u (a, amount);
```

## int16x4_t psrlh_s (int16x4_t a, uint8_t amount)

### Synopsis

```c
int16x4_t psrlh_s (int16x4_t a, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psrlh.s
Builtin: __builtin_loongson_psrlh_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:494
```

### Description

Logical-shift-right each unsigned i16 lane.

### Operation

```c
dst.u16[0] = logical_shift_right(a.u16[0], amount);
dst.u16[1] = logical_shift_right(a.u16[1], amount);
dst.u16[2] = logical_shift_right(a.u16[2], amount);
dst.u16[3] = logical_shift_right(a.u16[3], amount);
```

### Header Mapping

```c
return __builtin_loongson_psrlh_s (a, amount);
```

## uint16x4_t psrlh_u (uint16x4_t a, uint8_t amount)

### Synopsis

```c
uint16x4_t psrlh_u (uint16x4_t a, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psrlh.u
Builtin: __builtin_loongson_psrlh_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:488
```

### Description

Logical-shift-right each unsigned u16 lane.

### Operation

```c
dst.u16[0] = logical_shift_right(a.u16[0], amount);
dst.u16[1] = logical_shift_right(a.u16[1], amount);
dst.u16[2] = logical_shift_right(a.u16[2], amount);
dst.u16[3] = logical_shift_right(a.u16[3], amount);
```

### Header Mapping

```c
return __builtin_loongson_psrlh_u (a, amount);
```

## int32x2_t psrlw_s (int32x2_t a, uint8_t amount)

### Synopsis

```c
int32x2_t psrlw_s (int32x2_t a, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psrlw.s
Builtin: __builtin_loongson_psrlw_s
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:506
```

### Description

Logical-shift-right each unsigned i32 lane.

### Operation

```c
dst.u32[0] = logical_shift_right(a.u32[0], amount);
dst.u32[1] = logical_shift_right(a.u32[1], amount);
```

### Header Mapping

```c
return __builtin_loongson_psrlw_s (a, amount);
```

## uint32x2_t psrlw_u (uint32x2_t a, uint8_t amount)

### Synopsis

```c
uint32x2_t psrlw_u (uint32x2_t a, uint8_t amount)
#include <loongson-mmiintrin.h>
Instruction: psrlw.u
Builtin: __builtin_loongson_psrlw_u
CPU Flags: __mips_loongson_mmi
Kind: function
Source: include/loongson-mmiintrin.h:500
```

### Description

Logical-shift-right each unsigned u32 lane.

### Operation

```c
dst.u32[0] = logical_shift_right(a.u32[0], amount);
dst.u32[1] = logical_shift_right(a.u32[1], amount);
```

### Header Mapping

```c
return __builtin_loongson_psrlw_u (a, amount);
```

