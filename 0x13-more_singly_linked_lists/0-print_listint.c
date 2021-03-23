#include "lists.h"

/**
 *print_listint - function that print a list
 *@h: pointer to the list to print
 *Return: size_t of the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		/* print a list for integers */
		printf("%d\n", h->n);
		/* print linked list form the given node */
		h = h->next;
		counter++;
	}
	return (counter);
}
