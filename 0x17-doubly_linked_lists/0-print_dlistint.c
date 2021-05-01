#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint -  prints all the elements of a doubly linked list.
 * @h: a pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nod_count = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (!(h->n))
		{
			printf("(nil)\n");
			h = h->next;
			nod_count++;
		}
		else
		{
			printf("%i\n", h->n);
			h = h->next;
			nod_count++;
		}
	}
	return (nod_count);
}
