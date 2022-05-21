# include "Map.hpp"
int main(int argc, char const *argv[])
{
    
    Map myMap1 {1,"1:a","3:b"};
    Map myMap2;
    int* v = new int[2,1];
    myMap2 = {2,"1:a","3:b",v};
    myMap1 = {2,"1:a","3:b",v,myMap2};
    Map myMap = new Map[3];
    myMap[myMap2];
    return 0;
}
