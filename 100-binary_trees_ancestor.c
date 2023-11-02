#include "binary_trees.h"
/**
  *binary_trees_ancestor - finds the lowest common ancestor of two nodes
  *@first: the first node
  *@second: the second node
  *
  *Return: Null or the ancestor
  */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const
		binary_tree_t *second)
{
	size_t flen, i;
	binary_tree_t **buffer;
	binary_tree_t *temp;

	if (second == NULL || first == NULL)
		return (NULL);
	temp = (binary_tree_t *)first;
	for (flen = 0; temp != NULL; flen++)
		temp = temp->parent;
	buffer = malloc(sizeof(binary_tree_t *) * flen);
	if (buffer == NULL)
		return (NULL);
	temp = (binary_tree_t *)first;
	for (i = 0; i < flen; i++)
	{
		buffer[i] = temp;
		if (temp->parent != NULL)
			temp = temp->parent;
		else
			temp = NULL;
	}
	for (temp = (binary_tree_t *)second; temp != NULL; )
	{
		for (i = 0; i < flen; i++)
			if (buffer[i] == temp)
			{
				free(buffer);
				return (temp);
			}
		temp = temp->parent;
	}
	return (NULL);
}
