#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: a pointer to the hashtable
 * @key: a pointer to the key of the element to be stored
 * Return: the value associated to the key or NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;

	if (!ht || !key || !ht->array)
		return (0);
	index = hash_djb2((const unsigned char *) key) % ht->size;
	if (index < (ht->size))
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	free(temp);
	return (NULL);
}
