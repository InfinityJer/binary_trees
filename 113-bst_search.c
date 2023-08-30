#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a Binary Search Tree
 *
 * @tree: Pointer to the root node of the BST to search
 * @value: The value to search in the tree
 * Return: A pointer to the node containing the value, or NULL on failure
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
