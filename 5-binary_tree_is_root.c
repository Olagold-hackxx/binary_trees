#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a given node is the root
 * @node: given node
 * Return: 1 on success 0 failure
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
