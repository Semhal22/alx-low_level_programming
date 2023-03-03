/**
 * _strlen - calculates length of a string
 * @string: string
 * Return: length of the string
 */
int _strlen(char *string)
{
	int len;

	len = 0;
	while (string[len] != '\0')
		len++;
	return (len);
}
/**
 * add_strings - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: sum of numbers
 * @size_r: size of r
 * Return: sum of numbers if successful
 * 0 if result cannot be stored in r
 */
char *add_strings(char *n1, char *n2, char *r, int size_r)
{
	int num, temp = 0;

	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += temp;
		*(r + size_r) = (num % 10) + '0';
		temp = num / 10;
	}
	for (; *n1; n1--, size_r--)
	{
		num = (*n1 - '0') + temp;
		*(r + size_r) = (num % 10) + '0';
		temp = num / 10;
	}
	for (; *n2; n2--, size_r--)
	{
		num = (*n2 - '0') + temp;
		*(r + size_r) = (num % 10) + '0';
		temp = num / 10;
	}
	if (temp && size_r >= 0)
	{
		*(r + size_r) = (temp % 10) + '0';
		return (r + size_r);
	}
	else if (temp && size_r < 0)
		return (0);
	return (r + size_r + 1);
}
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: where sum will be stored
 * @size_r: buffer size
 * Return: sum of numbers
 * 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	if (size_r <= len1 + 1 || size_r <= len2 + 1)
		return (0);

	n1 += len1 - 1;
	n2 += len2 - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));

}
