#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: a pointer to the root node
 * Return: 0 if the tree is null
*/

int binary_tree_balance(const binary_tree_t *tree)
{
int balance_treeL, balance_treeR;
if (tree == NULL)
return (0);

balance_treeL = binary_tree_height(tree->left);
balance_treeR = binary_tree_height(tree->right);

return (balance_treeL - balance_treeR);
}



/**
 * binary_tree_height - function that measures the balance factor
 * @tree: a pointer to the root node
 * Return: size of the tree
*/

int binary_tree_height(const binary_tree_t *tree)
{
int tree_count;
if (tree == NULL)
return (0);

tree_count = tree_height(tree);
return ((size_t)tree_count);
}

/**
 * tree_height - count node tree height
 * @tree: tree to measure
 * Return: tree height
 */

int tree_height(const binary_tree_t *tree)
{
int left_h, right_h;

if (tree == NULL)

return (0);

left_h = tree_height(tree->left);
right_h = tree_height(tree->right);


if (left_h > right_h)
return (left_h + 1);
else
return (right_h + 1);
}
