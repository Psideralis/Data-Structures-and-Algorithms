/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: SharpReturn.cs
Description:
********************************************* */

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */

typedef enum PSI_RET_e{
    n6_EXCP = 6,
    n5_EXCP = 5,
    n4_EXCP = 4,
    n3_EXCP = 3,
    n2_EXCP = 2,
    n1_EXCP = 1,
    NO_ERROR = 0,
    NULLPTR_ERROR = -1,
    n2_ERROR = -2,
    n3_ERROR = -3,
    n4_ERROR = -4,
    n5_ERROR = -5,
    n6_ERROR = -6,
} PSI_RET;