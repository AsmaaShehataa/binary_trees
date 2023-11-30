#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with 1 child
 * @tree: a pointer to the root node of the tree
 * Return: 0 if the tree is null
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
int countI;
if (tree == NULL)
return (0);

countI = 0;
if ((tree->left || tree->right) && tree)
countI++;
countI += (binary_tree_nodes(tree->left) +
binary_tree_nodes(tree->right));

return (countI);
}
