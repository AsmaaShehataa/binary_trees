#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#define TRUE 1
#define FALSE 0

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* static int print_t(const binary_tree_t *tree, int offset,
int depth, char **s); */
/* binary_tree print C function was given */
void binary_tree_print(const binary_tree_t *);

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
int tree_height(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int height(const binary_tree_t *tree);
int max(int num1, int num2);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
int binary_tree_is_complete(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
int binary_tree_is_bst(const binary_tree_t *tree);
int isValid(binary_tree_t *root);
void inorder(binary_tree_t *root, binary_tree_t *prev[], int isvalid[]);
bst_t *bst_insert(bst_t **tree, int value);
binary_tree_t **createQueue(int *, int *);
void enQueue(binary_tree_t **, int *, binary_tree_t *);
binary_tree_t *deQueue(binary_tree_t **, int *);
int isQueueEmpty(int *front, int *rear);
bst_t *array_to_bst(int *array, size_t size);
int bs_tree_preorder(bst_t *tree, int n);
bst_t *bst_search(const bst_t *tree, int value);
bst_t *bst_remove(bst_t *root, int value);
bst_t *bst_min_val(bst_t *root);
int binary_tree_is_avl(const binary_tree_t *tree);
int btia_helper(const binary_tree_t *tree, int min, int max);
size_t binary_tree_height(const binary_tree_t *tree);

#endif
