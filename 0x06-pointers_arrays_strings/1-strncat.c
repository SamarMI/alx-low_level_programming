#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1 = 0;

	while (*(dest + len1) != '\0')
	{
		len1++;
	}
	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + len1 + i) = *(src + i);
		i++;
	}
	*(dest + len1 + i) = '\0';
	return (dest);

}
