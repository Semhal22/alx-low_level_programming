#include <unistd.h>

/**
 * _isalpha - checks for alphabet
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
