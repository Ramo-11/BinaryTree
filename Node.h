#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {

    friend class BinaryTree;

    private:
        int num_;
        Node* left;
        Node* right;

    public:
        Node();
        Node(int);
};
#endif