#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all elements of a list_t list
 * @h: list to be printed
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}
	return (count);
}

