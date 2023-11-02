#include "binary_trees.h"
/**
  *binary_tree_size - compute the size of a tree
  *@tree: the tree
  *
  *Return: size of the tree
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t len = 0;

	if (tree == NULL)
		return (0);
	len += binary_tree_size(tree->right);
	len += binary_tree_size(tree->left);
	return (len + 1);
}
