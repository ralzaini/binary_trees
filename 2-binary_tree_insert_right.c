#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: the parent node
 * @value: the value to add
 *
 * Return: binary tree or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node, *tmp;

	if (!parent)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));

	if (!right_node)
		return (NULL);

	right_node->n = value;
	right_node->left = NULL;
	right_node->right = NULL;

	if (!parent->left)
	{
		right_node->parent = parent;
		parent->right = right_node;
	}
	else
	{
		tmp = parent->right;
		parent->right = right_node;
		parent->right->right = tmp;
		parent->right->parent = parent;
		parent->right->right->parent = parent->right;
	}

	return (right_node);
}