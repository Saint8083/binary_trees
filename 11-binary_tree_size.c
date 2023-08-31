#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: tree
 *
 * Return: Size of the tree or 0 if tree is NULL;
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
