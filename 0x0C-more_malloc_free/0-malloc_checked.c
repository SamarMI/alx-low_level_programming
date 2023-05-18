#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc.
 * if malloc fails, the malloc_checked function should cause normal process
 * termination with a status value of 98.
 * @b: number of bytes will be allocated.
 * Return: Returns a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
