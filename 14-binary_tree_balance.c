#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_balance - Function that measures balance factor of binary tree
 *
 * @tree: Pointer to root.
 * Return: balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bal, left_tree, right_tree;

	if (tree == NULL)
		return (0);

	left_tree = binary_tree_balance(tree->left);
	right_tree = binary_tree_balance(tree->right);

	bal = left_tree - right_tree;

	return (bal);
}
