#include <stdio.h>
/**
 * print_array - print n number of elements of array
 * @a: array
 * @n: no of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
