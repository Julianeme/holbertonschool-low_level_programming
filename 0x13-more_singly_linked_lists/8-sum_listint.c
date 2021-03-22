#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: a pointer to the head of the linked list
 * Return: returns the sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *new;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->next = head;
	while (new->next)
	{
		new = new->next;
		sum += new->n;
	}
return (sum);
}
