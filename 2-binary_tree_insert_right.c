#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node to the left of parent
 * @parent: parent of node
 * @value: value of node to insert
 * Return: new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node, *temp;

	if (parent == NULL)
		return (NULL);

	right_node = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		temp = parent->right;
		temp->parent = right_node;
		right_node->right = temp;
	}
	parent->right = right_node;

	return (right_node);
}
