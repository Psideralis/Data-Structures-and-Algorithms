/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef BIGRID_C
#define BIGRID_C

typedef struct biArrayGrid_s{
    
    PSI_RET (*new_biArrayGrid)(biArrayGrid_t);
    PSI_RET (*del_biArrayGrid)(biArrayGrid_t);
} biArrayGrid_t;

#endif