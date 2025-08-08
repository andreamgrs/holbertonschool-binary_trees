#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_sibling - function that finds the sibling of a node.
 *
 * @node: is a pointer to the node to find the sibling.
 *
 * Return: a pointer to the sibling node.
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent != NULL)
	{
		tmp = node;
		if (node->parent->right != NULL && node->parent->left != NULL)
		{
			if (node->parent->right == tmp)
			{
				return (node->parent->left);
			}
			else
			{
				return (node->parent->right);
			}
		}
		else
		{
			return (NULL);
		}
	}
	return (0);
}
