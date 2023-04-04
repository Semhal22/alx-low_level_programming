#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes the head node of a list
 * @head: Pointer of first head
 *
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		num = temp->n;
		free(temp);
	}
	return (num);
}
