#include <stdlib.h>
#include <stdio.h>

/**
 * main is prints all possible different combinations of two digit
 *  followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int m;

	for (n = '0'; n <= '8'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			putchar(n);
			putchar(m);
			if (n < '8' || m < '9')
			{
				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');
	return (0);

}
