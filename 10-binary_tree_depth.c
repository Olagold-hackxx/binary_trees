#include "binary_trees.h"

/**
 * binary_tree_depth - get depth of a node in a binary tree
 * @tree: given node
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *temp;

	temp = tree->parent;
	while (temp != NULL)
	{
		depth += 1;
		temp = temp->parent;
	}

	return (depth);
}