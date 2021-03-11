#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node 
 * as the right-child of another node
 * @parent: pointer parent node.
 * @value: integer value.
 * Return: pointer new node 
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

    new = calloc(1, sizeof(binary_tree_t));
	if (!new)
		return (NULL);
        
	new->left = value;
	new->parent = parent;
	if (parent->left)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	parent->left = new;
	return (new);
}
