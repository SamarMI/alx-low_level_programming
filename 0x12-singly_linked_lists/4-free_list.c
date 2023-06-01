#include "lists.h"
#include <stdio.h>

/**
 * free_list - free list.
 * @head: pointer to head of list.
 *
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}

}
