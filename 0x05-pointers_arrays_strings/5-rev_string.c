#include "main.h"

/**
 * rev_string -  function that reverses a string.
 * @s: The pointer to the string to reverse it.
 */


void rev_string(char *s)
{
	int i = 0;
	int len;
	char temp;

	while (*(s + i) != '\0')
	{
		i++;
	}
	len = i;
	for (i = 0; i < len / 2; i++)
	{
		temp = *(s + i);
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}
