/**
 * _strcmp - compares two strings
 * @str1: first string
 * @str2: second string
 * @i: index of first string
 * @j: index of second string
 *
 * Return: 1 if similar, 0 if not
 */
int _strcmp(char *str1, char *str2, int i, int j)
{
	if (str1[i] == '\0' && str2[j] == '\0')
		return (1);
	if (str1[i] == str2[j])
		return (_strcmp(str1, str2, i + 1, j + 1));
	if (str1[i] == '\0' && str2[j] == '*')
		return (_strcmp(str1, str2, i, j + 1));
	if (str2[j] == '*')
		return (_strcmp(str1, str2, i + 1, j) || _strcmp(str1, str2, i, j + 1));
	return (0);
}
/**
 * wildcmp - calls another function _strcmp
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the strings can be considered identical
 * 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	return (_strcmp(s1, s2, 0, 0));
}
