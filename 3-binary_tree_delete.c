#include "binary_trees.h"

/**
 * binary_tree_delete - delete the binary tree
 * @tree: binary tree to be deleted
 * Return: Nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
binary_tree_t *binary_tree_left = NULL, *binary_tree_right = NULL;
if (tree != NULL)
{
binary_tree_right = tree->right;
binary_tree_left = tree->left;
free(tree);
binary_tree_delete(binary_tree_right);
binary_tree_delete(binary_tree_left);

}
}
