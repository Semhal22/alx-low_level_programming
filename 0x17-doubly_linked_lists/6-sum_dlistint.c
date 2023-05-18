#include "lists.h"
/**
 * sum_dlistint - Calculates sum of all data of linked list
 * @head: Pointer to the list
 *
 * Return: Sum of data or else 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
