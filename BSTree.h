//
//  BSTree.h
//  Project4
//
//  Created by Jamiera 😏 on 5/6/24.
//
#include <iostream>
using namespace std;


#ifndef BSTree_h
#define BSTree_h

class BSTree{
private:
    struct TreeNode{
        int value;
        TreeNode *left;
        TreeNode *right;
    };
    TreeNode *root;
    void insert(TreeNode*& node, int);
    void preOrderTraversal(TreeNode*);
    void inOrderTraversal(TreeNode*);
    void postOrderTraversal(TreeNode*);
    void deleteTree(TreeNode*);
    
public:
    BSTree();
    ~BSTree();
    
    void insert(int);
    void preOrderTraversal();
    void inOrderTraversal();
    void postOrderTraversal();
};
    
#endif /* BSTree_h */
