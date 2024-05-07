//
//  BSTree.cpp
//  Project4
//
//  Created by Jamiera 😏 on 5/6/24.
//

#include <iostream>
#include "BSTree.h"
using namespace std;


BSTree::BSTree() {
    root = nullptr;
}

BSTree::~BSTree() {
    deleteTree(root);
}

void BSTree::insert(TreeNode*& node, int data){
    if (node == nullptr) {
        node = new TreeNode; //creates a new pointer
        node->value = data; //sets a value
        node->left = nullptr; //left child=null
        node->right = nullptr; //right child=null
    } else {
        if (data < node->value) {
            insert(node->left, data); //inserts to left
        } else {
            insert(node->right, data); //inserts to right
        }
    }
}
void BSTree::insert(int data) {
    insert(root, data);
}

void BSTree::preOrderTraversal(TreeNode* node) {
    if (node != nullptr) {
        cout << node->value << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }
}
void BSTree::preOrderTraversal() {
    preOrderTraversal(root);
    cout <<endl;
}
void BSTree::inOrderTraversal(TreeNode* node) {
    if (node != nullptr) {
        inOrderTraversal(node->left);
        cout << node->value << " ";
        inOrderTraversal(node->right);
    }
}
void BSTree::inOrderTraversal() {
    inOrderTraversal(root);
    cout << endl;
}

void BSTree::postOrderTraversal(TreeNode* node) {
    if (node != nullptr) {
        postOrderTraversal(node->left); //transverse left
        postOrderTraversal(node->right); //transverse right
        cout << node->value << " ";
    }
}
void BSTree::postOrderTraversal() {
    postOrderTraversal(root);
    cout << endl;
}
void BSTree::deleteTree(TreeNode* node) {
    if (node != nullptr) {
        deleteTree(node->left); //deletes left subtree
        deleteTree(node->right); //deletes right subtree
        delete node; //deletes current code
    }
}
