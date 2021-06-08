#include <iostream>
#include <list>
#include <vector>

class Graph {
    private:
        // Attributes
        int V;
        std::list<int> *adj;  
    public:
        // Constuctor
        Graph(int V);

        // Methods
        void addEdge(int node1, int node2);
        void BFS(int start);
        void BFSLoop(int s,std::vector<bool> &visited);
        void DFS(int start);
        void DFSLoop(int s, std::vector<bool> &visited);
};