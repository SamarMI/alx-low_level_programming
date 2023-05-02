#include "main.h"
#include <stdio.h>

/**
 * print_array - that prints n elements of an array of integers.
 * @a: the pointer to array
 * @n: is the number of elements of the array to be printed.
 * followed by a new line.
 */


void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");

}
