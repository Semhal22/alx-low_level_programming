#include <stdio.h>
/**
 * main - Prints combination of digits from 0 upto 9
 *
 * Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
