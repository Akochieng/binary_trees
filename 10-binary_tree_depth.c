#include "binary_trees.h"
/**
  *binary_tree_depth - measures the height of a binary tree
  *@tree: pointer to the root node of the tree to measure
  *
  *Return: depth of the tree
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
