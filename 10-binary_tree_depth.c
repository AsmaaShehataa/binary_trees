#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: a pointer to the node to measure the depth
 * Return: Null if the tree returns 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
int binary_depth_left = 0, binary_depth_right = 0;
if (tree == NULL)
return (0);

if (tree->parent)
{
binary_depth_left = binary_tree_depth(tree->parent) + 1;
binary_depth_right = binary_tree_depth(tree->parent) + 1;
}

if (binary_depth_left > binary_depth_right)
return (binary_depth_left);

else
return (binary_depth_right);
}
