/**
 * 
 * 
 * 
 * 
*/

#include "binary_trees.h"

int binary_tree_is_root(const binary_tree_t *node)
{
		if (node->left != NULL && node->right != NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}