#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary node
 * @parent: pointer to the parent node
 * @value: value inside parent or the new node
 * Return: pointer to the new node created
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node_create = malloc(sizeof(binary_tree_t));

if (new_node_create == NULL)
return (NULL);
new_node_create->n = value;
new_node_create->left = NULL;
new_node_create->right = NULL;
new_node_create->parent = parent;
return (new_node_create);
}
