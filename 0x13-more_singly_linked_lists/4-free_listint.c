#include "lists.h"

/**
 *free_listint - frees a list
 *@head: pointer to the list
 *Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr_temp;

	while (head != NULL) /* list not empty */
	{
		 /* not lose access to the rest nodes */
		ptr_temp = head->next;
		free(head);
		head = ptr_temp;
	}
}
