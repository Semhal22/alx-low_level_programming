/**
 * rot13 - encodes a string by rotating 13 places
 * @string: string to be rotated
 * Return: rotated string
 */
char *rot13(char *string)
{
	int i, j;
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; string[i] != '\0'; i++)
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (string[i] == alphabet[j])
			{
				string[i] = rot13[j];
				break;
			}
		}
	return (string);
}
