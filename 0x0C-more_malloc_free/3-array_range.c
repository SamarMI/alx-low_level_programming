#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: min range of values stored
 * @max: max range of values stored and number of elements
 *
 * Return: pointer to the new array
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
