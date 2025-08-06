#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - function that counts the nodes
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
~      
