#include "lists.h"

/**
 *print_dlistint - function that print a doubly linked list
 *@h: pointer to the list to print
 *Return: size_t of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int size;

	/* check if the list is empty */
	if (h == NULL)
		return (0);
	size = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
