#include <stdio.h>
/**
 * main - prints numbers from 1 to 100 accordingly
 *
 * Return: 1
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 )
			printf("Fizz ");
		if (i % 5 == 0)
			printf("Buzz ");
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (1);
}
