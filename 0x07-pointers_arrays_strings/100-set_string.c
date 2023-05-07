#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char.
 *
 * @s:  pointer to pointer we need to set to.
 * @to: ponter to array of chars to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
