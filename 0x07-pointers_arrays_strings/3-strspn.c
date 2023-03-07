#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: prefix
 * Return: number of bytes in s which consist
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
	}
	return (bytes);
}
