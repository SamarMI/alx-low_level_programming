#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * use _putchar function
 * followed by a new line.
 */
void more_numbers(void)
{
	int i;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar('1');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}

}
