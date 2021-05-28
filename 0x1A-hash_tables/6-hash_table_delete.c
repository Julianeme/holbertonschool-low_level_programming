#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: a pointer to the hashtable
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;


	while (i < ht->size)
	{
		while(ht->array[i])
		{
				temp = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = temp;
		}
		i++;
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
