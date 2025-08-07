#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree.
 *
 * @tree: is a pointer to the root node of the tree
 * to count the number of nodes.
 *
 * Return: a size_t representing how many nodes are.
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 1;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		node = node + binary_tree_nodes(tree->left);
	}

	if (tree->right != NULL)
	{
		node = node + binary_tree_nodes(tree->right);
	}
	
	return (node);
	
}
