#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - prints the binary representation of a number.
 * @n: integer to be printed.
 * 
 */
void print_binary(unsigned long int n)
{
	unsigned long int shift = 1;
    int size = 0, binary = 0;

	if (!n)
    {
        _putchar('0');
        return;
    }
    size = sizeof(n) * 8;
	while (size)
	{
		if (n & shift << --size)
		{
			_putchar('1');
			binary++;
		}
		else
		{
			_putchar('0');
		}
	}

}
