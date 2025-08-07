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
	size_t nodes_left, nodes_right;

	if (tree == NULL)
	{
		return (0);
	}
	nodes_left = binary_tree_nodes(tree->left);
	nodes_right = binary_tree_nodes(tree->right);

	if (tree->parent == NULL)
	{
		return (nodes_left + nodes_right);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + nodes_left + nodes_right);
	}
	else
	{
		return (nodes_left + nodes_right);
	}
	
}      
