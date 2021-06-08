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

void Graph::DFSLoop(int s, std::vector<bool> &visited) {
    std::stack<int> stack;
    stack.push(s);
 
    while (!stack.empty()) {
        s = stack.top();
        stack.pop();

        if (!visited[s]) {
            std::cout << s << " ";
            visited[s] = true;
        }
        for (auto i = adj[s].rbegin(); i != adj[s].rend(); ++i){
            if (!visited[*i]) {
                stack.push(*i);
            }
        }
    }
}

void Graph::DFS(int start) {
    std::vector<bool> visited(V, false);

    DFSLoop(start,visited);
    for (int i = 0; i < V; i++)
        if (!visited[i])
            DFSLoop(i, visited);
    std::cout << std::endl;
}

void Graph::BFSLoop(int s, std::vector<bool> &visited) {
    std::list<int> queue;
   
    visited[s] = true;
    queue.push_back(s);

    std::list<int>::iterator i;
    while(!queue.empty()) {
        s = queue.front();
        std::cout << s << " ";
        queue.pop_front();

        for (i = adj[s].begin(); i != adj[s].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

void Graph::BFS(int start) {
    std::vector<bool> visited(V, false);

    BFSLoop(start,visited);
    for (int s=0; s<V; s++)
        if (!visited[s])
            BFSLoop(s, visited);
    std::cout << std::endl;
}

void wrongInput() {
    std::cout << "Your input is invalid" << std::endl;
}