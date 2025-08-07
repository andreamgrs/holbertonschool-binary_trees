#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - function that measures the height of a binary tree.
 *
 * @tree: is a pointer to the root node of tree to measure the height.
 *
 * Return: an int representing the height.
 *
 */
int binary_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_height(tree->left);
	right_height = binary_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}
/**
 * binary_tree_balance - function that measures the balance factor of a binary tree.
 *
 * @tree: is a pointer to the root node of tree to measure.
 *
 * Return: an int representing the balance factor.
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_height(tree->left);
	right = binary_height(tree->right);

	return (left - right);
}
