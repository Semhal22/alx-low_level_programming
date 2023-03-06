/**
 * _memset - fills the first n bytes of memory
 * byt the constant byte
 * @s: starting address
 * @b: the constant byte to replace
 * @n: n bytes of memory
 * Return: a pinter to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned *char ptr = s;

	while (n--)
	{
		*ptr++ = (unsigned char)b;
	}
	return (s);
}
