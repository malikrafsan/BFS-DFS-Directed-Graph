#include <iostream>

int main(){
    int nodes,edges,node1,node2,start;
    std::string DFSorBFS;

    std::cin >> nodes;
    std::cin >> edges;

    for (int i=0;i<edges;i++){
        std::cin >> node1 >> node2;
        //addEdge(node1,node2);
    }

    std::cin >> start;
    std::cin >> DFSorBFS;
    if (DFSorBFS == "DFS"){
        //DFS(start)
    } else if (DFSorBFS == "BFS") {
        //BFS(start)
    } else {
        //wrongInput();
    }
}