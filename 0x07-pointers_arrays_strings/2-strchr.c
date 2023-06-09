#include "main.h"
#include <stdio.h>


/**
 * _strchr -  function that locates a character in a string.
 * @s: pointer to area of memory for search.
 * @c: char to find.
 * Return: a pointer to the first occurrence of
 * the character c in the string s,
 *  or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
	}
	return (NULL);

}
