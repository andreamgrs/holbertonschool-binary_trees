#include "binary_trees.h"
#include <stdlib.h>

void print_int_node(int num)
{
	printf("%d\n", num);
}
/**
 * binary_tree_preorder - function that goes through a binary
 * tree using pre-order traversal.
 *
 * @tree: is a pointer to the root node of the tree to traverse.
 * @func: is a pointer to a function to call for each node.
 *
 * Return: return 1 if node is a leaf, otherwise 0.
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL | func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_is_preorder(tree->left, func);
	binary_tree_is_leaf(tree->right, func);
}
