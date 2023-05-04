#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len1;
	int i;

	while (*(dest + len1) != '\0')
	{
		len1++;
	}
	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + len1 + i) = *(src + i);
		i++;
	}
	*(dest + len1 + i) = '\0';
	return (dest);

}
