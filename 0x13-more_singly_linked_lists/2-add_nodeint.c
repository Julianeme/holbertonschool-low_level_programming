#include "lists.h"

/**
 * add_nodeint - adds a node at the beggining of a linked list
 * @head: a double pointer to the head of the linked list
 * @n: int to be stored in the new node
 * Return: the address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
