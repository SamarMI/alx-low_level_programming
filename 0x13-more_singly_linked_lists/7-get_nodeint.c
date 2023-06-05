#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head pointer of list.
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;


	if (!head)
		return (NULL);

	temp = head;

	while (temp && (i < index))
	{
		temp = temp->next;
		i++;
	}

	return (temp);

}
