#include "main.h"
#include <stdio.h>

/**
 *  print_to_98 - prints every minute of the day
 *  of Jack Bauer,
 *  @n: the int to start
 *  starting from 00:00 to 23:59.
 */
void print_to_98(int n)
{
	int i = n;

	if (n <= 98)
	{
		while (i <= 98)
		{
			if (i != 98)
			{
				printf("%d ,", i);
			}
			else
			{
				printf("%d\n", i);
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
				printf("%d ,", i);
			}
			else
			{
				printf("%d\n", i);
			}
			i--;
		}
	}

}
