#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest.
 * @dest: pointer to area of memory dest.
 * @src: pointer to area of memory src.
 * @n: numbers of bytes will be cpoy.
 * Return: poiner to area of memory after filled.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
