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



export class PSI_Set<T> implements PSI.ICollection{
    public entry:T[];
    constructor(entry:T[]){
        this.entry= entry;
    }
    generalSearch(){};
    localSearch(){};
    max(){};
    min(){};
    localMin(){};
    localMax(){};
    getItem(){};
    setItem(){};
    addItem(){};
    removeItem(){};
    ascendentOrder(){};
    descendentOrder(){};
}


export class PSI_List implements PSI.ICollection{
    public entry = [];
    constructor(entry:[]){
        this.entry= entry;
    }
    generalSearch(){};
    localSearch(){};
    max(){};
    min(){};
    localMin(){};
    localMax(){};
    getItem(){};
    setItem(){};
    addItem(){};
    removeItem(){};
    ascendentOrder(){};
    descendentOrder(){};
}

export class PSI_Stack implements PSI.ICollection{
    constructor(){
    }
    pop(){};
    push(){};
    generalSearch(){};
    localSearch(){};
    max(){};
    min(){};
    localMin(){};
    localMax(){};
    getItem(){};
    setItem(){};
    addItem(){};
    removeItem(){};
    ascendentOrder(){};
    descendentOrder(){};
}

export class PSI_Queue implements PSI.ICollection{   
    constructor(){
    }
    generalSearch(){};
    localSearch(){};
    max(){};
    min(){};
    localMin(){};
    localMax(){};
    getItem(){};
    setItem(){};
    addItem(){};
    removeItem(){};
    ascendentOrder(){};
    descendentOrder(){};
}

export class PSI_Dictionary implements PSI.ICollection{
    public term:string;
    public entry:string;
    constructor(){
    }
    generalSearch(){};
    localSearch(){};
    max(){};
    min(){};
    localMin(){};
    localMax(){};
    getItem(){};
    setItem(){};
    addItem(){};
    removeItem(){};
    ascendentOrder(){};
    descendentOrder(){};
}

export class PSI_Map implements PSI.ICollection{
    public key = [];
    public value = [];
    constructor(){
    }
    generalSearch(){};
    localSearch(){};
    max(){};
    min(){};
    localMin(){};
    localMax(){};
    getItem(){};
    setItem(){};
    addItem(){};
    removeItem(){};
    ascendentOrder(){};
    descendentOrder(){};
}

export class PSI_Multimap implements PSI.ICollection{
    public key = [[]];
    public value = [[]];
    constructor(){
    }
    generalSearch(){};
    localSearch(){};
    max(){};
    min(){};
    localMin(){};
    localMax(){};
    getItem(){};
    setItem(){};
    addItem(){};
    removeItem(){};
    ascendentOrder(){};
    descendentOrder(){};
}

export class PSI_Table implements PSI.ICollection{
    public entry:any[][];
    constructor(){
    }
    generalSearch(){};
    localSearch(){};
    max(){};
    min(){};
    localMin(){};
    localMax(){};
    getItem(){};
    setItem(){};
    addItem(){};
    removeItem(){};
    ascendentOrder(){};
    descendentOrder(){};
}

export class PSI_TriDimArrayGrid implements PSI.ICollection{
    public cell:any[][][];
    constructor(){
    }
    generalSearch(){};
    localSearch(){};
    max(){};
    min(){};
    localMin(){};
    localMax(){};
    getItem(){};
    setItem(){};
    addItem(){};
    removeItem(){};
    ascendentOrder(){};
    descendentOrder(){};
}

export class PSI_TetraDimArrayGrid implements PSI.ICollection{
    public cell:any[][][][];
    constructor(){
    }
    generalSearch(){};
    localSearch(){};
    max(){};
    min(){};
    localMin(){};
    localMax(){};
    getItem(){};
    setItem(){};
    addItem(){};
    removeItem(){};
    ascendentOrder(){};
    descendentOrder(){};
}