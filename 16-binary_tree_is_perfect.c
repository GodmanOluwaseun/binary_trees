#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * tree_height - Checks height of tree
 * @tree: root node
 * Return: tree height
 */

int tree_height(const binary_tree_t *tree)
{
	int left_tree, right_tree;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_tree = tree_height(tree->left);
	right_tree = tree_height(tree->right);

	return ((left_tree > right_tree ? left_tree : right_tree) + 1);
}

/**
 * no_of_node - Counts no of node in tree
 * @tree: root node
 * Return: no of node or null
 */

int no_of_node(const binary_tree_t *tree)
{
	int nodes = 0;

	if (tree == NULL)
		return (0);

	nodes += no_of_node(tree->left);
	nodes += no_of_node(tree->right);

	return (nodes + 1);
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 *
 * @tree: root node
 * Return: 1 or 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, nodes;

	if (tree == NULL)
		return (0);

	height = tree_height(tree);
	nodes = no_of_node(tree);

	if (nodes == ((2 ** (height + 1)) - 1))
		return (1);

	return (0);
}
