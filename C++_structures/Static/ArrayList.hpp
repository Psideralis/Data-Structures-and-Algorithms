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

