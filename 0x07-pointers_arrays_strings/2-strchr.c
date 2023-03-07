/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: character to be located
 * Return: NULL if character not found
 * pointer to the first occurence of character
 */
char *_strchr(char *s, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}
