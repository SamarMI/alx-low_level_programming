#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid -a function that returns a pointer
 *  to a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0
 * @width: string 1 .
 * @height: string 2 to concatenates to string1
 * Return: return NULL on failure
 * if width or height is 0 or negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int  i, j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
			{
				free(arr[j]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);

}
