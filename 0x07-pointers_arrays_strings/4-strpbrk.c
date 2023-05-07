#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: pointer to the first occurrence in the string.
 * @accept: pointer to the accept string.
 * Returns: Returns a pointer to the byte in s
 * that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j, k;
	char *res;

	while (s[i] != '\n')
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				res = s + i;
				k = 1;
				break;
				break;
			}
		}
		if (k == 1)
		{
			break;
		}
		i++;
	}
	if (k == 0)
	{
		res = NULL;
	}
	return (res);

}
