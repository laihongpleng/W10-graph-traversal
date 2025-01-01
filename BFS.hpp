#ifndef BFS_HPP
#define BFS_HPP

#include <iostream>
#include <queue>
#include <unordered_set>
#include <vector>
#include "Graph.hpp"

using namespace std;

class BFS {
public:
    static vector<int> bfsTraversal(const Graph& graph, int startNode) {
        unordered_set<int> visited;
        queue<int> toVisit;
        vector<int> result;
        toVisit.push(startNode);
        visited.insert(startNode);
        while (!toVisit.empty()) {
            int currentNode = toVisit.front();
            toVisit.pop();
            result.push_back(currentNode);
            for (const auto& neighbor : graph.getNeighbors(currentNode)) {
                if (visited.find(neighbor) == visited.end()) {
                    toVisit.push(neighbor);
                    visited.insert(neighbor);
                }
            }
        }
        return result;
    }
};

#endif
