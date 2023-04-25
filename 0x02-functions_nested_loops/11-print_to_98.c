#include "main.h"

/**
 *  prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59.
 */
void print_to_98(int n)
{
	int i = n;

	if (n <= 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i--;
		}
	}

}
