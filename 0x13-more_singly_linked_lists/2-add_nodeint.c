#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: first node pointer
 * @n: data to put in the new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	while (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
