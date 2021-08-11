#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning of a list
 *@head: pointer to a pointer to the head of a list
 *@n: const integer to be added to the list_t list
 *Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);
	/* create a new node */
	new_n->n = n;
	new_n->prev = NULL;
	new_n->next = NULL;
	/* head assignment by new node if the list is empty*/
	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	else
	{
		(*head)->prev = new_n;
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
}
