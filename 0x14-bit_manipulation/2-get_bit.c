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
	int i;

	i = (n >> (index)) % 2;
	if (i == 0 || i == 1)
		return (i);
	return (-1);
}
