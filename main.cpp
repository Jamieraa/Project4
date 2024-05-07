//
//  main.cpp
//  Project4
//
//  Created by Jamiera 😏 on 5/6/24.
//

#include <iostream>
#include <cstdlib>
#include "BSTree.h"
using namespace std;


int main() {
    

    BSTree tree;
    for (int i = 0; i < 40; ++i) {
        int value = rand() % 100;
        tree.insert(value);
    }

    cout << "Preorder Traversal: ";
    tree.preOrderTraversal();

    cout << "Inorder Traversal: ";
    tree.inOrderTraversal();

    cout << "Postorder Traversal: ";
    tree.postOrderTraversal();

    return 0;
}
