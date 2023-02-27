#include "main.h"
/**
 * _strcpy - copied string
 * @dest: to be copied to
 * @src: to be copied frmo
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (*dest);
}
