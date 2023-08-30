#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t length_left = 0;
	size_t length_right = 0;

	if (tree == NULL)
		return (0);

	length_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	length_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (length_left > length_right ? length_left : length_right);
}
