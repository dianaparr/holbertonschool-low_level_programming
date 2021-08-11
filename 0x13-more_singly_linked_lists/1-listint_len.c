#include "lists.h"

/**
 *listint_len - function that returns the number of elements
 *@h: pointer to the list to print
 *Return: size_t of the list
 */
size_t listint_len(const listint_t *h)
{
	/* counter number elements of type unsigned int */
	unsigned int counter = 0;

	/* if list empty...*/
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		/* until h is the last node */
		h = h->next;
		counter++;
	}
	return (counter);
}
