#include "main.h"
/**
 * print_line - Draws a line based on the input
 * @n: number of times the underscore is printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			putchar('_');
	}
	_putchar('\n');
}