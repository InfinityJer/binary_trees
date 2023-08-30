#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node, or NULL if no sibling exists.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (!node || !node->parent)
		return (NULL);
	else if (!node->parent->left || !node->parent->right)
		return (NULL);
	else if (node->parent->left == node)
		sibling = node->parent->right;
	else
		sibling = node->parent->left;
	return (sibling);
}
