#include "BinaryTree.h"

BinaryTree::BinaryTree()
{
    root = nullptr;
}

Node* BinaryTree::CreateNode(int num_)
{
    Node *newNode = new Node();

    newNode->num_ = num_;
    newNode->left = nullptr;
    newNode->right = nullptr;

    return newNode;
}

void BinaryTree::addNode(int num_)
{
    addNodePrivate(num_, root);
}

void BinaryTree::addNodePrivate(int num_, Node *pointer)
{   
    //Check if root exist and create one if it doesn't
    if(root == nullptr)
    {
        root = CreateNode(num_);
    }
    //Check whether to put the number on the left of node or the right of node
    else if(num_ < pointer->num_)
    {
        if(pointer->left != nullptr)
        {
            addNodePrivate(num_, pointer->left);    //Use recursive to find the most left node
        }
        else 
        {
            pointer->left = CreateNode(num_);
        }
    }
    else if(num_ > pointer->num_)
    {
        if(pointer->right != nullptr)
        {
            addNodePrivate(num_, pointer->right);
        }
        else 
        {
            pointer->right = CreateNode(num_);
        }
    }
    else 
        std::cout << "Error: The node already exist\n";
}

void BinaryTree::printInOrder()
{
    printInOrderPrivate(root);
}

void BinaryTree::printInOrderPrivate(Node *pointer)
{
    if(root != nullptr)
    {
        //Go to the left if possible and print
        if(pointer->left != nullptr)
        {
            printInOrderPrivate(pointer->left);
        }
        std::cout << pointer->num_ << " ";
        if(pointer->right != nullptr)
        {
            printInOrderPrivate(pointer->right);
        }
    }
    else    
        std::cout << "Error: Tree is empty\n";
}

Node* BinaryTree::findNode(int num_)
{
    return findNodePrivate(num_, root);
}

Node* BinaryTree::findNodePrivate(int num_, Node *pointer)
{
    if(pointer != nullptr)
    {
        if(pointer->num_ == num_)
            return pointer;
        else 
        {
            if(num_ < pointer->num_)
                return findNodePrivate(num_, pointer->left);
            return findNodePrivate(num_, pointer->right);
        }
    }
    else 
        return nullptr;
}
int BinaryTree::getRootNum()
{
    return (root != nullptr) ? root->num_ : -1;
}

void BinaryTree::printChildren(int num_)
{
    Node *ptr = findNode(num_);

    if(ptr == nullptr)
    {
        std::cout << "Error: number does not exist\n";
    }
    else 
    {
        std::cout << "Parent: " << ptr->num_ << std::endl;

        ptr->left == nullptr ? 
        std::cout << "Left child does not exist\n" : 
        std::cout << "Left: " << ptr->left->num_ << "\n";

        ptr->right == nullptr ? 
        std::cout << "Right child does not exist\n" :
        std::cout << "Right: " << ptr->right->num_ << "\n";
    }
}
