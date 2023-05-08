#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer to the initial segment.
 * @accept: pointer to the accept segment.
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j,k;
	unsigned int res = 0;

	while (s[i] != '\0')
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				res++;
				k = 1;
				break;
			}
		}
		if (k == 0)
		{
			break;
		}
		i++;
	}
	return (res);

}
