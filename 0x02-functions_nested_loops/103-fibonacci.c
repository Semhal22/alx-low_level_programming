#include <stdio.h>
/**
 * main - sum of even numbers in the fibonacci series
 *
 * Return: 0
 */
int main(void)
{
	long int prev1, prev2, next, sum;

	prev1 = 1;
	prev2 = 2;
	sum = 2;
	while (prev2 < 4000000)
	{
		next = prev1 + prev2;
		if (next % 2 == 0)
			sum += next;
		prev1 = prev2;
		prev2 = next;
	}
	printf("%lu\n", sum);
	return (0);
}
