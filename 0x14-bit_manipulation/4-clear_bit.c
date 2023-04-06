#include "main.h"
/**
 * clear_bit - Sets value of a bit to 0 at index
 * @n: Pointer to number
 * @index: Index of number
 *
 * Return: 1 if successful, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n &= (~(1 << index));
	return (1);
}
