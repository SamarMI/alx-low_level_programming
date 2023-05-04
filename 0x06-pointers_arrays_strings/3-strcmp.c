#include "main.h"

/**
 * _strcmp - that compares two strings
 * @s1: First string is taken as a pointer to the constant character.
 * @s2: Second string is taken as a pointer to a constant character.
 * Return: integer where less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		i++;
	}
	if (s2[i] != '\0')
	{
		res = s1[i] - s2[i];
	}
	return (res);

}
