#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: pointer to node
 * Return: sibling pointer
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *bro;

	if (!node || !node->parent)
		return (NULL);
	if (!node->parent->right || !node->parent->left)
		return (NULL);

	if (node->parent->right != node)
		bro = node->parent->right;
	else
		bro = node->parent->left;

	return (bro);
}
