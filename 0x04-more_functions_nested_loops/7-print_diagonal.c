#include "main.h"
/**
 * print_diagonal - prints a character diagonally
 * @n: number of times to print character
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i - 1; j++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
}