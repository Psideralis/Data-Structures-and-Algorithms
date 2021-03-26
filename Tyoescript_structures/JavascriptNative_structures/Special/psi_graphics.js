class PSI_Point2D{
    constructor(x, y){
        this.x = x;
        this.y = y;
    }
    get x() {
        return this.x;
    }
    set x() {
        this.x;
    }
    get y() {
        return this.y;
    }
    set y() {
        this.y;
    }
}

class PSI_Point3D{
    constructor(x, y, z){
        this.x = x;
        this.y = y;
        this.z = z;
    } 
    get x() {
        return this.x;
    }
    set x() {
        this.x;
    }
    get y() {
        return this.y;
    }
    set y() {
        this.y;
    }
    get z() {
        return this.z;
    }
    set z() {
        this.z;
    }
}

class PSI_Point4D{
    constructor(x, y, z, t){
        this.x = x;
        this.y = y;
        this.z = z;
        this.t = t;
    }
    get x() {
        return this.x;
    }
    set x() {
        this.x;
    }
    get y() {
        return this.y;
    }
    set y() {
        this.y;
    }
    get z() {
        return this.z;
    }
    set z() {
        this.z;
    }
    get t() {
        return this.t;
    }
    set t() {
        this.t;
    }
}

class PSI_RGBColor{
    constructor(R, G, B, A){
        this.R = R;
        this.G = G;
        this.B = B;
        this.A = A; 
    }
}

class PSI_Component{
    constructor(position2D, position3D, position4D, widht, height){
        this.position2D = position2D;
        this.position3D = position3D;
        this.position4D = position4D;
        this.widht = widht;
        this.height = height;
    }
}