#include "binary_trees.h"

/**
 * binary_tree_depth -  Measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: Depth of the binary tree, 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size;

    if (!tree)
        return (0);

    size = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;

    return (size);
}