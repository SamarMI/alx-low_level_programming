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
	unsigned int  i = 0;
	unsigned int  j = 0;
	unsigned int  size1 = 0;
	unsigned int  size2 = 0;
	char *p;

	if (s1 == 0 && s2 == 0)
	{
		return (NULL);
	}
	while (*(s1 + size1) != '\0')
	{
		size1++;
	}
	while (*(s2 + size2) != '\0')
	{
		size2++;
	}
	p = (char *)malloc(sizeof(char) * (size1 + size2) + 1);
	if (p == NULL)
	{
		return (0);
	}
	if(s1)
	{
		while (i < (size1))
		{
			*(p + i) = *(s1 + i);
			i++;
		}
	}
	if(s2)
	{
		while (j < (size2))
		{
			*(p + i + j) = *(s2 + j);
			j++;
		}
	}
	*(p + j + i) = '\0';
	return (p);

}
