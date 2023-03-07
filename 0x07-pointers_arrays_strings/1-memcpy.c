/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: how many bytes it copies
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
