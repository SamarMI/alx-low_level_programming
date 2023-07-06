#include "main.h"
#include <stdio.h>
/**
 * clear_bit - fn to set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 *
 * Return: Returns: 1 if it worked,
 * or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;
	unsigned int temp;

	if (index > 64)
		return (-1);
	temp = index;
	for (m = 1; temp > 0; m *= 2, temp--)
		;

	if ((*n >> index) & 1)
		*n -= m;

	return (1);
}
