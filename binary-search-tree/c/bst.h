#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

typedef enum bool_e { false, true } bool;

typedef enum printChoice_e {
    INORDER = 1,
    PREORDER = 2,
    POSORDER = 3,
    LEVEL = 4
} printChoice;

typedef struct BST_s
{
    Node *root;
} BST;

BST *createBST();
bool insertNodeRec(Node *newNode, Node **root);
void insertNode(int key, int data, BST *tree);
Node *searchRec(int key, Node *root);
Node *search(int key, BST *tree);
bool removeNodeRec(int key, Node **root);
void removeNode(int key, BST *tree);
void printTree(BST *tree);

#endif /* BST_H */
