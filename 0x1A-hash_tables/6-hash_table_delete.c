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

	if (!ht)
	{
		while (i < ht->size)
		{
			free(ht->array[i]);
			i++;
		}
		free(ht->array);
		free(ht);
		return;
	}
	while (i < ht->size)
	{
		if (!ht->array[i])
		{
			free(ht->array[i]);
		}
		else
		{
			temp = ht->array[i]->next;
			while (ht->array[i])
			{
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = temp;
				if (ht->array[i]->next)
					temp = ht->array[i]->next;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
