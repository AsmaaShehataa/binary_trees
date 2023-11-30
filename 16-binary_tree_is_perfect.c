#include "binary_trees.h"

/**
 * binary_tree_size - checks the size of the BT
 * @node: ptr to the root node
 * Return: if tree is NULL returns 0
*/

size_t binary_tree_size(const binary_tree_t *node)
{
size_t child_l, child_r;
if (node == NULL)
return (0);

child_l = binary_tree_size(node->left);
child_r = binary_tree_size(node->right);

if (child_l == child_r)
return (child_l + child_r + 1);
else
return (0);

}
/**
 * binary_tree_is_perfect - checks if the BT is perfect
 * @tree: a pointer to the root node
 * Return: 0 if the tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (FALSE);
if (binary_tree_size(tree) > 0)
return (1);
else
return (0);
}
