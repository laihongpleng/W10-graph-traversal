#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <unordered_map>
#include <algorithm>
#include "Node.hpp"

using namespace std;

class Graph {
public:
    Graph(int nodesCount) {
        adjacencyList.resize(nodesCount, nullptr);
    }

    void addNode(int nodeValue) {
        nodeValues.push_back(nodeValue);
    }

    void addEdge(int source, int destination) {
        Node* newNode = new Node(destination);
        int sourceIndex = distance(nodeValues.begin(),
                                   find(nodeValues.begin(), nodeValues.end(), source));
        newNode->next = adjacencyList[sourceIndex];
        adjacencyList[sourceIndex] = newNode;
    }

    vector<int> getNeighbors(int node) const {
        vector<int> neighbors;
        int nodeIndex = distance(nodeValues.begin(),
                                 find(nodeValues.begin(), nodeValues.end(), node));
        Node* current = adjacencyList[nodeIndex];
        while (current) {
            neighbors.push_back(current->data);
            current = current->next;
        }
        sort(neighbors.begin(), neighbors.end());
        return neighbors;
    }

private:
    vector<Node*> adjacencyList;
    vector<int> nodeValues;
};

#endif
