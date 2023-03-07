/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: character to be located
 * Return: NULL if character not found
 * pointer to the first occurence of character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
