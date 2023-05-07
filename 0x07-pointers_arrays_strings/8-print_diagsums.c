#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the sum of
 * the two diagonals of a square matrix of integers.
 *
 * @a:  square matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	int n = size * size;

	for (i = 0; i < n; i += (size + 1))
	{
		sum1 += a[i];
	}
	for (i = size - 1; i < n - 1; i += (size - 1))
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);


}
