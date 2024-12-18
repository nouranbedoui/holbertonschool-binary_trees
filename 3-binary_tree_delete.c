#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 * Description: This function recursively deletes all nodes of the binary tree
 *              starting from the root node. It frees the memory allocated
 *              for each node in the tree.
 */

void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
return;
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
