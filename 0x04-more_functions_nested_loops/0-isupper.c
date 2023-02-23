#include <unistd.h>

/**
 * _isupper - checks for uppercase
 * @c: letter to be checked with function
 *
 * Return: 1 if success
 * 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
