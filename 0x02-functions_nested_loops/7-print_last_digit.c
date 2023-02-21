#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @n: number to be computed
 *
 * Return: Last digit
*/
int print_last_digit(int n)
{
	char last;

	last = n % 10;
	_putchar(last);
	return (last);
}
