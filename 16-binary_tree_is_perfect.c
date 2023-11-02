#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect = 0;
	binary_tree_t *left, *right;

	if (tree == NULL)
		return (perfect);
	right = tree->right;
	left = tree->left;
	if (right == NULL && left == NULL)
		return (1);
	if (right == NULL || left == NULL)
		return (perfect);
	perfect = 1;
	perfect = perfect & binary_tree_is_perfect(left);
	perfect = perfect & binary_tree_is_perfect(right);
	return (perfect);
}
