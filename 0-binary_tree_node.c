#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;

    newnode = malloc(sizeof(*newnode));
    if (newnode == NULL)
        return (NULL);

    newnode->n = value;
    newnode->parent = parent;
    newnode->left = NULL;
    newnode->right = NULL;

    return (newnode);
}
