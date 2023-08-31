#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *nodo;

if (parent == NULL)
return (NULL);

nodo = calloc(1, sizeof(binary_tree_t));
if (nodo == NULL)
return (NULL);
if (parent->left == NULL)
{
parent->left = nodo;
nodo->parent = parent;
nodo->n = value;
nodo->right = NULL;
nodo->left = NULL;
}
else
{
nodo->left = parent->left;
parent->left->parent = nodo;
parent->left = nodo;
nodo->n = value;
nodo->parent = parent;
nodo->right = NULL;
}
return (nodo);
}
