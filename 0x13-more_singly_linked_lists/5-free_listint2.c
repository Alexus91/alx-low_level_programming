#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the freed listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
