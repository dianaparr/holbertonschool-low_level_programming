#include "lists.h"
#include <string.h>

/**
 *add_node_end - adds a new node at the end of a list
 *@head: pointer to a pointer to the head of a list
 *@str: string to be added to the list_t list
 *Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n, *last_n;
	unsigned int len = 0;

	while (str[len] != '\0')   /* lenght str */
	{
		len++;
	}
	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)   /* check memory allocated */
		return (NULL);
	new_n->str = strdup(str);   /* str duplication */
	new_n->len = len;
	new_n->next = NULL; /* new_n will be the last node */
	if (*head == NULL)
	{
		*head = new_n;
	}
	else
	{
		last_n = *head;
		while (last_n->next != NULL)
		{
			last_n = last_n->next;
		}
		last_n->next = new_n;  /* tail assignment by new node */
	}
	return (*head);
}
