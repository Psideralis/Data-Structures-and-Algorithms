/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Stack.hpp
Description: A stack is a pile of elements of 
the sae type that con pop out the last element 
on the top and push in an element to the top.
For a mixed type stack see MixedStack.
********************************************* */ 

/* *********************************************
DEFINES:
`	STACK_HPP
	STD
MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:
	Stack<T>
********************************************* */ 


#ifndef STACK_HPP
#define STACK_HPP

#ifndef STD
#define STD
    #include "stdlib.h"
    #include "stdio.h"
    #include "string"
	#include <iostream>
    using namespace std;
#endif

template <typename T>
class Stack {
	public:
		/* CONSTRUCTORES */
		Stack(){};
		~Stack(){};
		Stack(const Stack &cpy){};
		/* ATRIBUTOS */
		T* top;
		/* MÉTODOS */
			/* SPECIAL */
		void pop();
		void push();
			/* NON MUTATIVE */
				/* SEARCH */
		void generalSearch();
		void localSearch();
		void generalGroupedSearch();
		void localGroupedSearch();
		void MaxSearch();
		void MinSearch();
		void localMaxSearch();
		void localMinSearch();
		void nMaxSearch();
		void nMINearch();
				/* SELECTION */
		void indexedSelection();
		void randomSelection();
		void indexedGroupedSelection();
		void randomGroupedSelection();
			/* MUTATIVE */
				/* ADDITION */
		void insert();
		void remove();
		void groupedInsert();
		void groupedRemove();
				/* SUBSTITUTION */
		void indexedSubstitution();
		void randomSubstitution();
		void indexedGroupedSubstitution();
		void randomGroupedSubstitution();
				/* CLASSIFICATION */
		void randomSorting();
		void ascendentSorting();
		void descendentSorting();
		void localAscendentSorting();
		void localDescendentSorting();
		void indexedGroupingSorting();
		void splittedGroupingSorting();
		void joinedGroupingSorting();
			/* TRANSMUTATIVE */
				/* COMBINATORICS */
		void generalCombination();
		void localCombination();
		void indexedGroupingCombination();
		void randomGroupingCombination();
		void generalOrderedList();
		void localOrderedList();
		void indexedGroupedOrderedList();
		void randomGroupedOrderedList();
		void generalPermuation();
		void localPermutation();
		void indexedGroupedPermuation();
		void randomGroupedPermutation();
	private:
	protected:
};

#endif