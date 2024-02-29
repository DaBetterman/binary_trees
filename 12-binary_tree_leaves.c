/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count the leaves.
 *
 * Return: The number of leaf nodes in the binary tree.
 */

#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
		return (1);
}
