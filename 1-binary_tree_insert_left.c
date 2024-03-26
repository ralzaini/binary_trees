#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: the parent node
 * @value: the value to add
 *
 * Return: binary tree or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node, *tmp;

	if (!parent)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));

	if (!left_node)
		return (NULL);

	left_node->n = value;
	left_node->left = NULL;
	left_node->right = NULL;

	if (!parent->left)
	{
		left_node->parent = parent;
		parent->left = left_node;
	}
	else
	{
		tmp = parent->left;
		parent->left = left_node;
		parent->left->left = tmp;
		parent->left->parent = parent;
		parent->left->left->parent = parent->left;
	}

	return (left_node);
}