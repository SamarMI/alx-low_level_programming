
#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to head pointer of list.
 * @index: index of of node will be delete.
 *
 * Return: Returns: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *deleted_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = (*head);
	deleted_node = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	deleted_node = temp->next;
	temp->next = deleted_node->next;
	free(deleted_node);

	return (1);
}
