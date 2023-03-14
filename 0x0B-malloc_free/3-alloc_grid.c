#include <stdlib.h>
/**
 * alloc_grid - allocates space to a 2D array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to a 2D array
 * Null otherwise
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(width * sizeof(int *));
	if (!arr)
		return (NULL);
	while (i < width)
	{
		arr[i] = malloc(height * sizeof(int));
		i++;
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	return (arr);
}
