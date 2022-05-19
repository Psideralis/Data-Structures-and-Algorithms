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
		PSI_RET_t pop();
		PSI_RET_t push();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Element& operator[](const int index){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator==(const Stack &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator=(const Stack &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator=(const Stack* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator+(const Stack &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator+(const Stack* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator-(const Stack &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator-(const Stack* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator*(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator*(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator*(const Stack &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator*(const Stack* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator/(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator/(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator/(const Stack &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Stack& operator/(const Stack* &rhs){};
		/* ALGORITHMS */
			/* NON MUTATIVE */
				/* SEARCH */
		PSI_RET_t generalSearch();
		PSI_RET_t localSearch();
		PSI_RET_t generalGroupedSearch();
		PSI_RET_t localGroupedSearch();
		PSI_RET_t MaxSearch();
		PSI_RET_t MinSearch();
		PSI_RET_t localMaxSearch();
		PSI_RET_t localMinSearch();
		PSI_RET_t nMaxSearch();
		PSI_RET_t nMINearch();
				/* SELECTION */
		PSI_RET_t indexedSelection();
		PSI_RET_t randomSelection();
		PSI_RET_t indexedGroupedSelection();
		PSI_RET_t randomGroupedSelection();
			/* MUTATIVE */
				/* ADDITION */
		PSI_RET_t insert();
		PSI_RET_t remove();
		PSI_RET_t groupedInsert();
		PSI_RET_t groupedRemove();
				/* SUBSTITUTION */
		PSI_RET_t indexedSubstitution();
		PSI_RET_t randomSubstitution();
		PSI_RET_t indexedGroupedSubstitution();
		PSI_RET_t randomGroupedSubstitution();
				/* CLASSIFICATION */
		PSI_RET_t randomSorting();
		PSI_RET_t ascendentSorting();
		PSI_RET_t descendentSorting();
		PSI_RET_t localAscendentSorting();
		PSI_RET_t localDescendentSorting();
		PSI_RET_t indexedGroupingSorting();
		PSI_RET_t splittedGroupingSorting();
		PSI_RET_t joinedGroupingSorting();
			/* TRANSMUTATIVE */
				/* COMBINATORICS */
		PSI_RET_t generalCombination();
		PSI_RET_t localCombination();
		PSI_RET_t indexedGroupingCombination();
		PSI_RET_t randomGroupingCombination();
		PSI_RET_t generalOrderedList();
		PSI_RET_t localOrderedList();
		PSI_RET_t indexedGroupedOrderedList();
		PSI_RET_t randomGroupedOrderedList();
		PSI_RET_t generalPermuation();
		PSI_RET_t localPermutation();
		PSI_RET_t indexedGroupedPermuation();
		PSI_RET_t randomGroupedPermutation();
	private:
	protected:
};

#endif