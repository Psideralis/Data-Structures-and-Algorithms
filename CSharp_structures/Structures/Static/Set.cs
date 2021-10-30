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
using System.Collections.Generic;

class PSISet<T> : IEnumerable<string>
{
    public int size {get; set;}
    public T[] entry;
    private List<string> internalList = new List<string>();
    public IEnumerator<string> GetEnumerator() => internalList.GetEnumerator();
    System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator() => internalList.GetEnumerator();
    /* CONSTRUCTORS */
    public PSISet(params T[] entry){
        this.size = size;
        this.entry = entry;
    }
    ~PSISet(){
        this.size = 0;
        this.entry = null;
    }
    public void Add(params T[] n)
    {
    }
    public int this[int[] n]
    {
        get{
            return 0;
        } set{
            
        }
    }
    /* ATRIBUTES */

    /* METHODS */
}
public class EXEC{
    public static void Main(string[] args)
    {
        PSISet<object> MySet1 = new PSISet<object> {2,1,3};
        PSISet<object> MySet2 = new PSISet<object> {'a',1,3};
        PSISet<object> MySet3 = new PSISet<object> {{1,2,3},1,3};
        PSISet<object> MySet4 = new PSISet<object> {'a',{1,"a"},3};
        int[] n = new int[] {1,2,3};
        int m = MySet4[n];
    }
}