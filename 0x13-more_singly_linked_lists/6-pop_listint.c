#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: pointer to pointer to the list
 *Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n; /* head node’s data */
	listint_t *ptr_temp = *head;

	if (*head == NULL)   /* linked list is empty */
	{
		return (0);
	}
	else
	{
		 /* head data reference and move pointer head to next node */
		n = ptr_temp->n;
		ptr_temp = ptr_temp->next;
		free(*head); /* free without fear of losing the linked list  */
		*head = ptr_temp;
	}
	return (n);
}
