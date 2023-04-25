#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int for print it's last digit
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
	if (res < 0)
	{
		res = -res;
	}
	_putchar(res + '0');
	return (res);

}
