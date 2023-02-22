#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
*/
void times_table(void)
{
	int i, j;
	int matrice[10][10];

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			matrice[i][j] = i * j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (matrice[i][j] > 9)
			{
				_putchar((matrice[i][j] / 10) + '0');
				_putchar((matrice[i][j] % 10) + '0');
			}
			else
				_putchar(matrice[i][j] + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (matrice[i][j] < 9 && matrice[i][j + 1] < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
