#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *ptr_temp = NULL;
    unsigned long int i = 0, j = 0;

	if (ht == NULL)
		return;
	if (ht != NULL)
	{
		for (; i < ht->size; i++)
		{
			ptr_temp = ht->array[i];
            for (; ptr_temp != NULL; j++)
            {
                ptr_temp = ptr_temp->next;
                free(ptr_temp->key);
                free(ptr_temp->value);
                free(ptr_temp);
            }
        }
        free(ht->array);
        free(ht);
    }
}
