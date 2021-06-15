#include "hash_tables.h"

/**
 * key_index - gives the index in the array of a key
 * @key: a component of the hash table or only the key
 * @size: size of the array
 * Return: the index where the key/value pair is stored
 *         in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;
	/*calculate the hash value of 'key'*/
	unsigned long int hash = hash_djb2(key);

	index = hash % size;
	return (index);
}
