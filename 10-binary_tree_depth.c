#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - function that measures the height of a binary tree.
 *
 * @tree: is a pointer to the root node of tree to measure the depth.
 *
 * Return: an size_t representing the depth.
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (max_depth);
	}

	if (tree->parent == NULL)
	{
		return (max_depth - max_depth);
	}

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	if (left_depth > right_depth)
	{
		max_depth = left_depth + 1;
	}
	else
	{
		max_depth = right_depth + 1;
	}
}
