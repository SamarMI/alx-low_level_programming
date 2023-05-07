#include "main.h"
#include <stdio.h>

/**
 * _strstr - function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared.
 * @haystack: pointer to the first occurrence in the string.
 * @needle: pointer to the substring.
 * Returns: Returns a pointer to the beginning
 * of the located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int n = 0;
	char *res = NULL;

	while (needle[n] != '\0')
	{
		n++;
	}

	while (haystack[i] != '\n')
	{
		if (needle[j] == haystack[i])
		{
			for (j = 1; j < n; j++)
			{
				if (needle[j] != haystack[i + j])
				{
					break;
				}
			}
			if (j == n)
			{
				res = haystack + i;
				break;
			}
		}
		i++;
	}
	return (res);

}
