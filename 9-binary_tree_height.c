#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: root node
 * Return: tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_joke = 0;
	size_t left_joke = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_joke = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_joke = binary_tree_height(tree->right) + 1;

	if (left_joke >= right_joke)
		return (left_joke);
	return (right_joke);
}
