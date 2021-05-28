#include "hash_tables.h"

/**
 * add_node_begin - add new node at the beginning of the linked list
 * @h: pointer to the head of a list (where the node is added)
 * @key: one component of the node (pair key/value)
 * @value: other component of the node (pair key/value)
 * Return: pointer to new node or new element
 */
hash_node_t *add_node_begin(hash_node_t *h, const char *key, const char *value)
{
	hash_node_t *new_node_begin = NULL;

	new_node_begin = malloc(sizeof(hash_node_t));
	if (new_node_begin == NULL)
		return (NULL);
	new_node_begin->key = strdup(key);
	if (value != NULL)
		new_node_begin->value = strdup(value);
	new_node_begin->next = h; /*array filling head of the linked list*/
	h = new_node_begin;
	return (h);
}


/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: one component of the new element (pair key/value)
 * @value: other component of the new element, associated of the key
 * Return: 1 if it succeeded (add new element) or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr_new_node = NULL;
	unsigned long int index = 0, j = 0;

	/*key can not be an empty string*/
	if (strlen(key) == 0)
		return (0);
	if (ht == NULL || key == NULL)
		return (0);
	/*compute index (hash value of key)*/
	index = key_index((const unsigned char *)key, ht->size);

	ptr_new_node = ht->array[index];
	/*update an element, its value*/
	for (; ptr_new_node != NULL; j++)
	{
		if (strcmp(ptr_new_node->key, key) == 0)
		{
			free(ptr_new_node->value);
			ptr_new_node->value = strdup(value);
			return (1);
		}
		ptr_new_node = ptr_new_node->next;
	}

	/* add new node a beginning list = resolve possible colision*/
	ptr_new_node = add_node_begin(ht->array[index], key, value);
	if (ptr_new_node == NULL)
		return (0);
	ht->array[index] = ptr_new_node;
	return (1);
}
