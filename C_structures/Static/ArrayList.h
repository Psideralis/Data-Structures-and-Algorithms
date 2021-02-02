/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef ARRAYLIST_H
#define ARRAYLIST_H

typedef struct element_s{
    Bit_t isEmpty;
    void* item;
} element_t;

typedef struct arrayList_s{
    Bit_t isEmpty;
    int size;
    element_t* entry;
    PSI_RET (*new_arrayList_t)(arrayList_t, int, element_t);
    PSI_RET (*del_arrayList_t)(arrayList_t);
}arrayList_t;

PSI_RET new_arrayList_t(arrayList_t self, int size, element_t* entry){
    self.size = size;
    self.entry = entry;
    for (int i = 0; i < size; i++){
        self.entry[i] = entry[i];
    }
}
    
PSI_RET del_arrayList_t(arrayList_t self){
    self.size = 0;
    self.entry = PSI_null;
}

#endif