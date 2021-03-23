#include "lists.h"
#include <string.h>

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to a pointer to the head of a list
 *@idx: index of the list where the new node is added
 *@n: const integer to be added to the list_t list
 *Return: the address of the new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr_temp = *head;
	listint_t *new_n;
	unsigned int counter = 0;

	new_n = malloc(sizeof(listint_t)); /* allocated and check memory */
	if (new_n == NULL)
		return (NULL);
	/* new node in data (type const int) */
	new_n->n = n;
	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	/* traverse to the n-1 position */
	for (; counter < (idx - 1); counter++)
	{
		if (ptr_temp == NULL)
			return (NULL);
		ptr_temp = ptr_temp->next;
	}
	/* the new node must point to the same node pointed to by the n-1 node */
	new_n->next = ptr_temp->next;
	ptr_temp->next = new_n; /* n-1 node now points to the new node */
	return (new_n);
}
