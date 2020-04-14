#include "node.h"

Node *createNode(int key, int data)
{
    Node *node = (Node *) malloc(sizeof(Node));
    node->key = key;
    node->data = data;
    node->list = NULL;
    node->matrix = NULL;

    return node;
}

void deleteNode(Node *node)
{
    free(node);
    node = NULL;
}
