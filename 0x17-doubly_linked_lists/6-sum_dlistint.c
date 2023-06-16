#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of the list.
 * @head: list pointer
 * Return:  sum of all data in the list but 0 if is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nd = head;
	int s = 0;

	while (nd)
	{
		s += nd->n;
		nd = nd->next;
	}

	return (s);
}
