#ifndef NODE_HPP
#define NODE_HPP
struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};
#endif 