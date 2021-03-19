#include "lists.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_list - function that print a list
 *@h: pointer to the list to print
 *Return: size_t of the list
 */

size_t print_list(const list_t *h)
{
	/* count number elements */
	int c_elemt = 0;

	/* data empty */
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		/* until h is the last node */
		h = h->next;
		c_elemt++;
	}
	return (c_elemt);
}
