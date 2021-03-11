#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: parent node.
 * @value: integer value.
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = calloc(1, sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	return (new);
}
