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
	arr = malloc(height * sizeof(int *));
	if (!arr)
		return (NULL);
	while (i < height)
	{
		arr[i] = malloc(width * sizeof(int));
		i++;
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
