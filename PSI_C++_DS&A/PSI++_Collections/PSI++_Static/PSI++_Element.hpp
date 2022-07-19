/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Element.hpp
Description: An ArrayList element for it to
have multiple types. It contains a void item
which can be cast to any type and will be part
of a Element array of all the elements in the 
ArrayList.
********************************************* */ 

/* *********************************************
DEFINES:
	ELEMENT_HPP
	STD
MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:
	Element
********************************************* */ 

#include "PSI++_DataStructures.hpp"

#ifndef ELEMENT_HPP
#define ELEMENT_HPP

#ifndef STD
#define STD
    #include "stdlib.h"
    #include "stdio.h"
    #include "string"
	#include <iostream>
    using namespace std;
#endif

class Element{
    public:
        /* CONSTRUCTORES */
        Element(){};
        ~Element(){};
		Element(const Element &cpy){};
		/* ATRIBUTOS */
        void* item;
		/* MÉTODOS */
    private:
    protected:
};

#endif