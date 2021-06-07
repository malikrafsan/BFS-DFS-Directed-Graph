#include <iostream>
#include <list>
#include <vector>
#include <stack>
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
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++){
        visited[i] = false;
    }

    std::list<int> queue;

    visited[start] = true;
    queue.push_back(start);

    std::list<int>::iterator i;
    while(!queue.empty()) {
        start = queue.front();
        std::cout << start << " ";
        queue.pop_front();

        for (i = adj[start].begin(); i != adj[start].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
    std::cout << std::endl;
}

void Graph::DFS(int start) {
    std::vector<bool> visited(V, false);
 
    std::stack<int> stack;
    stack.push(start);
 
    while (!stack.empty()) {
        start = stack.top();
        stack.pop();
        if (!visited[start])
        {
            std::cout << start << " ";
            visited[start] = true;
        }
        for (auto i = adj[start].begin(); i != adj[start].end(); ++i)
            if (!visited[*i])
                stack.push(*i);
    }
    std::cout<<std::endl;
}