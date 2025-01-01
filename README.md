Graph Traversal Using DFS and BFS

Introduction

This project demonstrates two key graph traversal algorithms:

Depth-First Search (DFS): Explores as far as possible along each branch before backtracking.

Breadth-First Search (BFS): Explores all nodes at the current depth level before moving to the next level.

Graph Representation

Nodes are integers starting from 0.

The graph uses an adjacency list to store neighbors for each node.

Traversal Methods

DFS: Starts from a given node and visits nodes deeply before backtracking. Outputs nodes in the visited order.

BFS: Starts from a given node and visits all neighbors level by level. Outputs nodes in the visited order.
1.Graph Creation
The code first creates a graph with 5 nodes. A graph is created using the Graph class, and it has the following nodes: 0, 1, 2, 3, 4.
2.Adding Nodes and Edges
Nodes are added using graph.addNode(node) where each node is added individually (0 through 4).
Edges are then added between the nodes to connect them:
Edge between 0 and 1
Edge between 0 and 2
Edge between 1 and 3
Edge between 1 and 4
The graph will look like this:
markdown
    0
   / \
  1   2
   / \
  3   4
Example Graph
The code prints the traversal results in the order they were visited:
BFS Traversal Order: 0 1 2 3 4
DFS Traversal Order: 0 1 3 4 2