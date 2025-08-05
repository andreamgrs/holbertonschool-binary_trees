#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_int_node - function that print int of the node.
 *
 * @num: int of the node.
 *
 * Return: nothing.
 *
 */
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
 * Return: nothing.
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	print_int_node(tree->n);
	binary_tree_preorder(tree->left, print_int_node);
	binary_tree_preorder(tree->right, print_int_node);
}
