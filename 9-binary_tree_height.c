#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: if tree is null returns 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int bin_trrcounter;

	if (tree == NULL)
		return (0);

	bin_trrcounter = tree_height_measure(tree);

	return ((size_t)bin_trrcounter);
}

/**
 * tree_height - count node tree height
 * @tree: tree to measure
 * Return: tree height
 */

int tree_height_measure(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (-1);

	left_h = tree_height_measure(tree->left);
	right_h = tree_height_measure(tree->right);

	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
