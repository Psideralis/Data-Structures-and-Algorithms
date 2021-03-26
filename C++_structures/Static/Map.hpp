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


#ifndef MAP_HPP
#define MAP_HPP

class Map{
    public:
    /* CONSTRUCTORS */
    Map(){};
    ~Map(){};
    /* ATRIBUTES */
    int* key;
    void** value;
    /* MÉTHODS */
    private:
    protected:
}

#endif