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

	ptr = head;
	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}

}
