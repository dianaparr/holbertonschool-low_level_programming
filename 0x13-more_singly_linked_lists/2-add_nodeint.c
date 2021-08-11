#include "lists.h"
#include <string.h>

/**
 *add_nodeint - adds a new node at the beginning of a list
 *@head: pointer to a pointer to the head of a list
 *@n: const integer to be added to the list_t list
 *Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t)); /* allocated and check memory */
	if (new_n == NULL)
		return (NULL);
	/* new node in data (type const int) */
	new_n->n = n;
	/* new node as head */
	new_n->next = *head;
	*head = new_n; /* head assignment by new node */
	return (*head);
}
