#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right rotation on a binary tree
 *
 * @tree: Pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node of the rotated tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	if (!tree || !tree->left)
		return (NULL);

	tmp = tree->left;
	tree->left = tmp->right;

	if (tmp->right)
		tmp->right->parent = tree;

	tmp->right = tree;
	tmp->parent = tree->parent;
	tree->parent = tmp;

	return (tmp);
}
