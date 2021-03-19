#include "lists.h"

/**
 *free_list - frees a list
 *@head: pointer to the list
 *Return: Nothing
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
