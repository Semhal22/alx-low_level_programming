#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: Pointer to the first element of list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
