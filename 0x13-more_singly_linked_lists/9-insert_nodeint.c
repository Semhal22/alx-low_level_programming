#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: Pointer to the node
 * @idx: Index where new node should be
 * @n: Data of node
 *
 * Return: Address of the new node
 * NULL if failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insertedNode;
	listint_t *temp = *head;
	size_t count = 0;

	insertedNode = malloc(sizeof(listint_t));
	if (insertedNode == NULL)
		return (NULL);
	insertedNode->n = n;
	insertedNode->next = NULL;
	if (idx == 0 && temp != NULL)
	{
		insertedNode->next = *head;
		*head = insertedNode;
		return (insertedNode);
	}
	while (temp != NULL && temp->next != NULL)
	{
		if (count == (idx - 1))
		{
			insertedNode->next = temp->next;
			temp->next = insertedNode;
			return (insertedNode);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
