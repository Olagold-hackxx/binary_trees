#include "binary_trees.h"

/**
 * binary_tree_size - get number of subtrees a node has
 * @tree: given node
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
