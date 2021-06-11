#include <iostream>
#include "graph.hpp"

int main(){
    // Dictionary
    int nodes,edges,node1,node2,start;
    std::string DFSorBFS;

    // ALGORITHM
    // Ask for input of number of nodes and edges
    std::cin >> nodes;
    std::cin >> edges;

    // Construct Graph object
    Graph graf(nodes);

    // Ask for input of edges in the graph 
    for (int i=0;i<edges;i++){
        std::cin >> node1 >> node2;
        graf.addEdge(node1,node2);
    }

    // Ask for input of starting node
    std::cin >> start;

    // Ask for traversal algorithm that will be used (DFS/BFS)
    std::cin >> DFSorBFS;
    
    if (DFSorBFS == "DFS"){
        graf.DFS(start);
    } else if (DFSorBFS == "BFS") {
        graf.BFS(start);
    }
}