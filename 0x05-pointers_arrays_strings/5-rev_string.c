#include "main.h"

/**
 * print_rev - that prints a string in reverse.
 * followed by a new line.
 * @s: The pointer to the string to know it's length
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;
	char *str;

	while (*(s + i) != '\n')
	{
		*(str + i);
		i++;
	}
	*(str + i) = '\n';
	while (*(str + i - 1) != '\n')
	{
		s[j] = *(str + i - 1);
		i--;
		j++;
	}
	_putchar('\n');

}
