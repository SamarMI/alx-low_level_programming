#include "main.h"

/**
 * print_most_numbers - t prints the numbers, from 0 to 9
 * Do not print 2 and 4
 * use _putchar function
 * followed by a new line.
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');

}
