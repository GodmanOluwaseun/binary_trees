#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_uncle - Function that finds the uncle of a node
 *
 * @node: Pointer to node
 * Return: Uncle pointer
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == NULL)
	       return (NULL);

	if (node->parent->parent->right == NULL)
		return (NULL);

	if (node->parent->parent->left->left == node)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
