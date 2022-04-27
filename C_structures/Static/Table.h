/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Table.hpp
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
#ifndef TABLE_C
#define TABLE_C

typedef struct cell_s{
    unsigned int value_size;
    void* value;
    void* cell_t_link;   
} cell_t;

typedef struct table_s{
    int row_size;
    int columns_size;
    cell_t** cell;   
    void* table_t_link;
} table_t;

PSI_RET_t table_t_zinit(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_init(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_new(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_del(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_get(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_emptyTable(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_resizeEmptyTable(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_isempty(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_getSize(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_setSize(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_getKey(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_setKey(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_addKey(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_delKey(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_getValue(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_setValue(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_addValue(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_delValue(table_t* self){
    return NO_ERROR;
}
PSI_RET_t table_t_exchangeValue(table_t* self){
    return NO_ERROR;
}

#endif