#include "lists.h"

/**
 *free_listint2 - frees a list
 *@head: pointer to the list
 *Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr_temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		/* store next pointer before freeing the node */
		ptr_temp = (*head)->next;
		free(*head);
		*head = ptr_temp;
	}
	head = NULL; /* free all memory and set head to NULL */
}
