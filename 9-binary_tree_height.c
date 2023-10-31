#include "binary_trees.h"
/**
  *binary_tree_height - measures the height of a binary tree
  *@tree: pointer to the root node of the tree to measure
  *
  *Return: height of the tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rlen, llen, height;

	rlen = llen = height = 0;
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	rlen = binary_tree_height(tree->right);
	llen = binary_tree_height(tree->left);
	height = (rlen > llen) ? rlen : llen;
	return (height + 1);
}
