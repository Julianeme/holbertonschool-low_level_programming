#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at the give position of
 * a listint_t linked list
 * @head: a double pointer to the head of the linked list
 * @index: temp node insertion position
 * Return: 1 o a succes, -1 otherwishe
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *prev = *head;

	if (*head == NULL)
		return (-1);
		else if (index == 1)
		{
			*head = current->next;
			free(current);
			current = NULL;
			return (1);
		}
			else
			{
				while (index != 1)
				{
					prev = current;
					current = current->next;
					index--;
				}
				prev->next = current->next;
				free(current);
				current = NULL;
			}
return (1);
}
