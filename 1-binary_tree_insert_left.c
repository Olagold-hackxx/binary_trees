#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node to the left of parent
 * @parent: parent of node
 * @value: value of node to insert
 * Return: new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node, *temp;

	if (parent == NULL)
		return (NULL);
	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);

	left_node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		temp = parent->left;
		temp->parent = left_node;
		left_node->left = temp;
	}
	parent->left = left_node;

	return (left_node);
}
