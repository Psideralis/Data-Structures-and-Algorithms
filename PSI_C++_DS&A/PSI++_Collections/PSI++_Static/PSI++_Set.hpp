/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: PSI_Set.hpp
Description: A PSI_Set is a grouping of numeric
elements or PSI_Sets. It is not natively ordered
and it have no repeated elements. 

There is an OrderedPSI_Set in Psideralis math
utilities if needed. For repeated elements
see Tuple or PSI_Set.

********************************************* */ 

/* *********************************************
DEFINES:
    PSI_DataStructures
MACROS:
    CSTD
	PSI_PSI_Set_HPP
CLASSES:
    PSI_PSI_Set
OPERATORS:
	[]
	==
	=
	+
	-
	*
	/
METHODS:
    AUXILIARY

    BASICS

    MISCELANEOUS

    ALGORITHMS
        INMUTATIVE:
            find
            max,min
            sup,inf
            at
            random
        MUTATIVE:
            add
            remove
            exchange
            substitute
            sortDescendent
            sortAscendent
            sortRandom
        TRANSMUTATIVE:
            join
            split
            combinations
            permutations
            ordered lists
********************************************* */ 

#include "PSI++_Map.hpp"

class PSI_Set : public PSICollection{
	public:
		/* CONSTRUCTORS */
		PSI_Set(){};
		int intType(int i);
		double doubleType(double d);
		PSI_Set PSI_SetType(PSI_Set s);
		template <typename T>
		PSI_RET_t input(T in);
		template <typename T, typename... Args>
		PSI_RET_t input(T t, Args... args_in) {
			input(in);
			input(args_in...);
		}
		template <typename T>
		PSI_Set(T in){
			input(in);
		};
		template <typename T, typename... Args>
		PSI_Set(T t, Args... args_in) {
			input(in);
			input(args_in...);
		};
		template<typename ... Args>   
		PSI_Set(Args... args_in){
			input(args_in);
		};
		~PSI_Set(){
			this->counter = 0;
			this->size = 0;
		};
		PSI_Set(const PSI_Set &cpy){
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
		// PSI_SetTER
		template<typename T> PSI_RET_t PSI_Set_Item(size_t pos, T Item) { }
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
		PSI_Set& operator==(const PSI_Set &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator=(const PSI_Set &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator=(const PSI_Set* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator+(const PSI_Set &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator+(const PSI_Set* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator-(const PSI_Set &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator-(const PSI_Set* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator*(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator*(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator*(const PSI_Set &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator*(const PSI_Set* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator/(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator/(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator/(const PSI_Set &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_Set& operator/(const PSI_Set* &rhs){};
		/* ALGORITHMS */
		/* NON MUTATIVE */
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t find();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t max();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t min();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t sup();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t inf();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t at();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t random();
		/* MUTATIVE */
		PSI_RET_t add();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t remove();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t exchange();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t substitute();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t sortDescendent();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t sortAscendent();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t sortRandom();
		/* TRANSMUTATIVE */
		PSI_RET_t join();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t split();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t combinations();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t permutations();
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		PSI_RET_t orderedLists();
	private:
};

template<> PSI_RET_t PSI_Set::input(int i){ PSI_Set::intType(i); }
template<> PSI_RET_t PSI_Set::input(double d){ PSI_Set::doubleType(d); }
template<> PSI_RET_t PSI_Set::input(PSI_Set s){ PSI_Set::PSI_SetType(s); }
template<> PSI_RET_t PSI_Set::PSI_Set_Item(size_t pos, long Item) {}
template<> PSI_RET_t PSI_Set::PSI_Set_Item(size_t pos, int Item) {}
template<> long PSI_Set::get_Item(size_t pos) {}
template<> std::string PSI_Set::get_Item(size_t pos) {}
		
#endif

/*
int main(int argc, char const *argv[])
{
    PSI_PSI_Set myPSI_Set = new PSI_PSI_Set({0,1,2,3,4,5,6,7,8,9});
	myPSI_Set.add();
	myPSI_Set.remove();
	//
	//
	//
	//	
	delete myPSI_Set;

	PSI_PSI_Set myPSI_Set = new PSI_PSI_Set({0,0.5,1,1.5,2,2.5});
	myPSI_Set.add();
	myPSI_Set.remove();
	//
	//
	//
	//
	delete myPSI_Set;
	
	PSI_PSI_Set myPSI_Set = new PSI_PSI_Set({0,0},{0,1},{1,0},{1,1});
	myPSI_Set.add();
	myPSI_Set.remove();
	PSI_PSI_Set* myPerms = myPSI_Set.permutations();
	//
	//
	//
	//
	delete myPSI_Set;
	return 0;
}
*/