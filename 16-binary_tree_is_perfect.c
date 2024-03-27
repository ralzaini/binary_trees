#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: measures the balance factor of a binary tree
 * Return: the balance factor of a the binary tree, 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (perfect(tree));
}

/**
 * tree_depth-  Calculate the tree_depth
 * @tree: pointer to the binary tree to check depth
 * Return: the depth of the binary tree
 */
int tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * full - Check if the tree is perfect
 * @tree: pointer to the binary tree being checked
 * @depth: depth of the tree
 * @level: level
 * Return: 1 if tree is perfect, 0 otherwise
 */
int full(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (full(tree->left, depth, level) && full(tree->left, depth, level));
}

/**
 * perfect - helper function
 * @tree: tree to be checked
 * Return: 1 if it is perfect, 0
 */
int perfect(const binary_tree_t *tree)
{
	int depth = tree_depth(tree);

	return (full(tree, depth, 0));
}
