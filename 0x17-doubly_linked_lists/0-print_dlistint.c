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
	dlistint_t *temp = *h;

	if (!h)
		return (0);
	while (temp != NULL)
	{
		if (!(temp->n))
		{
			printf("0 (nil)\n");
			temp = temp->next;
			nod_count++;
		}
		else
		{
			printf("%i\n", temp->n);
			temp = temp->next;
			nod_count++;
		}
	}
return (nod_count);
}
