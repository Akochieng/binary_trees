#include "binary_trees.h"
/**
  *binary_tree_uncle - returns the uncle of a node
  *@node: the node
  *
  *Return: the uncle of the node, otherwise NULL
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t  *parent, *uncle, *grandpa;
	parent = uncle = grandpa = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	grandpa = parent->parent;
	if (grandpa == NULL)
		return (NULL);
	if (grandpa->left == NULL || grandpa->right == NULL)
		return (NULL);
	uncle = grandpa->left == parent ? grandpa->right : grandpa->left;
	return (uncle);
}
