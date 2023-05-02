#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node in the linked list
 * @head: pointer to the first node in the linked list
 * @idx: the new node added index
 * @n: data to put in the new node
 *
 * Return: pointer to the new node or 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (0);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp != 0 && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
