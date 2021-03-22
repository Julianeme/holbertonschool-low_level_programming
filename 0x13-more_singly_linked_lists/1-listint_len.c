#include "lists.h"
#include <stdio.h>

/**
 * listint_len -  counts the number of elements in a linked list
 * @h: a pointer to the element of the list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int nod_count = 0;

	while (h != NULL)
	{
		h = h->next;
		nod_count++;
	}
return (nod_count);
}
