#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - Prints elements of a list
 * @h: pointer to the list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
