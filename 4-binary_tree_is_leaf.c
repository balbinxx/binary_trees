#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Function to check if a node is a leaf.
 * @node: pointer
 * Return: 1 if true 0 if false
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);

	return (1);
}
