#include"main.h"

/**
 * main - is print the alphabet, in lowercase
 * use _putchar function
 * Return: void.
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
