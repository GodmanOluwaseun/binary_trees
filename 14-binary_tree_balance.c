#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * tree_height - calculates tree height.
 * @tree: root node.
 * Return: height of tree
 */

int tree_height(const binary_tree_t *tree)
{
	int left_tree;
	int right_tree;

	if (tree == NULL)
		return (0);

	left_tree = tree_height(tree->left);
	right_tree = tree_height(tree->right);

	return ((left_tree > right_tree ? left_tree : right_tree) + 1);
}

/**
 * binary_tree_balance - Function that measures balance factor of binary tree
 *
 * @tree: Pointer to root.
 * Return: balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bal;
	int left_tree;
	int right_tree;

	if (tree == NULL)
		return (0);

	left_tree = tree_height(tree->left);
	right_tree = tree_height(tree->right);

	bal = left_tree - right_tree;

	return (bal);
}
