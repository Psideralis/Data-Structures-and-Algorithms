#include "PSI_DataStructures.h"
#include "PSI_GraphStructures.h"

int main(int argc, char const *argv[])
{
    // GRAPHS
    graph_t mygraph;
    mygraph = grapht_t_newalloc(mygraph,{"a","b","c","d"},{{"a","b"},{"c","d"}});
    grapht_t_print(mygraph);
    
    // DIGRAPHS
    digraph_t mydygraph;
    mydygraph = digraph_t_newallocmy(dygraph,{},{});
    digraph_t_print(mydygraph);
    
    // PANTOGRAPHS
    pantograph_t mypantograph;
    mypantograph = pantograph_t_newalloc(mypantograph,{},{});
    pantograph_t_print(mypantograph);
    
    // TREE
    tree_t mytree;
    mytree = tree_t_newalloc(mytree,{},{});
    pantograph_t_print(mypantograph);
    
    // BINARY TREE
    bintree_t mybintree;
    mybintree = bintree_t_newalloc(mybintree,{},{});
    pantograph_t_print(mypantograph);

    return PSI_RET_t.NO_ERROR;
}
