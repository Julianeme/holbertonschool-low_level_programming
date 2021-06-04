#include "hash_tables.h"

/**
 * shash_table_create - a PHP like hash table
 * @size: The size of the array
 * Return: a hash table with an array of size: @size
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *sh_table = NULL;

	sh_table = malloc(sizeof(shash_table_t));
	if (!sh_table)
		return (NULL);
	sh_table->size = size;
	sh_table->shead = NULL;
	sh_table->stail = NULL;
	sh_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!sh_table->array)
	{
		free(sh_table);
		return (NULL);
	}
	while (i < size)
	{
		sh_table->array[i] = NULL;
		i++;
	}
	return (sh_table);
}

/**
 * check_existing_key - checks for an already existing key in a shash_table_t
 * and updates its value if found
 * @ht: a pointer to the hashtable
 * @key: a pointer to the key of the element to be stored
 * @value: a pointer to the value of the elemento to be stored
 * @index: index of the new node
 * @new: the newly created node
 * Return: 1 if success, 0 otherwise
 */

int check_existing_key(shash_table_t *ht, shash_node_t *new, const char *key,
					   const char *value, unsigned long int index)
{
	shash_node_t *temp = NULL;

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			free(new->key);
			free(new->value);
			free(new);
			return (1);
		}
	temp = temp->next;
	}
	return (0);
}

/**
 * shash_table_set - adds a note to a shash_table_t
 * and updates its value if found
 * @ht: a pointer to the hashtable
 * @key: a pointer to the key of the element to be stored
 * @value: a pointer to the value of the element to be stored
 * Return: 1 if success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *new = NULL;

	if (!ht || !key || !ht->array || ht->size <= 0 || !value)
		return (0);
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
		return (0);
	new->next = NULL;
	index = hash_djb2((const unsigned char *) key) % ht->size;
	if (check_existing_key(ht, new, key, value, index) == 1)
		return (1);
	ht->array[index] = new;
	if (!ht->shead)
	{
		ht->shead = new;
		ht->stail = new;
		printf("SHEAD es: %s ------\n", new->key);
		return (1);
	}
	/*temp = ht->shead;
	while (temp->next)
	{
		printf("SHEAD es: %s ------\n", temp->key);
		if(new->key > temp->key && (new->key < temp->snext->key || !temp->snext))
		{
			printf("entro a la comparacion-----\n");
			new->snext = temp->snext;
			if(temp->snext)
				temp->snext->sprev = new;
			new->sprev = temp;
			new->snext = temp->snext;
			temp->snext = new;
			if (!new->snext)
				ht->stail = new;
			if (!temp->sprev)
				ht->shead = new;
			printf("TAIL ES es: %s ------\n", ht->stail->key);
			printf("HEAD ES es: %s ------\n", ht->shead->key);
			return(1);
		}
		else
			temp = temp->snext;
	}*/
	//printf("TAIL ES es: %s ------\n", ht->stail->key);
	//printf("TAIL ES es: %s ------\n", ht->stail->key);
	return (1);
}

/**
 * shash_table_get - function that retrieves a value associated with a key
 * @ht: a pointer to the hashtable
 * @key: a pointer to the key of the element to be stored
 * Return: the value associated to the key or NULL otherwise
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *temp = NULL;

	if (!ht)
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;
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

/**
 * shash_table_print - function that prints a shash table
 * @ht: a pointer to the shashtable
 * Return: nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0;
	int c = 0;
	shash_node_t *temp = NULL;

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
			temp = temp->snext;
			c = 1;
		}
		i++;
	}
	printf("}\n");
	free(temp);
}

/**
 * shash_table_print_rev - function that prints a shash table backwards
 * @ht: a pointer to the shashtable
 * Return: nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i = 0;
	int c = 0;
	shash_node_t *temp = NULL;

	if (!ht || !ht->array)
		return;

	printf("{");
	if (!ht)
	{
		printf("}\n");
		return;
	}
	temp = ht->stail;
	while (temp)
	{
		if (c == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
		c = 1;
	}
	i++;
	printf("}\n");
	free(temp);
}

/**
 * shash_table_delete - function that deletes a shash table
 * @ht: a pointer to the shashtable
 * Return: nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *temp = NULL;

	while (i < ht->size)
	{
		while (ht->array[i])
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
	free(ht);
}
