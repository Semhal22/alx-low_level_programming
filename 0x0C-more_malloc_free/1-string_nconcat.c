#include <stdlib.h>
/**
 * _strlen - calculates length of string
 * @str: string
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy from src
 *
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: determine how many bytes of string 2 are concatenated to s1
 *
 * Return: points to the newly allocated space in memory
 * If failure, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1;
	char *new_str;

	len1 = _strlen(s1);
	if (*s1 == '\0')
		_strncpy(s1, "", sizeof(s1));
	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (!new_str)
		return (NULL);
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		if (s2[n])
		{
			new_str[i] = s2[j];
			i++;
		}
	}
	new_str[i] = '\0';
	return (new_str);
}
