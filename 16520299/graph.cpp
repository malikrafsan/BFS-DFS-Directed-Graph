#include <iostream>
#include <list>
#include <vector>
#include "graph.hpp"

Graph::Graph(int V) {
    this->V = V;
    adj = new std::list<int>[V];
}

Graph::~Graph() {}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::BFS(int start){
    std::vector<bool> visited(V, false);

    std::list<int> queue;

    visited[start] = true;
    queue.push_back(start);

    while(!queue.empty()) {
        start = queue.front();
        std::cout << start << " ";
        queue.pop_front();

        for (auto i = adj[start].begin(); i != adj[start].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
    std::cout << std::endl;
}

void Graph::DFS(int start) {}