#include <stdlib.h>
#include "main.h"

/**
 * *str_concat -   a function that concatenates two strings.
 * @s1: string 1 .
 * @s2: string 2 to concatenates to string1
 * Return: returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 * if NULL is passed, treat it as an empty string
 *  The function should return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int  i = 0, j = 0, size1 = 0, size2 = 0;
	char *p;

	while (s1 && s1[size1])
	{
		size1++;
	}
	while (s2 && s2[size2])
	{
		size2++;
	}
	p = malloc(sizeof(char) * (size1 + size2) + 1);
	if (p == NULL)
		return (0);
	if (s1)
	{
		while (i < (size1))
		{
			*(p + i) = *(s1 + i);
			i++;
		}
	}
	if (s2)
	{
		while (i < (size2 + size1))
		{
			*(p + i) = *(s2 + j);
			j++;
			i++;
		}
	}
	*(p + i) = '\0';
	return (p);

}
