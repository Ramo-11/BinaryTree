#include "Node.h"
#include "BinaryTree.h"

int main()
{
    int arr[16] = {50, 76, 21, 4, 32, 64, 15, 52, 14, 100, 83, 2, 3, 70, 87, 80};
    BinaryTree tree;

    for(int i = 0; i < 16; i++)
    {
        tree.addNode(arr[i]);
    }

    for(int i = 0; i < 16; i++)
    {
        tree.printChildren((arr[i]));
        std::cout << std::endl;
    }
    //tree.printInOrder();
    //std::cout << std::endl;
    

    std::cout << std::endl;
    return 0;
}