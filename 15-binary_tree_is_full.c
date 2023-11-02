#include "binary_trees.h"
/**
  *binary_tree_is_full - checks whether a binary tree is full
  *@tree: the tree
  *
  *Return: 0 if false, otherwise 1
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 0;

	if (tree == NULL)
		return (is_full);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left == NULL || tree->right == NULL)
		return (is_full);
	is_full = 1;
	is_full = is_full & binary_tree_is_full(tree->right);
	is_full = is_full & binary_tree_is_full(tree->left);
	return (is_full);
}
