#include <stdlib.h>
/**
 * int_index - a function that searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element if elt is found in array
 * If not found or if size is less than 0 returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		exit(1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 0)
			continue;
		return (i);
	}
	return (-1);
}
