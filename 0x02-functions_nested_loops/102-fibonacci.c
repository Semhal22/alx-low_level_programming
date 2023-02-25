#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int prev1, prev2, num, i;

	prev1 = 1;
	prev2 = 2;
	i = 0;
	printf("%d, %d, ", prev1, prev2);
	while (i < 50)
	{
		num = prev1 + prev2;
		printf("%d", num);
		if (i != 49)
			printf(", ");
		prev1 = prev2;
		prev2 = num;
		i++;
	}
	printf("\n");
	return (0);
}
