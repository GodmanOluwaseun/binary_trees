#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_size - Measures size of binary tree.
 *
 * @tree: Root node pointer.
 * Return: Height of tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_tree_size, right_tree_size;

	if (tree == NULL)
		return (0);

	left_tree_size = binary_tree_size(tree->left);
	right_tree_size = binary_tree_size(tree->right);

	return ((left_tree_size + right_tree_size) + 1);
}
