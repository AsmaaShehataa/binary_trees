#include "binary_trees.h"

/**
 * binary_tree_insert_left - function creates aleft side
 * @parent: pointer to the node to insert the left child
 * @value: value inside the node
 * Return: left node or NULL in case of failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node_left = malloc(sizeof(binary_tree_t));
if (new_node_left == NULL)
return (NULL);

if (parent == NULL)
{
free(new_node_left);
return (NULL);
}

new_node_left->n = value;
new_node_left->left = NULL;
new_node_left->right = NULL;
new_node_left->parent = parent;

if (parent->left == NULL)
{
parent->left = new_node_left;
}
else
{
new_node_left->left = parent->left;
parent->left->parent = new_node_left;
parent->left = new_node_left;
}
return (new_node_left);
}

