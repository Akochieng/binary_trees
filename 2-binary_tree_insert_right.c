#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	if (parent == NULL)
		new->parent = NULL;
	else if (parent->right == NULL)
	{
		new->parent = parent;
		parent->right = new;
	}
	else
	{
		new->right = parent->right;
		new->parent = parent;
		new->right->parent = new;
		parent->right = new;
	}
	return (new);
}
