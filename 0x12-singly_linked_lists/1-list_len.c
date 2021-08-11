#include "lists.h"

/**
 *list_len - function that returns the number of elements
 *@h: pointer to the list to print
 *Return: size_t of the list
 */

size_t list_len(const list_t *h)
{
	unsigned int counter_elem = 0; /* count number elements */

	while (h != NULL)
	{
		h = h->next; /* until h is the last node */
		counter_elem++;
	}
	return (counter_elem);
}
