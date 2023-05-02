#include "main.h"

/**
 * _strcpy - that copies the string pointed to by src.
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: The pointer to the dest string.
 * @src: the pointerto src of a string which will copy
 * Return: the pointer to dest
 */


char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);

}
