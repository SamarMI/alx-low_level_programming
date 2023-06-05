#include "lists.h"
#include <stdio.h>

/**
 * free_list - free list.
 * @head: pointer to head of list.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}

}
