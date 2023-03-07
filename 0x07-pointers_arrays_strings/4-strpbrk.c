#include "main.h"
/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: string to be searched
 * @accept: set of bytes to look for
 * Return: a pointer to the matched bytes if found
 * NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
