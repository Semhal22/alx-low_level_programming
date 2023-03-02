/**
 * encode_str - encodes string
 * @str: string to be encoded
 * Return: the proper value after being encoded
 */
char encode_str(char str)
{
	char strings[10] = {'a', 'A', 'e', 'E',
		'o', 'O', 't', 'T', 'l', 'L'};
	char encoded[10] = {4, 4, 3, 3, 0, 0, 7,
		7, 1, 1};
	int i;

	for (i = 0; i < 10; i++)
	{
		if (str == strings[i])
			return (encoded[i] + '0');
	}
	return (str);
}
/**
 * leet - encodes a string
 * @string: string to be encoded
 * Return: encoded string
 */
char *leet(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		string[i] = encode_str(string[i]);
	return (string);
}
