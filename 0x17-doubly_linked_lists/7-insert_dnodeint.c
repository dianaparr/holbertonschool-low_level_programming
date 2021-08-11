#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: pointer to a pointer to the head of a list
 *@idx: index of the list where the new node is added
 *@n: const integer to be added to the list_t list
 *Return: the address of the new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *temp = *h;
	unsigned int node = 0;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->prev = NULL;
	new_n->next = NULL;
	if (*h == NULL && idx == 0)
	{
		*h = new_n;
		return (new_n);
	}
	if (h == NULL || *h == NULL)
		return (NULL);
	if (idx == 0)
	{
		(*h)->prev = new_n, new_n->next = *h, *h = new_n;
		return (new_n);
	}
	while (temp->next != NULL)
	{
		if (node == (idx - 1))
		{
			new_n->prev = temp, new_n->next = temp->next,
			temp->next->prev = new_n, temp->next = new_n;
			return (new_n);
		}
		temp = temp->next;
		node++;
	}
	if ((node + 1) == idx)
	{
		new_n->prev = temp, temp->next = new_n, new_n->next = NULL;
		return (new_n);
	}
	else if (idx > node)
		return (NULL);
	return (NULL);
}
