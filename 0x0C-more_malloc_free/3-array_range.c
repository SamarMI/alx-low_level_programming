#include <stdlib.h>
#include "main.h"

/**
 * *array_range - a function that creates an array of integers.
 * @min: number of elements in the array
 * @max: size of each element
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j, size = 0;

	if (min > max)
		return (NULL);

	size = (max - min + 1);  
	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);
	j = min;
	for (i = 0; i < size; i++)
	{
		if(j <= max)
			p[i] = j;
		j++;
	} 
	return (p);
}
