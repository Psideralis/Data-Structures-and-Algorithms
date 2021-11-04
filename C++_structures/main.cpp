
#include <iostream>
using namespace std;

template<typename T>   
class Set{
    public:
    Set();
    Set(std::initializer_list<T> L){
        this->size = L.size();
        this->entry = new void*[this->size];
        int i = 0;
        for(auto it = std::begin(L); it != std::end(L); ++it) {
            this->entry[i] = (void*) it;
            i += 1;
        }
    };
    template<typename ... Args>   
    Set(Args... L){
        cout << "HELLO WORLD" << endl;
    };
    ~Set(){};
    int size;
    void** entry;
};


int main(int argc, char const *argv[])
{
    void* myArray[3] = {0};
    myArray[0] = (void*)(new int(2));
    cout << *((int*)myArray[0]) << endl;

    Set<int> mySet = {1,2,'c'};
    cout << *((char*)mySet.entry[2]) << endl;

    return 0;
}
