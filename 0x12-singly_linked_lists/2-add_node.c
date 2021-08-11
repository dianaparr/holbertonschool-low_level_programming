#include "lists.h"
#include <string.h>

/**
 *add_node - adds a new node at the beginning of a list
 *@head: pointer to a pointer to the head of a list
 *@str: string to be added to the list_t list
 *Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;
	unsigned int len = 0;

	while (str[len] != '\0') /* lenght str */
	{
		len++;
	}
	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)   /* check memory allocated */
		return (NULL);
	new_n->str = strdup(str);   /* str duplication */
	new_n->len = len;
	if (*head == NULL)
	{
		*head = new_n;
	}
	else
	{
		new_n->next = *head;
		*head = new_n;  /* head assignment by new node */
	}
	return (new_n);
}
