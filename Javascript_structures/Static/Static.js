/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Static.ts
Description:
********************************************* */ 
/* *********************************************
CLASSES:

********************************************* */ 

class PSI_JS_Set{
    constructor(size, set){
        this.size = size;
        this.set = set;
    }
}
class PSI_JS_Tuple{
    constructor(size, tuple){
        this.size = size;
        this.tuple =tuple;
    }
}
class PSI_JS_ArrayList{
    constructor(size, arrayList){
        this.size = size;
        this.arrayList = arrayList;
    }
}
class PSI_JS_OrderedList{
    constructor(size, orderedList){
        this.size = size;
        this.orderedList = orderedList;
    }
}
class PSI_JS_Stack{
    constructor(base, stack){
        this.base = base;
        this.stack = stack;
    }
}
class PSI_JS_Queue{
    constructor(mode, queue){
        this.mode = mode;
        this.queue = queue;
    }
}
class PSI_JS_Map{
    constructor(size, map){
        this.size = size;
        this.map = map;
    }
}
class PSI_JS_Dictionary{
    constructor(size, dictionary){
        this.size = size;
        this.dictionary = dictionary;
    }
}
class PSI_JS_Multimap{
    constructor(size, multimap){
        this.size = size;
        this.multimap = multimap;
    }
}
class PSI_JS_Table{
    constructor(rows, columns, table){
        this.rows = rows;
        this.columns = columns;
        this.table = table;
    }
}
class PSI_JS_ArrayGrid3D{
    constructor(x, y, z, arraygrid3D){
        this.x = x;
        this.y = y;
        this.z = z;
        this.arraygrid3D = arraygrid3D;
    }
}
class PSI_JS_ArrayGrid4D{
    w;
    x;
    y;
    z;
    constructor(w, x, y, z, arraygrid4D){
        this.w = w;
        this.x = x;
        this.y = y;
        this.z = z;
        this.arraygrid4D = arraygrid4D;
    }
    get setX() {
        return this.x;
    }
    set setSizes(... sizes) {
        this.w = sizes[0];
        this.x = sizes[1];
        this.y = sizes[2];
        this.z = sizes[3];
    }
}