#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive integers
 * @argc: number of arguments
 * @argv: arrays of strings
 *
 * Return: 1 if symbols that are not numbers are included
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (num)
				sum += num;
			else
			{
				puts("Error");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
