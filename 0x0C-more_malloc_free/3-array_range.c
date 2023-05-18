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
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}