#include "binary_trees.h"

/**
 * binary_tree_height - function measures the height of a binary tree
 * @tree: a pointer to the root node
 * Return: Null if tree returns 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
int counter_b_tree;

if (tree == NULL)
return (0);

counter_b_tree = tree_height(tree);
return ((size_t)counter_b_tree);
}

/**
 * Atree_height - measure and count the tree height
 * @tree: tree to measure
 * Return: tree height
*/
int Atree_height(const binary_tree_t *tree)
{
int lHight_b_tree = 0, rHight_b_tree = 0;

if (tree == NULL)
return (-1);

lHight_b_tree = tree_height(tree->left);
rHight_b_tree = tree_height(tree->right);

if (lHight_b_tree > rHight_b_tree)
return (lHight_b_tree + 1);

else
return (rHight_b_tree + 1);
}
