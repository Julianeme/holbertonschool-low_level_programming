#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: a pointer to the hashtable
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int c = 0;
	hash_node_t *temp = NULL;

	if (!ht || !ht->array)
		return;

	printf("{");
	if (!ht)
	{
		printf("}\n");
		return;
	}
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (temp->key)
			{
				if (c == 1)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
			}
			temp = temp->next;
			c = 1;
		}
		i++;
	}
	printf("}\n");
	free(temp);
}
