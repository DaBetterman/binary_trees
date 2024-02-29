/**
 * binary_tree_nodes - Counts the nodes in a
 *						binary tree with at least one child.
 *
 * @tree: Pointer to the root node of the tree to count the nodes.
 *
 * Return: The number of nodes in the binary tree with at least one child.
 */

#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		count++;
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
	}

	return (count);

}
