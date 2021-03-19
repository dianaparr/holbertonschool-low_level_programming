#include "lists.h"

/**
 *print_list - function that print a list
 *@h: pointer to the list to print
 *Return: size_t of the list
 */

size_t print_list(const list_t *h)
{
	unsigned int counter_elem = 0; /* count number elements */

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next; /* until h is the last node */
		counter_elem++;
	}
	return (counter_elem);
}
