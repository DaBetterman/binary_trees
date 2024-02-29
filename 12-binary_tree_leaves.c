/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count the leaves.
 *
 * Return: The amount of leaves within the binary tree.
 */

#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = 1 + binary_tree_leaves(tree->left);
	right = 1 + binary_tree_leaves(tree->right);

	return ((left + right) / 2);
}