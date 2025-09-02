#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	binary_tree_t *grandparent;
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	grandparent = node->parent->parent;

	if (grandparent == NULL)
		return (NULL);

	if (node->parent == grandparent->left)
		uncle = grandparent->right;

	else
		uncle = grandparent->left;


	return (uncle);
}
