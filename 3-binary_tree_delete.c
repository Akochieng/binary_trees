#include "binary_trees.h"
/**
  *binary_tree_delete - deletes binary trees
  *@tree: the tree
  *
  *Return: void
  */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->right)
		binary_tree_delete(tree->right);
	if (tree->left)
		binary_tree_delete(tree->left);
	free(tree);
}
