#include "lists.h"
#include <stdio.h>
#include <string.h>


/**
 * add_node - dds a new node at the beginning of a list_t list.
 * @head: pointer to head pointer of list.
 * @str: pointer to string data of node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return(NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (!*head)
	{
		(*head) = new_node; 
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head) = new_node; 
	}

	return (new_node);

}
