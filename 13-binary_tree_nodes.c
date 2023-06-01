#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes of a binary tree with at least 1 child
 * @tree: pointer to node
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left != NULL) || (tree->right != NULL))
	{
		nodes += 1;
	}
	nodes += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (nodes);
}
