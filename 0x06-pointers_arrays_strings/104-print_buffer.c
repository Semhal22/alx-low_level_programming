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
			printf("%08x: ", i);
			for (j = i; j < i + 10; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%02x", *(b + j));
				else
					printf(" ");
			}
			printf(" ");
			for (k = j; k < j + 10; k++)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + k));
			}
			printf("\n");
		}
	}
}
