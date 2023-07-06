#include "main.h"
#include <stdio.h>

/**
 * print_binary -  fn to prints the binary
 * representation of a number.
 * @n: integer to be printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int k = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n; (temp >>= 1) > 0; k++)
		;

	for (; k >= 0; k--)
	{
		if ((n >> k) & 1)
			printf("1");
		else
			printf("0");
	}

}
