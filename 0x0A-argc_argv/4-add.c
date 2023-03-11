#include <stdio.h>
#include <string.h>
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
	int i, sum = 0;
	unsigned int j;
	char *num;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = argv[i];
			for (j = 0; j < strlen(num); j++)
			{
				if (num[j] < 48 || num[j] > 57)
				{
					puts("Error");
					return (1);
				}
			}
			sum += atoi(num);
		}
		printf("%d\n", sum);
	}
	return (0);
}
