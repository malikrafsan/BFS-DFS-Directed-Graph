#include <iostream>
#include <list>

class Graph {
    private:
        int V;
        std::list<int> *adj;  
    public:
        Graph(int V);
        ~Graph();

        void addEdge(int node1, int node2);
        void BFS(int start);
        void DFS(int start);
};

void wrongInput();