#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - dds a new node at the end of a list_t list.
 * @head: pointer to head pointer of list.
 * @n: integer data of node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tail_ptr;


	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
		(*head) = new_node;
	else
	{
		tail_ptr = (*head);
		while (tail_ptr->next)
			tail_ptr = tail_ptr->next;
		tail_ptr->next = new_node;
	}

	return (new_node);

}
