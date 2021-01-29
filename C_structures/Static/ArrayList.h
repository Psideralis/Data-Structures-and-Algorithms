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
    void* item;
} element_t;

typedef struct arrayList_s{
    int size;
    element_t* entry;
    arrayList_s(int size, element_t* entry){
        this->size = size;
        this->entry = new element_t[this->size]();
        for (int i = 0; i < size; i++){
            this->entry[i] = entry[i];
        }
    }
    ~arrayList_s(){
        this->size = 0;
        this->entry = nullptr;
    }
}arrayList_t;

#endif