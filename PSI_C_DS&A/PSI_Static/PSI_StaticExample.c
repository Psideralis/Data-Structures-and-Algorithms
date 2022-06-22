#include "PSI_DataStructures.h"
#include "PSI_StaticStuctures.h"

int main(int argc, char const *argv[])
{
    // SET
    set_t myset;
    myset = set_t_newalloc(myset,{});
    set_t_print(myset);
    
    // TUPLE
    tuple_t mytuple;
    mytuple = tuple_t_newallocmy(mytuple,{});
    tuple_t_print(mytuple);
    
    // ARRAYLIST
    arrayList_t myarraylist;
    myarraylist = arrayList_t_newalloc(myarraylist,{});
    arrayList_t_print(myarraylist);

    return PSI_RET_t.NO_ERROR;
}