#include "main.h"

/**
 * puts_half - that print the second half of the string
 * @str: The pointer to the string.
 * followed by a new line.
 */


void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		for (i = ((len - 1) / 2); i < len ; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = ((len) / 2); i < len ; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');

}
