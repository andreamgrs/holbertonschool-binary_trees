#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 *
 * @tree: is a pointer to the root node of the tree.
 *
 * Return: 1 if is full or 0 if not.
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

/**	if (left == 0 && right == 0)
	{
		return (1);
	}*/

	if (left == right)
	{
		if (tree->parent == NULL)
		{
			return (1);
		}
		else
		{
			return (left + 1);
		}
	}
	else
	{
		return (0);
	}
}
