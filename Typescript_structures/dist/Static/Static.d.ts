import * as PSI from "../Collection";
export declare class PSI_TS_Set<T> implements PSI.PSICollection {
    entry: T[];
    constructor(entry: T[]);
    greet(): void | number;
    addNumbers(...nums: number[]): void;
}
export declare class PSI_TS_Tuple<T> implements PSI.PSICollection {
    entry: any;
    constructor(entry: []);
}
export declare class PSI_TS_ArrayList<T> implements PSI.PSICollection {
    entry: any[];
    constructor(entry: []);
}
export declare class PSI_TS_OrderedList<T> implements PSI.PSICollection {
    entry: any[];
    constructor(entry: []);
}
export declare class PSI_TS_Stack<T> implements PSI.PSICollection {
    constructor();
}
export declare class PSI_TS_Queue<T> implements PSI.PSICollection {
    constructor();
}
export declare class PSI_TS_Dictionary<T> implements PSI.PSICollection {
    term: string;
    entry: string;
    constructor();
}
export declare class PSI_TS_Map<T> implements PSI.PSICollection {
    key: any[];
    value: any[];
    constructor();
}
export declare class PSI_TS_Multimap<T> implements PSI.PSICollection {
    key: any[][];
    value: any[][];
    constructor();
}
export declare class PSI_TS_Table<T> implements PSI.PSICollection {
    entry: any[][];
    constructor();
}
export declare class PSI_TS_ArrayGrid3D<T> implements PSI.PSICollection {
    cell: any[][][];
    constructor();
}
export declare class PSI_TS_ArrayGrid4D<T> implements PSI.PSICollection {
    cell: any[][][][];
    constructor();
}
