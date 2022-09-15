/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: PsideralisDataStructures.hpp
Description: Psideralis Data Structures for
C++, with C and Assembly Data Structures
libraries
********************************************* */ 

/* *********************************************
INCLUDES:
    STD
MACROS:
    PSIDERALIS_CPPSTRUCTS
    PSI_NULL
STRUCTS:
    PsideralisDataStructures.h
ENUMS:
    PSI_BOOL_e
    PSI_RET_e
TYPES:
    PSI_BOOL_t
    PSI_RET_t  
    PSI_string
    PSI_chord
    byte_t
    word_t
    dword_t
    qword_t
    oword_t
    hword_t
    ptr_byte_t
    ptr_word_t
    ptr_dword_t
    ptr_qword_t
    ptr_oword_t
    ptr_hword_t
FUNCTIONS:
    AsseblyOpertives.asm
        asm_add
        asm_res
        asm_mul
        asm_div
METHODS:
	GENERAL
        charPrint
        toString
	UNMUTATIVE
        generalSearch
        localSearch
        generalGroupedSearch
        localGroupedSearch
        MaxSearch
        MinSearch
        localMaxSearch
        localMinSearch
        nMaxSearch
        nMinSearch
            SELECTION
                indexedSelection
                randomSelection
                indexedGroupedSelection
                randomGroupedSelection
	MUTATIVE
        split
        join
            ADDITION
                insert
                remove
                groupedInsert
                groupedRemove
            SUBSTITUTION
                indexedSubstitution
                randomSubstitution
                indexedGroupedSubstitution
                randomGroupedSubstitution
            CLASSIFICATION
                randomSorting
                ascendentSorting
                descendentSorting
                localAscendentSorting
                localDescendentSorting
                indexedGroupingSorting
                splittedGroupingSorting
                joinedGroupingSorting
	TRANSMUTATIVE
            COMBINATORICS
                generalCombination
                localCombination
                indexedGroupingCombination
                randomGroupingCombination
                generalOrderedList
                localOrderedList
                indexedGroupedOrderedList
                randomGroupedOrderedList
                generalPermuation
                localPermutation
                indexedGroupedPermuation
                randomGroupedPermutation
********************************************* */

#ifndef PSIDERALIS_CPPSTRUCTS
#define PSIDERALIS_CPPSTRUCTS


#ifdef PSIDERALIS_CDSA
    #include "PsideralisDataStructures.h"
#endif

#ifndef STD
#define STD
    #include <iostream>
    #include <string>
    #include <initializer_list>
    #include <stdio.h>
    #include <string>
	#include <iostream>
    #include <cstddef>
    #include <stdlib.h>
    #include <stdarg.h>
    using namespace std;
#endif

/*
#ifndef CPYTHON
#define CPYTHON
    #define PY_SSIZE_T_CLEAN
    #include <python3.7/Python.h>
    PyObject* tanh_impl(PyObject*, PyObject* o) {
        double tanh_x = 0;
        return PyFloat_FromDouble(tanh_x);
    }
    static PyMethodDef PsideralisDataStructures_methods[] = {
        { "fast_tanh", (PyCFunction)tanh_impl, METH_O, nullptr },
        { nullptr, nullptr, 0, nullptr }
    };
    static PyModuleDef PsideralisDataStructures_module = {
        PyModuleDef_HEAD_INIT,
        "PsideralisDataStructures",
        "Provides some functions, but faster",
        0,
        PsideralisDataStructures_methods
    };
    PyMODINIT_FUNC PyInit_PsideralisDataStructures() {
        return PyModule_Create(&PsideralisDataStructures_module);
    }
#endif
*/

extern "C" int asm_add(int a, int b);
extern "C" int asm_res(int a, int b);
extern "C" int asm_mul(int a, int b);
extern "C" int asm_div(int a, int b);

#define PSI_NULL ((void*)0);

typedef enum PSI_BOOL_e{
    PSI_true = 1,
    PSI_false = 0
} PSI_BOOL_t;

