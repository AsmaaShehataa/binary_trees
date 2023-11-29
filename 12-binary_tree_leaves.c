#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a bT
 * @tree: a pointer to the root node of the tree
 * Return: 0 in NULL Tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
else if (tree->left == NULL && tree->right != NULL)
return (1); /* counting # of leaves */

return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
