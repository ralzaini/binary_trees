#include "binary_trees.h"

/**
 * tree_is_best - helper function to check left and right subtree for BST
 * @tree: pointer to the tree to be checked
 * @minimum: minimum range of the tree node values
 * @maximum: maximum value of the tree node values
 * Return: returns 1 if it is a binary search tree, 0 otherwise.
 */
int tree_is_best(const binary_tree_t *tree, int minimum, int maximum)
{
	if (!tree)
		return (1);

	if (tree->n <= minimum || tree->n >= maximum)
		return (0);

	return (tree_is_best(tree->left, minimum, tree->n)
			&& tree_is_best(tree->right, tree->n, maximum));
}

/**
 * binary_tree_is_bst - checks if a binary tree is a BST
 * @tree: binary tree to be checked
 * Return: 1 if tree is BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);


	return (tree_is_best(tree, INT_MIN, INT_MAX));
}
