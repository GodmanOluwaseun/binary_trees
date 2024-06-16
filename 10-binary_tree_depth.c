#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_depth - Measures depth of node in binary tree.
 *
 * @tree: Root node pointer.
 * Return: Height of tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth;

	if (tree == NULL)
		return (0);

	if (node->parent == NULL)
		return (0);

	node_depth = binary_tree_depth(tree->parent);

	return (node_depth + 1);
}
