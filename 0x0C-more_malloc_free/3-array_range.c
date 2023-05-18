#include <stdlib.h>
#include "main.h"

/**
 * *array_range -a function that creates an array of integers.
 * @min: number of elements in the array
 * @max: size of each element
 *
 * Return: pointer to allocated memory
 * If nmemb or size is 0, then _calloc returns NULL
 */
int *array_range(int min, int max)
{
	char *p;
	int i, j, size = 0;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		size++;
	}   
	p = malloc(size -1);

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
