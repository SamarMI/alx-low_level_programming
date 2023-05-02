#include "main.h"

/**
 * _puts - that prints a string.
 * followed by a new line.
 * @str: The pointer to the string to know it's length
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');

}
