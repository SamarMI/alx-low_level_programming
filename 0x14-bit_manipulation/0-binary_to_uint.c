#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string which will be converted.
 *
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, power = 1;
	int length = 0;

	if (!b)
		return (0);

	while (b[length])
	{
		if (b[length] != 48 && b[length] != 49)
			return (0);
		length++;
	}

	for (length--; length >= 0; power *= 2)
	{
		if (b[length] == 49)
			total += power;
		length--;
	}
	return (total);
}
