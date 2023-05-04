#include "main.h"

/**
 * string_toupper - that changes all lowercase
 * letters of a string to uppercase.
 * @str: is the pointer to string which will changed to uppercase.
 * Return: pointer to string with uppercase
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
