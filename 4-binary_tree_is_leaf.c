#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_is_leaf - Checks if node is leaf.
 *
 * @node: Pointer to node to check.
 * Return: void
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if ((node->right == NULL) && (node->left == NULL))
		return (1);

	return (0);
}
