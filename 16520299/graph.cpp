#include <iostream>
#include <list>
#include <vector>
#include <stack>
#include "graph.hpp"

// Graph constuctor
Graph::Graph(int V) {
    // I.S. V is defined
    // F.S. Graph object with V number of nodes has been constructed

    // ALGORITHM
    this->V = V; // Number of nodes
    adj = new std::list<int>[V]; // Adjacency list
}

void Graph::addEdge(int v, int w) {
    // I.S. graph object, v and w are defined
    // F.S. w is added to v's adjacency list

    // ALGORITHM
    adj[v].push_back(w);
}

void Graph::DFSLoop(int s, std::vector<bool> &visited) {
    // I.S. graph object, s and visited are defined
    // F.S. every node that connected to s has been traversed using DFS method
    
    // DICTIONARY
    std::stack<int> stack;
    
    // ALGORITHM
    // Add starting node (s) to stack
    stack.push(s);

    // Loop until every node that connected to s has been traversed
    while (!stack.empty()) {
        // Take node in the top of stack and delete it from stack
        s = stack.top();
        stack.pop();

        // Check whether s node has been visited
        if (!visited[s]) {
            // Display s node to the screen
            std::cout << s << " ";
            visited[s] = true;
        }
        // Add nodes that connected to s node that hasn't visited to the stack
        for (auto i = adj[s].rbegin(); i != adj[s].rend(); ++i){
            if (!visited[*i]) {
                stack.push(*i);
            }
        }
    }
}

void Graph::DFS(int start) {
    // I.S. graph object and start are defined
    // F.S. every node in the graph has been traversed using DFS method

    // DICTIONARY
    std::vector<bool> visited(V, false);

    // ALGORITHM
    // Traverse graph from starting node first
    DFSLoop(start,visited);

    // Check whether every node has been traversed
    for (int s = 0; s < V; s++) {
        if (!visited[s]){
            // Traverse graph start from node that hasn't been traversed 
            DFSLoop(s, visited);
        }
    }
    std::cout << std::endl;
}

void Graph::BFSLoop(int s, std::vector<bool> &visited) {
    // I.S. graph object, s, and visited has been defined
    // F.S. every node that connected to s has been traversed using BFS method

    // DICTIONARY
    std::list<int> queue;
    std::list<int>::iterator i;

    // ALGORITHM
    // mark s node has been visited and add it to the queue
    visited[s] = true;
    queue.push_back(s);

    // Loop until every node that connected to s has been traversed
    while(!queue.empty()) {
        // Take node in the front of queue and delete it from queue
        s = queue.front();
        queue.pop_front();
        
        // Display s node to the screen
        std::cout << s << " ";

        // Add nodes that connected to s node that hasn't visited to the queue
        for (i = adj[s].begin(); i != adj[s].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

void Graph::BFS(int start) {
    // I.S. graph object and start are defined
    // F.S. every node in the graph has been traversed using BFS method

    // DICTIONARY
    std::vector<bool> visited(V, false);

    // ALGORITHM
    // Traverse graph from starting node first
    BFSLoop(start,visited);
    for (int s=0; s<V; s++) {
        if (!visited[s]){
            // Traverse graph start from node that hasn't been traversed
            BFSLoop(s, visited);
        }
    }
    std::cout << std::endl;
}