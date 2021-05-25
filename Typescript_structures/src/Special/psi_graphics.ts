/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Static.ts
Description:
********************************************* */ 
/* *********************************************
CLASSES:

********************************************* */ 

export class PSI_Point2D{
    constructor(){
        
    }
    public x:number;
    public y:number;
}

export class PSI_Point3D{
    public x:number;
    public y:number;
    public z:number;
}

export class PSI_Point4D{
    public x:number;
    public y:number;
    public z:number;
    public t:number;
}

export class PSI_Component<T>{
    public position2D:PSI_Point2D;
    public position3D:PSI_Point3D;
    public position4D:PSI_Point4D;
    public widht:number;
    public height:number;
}