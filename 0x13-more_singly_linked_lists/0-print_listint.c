#include <stdlib.h>
#include "lists.h"
/**
 * print_int - Prints an integer recursively
 * @num: THe integer
 */
void print_int(int num)
{
	if (num > 9)
		print_int(num / 10);
	_putchar(num % 10 + '0');
}
/**
 * print_listint - Prints elements of a list
 * @h: pointer to the list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		print_int(temp->n);
		_putchar('\n');
		count++;
		temp = temp->next;
	}
	return (count);
}
