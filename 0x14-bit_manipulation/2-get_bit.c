#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: an integer  bit you want to get..
 * @index: the index, starting from 0 of the bit you want to get.
 * Return:  the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
		return (-1);
	temp = n >> index;

	return (temp & 1);
}
