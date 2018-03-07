#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	const binary_tree_t *ptr;
	size_t counter = 0;

	ptr = node;
	while (ptr->parent != NULL)
	{
		ptr = ptr->parent;
		counter++;
	}
	return (counter);
}
