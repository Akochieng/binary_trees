#include "binary_trees.h"
/**
  *binary_tree_nodes - counts the number of nodes with at least one child
  *@tree: the tree
  *
  *Return: the number of trees with at least one child
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	child += binary_tree_nodes(tree->right);
	child += binary_tree_nodes(tree->left);
	return (child + 1);
}
