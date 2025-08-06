#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - function that measures the size of a binary tree.
 *
 * @tree: is a pointer to the root node of tree to measure the size.
 *
 * Return: an size_t representing the size.
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		size_left = binary_tree_size(tree->left);
		size_right = binary_tree_size(tree->right);
		return (1 + size_left + size_right);
	}
}
