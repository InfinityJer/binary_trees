#include "binary_trees.h"

/**
 * is_bst_util - Utility function to check if a binary tree is a valid BST
 *
 * @tree: Pointer to the current node
 * @min: Minimum allowed value for the current node
 * @max: Maximum allowed value for the current node
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_bst_helper(tree, INT_MIN, INT_MAX));

}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree
 *
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, 0 otherwise
 */

int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (!tree)
		return (1);

	if (tree->n < lo || tree->n > hi)
		return (0);

	return (is_bst_helper(tree->left, lo, tree->n - 1) &&
				is_bst_helper(tree->right, tree->n + 1, hi));
	/* -1 and +1 stem from "There must be no duplicate values" req */
}
