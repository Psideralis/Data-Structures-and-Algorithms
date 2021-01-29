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
    set_s(int size, void** entry){
        this->size = size;
        this->entry = new void*[this->size]();
        for (int i = 0; i < size; i++){
            this->entry[i] = entry[i];
        }
    }
    ~set_s(){
        this->size = 0;
        this->entry = nullptr;
    }
}set_t;

#endif