#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using
 * a inorder transversal
 * @tree: pointer to the root node of the tree in the traverse
 * @func: pointer to a function to call for each node
 *
 * Return: if tree or func is NULL return nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (func == NULL)
		return;

	func = tree;
	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	binary_tree_inorder(tree->left->left, func);
	binary_tree_inorder(tree->right->right, func);

}
