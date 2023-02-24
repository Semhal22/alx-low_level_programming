#include <stdio.h>
/**
 * main - prints the largest prime factor
 *
 * Return: 1
 */
void main(void)
{
	int i, num, largestPrime;

	num = 612852475143;
	for (i = 2; num > 1; i++)
	{
		while (num % i == 0)
		{
			largestPrime = i;
			num = num / i;
		}
	}
}
