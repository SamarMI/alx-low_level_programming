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
	int i, size = 0;

	if (min > max)
		return (NULL);

	size = (max - min + 1);  
	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	} 
	return (p);
}
