#include "binary_trees.h"
/**
  *binary_tree_node - creates a binary tree node
  *@parent: the parent of the node
  *@value: the value associated with the node
  *
  *Return: the newly created node
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	new->parent = parent;
	return (new);
}
