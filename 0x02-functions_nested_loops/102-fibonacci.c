#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int prev1, prev2, num;
	int i;

	prev1 = 1;
	prev2 = 2;
	i = 2;
	printf("%lu, %lu, ", prev1, prev2);
	while (i < 50)
	{
		num = prev1 + prev2;
		printf("%lu", num);
		if (i != 49)
			printf(", ");
		prev1 = prev2;
		prev2 = num;
		i++;
	}
	printf("\n");
	return (0);
}
