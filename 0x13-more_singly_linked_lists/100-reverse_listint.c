#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - Reverses a linked list
 * @head: Double  pointer to head
 *
 * Return: A pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
