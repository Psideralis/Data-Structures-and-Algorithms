/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Multimap.hpp
Description: An Multimap is a not one to one 
mapping. It maps multiple keys to multiple 
values.
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




#ifndef ORDEREDLIST_HPP
#define ORDEREDLIST_HPP

#ifndef STD
#define STD
    #include "stdlib.h"
    #include "stdio.h"
    #include "string"
	#include <iostream>
    using namespace std;
#endif

template <typename T>
class OrderedList {
	public:
		/* CONSTRUCTORES */
        Multimap(){};
        ~Multimap(){};
		Multimap(const Multimap &cpy){};
		/* ATRIBUTOS */
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
		OrderedList& operator==(const OrderedList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator=(const OrderedList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator=(const OrderedList* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator+(const OrderedList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator+(const OrderedList* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator-(const OrderedList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator-(const OrderedList* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator*(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator*(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator*(const OrderedList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator*(const OrderedList* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator/(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator/(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator/(const OrderedList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		OrderedList& operator/(const OrderedList* &rhs){};
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