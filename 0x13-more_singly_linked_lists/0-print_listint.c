#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print  all elements in linked list
 * @h: pointer to head of list.
 *
 * Return: the number of of elements in a linked listint_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);

}
