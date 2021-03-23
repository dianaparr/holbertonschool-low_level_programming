#include "lists.h"

/**
 *free_listint - frees a list
 *@head: pointer to the list
 *Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr_temp;

	if (head != NULL) /* list not empty */
	{
		ptr_temp = head;
		head = head->next;
		free(ptr_temp);
	}
}
