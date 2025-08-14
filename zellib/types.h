#ifndef ZELLIB_TYPES_H
#define ZELLIB_TYPES_H

    #ifndef ZELLIB_DISALLOW_TYPES
        #ifndef ZELLIB_DISALLOW_POINTERS
            #ifndef ZELLIB_PTR_T
            #define ZELLIB_PTR_T
                #define ptr_t typedef void*
            #endif // ZELLIB_PTR_T
        #endif // ZELLIB_DISALLOW_POINTERS


        #ifndef ZELLIB_DISALLOW_HANDLES
            #ifndef ZELLIB_HANDLE_T
            #define ZELLIB_HANDLE_T
                #define handle_t typedef void*
            #endif // ZELLIB_HANDLE_T
        #endif // ZELLIB_DISALLOW_HANDLES

        #ifndef ZELLIB_DISALLOW_STRUCTURES
            #ifndef ZELLIB_STRUCT_T
            #define ZELLIB_STRUCT_T
                #define struct_t typedef struct
            #endif // ZELLIB_STRUCT_T

            #ifndef ZELLIB_ENUM_T
            #define ZELLIB_ENUM_T
                #define enum_t typedef enum
            #endif // ZELLIB_ENUM_T
        #endif // ZELLIB_DISALLOW_STRUCTURES

        #ifndef ZELLIB_DISALLOW_UNITARY
            #ifndef ZELLIB_U8
            #define ZELLIB_U8
                typedef unsigned char u8;
            #endif // ZELLIB_U8

            #ifndef ZELLIB_U16
            #define ZELLIB_U16
                typedef unsigned short u16;
            #endif // ZELLIB_U16

            #ifndef ZELLIB_U32
            #define ZELLIB_U32
                typedef unsigned int u32;
            #endif // ZELLIB_U32

            #ifndef ZELLIB_U64
            #define ZELLIB_U64
                typedef unsigned long long u64;
            #endif // ZELLIB_U64

            #ifndef ZELLIB_S8
            #define ZELLIB_S8
                typedef signed char s8;
            #endif // ZELLIB_S8

            #ifndef ZELLIB_S16
            #define ZELLIB_S16
                typedef signed short s16;
            #endif // ZELLIB_S16

            #ifndef ZELLIB_S32
            #define ZELLIB_S32
                typedef signed int s32;
            #endif // ZELLIB_S32

            #ifndef ZELLIB_S64
            #define ZELLIB_S64
                typedef signed long long s64;
            #endif // ZELLIB_S64

            #ifndef ZELLIB_F32
            #define ZELLIB_F32
                typedef float f32;
            #endif // ZELLIB_F32

            #ifndef ZELLIB_F64
            #define ZELLIB_F64
                typedef double f64;
            #endif // ZELLIB_F64
        #endif // ZELLIB_DISALLOW_UNITARY
    #endif // ZELLIB_DISALLOW_TYPES

#endif // ZELLIB_TYPES_H