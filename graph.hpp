#include <iostream>
#include <list>
#include <vector>

class Graph {
    private:
        // ATTRIBUTES
        int V; // Number of nodes
        std::list<int> *adj; // Adjacency list
    public:
        // CONSTUCTOR
        Graph(int V);
        // I.S. V is defined
        // F.S. Graph object with V number of nodes has been constructed

        // METHODS
        void addEdge(int node1, int node2);
        // I.S. graph object, v and w are defined
        // F.S. w is added to v's adjacency list

        void BFS(bool allNode);
        // I.S. graph object and start are defined
        // F.S. every node in the graph has been traversed using BFS method

        void BFSLoop(int s,std::vector<bool> &visited);
        // I.S. graph object, s, and visited has been defined
        // F.S. every node that connected to s has been traversed using BFS method

        void DFS(bool allNode);
        // I.S. graph object and start are defined
        // F.S. every node in the graph has been traversed using DFS method

        void DFSLoop(int s, std::vector<bool> &visited);
        // I.S. graph object, s and visited are defined
        // F.S. every node that connected to s has been traversed using DFS method
};

void wrongInput();
// I.S. any states
// F.S. invalid input warning message is displayed on the screen