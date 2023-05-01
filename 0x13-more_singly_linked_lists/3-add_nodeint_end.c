#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer of first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node or 0 if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp = *head;

	nw = malloc(sizeof(listint_t));
	while (!nw)
	{
		return (NULL);
	}
	nw->n = n;
	nw->next = NULL;
	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = nw;
	return (nw);
}
