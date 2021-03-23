#include "lists.h"

/**
 * free_listint2 -  frees the memory allocated for a linked list
 * @head: a pointer to start of the element of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

if (!*head)
	return;
while (*head)
{
	temp = (*head)->next;
	free(*head);
	*head = temp;
}
}
