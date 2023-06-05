#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - The function sets the head to NULL.
 * @head: pointer to head pointer of list.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		(*head) = ptr;
	}
	(*head) = NULL;

}
