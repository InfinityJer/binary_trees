#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Height of the tree, or 0 if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, max_nodes, size, i = 1, pow = 2;

	if (!tree)
		return (0);

	height = (int)binary_tree_height(tree);
	for ( ; i < height + 1; i++)
		pow *= 2;
	max_nodes = pow - 1;
	size = binary_tree_size(tree);
	if (size == max_nodes || height == 0)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t length_left = 0;
	size_t length_right = 0;

	if (tree && tree->left)
		length_left = binary_tree_height(tree->left) + 1;
	else
		length_left = 0;
	if (tree && tree->right)
		length_right = binary_tree_height(tree->right) + 1;
	else
		length_right = 0;
	if (length_left >= length_right)
		return (length_right);
	else
		return (length_right);
}

/**
* binary_tree_size - Measures the Size of a binary Tree
* @tree: A pointer to the root node of the tree to measure the size
* Return: Returns Size of the Tree
* Description: Tree is NULL, your function must be (0)
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		count += binary_tree_size(tree->left);
	if (tree->right)
		count += binary_tree_size(tree->right);

	return (count + 1);
}
