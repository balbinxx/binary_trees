#include "binary_trees.h"
/**
* binary_tree_insert_right - Function that inserts a new node
* as the right-child of another node.
* @parent: parent node.
* @value: integer value of new node.
* Return: new node (Success) NULL (Failure)
**/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *joke = NULL;

	if (!parent)
		return (NULL);

	joke = binary_tree_node(parent, value);
	if (!joke)
		return (NULL);
	if (parent->right)
	{
		joke->right = parent->right;
		joke->right->parent = joke;
	}
	joke->parent->right = joke;
	return (joke);
}
