#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int prev1, prev2, next;
	int i;

	prev1 = 1;
	prev2 = 2;
	i = 3;
	while (i <= 98)
	{
		next = prev1 + prev2;
		printf("%lu", next);
		prev1 = prev2;
		prev2 = next;
		if (i != 98)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
