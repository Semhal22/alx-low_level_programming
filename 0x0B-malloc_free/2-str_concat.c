#include <stdlib.h>
/**
 * _strlen - calculates length of a string
 * @str: the string
 *
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * str_concat - concatentates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1 = 0, len2 = 0, i = 0, j = 0, len;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);
	len = len1 + len2;
	str = malloc((len + 1) * sizeof(char));
	if (str)
	{
		while (i < len1)
		{
			str[i] = s1[i];
			i++;
		}
		while (j < len2)
		{
			str[i] = s2[j];
			i++;
			j++;
		}
		return (str);
	}
	else
		return (NULL);
}
