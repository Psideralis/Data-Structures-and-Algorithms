/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Set.cs
Description:
********************************************* */

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */

using System;


namespace CSharp_structures
{
    class Set<T>
    {
        /* CONSTRUCTORS */
        Set(int size, T[] entry){
            this.size = size;
            this.entry = entry;
        }
        ~Set(){
            this.size = 0;
            this.entry = null;
        }
        /* ATRIBUTES */
        int size;
        T[] entry;
        /* METHODS */
        void Main(string[] args)
        {
            Console.WriteLine("Hello World!");    
        }
    }
}
