#include "binary_trees.h"
/**
  *binary_tree_sibling - finds the sibling of a node
  *@node: the node
  *
  *Return: the sibling or NULL
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent, *sibling;

	parent = sibling = NULL;
	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->left == NULL || parent->right == NULL)
		return (NULL);
	sibling = parent->left == node ? parent->right : parent->left;
	return (sibling);
}
