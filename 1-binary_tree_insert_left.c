#include "binary_trees.h"
/**
  *binary_tree_insert_left - inserts a node as the left child of another node
  *@parent: the parent
  *@value: the value of the node
  *
  *Return: the newly created node
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->right = NULL;
	new->left = NULL;
	if (parent == NULL)
		new->parent = NULL;
	else if (parent->left == NULL)
	{
		new->parent = parent;
		parent->left = new;
	}
	else
	{
		new->left = parent->left;
		new->parent = parent;
		new->left->parent = new;
		parent->left = new;
	}
	return (new);
}
