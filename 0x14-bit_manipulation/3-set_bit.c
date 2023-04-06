#include "main.h"
/**
 * set_bit - Sets value of a bit at given index to 1
 * @n: Pointer to number
 * @index: Index strating from 0
 *
 * Return: 1 if successful, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n |= (1 << index);
	return (1);
}
