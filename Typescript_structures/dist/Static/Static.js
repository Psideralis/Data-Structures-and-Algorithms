"use strict";
/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Static.ts
Description:
********************************************* */
/* *********************************************
CLASSES:

********************************************* */
Object.defineProperty(exports, "__esModule", { value: true });
exports.PSI_TS_ArrayGrid4D = exports.PSI_TS_ArrayGrid3D = exports.PSI_TS_Table = exports.PSI_TS_Multimap = exports.PSI_TS_Map = exports.PSI_TS_Dictionary = exports.PSI_TS_Queue = exports.PSI_TS_Stack = exports.PSI_TS_OrderedList = exports.PSI_TS_ArrayList = exports.PSI_TS_Tuple = exports.PSI_TS_Set = void 0;
class PSI_TS_Set {
    constructor(entry) {
        this.entry = entry;
    }
    greet() {
        console.log("Hello World!!!");
    }
    addNumbers(...nums) {
    }
}
exports.PSI_TS_Set = PSI_TS_Set;
class PSI_TS_Tuple {
    constructor(entry) {
        this.entry = [];
        this.entry = entry;
    }
}
exports.PSI_TS_Tuple = PSI_TS_Tuple;
class PSI_TS_ArrayList {
    constructor(entry) {
        this.entry = [];
        this.entry = entry;
    }
}
exports.PSI_TS_ArrayList = PSI_TS_ArrayList;
class PSI_TS_OrderedList {
    constructor(entry) {
        this.entry = [];
        this.entry = entry;
    }
}
exports.PSI_TS_OrderedList = PSI_TS_OrderedList;
class PSI_TS_Stack {
    constructor() {
    }
}
exports.PSI_TS_Stack = PSI_TS_Stack;
class PSI_TS_Queue {
    constructor() {
    }
}
exports.PSI_TS_Queue = PSI_TS_Queue;
class PSI_TS_Dictionary {
    constructor() {
    }
}
exports.PSI_TS_Dictionary = PSI_TS_Dictionary;
class PSI_TS_Map {
    constructor() {
        this.key = [];
        this.value = [];
    }
}
exports.PSI_TS_Map = PSI_TS_Map;
class PSI_TS_Multimap {
    constructor() {
        this.key = [[]];
        this.value = [[]];
    }
}
exports.PSI_TS_Multimap = PSI_TS_Multimap;
class PSI_TS_Table {
    constructor() {
    }
}
exports.PSI_TS_Table = PSI_TS_Table;
class PSI_TS_ArrayGrid3D {
    constructor() {
    }
}
exports.PSI_TS_ArrayGrid3D = PSI_TS_ArrayGrid3D;
class PSI_TS_ArrayGrid4D {
    constructor() {
    }
}
exports.PSI_TS_ArrayGrid4D = PSI_TS_ArrayGrid4D;
