#include "lists.h"

/**
 * pop_listint - adeletes the head node of a listint_t linked list,
 * and returns the head node’s datat
 * @head: a double pointer to the head of the linked list
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int nodedata = 0;

	if (*head)
	{
		nodedata = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	else
		return (0);
return (nodedata);
}
