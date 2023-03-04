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
			for (j = 0; j < 10; j++)
			{
				if ((i + j) >= size)
					printf(" ");
				else
					printf("%02x", *(b + i + j));
				if ((j % 2) != 0 && j != 0)
					printf(" ");
			}
			for (k = 0; k < 10; k++)
			{
				if ((i + k) >= size)
					break;
				if (*(b + i + k) < 32 || *(b + i + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + i + k));
			}
			printf("\n");
		}
	}
}
