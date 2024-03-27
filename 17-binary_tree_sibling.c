#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: Sibiling of the node, NULL if it fails or if node has no sibiling
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    if (node->parent->parent->left == node->parent)
    {
        if (node->parent->parent->right)
            return (node->parent->parent->right);
    }
    else
    {
        if (node->parent->parent->left)
            return (node->parent->parent->left);
    }

    return (NULL);
}