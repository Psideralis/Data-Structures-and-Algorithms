#ifndef PSIDERALIS_OBJCPPSTRUCTS
#define PSIDERALIS_OBJCPPSTRUCTS

#define PSI_null ((void*)0);

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

typedef struct DBitFlags_s{
    unsigned char bit_flag1 : 1;
    unsigned char bit_flag2 : 1;    
} DBitFlags_t;

typedef struct TBitFlags_s{
    unsigned char bit_flag1 : 1;
    unsigned char bit_flag2 : 1;    
    unsigned char bit_flag3 : 1;    
} TBitFlags_t;

typedef struct NibbleFlags_s{
    unsigned char bit_flag1 : 1;
    unsigned char bit_flag2 : 1;    
    unsigned char bit_flag3 : 1;
    unsigned char bit_flag4 : 1;    
} NibbleFlags_t;

typedef struct ByteFlags_s{
    unsigned char bit_flag1 : 1;
    unsigned char bit_flag2 : 1;
    unsigned char bit_flag3 : 1;
    unsigned char bit_flag4 : 1;
    unsigned char bit_flag5 : 1;
    unsigned char bit_flag6 : 1;
    unsigned char bit_flag7 : 1;
    unsigned char bit_flag8 : 1;
} ByteFlags_t;

typedef struct WordFlags_s{
    ByteFlags_t wflags[2];
} WordFlags_t;

typedef struct DWordFlags_s{
    WordFlags_t dflags[2];
} DWordFlags_t;

typedef struct QWordFlags_s{
    DWordFlags_t qflags[2];
} QWordFlags_t;


typedef struct OWordFlags_s{
    QWordFlags_t oflags[2];
} OWordFlags_t;

typedef struct HWordFlags_s{
    OWordFlags_t hflags[2];
} HWordFlags_t;

typedef enum PSI_RET_e{
    _EXCP = 6,
    _EXCP = 5,
    _EXCP = 4,
    _EXCP = 3,
    _EXCP = 2,
    _EXCP = 1,
    NO_ERROR = 0,
    NULLPTR_ERROR = -1,
    _ERROR = -2,
    _ERROR = -3,
    _ERROR = -4,
    _ERROR = -5,
    _ERROR = -6,
} PSI_RET;

#include "Dynamic/PsideralisObjCppDynamicStructures.h"
#include "Graph/PsideralisObjCppGraphStructures.h"
#include "Static/PsideralisObjCppStaticStructures.h"

#endif