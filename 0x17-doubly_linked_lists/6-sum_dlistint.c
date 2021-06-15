#include "lists.h"

/**
 *sum_dlistint - returns the sum of all the data (n) of a linked list
 *@head: pointer to the list
 *Return: total sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_nodes = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum_nodes += temp->n;
		temp = temp->next;
	}
	return (sum_nodes);
}
