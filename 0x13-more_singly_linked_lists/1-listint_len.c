#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - Gets the number of elements in a linked list
 * @h: Pointer to the first node
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
