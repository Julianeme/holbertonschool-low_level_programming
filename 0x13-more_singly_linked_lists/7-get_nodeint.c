#include "lists.h"

/**
 * get_nodeint_at_index - returns the data of the nth node of
 * a listint_t linked list
 * @head: a double pointer to the head of the linked list
 * @index: requested node
 * Return: the requested node's data
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = head;
	while (i <= index)
	{
		new = new->next;
		if (!new)
			return (NULL);
		i++;
	}
return (new);
}
