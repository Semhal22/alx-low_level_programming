#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if they are equal
 * positive number if s1 is greater than s2
 * negative number if s1 is less than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k, diff;
	int len1, len2, len;

	len1 = 0;
	len2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	if (len1 > len2)
		len = len1;
	else if (len1 < len2)
		len = len2;
	else
		len = len1;
	for (k = 0; k < len; k++)
	{
		if (s1[k] != s2[k])
		{
			diff = s1[k] - s2[k];
			return (diff);
		}
	}
	return (0);
}
