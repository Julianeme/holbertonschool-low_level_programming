#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a temp node at the give position
 * a listint_t linked list
 * @head: a double pointer to the head of the linked list
 * @idx: temp node insertion position
 * @n: the int value stored in the node
 * Return: the address of the temp node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t **temp, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	*temp = malloc(sizeof(listint_t));
	if (*temp == NULL)
		return (NULL);
	*temp = *head;
	(*temp)->n = n;

	if (idx == 0)
	{
		newnode->next = *temp;
		*head = newnode;
		return (newnode);
	}
	else
	{
		while (i < (idx - 1))
		{
			if (i == idx - 1)
			{
			newnode->next = (*temp)->next;
			newnode->n = n;
			(*temp)->next = newnode;
			return (newnode);
			}
			*temp = (*temp)->next;
			i++;
		}
	}
	return (NULL);
}
