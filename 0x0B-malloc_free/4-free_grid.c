#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees
 * a 2 dimensional grid previously created by your alloc_grid function.
 * @grid: pinter to array.
 * @height:height of array.
 */
void free_grid(int **grid, int height)
{
	int  i, j;

	for (i = 0; i < height; i++)
	{
			free(grid);
			for (j = 0; j <= height; j++)
			{
				free(grid[j]);
			}
		}
	}

}
