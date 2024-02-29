#include "binary_trees.h"
/**
* binary_tree_node - Creates binary node
* @parent: Is a pointer to new node parent
* @value: Is a value for the binary node
* Return: returns a new created node or null
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
if (newNode == NULL)
return (NULL);
if (newNode != NULL)
{
newNode->parent = parent;
newNode->n = value;

newNode->left = NULL;
newNode->right = NULL;
parent = newNode->parent;
)
else
{
return (NULL);
}
return (newNode);
}
