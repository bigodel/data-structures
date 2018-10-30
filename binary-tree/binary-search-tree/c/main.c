#include <stdio.h>
#include "bst.h"

int main(/*int argc, char *argv[]*/)
{
    BST tree = *initBST();

    insertNode(100, 32, &tree);
    insertNode(150, 42, &tree);
    insertNode(50, 5, &tree);
    insertNode(40, 20, &tree);
    insertNode(60, 7, &tree);
    insertNode(120, 17, &tree);
    insertNode(170, 71, &tree);

    removeNode(120, &tree);

    if (tree.root->right->left != NULL) {
        printf("did not delete 120\n");
        printf("here's whats there: %i\n", tree.root->right->left->key);
    } else {
        printf("deleted 120\n");
    }

    Node *res = search(120, &tree);
    printf("Search's key: %i\nSearch's data: %i\n\n", res->key, res->data);

    printf("Root's key: %i\nRoot's data: %i\n\n",
           tree.root->key, tree.root->data);
    printf("Right's key: %i\nRight's data: %i\n",
           tree.root->right->key, tree.root->right->data);

    return 0;
}
