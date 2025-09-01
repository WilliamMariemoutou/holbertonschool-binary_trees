#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node or NULL if failed or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	newnode = malloc(sixeof(*newnode);
			if (newnode == NULL)
			return (NULL);

			 newnode->n = value;
    newnode->parent = parent;
    newnode->left = NULL;
    newnode->right = NULL;

    if (parent->left != NULL)
        newnode->left = parent->left;
        parent->left->parent = newnode;
    

    parent->left = newnode;

    return (newnode);
}
