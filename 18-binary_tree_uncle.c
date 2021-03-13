#include "binary_trees.h"
/**
* binary_tree_uncle - Function that finds the uncle of a node.
* @node: root node.
* Return: uncle or no uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (!node->parent->parent->right || !node->parent->parent->left)
		return (NULL);

	if (node->parent->parent->right != node->parent)
		uncle = node->parent->parent->right;
	else
		uncle = node->parent->parent->left;

	return (uncle);
}
