#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: new hash table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL; /* array of size size*/
	unsigned long int index = 0;

	/*allocated memory*/
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(size * sizeof(hash_node_t *));
	if (new_table->array == NULL)
		return (NULL);
	for (; index < size; index++)
	{
		new_table->array[index] = NULL; /*head in each position of the array*/
	}
	return (new_table);
}
