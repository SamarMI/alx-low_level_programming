#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to head pointer of list.
 * @n: integer data of node.
 *
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr_node;
	int num;


	if (!head || !*head)
		return (0);

	num = (*head)->n;
	ptr_node = (*head)->next;
	free(*head);
	(*head) = ptr_node;

	return (num);

}
