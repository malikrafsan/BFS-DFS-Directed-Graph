# Tugas Magang Dagozilla 2021 Day 4
---
## Description
- This program was developed to complete the Dagozilla ITB Day 4 Internship assignment. This C++ program is about implementing Breadth First Search (BFS) and Depth First Search (DFS) to traverse a directed graph. Here I implement DFS using iterative method. This program accepts following input:

    * The first line contains an integer N that represents the number of nodes in the graph. The node's name will be an integer from 0 to N-1.
    * The second line contains an integer M that represents the number of edges in the graph.
    * M lines follow - Each line contains two integer a and b that represents a directed edge from a to b.
    * The next line contains an integer that represents the starting node.
    * The last line is the traversal algorithm that will be used (BFS/DFS).

- The program then outputs the traversal order from BFS / DFS algorithm.
---
## How to Run
- Clone this repository
- Change directory to this repository folder and to 16520299 folder
- Open shell (bash) terminal and use this command
    ```sh
    g++ main.cpp graph.cpp -o main
    ./main
    ```
- Enjoy the program! :D
---
## Program's Eminence
- Able to handle disconnected nodes
- Able to handle circular graph
- Using adjacency list to minimize space complexity
- Using DFS iterative algorithm to minimize space complexity
---
## Assumption
- Input edges are sorted, 0 1,0 2,0 3,1 5,1 4, will give different result from 0 1,0 2,0 3,1 4,1 5
- Node numbering starts from 0 to the (number of nodes) - 1, no node has a number outside that range
- Disconnected nodes are traversed too (0 1, 0 2, 3 3) -> (0 1 2 3)
---
## Author
- Nama    : Malik Akbar Hashemi Rafsanjani
- NIM     : 16520299
---
## References
- [Dagozilla Presentation "Algorithm"](https://docs.google.com/presentation/d/1wsXSH2iqJyrLvrC66QxuG6hBCKDt7bN2pgCzdWNOQrU/edit?ts=60b904ed#slide=id.g4dfce81f19_0_45)
- [Software Testing Help (DFS)](https://www.softwaretestinghelp.com/cpp-dfs-program-to-traverse-graph/)
- [Programiz (BFS)](https://www.programiz.com/dsa/graph-bfs)
- [Geeksforgeeks Iterative DFS](https://www.geeksforgeeks.org/iterative-depth-first-traversal/)
- [Geeksforgeeks BFS](https://www.geeksforgeeks.org/bfs-using-stl-competitive-coding/)