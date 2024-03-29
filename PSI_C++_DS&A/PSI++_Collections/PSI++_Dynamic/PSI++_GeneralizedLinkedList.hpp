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
#ifndef GeneralizedLIST_HPP
#define GeneralizedLIST_HPP

#include "GeneralizedPosition.hpp"


#ifndef STD
#define STD
    #include "stdlib.h"
    #include "stdio.h"
    #include "string"
	#include <iostream>
    using namespace std;
#endif

template <typename T>
class GeneralizedLinkedList {
	public:
	/* CONSTRUCTORES */
	GeneralizedLinkedList(){
	};

	~GeneralizedLinkedList(){
	};
	GeneralizedLinkedList(const GeneralizedLinkedList &cpy){
	};

	/* ATRIBUTOS */
	GeneralizedPosition<T>* content;

	/* MÉTODOS */
	private:
	protected:
};

#endif