#include <stdio.h>
/**
 * main - Prints all numbers of base 16
 *
 * Return: Always 0
*/
int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
		putchar(48 + i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
