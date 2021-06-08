#include <iostream>
#include <list>
#include <vector>

class Graph {
    private:
        int V;
        std::list<int> *adj;  
    public:
        Graph(int V);

        void addEdge(int node1, int node2);
        void BFS(int start);
        void BFSLoop(int s,std::vector<bool> &visited);
        void DFS(int start);
        void DFSLoop(int s, std::vector<bool> &visited);
};