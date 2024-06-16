#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_leaves - Counts leaves  in a binary tree.
 *
 * @tree: Root node pointer.
 * Return: Height of tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t tree_leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	tree_leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (tree_leaves);
}
