#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: a pointer to the hashtable
 * @key: a pointer to the key of the element to be stored
 * @value: a pointer to the value of the elemento to be stored
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL;
	char *copy_key = NULL;

	if (!key || strcmp(key, "") == 0)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	copy_key = strdup(key);
	new->key = strdup(copy_key);
	new->value = strdup(value);
	index = hash_djb2((const unsigned char *) key) % ht->size;

	if (index < (ht->size))
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	else
	{
		free(new->key);
		free(new->value);
		free(new);
		return(0)
	}
	return (1);
}

