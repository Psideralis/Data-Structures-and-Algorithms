/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Set.hpp
Description: A set is a grouping of numeric
elements or sets. It is not natively ordered
and it have no repeated elements. 

There is an OrderedSet in Psideralis math
utilities if needed. For repeated elements
see Tuple or Set.

********************************************* */ 

/* *********************************************
DEFINES:
	SET_HPP
MACROS:

STRUCTS:
	set.h
ENUMS:

TYPES:
	Set
OPERATORS:
	+
	=
	*
	/
METHODS:
	See PSICollection
********************************************* */ 

#include "PSI++_DataStructures.hpp"
#include "Map.hpp"

class Set : public PSICollection{
	public:
		/* CONSTRUCTORS */
		Set(){};
		int intType(int i);
		double doubleType(double d);
		Set setType(Set s);
		template <typename T>
		PSI_RET_t input(T in);
		template <typename T, typename... Args>
		PSI_RET_t input(T t, Args... args_in) {
			input(in);
			input(args_in...);
		}
		template <typename T>
		Set(T in){
			input(in);
		};
		template <typename T, typename... Args>
		Set(T t, Args... args_in) {
			input(in);
			input(args_in...);
		};
		template<typename ... Args>   
		Set(Args... args_in){
			input(args_in);
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
		// GETTER
		template<class T> T get_Item(size_t pos) {}
		// SETTER
		template<typename T> PSI_RET_t set_Item(size_t pos, T Item) { }
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
		Set& operator==(const Set &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator=(const Set &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator=(const Set* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator+(const Set &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator+(const Set* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator-(const Set &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator-(const Set* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator*(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator*(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator*(const Set &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator*(const Set* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator/(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator/(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator/(const Set &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Set& operator/(const Set* &rhs){};
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
};

template<> PSI_RET_t Set::input(int i){ Set::intType(i); }
template<> PSI_RET_t Set::input(double d){ Set::doubleType(d); }
template<> PSI_RET_t Set::input(Set s){ Set::setType(s); }
template<> PSI_RET_t Set::set_Item(size_t pos, long Item) {}
template<> PSI_RET_t Set::set_Item(size_t pos, int Item) {}
template<> long Set::get_Item(size_t pos) {}
template<> std::string Set::get_Item(size_t pos) {}
		
#endif