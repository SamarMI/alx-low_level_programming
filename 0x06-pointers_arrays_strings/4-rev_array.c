#include "main.h"

/**
 * reverse_array - that compares two strings
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - i - 1] = temp;
		i++;
	}

}
