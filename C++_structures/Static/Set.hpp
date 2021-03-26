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
	SET_HPP
	STD
MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:
	Set<T>
********************************************* */ 

#ifndef SET_HPP
#define SET_HPP

#include "Map.hpp"

#ifndef STD
#define STD
    #include "stdlib.h"
    #include "stdio.h"
    #include "string"
	#include <iostream>
    using namespace std;
#endif

class Set {
	public:
		/* CONSTRUCTORS */
		Set(){};
		int intType(int i){

		}
		double doubleType(double d){

		}
		Set setType(Set s){
		}
		template <typename T>
		void push(T t) {}
		template <typename T, typename... Args>
		void push(T t, Args... args) {
			push(t);
			push(args...);
		}
		template <typename T>
		Set(T t){
			push(t); 
		};
		template <typename T, typename... Args>
		Set(T t, Args... args) {
			push(t);
			push(args...);
		};
		template<typename ... Args>   
		Set(Args... args){
			push(args);
		};
		~Set(){
			this->counter = 0;
			this->size = 0;
		};
		Set(const Set &cpy){
			this->counter = counter;
			this->entry = cpy.entry;
			this->size = cpy.size;
		};
		/* ATTRIBUTES */
		Map entry;
		int size;
		int counter;
		/* METHODS */
		template <>
		void push(int i){ intType(i); }
		void push(double d){ doubleType(d); }
		void push(Set s){ setType(s); }
		// GETTER
		template<class T>
		T get_Item(size_t pos) {}
		template<>	long get_Item(size_t pos) { return (integer.count(pos) != 0) ? integer[pos].to_long() : _NULL; }
		template<>	std::string get_Item(size_t pos) { return (string.count(pos) != 0) ? string[pos].to_string() : "-1"; }
		// SETTER
		template<typename T>
		void set_Item(size_t pos, T Item) { }
		template<> 	void set_Item(size_t pos, long Item) { integer.at(pos) = Item; }
		template<> 	void set_Item(size_t pos, int Item) { integer.at(pos) = Item; }
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
		/* ALGORITHMS */
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