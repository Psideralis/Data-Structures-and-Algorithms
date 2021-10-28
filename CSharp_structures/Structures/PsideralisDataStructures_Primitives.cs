/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: PsideralisDataStructures_Primitives.cs
Description:
********************************************* */

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */


namespace PsideralisDataStructures_Primitives
{
    static public class PSI{
        public enum BOOL_e{
            PSI_true = 1,
            PSI_false = 0
        };
        public enum RET_e{
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
        };
    }
}