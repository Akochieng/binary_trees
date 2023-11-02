#include "binary_trees.h"
/**
  *binary_tree_balance - computes the balance of a binary tree
  *@tree: the tree
  *
  *Return: the balance of a tree
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	binary_tree_t *right, *left;

	if (tree == NULL)
		return (balance);
	right = tree->right;
	left = tree->left;
	balance += left == NULL ? 0 : (1 + binary_tree_balance(left));
	balance -= right == NULL ? 0 : (1 + binary_tree_balance(right));
	return (balance);
}
