#include "lists.h"
#include <string.h>

/**
 *reverse_listint - reverses a linked list
 *@head: pointer to a pointer to the head of a list
 *Return: a pointer to the first node (*head)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr_temp = *head;
	listint_t *ptr_rev;

	/* list there empty */
	if (ptr_temp == NULL)
		return (NULL);
	/* list with one node */
	if (ptr_temp->next == NULL)
		return (*head);
	ptr_rev = ptr_temp->next->next;
	ptr_temp = ptr_temp->next;
	(*head)->next = NULL;
	while (ptr_temp != NULL)
	{
		ptr_temp->next = *head;
		*head = ptr_temp;
		ptr_temp = ptr_rev;
		if (ptr_rev != NULL)
			ptr_rev = ptr_rev->next;
		else
			ptr_temp = NULL;
	}
	return (*head);
}
