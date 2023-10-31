#include "binary_trees.h"
/**
  *binary_tree_inorder - go through a binary tree using in-order traversal
  *@tree: the tree
  *@func: the function
  *
  *Return: void
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
	return;
}
