#include "binary_trees.h"

/**
 * binary_tree_sibling - checks the sibilings of the tree
 * @tree: ptr to the root node to find the uncle
 * Return: Null if tree 0, Uncle otherwise
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *tree)
{
if (tree == NULL || tree->parent == NULL)
{
return (NULL);
}
if (tree->parent->left == tree)
{
return (tree->parent->right);
}
if (tree->parent->right == tree)
{
return (tree->parent->left);
}
return (NULL);
}

/**
 * binary_tree_uncle - finds the uncle of the node
 * @node: ptr to the node
 * Return: node is NULL if it is NULL, No uncle retuen NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (NULL);
}
return (binary_tree_sibling(node->parent));
}
