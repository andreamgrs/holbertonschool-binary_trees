#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_uncle - function that finds the uncle of a node.
 *
 * @node: is a pointer to the node to find the uncle.
 *
 * Return: a pointer to the uncle node.
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent != NULL)
	{
		tmp = node->parent;
		if (node->parent->parent->right != NULL && node->parent->parent->left != NULL)
		{
			if (node->parent->parent->right == tmp)
			{
				return (node->parent->parent->left);
			}
			else
			{
				return (node->parent->parent->right);
			}
		}
		else
		{
			return (NULL);
		}
	}
	return (0);
}
