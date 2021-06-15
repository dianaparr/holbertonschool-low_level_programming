#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index of a linked list
 *@head: pointer to a pointer to the head of a list
 *@index: index of the list where the new node is added
 *Return: 1 if succcessful and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int node = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = temp->next;
		/* The next node to where the temp pointer will be placed, */
		/* reference to NULL in prev */
		if (temp != NULL)
			temp->prev = NULL;
		free(*head);
		*head = temp;
		return (1);
	}
	while (temp->next != NULL)
	{
		if (node == (index - 1) && temp->next->next != NULL)
		{
			temp->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
			return (1);
		}
		else if (node == (index - 1) && temp->next->next == NULL)
		{
			free(temp->next);
			temp->next = NULL;
			return (1);
		}
		temp = temp->next;
		node++;
	}
	return (-1);
}
