#include "lists.h"
/**
 * dlistint_len - Calculates number of elements in a linked list
 * @h: Pointer to the list
 *
 * Return: Number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
