#include <stdio.h>
/**
 * main - Print alphabets except q and e
 *
 * Return: Always 0
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
