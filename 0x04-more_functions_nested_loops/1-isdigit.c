#include <unistd.h>

/**
 * _isdigit - checks for digit through 1 to 9
 * @c: digit to be checked by function
 *
 * Return: 1 if success
 * 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
