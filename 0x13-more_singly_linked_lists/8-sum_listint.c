#include "lists.h"

/**
 *sum_listint - returns the sum of all the data (n) of a linked list
 *@head: pointer to the list
 *Return: total sum of nodes
 */
int sum_listint(listint_t *head)
{
	/* create a temporary pointer to better visualize the current node */
	listint_t *ptr_temp = head;
	int total_sum = 0;

	while (ptr_temp != NULL)
	{
		total_sum += ptr_temp->n; /* add value of currrent node to sum total */
		ptr_temp = ptr_temp->next;
	}
	return (total_sum);
}
