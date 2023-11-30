#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibilings of the node
 * @node: ptr to the node to find the sibiling
 * Return: node, parent, sibilings is NULL if it is NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (NULL);
}
if (node->parent->left == node)
{
return (node->parent->right);
}
if (node->parent->right == node)
{
return (node->parent->left);
}
return (NULL);
}

