/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.hpp
Description: An Arraylist is an implementation
of a List by means of an array.
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:

********************************************* */ 
#include "PSI++_DataStructures.hpp"
#ifndef SINGLELIST_HPP
#define SINGLELIST_HPP

#include "SinglePosition.hpp"


#ifndef STD
#define STD
    #include "stdlib.h"
    #include "stdio.h"
    #include "string"
	#include <iostream>
    using namespace std;
#endif

template <typename T>
class SingleLinkedList {
	public:
	/* CONSTRUCTORES */
	SingleLinkedList(){};
	~SingleLinkedList(){};
	SingleLinkedList(const SingleLinkedList &cpy){};

	/* ATRIBUTOS */
	SinglePosition<T>* content;

	/* MÉTODOS */


	private:
	protected:
};

#endif