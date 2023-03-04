#include <stdio.h>
#include "main.h"
/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer to be printed
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%.8x:", i);
			for (j = i; j < i + 10; j++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", *(b + j));
				else
					printf(" ");
			}
			printf(" ");
			for (k = j; k < j + 10; j++)
			{
				if (k >= size)
					break;
				if (*(b + 1) < 32 || *(b + 1) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + 1));
			}
			printf("\n");
		}
	}

