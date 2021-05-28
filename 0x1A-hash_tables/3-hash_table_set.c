#include "hash_tables.h"

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
    
    new_element = malloc(sizeof(hash_node_t));
    if (new_element == NULL)
        return (NULL);
    new_element->key = strdup(key);
    new_element->value = strdup(value);
    
}