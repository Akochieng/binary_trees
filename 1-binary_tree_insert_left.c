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
	if (parent == NULL)
	{
		new->left = NULL;
		new->parent = NULL;
	}
	else if (parent->left == NULL)
	{
		new->parent = parent;
		parent->left = new;
	}
	else
	{
		new->left = parent->left;
		parent->left = new;
		new->left->parent = new;
		new->parent = parent;
	}
	return (new);
}
