#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be print
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *ptr_temp = NULL;
    unsigned long int i = 0, j = 0;

    if (ht == NULL)
        return;
    if (ht != NULL)
    {
        for (; i < ht->size; i++)
        {
            ptr_temp = ht->array[i]; /*recorre diferentes posiciones del array*/
            for (; ptr_temp != NULL; j++)
            {
                printf("%s: %s\n", ptr_temp->key, ptr_temp->value);
                ptr_temp = ptr_temp->next;
            }
        } 
    }
}
