#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_height - Measures height of binary tree.
 *
 * @tree: Root node pointer.
 * Return: Height of tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_tree, right_tree;

	if (tree == NULL)
		return (0);

	left_tree = tree->left;
	right_tree = tree->right;

	if (left_tree > right_tree)
		return (left_tree + 1);
	else
		return (right_tree + 1);
}