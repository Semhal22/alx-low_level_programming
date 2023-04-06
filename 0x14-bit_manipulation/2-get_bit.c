#include "main.h"
/**
 * get_bit - Returns value of a bit at a given index
 * @n: The number
 * @index: Index of bit
 *
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	return ((n >> (index)) & 1);
}
