#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: Sibiling of the node, NULL if it fails or if node has no sibiling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node)
        return (NULL);

    if (!node->parent)
        return (NULL);

    if (node->parent->left == node)
        return (node->parent->left);
    else if (node->parent->right == node)
        return (node->parent->right);
    else
        return (NULL);
}