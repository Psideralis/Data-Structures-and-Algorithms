/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Set.h
Description: A set is a grouping of elements
of the same type, especialized for numbers but
a set can have any type as long as all its
elements are of the same type. It is not
natively ordered neither it has repeated
elements. For repeated elements see: ArrayList,
for ordered elementes see: OrderedList.
There is an OrderedSet in Psideralis math
utilities if needed.

A set can be made up of sets. So classes can
be made up of sets and a universe can be made
up of classes.
********************************************* */ 

/* *********************************************
DEFINES:
	SET_H
MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 

#ifndef SET_H
#define SET_H

typedef struct set_s{
    int size;
    void** entry;
    void (*set_t)(set_t,int ,void**);
    void (*del_set_t)(set_t);
}set_t;

PSI_RET set_s(set_t self, int size, void** entry){
    self.size = size;
    void** entries[self.size];
    self.entry = entries;
    for (int i = 0; i < size; i++){
        self.entry[i] = entry[i];
    }
    return NO_ERROR;
}

PSI_RET del_set_s(set_t self){
    self.size = 0;
    self.entry = ((void*)0);
    return NO_ERROR;
}


#endif