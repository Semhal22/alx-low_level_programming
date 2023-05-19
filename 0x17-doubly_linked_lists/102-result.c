#include <stdio.h>
/**
 * reverse_digit - Reverses a digit
 * @digit: The digit to reverse
 *
 * Return: Reversed digit
 */
int reverse_digit(int digit)
{
	int remainder, reverse = 0;

	while (digit > 0)
	{
		remainder = digit % 10;
		reverse = reverse * 10 + remainder;
		digit /= 10;
	}
	return (reverse);
}
/**
 * main - finds the largest palindrome made from the product of 3 digit numbers
 * Return: 0
 */
int main(void)
{
	int max_product = 0;
	int i, j, a, b, product, reverse;

	for (i = 999; i >= 100; i--)
	{
		for (j = i; j >= 100; j--)
		{
			product = i * j;
			reverse = reverse_digit(product);
			if (product == reverse && product > max_product)
			{
				max_product = product;
				a = i;
				b = j;
			}
		}
	}
	printf("%d * %d = %d is the largest palindrome\n", a, b, max_product);
	return (0);
}
