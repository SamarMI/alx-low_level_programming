#include <stdio.h>
#include "lists.h"

/**
 * list_len - print  all elements in linked list
 * @h: pointer to head of list.
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);

}
