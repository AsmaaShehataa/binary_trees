#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure size
 * Return: Null if the tree returns 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
