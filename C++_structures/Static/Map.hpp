/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Set.hpp
Description: A set is a grouping of numeric
elements or sets. It is not natively ordered
and it have no repeated elements. 

There is an OrderedSet in Psideralis math
utilities if needed. For repeated elements
see Tuple or ArrayList.

********************************************* */ 

/* *********************************************
DEFINES:
	MAP_HPP
MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:
	Map
********************************************* */ 

#include <stdio.h>
#include <stdarg.h>
#include <initializer_list>

#ifndef MAP_HPP
#define MAP_HPP

template<typename T>
class TMap{
};

class Map{
    public:
    /* CONSTRUCTORS */
    Map(...){};
    template<typename ... Args>
    Map(std::initializer_list<Args ...>){};
    Map(int key_size, void* values){
        this->key_size = key_size;
        this->key = new int[this->key_size];
        this->value = new void*[this->key_size];
    };
    ~Map(){};
    template<typename ... Args>
    Map&  operator =(const std::initializer_list<Args ...>){
        return *this;
    };
    template<typename ... Args>
    Map&  operator [](const std::initializer_list<Args ...>){
        return *this;
    };
    template<typename ... Args>
    Map&  operator [](const Args ...){
        return *this;
    };
    int  operator [](const int args[]){
        return 0;
    };
    Map operator [](const Map*){
        return this;
    };
    Map operator [](const Map){
        return this;
    };
    /*
    void* operator new(size_t size){
        return NULL;
    };
    void  operator delete(void*){
    };
    void* operator new[](size_t count ){
        return NULL;
    };
    */
    /* ATRIBUTES */
    unsigned int key_size;
    int* key;
    void* value;
    /* MÉTHODS */
    private:
    protected:
};

#endif