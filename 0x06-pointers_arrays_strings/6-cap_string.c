#include "main.h"

/**
 * cap_string - that capitalizes all words of a string.
 *
 * @str: is the pointer to string which will changed to uppercase.
 * Return: pointer to string with uppercase
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == separators[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
