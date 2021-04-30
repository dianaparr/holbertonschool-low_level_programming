#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a list
 *@head: pointer to a pointer to the head of a list
 *@n: const integer to be added to the list_t list
 *Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n, *t; /* t is the control pointer */

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	/* new_n will be the last node and will point to NULL */
	new_n->next = NULL;
	if (*head == NULL)
	{
		*head = new_n;
	}
	else
	{
		t = *head;
		/* ends loop before the last node */
		while (t->next != NULL)
			t = t->next;
		t->next = new_n;
		new_n->prev = t;
	}
	return (new_n);
}
