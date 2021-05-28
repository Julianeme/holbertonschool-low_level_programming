#include "hash_tables.h"

/**
 * hash_table_create - a hash table
 * @size: The size of the array
 * Return: a hash table with an array of size: @size
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *h_table = NULL;

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);
	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!h_table->array)
	{
		free(h_table);
		return (NULL);
	}
	while (i < size)
	{
		h_table->array[i] = NULL;
		i++;
	}
	return (h_table);
}
