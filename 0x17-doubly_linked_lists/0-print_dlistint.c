#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer list.
 * Return: nodes numbers .
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *nd = h;
	size_t x = 0;

	while (nd)
	{
		printf("%i\n", nd->n);
		x++;
		nd = nd->next;
	}

	return (x);
}
