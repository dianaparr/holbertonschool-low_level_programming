#include "hash_tables.h"

/**
 * hash_table_create - 
 * @size: 
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table = NULL; /* array of size size*/
    unsigned long int index = 0;

    /*allocated memory*/
    new_table = malloc(size * sizeof(hash_table_t*));
    if (new_table == NULL)
        return (NULL);

    for (; index < new_table->size; index++)
    {
        new_table->array[index] = NULL; /*head in each position of the array*/
    }
    return (new_table);
}
