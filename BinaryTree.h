#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "Node.h"

class BinaryTree {
    
    private:
        Node *root;

        void addNodePrivate(int, Node*);
        void printInOrderPrivate(Node*);
        Node* findNodePrivate(int, Node*);

    public:
        BinaryTree();
        
        Node* CreateNode(int);
        void addNode(int);
        void printInOrder();
        Node* findNode(int);
        int getRootNum();
        void printChildren(int);
};
#endif