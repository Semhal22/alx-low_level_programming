#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strlen - Calculates length of string
 * @str: String
 *
 * Return: Length of string
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * binary_to_uint - Converts a binary to unsigned int
 * @b: Pointer to the string we want to convert
 *
 * Return: Converted number or 0 if failed to convert
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int mul = 1, num = 0;

	if (b == NULL)
		return (0);
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] < 48 || b[i] > 57)
			return (0);
		if (b[i] == '1')
			num += mul;
		mul *= 2;
	}
	return (num);
}
