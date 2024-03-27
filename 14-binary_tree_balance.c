#include "binary_trees.h"

/**
 * height_tree - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: height of the binary tree
 */
size_t height_tree(const binary_tree_t *tree)
{
    int left_height, right_height;

    if (!tree)
        return (0);

    left_height = height_tree(tree->left);
    right_height = height_tree(tree->right);

    if (left_height > right_height)
        return (left_height + 1);
    else
        return (right_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: measures the balance factor of a binary tree
 * Return: the balance factor of a the binary tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int balance;
    size_t height_left, height_right;

    if (!tree)
        return (0);

    height_left = height_tree(tree->left);
    height_right = height_tree(tree->right);

    balance = height_left - height_right;

    return (balance);
}