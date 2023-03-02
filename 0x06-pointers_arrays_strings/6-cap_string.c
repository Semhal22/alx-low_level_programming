/**
 * word_separator - checks if character is found in the listed array
 * @prev: character to be checked
 * Return: 1 if it is there
 * 0 if not
 */
int word_separator(char prev)
{
	char separator[13] = {' ', '\t', '\n', ',', '.', ';', '!',
		'?', '"', '(', ')', '{', '}'};
	int i;

	for (i = 0; i < 13; i++)
	{
		if (prev == separator[i])
			return (1);
	}
	return (0);
}
/**
 * cap_string - capitalizes all words of a string
 * @string: string to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *string)
{
	int i, separator;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (i == 0 && string[i] >= 97 && string[i] <= 122)
		{
			string[i] -= 32;
			continue;
		}
		separator = word_separator(string[i - 1]);
		if (separator == 1 && string[i] >= 97 && string[i] <= 122)
			string[i] -= 32;
	}
	return (string);
}
