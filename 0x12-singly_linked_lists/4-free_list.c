#include "lists.h"

/**
 * free_list -  frees the memory allocated for a linked list
 * @head: a pointer to start of the element of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
