#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 *
 * @tree: is a pointer to the root node of the
 * tree to count the number of leaves.
 *
 * Return: a size_t representing how many leaves.
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left, leaves_right;

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
		leaves_left = binary_tree_leaves(tree->left);
		leaves_right = binary_tree_leaves(tree->right);
		return (leaves_left + leaves_right);
	}
}
