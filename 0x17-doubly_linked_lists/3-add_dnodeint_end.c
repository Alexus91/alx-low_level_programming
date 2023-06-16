#include "lists.h"
/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: first element of the list pointer
 * @n: integer to set new node
 * Return: new alement adress or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_ele, *a = *head;

	new_ele = malloc(sizeof(dlistint_t));
	if (new_ele == NULL)
		return (NULL);
	new_ele->n = n;
	new_ele->next = NULL;

	if (a)
	{
		while (a->next)
			a = a->next;
		new_ele->prev = a;
		a->next = new_ele;
	}
	else
	{
		*head = new_ele;
		new_ele->prev = NULL;
	}

	return (new_ele);
}
