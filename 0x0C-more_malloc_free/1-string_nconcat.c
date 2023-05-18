#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat-  a function that concatenates two strings.
 * The returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If n is greater or equal to the length of s2 then use the entire string s2.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes of s2 which will concat to s1.
 * Return: Returns a pointer to the allocated memory.
 * If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n > size2)
		n = size2;
	p = malloc(sizeof(char) * (size1 + n) + 1);
	if (p == NULL)
		return (NULL);
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
		while (i < (n + size1))
		{
			*(p + i) = *(s2 + j);
			j++;
			i++;
		}
	}
	*(p + i) = '\0';
	return (p);

}
