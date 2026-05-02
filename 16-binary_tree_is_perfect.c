#include "binary_trees.h"

/**
 * binary_tree_height - measures height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_size - measures size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) +
			binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - checks if tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;
	size_t expected_nodes;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	expected_nodes = (1UL << height) - 1;

	if (size == expected_nodes)
		return (1);

	return (0);
}
