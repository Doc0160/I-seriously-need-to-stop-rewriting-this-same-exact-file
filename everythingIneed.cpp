/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: Tristan Magniez $
   ======================================================================== */
#if !defined(EVERYTHIN_I_NEED_H)

// statics
#define internal static
#define global static
#define persist static

//macros
#define ArrayCount(Array) (sizeof(Array) / sizeof((Array)[0]))

#define MIN(x, y) ((x) <= (y) ? (x) : (y))
#define MAX(x, y) ((x) >= (y) ? (x) : (y))

#define Kilobytes(value) ((value)*1024LL)
#define Megabytes(value) (Kilobytes(value)*1024LL)
#define Gigabytes(value) (Megabytes(value)*1024LL)
#define Terabytes(value) (Gigabytes(value)*1024LL)

//types
#include <stdint.h>

//ints
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

//bools
typedef int8 b8;
typedef int16 b16;
typedef int32 b32; //if you don't know use this one
typedef int64 b64;

//uints
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

//reals
typedef float r32;
typedef double r64;

#if DEBUG_MODE
#define Assert(x) if(!(x)){ *(int *)0=0; }
// #define Assert(x) do { if (!(x)) { __debugbreak(); } } while(0)
#else
#define Assert(x)
#endif

#define EVERYTHIN_I_NEED_H
#endif
