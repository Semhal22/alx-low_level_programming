/**
 * string_toupper - converts lowercase to uppercase
 * @string: string to be converted to uppercase
 * Return: converted string
 */
char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 97 && string[i] <= 122)
			string[i] -= 32;
	}
	return (string);
}
