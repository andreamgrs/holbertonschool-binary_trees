#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 *
 * @tree: is a pointer to the root node of the tree.
 *
 * Return: 1 if is full or 0 if not.
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full, full2;

	if (tree == NULL)
	{
		return (0);
	}


	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		full = binary_tree_is_full(tree->left);
		full2 = binary_tree_is_full(tree->right);

		if (full == full2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
