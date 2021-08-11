#include "lists.h"
#include <string.h>

/**
 *delete_nodeint_at_index - deletes the node at index of a linked list
 *@head: pointer to a pointer to the head of a list
 *@index: index of the list where the new node is added
 *Return: 1 if succcessful and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_n = *head; /* previous node */
	listint_t *then_n; /* node after which it is deleted */
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);
	else if (index == 0)   /* node head */
	{
		prev_n = prev_n->next;
		free(*head);
		*head = prev_n;
		return (1);
	}
	/* traverse to the n-1 position */
	else
	{
		for (; counter < (index - 1); counter++)
		{
			if (prev_n->next == NULL)  /* as the last node */
				return (-1);
			prev_n = prev_n->next;
		}
		/* set n-1 link as n+1 link */
		then_n = prev_n->next;
		prev_n->next = then_n->next;
		free(then_n);
		return (1);
	}
}
