#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node.
 * @parent: Pointer to the parent node of the new node to be created.
 * @value: The value the new node is to contain.
 *
 * Return: a pointer to the new node, or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->left = NULL;
newNode->right = NULL;
newNode->parent = NULL;
newNode->n = value;
if (parent == NULL)
{
return (NULL);
}
if (parent->left != NULL)
{
newNode->left = parent->left;
parent->left = newNode;
}
return newNode;
}
