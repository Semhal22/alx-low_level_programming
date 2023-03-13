#include <stdlib.h>
/**
 * _strdup - duplicates and returns a pointer to the string
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string
 * NULL if str=NULL or if insufficient memory
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *dest;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	dest = malloc(len * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i < len)
	{
		*(dest + i) = str[i];
		i++;
	}
	return (dest);
}
