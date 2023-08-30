#include "9-binary_tree_height.c"
#include "binary_trees.h"

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, height;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree) + 1;

	for (level = 1; level <= height; level++)
		level_based_print(tree, func, level);
}

/**
* level_based_print - Prints all values in nodes at particular level
* @tree: root node of Binary Tree
* @func: pointer to a function to call for each node
* @level: the level of tree
*/
void level_based_print(const binary_tree_t *tree,
void (*func)(int), size_t level)
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else
	{
		level_based_print(tree->left, func, level - 1);
		level_based_print(tree->right, func, level - 1);
	}
}
