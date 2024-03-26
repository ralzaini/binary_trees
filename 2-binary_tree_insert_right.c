#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: Pointer to the parent node of the node to create.
* @value: Integer value of the new node
*
* Return: Pointer to the newly created node or NULL if it fails.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node, *temp;

	if (!parent)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));

	if (!right_node)
		return (NULL);

	right_node->n = value;
	right_node->left = NULL;
	right_node->parent = parent;

	if (!parent->right)
	{
		right_node->right = NULL;
		parent->right = right_node;
	}
	else
	{
		temp = parent->right;
		parent->right = right_node;
		right_node->right = temp;
		right_node->right->parent = right_node;
	}

	return (right_node);
}