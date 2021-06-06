#include <iostream>
#include <list>
#include "graph.hpp"

Graph::Graph(int V) {
    this->V = V;
    adj = new std::list<int>[V];
    std::cout << "TES" << std::endl;
}

Graph::~Graph() {}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::BFS(int start) {}
void Graph::DFS(int start) {}