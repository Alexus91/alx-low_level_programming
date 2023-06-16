#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * @h: list pointer
 * @idx: position of added the node.
 * @n: new node data.
 * Return: the new node adress, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nd = *h, *new;
	unsigned int i, t = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (*h);
	}


	i = idx - 1;
	while (nd && t != i)
	{
		t++;
		nd = nd->next;
	}

	if (t == i && nd)
	{
		new->prev = nd;
		new->next = nd->next;
		if (nd->next)
			nd->next->prev = new;
		nd->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
