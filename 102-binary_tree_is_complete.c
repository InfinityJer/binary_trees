#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
* binary_tree_is_complete - checks if a binary tree is complete
* @tree: root node of the BT
* Return: 1 if is complete otherwise 0
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (bt_complete(tree, 0, size));
}
/**
* bt_complete - Helper Function to check if a binary tree
*				is complete
* @tree: a pointer to the root node of the tree to check
* @index: node index to check
* @size: number of nodes in the tree
*
* Return: 1 if the tree is complete
*         0 if the tree is not complete
*         0 if tree is NULL
*/
int bt_complete(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (bt_complete(tree->left, 2 * index + 1, size) &&
		bt_complete(tree->right, 2 * index + 2, size));
}
