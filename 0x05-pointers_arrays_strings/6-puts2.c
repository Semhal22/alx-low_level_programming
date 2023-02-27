#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
