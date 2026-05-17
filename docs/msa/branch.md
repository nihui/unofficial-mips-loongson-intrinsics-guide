# Branch

Generated from `include/msa.h`. This page contains 10 intrinsics.

<span id="intrinsic-__msa_test_bnz_b"></span>

## int __msa_test_bnz_b (v16u8 a)

### Synopsis

```c
int __msa_test_bnz_b (v16u8 a)
#include <msa.h>
Instruction: bnz.b
Builtin: __builtin_msa_bnz_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:453
```

### Description

Return the vector branch predicate for u8 lanes being all non-zero.

### Operation

```c
return all_u8_lanes(a, != 0);
```

### Header Mapping

```c
#define __msa_test_bnz_b __builtin_msa_bnz_b
```

<span id="intrinsic-__msa_test_bnz_d"></span>

## int __msa_test_bnz_d (v2u64 a)

### Synopsis

```c
int __msa_test_bnz_d (v2u64 a)
#include <msa.h>
Instruction: bnz.d
Builtin: __builtin_msa_bnz_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:456
```

### Description

Return the vector branch predicate for u64 lanes being all non-zero.

### Operation

```c
return all_u64_lanes(a, != 0);
```

### Header Mapping

```c
#define __msa_test_bnz_d __builtin_msa_bnz_d
```

<span id="intrinsic-__msa_test_bnz_h"></span>

## int __msa_test_bnz_h (v8u16 a)

### Synopsis

```c
int __msa_test_bnz_h (v8u16 a)
#include <msa.h>
Instruction: bnz.h
Builtin: __builtin_msa_bnz_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:454
```

### Description

Return the vector branch predicate for u16 lanes being all non-zero.

### Operation

```c
return all_u16_lanes(a, != 0);
```

### Header Mapping

```c
#define __msa_test_bnz_h __builtin_msa_bnz_h
```

<span id="intrinsic-__msa_test_bnz_v"></span>

## int __msa_test_bnz_v (v16u8 a)

### Synopsis

```c
int __msa_test_bnz_v (v16u8 a)
#include <msa.h>
Instruction: bnz.v
Builtin: __builtin_msa_bnz_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:419
```

### Description

Return the vector branch predicate for the whole vector being not all zero.

### Operation

```c
return any_u8_lane(a, != 0);
```

### Header Mapping

```c
#define __msa_test_bnz_v __builtin_msa_bnz_v
```

<span id="intrinsic-__msa_test_bnz_w"></span>

## int __msa_test_bnz_w (v4u32 a)

### Synopsis

```c
int __msa_test_bnz_w (v4u32 a)
#include <msa.h>
Instruction: bnz.w
Builtin: __builtin_msa_bnz_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:455
```

### Description

Return the vector branch predicate for u32 lanes being all non-zero.

### Operation

```c
return all_u32_lanes(a, != 0);
```

### Header Mapping

```c
#define __msa_test_bnz_w __builtin_msa_bnz_w
```

<span id="intrinsic-__msa_test_bz_b"></span>

## int __msa_test_bz_b (v16u8 a)

### Synopsis

```c
int __msa_test_bz_b (v16u8 a)
#include <msa.h>
Instruction: bz.b
Builtin: __builtin_msa_bz_b
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:457
```

### Description

Return the vector branch predicate for u8 lanes being any zero.

### Operation

```c
return any_u8_lane(a, == 0);
```

### Header Mapping

```c
#define __msa_test_bz_b __builtin_msa_bz_b
```

<span id="intrinsic-__msa_test_bz_d"></span>

## int __msa_test_bz_d (v2u64 a)

### Synopsis

```c
int __msa_test_bz_d (v2u64 a)
#include <msa.h>
Instruction: bz.d
Builtin: __builtin_msa_bz_d
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:460
```

### Description

Return the vector branch predicate for u64 lanes being any zero.

### Operation

```c
return any_u64_lane(a, == 0);
```

### Header Mapping

```c
#define __msa_test_bz_d __builtin_msa_bz_d
```

<span id="intrinsic-__msa_test_bz_h"></span>

## int __msa_test_bz_h (v8u16 a)

### Synopsis

```c
int __msa_test_bz_h (v8u16 a)
#include <msa.h>
Instruction: bz.h
Builtin: __builtin_msa_bz_h
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:458
```

### Description

Return the vector branch predicate for u16 lanes being any zero.

### Operation

```c
return any_u16_lane(a, == 0);
```

### Header Mapping

```c
#define __msa_test_bz_h __builtin_msa_bz_h
```

<span id="intrinsic-__msa_test_bz_v"></span>

## int __msa_test_bz_v (v16u8 a)

### Synopsis

```c
int __msa_test_bz_v (v16u8 a)
#include <msa.h>
Instruction: bz.v
Builtin: __builtin_msa_bz_v
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:420
```

### Description

Return the vector branch predicate for the whole vector being all zero.

### Operation

```c
return all_u8_lanes(a, == 0);
```

### Header Mapping

```c
#define __msa_test_bz_v __builtin_msa_bz_v
```

<span id="intrinsic-__msa_test_bz_w"></span>

## int __msa_test_bz_w (v4u32 a)

### Synopsis

```c
int __msa_test_bz_w (v4u32 a)
#include <msa.h>
Instruction: bz.w
Builtin: __builtin_msa_bz_w
CPU Flags: __mips_msa
Kind: alias
Source: include/msa.h:459
```

### Description

Return the vector branch predicate for u32 lanes being any zero.

### Operation

```c
return any_u32_lane(a, == 0);
```

### Header Mapping

```c
#define __msa_test_bz_w __builtin_msa_bz_w
```

