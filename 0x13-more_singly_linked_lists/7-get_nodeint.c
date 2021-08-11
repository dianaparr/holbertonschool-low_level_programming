#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a linked list
 *@head: pointer to the list
 *@index: node index
 *Return: data in the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head != NULL)
	{
		if (counter == index)
			return (head); /* return node current */
		counter++;
		head = head->next; /* change node current for the next */
	}
	return (NULL); /* if node does not exist */
}
