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
 * binary_tree_height - measure the hieght of the tree
 * @tree: pointer to the tree node to be measrd
 * Return: tree's height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
int binary_HL, binary_RL;
/* size_t height = 1; */

if (tree == NULL)
{
return (0);
}
else
{
if (tree)
{
binary_HL = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
binary_RL = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
}
return ((binary_HL > binary_RL) ? binary_HL : binary_RL);
}
}
