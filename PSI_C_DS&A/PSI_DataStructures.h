/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: PsideralisDataStructures.h
Description:
********************************************* */ 

/* *********************************************
INCLUDES:
    CSTD
MACROS:
    PSIDERALIS_CSTRUCTS
    PSI_NULL
    CPYTHON
STRUCTS:

ENUMS:
    PSI_BOOL_e
    PSI_RET_e
TYPES:
    PSI_BOOL_t
    PSI_RET_t  
    PSI_string
    PSI_chord
    byte_t
    word_t
    dword_t
    qword_t
    oword_t
    hword_t
    ptr_byte_t
    ptr_word_t
    ptr_dword_t
    ptr_qword_t
    ptr_oword_t
    ptr_hword_t
FUNCTIONS:
        asm_add
        asm_unsigned_add
        asm_128_add
        asm_128_unsigned_add
        asm_256_add
        asm_256_unsigned_add
        asm_512_add
        asm_512_unsigned_add
        asm_1024_add
        asm_1024_unsigned_add
        asm_2048_add
        asm_2048_unsigned_add
        asm_res
        asm_mul
        asm_div
********************************************* */ 

#ifndef PSIDERALIS_CSTRUCTS
#define PSIDERALIS_CSTRUCTS

#ifndef CSTD
#define CSTD
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <string.h>
    #include <cstdint>
    #include <stdint.h>
#endif

/*
#ifndef CPYTHON
#define CPYTHON
    #define PY_SSIZE_T_CLEAN
    #include <Python.h>
#endif
*/

#define PSI_NULL ((void*)0);

extern int asm_add(int a, int b);
extern int asm_res(int a, int b);
extern int asm_mul(int a, int b);
extern int asm_div(int a, int b);

typedef enum PSI_BOOL_e{
    PSI_true = 1,
    PSI_false = 0
} PSI_BOOL_t;

typedef enum PSI_RET_e{
    EOF_EXCP = 6,
    UNEXCPECTEDOUT_EXCP = 5,
    UNEXCPECTEDIN_EXCP = 4,
    SIGN_EXCP = 3,
    OVERFLOW_EXCP = 2,
    ZERODIV_EXCP = 1,
    NO_ERROR = 0,
    NULLPTR_ERROR = -1,
    CAST_ERROR = -2,
    TYPE_ERROR = -3,
    NOTINIT_ERROR = -4,
    NOTALLOC_ERROR = -5,
    NOTDEALLOC_ERROR = -6
} PSI_RET_t;

typedef char* PSI_string;
typedef PSI_string* PSI_chord;

typedef uint8_t byte_t;
typedef uint16_t word_t;
typedef uint32_t dword_t;
typedef uint64_t qword_t;
typedef uint64_t oword_t[2];
typedef oword_t hword_t[2];
typedef uint8_t* ptr_byte_t;
typedef uint16_t* ptr_word_t;
typedef uint32_t* ptr_dword_t;
typedef uint64_t* ptr_qword_t;
typedef ptr_qword_t* ptr_oword_t[2];
typedef ptr_oword_t* ptr_hword_t[2];

#define typename(x) _Generic((x), \
    int:     "int", \
    float:   "float", \
    default: "other")
    
#include "PSI_Static/PSI_StaticStuctures.h"
#include "PSI_Graph/PSI_GraphStructures.h"
#include "PSI_Dynamic/PSI_DynamicStructures.h"

#endif