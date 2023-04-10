#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two digits
 * Prints the result if successful Else it prints
 * error and exits with status of 98
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, j;
	int *mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = malloc(sizeof(argv[1]) * sizeof(argv[2]));
	printf("%ld\n", sizeof(mul));
	printf("%d\n", atoi(argv[1]));
	*mul = strtol(argv[1]) * strtol(argv[2]);
	printf("%d\n", *mul);
	free(mul);
	return (0);
}
