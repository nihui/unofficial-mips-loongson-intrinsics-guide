# Branch

Generated from `include/loongson-asxintrin.h`. This page contains 10 intrinsics.

## int __lasx_xbnz_b (__m256i a)

### Synopsis

```c
int __lasx_xbnz_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xbnz.b
Builtin: __builtin_lasx_xbnz_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4366
```

### Description

Return the vector branch predicate for u8 lanes being all non-zero.

### Operation

```c
return all_u8_lanes(a, != 0);
```

### Header Mapping

```c
return __builtin_lasx_xbnz_b((v32u8)a);
```

## int __lasx_xbnz_d (__m256i a)

### Synopsis

```c
int __lasx_xbnz_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xbnz.d
Builtin: __builtin_lasx_xbnz_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4386
```

### Description

Return the vector branch predicate for u64 lanes being all non-zero.

### Operation

```c
return all_u64_lanes(a, != 0);
```

### Header Mapping

```c
return __builtin_lasx_xbnz_d((v4u64)a);
```

## int __lasx_xbnz_h (__m256i a)

### Synopsis

```c
int __lasx_xbnz_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xbnz.h
Builtin: __builtin_lasx_xbnz_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4373
```

### Description

Return the vector branch predicate for u16 lanes being all non-zero.

### Operation

```c
return all_u16_lanes(a, != 0);
```

### Header Mapping

```c
return __builtin_lasx_xbnz_h((v16u16)a);
```

## int __lasx_xbnz_v (__m256i a)

### Synopsis

```c
int __lasx_xbnz_v (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xbnz.v
Builtin: __builtin_lasx_xbnz_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4359
```

### Description

Return the vector branch predicate for the whole vector being not all zero.

### Operation

```c
return any_u8_lane(a, != 0);
```

### Header Mapping

```c
return __builtin_lasx_xbnz_v((v32u8)a);
```

## int __lasx_xbnz_w (__m256i a)

### Synopsis

```c
int __lasx_xbnz_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xbnz.w
Builtin: __builtin_lasx_xbnz_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4380
```

### Description

Return the vector branch predicate for u32 lanes being all non-zero.

### Operation

```c
return all_u32_lanes(a, != 0);
```

### Header Mapping

```c
return __builtin_lasx_xbnz_w((v8u32)a);
```

## int __lasx_xbz_b (__m256i a)

### Synopsis

```c
int __lasx_xbz_b (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xbz.b
Builtin: __builtin_lasx_xbz_b
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4332
```

### Description

Return the vector branch predicate for u8 lanes being any zero.

### Operation

```c
return any_u8_lane(a, == 0);
```

### Header Mapping

```c
return __builtin_lasx_xbz_b((v32u8)a);
```

## int __lasx_xbz_d (__m256i a)

### Synopsis

```c
int __lasx_xbz_d (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xbz.d
Builtin: __builtin_lasx_xbz_d
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4352
```

### Description

Return the vector branch predicate for u64 lanes being any zero.

### Operation

```c
return any_u64_lane(a, == 0);
```

### Header Mapping

```c
return __builtin_lasx_xbz_d((v4u64)a);
```

## int __lasx_xbz_h (__m256i a)

### Synopsis

```c
int __lasx_xbz_h (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xbz.h
Builtin: __builtin_lasx_xbz_h
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4339
```

### Description

Return the vector branch predicate for u16 lanes being any zero.

### Operation

```c
return any_u16_lane(a, == 0);
```

### Header Mapping

```c
return __builtin_lasx_xbz_h((v16u16)a);
```

## int __lasx_xbz_v (__m256i a)

### Synopsis

```c
int __lasx_xbz_v (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xbz.v
Builtin: __builtin_lasx_xbz_v
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4325
```

### Description

Return the vector branch predicate for the whole vector being all zero.

### Operation

```c
return all_u8_lanes(a, == 0);
```

### Header Mapping

```c
return __builtin_lasx_xbz_v((v32u8)a);
```

## int __lasx_xbz_w (__m256i a)

### Synopsis

```c
int __lasx_xbz_w (__m256i a)
#include <loongson-asxintrin.h>
Instruction: xbz.w
Builtin: __builtin_lasx_xbz_w
CPU Flags: __mips_loongson_asx
Kind: function
Source: include/loongson-asxintrin.h:4346
```

### Description

Return the vector branch predicate for u32 lanes being any zero.

### Operation

```c
return any_u32_lane(a, == 0);
```

### Header Mapping

```c
return __builtin_lasx_xbz_w((v8u32)a);
```

