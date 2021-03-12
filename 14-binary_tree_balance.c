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
/**
 * th - xxxx
 * @tree: xxxx
 * Return: xxxx
 */
int th(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (-1);
	if (tree->left)
		lh = tree_height(tree->left) + 1;
	if (tree->right)
		rh = tree_height(tree->right) + 1;
	if (lh >= rh)
		return (lh);
	return (rh);
}
