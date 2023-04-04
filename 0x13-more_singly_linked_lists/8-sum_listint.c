#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - Calculates the sum of the data in the list
 * @head: Pointer to the list
 *
 * Return: Sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