typedef enum PSI_RET_e{
    EOF_EXCP = 6,
    UNEXCPECTEDOUT_EXCP = 5,
    UNEXCPECTEDIN_EXCP = 4,
    SIGN_EXCP = 3,
    OVERFLOW_EXCP = 2,
    ZERODIV_EXCP = 1,
    NO_ERROR = 0,
    NULLPTR_ERROR = -1,
    CAST_ERROR = -2,
    TYPE_ERROR = -3,
    NOTINIT_ERROR = -4,
    NOTALLOC_ERROR = -5,
    NOTDEALLOC_ERROR = -6
} PSI_RET_t;

typedef char* PSI_string;
typedef PSI_string* PSI_chord;

typedef uint8_t byte_t;
typedef uint16_t word_t;
typedef uint32_t dword_t;
typedef uint64_t qword_t;
typedef uint64_t oword_t[2];
typedef oword_t hword_t[2];
typedef uint8_t* ptr_byte_t;
typedef uint16_t* ptr_word_t;
typedef uint32_t* ptr_dword_t;
typedef uint64_t* ptr_qword_t;
typedef ptr_qword_t* ptr_oword_t[2];
typedef ptr_oword_t* ptr_hword_t[2];


class PSICollection{
  	public: 
      	/* ALGORITHMS */
           /* GENERAL */
	    virtual void charPrint() = 0;
	    virtual void GPrint() = 0;
	    virtual void procGPrint() = 0;
	    virtual void memGPrint() = 0;
	    virtual void toString() = 0;
			/* NON MUTATIVE */
				/* SEARCH */
		virtual void generalSearch() = 0;
		virtual void localSearch() = 0;
		virtual void generalGroupedSearch() = 0;
		virtual void localGroupedSearch() = 0;
		virtual void maxSearch() = 0;
		virtual void minSearch() = 0;
		virtual void localMaxSearch() = 0;
		virtual void localMinSearch() = 0;
		virtual void nMaxSearch() = 0;
		virtual void nMINearch() = 0;
				/* SELECTION */
		virtual void indexedSelection() = 0;
		virtual void randomSelection() = 0;
		virtual void indexedGroupedSelection() = 0;
		virtual void randomGroupedSelection() = 0;
			/* MUTATIVE */
				/* ADDITION */
		virtual void insert() = 0;
		virtual void remove() = 0;
		virtual void groupedInsert() = 0;
		virtual void groupedRemove() = 0;
				/* SUBSTITUTION */
		virtual void indexedSubstitution() = 0;
		virtual void randomSubstitution() = 0;
		virtual void indexedGroupedSubstitution() = 0;
		virtual void randomGroupedSubstitution() = 0;
				/* CLASSIFICATION */
		virtual void randomSorting() = 0;
		virtual void ascendentSorting() = 0;
		virtual void descendentSorting() = 0;
		virtual void localAscendentSorting() = 0;
		virtual void localDescendentSorting() = 0;
		virtual void indexedGroupingSorting() = 0;
		virtual void splittedGroupingSorting() = 0;
		virtual void joinedGroupingSorting() = 0;
			/* TRANSMUTATIVE */
				/* COMBINATORICS */
		virtual void generalCombination() = 0;
		virtual void localCombination() = 0;
		virtual void indexedGroupingCombination() = 0;
		virtual void randomGroupingCombination() = 0;
		virtual void generalOrderedList() = 0;
		virtual void localOrderedList() = 0;
		virtual void indexedGroupedOrderedList() = 0;
		virtual void randomGroupedOrderedList() = 0;
		virtual void generalPermuation() = 0;
		virtual void localPermutation() = 0;
		virtual void indexedGroupedPermuation() = 0;
		virtual void randomGroupedPermutation() = 0;  
}

#include "PSI++_Collections/PSI++_Static/PSI++_PsideralisStaticStructures.hpp"
#include "PSI++_Collections/PSI++_Dynamic/PSI++_PsideralisDynamicStructures.hpp"
#include "PSI++_Collections/PSI++_Graph/PSI++_PsideralisGraphsStructures.hpp"

#endif