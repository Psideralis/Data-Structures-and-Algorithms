/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: PsideralisDataStructures.h
Description:
********************************************* */ 

#ifndef PSIDERALIS_OBJCSTRUCTS
#define PSIDERALIS_OBJCSTRUCTS

#define PSI_NULL ((void*)0);

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

typedef unsigned char byte_t;
typedef byte_t word_t[2];
typedef word_t dword_t[2];
typedef dword_t qword_t[2];
typedef qword_t oword_t[2];
typedef oword_t hword_t[2];
typedef unsigned char* ptr_byte_t;
typedef ptr_byte_t* ptr_word_t[2];
typedef ptr_word_t* ptr_dword_t[2];
typedef ptr_dword_t* ptr_qword_t[2];
typedef ptr_qword_t* ptr_oword_t[2];
typedef ptr_oword_t* ptr_hword_t[2];

#include "Dynamic/PsideralisObjCDynamicStructures.h"
#include "Graph/PsideralisObjCGraphStructures.h"
#include "Static/PsideralisObjCStaticStructures.h"


#endif