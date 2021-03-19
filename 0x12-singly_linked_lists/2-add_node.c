#include "lists.h"

/**
 * add_node - adds a node at the beggining of a linked list
 * @head: a double pointer to the head of the linked list
 * @str: string to be copied
 * Return: the address to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t new;

	new = malloc(size of(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	while (str[i])
		i++;
	new->len = i;
	new->next = *head;
	head = new;
	return (*head);
}
