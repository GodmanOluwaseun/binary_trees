#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert - Function that inserts a node as left child of another node
 *
 * @parent: Pointer to parent node.
 * @value: Value to store in node
 * Return: pointer to node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
		
	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
		temp = parent->left;
		parent->left = node;
		node->n = value;
		node->left = temp;
		node->right = NULL;
	else:
		node->n = value;
		parent->left = node;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;

	return (node);
}
