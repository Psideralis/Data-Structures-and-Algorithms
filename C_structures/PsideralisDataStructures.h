#ifndef PSIDERALIS_CSTRUCTS
#define PSIDERALIS_CSTRUCTS

#ifndef CSTD
#define CSTD
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#endif

typedef enum PSI_BOOL_e{
    PSI_true = 1,
    PSI_false = 0
} PSI_BOOL;

typedef enum PSI_RET_e{
    _EXCP6 = 6,
    _EXCP5 = 5,
    _EXCP4 = 4,
    _EXCP3 = 3,
    _EXCP2 = 2,
    ZERODIV_EXCP = 1,
    NO_ERROR = 0,
    NULLPTR_ERROR = -1,
    CAST_ERROR = -2,
    TYPE_ERROR = -3,
    NOTINIT_ERROR = -4,
    _ERROR5 = -5,
    _ERROR6 = -6
} PSI_RET;

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

typedef unsigned int ibyte_t;
typedef ibyte_t iword_t[2];
typedef iword_t idword_t[2];
typedef idword_t iqword_t[2];
typedef iqword_t ioword_t[2];
typedef ioword_t ihword_t[2];

typedef unsigned int* ptr_ibyte_t;
typedef ptr_ibyte_t* ptr_iword_t[2];
typedef ptr_iword_t* ptr_idword_t[2];
typedef ptr_idword_t* ptr_iqword_t[2];
typedef ptr_iqword_t* ptr_ioword_t[2];
typedef ptr_ioword_t* ptr_ihword_t[2];

typedef struct BitFlag_s{
    unsigned char bit_t : 1;
} BitFlag_t;

typedef struct DuoBitFlag_s{
    unsigned char bit_flag1 : 1;
    unsigned char bit_flag2 : 1;    
} DBitFlag_t;

typedef struct TriBitFlag_s{
    unsigned char bit_flag1 : 1;
    unsigned char bit_flag2 : 1;    
    unsigned char bit_flag3 : 1;    
} TBitFlag_t;

typedef struct NibbleFlag_s{
    unsigned char bit_flag1 : 1;
    unsigned char bit_flag2 : 1;    
    unsigned char bit_flag3 : 1;
    unsigned char bit_flag4 : 1;    
} NibbleFlas_t;

#include "Dynamic/PsideralisDynamicStructures.h"
#include "Graph/PsideralisGraphStructures.h"
#include "Static/PsideralisStaticStructures.h"

#endif