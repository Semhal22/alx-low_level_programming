#include <stdio.h>
#include "search_algos.h"
/**
 * print_array - Prints an array
 * @array: pointer to the first element of the array
 * @start: start index of the array
 * @end: end of the array
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start < end)
	{
		printf("%d, ", array[start]);
		start++;
	}
	printf("%d\n", array[end]);
}
/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for(value doesn't appear more
 * than once in the array)
 *
 * Return: First index where value is located or -1 if array is NULL or
 * if value is not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, m, r;

	l = 0;
	m = 0;
	r = size - 1;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
