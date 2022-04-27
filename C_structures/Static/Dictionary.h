/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Dictionary.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

FUNCTIONS:
    BASICS
        zero_alloc
        null_init
        range_init
            int
            double
        init
            int
            double
            set_t
        new
            args_list
        dealloc
        del
    MISCELANEOUS
        empty
        set
        get
        resizeEmpty
        resizeZero
    ALGORITHMS
        INMUTATIVE:
            search
            selection
        MUTATIVE:
            setter
            addition or remove
            exchange
            substitution
            classification
        TRANSMUTATIVE:
            combinatorics
********************************************* */ 
#ifndef DICTIONARY_C
#define DICTIONARY_C

typedef struct reference_s{
    unsigned int entry_size;
    char* entry;
    void* reference_t_link;
} reference_t;

typedef struct dictionary_s{
    void* term;
    reference_t* extension;
    void* dictionary_t_link;
} dictionary_t;

PSI_RET_t dictionary_t_zinit(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_init(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_new(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_del(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_get(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_emptyDictionary(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_resizeEmptyDictionary(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_isempty(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_getSize(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_setSize(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_getKey(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_setKey(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_addKey(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_delKey(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_getValue(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_setValue(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_addValue(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_delValue(dictionary_t* self){
    return NO_ERROR;
}
PSI_RET_t dictionary_t_exchangeValue(dictionary_t* self){
    return NO_ERROR;
}

#endif