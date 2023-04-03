#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end
 * @head: Double pointer
 * @n: Data to be filled into node
 *
 * Return: Address of new element, Or NULL if failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode = NULL;
	listint_t *node = *head;

	lastNode = malloc(sizeof(listint_t));
	if (lastNode == NULL)
		return (NULL);
	lastNode->n = n;
	lastNode->next = NULL;

	if (*head == NULL)
	{
		*head = lastNode;
		return (lastNode);
	}
	while (node->next != NULL)
		node = node->next;
	node->next = lastNode;
	return (lastNode);
}
