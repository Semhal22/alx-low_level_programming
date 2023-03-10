#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: Error if 2 arguments are not provided
 */
int main(int argc, char *argv[])
{
	int a, b, mult;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mult = a * b;
		printf("%d\n", mult);
	}
	else
	{
		puts("Error");
		return (1);
	}
	return (0);
}
