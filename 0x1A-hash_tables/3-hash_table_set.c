#include "hash_tables.h"

/**
 * add_node_begin - 
 * @head: 
 * @key: 
 * @size: 
 * Return: 
 */
hash_node_t *add_node_begin(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *new_node_begin = NULL;

	new_node_begin = malloc(sizeof(hash_node_t));
    if (new_node_begin == NULL)
        return (NULL);
    new_node_begin->key = strdup(key);
    new_node_begin->value = strdup(value);
    new_node_begin->next = head;
    head = new_node_begin;
    return (head);
}


/**
 * hash_table_set - 
 * @key: 
 * @size: 
 * Return: 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_element = NULL;
    unsigned int index = 0;

    /*key can not be an empty string*/
    if (strlen(key) == 0)
        return (0);
    /*compute index (hash value of key)*/
    index = key_index((const unsigned char *)key, ht->size);
    /* add new node a beginning list = resolve colision*/
    
    
    
}