#include "binary_trees.h"
#include "binary_trees.h"

/**
 * binary_tree_height - Gives the size of a (sub)tree
 *
 * @tree: pointer to the root node of the tree to find a leaf in.
 * Return: New node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);
	if (left > right)
		return (left);
	return (right);
}

/**
 * binary_tree_is_perfect - Checks whether a tree is perfect
 *
 * @tree: SE
 * Return: 1 if true or 0 is false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height != right_height)
		return (0);
	if ((!tree->left && tree->right) || (!tree->right && tree->left))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	if (left == 1 && right == 1)
		return (1);
	return (0);
}
