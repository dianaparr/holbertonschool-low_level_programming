#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a linked list
 *@head: pointer to the list
 *@index: node index
 *Return: data in the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;

	if (head == NULL)
		return (NULL);
	node = 0;
	while (head != NULL)
	{
		/* match with the node to be returned */
		if (node == index)
			return (head);
		node++;
		/* scroll through the list until it ends */
		head = head->next;
	}
	return (NULL);
}
