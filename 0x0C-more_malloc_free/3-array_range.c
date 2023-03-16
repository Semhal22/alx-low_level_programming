#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to the newly created array
 * NULL if malloc failure
 */
int *array_range(int min, int max)
{
	int *array;
	int i, len;

	len = max - min + 1;
	printf("%d\n", len);
	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		array[i] = min;
		min += 1;
	}
	return (array);
}
