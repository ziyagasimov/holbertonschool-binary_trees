#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: Depth of the binary tree, 0 if none
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
