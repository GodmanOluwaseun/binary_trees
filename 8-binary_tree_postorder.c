#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_postorder - Function traverses a tree using pre-order.
 *
 * @tree: Pointer to root node.
 * @func: Function pointer to call each node.
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
