#include "header.h"

/**
 * _abs - computes the absolute value of an integer
 * Return: the absolute value of int
 */
int _abs(int n)
{
	int res = n;

	if (res < 0)
	{
		res = res * -1;
	}
	return (res);

}
