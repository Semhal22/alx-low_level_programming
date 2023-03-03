/**
 * _strncat - concatenates two strings based on
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src
 *
 * Return: desitnation string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
