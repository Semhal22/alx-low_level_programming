#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: double pointer to the first element on the list
 * @n: Data to be added to the node
 *
 * Return: Address of the new element
 * On failure, returns NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *firstNode;

	firstNode = malloc(sizeof(listint_t));
	if (firstNode == NULL)
		return (NULL);
	firstNode->n = n;
	firstNode->next = *head;
	*head = firstNode;
	return (firstNode);
}
