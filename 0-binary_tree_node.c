#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Function that creates a binary tree node
 *
 * @parent: Pointer to parent node.
 * @value: Value to store in node
 * Return: pointer to node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
