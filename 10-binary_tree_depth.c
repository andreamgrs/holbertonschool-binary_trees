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
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		depth = binary_tree_depth(tree->parent) + 1;
		return (depth);
	}
}
