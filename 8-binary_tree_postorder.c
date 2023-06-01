#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse binary tree in postorderly
 * @tree: binary tree
 * @func: function to execute at each node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
