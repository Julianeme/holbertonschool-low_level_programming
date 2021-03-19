#include "lists.h"

/**
 * list_len -  returns the number of nodes in a liked list
 * @h: a pointer to the element of the list
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	int nod_count = 0;

	while (h != NULL)
	{
		h = h->next;
		nod_count++;
	}
return (nod_count);
}
