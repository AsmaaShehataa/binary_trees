#include "binary_trees.h"

/**
 * binary_tree_insert_right - function creates aright side
 * @parent: pointer to the node to insert the right child
 * @value: value inside the node
 * Return: right node or NULL in case of failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node_right = malloc(sizeof(binary_tree_t));
if (new_node_right == NULL)
return (NULL);

if (parent == NULL)
{
free(new_node_right);
return (NULL);
}

new_node_right->n = value;
new_node_right->left = NULL;
new_node_right->right = NULL;
new_node_right->parent = parent;

if (parent->right == NULL)
{
parent->right = new_node_right;
}
else
{
new_node_right->right = parent->right;
parent->right->parent = new_node_right;
parent->right = new_node_right;
}
return (new_node_right);
}
