/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: LinkedList3D.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef TRILINKEDLIST_H
#define TRILINKEDLIST_H

typedef struct element_s{
    Bit_t isEmpty;
    void* item;
} element_t;

typedef struct LinkedList3D_s{
    Bit_t isEmpty;
    int size;
    element_t* entry;
    PSI_RET (*new_LinkedList3D_t)(LinkedList3D_t, int, element_t);
    PSI_RET (*del_LinkedList3D_t)(LinkedList3D_t);
}LinkedList3D_t;

PSI_RET new_LinkedList3D_t(LinkedList3D_t self, int size, element_t* entry){
    self.size = size;
    self.entry = entry;
    for (int i = 0; i < size; i++){
        self.entry[i] = entry[i];
    }
}
    
PSI_RET del_LinkedList3D_t(LinkedList3D_t self){
    self.size = 0;
    self.entry = PSI_null;
}

#endif