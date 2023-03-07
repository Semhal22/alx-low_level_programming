#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: character to be located
 * Return: NULL if character not found
 * pointer to the first occurence of character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
