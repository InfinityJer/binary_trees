#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_l = 0, full_r = 0, full = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	full_l = binary_tree_is_full(tree->left);
	full_r = binary_tree_is_full(tree->right);

	if ((full_l == 1 && full_r == 0) || (full_l == 0 && full_r == 1))
		full = 0;
	else
		full = 1;

	return (full);
}
