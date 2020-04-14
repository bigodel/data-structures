#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node_s
{
    int key;
    int data;
    struct Node_s *list;
    struct Node_s **matrix;
} Node;

Node *createNode(int key, int data);
void deleteNode(Node *node);

#endif /* NODE_H */
