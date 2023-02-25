#include "main.h"

/**
 * print_times_table - prints the times table of given input
 * @n: input given to the function
 *
 * Return: void
*/
void print_times_table(int n)
{
	int i, j;
	int table[15][15];

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
			for (j = 0; j <= n; j++)
				table[i][j] = i * j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (table[i][j] > 99)
				{
					_putchar((table[i][j] / 100) + '0');
					table[i][j] = table[i][j] % 100;
					_putchar((table[i][j] / 10) + '0');
					_putchar((table[i][j] % 10) + '0');
				}
				else if (table[i][j] > 9 && table[i][j] < 100)
				{
					_putchar((table[i][j] / 10) + '0');
					_putchar((table[i][j] % 10) + '0');
				}
				else
					_putchar(table[i][j] + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					if (table[i][j] < 9 && table[i][j + 1] <= 9)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (table[i][j] < 99 && table[i][j + 1] <= 99)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
