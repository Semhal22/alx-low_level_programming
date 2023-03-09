/**
 * _strlen - calculatess length of a string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	if (*str)
		return (1 + _strlen(str + 1));
	else
		return (0);
}
/**
 * check_palindrome - recursive function to check if palindrome
 * @s: string to be checked
 * @f: index of character going forward
 * @r: index of character going in reverse
 *
 * Return: 1 if palindrome
 * 0 if not
 */
int check_palindrome(char *s, int f, int r)
{
	if (f < 0 || r < 0)
		return (0);
	if (f >= r)
		return (1);
	if (s[f] == s[r])
		return (check_palindrome(s, f + 1, r - 1));
	else
		return (0);
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 * Return: 1 if it is and 0 if not
 */
int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	if (len == 0)
		return (1);
	return (check_palindrome(s, i, len - 1));
}
