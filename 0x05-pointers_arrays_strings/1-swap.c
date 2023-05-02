#include "main.h"

/**
 * swap_int - that takes a pointer to two int as parameters
 * and swap the values of this pointers
 * @n: The pointer to the value1 to swap
 * @b: The pointer to the value2 to swap
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;

}
