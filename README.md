# Day 4 Assignment Specification

## Description
Implement BFS and DFS algorithm to traverse a directed graph. Create a program that accepts the following input:
- The first line contains an integer *N* that represents the number of nodes in the graph. The node's name will be an integer from 0 to N-1.
- The second line contains an integer *M* that represents the number of edges in the graph.
- *M* lines follow - Each line contains two integer *a* and *b* that represents a directed edge from *a* to *b*.
- The next line contains an integer that represents the starting node.
- The last line is the traversal algorithm that will be used (BFS/DFS).

The program then outputs the traversal order.

### Example
#### Example 1
Input
```
6
6
0 1
0 2
0 3
2 4
2 5
2 5
0
DFS
```
Output
```
0 1 2 4 5 3
```
#### Example 2
Input
```
6
6
0 1
0 2
0 3
2 4
2 5
2 5
2
BFS
```
Output
```
2 4 5
```

## Deliverables
1. Fork this repository into your group.
2. Create a `development` branch in the forked repository.
3. Create a folder with your NIM as the folder name and implement your changes in the folder.
4. Create a README inside the folder to explain your work and how to run it.
5. Only push your source code and markdown file. (use [gitignore](https://www.freecodecamp.org/news/gitignore-what-is-it-and-how-to-add-to-repo/))
6. Submit your work after the due date by creating a merge request (MR) to [this repository's master branch](https://gitlab.com/dagozilla/academy/2021-internship1/assignment/day-4).
7. Cite references you used in this assignment.

## Assessment Criteria
1. Correctness of the implementation.
2. Code cleanliness.
3. Documentations. (whether in the README or comments or in the implementation)
4. Git best practices.
