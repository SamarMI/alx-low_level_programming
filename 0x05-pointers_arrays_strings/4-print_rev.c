#include "main.h"

/**
 * print_rev - that prints a string in reverse.
 * followed by a new line.
 * @s: The pointer to the string to know it's length
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (*(s + i - 1) != '\0')
	{
		_putchar(*(s + i - 1));
		i--;
	}
	_putchar('\n');

}
