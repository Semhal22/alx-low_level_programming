#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the nodex at index of a list
 * @head: Double pointer to the head of list
 * @index: Index of node to be deleted
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	size_t count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);
	if (current == *head)
		*head = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	free(current);
	return (1);
}
