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
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr)
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(width * sizeof(int));
			if (!arr[i])
			{
				while (--i >= 0)
					free(map[i]);
			}
		}
		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
				arr[i][j] = 0;
		return (arr);
	}
	free(arr);
	return (NULL);
}
