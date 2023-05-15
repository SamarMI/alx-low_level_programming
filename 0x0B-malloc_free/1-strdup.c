#include <stdlib.h>
#include "main.h"

/**
 * *_strdup -  a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied.
 * Return: Returns NULL if str = NULL OR On success,
 * the _strdup function returns a pointer to the duplicated string.
 *  It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int  i = 0;
	unsigned int  j = 0;

	if (str == 0)
	{
		*p = NULL;
	}
	while (*(str + i) != '\0')
	{
		i++;
	}
	p = (char *)malloc(sizeof(char) * i + 1);
	while (j < i)
	{
		*(p + j) = *(str + j);
		j++;
	}
	*(p + j) = '\0';
	return (p);

}
