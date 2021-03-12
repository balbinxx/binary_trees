#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance
 * @tree: root node.
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree_height(tree->left) - tree_height(tree->right));
}
