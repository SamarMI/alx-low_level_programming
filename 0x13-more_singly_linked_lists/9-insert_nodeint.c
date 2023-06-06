
#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - that inserts a new node at a given position.
 * @head: pointer to head pointer of list.
 * @idx: index of of node will be insert.
 * @n: data of node inserting .
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !(*head))
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp = (*head);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}

	return (NULL);

}
