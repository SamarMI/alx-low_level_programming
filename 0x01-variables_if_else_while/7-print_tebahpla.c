#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -prints owercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
