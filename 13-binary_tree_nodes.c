#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree.
 *
 * @tree: Root node pointer.
 * Return: Height of tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		node += 1;

	binary_tree_nodes(tree->left);
	binary_tree_nodes(tree->right);

	return (node);
}
