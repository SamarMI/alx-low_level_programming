#include <stdio.h>
#include "lists.h"

/**
 * listint_len - print  all elements in linked list
 * @h: pointer to head of list.
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);

}
