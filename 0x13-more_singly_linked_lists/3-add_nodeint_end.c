#include "lists.h"
#include <string.h>

/**
 *add_nodeint_end - adds a new node at the end of a list
 *@head: pointer to a pointer to the head of a list
 *@n: const integer to be added to the list_t list
 *Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *last_n; /* last_n is temporal node */

	new_n = malloc(sizeof(listint_t)); /* allocate and check memory */
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL; /* new node will be the last node */
	/* condition: if *head is empty */
	if (*head == NULL)
		*head = new_n;
	else
	{
		last_n = *head;
		/* traverse till the last node (last_n) */
		while (last_n->next != NULL)
		{
			last_n = last_n->next;
		}
		/* tail assignment by new node */
		last_n->next = new_n;
	}
	return (*head);
}
