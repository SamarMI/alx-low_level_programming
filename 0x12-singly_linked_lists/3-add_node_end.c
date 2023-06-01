#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - dds a new node at the end of a list_t list.
 * @head: pointer to head pointer of list.
 * @str: pointer to string data of node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tail_ptr;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
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
