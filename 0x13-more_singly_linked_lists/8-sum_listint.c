#include "lists.h"
#include <stdio.h>

/**
 * sum_listint -  returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to head pointer of list.
 *
 * Return: the sum of all the data (n) of a listint_t linked list.
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;


	if (!head)
		return (0);

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);

}
