#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: root node
 * Return: number of descedents
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t joke = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		joke = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

	return (joke);
}
