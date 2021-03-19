#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: a pointer to the element of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int nod_count = 0;

	while (h != NULL)
	{
		if (!(h->str))
			_printf("[0] (nill)\n");
		else
		{
		_printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		nod_count++;
		}
	}
return (nod_count);
}
