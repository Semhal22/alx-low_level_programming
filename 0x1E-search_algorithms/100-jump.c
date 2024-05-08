#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * min - finds the minimum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: minimum number
 */
size_t min(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}
/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: First index where value is located or -1 if array is NULL or
 * if value is not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, step;

	prev = 0;
	step = sqrt(size);
	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);

		if (prev >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	while (array[prev] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (prev == min(step, size))
			return (-1);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
