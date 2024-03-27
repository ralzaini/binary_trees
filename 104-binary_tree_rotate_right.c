#include "binary_trees.h"

/**
 * binary_tree_rotate_right -  performs a left-rotation on a binary tree
 * @tree: the tree to check
 *
 * Return: new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root_new, *tmp;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	root_new = tree->left;
	tmp = root_new->right;

	root_new->right = tree;
	tree->left = tmp;

	if (tmp)
		tmp->parent = tree;

	root_new->parent = tree->parent;
	tree->parent = root_new;

	return (root_new);
}