#include "binary_trees.h"
/**
  *binary_tree_is_root - checks if the node is root
  *@node: the node to check
  *
  *Return: 1 if root otherwise 0
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
