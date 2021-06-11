#include <iostream>
#include "graph.hpp"

int main(){
    // Dictionary
    int nodes,edges,node1,node2,start,choice;
    bool allNode;
    std::string DFSorBFS;

    // ALGORITHM
    // Ask for input of number of nodes and edges
    std::cout << "> BFS / DFS Algorithm to Traverse Graph <\n" << std::endl;
    std::cout << "Input number of nodes: "; std::cin >> nodes;
    std::cout << "Input number of edges: "; std::cin >> edges;

    // Construct Graph object
    Graph graf(nodes);

    // Ask for input of edges in the graph 
    for (int i=0;i<edges;i++){
        std::cout << "Input edge " << i + 1 << ": ";
        std::cin >> node1 >> node2;
        graf.addEdge(node1,node2);
    }

    std::cout << "\n> Menu <" << std::endl;
    std::cout << "1. Traverse all nodes" << std::endl;
    std::cout << "2. Traverse nodes from a starting node" << std::endl;
    std::cout << "Input your choice: "; std::cin >> choice;

    allNode = (choice == 1) ? true : false;

    std::cout << "\n> Traverse all nodes Menu <" << std::endl;
    std::cout << "1. Use BFS" << std::endl;
    std::cout << "2. Use DFS" << std::endl;
    std::cout << "Input your choice: "; std::cin >> choice;

    if (choice == 1) {
        graf.BFS(allNode);
    } else if (choice == 2) {
        graf.DFS(allNode);
    } else {
        wrongInput();
    }
}