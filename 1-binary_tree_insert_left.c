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

    left = malloc(sizeof(binary_tree_t));
    if (left == NULL)
    return (NULL);

    left->parent = parent;
    left->n = value;
    left->left = NULL;
    left->right = NULL;

    if (parent->left == NULL)
    {
    parent->left = left;
    }
    else
    {

    parent->left->parent = left;
    left->left = parent->left;
    parent->left = left;
    }
    return (left);
}
