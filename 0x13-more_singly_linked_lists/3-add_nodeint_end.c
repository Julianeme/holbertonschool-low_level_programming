#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: a double pointer to the head of the linked list
 * @n: int to be stored in new node
 * Return: the address to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;
	
	if (*head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		*head = new;
		new->n = n;
		new->next = NULL;
	}
	else
	{
		last = malloc(sizeof(listint_t));
		if (!last)
			return (NULL);
		last->n = n;
		last->next = NULL;
		while (new->next)
		{
			new = new->next;
		}
		new->next = last;
	}
return (*head);
}
