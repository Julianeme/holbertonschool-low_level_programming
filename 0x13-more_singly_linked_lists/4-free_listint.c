#include "lists.h"

/**
 * free_listint -  frees the memory allocated for a linked list
 * @head: a pointer to start of the element of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
