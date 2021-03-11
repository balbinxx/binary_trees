#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth of a node in a binary tree
 * @tree: root node
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t aux = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		aux++;
		tree = tree->parent;
	}
	return (aux);
}
