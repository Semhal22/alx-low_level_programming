#include <stddef.h>
#include "lists.h"
/**
 * list_len - Calculates the number of elements in a linked list_t
 * @h: The list
 *
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
