#include "main.h"

/**
 * _strlen - that returns the length of a string.
 * @s: The pointer to the string to know it's length
 * Return: return the the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\n')
	{
		i++;
	}
	return (i);

}
