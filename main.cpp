#include <iostream>
#include <vector>
#include "Graph.hpp"
#include "DFS.hpp"
#include "BFS.hpp"

using namespace std;

int main() {
    // Create the graph with 5 nodes
    Graph graph(5);  // Corrected: Changed to 5 nodes
    
    // Add nodes (using numbers)
    graph.addNode(0); // Node 0
    graph.addNode(1); // Node 1
    graph.addNode(2); // Node 2
    graph.addNode(3); // Node 3
    graph.addNode(4); // Node 4
    
    // Add edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    
    // BFS traversal (starting from node 0)
    vector<int> bfsResult = BFS::bfsTraversal(graph, 0);  // Corrected: Use static member directly
    cout << "BFS Traversal Order: ";
    for (const auto& node : bfsResult) {
        cout << node << " ";
    }
    cout << endl;
    
    // DFS traversal (starting from node 0)
    vector<int> dfsResult = DFS::dfsTraversal(graph, 0);  // Corrected: Use static member directly
    cout << "DFS Traversal Order: ";
    for (const auto& node : dfsResult) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
