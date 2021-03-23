#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: pointer to the list
 *Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n; /* head node’s data */

	if (*head == NULL)   /* linked list is empty */
	{
		return (0);
	}
	else
	{
		 /* head data reference and move pointer head to next node */
		n = (*head)->n;
		*head = (*head)->next;
		free(*head); /* free without fear of losing the linked list  */
	}
	return (n);
}
