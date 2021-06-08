#include <iostream>
#include "graph.hpp"

int main(){
    int nodes,edges,node1,node2,start;
    std::string DFSorBFS;

    std::cin >> nodes;
    std::cin >> edges;

    Graph graf(nodes);
    for (int i=0;i<edges;i++){
        std::cin >> node1 >> node2;
        graf.addEdge(node1,node2);
    }

    std::cin >> start;
    std::cin >> DFSorBFS;
    if (DFSorBFS == "DFS"){
        graf.DFS(start);
    } else if (DFSorBFS == "BFS") {
        graf.BFS(start);
    }
}