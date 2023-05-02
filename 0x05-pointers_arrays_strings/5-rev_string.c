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

	while (*(s + i) != '\0')
	{
		*(str + i);
		i++;
	}
	*(str + i) = '\0';
	while (*(str + i - 1) != '\0')
	{
		s[j] = *(str + i - 1);
		i--;
		j++;
	}
	_putchar('\n');

}
