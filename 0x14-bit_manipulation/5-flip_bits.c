#include "main.h"
/**
 * flip_bits - Calculates number of flip bits needed
 * @n: Number
 * @m: Second number
 *
 * Return: Number of flip bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0, a1, a2;

	while (n > 0 || m > 0)
	{
		a1 = (n & 1);
		a2 = (m & 1);

		if (a1 != a2)
			flips++;
		n >>= 1;
		m >>= 1;
	}
	return (flips);
}
