#ifndef PSIDERALIS_CSTRUCTS
#define PSIDERALIS_CSTRUCTS

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

#include "Dynamic/PsideralisDynamicStructures.h"
#include "Graph/PsideralisGraphStructures.h"
#include "Static/PsideralisStaticStructures.h"


#endif