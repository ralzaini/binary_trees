#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  performs a left-rotation on a binary tree
 * @tree: the tree to check
 *
 * Return: new root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
    binary_tree_t *root_new, *tmp;

    if (tree == NULL || tree->right == NULL)
        return (tree);

    root_new = tree->right;
    tmp = root_new->left;

    root_new->left = tree;
    tree->right = tmp;

    if (tmp)
		tmp->parent = tree;

    root_new->parent = tree->parent;
	tree->parent = root_new;

	return (root_new);
}