#include "header.h"

/**
 * print_last_digit - prints the last digit of a number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int res;

	if (n < 0)
	{
		n = -n;
	}
	res = n % 10;
	_putchar(res + '0');
	return (res);

}
