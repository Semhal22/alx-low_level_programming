#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node at given index
 * @head: Double pointer to the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if success, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		while (index != 0)
		{
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	return (-1);
}
