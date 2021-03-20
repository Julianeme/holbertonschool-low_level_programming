#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: a double pointer to the head of the linked list
 * @str: string to be copied
 * Return: the address to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	unsigned int i = 0;

	if (*head == NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		*head = new;
		new->str = strdup(str);
		new->next = NULL;
		while (str[i])
			i++;
		new->len = i;
	}
	else
	{
		last = malloc(sizeof(list_t));
		if (!last)
			return (NULL);
		last->str = strdup(str);
		last->next = NULL;
		i = 0;
		while (str[i])
			i++;
		last->len = i;
		while (new->next)
		{
			new = new->next;
		}
		new->next = last;
	}
return (*head);
}
