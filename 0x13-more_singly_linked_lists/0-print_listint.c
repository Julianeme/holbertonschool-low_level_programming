#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a list_t list
 * @h: a pointer to the element of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nod_count = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		printf("%i\n", (h->n));
		h = h->next;
		nod_count++;
	}
return (nod_count);
}
