/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.hpp
Description: An Arraylist is an implementation
of a List by means of an array. It is 
specialized for mixed typed elements. It is
no ordered, for ordered elements see:
OrderedList.
********************************************* */ 

/* *********************************************
DEFINES:
	ARRAYLITS?HPP
	STD
MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:
	ArrayList
********************************************* */ 

#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP

#include "Element.hpp"

#ifndef STD
#define STD
    #include "stdlib.h"
    #include "stdio.h"
    #include "string"
	#include <iostream>
    using namespace std;
#endif

class ArrayList {
	public:
		/* CONSTRUCTORS */
		ArrayList(){
			int size;
			cout << "Ingrese la dimension del arreglo: ";
			cin >> size;
			this->size = size;
			this->entry = new Element[this->size];
			for (int i = 0; i < this->size; i++){
				cout << "Ingrese el valor de indice " << i << ": ";
				cin >> this->entry->item;
			}
		};
		ArrayList(int size, bool zero){
			this->size = size;
			this->entry = new Element[this->size];
			for (int i = 0; i < this->size; i++){
				if(zero == 0){
					this->entry[i].item = NULL;
				}else{
					cout << "Ingrese el valor de indice " << i << ": ";
					cin >> this->entry[i].item;
				}
			}
		};
		~ArrayList(){
			for (int i = 0; i < this->size; i++){
					this->entry[i].item = NULL;
			}
			this->entry = NULL;
			this->size = 0;
		};
		ArrayList(const ArrayList &cpy){
			this->size = cpy.size;
			this->entry = new Element[this->size];
			for (int i = 0 ; i < this->size ; i ++){
				this->entry[i].item = cpy.entry[i].item;
			}
		};
		/* ATTRIBUTES */
		Element* entry;
		int size;
		/* METHODS */
			/* OPERATORS */	
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
		ArrayList& operator==(const ArrayList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator=(const ArrayList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator=(const ArrayList* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator+(const ArrayList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator+(const ArrayList* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator-(const ArrayList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator-(const ArrayList* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator*(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator*(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator*(const ArrayList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator*(const ArrayList* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator/(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator/(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator/(const ArrayList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator/(const ArrayList* &rhs){};
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

