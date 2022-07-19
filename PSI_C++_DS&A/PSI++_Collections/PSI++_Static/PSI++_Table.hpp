/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Table.hpp
Description:

********************************************* */ 

/* *********************************************
DEFINES:
	Table_HPP
MACROS:

STRUCTS:
	Table.h
ENUMS:

TYPES:
	Table
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

class Table : public PSICollection{
	public:
		/* CONSTRUCTORS */
		Table(){};
		int intType(int i);
		double doubleType(double d);
		Table TableType(Table s);
		template <typename T>
		PSI_RET_t input(T in);
		template <typename T, typename... Args>
		PSI_RET_t input(T t, Args... args_in) {
			input(in);
			input(args_in...);
		}
		template <typename T>
		Table(T in){
			input(in);
		};
		template <typename T, typename... Args>
		Table(T t, Args... args_in) {
			input(in);
			input(args_in...);
		};
		template<typename ... Args>   
		Table(Args... args_in){
			input(args_in);
		};
		~Table(){
			this->counter = 0;
			this->size = 0;
		};
		Table(const Table &cpy){
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
		// TableTER
		template<typename T> PSI_RET_t Table_Item(size_t pos, T Item) { }
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
		Table& operator==(const Table &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator=(const Table &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator=(const Table* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator+(const Table &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator+(const Table* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator-(const Table &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator-(const Table* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator*(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator*(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator*(const Table &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator*(const Table* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator/(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator/(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator/(const Table &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Table& operator/(const Table* &rhs){};
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

template<> PSI_RET_t Table::input(int i){ Table::intType(i); }
template<> PSI_RET_t Table::input(double d){ Table::doubleType(d); }
template<> PSI_RET_t Table::input(Table s){ Table::TableType(s); }
template<> PSI_RET_t Table::Table_Item(size_t pos, long Item) {}
template<> PSI_RET_t Table::Table_Item(size_t pos, int Item) {}
template<> long Table::get_Item(size_t pos) {}
template<> std::string Table::get_Item(size_t pos) {}
		
#endif