#include "hash_tables.h"

/**
 * key_index - calculates the index of a value
 * @size: the size of the hash table
 * @key: a pointer to the key of the element to be stored
 * Return: the index of a element
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
