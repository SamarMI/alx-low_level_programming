#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next_nod = NULL;

	while (*head)
	{
		next_nod = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_nod;
	}

	*head = prev_node;

	return (*head);
}
