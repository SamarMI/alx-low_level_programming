#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: integer to be printed.
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int s = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n; (temp >>= 1) > 0; s++)
		;

	for (; s >= 0; s--)
	{
		if ((n >> s) & 1)
			printf("1");
		else
			printf("0");
	}

}
