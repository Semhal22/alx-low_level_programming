#include "main.h"
/**
 * _strncat - concatenates two strings based on n
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
