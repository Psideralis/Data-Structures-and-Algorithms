/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: PsideralisMathAssembly.hpp
Description: Assembly DS&A
********************************************* */ 

/* *********************************************
DEFINES:
    ASSEMBLY
********************************************* */ 

#ifndef ASSEMBLY
#define ASSEMBLY

/* ******************************************************

            DATA STRUCTURES AND ALGORITHMS

****************************************************** */
/*

    ALLOCATION

*/
extern "C" int asm_gnu_alloc();
extern "C" int asm_nasm_alloc();
extern "C" int asm_masm_alloc();
/*

    NONMUTATIVE

*/
extern "C" int asm_gnu_max();
extern "C" int asm_nasm_max();
extern "C" int asm_masm_max();
/*

    MUTATIVE

*/
extern "C" int asm_gnu_sort();
extern "C" int asm_nasm_sort();
extern "C" int asm_masm_sort();
/*

    TRANSMUTATIVE

*/
extern "C" int asm_gnu_ordpair();
extern "C" int asm_nasm_ordpair();
extern "C" int asm_masm_ordpair();

#endif