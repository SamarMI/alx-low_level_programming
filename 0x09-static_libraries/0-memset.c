#include "main.h"

/**
 * *_memset - function fills the first n bytes of the memory area with cons b.
 * @s: pointer to area of memory.
 * @b: constant byte.
 * @n: numbers of bytes will be filled.
 * Return: poiner to area of memory after filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}
