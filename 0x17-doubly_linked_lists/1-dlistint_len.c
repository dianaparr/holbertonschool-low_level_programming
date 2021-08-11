#include "lists.h"

/**
 *dlistint_len - function that returns the number of elements
 *@h: pointer to the list to print
 *Return: size_t of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int size;

	if (h == NULL)
		return (0);
	size = 0;
	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
