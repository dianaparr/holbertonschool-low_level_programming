#include "hash_tables.h"

/**
 * hash_table_get - 
 * @ht: 
 * @key:  
 * Return: 
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *ptr_temp = NULL;    /*point to the different positions in the array*/
    unsigned long int index = 0;
    long unsigned int i = 0;
    
    index = key_index((const unsigned char *)key, ht->size);
    ptr_temp = ht->array[index];

    for (; ptr_temp != NULL; i++)
    {
        /*compare positions with the key*/
        if (strcmp(ptr_temp->key, key) == 0)
            return (ptr_temp->value);
        ptr_temp = ptr_temp->next;
    }
    return (NULL);
}