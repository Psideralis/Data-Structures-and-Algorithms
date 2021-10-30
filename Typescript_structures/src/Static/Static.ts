/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Static.ts
Description:
********************************************* */ 
/* *********************************************
CLASSES:

********************************************* */ 

import * as PSI from "../Collection";

export class PSI_TS_Set<T> implements PSI.PSICollection{
    public entry:T[];
    constructor(entry:T[]){
        this.entry= entry;
    }
    greet():void|number { 
        console.log("Hello World!!!") 
    }
    addNumbers(...nums:number[]) { 

    }
}
export class PSI_TS_Tuple<T> implements PSI.PSICollection{
    public entry:any = [];
    constructor(entry:[]){
        this.entry= entry;
    }
}
export class PSI_TS_ArrayList<T> implements PSI.PSICollection{
    public entry = [];
    constructor(entry:[]){
        this.entry= entry;
    }
}
export class PSI_TS_OrderedList<T> implements PSI.PSICollection{
    public entry = [];
    constructor(entry:[]){
        this.entry= entry;
    }
}
export class PSI_TS_Stack<T> implements PSI.PSICollection{
    constructor(){
    }
}
export class PSI_TS_Queue<T> implements PSI.PSICollection{   
    constructor(){
    }
}
export class PSI_TS_Dictionary<T> implements PSI.PSICollection{
    public term:string;
    public entry:string;
    constructor(){
    }
}
export class PSI_TS_Map<T> implements PSI.PSICollection{
    public key = [];
    public value = [];
    constructor(){
    }

}
export class PSI_TS_Multimap<T> implements PSI.PSICollection{
    public key = [[]];
    public value = [[]];
    constructor(){
    }
}
export class PSI_TS_Table<T> implements PSI.PSICollection{
    public entry:any[][];
    constructor(){
    }
}
export class PSI_TS_ArrayGrid3D<T> implements PSI.PSICollection{
    public cell:any[][][];
    constructor(){
    }
}
export class PSI_TS_ArrayGrid4D<T> implements PSI.PSICollection{
    public cell:any[][][][];
    constructor(){
    }
}