#include <iostream>
#include <list>
#include <vector>
#include <stack>
#include "graph.hpp"

// Graph constuctor
Graph::Graph(int V) {
    // ALGORITHM
    this->V = V; // Number of nodes
    adj = new std::list<int>[V]; // Adjacency list
}

void Graph::addEdge(int v, int w) {
    // ALGORITHM
    adj[v].push_back(w);
}

void Graph::BFS(bool allNode) {
    // DICTIONARY
    std::vector<bool> visited(V, false);

    // ALGORITHM
    // Traverse all nodes
    if (allNode) {
        for (int s=0; s<V; s++) {
            if (!visited[s]){
                // Traverse graph start from node that hasn't been traversed
                BFSLoop(s, visited);
            }
        }
    } // Traverse nodes from a starting node 
    else {
        int start;
        std::cout << "Input starting node: "; std::cin >> start;
        BFSLoop(start,visited);
    }
    std::cout << std::endl;
}

void Graph::BFSLoop(int s, std::vector<bool> &visited) {
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

        // Add nodes that connected to s node that hasn't been visited to the queue
        for (i = adj[s].begin(); i != adj[s].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

void Graph::DFS(bool allNode) {
    // DICTIONARY
    std::vector<bool> visited(V, false);

    // ALGORITHM
    // Traverse all nodes case
    if (allNode) {
        for (int s = 0; s < V; s++) {
            if (!visited[s]){
                // Traverse graph start from node that hasn't been traversed 
                DFSLoop(s, visited);
            }
        }
    } // Traverse nodes from a starting node case 
    else {
        int start;
        std::cout << "Input starting node: "; std::cin >> start;
        DFSLoop(start,visited);      
    }
    std::cout << std::endl;
}

void Graph::DFSLoop(int s, std::vector<bool> &visited) {
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

void wrongInput() {
    std::cout << "Your input is invalid" << std::endl;
}